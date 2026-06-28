/**
 * @file gpu_render.h
 * @brief GPU rendering configuration structures and functions
 * 
 * Rendering configuration structures based on decompiled code analysis
 * Memory addresses: dword_6FBB52C0 (0x6FBB52C0), dword_6FBB52C4 (0x6FBB52C4)
 */

#ifndef GPU_RENDER_H
#define GPU_RENDER_H

#include <stdint.h>

/** @brief Rendering mode flags */
#define GPU_RENDER_Z_TEST         0x0001    /**< Z-buffer test enabled */
#define GPU_RENDER_Z_WRITE        0x0002    /**< Z-buffer write enabled */
#define GPU_RENDER_ALPHA_BLEND    0x0004    /**< Alpha blending enabled */
#define GPU_RENDER_ANTIALIAS      0x0008    /**< Anti-aliasing enabled */
#define GPU_RENDER_TEX_ENV        0x0010    /**< Texture environment enabled */
#define GPU_RENDER_LIGHTING       0x0020    /**< Lighting enabled */
#define GPU_RENDER_FOG            0x0040    /**< Fog enabled */
#define GPU_RENDER_DITHER         0x0080    /**< Dithering enabled */

/** @brief Rendering configuration structure */
typedef struct {
    uint32_t flags;                 // dword_6FBB52C0 - rendering flags
    uint32_t z_buffer_addr;         // dword_6FBB52C4 - Z-buffer address
    uint32_t z_buffer_width;        // Z-buffer width
    uint32_t z_buffer_height;       // Z-buffer height
    float z_min;                    // minimum Z value
    float z_max;                    // maximum Z value
    float alpha_ref;                // alpha reference value
    uint32_t blend_mode;            // blend mode (0=normal, 1=add, 2=subtract)
    uint32_t tex_env_mode;          // texture environment mode
    uint32_t fog_mode;              // fog mode
} GPURenderingConfig;

/** @brief Vertex structure for rendering */
typedef struct {
    float x;                        // X coordinate
    float y;                        // Y coordinate
    float z;                        // Z coordinate
    float w;                        // W coordinate (1/w for perspective)
    uint32_t color;                 // vertex color (RGBA)
    float u;                        // texture U coordinate
    float v;                        // texture V coordinate
} GPUVertex;

/** @brief Triangle structure */
typedef struct {
    GPUVertex v0;                   // first vertex
    GPUVertex v1;                   // second vertex
    GPUVertex v2;                   // third vertex
    uint32_t texture_id;            // texture ID to use
    uint32_t flags;                 // triangle flags
} GPUTriangle;

/** @brief Get rendering flags */
static inline uint32_t GPUgetRenderingFlags(void) {
    extern uint32_t dword_6FBB52C0;
    return dword_6FBB52C0;
}

/** @brief Set rendering flags */
static inline void GPUsetRenderingFlags(uint32_t flags) {
    extern uint32_t dword_6FBB52C0;
    dword_6FBB52C0 = flags;
}

/** @brief Get Z-buffer address */
static inline uint32_t GPUgetZBufferAddr(void) {
    extern uint32_t dword_6FBB52C4;
    return dword_6FBB52C4;
}

/** @brief Set Z-buffer address */
static inline void GPUsetZBufferAddr(uint32_t addr) {
    extern uint32_t dword_6FBB52C4;
    dword_6FBB52C4 = addr;
}

#endif /* GPU_RENDER_H */
