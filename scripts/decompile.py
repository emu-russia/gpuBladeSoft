import idaapi
import idautils
import idc
import os

# Force load Hex-Rays plugin for older IDA 6.x versions
plugin_name = "hexrays"
result = idaapi.load_plugin(plugin_name)

if result:
    print "[-] Plugin '%s' loaded successfully!" % plugin_name
else:
    print "[!] Failed to load plugin '%s'" % plugin_name

# Check if decompilation feature is available in idaapi
if not hasattr(idaapi, "decompile"):
    print "Error: Hex-Rays decompiler plugin could not be loaded or is not available."
else:
    print "Hex-Rays decompiler plugin initialized successfully."

    # Setup output directory paths (Python 2.6 style)
    idb_path = idc.GetIdbPath()
    idb_dir = os.path.dirname(idb_path)
    output_dir = os.path.join(idb_dir, "../decompiled")

    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    print "Saving decompiled functions to: %s" % output_dir

    def generate_disasm_line(ea):
        """
        Generate disassembly line compatible with different IDA versions.
        Returns disassembly string or None.
        """
        try:
            # Try different methods depending on IDA version
            
            # Method 1: Modern IDA API (idaapi.generate_disasm_line)
            if hasattr(idaapi, "generate_disasm_line"):
                return idaapi.generate_disasm_line(ea)
            
            # Method 2: Use GetDisasm (older API)
            elif hasattr(idc, "GetDisasm"):
                return idc.GetDisasm(ea)
            
            # Method 3: Use GetMnem (most compatible)
            elif hasattr(idc, "GetMnem") and hasattr(idc, "GetOpnd"):
                mnem = idc.GetMnem(ea)
                # Get operands
                ops = []
                for i in range(3):  # Max 3 operands
                    try:
                        op = idc.GetOpnd(ea, i)
                        if op:
                            ops.append(op)
                    except:
                        break
                
                if ops:
                    return "%s %s" % (mnem, ", ".join(ops))
                else:
                    return mnem
            
            # Method 4: Last resort - use tag_remove + GetDisasmEx
            else:
                disasm = idc.GetDisasmEx(ea, 0)
                if disasm:
                    # Remove color tags if present
                    if hasattr(idaapi, "tag_remove"):
                        return idaapi.tag_remove(disasm)
                    return disasm
                    
        except Exception, e:
            print "    [!] Error generating disassembly at 0x%X: %s" % (ea, str(e))
            return None

    def fix_stack_pointer(ea):
        """
        Attempt to fix stack pointer issues for the function at address ea.
        Returns True if fix was applied.
        """
        try:
            func = idaapi.get_func(ea)
            if not func:
                return False
            
            # Get current stack pointer value at function start
            sp_value = idc.GetSpd(ea)
            
            # If SP is positive, try to fix it by setting it to 0
            if sp_value > 0:
                print "    Attempting to fix stack pointer at 0x%X (current SP: %d)" % (ea, sp_value)
                
                # Set stack pointer to 0 at function entry
                idc.SetSpd(ea, 0)
                
                # Try to fix stack pointer throughout the function
                current_ea = func.startEA
                while current_ea < func.endEA:
                    if idc.isCode(idc.GetFlags(current_ea)):
                        current_sp = idc.GetSpd(current_ea)
                        if current_sp > 0:
                            # Adjust stack pointer to be 0 or negative
                            idc.SetSpd(current_ea, min(0, current_sp - sp_value))
                    current_ea = idc.NextHead(current_ea, func.endEA)
                
                # Force re-analysis of the function
                idc.AnalyzeArea(func.startEA, func.endEA)
                return True
        except Exception, e:
            print "    [!] Error while fixing stack pointer: %s" % str(e)
        
        return False

    def get_disassembly_listing(ea, error_msg=""):
        """Generate commented disassembly listing for function at ea."""
        disasm_lines = []
        
        func = idaapi.get_func(ea)
        if not func:
            return ["// Cannot find function at address 0x%X" % ea]
        
        func_start = func.startEA
        func_end = func.endEA
        
        # Add header
        disasm_lines.append("// " + "="*70)
        disasm_lines.append("// Function: %s" % idc.GetFunctionName(ea))
        disasm_lines.append("// Address: 0x%X - 0x%X" % (func_start, func_end))
        if error_msg:
            disasm_lines.append("// Error: %s" % error_msg)
        disasm_lines.append("// SP value at entry: %d" % idc.GetSpd(ea))
        disasm_lines.append("// " + "="*70)
        disasm_lines.append("")
        
        # Get disassembly for each instruction
        current_ea = func_start
        while current_ea < func_end:
            try:
                # Generate disassembly line using compatible function
                disasm_line = generate_disasm_line(current_ea)
                
                if disasm_line:
                    # Get instruction bytes
                    insn_len = idc.ItemSize(current_ea)
                    bytes_str = ""
                    for i in range(insn_len):
                        byte_val = idc.Byte(current_ea + i)
                        if byte_val is not None:
                            bytes_str += "%02X " % byte_val
                    bytes_str = bytes_str.strip()
                    
                    # Get SP delta if available
                    sp_delta = idc.GetSpd(current_ea)
                    
                    # Get any comments
                    comment = idc.GetCommentEx(current_ea, 0)
                    rpt_comment = idc.GetCommentEx(current_ea, 1)
                    
                    # Format the line
                    line = "// 0x%08X: %-24s %s" % (current_ea, bytes_str, disasm_line)
                    if sp_delta:
                        line += "  ; sp=%d" % sp_delta
                    disasm_lines.append(line)
                    
                    # Add comments if they exist
                    if comment:
                        disasm_lines.append("// %-68s ; %s" % ("", comment))
                    if rpt_comment:
                        disasm_lines.append("// %-68s ; (repeatable) %s" % ("", rpt_comment))
                        
                else:
                    # If disassembly generation failed
                    insn_len = idc.ItemSize(current_ea)
                    bytes_str = ""
                    for i in range(insn_len):
                        byte_val = idc.Byte(current_ea + i)
                        if byte_val is not None:
                            bytes_str += "%02X " % byte_val
                    bytes_str = bytes_str.strip()
                    
                    disasm_lines.append("// 0x%08X: %-24s [Unable to disassemble]" % (current_ea, bytes_str))
            
            except Exception, e:
                disasm_lines.append("// 0x%08X: [Error reading instruction: %s]" % (current_ea, str(e)))
            
            # Move to next instruction
            next_ea = idc.NextHead(current_ea, func_end)
            if next_ea == current_ea or next_ea == 0xFFFFFFFF:
                break
            current_ea = next_ea
        
        disasm_lines.append("")
        disasm_lines.append("// " + "="*70)
        disasm_lines.append("// End of disassembly for %s" % idc.GetFunctionName(ea))
        
        return disasm_lines

    # Get total number of functions for progress counter
    all_functions = list(idautils.Functions())
    total_functions = len(all_functions)
    current_function = 0
    failed_functions = []
    fixed_functions = []

    # Iterate through all functions in the binary
    for ea in all_functions:
        current_function += 1
        func_name = idc.GetFunctionName(ea)
        if not func_name:
            continue

        # DEBUG
        if current_function == 200: break

        # Sanitize the function name for the file system
        safe_chars = [c for c in func_name if c.isalnum() or c == '_']
        safe_func_name = "".join(safe_chars).strip()
        
        # Format file name using Python 2.6 string formatting
        filename = "%s.c" % (safe_func_name)
        out_file = os.path.join(output_dir, filename)
        
        decompiled_successfully = False
        error_message = ""
        
        try:
            # First attempt: try to decompile normally
            cfunc = idaapi.decompile(ea)
            
            if cfunc:
                decompiled_successfully = True
                f = open(out_file, "w")
                f.write(str(cfunc))
                f.close()
                print "[%d / %d] Decompiled: %s -> %s" % (current_function, total_functions, func_name, filename)
            
        except Exception, e:
            error_message = str(e)
            print "[%d / %d] First attempt failed for %s: %s" % (current_function, total_functions, func_name, error_message)
        
        # If first attempt failed, try to fix stack pointer and decompile again
        if not decompiled_successfully:
            # Check if it's a stack pointer issue
            sp_value = idc.GetSpd(ea)
            if sp_value > 0 or "positive sp value" in error_message.lower():
                print "[%d / %d] Stack pointer issue detected for %s (SP=%d), attempting fix..." % (current_function, total_functions, func_name, sp_value)
                
                if fix_stack_pointer(ea):
                    fixed_functions.append(func_name)
                    # Try decompilation again after fixing
                    try:
                        idc.Wait()  # Wait for autoanalysis to complete
                        cfunc = idaapi.decompile(ea)
                        if cfunc:
                            decompiled_successfully = True
                            f = open(out_file, "w")
                            f.write(str(cfunc))
                            f.close()
                            print "[%d / %d] Successfully decompiled after SP fix: %s -> %s" % (current_function, total_functions, func_name, filename)
                    except Exception, e:
                        error_message = str(e)
                        print "[%d / %d] Decompilation still failed after SP fix: %s" % (current_function, total_functions, error_message)
                else:
                    print "[%d / %d] Could not fix stack pointer for %s" % (current_function, total_functions, func_name)
        
        # If still failed, dump disassembly
        if not decompiled_successfully:
            failed_functions.append((func_name, error_message))
            print "[%d / %d] Dumping disassembly for: %s" % (current_function, total_functions, func_name)
            
            try:
                f = open(out_file, "w")
                
                # Write decompilation failure header in C style
                f.write("/*\n")
                f.write(" * WARNING: Hex-Rays decompilation failed for this function\n")
                f.write(" * Function: %s\n" % func_name)
                f.write(" * Address: 0x%X\n" % ea)
                if error_message:
                    f.write(" * Error: %s\n" % error_message)
                f.write(" * Stack pointer at entry: %d\n" % idc.GetSpd(ea))
                f.write(" * \n")
                f.write(" * The following is a disassembly listing for manual analysis.\n")
                f.write(" * Each instruction is commented with // for C compatibility.\n")
                f.write(" */\n\n")
                
                # Write disassembly
                disasm_lines = get_disassembly_listing(ea, error_message)
                for line in disasm_lines:
                    f.write(line + "\n")
                
                f.close()
                
            except Exception, write_e:
                print "[!] Critical error writing disassembly for %s: %s" % (func_name, str(write_e))

    # Print summary
    print "\n" + "="*70
    print "BATCH DECOMPILATION SUMMARY"
    print "="*70
    print "Total functions processed: %d" % total_functions
    print "Successfully decompiled: %d" % (total_functions - len(failed_functions))
    print "Failed to decompile: %d" % len(failed_functions)
    print "Functions with stack fixes applied: %d" % len(fixed_functions)
    
    if failed_functions:
        print "\nFailed functions list:"
        for func_name, error in failed_functions:
            print "  - %s: %s" % (func_name, error)
    
    if fixed_functions:
        print "\nFunctions with applied stack fixes:"
        for func_name in fixed_functions:
            print "  - %s" % func_name
    
    print "="*70
    print "Output directory: %s" % output_dir
    print "Batch decompilation finished."