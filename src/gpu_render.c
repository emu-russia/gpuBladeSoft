/**
 * @file gpu_render.c
 * @brief GPU rendering configuration and mode management
 * 
 * This module provides GPU rendering configuration functions
 * based on the decompiled PSEmuPro GPU plugin version 1.64.
 */

#include "gpu_context.h"
#include <stdio.h>

/**
 * @brief Set rendering mode
 * 
 * @param mode Rendering mode to set
 */
void GPUsetMode(uint32_t mode)
{
    g_gpuContext.render.rendering_mode = mode;
}

/**
 * @brief Get rendering mode
 * 
 * @return Current rendering mode
 */
uint32_t GPUgetMode(void)
{
    return g_gpuContext.render.rendering_mode;
}

/**
 * @brief Set alpha blend mode
 * 
 * @param mode Alpha blend mode
 */
void GPUsetAlphaMode(uint32_t mode)
{
    g_gpuContext.render.alpha_blend_mode = mode;
}

/**
 * @brief Set depth test mode
 * 
 * @param mode Depth test mode
 */
void GPUsetDepthMode(uint32_t mode)
{
    g_gpuContext.render.depth_test_mode = mode;
}

/**
 * @brief Set clamp mode
 * 
 * @param clamp Clamp mode
 */
void GPUsetclamp(uint32_t clamp)
{
    g_gpuContext.render.clamp_mode = clamp;
}

/**
 * @brief Set texture flush mode
 * 
 * @param flush Texture flush mode
 */
void GPUsetTextureFlush(uint32_t flush)
{
    g_gpuContext.render.texture_flush_mode = flush;
}

/**
 * @brief Set rendering mode string
 * 
 * @param mode_str Mode string
 */
void GPUsetModeString(const char *mode_str)
{
    if (mode_str)
    {
        strncpy(g_gpuContext.render.mode_string, mode_str, 
                sizeof(g_gpuContext.render.mode_string) - 1);
        g_gpuContext.render.mode_string[sizeof(g_gpuContext.render.mode_string) - 1] = '\0';
    }
}

/**
 * @brief Get rendering mode string
 * 
 * @return Current rendering mode string
 */
const char *GPUgetModeString(void)
{
    return g_gpuContext.render.mode_string;
}

/**
 * @brief Initialize rendering configuration
 */
void GPURenderInit(void)
{
    g_gpuContext.render.rendering_mode = 0;
    g_gpuContext.render.wired_mode = 0;
    g_gpuContext.render.point_mode = 0;
    g_gpuContext.render.nontextured_mode = 0;
    g_gpuContext.render.textured_mode = 0;
    g_gpuContext.render.show_drawing_process = 0;
    g_gpuContext.render.alpha_blend_mode = 0;
    g_gpuContext.render.depth_test_mode = 0;
    g_gpuContext.render.clamp_mode = 0;
    g_gpuContext.render.texture_flush_mode = 0;
    g_gpuContext.render.mode_string[0] = '\0';
}

/**
 * @brief Shutdown rendering configuration
 */
void GPURenderShutdown(void)
{
    g_gpuContext.render.rendering_mode = 0;
}
