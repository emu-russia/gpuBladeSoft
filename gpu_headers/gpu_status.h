/**
 * @file gpu_status.h
 * @brief GPU status register structures and access functions
 * 
 * Status register structures based on decompiled code analysis
 * Memory addresses: word_6FBB979C (0x6FBB979C), byte_6FBB979F (0x6FBB979F)
 */

#ifndef GPU_STATUS_H
#define GPU_STATUS_H

#include <stdint.h>

/** @brief GPU status register bit definitions */
#define GPU_STAT_INT          0x0001    /**< Interrupt flag */
#define GPU_STAT_DMA          0x0002    /**< DMA transfer flag */
#define GPU_STAT_READY        0x0004    /**< GPU ready flag */
#define GPU_STAT_VBLANK       0x0008    /**< Vertical blank flag */
#define GPU_STAT_HBLANK       0x0010    /**< Horizontal blank flag */
#define GPU_STAT_DISPLAYDIS   0x0020    /**< Display disable flag */
#define GPU_STAT_MODE         0x00C0    /**< GPU mode mask */
#define GPU_STAT_MODE_GS      0x0000    /**< GS mode */
#define GPU_STAT_MODE_VM      0x0040    /**< VM mode */
#define GPU_STAT_MODE_RM      0x0080    /**< RM mode */
#define GPU_STAT_MODE_HM      0x00C0    /**< HM mode */
#define GPU_STAT_FIFO         0x0300    /**< FIFO status mask */
#define GPU_STAT_RESETPENDING 0x0400    /**< Reset pending flag */
#define GPU_STAT_RESET        0x0800    /**< Reset flag */
#define GPU_STAT_BR             0x1000    /**< Burst run flag */
#define GPU_STAT_IRQ          0x2000    /**< IRQ flag */
#define GPU_STAT_DMAREQ       0x4000    /**< DMA request flag */
#define GPU_STAT_VRAMWR       0x8000    /**< VRAM write flag */

/** @brief GPU status register structure */
typedef struct {
    uint16_t status;              // word_6FBB979C - main status register
    uint8_t  status_ext;          // byte_6FBB979F - extended status
    uint8_t  pad0;                // padding
    uint16_t command;             // command being processed
    uint16_t command_queue[16];   // command queue
    int      queue_head;          // head index of command queue
    int      queue_tail;          // tail index of command queue
    int      queue_count;         // number of commands in queue
} GPUStatusRegister;

/** @brief Get current GPU status */
static inline uint16_t GPUgetStatus(void) {
    extern uint16_t word_6FBB979C;
    return word_6FBB979C;
}

/** @brief Set GPU status */
static inline void GPUsetStatus(uint16_t status) {
    extern uint16_t word_6FBB979C;
    word_6FBB979C = status;
}

/** @brief Get extended GPU status */
static inline uint8_t GPUgetStatusExt(void) {
    extern uint8_t byte_6FBB979F;
    return byte_6FBB979F;
}

/** @brief Set extended GPU status */
static inline void GPUsetStatusExt(uint8_t status) {
    extern uint8_t byte_6FBB979F;
    byte_6FBB979F = status;
}

#endif /* GPU_STATUS_H */
