/**
 * @file gpu_core.c
 * @brief Core GPU initialization and shutdown functions
 * 
 * This module provides the core GPU initialization and shutdown functionality
 * based on the decompiled PSEmuPro GPU plugin version 1.64.
 */

#include "gpu_context.h"
#include <stdio.h>

/**
 * @brief Initialize the GPU subsystem
 * 
 * This function initializes the GPU subsystem and sets up the main GPU context.
 * It should be called before any other GPU functions.
 * 
 * @return 0 on success, -1 on failure
 */
int GPUinit(void)
{
    /* Check if already initialized */
    if (g_gpuContext.init_flag && !g_gpuContext.shutdown_flag)
    {
        /* GPU already initialized, return success */
        return 0;
    }
    
    /* Initialize the GPU context */
    GPUcontextInit();
    
    /* Initialize sub-systems */
    GPUstatusInit();
    GPUtextureInit();
    GPUDisplayInit();
    GPURenderInit();
    GPUframeInit();
    GPUstateInit();
    GPUzncInit();
    
    /* Mark as initialized */
    g_gpuContext.init_flag = 1;
    g_gpuContext.shutdown_flag = 0;
    g_gpuContext.is_initialized = 1;
    
    return 0;
}

/**
 * @brief Shutdown the GPU subsystem
 * 
 * This function shuts down the GPU subsystem and cleans up all resources.
 * It should be called when the GPU is no longer needed.
 */
void GPUshutdown(void)
{
    /* Check if already shutdown */
    if (g_gpuContext.shutdown_flag)
    {
        return;
    }
    
    /* Shutdown sub-systems */
    GPUzncShutdown();
    GPUstateShutdown();
    GPUframeShutdown();
    GPURenderShutdown();
    GPUDisplayShutdown();
    GPUtextureShutdown();
    GPUstatusShutdown();
    
    /* Cleanup resources */
    if (g_gpuContext.file_handle)
    {
        fclose((FILE*)g_gpuContext.file_handle);
        g_gpuContext.file_handle = 0;
    }
    
    if (g_gpuContext.recording_handle)
    {
        fclose((FILE*)g_gpuContext.recording_handle);
        g_gpuContext.recording_handle = 0;
    }
    
    /* Mark as shutdown */
    g_gpuContext.shutdown_flag = 1;
    g_gpuContext.is_shutdown = 1;
    g_gpuContext.init_flag = 0;
}

/**
 * @brief Check if GPU is initialized
 * 
 * @return 1 if initialized, 0 otherwise
 */
int GPUisInitialized(void)
{
    return g_gpuContext.init_flag && !g_gpuContext.shutdown_flag;
}

/**
 * @brief Check if GPU is shutdown
 * 
 * @return 1 if shutdown, 0 otherwise
 */
int GPUisShutdown(void)
{
    return g_gpuContext.shutdown_flag;
}

/**
 * @brief Reset the GPU state
 * 
 * This function resets the GPU state to default values without
 * fully shutting down and reinitializing.
 * 
 * @return 0 on success, -1 on failure
 */
int GPUreset(void)
{
    /* Shutdown if initialized */
    if (g_gpuContext.init_flag)
    {
        GPUshutdown();
    }
    
    /* Reinitialize */
    return GPUinit();
}

/**
 * @brief Get GPU error code
 * 
 * @return Last error code
 */
uint32_t GPUgetLastError(void)
{
    return g_gpuContext.last_error;
}

/**
 * @brief Get GPU error message
 * 
 * @param buffer Buffer to store error message
 * @param size Buffer size
 * @return Pointer to error message
 */
const char *GPUgetErrorMessage(char *buffer, size_t size)
{
    if (size > 0)
    {
        strncpy(buffer, g_gpuContext.error_string, size - 1);
        buffer[size - 1] = '\0';
    }
    return g_gpuContext.error_string;
}

/**
 * @brief Initialize GPU context
 * 
 * Internal function to initialize the GPU context structure.
 */
void GPUcontextInit(void)
{
    /* Initialize main context */
    memset(&g_gpuContext, 0, sizeof(GPUGlobalContext));
    
    /* Initialize status register */
    g_gpuContext.status.status = 0;
    g_gpuContext.status.status_ext = 0;
    
    /* Initialize default display settings */
    g_gpuContext.display.visible_area_mode = 0;
    g_gpuContext.display.dithering_method = 0;
    g_gpuContext.display.fps_limitation = 0;
    
    /* Initialize rendering settings */
    g_gpuContext.render.rendering_mode = 0;
    g_gpuContext.render.wired_mode = 0;
    g_gpuContext.render.point_mode = 0;
    
    /* Initialize frame settings */
    g_gpuContext.frame.frame_limit_flag = 0;
    g_gpuContext.frame.frame_counter = 0;
    
    /* Initialize shader settings */
    g_gpuContext.shader.shader_state = 0;
    g_gpuContext.shader.shader_level = 0;
    g_gpuContext.shader.bilinear_filtering = 1;
    g_gpuContext.shader.brightness = 0;
    g_gpuContext.shader.gamma = 0;
    g_gpuContext.shader.contrast = 0;
    g_gpuContext.shader.rotation = 0;
    g_gpuContext.shader.polygon_renderer = 0;
    
    /* Initialize screen position */
    g_gpuContext.screen_offset_x = 0.0f;
    g_gpuContext.screen_offset_y = 0.0f;
    g_gpuContext.screen_width = 0.0f;
    g_gpuContext.screen_height = 0.0f;
    g_gpuContext.screen_overscan = 0.0f;
    
    /* Initialize screen transformation */
    g_gpuContext.screen_flip_horizontal = 0;
    g_gpuContext.screen_flip_vertical = 0;
    
    /* Initialize file handles */
    g_gpuContext.file_handle = 0;
    g_gpuContext.recording_flag = 0;
    g_gpuContext.recording_handle = 0;
    
    /* Initialize error state */
    g_gpuContext.last_error = 0;
    g_gpuContext.error_string[0] = '\0';
}

/**
 * @brief Initialize GPU status subsystem
 */
void GPUstatusInit(void)
{
    /* Initialize status register */
    g_gpuContext.status.status = 0;
    g_gpuContext.status.status_ext = 0;
    g_gpuContext.status.queue_head = 0;
    g_gpuContext.status.queue_tail = 0;
    g_gpuContext.status.queue_count = 0;
}

/**
 * @brief Initialize GPU texture subsystem
 */
void GPUtextureInit(void)
{
    /* Initialize texture manager */
    g_gpuContext.texture.texture_count = 0;
    g_gpuContext.texture.active_texture = 0;
    g_gpuContext.texture.clut_buffer = NULL;
    g_gpuContext.texture.clut_count = 0;
}

/**
 * @brief Initialize GPU display subsystem
 */
void GPUDisplayInit(void)
{
    /* Initialize display configuration */
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
    g_gpuContext.screen_overscan = 0.0f;
    g_gpuContext.screen_flip_horizontal = 0;
    g_gpuContext.screen_flip_vertical = 0;
}

/**
 * @brief Initialize GPU render subsystem
 */
void GPURenderInit(void)
{
    /* Initialize rendering configuration */
    g_gpuContext.render.rendering_mode = 0;
    g_gpuContext.render.wired_mode = 0;
    g_gpuContext.render.point_mode = 0;
    g_gpuContext.render.nontextured_mode = 0;
    g_gpuContext.render.textured_mode = 0;
    g_gpuContext.render.show_drawing_process = 0;
}

/**
 * @brief Initialize GPU frame subsystem
 */
void GPUframeInit(void)
{
    /* Initialize frame control */
    g_gpuContext.frame.frame_mode = 0;
    g_gpuContext.frame.frame_limit_flag = 0;
    g_gpuContext.frame.frame_counter = 0;
    g_gpuContext.frame.current_frame = 0;
    g_gpuContext.frame.displayed_frame = 0;
}

/**
 * @brief Initialize GPU state subsystem
 */
void GPUstateInit(void)
{
    /* Initialize state management */
    g_gpuContext.state.state_slot = 0;
    g_gpuContext.state.frame_buffer_flags[0] = 0;
    g_gpuContext.state.frame_buffer_flags[1] = 0;
    g_gpuContext.state.frame_buffer_flags[2] = 0;
    g_gpuContext.state.frame_buffer_flags[3] = 0;
}

/**
 * @brief Initialize GPU shader subsystem
 */
void GPUshaderInit(void)
{
    /* Initialize shader management */
    g_gpuContext.shader.shader_state = 0;
    g_gpuContext.shader.shader_level = 0;
    g_gpuContext.shader.bilinear_filtering = 1;
    g_gpuContext.shader.brightness = 0;
    g_gpuContext.shader.gamma = 0;
    g_gpuContext.shader.contrast = 0;
    g_gpuContext.shader.rotation = 0;
}

/**
 * @brief Initialize ZNc subsystem
 */
void GPUzncInit(void)
{
    /* Initialize ZNc interface */
    g_gpuContext.znc.znc_init_flag = 0;
    g_gpuContext.znc.znc_close_flag = 0;
    g_gpuContext.znc.znc_open_flag = 0;
    g_gpuContext.znc.znc_init_flag2 = 0;
}

/**
 * @brief Shutdown GPU status subsystem
 */
void GPUstatusShutdown(void)
{
    /* Clear status register */
    g_gpuContext.status.status = 0;
    g_gpuContext.status.status_ext = 0;
}

/**
 * @brief Shutdown GPU texture subsystem
 */
void GPUtextureShutdown(void)
{
    /* Delete all textures */
    if (g_gpuContext.texture.texture_count > 0)
    {
        GPUdeleteAllTextures();
        g_gpuContext.texture.texture_count = 0;
    }
    
    /* Free CLUT buffer */
    if (g_gpuContext.texture.clut_buffer)
    {
        free(g_gpuContext.texture.clut_buffer);
        g_gpuContext.texture.clut_buffer = NULL;
    }
}

/**
 * @brief Shutdown GPU display subsystem
 */
void GPUDisplayShutdown(void)
{
    /* Disable display */
    g_gpuContext.display.display_enabled = 0;
}

/**
 * @brief Shutdown GPU render subsystem
 */
void GPURenderShutdown(void)
{
    /* Reset rendering configuration */
    g_gpuContext.render.rendering_mode = 0;
    g_gpuContext.render.wired_mode = 0;
    g_gpuContext.render.point_mode = 0;
}

/**
 * @brief Shutdown GPU frame subsystem
 */
void GPUframeShutdown(void)
{
    /* Reset frame control */
    g_gpuContext.frame.frame_mode = 0;
    g_gpuContext.frame.frame_limit_flag = 0;
    g_gpuContext.frame.frame_counter = 0;
}

/**
 * @brief Shutdown GPU state subsystem
 */
void GPUstateShutdown(void)
{
    /* Reset state management */
    g_gpuContext.state.state_slot = 0;
}

/**
 * @brief Shutdown GPU shader subsystem
 */
void GPUshaderShutdown(void)
{
    /* Reset shader management */
    g_gpuContext.shader.shader_state = 0;
    g_gpuContext.shader.shader_level = 0;
}

/**
 * @brief Shutdown ZNc subsystem
 */
void GPUzncShutdown(void)
{
    /* Reset ZNc interface */
    g_gpuContext.znc.znc_init_flag = 0;
    g_gpuContext.znc.znc_close_flag = 0;
    g_gpuContext.znc.znc_open_flag = 0;
}
