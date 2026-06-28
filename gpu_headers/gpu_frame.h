/**
 * @file gpu_frame.h
 * @brief GPU frame control structures and functions
 * 
 * Frame control structures based on decompiled code analysis
 * Memory addresses: dword_6FBB52C0 (0x6FBB52C0), dword_6FBB84D0 (0x6FBB84D0)
 */

#ifndef GPU_FRAME_H
#define GPU_FRAME_H

#include <stdint.h>
#include "gpu_core.h"
#include "gpu_display.h"

/** @brief Maximum number of frames in flight */
#define GPU_MAX_FRAMES        3    /**< Maximum concurrent frames */
#define GPU_FRAME_BUFFER_SIZE (1024 * 512 * 4)  /**< 512KB frame buffer */

/** @brief Frame buffer flags */
#define GPU_FRAME_DIRTY        0x01    /**< Frame buffer needs update */
#define GPU_FRAME_LOCKED       0x02    /**< Frame buffer is locked */
#define GPU_FRAME_VALID        0x04    /**< Frame buffer contains valid data */
#define GPU_FRAME_READY        0x08    /**< Frame is ready for display */

/** @brief Frame structure */
typedef struct {
    uint8_t *buffer;                  // frame buffer pointer
    uint32_t buffer_size;             // buffer size in bytes
    uint32_t width;                   // frame width in pixels
    uint32_t height;                  // frame height in lines
    uint32_t format;                  // frame format (RGB565, RGBA8888, etc.)
    uint32_t pitch;                   // row pitch in bytes
    uint32_t flags;                   // frame flags
    uint32_t timestamp;               // frame timestamp
    uint32_t frame_number;            // sequential frame number
} GPUFrame;

/** @brief Frame control structure */
typedef struct {
    GPUFrame frames[GPU_MAX_FRAMES];  // frame buffer array
    uint32_t current_frame;           // currently active frame index
    uint32_t displayed_frame;         // currently displayed frame index
    uint32_t queued_frame;            // queued for display frame index
    uint32_t frame_count;             // total frames processed
    uint32_t frame_rate;              // target frame rate (Hz)
    uint32_t vsync_count;             // VSYNC counter
    uint32_t is_interlaced;           // interlaced mode flag
    uint32_t field_number;            // field number for interlaced mode
} GPUFrameControl;

/** @brief Get current frame index */
static inline uint32_t GPUgetCurrentFrame(void) {
    extern uint32_t dword_6FBB52C0;
    return dword_6FBB52C0;
}

/** @brief Set current frame index */
static inline void GPUsetCurrentFrame(uint32_t index) {
    extern uint32_t dword_6FBB52C0;
    dword_6FBB52C0 = index;
}

/** @brief Get frame display index */
static inline uint32_t GPUgetDisplayedFrame(void) {
    extern uint32_t dword_6FBB84D0;
    return dword_6FBB84D0;
}

/** @brief Set frame display index */
static inline void GPUsetDisplayedFrame(uint32_t index) {
    extern uint32_t dword_6FBB84D0;
    dword_6FBB84D0 = index;
}

/** @brief Initialize frame control */
int GPUinitFrameControl(GPUFrameControl *fc, uint32_t width, uint32_t height);

/** @brief Shutdown frame control */
void GPUshutdownFrameControl(GPUFrameControl *fc);

/** @brief Acquire frame buffer for rendering */
GPUFrame *GPUacquireFrame(GPUFrameControl *fc);

/** @brief Release frame buffer after rendering */
int GPUreleaseFrame(GPUFrameControl *fc, GPUFrame *frame);

/** @brief Queue frame for display */
int GPUqueueFrame(GPUFrameControl *fc, GPUFrame *frame);

/** @brief Wait for next VSYNC */
int GPUwaitVSYNC(GPUFrameControl *fc);

#endif /* GPU_FRAME_H */