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

    # Get total number of functions for progress counter
    total_functions = len(list(idautils.Functions()))
    current_function = 0

    # Iterate through all functions in the binary
    for ea in idautils.Functions():
        current_function += 1
        func_name = idc.GetFunctionName(ea)
        if not func_name:
            continue

        # Sanitize the function name for the file system
        safe_chars = [c for c in func_name if c.isalnum() or c == '_']
        safe_func_name = "".join(safe_chars).strip()
        
        # Format file name using Python 2.6 string formatting
        filename = "%s.c" % (safe_func_name)
        out_file = os.path.join(output_dir, filename)
        
        try:
            # Decompile the function using Hex-Rays 1.5.0 API
            cfunc = idaapi.decompile(ea)
            
            f = open(out_file, "w")
            
            if cfunc:
                # Write the pseudocode text to a file
                f.write(str(cfunc))
                print "[%d / %d] Decompiled: %s -> %s" % (current_function, total_functions, func_name, filename)
            else:
                # Decompilation failed - generate commented disassembly listing
                print "[%d / %d] Decompilation failed, dumping disassembly: %s -> %s" % (current_function, total_functions, func_name, filename)
                
                # Write header with function info
                f.write("// Decompilation failed for function: %s\n" % func_name)
                f.write("// Address: 0x%X\n" % ea)
                f.write("// Disassembly listing (commented):\n")
                f.write("// " + "="*70 + "\n\n")
                
                # Get function boundaries
                func = idaapi.get_func(ea)
                if func:
                    func_start = func.startEA
                    func_end = func.endEA
                    
                    # Iterate through instructions in the function
                    current_ea = func_start
                    while current_ea < func_end:
                        # Generate disassembly line
                        disasm_line = idc.GenerateDisasmLine(current_ea, 0)
                        
                        if disasm_line:
                            # Get instruction bytes
                            insn_len = idc.ItemSize(current_ea)
                            bytes_str = ""
                            for i in range(insn_len):
                                bytes_str += "%02X " % idc.Byte(current_ea + i)
                            bytes_str = bytes_str.strip()
                            
                            # Format: // address: bytes instruction
                            f.write("// 0x%08X: %-24s %s\n" % (current_ea, bytes_str, disasm_line))
                        
                        # Move to next instruction
                        current_ea = idc.NextHead(current_ea, func_end)
                
                f.write("\n// " + "="*70 + "\n")
                f.write("// End of disassembly for function: %s\n" % func_name)
                
        except Exception, e:
            # Exception occurred - also dump disassembly
            print "[%d / %d] Exception while decompiling %s: %s - dumping disassembly" % (current_function, total_functions, func_name, str(e))
            
            try:
                f = open(out_file, "w")
                
                # Write header with error info
                f.write("// Exception during decompilation of function: %s\n" % func_name)
                f.write("// Address: 0x%X\n" % ea)
                f.write("// Error: %s\n" % str(e))
                f.write("// Disassembly listing (commented):\n")
                f.write("// " + "="*70 + "\n\n")
                
                # Get function boundaries
                func = idaapi.get_func(ea)
                if func:
                    func_start = func.startEA
                    func_end = func.endEA
                    
                    # Iterate through instructions in the function
                    current_ea = func_start
                    while current_ea < func_end:
                        # Generate disassembly line
                        disasm_line = idc.GenerateDisasmLine(current_ea, 0)
                        
                        if disasm_line:
                            # Get instruction bytes
                            insn_len = idc.ItemSize(current_ea)
                            bytes_str = ""
                            for i in range(insn_len):
                                bytes_str += "%02X " % idc.Byte(current_ea + i)
                            bytes_str = bytes_str.strip()
                            
                            # Format: // address: bytes instruction
                            f.write("// 0x%08X: %-24s %s\n" % (current_ea, bytes_str, disasm_line))
                        
                        # Move to next instruction
                        current_ea = idc.NextHead(current_ea, func_end)
                
                f.write("\n// " + "="*70 + "\n")
                f.write("// End of disassembly for function: %s\n" % func_name)
                
            except Exception, write_e:
                print "[!] Critical error writing disassembly for %s: %s" % (func_name, str(write_e))
        
        finally:
            # Ensure file is closed
            if 'f' in locals():
                f.close()

    print "Batch decompilation finished. Processed %d functions." % total_functions