// IDA Pro 6.1 Decompilation Script (IDC version)
// Extracts function information from GPU plugin DLL
// Version: 2.0
// Target: gpuBladeSoft 1.64 (PSEmuPro GPU plugin)
// Note: IDC does not support HexRays decompile() - uses disassembly instead

#include <idc.idc>

// Helper function to get IDB path
static get_idb_path_helper() {
    auto idb_path = GetIdbPath();
    if (idb_path == "") {
        return "unknown";
    }
    return idb_path;
}

// Sanitize filename by replacing invalid characters with underscores
static sanitize_filename(name) {
    auto safe_name = name;
    auto pos;
    
    // Replace @ with _
    pos = strstr(safe_name, "@");
    while (pos != -1) {
        safe_name = substr(safe_name, 0, pos) + "_" + substr(safe_name, pos + 1);
        pos = strstr(safe_name, "@");
    }
    
    // Replace $ with _
    pos = strstr(safe_name, "$");
    while (pos != -1) {
        safe_name = substr(safe_name, 0, pos) + "_" + substr(safe_name, pos + 1);
        pos = strstr(safe_name, "$");
    }
    
    // Replace . with _
    pos = strstr(safe_name, ".");
    while (pos != -1) {
        safe_name = substr(safe_name, 0, pos) + "_" + substr(safe_name, pos + 1);
        pos = strstr(safe_name, ".");
    }
    
    // Replace : with _
    pos = strstr(safe_name, ":");
    while (pos != -1) {
        safe_name = substr(safe_name, 0, pos) + "_" + substr(safe_name, pos + 1);
        pos = strstr(safe_name, ":");
    }
    
    // Replace < with _
    pos = strstr(safe_name, "<");
    while (pos != -1) {
        safe_name = substr(safe_name, 0, pos) + "_" + substr(safe_name, pos + 1);
        pos = strstr(safe_name, "<");
    }
    
    // Replace > with _
    pos = strstr(safe_name, ">");
    while (pos != -1) {
        safe_name = substr(safe_name, 0, pos) + "_" + substr(safe_name, pos + 1);
        pos = strstr(safe_name, ">");
    }
    
    // Replace spaces with _
    pos = strstr(safe_name, " ");
    while (pos != -1) {
        safe_name = substr(safe_name, 0, pos) + "_" + substr(safe_name, pos + 1);
        pos = strstr(safe_name, " ");
    }
    
    return safe_name;
}

// Get module prefix based on function name
static get_module_prefix(func_name) {
    if (strstr(func_name, "GPUinit") != 0) return "core";
    if (strstr(func_name, "GPUshutdown") != 0) return "core";
    if (strstr(func_name, "GPUopen") != 0) return "interface";
    if (strstr(func_name, "GPUclose") != 0) return "interface";
    if (strstr(func_name, "GPUwriteStatus") != 0) return "registers";
    if (strstr(func_name, "GPUreadStatus") != 0) return "registers";
    if (strstr(func_name, "GPUwriteData") != 0) return "registers";
    if (strstr(func_name, "GPUreadData") != 0) return "registers";
    if (strstr(func_name, "GPUdma") != 0) return "dma";
    if (strstr(func_name, "GPUvblank") != 0) return "vblank";
    if (strstr(func_name, "GPUgetScreen") != 0) return "screen";
    if (strstr(func_name, "GPUdisplayText") != 0) return "display";
    if (strstr(func_name, "GPUgetMemory") != 0) return "memory";
    if (strstr(func_name, "GPUgetMode") != 0) return "mode";
    if (strstr(func_name, "GPUsetMode") != 0) return "mode";
    if (strstr(func_name, "GPUgetDefMode") != 0) return "mode";
    if (strstr(func_name, "GPUsetDefMode") != 0) return "mode";
    if (strstr(func_name, "GPUsetExtra") != 0) return "extra";
    if (strstr(func_name, "GPUgetExtra") != 0) return "extra";
    if (strstr(func_name, "GPUupdateDisplay") != 0) return "display";
    if (strstr(func_name, "GPUsync") != 0) return "sync";
    if (strstr(func_name, "GPUloadImage") != 0) return "image";
    if (strstr(func_name, "GPUstoreImage") != 0) return "image";
    if (strstr(func_name, "GPUdrawImage") != 0) return "image";
    if (strstr(func_name, "GPUdrawPoly") != 0) return "poly";
    if (strstr(func_name, "GPUdrawLine") != 0) return "line";
    if (strstr(func_name, "GPUdrawSprite") != 0) return "sprite";
    if (strstr(func_name, "GPUdrawSprite16") != 0) return "sprite";
    if (strstr(func_name, "GPUdrawSprite32") != 0) return "sprite";
    if (strstr(func_name, "GPUsetVDPregisters") != 0) return "vdp";
    if (strstr(func_name, "GPUgetVDPregisters") != 0) return "vdp";
    if (strstr(func_name, "GPUsetLCD") != 0) return "lcd";
    if (strstr(func_name, "GPUgetLCD") != 0) return "lcd";
    if (strstr(func_name, "GPUsetBrightness") != 0) return "brightness";
    if (strstr(func_name, "GPUsetGamma") != 0) return "gamma";
    if (strstr(func_name, "GPUsetContrast") != 0) return "contrast";
    if (strstr(func_name, "GPUsetAlpha") != 0) return "alpha";
    if (strstr(func_name, "GPUsetBlending") != 0) return "blending";
    if (strstr(func_name, "GPUsetTexture") != 0) return "texture";
    if (strstr(func_name, "GPUgetTexture") != 0) return "texture";
    if (strstr(func_name, "GPUsetFilter") != 0) return "filter";
    if (strstr(func_name, "GPUsetInterlace") != 0) return "interlace";
    if (strstr(func_name, "GPUsetResolution") != 0) return "resolution";
    if (strstr(func_name, "GPUsetAspectRatio") != 0) return "aspect";
    if (strstr(func_name, "GPUgetAspectRatio") != 0) return "aspect";
    if (strstr(func_name, "GPUsetWindow") != 0) return "window";
    if (strstr(func_name, "GPUgetWindow") != 0) return "window";
    if (strstr(func_name, "GPUsetClip") != 0) return "clip";
    if (strstr(func_name, "GPUgetClip") != 0) return "clip";
    if (strstr(func_name, "GPUsetPalette") != 0) return "palette";
    if (strstr(func_name, "GPUgetPalette") != 0) return "palette";
    if (strstr(func_name, "GPUsetHotkey") != 0) return "hotkey";
    if (strstr(func_name, "GPUgetHotkey") != 0) return "hotkey";
    if (strstr(func_name, "GPUsetConfig") != 0) return "config";
    if (strstr(func_name, "GPUgetConfig") != 0) return "config";
    if (strstr(func_name, "GPUsaveState") != 0) return "state";
    if (strstr(func_name, "GPUloadState") != 0) return "state";
    if (strstr(func_name, "GPUgetScreenShot") != 0) return "screenshot";
    if (strstr(func_name, "GPUsetScreenShot") != 0) return "screenshot";
    if (strstr(func_name, "GPUsetThreadCount") != 0) return "thread";
    if (strstr(func_name, "GPUgetThreadCount") != 0) return "thread";
    if (strstr(func_name, "GPUsetInternalRes") != 0) return "internal";
    if (strstr(func_name, "GPUgetInternalRes") != 0) return "internal";
    if (strstr(func_name, "GPUsetMultiThread") != 0) return "multithread";
    if (strstr(func_name, "GPUgetMultiThread") != 0) return "multithread";
    
    return "unknown";
}

// Extract disassembly for a function
static extract_disassembly(start_ea) {
    auto result = "";
    auto ea = start_ea;
    auto end_ea = GetFunctionAttr(start_ea, FUNCATTR_END);
    
    if (end_ea == BADADDR) {
        end_ea = start_ea + 0x100; // Fallback estimate
    }
    
    // Extract instructions until end of function
    while (ea < end_ea && ea != BADADDR) {
        auto line = GetDisasm(ea);
        auto bytes = GetByte(ea);
        result = result + sprintf("0x%X: %s\n", ea, line);
        ea = ea + ItemSize(ea);
    }
    
    return result;
}

// Main function
static main() {
    Message("========================================\n");
    Message("Decompilation Script for gpuBladeSoft 1.64\n");
    Message("========================================\n\n");
    
    // Create output directories
    CreateDir("decompiled");
    CreateDir("decompiled\\functions");
    CreateDir("decompiled\\modules");
    CreateDir("decompiled\\logs");
    
    Message("Output directories created.\n\n");
    
    // Initialize counters
    auto total_funcs = 0;
    auto processed_funcs = 0;
    auto error_count = 0;
    
    // Get all function addresses
    auto func_ea = FirstFunc();
    
    while (func_ea != BADADDR) {
        total_funcs++;
        
        // Get function name
        auto func_name = GetFuncName(func_ea);
        
        // Skip library and stub functions
        if (func_name != "" && strstr(func_name, "sub_") != 0) {
            func_ea = NextFunc(func_ea);
            continue;
        }
        
        if (func_name != "" && strstr(func_name, "j_") != 0) {
            func_ea = NextFunc(func_ea);
            continue;
        }
        
        // Process function
        if (func_name != "") {
            processed_funcs++;
            
            // Get module prefix
            auto module = get_module_prefix(func_name);
            
            // Sanitize filename
            auto safe_name = sanitize_filename(func_name);
            
            // Write to file
            auto filepath = "decompiled\\functions\\" + safe_name + ".txt";
            auto file = fopen(filepath, "wt");
            
            if (file != -1) {
                fprintf(file, "/* Function: %s */\n", func_name);
                fprintf(file, "/* Address: 0x%X */\n", func_ea);
                fprintf(file, "/* Module: %s */\n\n", module);
                fprintf(file, "/* Disassembly (HexRays decompilation not available in IDC for IDA 6.1) */\n\n");
                var disasm = extract_disassembly(func_ea);
                fprintf(file, "%s", disasm);
                fclose(file);
                
                Message("Processed: %s\n", func_name);
            } else {
                error_count++;
                Message("Error: Could not create file for %s\n", func_name);
            }
            
            if (processed_funcs % 10 == 0) {
                Message("Processed %d functions...\n", processed_funcs);
            }
        }
        
        func_ea = NextFunc(func_ea);
    }
    
    Message("\nProcessing complete!\n");
    Message("Total functions found: %d\n", total_funcs);
    Message("Functions processed: %d\n", processed_funcs);
    Message("Errors: %d\n", error_count);
    
    // Generate statistics log
    auto log_path = "decompiled\\logs\\decompilation.log";
    auto log_file = fopen(log_path, "wt");
    
    if (log_file != -1) {
        fprintf(log_file, "Decompilation Statistics\n");
        fprintf(log_file, "============================================================\n\n");
        fprintf(log_file, "Plugin: gpuBladeSoft 1.64\n");
        fprintf(log_file, "Date: %s\n\n", get_idb_path_helper());
        fprintf(log_file, "Total functions found: %d\n", total_funcs);
        fprintf(log_file, "Functions processed: %d\n", processed_funcs);
        fprintf(log_file, "Errors: %d\n\n", error_count);
        
        fprintf(log_file, "Modules:\n");
        fprintf(log_file, "------------------------------------------------------------\n");
        
        // List modules
        fprintf(log_file, "core: GPUinit, GPUshutdown\n");
        fprintf(log_file, "interface: GPUopen, GPUclose\n");
        fprintf(log_file, "registers: GPUwriteStatus, GPUreadStatus, GPUwriteData, GPUreadData\n");
        fprintf(log_file, "dma: GPUdma\n");
        fprintf(log_file, "vblank: GPUvblank\n");
        fprintf(log_file, "screen: GPUgetScreen\n");
        fprintf(log_file, "display: GPUupdateDisplay, GPUdisplayText\n");
        fprintf(log_file, "image: GPUloadImage, GPUstoreImage, GPUdrawImage\n");
        fprintf(log_file, "poly: GPUdrawPoly\n");
        fprintf(log_file, "line: GPUdrawLine\n");
        fprintf(log_file, "sprite: GPUdrawSprite, GPUdrawSprite16, GPUdrawSprite32\n");
        fprintf(log_file, "texture: GPUsetTexture, GPUgetTexture, GPUsetFilter\n");
        fprintf(log_file, "mode: GPUgetMode, GPUsetMode, GPUgetDefMode, GPUsetDefMode\n");
        fprintf(log_file, "config: GPUsetConfig, GPUgetConfig\n");
        fprintf(log_file, "state: GPUsaveState, GPUloadState\n");
        fprintf(log_file, "screenshot: GPUgetScreenShot, GPUsetScreenShot\n");
        fprintf(log_file, "thread: GPUsetThreadCount, GPUgetThreadCount\n");
        fprintf(log_file, "internal: GPUsetInternalRes, GPUgetInternalRes\n");
        fprintf(log_file, "multithread: GPUsetMultiThread, GPUgetMultiThread\n");
        fprintf(log_file, "hotkey: GPUsetHotkey, GPUgetHotkey\n");
        fprintf(log_file, "window: GPUsetWindow, GPUgetWindow\n");
        fprintf(log_file, "clip: GPUsetClip, GPUgetClip\n");
        fprintf(log_file, "palette: GPUsetPalette, GPUgetPalette\n");
        fprintf(log_file, "lcd: GPUsetLCD, GPUgetLCD\n");
        fprintf(log_file, "brightness: GPUsetBrightness\n");
        fprintf(log_file, "gamma: GPUsetGamma\n");
        fprintf(log_file, "contrast: GPUsetContrast\n");
        fprintf(log_file, "alpha: GPUsetAlpha\n");
        fprintf(log_file, "blending: GPUsetBlending\n");
        fprintf(log_file, "interlace: GPUsetInterlace\n");
        fprintf(log_file, "resolution: GPUsetResolution\n");
        fprintf(log_file, "aspect: GPUsetAspectRatio, GPUgetAspectRatio\n");
        fprintf(log_file, "vdp: GPUsetVDPregisters, GPUgetVDPregisters\n");
        fprintf(log_file, "extra: GPUsetExtra, GPUgetExtra\n");
        fprintf(log_file, "memory: GPUgetMemory\n");
        fprintf(log_file, "sync: GPUsync\n");
        fprintf(log_file, "filter: GPUsetFilter\n");
        
        fclose(log_file);
        Message("\nStatistics saved to: decompiled\\logs\\decompilation.log\n");
    }
    
    Message("\n========================================\n");
    Message("Output directory: decompiled\\\n");
    Message("  - Individual functions: decompiled\\functions\\\n");
    Message("  - Module files: decompiled\\modules\\\n");
    Message("  - Statistics: decompiled\\logs\\decompilation.log\n");
    Message("Note: IDC does not support HexRays decompilation.\n");
    Message("      Use Python script for HexRays output if available.\n");
    Message("========================================\n");
}

// Execute main function
main();
