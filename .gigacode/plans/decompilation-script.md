# GPU Plugin Decompilation Script

## Overview
This script is designed to automatically extract decompiled HexRays output from IDA Pro 6.1 for the PSEmuPro GPU plugin.

## Requirements
- IDA Pro 6.1 with HexRays decompiler
- Python 2.7 or Python 3.x (IDA compatible)
- HexRays decompiler license

## Script Features
1. **Automatic function detection** - Identify all decompilable functions
2. **Module-based organization** - Group functions by module
3. **Error handling** - Handle decompilation failures gracefully
4. **Progress tracking** - Track decompilation progress
5. **Logging** - Log all operations and errors

## Output Structure
```
decompiled/
├── functions/           # Individual function files
│   ├── GPUinit.txt
│   ├── GPUshutdown.txt
│   ├── GPUopen.txt
│   └── ...
├── modules/            # Module-based organization
│   ├── core.txt
│   ├── interface.txt
│   └── ...
└── logs/
    ├── decompilation.log
    └── errors.log
```

## Script Configuration

### Output Directory
```python
OUTPUT_DIR = "decompiled"
FUNCTIONS_DIR = os.path.join(OUTPUT_DIR, "functions")
MODULES_DIR = os.path.join(OUTPUT_DIR, "modules")
LOGS_DIR = os.path.join(OUTPUT_DIR, "logs")
```

### Function Filters
- Only decompile functions with actual code
- Skip library functions
- Skip stub functions

### Naming Convention
- Function names preserved from IDA
- Add module prefix if available
- Use consistent naming scheme

## Script Implementation

```python
#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
IDA Pro 6.1 HexRays Decompilation Script
Extracts decompiled functions from GPU plugin DLL
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
    # Add more as discovered
}

def ensure_directories():
    """Create output directories if they don't exist."""
    for directory in [FUNCTIONS_DIR, MODULES_DIR, LOGS_DIR]:
        if not os.path.exists(directory):
            os.makedirs(directory)

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

def save_functions_to_files(functions):
    """Save each function to its own file."""
    for func in functions:
        func_name = func['name']
        code = func['code']
        
        # Sanitize filename
        safe_name = func_name.replace('@', '_').replace('$', '_')
        filename = "{}.txt".format(safe_name)
        filepath = os.path.join(FUNCTIONS_DIR, filename)
        
        # Write to file
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write("/* Function: {} */\n".format(func_name))
            f.write("/* Address: 0x{:x} */\n\n".format(func['address']))
            f.write(code)
        
        print("Saved: {}".format(filepath))

def save_modules(functions):
    """Save functions organized by module."""
    modules = {}
    
    for func in functions:
        module = get_module_prefix(func['name'])
        if module not in modules:
            modules[module] = []
        modules[module].append(func)
    
    for module, funcs in modules.items():
        filename = "{}.txt".format(module)
        filepath = os.path.join(MODULES_DIR, filename)
        
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write("/* Module: {} */\n".format(module))
            f.write("/* Functions: {} */\n\n".format(len(funcs)))
            
            for func in funcs:
                f.write("/* Function: {} */\n".format(func['name']))
                f.write("/* Address: 0x{:x} */\n\n".format(func['address']))
                f.write(func['code'])
                f.write("\n\n")
        
        print("Saved module: {}".format(filepath))

def log_statistics(functions):
    """Log decompilation statistics."""
    log_path = os.path.join(LOGS_DIR, "decompilation.log")
    
    with open(log_path, 'w', encoding='utf-8') as f:
        f.write("HexRays Decompilation Statistics\n")
        f.write("=" * 50 + "\n\n")
        f.write("Total functions found: {}\n".format(len(idautils.Functions())))
        f.write("Functions decompiled: {}\n".format(len(functions)))
        f.write("Decompilation success rate: {:.2f}%\n".format(
            len(functions) / max(1, len(idautils.Functions())) * 100
        ))
        
        # List all decompiled functions
        f.write("\nDecompiled Functions:\n")
        f.write("-" * 50 + "\n")
        for func in functions:
            module = get_module_prefix(func['name'])
            f.write("  {} [Module: {}]\n".format(func['name'], module))
    
    print("Statistics saved: {}".format(log_path))

def main():
    """Main entry point."""
    print("Starting HexRays decompilation...")
    
    # Ensure output directories exist
    ensure_directories()
    
    # Extract all functions
    functions = extract_all_functions()
    
    if not functions:
        print("No functions could be decompiled!")
        return
    
    # Save individual function files
    save_functions_to_files(functions)
    
    # Save module-based files
    save_modules(functions)
    
    # Log statistics
    log_statistics(functions)
    
    print("Decompilation complete!")
    print("Output directory: {}".format(OUTPUT_DIR))

# Execute main function
if __name__ == "__main__":
    main()
```

## Usage Instructions

1. **Load DLL in IDA Pro 6.1**
   - Open IDA Pro 6.1
   - Load the GPU plugin DLL

2. **Wait for Analysis**
   - Allow IDA to complete automatic analysis
   - Ensure HexRays decompiler is available

3. **Run Script**
   - Open Script dialog (Alt+F7)
   - Select and run this script
   - Script will automatically process all functions

4. **Verify Output**
   - Check decompiled/functions/ for individual function files
   - Check decompiled/modules/ for module-based files
   - Check decompiled/logs/ for statistics

## Troubleshooting

### Common Issues
1. **HexRays not available**
   - Ensure HexRays decompiler is installed
   - Check license availability

2. **Functions not decompiling**
   - Some functions may be too complex
   - Check error log for details

3. **Output directory issues**
   - Ensure write permissions
   - Check disk space

### Debug Mode
Add debugging output by setting environment variable:
```bash
set IDA_DEBUG=1
```

## Future Enhancements
1. Add support for newer IDA versions
2. Implement automatic module detection
3. Add function classification heuristics
4. Support for batch processing multiple DLLs
