/**
 * @file gpu_display.c
 * @brief GPU display configuration and screen positioning
 * 
 * This module provides display configuration functions
 * based on the decompiled PSEmuPro GPU plugin version 1.64.
 */

#include "gpu_context.h"
#include <stdio.h>

/**
 * @brief Set screen position
 * 
 * @param x X offset
 * @param y Y offset
 */
void GPUsetScreenPos(float x, float y)
{
    g_gpuContext.screen_offset_x = x;
    g_gpuContext.screen_offset_y = y;
}

/**
 * @brief Set screen size
 * 
 * @param w Screen width
 * @param h Screen height
 */
void GPUsetScreenSize(float w, float h)
{
    g_gpuContext.screen_width = w;
    g_gpuContext.screen_height = h;
}

/**
 * @brief Set screen scale
 * 
 * @param sx X scale factor
 * @param sy Y scale factor
 */
void GPUsetScreenScale(float sx, float sy)
{
    g_gpuContext.screen_scale_x = sx;
    g_gpuContext.screen_scale_y = sy;
}

/**
 * @brief Set screen rotation
 * 
 * @param angle Rotation angle in degrees
 */
void GPUsetScreenRotation(float angle)
{
    g_gpuContext.screen_rotation = angle;
}

/**
 * @brief Update display configuration
 */
void GPUupdateDisplay(void)
{
    /* Update display based on current configuration */
    /* Implementation would depend on specific GPU rendering */
}

/**
 * @brief Set display mode
 * 
 * @param mode Display mode
 */
void GPUsetDisplayMode(uint32_t mode)
{
    g_gpuContext.display.mode = mode;
}

/**
 * @brief Get display mode
 * 
 * @return Current display mode
 */
uint32_t GPUgetDisplayMode(void)
{
    return g_gpuContext.display.mode;
}

/**
 * @brief Enable display
 */
void GPUenableDisplay(void)
{
    g_gpuContext.display.display_enabled = 1;
}

/**
 * @brief Disable display
 */
void GPUdisableDisplay(void)
{
    g_gpuContext.display.display_enabled = 0;
}

/**
 * @brief Check if display is enabled
 * 
 * @return 1 if enabled, 0 if disabled
 */
int GPUisDisplayEnabled(void)
{
    return g_gpuContext.display.display_enabled;
}

/**
 * @brief Set interlaced mode
 * 
 * @param interlaced 1 for interlaced, 0 for progressive
 */
void GPUsetInterlaced(int interlaced)
{
    g_gpuContext.display.interlaced = interlaced ? 1 : 0;
}

/**
 * @brief Check if interlaced mode is enabled
 * 
 * @return 1 if interlaced, 0 if progressive
 */
int GPUisInterlaced(void)
{
    return g_gpuContext.display.interlaced;
}

/**
 * @brief Initialize display configuration
 */
void GPUDisplayInit(void)
{
    g_gpuContext.display.display_enabled = 0;
    g_gpuContext.display.mode = 0;
    g_gpuContext.display.width = 640;
    g_gpuContext.display.height = 480;
    g_gpuContext.display.x_pos = 0;
    g_gpuContext.display.y_pos = 0;
    g_gpuContext.display.interlaced = 0;
    g_gpuContext.display.field = 0;
    
    /* Initialize screen position */
    g_gpuContext.screen_offset_x = 0.0f;
    g_gpuContext.screen_offset_y = 0.0f;
    g_gpuContext.screen_width = 1.0f;
    g_gpuContext.screen_height = 1.0f;
    g_gpuContext.screen_scale_x = 1.0f;
    g_gpuContext.screen_scale_y = 1.0f;
    g_gpuContext.screen_rotation = 0.0f;
    g_gpuContext.screen_flip_horizontal = 0;
    g_gpuContext.screen_flip_vertical = 0;
}

/**
 * @brief Shutdown display configuration
 */
void GPUDisplayShutdown(void)
{
    g_gpuContext.display.display_enabled = 0;
}
