/**
 * @file gpu_texture.h
 * @brief GPU texture structures and functions
 * 
 * Texture management structures based on decompiled code analysis
 * Memory addresses: dword_6FBBFD70 (0x6FBBFD70), dword_6FBBFD74 (0x6FBBFD74)
 */

#ifndef GPU_TEXTURE_H
#define GPU_TEXTURE_H

#include <stdint.h>

/** @brief Texture palette format */
typedef struct {
    uint16_t data[256];           // palette entries
} GPUTexPalette;

/** @brief Texture structure */
typedef struct {
    uint32_t addr;                // dword_6FBBFD70 - texture memory address
    uint32_t size;                // dword_6FBBFD74 - texture size in bytes
    uint32_t format;              // texture format (CLUT, direct, etc.)
    uint32_t width;               // texture width in pixels
    uint32_t height;              // texture height in pixels
    uint32_t pitch;               // texture pitch in bytes
    uint32_t flags;               // texture flags
    uint32_t texture_id;          // OpenGL texture ID
    GPUTexPalette *palette;       // palette pointer (for CLUT textures)
    uint8_t *data;                // texture data pointer
    uint32_t cache_tag;           // cache tag for texture management
    int32_t ref_count;            // reference count
} GPUTexInfo;

/** @brief Texture cache entry */
typedef struct {
    uint32_t addr;                // texture memory address
    uint32_t width;               // texture width
    uint32_t height;              // texture height
    uint32_t format;              // texture format
    uint32_t timestamp;           // last access timestamp
    uint32_t valid;               // validity flag
    GPUTexInfo *texture;          // pointer to texture info
} GPUTexCacheEntry;

/** @brief Texture cache configuration */
typedef struct {
    GPUTexCacheEntry entries[64]; // cache entries
    uint32_t next_replace;        // next entry to replace
    uint32_t total_size;          // total cache size in bytes
    uint32_t used_size;           // currently used cache size
} GPUTexCache;

/** @brief Get texture address */
static inline uint32_t GPUgetTextureAddr(void) {
    extern uint32_t dword_6FBBFD70;
    return dword_6FBBFD70;
}

/** @brief Set texture address */
static inline void GPUsetTextureAddr(uint32_t addr) {
    extern uint32_t dword_6FBBFD70;
    dword_6FBBFD70 = addr;
}

/** @brief Get texture size */
static inline uint32_t GPUgetTextureSize(void) {
    extern uint32_t dword_6FBBFD74;
    return dword_6FBBFD74;
}

/** @brief Set texture size */
static inline void GPUsetTextureSize(uint32_t size) {
    extern uint32_t dword_6FBBFD74;
    dword_6FBBFD74 = size;
}

#endif /* GPU_TEXTURE_H */