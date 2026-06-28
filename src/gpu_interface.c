/**
 * @file gpu_interface.c
 * @brief GPU plugin interface implementation
 * 
 * This module implements the PSEmuPro GPU plugin interface functions
 * based on the decompiled PSEmuPro GPU plugin version 1.64.
 */

#include "gpu_context.h"
#include "gpu_interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* GPU interface function declarations */
int GPUopen(const char *title, int width, int height);
void GPUclose(void);
int GPUreadData(uint8_t *buffer, uint32_t size);
int GPUwriteData(uint8_t *buffer, uint32_t size);
int GPUwriteStatus(uint32_t data);
void GPUreadDataMem(uint8_t *buffer, uint32_t size);

/**
 * @brief Open the GPU for rendering
 * 
 * This function opens the GPU device for rendering with the specified
 * dimensions and title.
 * 
 * @param title Window title (can be NULL)
 * @param width Screen width in pixels
 * @param height Screen height in pixels
 * @return 0 on success, -1 on failure
 */
int GPUopen(const char *title, int width, int height)
{
    /* Validate parameters */
    if (width <= 0 || height <= 0)
    {
        g_gpuContext.last_error = 1;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Invalid dimensions: %dx%d", width, height);
        return -1;
    }
    
    /* Check if already open */
    if (g_gpuContext.display.display_enabled)
    {
        /* Already open, just update settings */
        g_gpuContext.display.width = width;
        g_gpuContext.display.height = height;
        return 0;
    }
    
    /* Initialize rendering context */
    g_gpuContext.display.display_enabled = 1;
    g_gpuContext.display.width = width;
    g_gpuContext.display.height = height;
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
    
    /* Initialize frame control */
    g_gpuContext.frame.current_frame = 0;
    g_gpuContext.frame.displayed_frame = 0;
    g_gpuContext.frame.frame_counter = 0;
    
    /* Initialize texture manager */
    g_gpuContext.texture.texture_count = 0;
    g_gpuContext.texture.active_texture = 0;
    
    /* Initialize shader settings */
    g_gpuContext.shader.shader_state = 0;
    g_gpuContext.shader.shader_level = 0;
    g_gpuContext.shader.bilinear_filtering = 1;
    g_gpuContext.shader.brightness = 0;
    g_gpuContext.shader.gamma = 0;
    g_gpuContext.shader.contrast = 0;
    g_gpuContext.shader.rotation = 0;
    g_gpuContext.shader.polygon_renderer = 0;
    
    /* Initialize ZNc interface if needed */
    if (g_gpuContext.znc.znc_init_flag)
    {
        GPUzncOpen();
    }
    
    return 0;
}

/**
 * @brief Close the GPU
 * 
 * This function closes the GPU device and cleans up all resources.
 */
void GPUclose(void)
{
    /* Close ZNc interface */
    GPUzncClose();
    
    /* Shutdown shader manager */
    GPUshaderShutdown();
    
    /* Shutdown texture manager */
    GPUtextureShutdown();
    
    /* Shutdown display */
    GPUDisplayShutdown();
    
    /* Reset frame control */
    GPUframeShutdown();
    
    /* Mark as closed */
    g_gpuContext.display.display_enabled = 0;
    g_gpuContext.close_flag = 1;
}

/**
 * @brief Read data from GPU
 * 
 * This function reads data from the GPU memory bus.
 * 
 * @param buffer Buffer to store read data
 * @param size Number of bytes to read
 * @return 0 on success, -1 on failure
 */
int GPUreadData(uint8_t *buffer, uint32_t size)
{
    if (!buffer || size == 0)
    {
        g_gpuContext.last_error = 2;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Invalid parameters: buffer=%p, size=%u", buffer, size);
        return -1;
    }
    
    /* Check if GPU is open */
    if (!g_gpuContext.display.display_enabled)
    {
        g_gpuContext.last_error = 3;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "GPU not open");
        return -1;
    }
    
    /* Read data from GPU memory */
    GPUreadDataMem(buffer, size);
    
    return 0;
}

/**
 * @brief Write data to GPU
 * 
 * This function writes data to the GPU memory bus.
 * 
 * @param buffer Buffer containing data to write
 * @param size Number of bytes to write
 * @return 0 on success, -1 on failure
 */
int GPUwriteData(uint8_t *buffer, uint32_t size)
{
    if (!buffer || size == 0)
    {
        g_gpuContext.last_error = 4;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Invalid parameters: buffer=%p, size=%u", buffer, size);
        return -1;
    }
    
    /* Check if GPU is open */
    if (!g_gpuContext.display.display_enabled)
    {
        g_gpuContext.last_error = 5;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "GPU not open");
        return -1;
    }
    
    /* Write data to GPU memory */
    GPUwriteDataMem(buffer, size);
    
    return 0;
}

/**
 * @brief Write to GPU status register
 * 
 * This function writes data to the GPU status register.
 * 
 * @param data Data to write to status register
 * @return 0 on success, -1 on failure
 */
int GPUwriteStatus(uint32_t data)
{
    /* Check if GPU is open */
    if (!g_gpuContext.display.display_enabled)
    {
        g_gpuContext.last_error = 6;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "GPU not open");
        return -1;
    }
    
    /* Write to status register */
    g_gpuContext.status.status = (uint16_t)data;
    
    /* Set/clear flags based on data */
    if (data & 0x0001)
    {
        /* Set interrupt flag */
        g_gpuContext.status.flags[0] |= 1;
    }
    else
    {
        /* Clear interrupt flag */
        g_gpuContext.status.flags[0] &= ~1;
    }
    
    if (data & 0x0002)
    {
        /* Set DMA flag */
        g_gpuContext.status.flags[1] |= 1;
    }
    else
    {
        /* Clear DMA flag */
        g_gpuContext.status.flags[1] &= ~1;
    }
    
    return 0;
}

/**
 * @brief Read data from GPU memory
 * 
 * Internal function to read data from GPU memory bus.
 * 
 * @param buffer Buffer to store read data
 * @param size Number of bytes to read
 */
void GPUreadDataMem(uint8_t *buffer, uint32_t size)
{
    if (!buffer || size == 0)
    {
        return;
    }
    
    /* Read from GPU memory */
    /* Implementation would depend on specific GPU memory layout */
    memset(buffer, 0, size);
}

/**
 * @brief Write data to GPU memory
 * 
 * Internal function to write data to GPU memory bus.
 * 
 * @param buffer Buffer containing data to write
 * @param size Number of bytes to write
 */
void GPUwriteDataMem(uint8_t *buffer, uint32_t size)
{
    if (!buffer || size == 0)
    {
        return;
    }
    
    /* Write to GPU memory */
    /* Implementation would depend on specific GPU memory layout */
    /* For now, just copy the data */
    memcpy(buffer, buffer, size);
}

/**
 * @brief Get current GPU mode
 * 
 * @return Current GPU mode
 */
uint32_t GPUgetMode(void)
{
    return g_gpuContext.render.rendering_mode;
}

/**
 * @brief Set GPU mode
 * 
 * @param mode GPU mode to set
 */
void GPUsetMode(uint32_t mode)
{
    g_gpuContext.render.rendering_mode = mode;
}

/**
 * @brief Update GPU lace (vertical blanking)
 * 
 * @param lines Number of lines to update
 */
void GPUupdateLace(int lines)
{
    /* Update vertical blanking interval */
    /* Implementation would depend on specific GPU timing */
}

/**
 * @brief Freeze GPU state
 * 
 * @param mode Freeze mode (0=save, 1=load, 2=state slot change)
 * @param a2 Pointer to state slot number
 * @return 0 on success, -1 on failure
 */
int GPUfreeze(int mode, int *a2)
{
    if (!a2)
    {
        g_gpuContext.last_error = 7;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Invalid parameters: a2=%p", a2);
        return -1;
    }
    
    switch (mode)
    {
        case 0: /* Save state */
            return GPUsaveState("state.psx", *a2, 0);
            
        case 1: /* Load state */
            return GPUloadState("state.psx", *a2, 0);
            
        case 2: /* Change state slot */
            g_gpuContext.state.state_slot = *a2;
            return 0;
            
        default:
            g_gpuContext.last_error = 8;
            snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                     "Invalid freeze mode: %d", mode);
            return -1;
    }
}
