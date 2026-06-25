# PSEmuPro GPU Plugin Research

## Overview
This document tracks our research into PSEmuPro GPU plugin specifications and available versions.

## PSEmuPro Plugin Architecture

### Plugin Types
PSEmuPro supports multiple plugin types:
1. **GPU Plugin** - Graphics Processing Unit emulation
2. **SPU Plugin** - Sound Processing Unit emulation
3. **CD-ROM Plugin** - CD-ROM drive emulation
4. **input Plugin** - Input device emulation
5. **BIOS Plugin** - BIOS replacement

### GPU Plugin Interface
The GPU plugin interface is the primary focus of this project.

#### Core Functions
```c
// Initialization and shutdown
int GPUinit(void);
void GPUshutdown(void);

// Device management
int GPUopen(char *device);
void GPUclose(void);

// Register access
void GPUwriteStatus(u32 data);
u32 GPUreadStatus(void);
void GPUwriteData(u32 data);
u32 GPUreadData(void);

// DMA handling
void GPUdma(u32 *base);

// VBlank handling
void GPUvblank(int count);
```

#### Additional Functions (may be present)
- `GPUgetScreen()`
- `GPUdisplayText()`
- `GPUgetMemory()`
- `GPUgetMode()`
- `GPUsetMode()`
- `GPUgetDefMode()`
- `GPUsetDefMode()`
- `GPUsetExtra()`
- `GPUgetExtra()`

## Research Sources

### 1. Pcsx Source Code
**Status**: Not yet accessed
**Expected Information**:
- Complete GPU plugin interface definition
- Example GPU plugin implementation
- Data structures and constants
- Function signatures

**Search Locations**:
- GitHub: pcsx/pcsx2 repositories
- Old sourceforge/svn repositories
- Emulation forums with source releases

### 2. Emu-Russia Forum
**Topic URL**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
**Status**: Not yet accessed
**Expected Information**:
- GPU plugin version history
- Author information (edgbla)
- Download links for various versions
- Technical discussions about the plugin

### 3. PSEmuPro Documentation
**Status**: Not yet found
**Expected Information**:
- Plugin development guide
- API documentation
- Example plugins

## Target Version Selection

### Selection Criteria
1. **Latest Windows version** - Most complete feature set
2. **Stable release** - Production quality code
3. **HexRays compatibility** - No anti-decompilation
4. **Documentation availability** - Better comments

### Version Identification
- Need to identify version numbers from:
  - File properties in Windows
  - Version strings in binary
  - Forum version history
  - Release dates

## Technical Specifications

### GPU Architecture Emulation
The GPU plugin emulates the PlayStation GPU which includes:
- **VBlank processing** - Vertical blanking interval handling
- **Command parsing** - GPU command queue processing
- **Texture management** - Texture loading and caching
- **Vertex processing** - 3D vertex transformation
- **Rasterization** - Polygon rendering
- **Framebuffer operations** - Display buffer management

### Data Structures
- GPU registers (32-bit)
- Command structures
- Texture descriptors
- Vertex structures

### Calling Conventions
- **stdcall** - Standard calling convention for Windows plugins
- **cdecl** - May be used for some functions

## Known Challenges

### Reverse Engineering Challenges
1. **Code obfuscation** - Possible anti-reverse engineering measures
2. **Optimized code** - Compiler optimizations may complicate analysis
3. **Lost symbols** - No debug symbols in released versions
4. **String encryption** - Possible string obfuscation

### Code Recovery Challenges
1. **Function identification** - Identifying all exported functions
2. **Data structure recovery** - Recovering complex structures
3. **Algorithm understanding** - Understanding complex rendering algorithms
4. **API compatibility** - Ensuring recovered code matches PSEmuPro API

## Next Steps

1. Access Pcsx source code for reference
2. Access Emu-Russia forum for plugin versions
3. Download and analyze target GPU plugin
4. Create decompilation script
5. Begin reverse engineering process

## References
- PSEmuPro plugin documentation (if available)
- PlayStation GPU hardware documentation
- Pcsx source code
- Emu-Russia forum discussions
