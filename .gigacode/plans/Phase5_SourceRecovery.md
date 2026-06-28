# Phase 5: Source Code Recovery

## Overview
This document tracks our progress in analyzing and organizing the decompiled code from the PSEmuPro GPU plugin version 1.64.

## Current Status
- **Phase**: 5 - Source Recovery (IN PROGRESS)
- **Decompilation Status**: COMPLETED
- **Total Functions**: 60+ decompiled function files
- **Output Location**: `decompiled/hexrays/`

## Function Analysis

### Core GPU Functions (Standard Interface)
The following functions follow the standard PSEmuPro GPU plugin interface:

| Function | Module | Status | Notes |
|----------|--------|--------|-------|
| `GPUinit` | Core | ✓ | Initialization routine |
| `GPUshutdown` | Core | ✓ | Shutdown routine |
| `GPUopen` | Interface | ✓ | Opens GPU for rendering |
| `GPUclose` | Interface | ✓ | Closes GPU |
| `GPUwriteStatus` | Registers | ✓ | Writes to GPU status register |
| `GPUreadStatus` | Registers | ✓ | Reads GPU status register |
| `GPUwriteData` | Registers | ✓ | Writes data to GPU |
| `GPUreadData` | Registers | ✓ | Reads data from GPU |
| `GPUdmaChain` | DMA | ✓ | DMA chain handling |
| `GPUvBlank` | VBlank | ✓ | Vertical blank handling |

### Additional GPU Functions
| Function | Module | Status | Notes |
|----------|--------|--------|-------|
| `GPUabout` | UI | ✓ | About dialog/function |
| `GPUaddVertex` | Rendering | ✓ | Vertex addition |
| `GPUconfigure` | Configuration | ✓ | Configuration dialog |
| `GPUcursor` | UI | ✓ | Cursor handling |
| `GPUdisplayFlags` | Display | ✓ | Display flags |
| `GPUdisplayText` | Display | ✓ | Text display |
| `GPUgetMode` | Mode | ✓ | Get current mode |
| `GPUgetScreenPic` | Snapshot | ✓ | Get screen picture |
| `GPUhSync` | Sync | ✓ | Horizontal sync |
| `GPUmakeSnapshot` | Snapshot | ✓ | Make screen snapshot |
| `GPUpSync` | Sync | ✓ | Pulse sync |
| `GPUreadDataMem` | Memory | ✓ | Read data from memory |
| `GPUreadStatus` | Registers | ✓ | Read status |
| `GPUsetfix` | Fix | ✓ | Set fix mode |
| `GPUsetframelimit` | Frame | ✓ | Set frame limit |
| `GPUsetMode` | Mode | ✓ | Set mode |
| `GPUshowScreenPic` | Snapshot | ✓ | Show screen picture |
| `GPUtest` | Testing | ✓ | Test function |
| `GPUupdateLace` | Update | ✓ | Update lace |
| `GPUvisualVibration` | UI | ✓ | Visual vibration |

### ZN GPU Functions (ZNc Interface)
The following functions appear to be part of the ZNc (ZNc interface) extension:

| Function | Module | Status | Notes |
|----------|--------|--------|-------|
| `ZN_GPUinit` | Core | ✓ | ZNc initialization |
| `ZN_GPUshutdown` | Core | ✓ | ZNc shutdown |
| `ZN_GPUopen` | Interface | ✓ | ZNc open |
| `ZN_GPUclose` | Interface | ✓ | ZNc close |
| `ZN_GPUwriteStatus` | Registers | ✓ | ZNc write status |
| `ZN_GPUreadStatus` | Registers | ✓ | ZNc read status |
| `ZN_GPUwriteData` | Registers | ✓ | ZNc write data |
| `ZN_GPUreadData` | Registers | ✓ | ZNc read data |
| `ZN_GPUdmaChain` | DMA | ✓ | ZNc DMA chain |
| `ZN_GPUgetMode` | Mode | ✓ | ZNc get mode |
| `ZN_GPUsetMode` | Mode | ✓ | ZNc set mode |
| `ZN_GPUtest` | Testing | ✓ | ZNc test |
| `ZN_GPUfreeze` | State | ✓ | ZNc freeze state |
| `ZN_GPUgetScreenPic` | Snapshot | ✓ | ZNc get screen pic |
| `ZN_GPUshowScreenPic` | Snapshot | ✓ | ZNc show screen pic |
| `ZN_GPUmakeSnapshot` | Snapshot | ✓ | ZNc make snapshot |
| `ZN_GPUdmaSliceIn` | DMA | ✓ | ZNc DMA slice in |
| `ZN_GPUdmaSliceOut` | DMA | ✓ | ZNc DMA slice out |
| `ZN_GPUupdateLace` | Update | ✓ | ZNc update lace |

## Module Organization

### Core Module
Contains initialization and shutdown functions:
- `GPUinit.c`
- `GPUshutdown.c`
- `ZN_GPUinit.c`
- `ZN_GPUshutdown.c`

### Interface Module
Contains device management functions:
- `GPUopen.c`
- `GPUclose.c`
- `ZN_GPUopen.c`
- `ZN_GPUclose.c`

### Register Module
Contains register access functions:
- `GPUwriteStatus.c`
- `GPUreadStatus.c`
- `GPUwriteData.c`
- `GPUreadData.c`
- `ZN_GPUwriteStatus.c`
- `ZN_GPUreadStatus.c`
- `ZN_GPUwriteData.c`
- `ZN_GPUreadData.c`

### DMA Module
Contains DMA handling functions:
- `GPUdmaChain.c`
- `ZN_GPUdmaChain.c`
- `ZN_GPUdmaSliceIn.c`
- `ZN_GPUdmaSliceOut.c`

### VBlank Module
Contains vertical blank handling:
- `GPUvBlank.c`

### Display Module
Contains display-related functions:
- `GPUdisplayFlags.c`
- `GPUdisplayText.c`
- `ZN_GPUdisplayFlags.c`

### Mode Module
Contains mode management:
- `GPUgetMode.c`
- `GPUsetMode.c`
- `ZN_GPUgetMode.c`
- `ZN_GPUsetMode.c`

### Snapshot Module
Contains screen snapshot functions:
- `GPUgetScreenPic.c`
- `GPUshowScreenPic.c`
- `GPUmakeSnapshot.c`
- `ZN_GPUgetScreenPic.c`
- `ZN_GPUshowScreenPic.c`
- `ZN_GPUmakeSnapshot.c`

### Sync Module
Contains synchronization functions:
- `GPUhSync.c`
- `GPUpSync.c`

### Frame Module
Contains frame-related functions:
- `GPUsetframelimit.c`

### Fix Module
Contains fix-related functions:
- `GPUsetfix.c`

### Update Module
Contains update functions:
- `GPUupdateLace.c`
- `ZN_GPUupdateLace.c`

### UI Module
Contains UI-related functions:
- `GPUabout.c`
- `GPUcursor.c`
- `GPUvisualVibration.c`

## Data Structures

### Detected Global Variables
From the decompiled code, the following global variables have been identified:

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FB489C8` | 0x6FB489C8 | int | GPU init flag |
| `dword_700584C0` | 0x700584C0 | int | GPU shutdown flag |
| `dword_6FD400E8` | 0x6FD400E8 | int | Status flag |
| `dword_6FD400D0` | 0x6FD400D0 | int | Status flag |
| `dword_6FD400E4` | 0x6FD400E4 | int | Data pointer |
| `dword_6FD400D8` | 0x6FD400D8 | int | Data pointer |
| `dword_6FD400DC` | 0x6FD400DC | int | Data flag |
| `dword_6FD400D4` | 0x6FD400D4 | int | Counter |
| `dword_6FD40994` | 0x6FD40994 | int | VBlank flag |
| `word_6FBB979C` | 0x6FBB979C | word | Status register |
| `byte_6FBB979F` | 0x6FBB979F | byte | Status byte |
| `dword_6FBB5098` | 0x6FBB5098 | int | File pointer |
| `dword_6FBB51E8` | 0x6FBB51E8 | int | Main structure |
| `dword_6FBB52C0` | 0x6FBB52C0 | int | Frame structure |
| `dword_6FBB84D0` | 0x6FBB84D0 | int | Frame mode |
| `dword_6FBB979C` | 0x6FBB979C | int | Status register |
| `dword_6FBBFD70` | 0x6FBBFD70 | int | Texture width |
| `dword_6FBBFD74` | 0x6FBBFD74 | int | Texture height |
| `dword_6FBBFD78` | 0x6FBBFD78 | int | Texture ID |
| `dword_6FBBFD7C` | 0x6FBBFD7C | int | Texture flag |
| `dword_6F96D01C` | 0x6F96D01C | int | ZNc init flag |
| `dword_6F96D018` | 0x6F96D018 | int | ZNc close flag |
| `dword_6F96D020` | 0x6F96D020 | int | State slot |

## Calling Conventions
- **GPU functions**: `__stdcall` (standard Windows calling convention)
- **ZNc functions**: `__stdcall` (standard Windows calling convention)

## Dependencies
- **OpenGL**: Used for screen snapshot and display functions
- **File I/O**: Used for state save/load operations

## Next Steps

### 1. Code Organization
- Create module-based C source files
- Extract data structures
- Define function interfaces
- Create header files

### 2. Documentation
- Add function documentation
- Document data structures
- Create API reference

### 3. Build System
- Create Makefile
- Create project files for common IDEs
- Document build requirements

### 4. Verification
- Compile test builds
- Verify API compatibility
- Test with PSEmuPro

## Challenges Identified

### 1. Variable Names
All variable names are generic (a1, a2, etc.) and need to be reconstructed.

### 2. Data Structures
Structures need to be reconstructed from usage patterns.

### 3. Function Logic
Complex functions like `ZN_GPUupdateLace` (27999 bytes) require careful analysis.

### 4. External Dependencies
Functions calling external libraries (OpenGL) need to be properly mapped.

## Progress Tracking

### Completed Tasks
- [x] Load DLL in IDA Pro 6.8
- [x] Run decompile.py script
- [x] Extract HexRays output
- [x] Identify function categories
- [x] Document global variables
- [x] Analyze calling conventions

### In Progress Tasks
- [ ] Organize code into modules
- [ ] Create header files
- [ ] Document data structures
- [ ] Add meaningful names

### Pending Tasks
- [ ] Create source file structure
- [ ] Write module documentation
- [ ] Create build system
- [ ] Verify API compatibility

## References
- PSEmuPro plugin API documentation
- Pcsx source code (for reference)
- decompiled/hexrays/*.c - Individual function files

## Notes
- All decompiled functions are in C format
- HexRays decompiler successfully processed most functions
- Some functions may have stack pointer issues (handled by fallback)
- ZNc interface appears to be an extended plugin interface
- OpenGL functions are used for screen snapshot functionality
- Multi-threading support may be in the rendering functions