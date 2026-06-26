#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
IDA Pro 6.1 HexRays Decompilation Script
Extracts decompiled functions from GPU plugin DLL

Version: 1.0
Target: gpuBladeSoft 1.64 (PSEmuPro GPU plugin)
"""

import os
import sys
import idaapi
import idc
import idautils

# Configuration
OUTPUT_DIR = "decompiled"
FUNCTIONS_DIR = os.path.join(OUTPUT_DIR, "functions")
MODULES_DIR = os.path.join(OUTPUT_DIR, "modules")
LOGS_DIR = os.path.join(OUTPUT_DIR, "logs")

# Function name prefixes for module identification
MODULE_PREFIXES = {
    "GPUinit": "core",
    "GPUshutdown": "core",
    "GPUopen": "interface",
    "GPUclose": "interface",
    "GPUwriteStatus": "registers",
    "GPUreadStatus": "registers",
    "GPUwriteData": "registers",
    "GPUreadData": "registers",
    "GPUdma": "dma",
    "GPUvblank": "vblank",
    "GPUgetScreen": "screen",
    "GPUdisplayText": "display",
    "GPUgetMemory": "memory",
    "GPUgetMode": "mode",
    "GPUsetMode": "mode",
    "GPUgetDefMode": "mode",
    "GPUsetDefMode": "mode",
    "GPUsetExtra": "extra",
    "GPUgetExtra": "extra",
    "GPUupdateDisplay": "display",
    "GPUsync": "sync",
    "GPUloadImage": "image",
    "GPUstoreImage": "image",
    "GPUdrawImage": "image",
    "GPUdrawPoly": "poly",
    "GPUdrawLine": "line",
    "GPUdrawSprite": "sprite",
    "GPUdrawSprite16": "sprite",
    "GPUdrawSprite32": "sprite",
    "GPUsetVDPregisters": "vdp",
    "GPUgetVDPregisters": "vdp",
    "GPUsetLCD": "lcd",
    "GPUgetLCD": "lcd",
    "GPUsetBrightness": "brightness",
    "GPUsetGamma": "gamma",
    "GPUsetContrast": "contrast",
    "GPUsetAlpha": "alpha",
    "GPUsetBlending": "blending",
    "GPUsetTexture": "texture",
    "GPUgetTexture": "texture",
    "GPUsetFilter": "filter",
    "GPUsetInterlace": "interlace",
    "GPUsetResolution": "resolution",
    "GPUsetAspectRatio": "aspect",
    "GPUgetAspectRatio": "aspect",
    "GPUsetWindow": "window",
    "GPUgetWindow": "window",
    "GPUsetClip": "clip",
    "GPUgetClip": "clip",
    "GPUsetPalette": "palette",
    "GPUgetPalette": "palette",
    "GPUsetMode": "mode",
    "GPUgetMode": "mode",
    "GPUgetDefMode": "mode",
    "GPUsetDefMode": "mode",
    "GPUsetExtra": "extra",
    "GPUgetExtra": "extra",
    "GPUsetHotkey": "hotkey",
    "GPUgetHotkey": "hotkey",
    "GPUsetConfig": "config",
    "GPUgetConfig": "config",
    "GPUsaveState": "state",
    "GPUloadState": "state",
    "GPUgetScreenShot": "screenshot",
    "GPUsetScreenShot": "screenshot",
    "GPUsetThreadCount": "thread",
    "GPUgetThreadCount": "thread",
    "GPUsetInternalRes": "internal",
    "GPUgetInternalRes": "internal",
    "GPUsetMultiThread": "multithread",
    "GPUgetMultiThread": "multithread",
    # Add more as discovered
}

def ensure_directories():
    """Create output directories if they don't exist."""
    for directory in [FUNCTIONS_DIR, MODULES_DIR, LOGS_DIR]:
        if not os.path.exists(directory):
            os.makedirs(directory)
            print("Created directory: {}".format(directory))

def get_function_name(ea):
    """Get function name at address."""
    name = idc.GetFunctionName(ea)
    if not name:
        name = "sub_{:x}".format(ea)
    return name

def get_module_prefix(func_name):
    """Determine module from function name."""
    for prefix, module in MODULE_PREFIXES.items():
        if func_name.startswith(prefix):
            return module
    return "unknown"

def decompile_function(ea):
    """Decompile a single function."""
    try:
        # Get function start address
        func_start = idc.GetFunctionAttr(ea, idc.FUNCATTR_START)
        if func_start == idc.BADADDR:
            return None
        
        # Try to get HexRays decompilation
        decompiler = idaapi.get_decompiler()
        if decompiler is None:
            return None
        
        cfunc = idaapi.decompile(func_start)
        if cfunc is None:
            return None
        
        # Get decompiled code
        decompiled_code = str(cfunc)
        return decompiled_code
        
    except Exception as e:
        print("Error decompiling function at 0x{:x}: {}".format(ea, str(e)))
        return None

def extract_all_functions():
    """Extract all decompilable functions."""
    functions = []
    
    # Get all function addresses
    for func_ea in idautils.Functions():
        func_name = get_function_name(func_ea)
        
        # Skip library and stub functions
        if func_name.startswith("sub_") or func_name.startswith("j_"):
            continue
        
        # Try to decompile
        decompiled = decompile_function(func_ea)
        if decompiled:
            functions.append({
                'name': func_name,
                'address': func_ea,
                'code': decompiled
            })
    
    return functions

def sanitize_filename(name):
    """Sanitize function name for use as filename."""
    # Replace invalid characters
    safe_name = name.replace('@', '_')
    safe_name = safe_name.replace('$', '_')
    safe_name = safe_name.replace('.', '_')
    safe_name = safe_name.replace(':', '_')
    safe_name = safe_name.replace('<', '_')
    safe_name = safe_name.replace('>', '_')
    safe_name = safe_name.replace(' ', '_')
    return safe_name

def save_functions_to_files(functions):
    """Save each function to its own file."""
    count = 0
    for func in functions:
        func_name = func['name']
        code = func['code']
        
        # Sanitize filename
        safe_name = sanitize_filename(func_name)
        filename = "{}.txt".format(safe_name)
        filepath = os.path.join(FUNCTIONS_DIR, filename)
        
        # Write to file
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write("/* Function: {} */\n".format(func_name))
            f.write("/* Address: 0x{:x} */\n".format(func['address']))
            f.write("/* Module: {} */\n\n".format(get_module_prefix(func_name)))
            f.write(code)
        
        count += 1
        if count % 10 == 0:
            print("Saved {} functions...".format(count))
    
    print("Saved: {} individual function files".format(count))

def save_modules(functions):
    """Save functions organized by module."""
    modules = {}
    
    for func in functions:
        module = get_module_prefix(func['name'])
        if module not in modules:
            modules[module] = []
        modules[module].append(func)
    
    count = 0
    for module, funcs in modules.items():
        filename = "{}.txt".format(module)
        filepath = os.path.join(MODULES_DIR, filename)
        
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write("/* Module: {} */\n".format(module))
            f.write("/* Functions: {} */\n\n".format(len(funcs)))
            
            for func in funcs:
                f.write("/* Function: {} */\n".format(func['name']))
                f.write("/* Address: 0x{:x} */\n".format(func['address']))
                f.write("/* Module: {} */\n\n".format(get_module_prefix(func['name'])))
                f.write(func['code'])
                f.write("\n\n")
        
        count += 1
        print("Saved module: {} ({} functions)".format(filepath, len(funcs)))
    
    print("Saved: {} module files".format(count))

def log_statistics(functions):
    """Log decompilation statistics."""
    log_path = os.path.join(LOGS_DIR, "decompilation.log")
    
    with open(log_path, 'w', encoding='utf-8') as f:
        f.write("HexRays Decompilation Statistics\n")
        f.write("=" * 60 + "\n\n")
        f.write("Plugin: gpuBladeSoft 1.64\n")
        f.write("Date: {}\n".format(idc.get_idb_path()))
        f.write("\n")
        
        total_funcs = len(idautils.Functions())
        decompiled_funcs = len(functions)
        success_rate = (decompiled_funcs / max(1, total_funcs)) * 100
        
        f.write("Total functions found: {}\n".format(total_funcs))
        f.write("Functions decompiled: {}\n".format(decompiled_funcs))
        f.write("Decompilation success rate: {:.2f}%\n".format(success_rate))
        f.write("\n")
        
        # List all decompiled functions by module
        modules = {}
        for func in functions:
            module = get_module_prefix(func['name'])
            if module not in modules:
                modules[module] = []
            modules[module].append(func['name'])
        
        f.write("\nDecompiled Functions by Module:\n")
        f.write("-" * 60 + "\n")
        for module in sorted(modules.keys()):
            f.write("\n[{}]\n".format(module))
            for name in sorted(modules[module]):
                f.write("  - {}\n".format(name))
        
        # Log any non-decompiled functions
        f.write("\n\nNon-decompiled Functions:\n")
        f.write("-" * 60 + "\n")
        for func_ea in idautils.Functions():
            func_name = get_function_name(func_ea)
            if func_name.startswith("sub_") or func_name.startswith("j_"):
                continue
            # Check if this function was decompiled
            found = False
            for decompiled_func in functions:
                if decompiled_func['name'] == func_name:
                    found = True
                    break
            if not found:
                f.write("  - {} (0x{:x})\n".format(func_name, func_ea))
    
    print("Statistics saved: {}".format(log_path))

def main():
    """Main entry point."""
    print("=" * 60)
    print("HexRays Decompilation Script for gpuBladeSoft 1.64")
    print("=" * 60)
    
    # Ensure output directories exist
    print("\nSetting up output directories...")
    ensure_directories()
    
    # Extract all functions
    print("\nExtracting decompilable functions...")
    functions = extract_all_functions()
    
    if not functions:
        print("ERROR: No functions could be decompiled!")
        print("Possible causes:")
        print("  - HexRays decompiler not available")
        print("  - No functions found in binary")
        print("  - All functions are stubs/library functions")
        return
    
    print("Found {} decompilable functions".format(len(functions)))
    
    # Save individual function files
    print("\nSaving individual function files...")
    save_functions_to_files(functions)
    
    # Save module-based files
    print("\nSaving module-based files...")
    save_modules(functions)
    
    # Log statistics
    print("\nLogging statistics...")
    log_statistics(functions)
    
    print("\n" + "=" * 60)
    print("Decompilation complete!")
    print("=" * 60)
    print("Output directory: {}".format(OUTPUT_DIR))
    print("  - Individual functions: {}/".format(FUNCTIONS_DIR))
    print("  - Module files: {}/".format(MODULES_DIR))
    print("  - Statistics: {}/decompilation.log".format(LOGS_DIR))

# Execute main function
if __name__ == "__main__":
    main()
