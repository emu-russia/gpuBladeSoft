/**
 * @file gpu_display.h
 * @brief GPU display configuration structures and functions
 * 
 * Display configuration structures based on decompiled code analysis
 * Memory addresses: dword_6FBB5098 (0x6FBB5098), dword_6FBB50A4 (0x6FBB50A4)
 */

#ifndef GPU_DISPLAY_H
#define GPU_DISPLAY_H

#include <stdint.h>

/** @brief Screen position structure */
typedef struct {
    float offset_x;               // dword_6FBB7574 - X offset
    float offset_y;               // dword_6FBB7578 - Y offset
    float width;                  // dword_6FBB757C - display width
    float height;                 // dword_6FBB7580 - display height
    float overscan_x;             // dword_6FBB7584 - horizontal overscan
    float overscan_y;             // dword_6FBB7588 - vertical overscan
    float scale_x;                // dword_6FBB758C - X scale factor
} GPUScreenPosition;

/** @brief Display configuration structure */
typedef struct {
    uint32_t display_enabled;     // dword_6FBB5098 - display enable flag
    uint32_t mode;                // dword_6FBB50A4 - display mode
    uint32_t width;               // display width in pixels
    uint32_t height;              // display height in pixels
    uint32_t x_pos;               // X position on screen
    uint32_t y_pos;               // Y position on screen
    uint32_t interlaced;          // interlaced mode flag
    uint32_t field;               // field number for interlaced
    GPUScreenPosition screen;     // screen position parameters
} GPUDisplayConfig;

/** @brief Get display enabled flag */
static inline uint32_t GPUgetDisplayEnabled(void) {
    extern uint32_t dword_6FBB5098;
    return dword_6FBB5098;
}

/** @brief Set display enabled flag */
static inline void GPUsetDisplayEnabled(uint32_t enabled) {
    extern uint32_t dword_6FBB5098;
    dword_6FBB5098 = enabled;
}

/** @brief Get display mode */
static inline uint32_t GPUgetDisplayMode(void) {
    extern uint32_t dword_6FBB50A4;
    return dword_6FBB50A4;
}

/** @brief Set display mode */
static inline void GPUsetDisplayMode(uint32_t mode) {
    extern uint32_t dword_6FBB50A4;
    dword_6FBB50A4 = mode;
}

#endif /* GPU_DISPLAY_H */
