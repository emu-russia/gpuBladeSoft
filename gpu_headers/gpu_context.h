/**
 * @file gpu_context.h
 * @brief Main GPU context structure and global variable declarations
 * 
 * This header defines the unified global context structure that combines
 * all GPU subsystems based on decompiled code analysis from gpuBladeSoft-1.64.dll
 * 
 * Memory addresses are mapped from the decompiled binary:
 * - dword_6FB489C8: init_flag
 * - dword_700584C0: shutdown_flag
 * - dword_6FBB51E8: main GPU structure (g_gpu)
 * - ... (other subsystems)
 */

#ifndef GPU_CONTEXT_H
#define GPU_CONTEXT_H

#include <stdint.h>
#include "gpu_core.h"
#include "gpu_status.h"
#include "gpu_texture.h"
#include "gpu_display.h"
#include "gpu_render.h"
#include "gpu_state.h"
#include "gpu_shader.h"
#include "gpu_frame.h"
#include "gpu_znc.h"

/**
 * @brief Main GPU context structure combining all subsystems
 * 
 * This is the primary structure that contains all GPU subsystem data.
 * It's mapped to the main GPU structure in the decompiled binary at
 * dword_6FBB51E8.
 */
typedef struct {
    /* Core state */
    int init_flag;                // dword_6FB489C8 - set to 1 after init
    int shutdown_flag;            // dword_700584C0 - set to 1 after shutdown
    int close_flag;               // dword_6FB489CC - set to 1 on close
    
    /* Status register */
    GPUStatusRegister status;
    
    /* Texture management */
    GPUTextureManager texture;
    
    /* Display configuration */
    GPUDisplayConfig display;
    
    /* Rendering configuration */
    GPURenderingConfig render;
    
    /* State management */
    GPUState state;
    
    /* Shader management */
    GPUShaderManager shader;
    
    /* Frame control */
    GPUFrameControl frame;
    
    /* ZNc interface */
    GPUZNcInterface znc;
    
    /* Combined flags */
    uint32_t capabilities;
    uint32_t is_initialized;
    uint32_t is_shutdown;
    
    /* Error state */
    uint32_t last_error;
    char error_string[256];
    
    /* Additional data from decompiled binary */
    /* Status register related */
    uint32_t status_flags[4];     // dword_6FD400E8, dword_6FD400D0, dword_6FD400DC, dword_6FD400D4
    uint32_t status_pointers[2];  // dword_6FD400E4, dword_6FD400D8
    uint32_t status_counter;      // dword_6FD400D4
    uint32_t vblank_flag;         // dword_6FD40994
    
    /* File I/O */
    int file_handle;              // dword_6FBB5098
    int recording_flag;           // dword_6FD400DC
    int recording_handle;         // dword_6FD400D8
    
    /* Frame buffer flags */
    uint32_t frame_buffer_flags[4]; // dword_6FBB509C, dword_6FBB50A0, dword_6FBB50A4, dword_6FBB5078
    
    /* Screen position (floats) */
    float screen_offset_x;        // flt_6FBB7574
    float screen_offset_y;        // flt_6FBB7578
    float screen_width;           // flt_6FBB7584
    float screen_height;          // flt_6FBB7588
    float screen_overscan;        // flt_6FBB758C
    
    /* Screen transformation */
    int screen_flip_horizontal;   // dword_6FBB757C
    int screen_flip_vertical;     // dword_6FBB7580
    
    /* Frame control */
    uint32_t frame_mode;          // dword_6FBB52C0
    uint32_t frame_mode_flags[3]; // dword_6FBB84D0, dword_6FBB84D4, dword_6FBB52EC
    
    /* Display settings */
    uint32_t visible_area_mode;   // dword_6FBB5300
    uint32_t dithering_method;    // dword_6FBB7560
    uint32_t fps_limitation;      // dword_6FBB52EC
    
    /* Shader settings */
    uint32_t shader_state;        // dword_6FBB5410
    uint32_t shader_level;        // dword_6FBB5514
    uint32_t bilinear_filtering;  // dword_6FBB5518
    int32_t brightness;           // dword_6FBB551C
    int32_t gamma;                // dword_6FBB5520
    int32_t contrast;             // dword_6FBB5524
    uint32_t rotation;            // dword_6FBB5538
    uint32_t polygon_renderer;    // dword_6FBB553C
    
    /* Frame limit */
    uint32_t frame_limit_flag;    // dword_6FBB9780
    
    /* Frame counter */
    uint32_t frame_counter;       // dword_6F96D014
    
    /* ZNc state slot */
    int state_slot;               // dword_6F96D020
    
    /* Texture replacement */
    uint64_t texture_replace_flags; // qword_6FBB554C
    
    /* Additional ZNc flags */
    uint32_t znc_init_flag;       // dword_6F96D01C
    uint32_t znc_close_flag;      // dword_6F96D018
    uint32_t znc_open_flag;       // dword_6FD412D0
    uint32_t znc_init_flag2;      // dword_6FD412CC
} GPUGlobalContext;

/**
 * @brief External declaration of the main GPU context
 * 
 * This variable is defined in the actual binary and contains
 * all GPU state information. All subsystems access this context.
 */
extern GPUGlobalContext g_gpuContext;

/* Global variable aliases for backward compatibility */
#define g_gpu g_gpuContext

#endif /* GPU_CONTEXT_H */
