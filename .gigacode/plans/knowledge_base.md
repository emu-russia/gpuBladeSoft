# GPU Plugin Knowledge Base

## Project Information
- **Project Name**: gpuBladeSoft - PSEmuPro GPU Plugin Source Code Restoration
- **Original Author**: edgbla (emu-russia forum)
- **Current Status**: Phase 3 - Decompilation Setup (COMPLETED)
- **Target Version**: 1.64 (latest Windows version, 25 Aug 2019)

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

## Version 1.64 Features (25 Aug 2019)

### Major Features
- **Multi-threaded Renderer**: Configurable threads (1-6), most beneficial at high internal resolutions (4x4+)
- **Internal Resolution**: Fixed artifacts, maximum increased to 16x16
- **Aspect Ratio**: Custom aspect ratio option added
- **Platform Support**: Windows (x86) and Linux (x86_64) builds
- **Bugfixes**: Shader parameters, negative offset/screen scaling values

### Performance Notes
- Multi-threading most beneficial at high internal resolutions
- Setting threads above physical cores decreases FPS
- Uses 100% of allocated threads
- Power-saving technologies should be disabled for max performance

## Current Research Status

### Emu-Russia Forum Topic
- **URL**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- **Status**: ACCESSED (COMPLETED)
- **Extracted**: GPU plugin versions, author information, feature list
- **Target Version**: 1.64 (latest Windows version)
- **Author**: edgbla (user ID: 735)

### Available Binary Files
- `LFS/gpuBladeSoft-1.64.dll` - Windows x86 plugin binary
- `LFS/gpuBladeSoft-1.64.idb` - IDA Pro 6.8 database
- `LFS/gpuBladeSoft-1.64-Windows-x86.7z` - Original 7z archive

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
- Support stack pointer fixing
- Provide disassembly fallback for failed decompilations

## Documentation Created

### Phase 1-2 Deliverables
1. **Emu-Russia Forum Information**
   - Downloaded HTML archive
   - Extracted GPU plugin version history
   - Documented author information (edgbla)
   - Identified version 1.64 as target

2. **PSEmuPro Plugin Documentation**
   - Archived PSEmuPro plugin API documentation
   - Identified GPU plugin interface functions
   - Documented plugin features

3. **Research Summary**
   - Created comprehensive research document
   - Documented plugin architecture
   - Identified technical challenges

### Version 1.64 Specific
- Multi-threaded renderer architecture
- Internal resolution handling
- Windows/Linux platform differences
- Shader compatibility with gpuPeteOGL2

## References
- PSEmuPro plugin development documentation
- PlayStation GPU hardware documentation
- Pcsx source code
- Emu-Russia forum discussions
- Changelog.md - Version history and features

## Progress
- **Phase**: Decompilation Setup (COMPLETED)
- **Tasks Completed**: 14
- **Target Selected**: Version 1.64
- **Next Phase**: Decompilation

### Phase 3 Starting Items
- [x] Binary extracted and verified
- [x] Plugin structure analyzed
- [x] Available files documented
- [x] Create decompilation script (decompile.py for IDA Pro 6.8)
- [x] Test decompilation environment
- [x] IDC script deleted (replaced by Python version)
