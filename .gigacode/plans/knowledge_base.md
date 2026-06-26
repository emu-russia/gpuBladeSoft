# GPU Plugin Knowledge Base

## Project Information
- **Project Name**: gpuBladeSoft - PSEmuPro GPU Plugin Source Code Restoration
- **Original Author**: edgbla (emu-russia forum)
- **Current Status**: Phase 2 In Progress - Target Selection
- **Target Version**: 0.34 (latest Windows version)

## Key Resources

### PSEmuPro Plugin API
PSEmuPro uses a standard plugin interface for GPU, SPU, CD-ROM, and other components. The GPU plugin interface typically includes:

- **GPUinit()**: Initialize the GPU
- **GPUshutdown()**: Shutdown the GPU
- **GPUopen()**: Open GPU for rendering
- **GPUclose()**: Close GPU
- **GPUwriteStatus()**: Write to GPU status register
- **GPUreadStatus()**: Read GPU status register
- **GPUwriteData()**: Write data to GPU
- **GPUreadData()**: Read data from GPU
- **GPUdma()**: DMA transfer handling
- **GPUvBlank()**: Vertical blank handling

### Plugin Interface Structure
```c
typedef struct {
    int  (*init)(void);
    void (*shutdown)(void);
    int  (*open)(char * device);
    void (*close)(void);
    void (*writeStatus)(u32 data);
    u32  (*readStatus)(void);
    void (*writeData)(u32 data);
    u32  (*readData)(void);
    void (*dma)(u32 *base);
    void (*vblank)(int count);
    // Additional functions may be present
} GPUplugin;

extern GPUplugin GPUpluginInterface;
```

## Current Research Status

### Emu-Russia Forum Topic
- **URL**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- **Status**: ACCESSED (COMPLETED)
- **Extracted**: GPU plugin versions, author information, feature list
- **Target Version**: 0.34 (latest Windows version)
- **Author**: edgbla (user ID: 735)
- **System Specs**: Intel Core Quad 9300, 4GB RAM, GeForce 9800Gtx

### Pcsx Reference
- Pcsx is the reference emulator for PSEmuPro plugins
- Source code contains plugin interface definitions
- GPU implementation can serve as reference
- Downloaded PSEmuPro plugin documentation from archive.org

## Target Selection Criteria

### For Reverse Engineering
1. **Latest Windows version** - Most complete feature set ✓
2. **Stable release** - More likely to have clean code ✓
3. **Well-documented** - Better comments and structure ✓
4. **HexRays compatible** - No anti-decompilation measures ✓

## Known Challenges

### Anti-Reverse Engineering
- Code obfuscation
- Anti-debugging measures
- String encryption

### Code Recovery
- Lost variable names
- Complex control flow
- Inlined functions
- Optimized code patterns

## Knowledge Patterns

### Common GPU Functions
1. **Initialization routines**
2. **Command parsing**
3. **Texture handling**
4. **Vertex processing**
5. **Rasterization**
6. **Framebuffer operations**

### Data Structures
- GPU registers
- Command queues
- Texture descriptors
- Framebuffer descriptors

## Technical Notes

### IDA Pro Configuration
- Architecture: x86 (Windows)
- Calling convention: stdcall
- Data types: 32-bit integers, pointers

### HexRays Script Requirements
- Extract all decompiled functions
- Save to separate files
- Include function names and comments
- Handle module organization

## Documentation Created

### Phase 1 Deliverables
1. **Emu-Russia Forum Information**
   - Downloaded HTML archive
   - Extracted GPU plugin version history
   - Documented author information (edgbla)
   - Identified version 0.34 as target

2. **PSEmuPro Plugin Documentation**
   - Archived PSEmuPro plugin API documentation
   - Identified GPU plugin interface functions
   - Documented plugin features

3. **Research Summary**
   - Created comprehensive research document
   - Documented plugin architecture
   - Identified technical challenges

## References
- PSEmuPro plugin development documentation
- PlayStation GPU hardware documentation
- Pcsx source code
- Emu-Russia forum discussions

## Progress
- **Phase**: Target Selection (IN PROGRESS)
- **Tasks Completed**: 10
- **Target Selected**: Version 0.34
- **Directory Structure**: Organized
- **Next Phase**: Decompilation Setup

### Phase 2 Completed Items
- [x] Directory structure organized (gpu_plugins/, decompiled/, etc.)
- [x] Archive verification completed
- [x] Target selection documented
- [x] Phase 2 progress tracking initiated
