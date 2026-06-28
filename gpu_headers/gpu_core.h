/**
 * @file gpu_core.h
 * @brief Core GPU structures and global variables
 * 
 * Core GPU structures based on decompiled code analysis from gpuBladeSoft-1.64.dll
 * Memory addresses are mapped from the decompiled binary
 */

#ifndef GPU_CORE_H
#define GPU_CORE_H

#include <stdint.h>

/**
 * @brief Main GPU structure combining all subsystems
 * 
 * This is the primary structure that contains all GPU subsystem data.
 * It's mapped to the main GPU structure in the decompiled binary.
 * 
 * Memory layout:
 * - dword_6FB489C8: init_flag
 * - dword_700584C0: shutdown_flag  
 * - dword_6FB489CC: close_flag
 * - ... (other subsystems follow)
 */
typedef struct {
    // Initialization flags
    int init_flag;                 // dword_6FB489C8 - set to 1 after init
    int shutdown_flag;             // dword_700584C0 - set to 1 after shutdown
    int close_flag;                // dword_6FB489CC - set to 1 on close
    
    // Status subsystem (GPUStatusRegister)
    // Textures subsystem (GPUTexture)
    // Screen subsystem (GPUScreenPosition)
    // Display subsystem (GPUDisplayConfig)
    // Rendering subsystem (GPURenderingConfig)
    // State subsystem (GPUState)
    // Shader subsystem (GPUShader)
    // Texture replacement subsystem (GPUTextureReplacement)
    // File I/O subsystem
    // Frame subsystem (GPUFrame)
} GPUPrimaryStructure;

/**
 * @brief External declaration of the main GPU structure
 * 
 * This variable is defined in the actual binary and contains
 * all GPU state information.
 */
extern GPUPrimaryStructure g_gpu;

#endif /* GPU_CORE_H */
