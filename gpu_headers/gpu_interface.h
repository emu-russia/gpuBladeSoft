/**
 * @file gpu_interface.h
 * @brief GPU interface function declarations and parameters
 * 
 * Function declarations for the GPU plugin interface based on
 * decompiled code analysis from gpuBladeSoft-1.64.dll
 */

#ifndef GPU_INTERFACE_H
#define GPU_INTERFACE_H

#include "gpu_core.h"
#include <stdint.h>

/**
 * @brief Initialize the GPU subsystem
 * @return 0 on success, -1 on failure
 * 
 * This function initializes the GPU subsystem and sets up
 * the main GPU structure at dword_6FB489C8.
 */
int GPUinit(void);

/**
 * @brief Close the GPU subsystem
 * 
 * This function closes the GPU subsystem and cleans up
 * all allocated resources.
 */
void GPUclose(void);

/**
 * @brief Reset the GPU state
 * 
 * This function resets the GPU state to default values.
 */
void GPUreset(void);

/**
 * @brief Write GPU command
 * @param cmd GPU command to write
 * 
 * This function writes a command to the GPU command queue.
 */
void GPUwrite(unsigned int cmd);

/**
 * @brief Read GPU status
 * @return GPU status register value
 * 
 * This function reads the current GPU status register.
 */
unsigned int GPUreadStatus(void);

/**
 * @brief Transfer GPU data
 * @param addr Memory address
 * @param data Data to transfer
 * 
 * This function transfers data to/from GPU memory.
 */
void GPUtransfer(unsigned int addr, unsigned int data);

/**
 * @brief Set GPU mode
 * @param mode GPU mode
 * 
 * This function sets the GPU mode.
 */
void GPUsetMode(unsigned int mode);

/**
 * @brief Get GPU mode
 * @return Current GPU mode
 * 
 * This function returns the current GPU mode.
 */
unsigned int GPUgetMode(void);

/**
 * @brief Update GPU lace
 * @param lines Number of lines to update
 * 
 * This function updates the GPU lace (vertical blanking interval).
 */
void GPUupdateLace(int lines);

/**
 * @brief Freeze GPU state
 * @param a1 Freeze type (0=save, 1=load, 2=state slot change)
 * @param a2 Pointer to state slot number
 * @return 0 on success, -1 on failure
 * 
 * This function freezes (saves/loads) the GPU state for save states.
 */
int GPUfreeze(int a1, int *a2);

#endif /* GPU_INTERFACE_H */
