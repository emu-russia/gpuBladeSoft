/**
 * @file gpu_texture.c
 * @brief GPU texture management and CLUT operations
 * 
 * This module provides texture management functions
 * based on the decompiled PSEmuPro GPU plugin version 1.64.
 */

#include "gpu_context.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Load texture from memory
 * 
 * @param addr Memory address of texture data
 * @param width Texture width
 * @param height Texture height
 * @param fmt Texture format
 * @return Texture ID
 */
uint32_t GPUloadTexture(uint32_t addr, uint32_t width, uint32_t height, uint32_t fmt)
{
    uint32_t tex_id;
    
    /* Check if we have space for more textures */
    if (g_gpuContext.texture.texture_count >= MAX_TEXTURES)
    {
        return 0;
    }
    
    /* Allocate texture ID */
    tex_id = g_gpuContext.texture.texture_count + 1;
    
    /* Store texture information */
    g_gpuContext.texture.textures[tex_id].addr = addr;
    g_gpuContext.texture.textures[tex_id].width = width;
    g_gpuContext.texture.textures[tex_id].height = height;
    g_gpuContext.texture.textures[tex_id].format = fmt;
    g_gpuContext.texture.textures[tex_id].id = tex_id;
    g_gpuContext.texture.textures[tex_id].flag = 1;
    
    /* Update texture count */
    g_gpuContext.texture.texture_count++;
    
    return tex_id;
}

/**
 * @brief Bind texture for rendering
 * 
 * @param tex_id Texture ID to bind
 */
void GPUbindTexture(uint32_t tex_id)
{
    if (tex_id > 0 && tex_id <= g_gpuContext.texture.texture_count)
    {
        g_gpuContext.texture.active_texture = tex_id;
    }
}

/**
 * @brief Load CLUT (Color LookUp Table)
 * 
 * @param addr Memory address of CLUT data
 * @param count Number of colors to load
 */
void GPUloadCLUT(uint32_t addr, uint32_t count)
{
    if (count > MAX_CLUT_SIZE)
    {
        count = MAX_CLUT_SIZE;
    }
    
    g_gpuContext.texture.clut_addr = addr;
    g_gpuContext.texture.clut_count = count;
    
    /* Allocate CLUT buffer if needed */
    if (!g_gpuContext.texture.clut_buffer)
    {
        g_gpuContext.texture.clut_buffer = (uint32_t *)malloc(sizeof(uint32_t) * MAX_CLUT_SIZE);
    }
}

/**
 * @brief Create new texture
 * 
 * @param width Texture width
 * @param height Texture height
 * @param fmt Texture format
 * @return Texture ID
 */
uint32_t GPUcreateTexture(uint32_t width, uint32_t height, uint32_t fmt)
{
    uint32_t tex_id;
    
    /* Check if we have space for more textures */
    if (g_gpuContext.texture.texture_count >= MAX_TEXTURES)
    {
        return 0;
    }
    
    /* Allocate texture ID */
    tex_id = g_gpuContext.texture.texture_count + 1;
    
    /* Initialize texture */
    g_gpuContext.texture.textures[tex_id].addr = 0;
    g_gpuContext.texture.textures[tex_id].width = width;
    g_gpuContext.texture.textures[tex_id].height = height;
    g_gpuContext.texture.textures[tex_id].format = fmt;
    g_gpuContext.texture.textures[tex_id].id = tex_id;
    g_gpuContext.texture.textures[tex_id].flag = 1;
    
    /* Update texture count */
    g_gpuContext.texture.texture_count++;
    
    return tex_id;
}

/**
 * @brief Delete texture
 * 
 * @param tex_id Texture ID to delete
 */
void GPUdeleteTexture(uint32_t tex_id)
{
    if (tex_id > 0 && tex_id <= g_gpuContext.texture.texture_count)
    {
        g_gpuContext.texture.textures[tex_id].flag = 0;
        g_gpuContext.texture.textures[tex_id].width = 0;
        g_gpuContext.texture.textures[tex_id].height = 0;
        g_gpuContext.texture.textures[tex_id].addr = 0;
        
        /* If this was the active texture, reset it */
        if (g_gpuContext.texture.active_texture == tex_id)
        {
            g_gpuContext.texture.active_texture = 0;
        }
    }
}

/**
 * @brief Delete all textures
 */
void GPUdeleteAllTextures(void)
{
    uint32_t i;
    
    for (i = 1; i <= g_gpuContext.texture.texture_count; i++)
    {
        g_gpuContext.texture.textures[i].flag = 0;
        g_gpuContext.texture.textures[i].width = 0;
        g_gpuContext.texture.textures[i].height = 0;
        g_gpuContext.texture.textures[i].addr = 0;
    }
    
    g_gpuContext.texture.texture_count = 0;
    g_gpuContext.texture.active_texture = 0;
}

/**
 * @brief Set texture format
 * 
 * @param tex_id Texture ID
 * @param fmt Texture format
 */
void GPUsetTextureFormat(uint32_t tex_id, uint32_t fmt)
{
    if (tex_id > 0 && tex_id <= g_gpuContext.texture.texture_count)
    {
        g_gpuContext.texture.textures[tex_id].format = fmt;
    }
}

/**
 * @brief Get texture width
 * 
 * @param tex_id Texture ID
 * @return Texture width
 */
uint32_t GPUgetTextureWidth(uint32_t tex_id)
{
    if (tex_id > 0 && tex_id <= g_gpuContext.texture.texture_count)
    {
        return g_gpuContext.texture.textures[tex_id].width;
    }
    return 0;
}

/**
 * @brief Get texture height
 * 
 * @param tex_id Texture ID
 * @return Texture height
 */
uint32_t GPUgetTextureHeight(uint32_t tex_id)
{
    if (tex_id > 0 && tex_id <= g_gpuContext.texture.texture_count)
    {
        return g_gpuContext.texture.textures[tex_id].height;
    }
    return 0;
}

/**
 * @brief Get texture format
 * 
 * @param tex_id Texture ID
 * @return Texture format
 */
uint32_t GPUgetTextureFormat(uint32_t tex_id)
{
    if (tex_id > 0 && tex_id <= g_gpuContext.texture.texture_count)
    {
        return g_gpuContext.texture.textures[tex_id].format;
    }
    return 0;
}

/**
 * @brief Initialize texture manager
 */
void GPUtextureInit(void)
{
    uint32_t i;
    
    g_gpuContext.texture.texture_count = 0;
    g_gpuContext.texture.active_texture = 0;
    g_gpuContext.texture.clut_buffer = NULL;
    g_gpuContext.texture.clut_count = 0;
    g_gpuContext.texture.clut_addr = 0;
    
    /* Initialize texture array */
    for (i = 0; i < MAX_TEXTURES; i++)
    {
        g_gpuContext.texture.textures[i].id = 0;
        g_gpuContext.texture.textures[i].flag = 0;
        g_gpuContext.texture.textures[i].width = 0;
        g_gpuContext.texture.textures[i].height = 0;
        g_gpuContext.texture.textures[i].addr = 0;
        g_gpuContext.texture.textures[i].format = 0;
    }
}

/**
 * @brief Shutdown texture manager
 */
void GPUtextureShutdown(void)
{
    /* Free CLUT buffer */
    if (g_gpuContext.texture.clut_buffer)
    {
        free(g_gpuContext.texture.clut_buffer);
        g_gpuContext.texture.clut_buffer = NULL;
    }
    
    /* Delete all textures */
    GPUdeleteAllTextures();
}
