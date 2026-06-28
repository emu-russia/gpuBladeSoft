/**
 * @file gpu_znc.h
 * @brief ZNc extended plugin interface structures and functions
 * 
 * ZNc interface extends the standard GPU plugin interface with additional functionality
 * Memory addresses: dword_6F96D020 (0x6F96D020), dword_6FB489C8 (0x6FB489C8)
 */

#ifndef GPU_ZNC_H
#define GPU_ZNC_H

#include <stdint.h>
#include <stddef.h>
#include "gpu_core.h"
#include "gpu_interface.h"

/** @brief ZNc interface version */
#define GPU_ZNC_VERSION        0x0100    /**< ZNc interface version (1.0) */

/** @brief ZNc extended capabilities flags */
#define GPU_ZNC_CAP_MULTI_THREAD   0x0001    /**< Multi-threading support */
#define GPU_ZNC_CAP_ASYNC_RENDER   0x0002    /**< Asynchronous rendering */
#define GPU_ZNC_CAP_HW_ACCEL       0x0004    /**< Hardware acceleration */
#define GPU_ZNC_CAP_STATE_SAVE     0x0008    /**< State save/load */
#define GPU_ZNC_CAP_DEBUG          0x0010    /**< Debug features */

/** @brief Thread pool configuration */
typedef struct {
    uint32_t thread_count;        // number of worker threads
    uint32_t max_queue_size;      // maximum pending tasks
    uint32_t stack_size;          // stack size per thread
    uint32_t priority;            // thread priority
} GPUThreadPoolConfig;

/** @brief Thread pool structure */
typedef struct {
    void **threads;               // array of thread handles
    void *queue;                  // task queue
    uint32_t thread_count;        // current thread count
    uint32_t active_count;        // currently active threads
    uint32_t pending_tasks;       // pending task count
    uint32_t completed_tasks;     // completed task count
    uint32_t is_initialized;      // initialization flag
    uint32_t is_shutdown;         // shutdown flag
} GPUThreadPool;

/** @brief ZNc extended interface structure */
typedef struct {
    GPUInterface base;            // base interface
    
    // Thread pool management
    int (*initThreadPool)(GPUThreadPool *pool, const GPUThreadPoolConfig *config);
    int (*shutdownThreadPool)(GPUThreadPool *pool);
    int (*enqueueTask)(GPUThreadPool *pool, void (*task)(void *), void *arg);
    int (*waitForTask)(GPUThreadPool *pool, uint32_t timeout);
    uint32_t (*getThreadCount)(GPUThreadPool *pool);
    
    // State management
    int (*saveStateEx)(const char *filename, uint32_t slot, uint32_t flags);
    int (*loadStateEx)(const char *filename, uint32_t slot, uint32_t flags);
    int (*getStateSize)(void);
    
    // Rendering optimization
    int (*beginBatch)(void);
    int (*endBatch)(void);
    int (*flushBatch)(void);
    
    // Debug and diagnostics
    void (*logMessage)(const char *level, const char *format, ...);
    void (*dumpStats)(void);
    uint32_t (*getFrameTime)(void);
    
    // Extension data
    void *extension_data;         // extension-specific data
    uint32_t extension_size;      // extension data size
} GPUZNcInterface;

/** @brief ZNc extended function table */
typedef struct {
    uint32_t size;                // size of function table
    uint32_t version;             // interface version
    void **functions;             // function pointers
} GPUZNcFunctionTable;

/** @brief Initialize ZNc interface */
int GPUinitZNcInterface(GPUZNcInterface *iface);

/** @brief Shutdown ZNc interface */
void GPUshutdownZNcInterface(GPUZNcInterface *iface);

/** @brief Get ZNc capabilities */
uint32_t GPUgetZNcCapabilities(void);

/** @brief Set ZNc capabilities */
void GPUsetZNcCapabilities(uint32_t capabilities);

/** @brief Initialize thread pool */
int GPUinitThreadPool(GPUThreadPool *pool, uint32_t thread_count);

/** @brief Shutdown thread pool */
void GPUshutdownThreadPool(GPUThreadPool *pool);

/** @brief Enqueue rendering task */
int GPUenqueueTask(GPUThreadPool *pool, void (*task)(void *), void *arg);

/** @brief Wait for all tasks to complete */
int GPUwaitForAllTasks(GPUThreadPool *pool);

/** @brief Get number of active threads */
uint32_t GPUgetActiveThreads(GPUThreadPool *pool);

#endif /* GPU_ZNC_H */
