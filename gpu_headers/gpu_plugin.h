/**
 * @file gpu_plugin.h
 * @brief Main GPU plugin interface header
 * 
 * This header includes all GPU plugin modules and provides a unified interface
 * for the PlayStation GPU plugin based on PSEmuPro version 1.64.
 * 
 * Module structure:
 * - gpu_core.h: Core GPU initialization and management
 * - gpu_interface.h: PSEmuPro plugin interface implementation
 * - gpu_status.h: GPU status register and control
 * - gpu_texture.h: Texture management and CLUT operations
 * - gpu_display.h: Display configuration and screen positioning
 * - gpu_render.h: Rendering mode configuration
 * - gpu_state.h: State save/load functionality
 * - gpu_shader.h: Shader and texture management
 * - gpu_frame.h: Frame control and buffer management
 * - gpu_znc.h: ZNc extended interface
 * 
 * Memory addresses are documented for each module to aid in reverse engineering
 * and verification of the restored source code.
 */

#ifndef GPU_PLUGIN_H
#define GPU_PLUGIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Include all GPU plugin modules */
#include "gpu_core.h"
#include "gpu_interface.h"
#include "gpu_status.h"
#include "gpu_texture.h"
#include "gpu_display.h"
#include "gpu_render.h"
#include "gpu_state.h"
#include "gpu_shader.h"
#include "gpu_frame.h"
#include "gpu_znc.h"

/* Combined capabilities mask */
#define GPU_CAP_ALL \
    (GPU_CAP_INIT | GPU_CAP_FREEZE | GPU_CAP ScreenPIC | GPU_CAP_MEMCON | \
     GPU_CAP_CONFIG | GPU_CAP_MODE | GPU_CAP_DEBUG)

/* Global GPU context structure */
typedef struct {
    /* Core state */
    GPUCore core;
    
    /* Status register */
    GPUStatus status;
    
    /* Texture management */
    GPUTextureManager texture;
    
    /* Display configuration */
    GPUDisplay display;
    
    /* Rendering configuration */
    GPURender render;
    
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
} GPUGlobalContext;

/* Global context instance */
extern GPUGlobalContext g_gpuContext;

/* ============================================================================
 * Global Variable Mapping (from decompiled code)
 * ============================================================================
 * These global variables were identified by their memory addresses in the
 * decompiled PSEmuPro GPU plugin version 1.64.
 */

/* Core state variables (0x6FB489C8, 0x700584C0) */
extern uint32_t dword_6FB489C8;  // init flag
extern uint32_t dword_700584C0;  // shutdown flag

/* Status register (0x6FBB979C, 0x6FBB979F) */
extern uint16_t word_6FBB979C;   // status register
extern uint8_t byte_6FBB979F;    // status control

/* Texture data (0x6FBBFD70-0x6FBBFD7C) */
extern uint32_t dword_6FBBFD70;  // texture ID 0
extern uint32_t dword_6FBBFD74;  // texture ID 1
extern uint32_t dword_6FBBFD78;  // texture ID 2
extern uint32_t dword_6FBBFD7C;  // texture ID 3

/* Screen position (0x6FBB7574-0x6FBB758C) */
extern float flt_6FBB7574;       // X position
extern float flt_6FBB7578;       // Y position
extern float flt_6FBB757C;       // width
extern float flt_6FBB7580;       // height
extern float flt_6FBB7584;       // scale X
extern float flt_6FBB7588;       // scale Y
extern float flt_6FBB758C;       // rotation

/* Configuration (0x6FBB5300-0x6FBB553C) */
extern uint32_t dword_6FBB5300;  // config base
extern uint32_t dword_6FBB5304;  // config width
extern uint32_t dword_6FBB5308;  // config height
extern uint32_t dword_6FBB530C;  // config format
extern uint32_t dword_6FBB5310;  // config flags

/* Rendering modes (0x6FBB9558-0x6FBB9570) */
extern uint32_t dword_6FBB9558;  // rendering mode
extern uint32_t dword_6FBB955C;  // alpha blend mode
extern uint32_t dword_6FBB9560;  // depth test mode

/* ZNc interface (0x6F96D018, 0x6F96D01C, 0x6FD412D0) */
extern uint32_t dword_6F96D018;  // ZNc init flag
extern uint32_t dword_6F96D01C;  // ZNc interface pointer
extern uint32_t dword_6FD412D0;  // ZNc extension data

/* Frame control (0x6FBB52C0, 0x6FBB84D0) */
extern uint32_t dword_6FBB52C0;  // current frame index
extern uint32_t dword_6FBB84D0;  // displayed frame index

/* Shader management (0x6FBBDB50, 0x6FBBDB54) */
extern uint32_t dword_6FBBDB50;  // active shader
extern uint32_t dword_6FBBDB54;  // shader format

/* ============================================================================
 * Global Function Declarations
 * ============================================================================ */

/**
 * @brief Initialize the GPU plugin
 * @param flags Initialization flags
 * @return 0 on success, negative value on error
 */
int GPUinit(uint32_t flags);

/**
 * @brief Shutdown the GPU plugin
 */
void GPUshutdown(void);

/**
 * @brief Check if GPU is initialized
 * @return Non-zero if initialized, zero otherwise
 */
int GPUisInitialized(void);

/**
 * @brief Check if GPU is shutdown
 * @return Non-zero if shutdown, zero otherwise
 */
int GPUisShutdown(void);

/**
 * @brief Get last error code
 * @return Error code from last operation
 */
uint32_t GPUgetLastError(void);

/**
 * @brief Get error message string
 * @param buffer Buffer to store error message
 * @param size Buffer size
 * @return Pointer to error message
 */
const char *GPUgetErrorMessage(char *buffer, size_t size);

/**
 * @brief Process GPU commands from PS1 memory
 * @param cmdBuffer Command buffer pointer
 * @param cmdSize Command buffer size
 */
void GPUprocessCommands(uint8_t *cmdBuffer, uint32_t cmdSize);

/**
 * @brief Draw a frame to the screen
 */
void GPUdrawFrame(void);

/**
 * @brief Sync GPU with host
 */
void GPUsync(void);

/**
 * @brief Update GPU configuration
 * @param config Configuration data
 * @param size Configuration data size
 */
void GPUupdateConfig(void *config, uint32_t size);

/* ============================================================================
 * Module-Specific Function Declarations
 * ============================================================================ */

/* Core functions - gpu_core.h */
void GPUcoreInit(void);
void GPUcoreShutdown(void);
int GPUcoreReset(void);

/* Interface functions - gpu_interface.h */
int GPUopen(const char *title, int width, int height);
void GPUclose(void);
int GPUreadData(uint8_t *buffer, uint32_t size);
int GPUwriteData(uint8_t *buffer, uint32_t size);
int GPUwriteStatus(uint32_t data);

/* Status functions - gpu_status.h */
uint32_t GPUreadStatus(void);
void GPUwriteCommand(uint32_t data);
void GPUclearStatusFlags(void);
void GPUsetStatusFlag(uint32_t flag);

/* Texture functions - gpu_texture.h */
uint32_t GPUloadTexture(uint32_t addr, uint32_t width, uint32_t height, uint32_t fmt);
void GPUbindTexture(uint32_t texId);
void GPUloadCLUT(uint32_t addr, uint32_t count);
uint32_t GPUcreateTexture(uint32_t width, uint32_t height, uint32_t fmt);
void GPUdeleteTexture(uint32_t texId);

/* Display functions - gpu_display.h */
void GPUsetScreenPos(float x, float y);
void GPUsetScreenSize(float w, float h);
void GPUsetScreenScale(float sx, float sy);
void GPUsetScreenRotation(float angle);
void GPUupdateDisplay(void);

/* Render functions - gpu_render.h */
void GPUsetMode(uint32_t mode);
void GPUsetAlphaMode(uint32_t mode);
void GPUsetDepthMode(uint32_t mode);
void GPUsetclamp(uint32_t clamp);
void GPUsetTextureFlush(uint32_t flush);

/* State functions - gpu_state.h */
int GPUsaveState(const char *filename, uint32_t slot, uint32_t flags);
int GPUloadState(const char *filename, uint32_t slot, uint32_t flags);
int GPUgetStateSize(void);
int GPUfreeze(uint32_t mode, void *buffer);

/* Shader functions - gpu_shader.h */
uint32_t GPUgetActiveShader(void);
void GPUsetActiveShader(uint32_t index);
uint32_t GPUgetShaderFormat(uint32_t index);
void GPUsetShaderFormat(uint32_t index, uint32_t format);

/* Frame functions - gpu_frame.h */
uint32_t GPUgetCurrentFrame(void);
void GPUsetCurrentFrame(uint32_t index);
uint32_t GPUgetDisplayedFrame(void);
void GPUsetDisplayedFrame(uint32_t index);
int GPUwaitVSYNC(void);

/* ZNc functions - gpu_znc.h */
int GPUinitZNcInterface(GPUZNcInterface *iface);
void GPUshutdownZNcInterface(GPUZNcInterface *iface);
uint32_t GPUgetZNcCapabilities(void);
void GPUsetZNcCapabilities(uint32_t capabilities);
int GPUinitThreadPool(GPUThreadPool *pool, uint32_t thread_count);
void GPUshutdownThreadPool(GPUThreadPool *pool);
int GPUenqueueTask(GPUThreadPool *pool, void (*task)(void *), void *arg);
int GPUwaitForAllTasks(GPUThreadPool *pool);
uint32_t GPUgetActiveThreads(GPUThreadPool *pool);

/* ============================================================================
 * Utility Macros
 * ============================================================================ */

/* Check if a capability is enabled */
#define GPUhasCapability(cap) ((g_gpuContext.capabilities & (cap)) != 0)

/* Set a capability flag */
#define GPUsetCapability(cap) (g_gpuContext.capabilities |= (cap))

/* Clear a capability flag */
#define GPUclearCapability(cap) (g_gpuContext.capabilities &= ~(cap))

/* Check if GPU is ready for operations */
#define GPUisReady() (g_gpuContext.is_initialized && !g_gpuContext.is_shutdown)

/* Set error code and message */
#define GPUsetError(code, msg) do { \
    g_gpuContext.last_error = (code); \
    snprintf(g_gpuContext.error_string, sizeof(g_gpuContext.error_string), "%s", (msg)); \
} while(0)

/* Reset error state */
#define GPUclearError() do { \
    g_gpuContext.last_error = 0; \
    g_gpuContext.error_string[0] = '\0'; \
} while(0)

#ifdef __cplusplus
}
#endif

#endif /* GPU_PLUGIN_H */
