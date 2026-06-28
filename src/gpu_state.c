/**
 * @file gpu_state.c
 * @brief GPU state save/load functionality
 * 
 * This module provides state save/load functions
 * based on the decompiled PSEmuPro GPU plugin version 1.64.
 */

#include "gpu_context.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Save GPU state to file
 * 
 * @param filename Filename to save state to
 * @param slot State slot number
 * @param flags Save flags
 * @return 0 on success, -1 on failure
 */
int GPUsaveState(const char *filename, uint32_t slot, uint32_t flags)
{
    FILE *fp;
    uint32_t state_size;
    uint8_t *state_buffer;
    
    if (!filename)
    {
        g_gpuContext.last_error = 1;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Invalid filename");
        return -1;
    }
    
    /* Calculate state size */
    state_size = GPUgetStateSize();
    
    /* Allocate buffer */
    state_buffer = (uint8_t *)malloc(state_size);
    if (!state_buffer)
    {
        g_gpuContext.last_error = 2;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Memory allocation failed");
        return -1;
    }
    
    /* Serialize state to buffer */
    if (GPUserializeState(state_buffer, state_size) < 0)
    {
        free(state_buffer);
        g_gpuContext.last_error = 3;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "State serialization failed");
        return -1;
    }
    
    /* Write to file */
    fp = fopen(filename, "wb");
    if (!fp)
    {
        free(state_buffer);
        g_gpuContext.last_error = 4;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Failed to open file: %s", filename);
        return -1;
    }
    
    fwrite(state_buffer, 1, state_size, fp);
    fclose(fp);
    
    free(state_buffer);
    
    return 0;
}

/**
 * @brief Load GPU state from file
 * 
 * @param filename Filename to load state from
 * @param slot State slot number
 * @param flags Load flags
 * @return 0 on success, -1 on failure
 */
int GPUloadState(const char *filename, uint32_t slot, uint32_t flags)
{
    FILE *fp;
    uint32_t state_size;
    uint8_t *state_buffer;
    int file_size;
    
    if (!filename)
    {
        g_gpuContext.last_error = 5;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Invalid filename");
        return -1;
    }
    
    /* Open file */
    fp = fopen(filename, "rb");
    if (!fp)
    {
        g_gpuContext.last_error = 6;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Failed to open file: %s", filename);
        return -1;
    }
    
    /* Get file size */
    fseek(fp, 0, SEEK_END);
    file_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    
    /* Allocate buffer */
    state_buffer = (uint8_t *)malloc(file_size);
    if (!state_buffer)
    {
        fclose(fp);
        g_gpuContext.last_error = 7;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "Memory allocation failed");
        return -1;
    }
    
    /* Read file */
    fread(state_buffer, 1, file_size, fp);
    fclose(fp);
    
    /* Deserialize state from buffer */
    if (GPUdeserializeState(state_buffer, file_size) < 0)
    {
        free(state_buffer);
        g_gpuContext.last_error = 8;
        snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                 "State deserialization failed");
        return -1;
    }
    
    free(state_buffer);
    
    return 0;
}

/**
 * @brief Get state size
 * 
 * @return Size of state in bytes
 */
int GPUgetStateSize(void)
{
    return sizeof(GPUGlobalContext) + 1024; /* Add some padding */
}

/**
 * @brief Serialize state to buffer
 * 
 * @param buffer Buffer to serialize state to
 * @param size Buffer size
 * @return 0 on success, -1 on failure
 */
int GPUserializeState(uint8_t *buffer, uint32_t size)
{
    if (!buffer || size < sizeof(GPUGlobalContext))
    {
        return -1;
    }
    
    /* Copy GPU context to buffer */
    memcpy(buffer, &g_gpuContext, sizeof(GPUGlobalContext));
    
    return 0;
}

/**
 * @brief Deserialize state from buffer
 * 
 * @param buffer Buffer containing serialized state
 * @param size Buffer size
 * @return 0 on success, -1 on failure
 */
int GPUdeserializeState(const uint8_t *buffer, uint32_t size)
{
    if (!buffer || size < sizeof(GPUGlobalContext))
    {
        return -1;
    }
    
    /* Copy buffer to GPU context */
    memcpy(&g_gpuContext, buffer, sizeof(GPUGlobalContext));
    
    return 0;
}

/**
 * @brief Freeze GPU state
 * 
 * @param mode Freeze mode (0=save, 1=load, 2=state slot change)
 * @param buffer Buffer for state data
 * @return 0 on success, -1 on failure
 */
int GPUfreeze(uint32_t mode, void *buffer)
{
    switch (mode)
    {
        case 0: /* Save state */
            return GPUsaveState("state.psx", g_gpuContext.state.state_slot, 0);
            
        case 1: /* Load state */
            return GPUloadState("state.psx", g_gpuContext.state.state_slot, 0);
            
        case 2: /* State slot change */
            if (buffer)
            {
                g_gpuContext.state.state_slot = *(uint32_t *)buffer;
            }
            return 0;
            
        default:
            g_gpuContext.last_error = 9;
            snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string),
                     "Invalid freeze mode: %d", mode);
            return -1;
    }
}

/**
 * @brief Initialize state management
 */
void GPUstateInit(void)
{
    g_gpuContext.state.state_slot = 0;
    g_gpuContext.state.frame_buffer_flags[0] = 0;
    g_gpuContext.state.frame_buffer_flags[1] = 0;
    g_gpuContext.state.frame_buffer_flags[2] = 0;
    g_gpuContext.state.frame_buffer_flags[3] = 0;
}

/**
 * @brief Shutdown state management
 */
void GPUstateShutdown(void)
{
    g_gpuContext.state.state_slot = 0;
}
