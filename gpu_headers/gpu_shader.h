/**
 * @file gpu_shader.h
 * @brief GPU shader and texture management structures and functions
 * 
 * Shader management structures based on decompiled code analysis
 * Memory addresses: dword_6FBBDB50 (0x6FBBDB50), dword_6FBBDB54 (0x6FBBDB54)
 */

#ifndef GPU_SHADER_H
#define GPU_SHADER_H

#include <stdint.h>
#include <stddef.h>

/** @brief Maximum number of shaders */
#define GPU_MAX_SHADERS        8    /**< Maximum concurrent shaders */
#define GPU_MAX_TEXTURE_SIZE   1024 /**< Maximum texture dimension */

/** @brief Texture format flags */
#define GPU_TEXFMT_16BIT       0x00    /**< 16-bit texture format */
#define GPU_TEXFMT_24BIT       0x01    /**< 24-bit texture format */
#define GPU_TEXFMT_32BIT       0x02    /**< 32-bit texture format */
#define GPU_TEXFMT_CLUT4       0x10    /**< 4-bit CLUT texture */
#define GPU_TEXFMT_CLUT8       0x11    /**< 8-bit CLUT texture */
#define GPU_TEXFMT_CLUT16      0x12    /**< 16-bit CLUT texture */
#define GPU_TEXFMT_CLUT24      0x13    /**< 24-bit CLUT texture */

/** @brief Texture filtering modes */
#define GPU_TEXFILT_NEAREST    0x00    /**< Nearest neighbor filtering */
#define GPU_TEXFILT_LINEAR     0x01    /**< Linear filtering */
#define GPU_TEXFILT_MIPMAP     0x02    /**< Mipmapping enabled */

/** @brief Texture wrap modes */
#define GPU_TEXWRAP_CLAMP      0x00    /**< Clamp to edge */
#define GPU_TEXWRAP_REPEAT     0x01    /**< Repeat texture */

/** @brief Shader/texture structure */
typedef struct {
    uint32_t texture_id;              // dword_6FBBDB50 - OpenGL texture ID
    uint32_t width;                   // texture width
    uint32_t height;                  // texture height
    uint32_t format;                  // dword_6FBBDB54 - texture format
    uint32_t filter;                  // filtering mode
    uint32_t wrap_u;                  // U-axis wrap mode
    uint32_t wrap_v;                  // V-axis wrap mode
    uint32_t clut_id;                 // CLUT texture ID (if applicable)
    uint32_t clut_format;             // CLUT format
    uint32_t is_compressed;           // compression flag
    uint32_t mipmap_levels;           // number of mipmap levels
    float lod_bias;                   // level of detail bias
    uint32_t is_active;               // active/inactive flag
} GPUShader;

/** @brief Shader manager structure */
typedef struct {
    GPUShader shaders[GPU_MAX_SHADERS];  // array of shaders
    uint32_t active_shader;              // currently active shader index
    uint32_t num_shaders;                // number of registered shaders
    uint32_t texture_memory_used;        // texture memory usage in bytes
    uint32_t texture_memory_max;         // maximum texture memory
} GPUShaderManager;

/** @brief Get active shader index */
static inline uint32_t GPUgetActiveShader(void) {
    extern uint32_t dword_6FBBDB50;
    return dword_6FBBDB50;
}

/** @brief Set active shader index */
static inline void GPUsetActiveShader(uint32_t index) {
    extern uint32_t dword_6FBBDB50;
    dword_6FBBDB50 = index;
}

/** @brief Get shader format */
static inline uint32_t GPUgetShaderFormat(uint32_t index) {
    extern uint32_t dword_6FBBDB54;
    return dword_6FBBDB54;
}

/** @brief Set shader format */
static inline void GPUsetShaderFormat(uint32_t index, uint32_t format) {
    extern uint32_t dword_6FBBDB54;
    dword_6FBBDB54 = format;
}

#endif /* GPU_SHADER_H */