# GPU Plugin Knowledge Base

## Project Information
- **Project Name**: gpuBladeSoft - PSEmuPro GPU Plugin Source Code Restoration
- **Original Author**: edgbla (emu-russia forum)
- **Current Status**: Reverse Engineering Phase

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
- URL: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- Status: Not yet accessed
- Expected: GPU plugin versions and information

### Pcsx Reference
- Pcsx is the reference emulator for PSEmuPro plugins
- Source code contains plugin interface definitions
- GPU implementation can serve as reference

## Target Selection Criteria

### For Reverse Engineering
1. **Latest Windows version** - Most complete feature set
2. **Stable release** - More likely to have clean code
3. **Well-documented** - Better comments and structure
4. **HexRays compatible** - No anti-decompilation measures

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

## Progress Tracking

### Current Phase
- Phase: Information Gathering
- Status: In Progress

### Completed Tasks
- Project structure created
- Plan documented

### Next Tasks
- Research PSEmuPro specifications
- Access Emu-Russia forum
- Download target binaries

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

## References
- PSEmuPro plugin development documentation
- PlayStation GPU hardware documentation
- Pcsx source code
- Emu-Russia forum discussions
