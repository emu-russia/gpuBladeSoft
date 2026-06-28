/**
 * @file gpu_state.h
 * @brief GPU state save/load structures and functions
 * 
 * State save/load structures based on decompiled code analysis
 * Memory addresses: dword_6F96D020 (0x6F96D020), dword_6FB489C8 (0x6FB489C8)
 */

#ifndef GPU_STATE_H
#define GPU_STATE_H

#include <stdint.h>
#include "gpu_core.h"
#include "gpu_interface.h"
#include "gpu_status.h"
#include "gpu_texture.h"
#include "gpu_display.h"
#include "gpu_render.h"

/** @brief State slot configuration */
#define GPU_MAX_STATE_SLOTS    10    /**< Maximum number of state slots */
#define GPU_STATE_HEADER_MAGIC 0x47505544  /**< 'GPUD' state file magic */

/** @brief GPU state header */
typedef struct {
    uint32_t magic;                 // dword_6F96D020 - state file magic ('GPUD')
    uint32_t version;               // state file version
    uint32_t gpu_id;                // GPU identifier
    uint32_t total_size;            // total state size in bytes
    uint32_t checksum;              // state checksum
} GPUStateHeader;

/** @brief GPU state save structure */
typedef struct {
    GPUStateHeader header;          // state header
    GPUInfo gpu;                    // GPU core state
    GPUInterface iface;             // GPU interface state
    GPUStatus status;               // GPU status state
    GPUTexInfo texture;             // texture state
    GPUDisplayConfig display;       // display state
    GPURenderingConfig render;      // rendering state
    uint32_t vram[1024 * 512];      // VRAM contents (512KB)
    uint32_t z_buffer[1024 * 512];  // Z-buffer contents
    uint32_t extra_data[256];       // extra state data
} GPUState;

/** @brief Get current state slot */
static inline uint32_t GPUgetStateSlot(void) {
    extern uint32_t dword_6F96D020;
    return dword_6F96D020;
}

/** @brief Set current state slot */
static inline void GPUsetStateSlot(uint32_t slot) {
    extern uint32_t dword_6F96D020;
    dword_6F96D020 = slot;
}

/** @brief Save GPU state to file */
int GPUsaveState(const char *filename, uint32_t slot);

/** @brief Load GPU state from file */
int GPUloadState(const char *filename, uint32_t slot);

#endif /* GPU_STATE_H */
