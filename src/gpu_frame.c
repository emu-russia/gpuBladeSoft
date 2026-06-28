/**
 * @file gpu_frame.c
 * @brief GPU frame control and buffer management
 * 
 * This module provides frame control functions
 * based on the decompiled PSEmuPro GPU plugin version 1.64.
 */

#include "gpu_context.h"
#include <stdio.h>

/**
 * @brief Get current frame index
 * 
 * @return Current frame index
 */
uint32_t GPUgetCurrentFrame(void)
{
    return g_gpuContext.frame.current_frame;
}

/**
 * @brief Set current frame index
 * 
 * @param index Frame index to set
 */
void GPUsetCurrentFrame(uint32_t index)
{
    if (index < MAX_FRAMES)
    {
        g_gpuContext.frame.current_frame = index;
    }
}

/**
 * @brief Get displayed frame index
 * 
 * @return Displayed frame index
 */
uint32_t GPUgetDisplayedFrame(void)
{
    return g_gpuContext.frame.displayed_frame;
}

/**
 * @brief Set displayed frame index
 * 
 * @param index Frame index to set
 */
void GPUsetDisplayedFrame(uint32_t index)
{
    if (index < MAX_FRAMES)
    {
        g_gpuContext.frame.displayed_frame = index;
    }
}

/**
 * @brief Wait for VSYNC
 * 
 * @return 0 on success, -1 on failure
 */
int GPUwaitVSYNC(void)
{
    /* Wait for vertical blanking interval */
    /* Implementation would depend on specific GPU timing */
    g_gpuContext.frame.vsync_count++;
    return 0;
}

/**
 * @brief Set frame limit
 * 
 * @param limit Frame limit (0 = no limit)
 */
void GPUsetFrameLimit(uint32_t limit)
{
    g_gpuContext.frame.frame_limit = limit;
}

/**
 * @brief Get frame limit
 * 
 * @return Current frame limit
 */
uint32_t GPUgetFrameLimit(void)
{
    return g_gpuContext.frame.frame_limit;
}

/**
 * @brief Increment frame counter
 */
void GPUincrementFrameCounter(void)
{
    g_gpuContext.frame.frame_counter++;
    
    /* Check if we should skip frames based on limit */
    if (g_gpuContext.frame.frame_limit > 0)
    {
        if (g_gpuContext.frame.frame_counter % g_gpuContext.frame.frame_limit != 0)
        {
            g_gpuContext.frame.skip_frame = 1;
        }
        else
        {
            g_gpuContext.frame.skip_frame = 0;
        }
    }
    else
    {
        g_gpuContext.frame.skip_frame = 0;
    }
}

/**
 * @brief Check if frame should be skipped
 * 
 * @return 1 if frame should be skipped, 0 if it should be drawn
 */
int GPUshouldSkipFrame(void)
{
    return g_gpuContext.frame.skip_frame;
}

/**
 * @brief Reset frame counter
 */
void GPUresetFrameCounter(void)
{
    g_gpuContext.frame.frame_counter = 0;
    g_gpuContext.frame.vsync_count = 0;
}

/**
 * @brief Initialize frame control
 */
void GPUframeInit(void)
{
    uint32_t i;
    
    g_gpuContext.frame.frame_mode = 0;
    g_gpuContext.frame.frame_limit = 0;
    g_gpuContext.frame.frame_limit_flag = 0;
    g_gpuContext.frame.frame_counter = 0;
    g_gpuContext.frame.vsync_count = 0;
    g_gpuContext.frame.skip_frame = 0;
    g_gpuContext.frame.current_frame = 0;
    g_gpuContext.frame.displayed_frame = 0;
    
    /* Initialize frame buffer flags */
    g_gpuContext.frame_buffer_flags[0] = 0;
    g_gpuContext.frame_buffer_flags[1] = 0;
    g_gpuContext.frame_buffer_flags[2] = 0;
    g_gpuContext.frame_buffer_flags[3] = 0;
    
    /* Initialize frame buffer pointers */
    for (i = 0; i < MAX_FRAMES; i++)
    {
        g_gpuContext.frame.frame_buffer[i] = NULL;
    }
}

/**
 * @brief Shutdown frame control
 */
void GPUframeShutdown(void)
{
    uint32_t i;
    
    g_gpuContext.frame.frame_mode = 0;
    g_gpuContext.frame.frame_limit = 0;
    g_gpuContext.frame.frame_counter = 0;
    
    /* Free frame buffers */
    for (i = 0; i < MAX_FRAMES; i++)
    {
        if (g_gpuContext.frame.frame_buffer[i])
        {
            free(g_gpuContext.frame.frame_buffer[i]);
            g_gpuContext.frame.frame_buffer[i] = NULL;
        }
    }
}
