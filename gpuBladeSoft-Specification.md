# gpuBladeSoft GPU Plugin Specification

## Overview

**gpuBladeSoft** is a reverse-engineered GPU plugin for PlayStation emulators. It was developed as a community effort after the original author, edgbla (formerly of emu-russia forum), refused to open-source the plugin's source code.

This document provides a comprehensive technical specification of the plugin's architecture, interfaces, functionality, and reverse-engineered implementation details.

---

## Historical Context

- **Original Author**: edgbla (emu-russia forum)
- **Project Status**: Reverse-engineered from decompiled binary code
- **Version**: 1.64 (final version before reverse engineering)
- **Purpose**: GPU rendering plugin for PlayStation emulators (PSEmuPro, PCSX2, ZiNc, pSxMAME)

### Why Reverse Engineering?

The original author declined to release the source code, making this project necessary to:
- Preserve and maintain the plugin functionality
- Enable continued development and bug fixes
- Provide educational material for emulator development
- Allow community contributions and improvements

---

## Plugin Architecture

### Core Components

The gpuBladeSoft plugin is a Windows DLL (or Linux SO) that implements the PSEmu Plugin API for GPU operations. The architecture follows a modular design:

```
┌─────────────────────────────────────────────────────────────┐
│                    GPU Plugin Interface                     │
│  (PSEmu Plugin API - GPU Type)                              │
└─────────────────────────────────────────────────────────────┘
                            │
        ┌───────────────────┼───────────────────┐
        ▼                   ▼                   ▼
┌─────────────────┐ ┌─────────────────┐ ┌───────────────────┐
│   Rendering     │ │   Texture       │ │   Display         │
│   Engine        │ │   Management    │ │   Management      │
│   (GPU Core)    │ │   System        │ │   (Screen/Window) │
└─────────────────┘ └─────────────────┘ └───────────────────┘
        │                   │                   │
        ▼                   ▼                   ▼
┌─────────────────┐ ┌─────────────────┐ ┌───────────────────┐
│   OpenGL/Direct │ │   VRAM          │ │   Configuration   │
│  3D Hardware    │ │   Emulation     │ │   System          │
└─────────────────┘ └─────────────────┘ └───────────────────┘
```

### Data Structures

#### GPU Context (`gpuContext`)
```c
// Global context structure (partial - reverse engineered)
struct gpuContext {
    // GPU registers
    uint32_t gpuRegister0;    // 0x6FBB979C
    uint32_t gpuRegister1;    // 0x6FBB97A0
    
    // Rendering state
    int polygonRendererMode;  // 0x6FBB9558
    int primitiveEnable[256]; // 0x6FBB95A8 - per-primitive enable flags
    
    // Display settings
    int fullscreenMode;       // 0x6FBB52C0
    int fullscreenWidth;      // 0x6FBB52C8
    int fullscreenHeight;     // 0x6FBB52CC
    int fullscreenColorDepth; // 0x6FBB52D0
    int fullscreenRefreshRate; // 0x6FBB52D4
    
    // Processing settings
    int internalResolutionX;  // 0x6FBB52F0
    int internalResolutionY;  // 0x6FBB52F4
    int use32bitRenderer;     // 0x6FBB52F8
    int ditheringMethod;      // 0x6FBB52FC
    
    // Post-processing
    int shaderState;          // 0x6FBB5410
    char shaderName[256];     // 0x6FBB5414
    int shaderLevel;          // 0x6FBB5514
    int brightness;           // 0x6FBB5518
    int gamma;                // 0x6FBB551C
    int contrast;             // 0x6FBB5520
    
    // Visible area settings
    int visibleAreaMode;      // 0x6FBB5538
    int ntscLeft;             // 0x6FBB7560
    int ntscTop;              // 0x6FBB7564
    int palLeft;              // 0x6FBB7568
    int palTop;               // 0x6FBB756C
    
    // Hotkeys
    char hotkeys[16][32];     // 0x6FBB52C0 - 16 hotkey slots
    
    // Misc settings
    int showStatus;           // 0x6FBB84D0
    int showInfo;             // 0x6FBB84D4
    int screenRumble;         // 0x6FBB84D8
    int crosshairType[9];     // 0x6FBB84DC
    float crosshairSize[9];   // 0x6FBB8500
};
```

---

## PSEmu Plugin API

### Function Signatures

The plugin implements the standard PSEmu GPU plugin API:

```c
// Initialization and Cleanup
int GPUinit(void);
int GPUopen(unsigned long *pulGPUBusy);
int GPUclose(void);
int GPUshutdown(void);

// Testing and Status
int GPUtest(void);
void GPUdisplayText(unsigned long *pulGPUBusy);
void GPUdisplayFlags(unsigned long *pulGPUBusy);

// Rendering Control
void GPUvBlank(int signal);
void GPUhSync(int signal);
void GPUupdateLace(void);
void GPU dmaChain(unsigned long *pulStart, unsigned long length);

// Data Transfer
void GPUwriteData(unsigned long data);
void GPUwriteDataMem(unsigned long *pulData, unsigned long length);
unsigned long GPUreadData(void);
int GPUreadDataMem(unsigned long *pulData, unsigned long length);
unsigned long GPUreadStatus(void);

// Mode Control
int GPUgetMode(void);
void GPUsetMode(unsigned long mode);
void GPUsetfix(unsigned long fix);

//Frame Limiting
int GPUsetframelimit(int limit);

// Texture Management
void GPUaddVertex(short x, short y, long u, long v, long col, long tex);
void GPUmakeSnapshot(void);

// Screenshot and Recording
void GPUgetScreenPic(unsigned long *pulData);
int GPUshowScreenPic(unsigned long *pulData);
void GPUcursor(char flag, short x, short y);
int GPUvisualVibration(unsigned long pulData1, unsigned long pulData2);
void GPUfreeze(int mode, unsigned long *pulData);
```

### Function Descriptions

#### GPUinit
Initializes the GPU plugin. Loads configuration and initializes OpenGL/Direct3D context.

**Return Values:**
- `0`: Success
- Non-zero: Error occurred

#### GPUopen
Opens the GPU plugin for rendering. Sets up the rendering window and context.

**Parameters:**
- `pulGPUBusy`: Pointer to busy flag variable

**Return Values:**
- `0`: Success
- Non-zero: Error occurred

#### GPUclose
Closes the GPU plugin and releases resources.

**Return Values:**
- `0`: Success
- Non-zero: Error occurred

#### GPUshutdown
Shuts down the GPU plugin completely.

**Return Values:**
- `0`: Success
- Non-zero: Error occurred

#### GPUtest
Tests the GPU plugin status.

**Return Values:**
- `0`: Success (PSE_GPU_ERR_SUCCESS)
- Non-zero: Error code

#### GPUvBlank
Signals vertical blanking interval. Called by the emulator at the start of VBlank.

**Parameters:**
- `signal`: VBlank signal number

#### GPUhSync
Signals horizontal sync. Called by the emulator for horizontal synchronization.

**Parameters:**
- `signal`: HSync signal number

#### GPUupdateLace
Updates the display lace (interlaced frame). This is the main rendering function that processes accumulated GPU commands and displays the frame.

**Key Operations:**
- Processes accumulated GPU commands
- Renders the current frame
- Handles screenshot recording
- Handles video recording
- Manages frame rate limiting
- Processes configuration hotkeys

#### GPUdmaChain
Processes a DMA chain for GPU data transfer.

**Parameters:**
- `pulStart`: Start of DMA chain
- `length`: Length of DMA chain

#### GPUwriteData
Writes a single data word to the GPU.

**Parameters:**
- `data`: 32-bit data word

#### GPUwriteDataMem
Writes multiple data words to the GPU.

**Parameters:**
- `pulData`: Pointer to data array
- `length`: Number of words to write

#### GPUreadData
Reads a data word from the GPU.

**Returns:** 32-bit data word

#### GPUreadDataMem
Reads multiple data words from the GPU.

**Parameters:**
- `pulData`: Pointer to data array
- `length`: Number of words to read

**Returns:** Number of words read

#### GPUreadStatus
Reads the GPU status register.

**Returns:** 32-bit status register value

#### GPUgetMode
Gets the current GPU mode.

**Returns:** Current GPU mode

#### GPUsetMode
Sets the GPU mode.

**Parameters:**
- `mode`: New GPU mode

#### GPUsetfix
Sets GPU fix value.

**Parameters:**
- `fix`: Fix value

#### GPUsetframelimit
Sets the frame rate limit.

**Parameters:**
- `limit`: Frame limit (0-2)

**Returns:** 1 if limit was set, 0 otherwise

#### GPUaddVertex
Adds a vertex for rendering.

**Parameters:**
- `x`, `y`: Screen coordinates
- `u`, `v`: Texture coordinates
- `col`: Color value
- `tex`: Texture page information

#### GPUmakeSnapshot
Creates a snapshot of the current state.

#### GPUgetScreenPic
Gets a screenshot of the current screen.

**Parameters:**
- `pulData`: Pointer to store screenshot data

#### GPUshowScreenPic
Shows a previously captured screenshot.

**Parameters:**
- `pulData`: Pointer to screenshot data

**Returns:** 0 on success

#### GPUcursor
Sets the cursor position and visibility.

**Parameters:**
- `flag`: Cursor flag
- `x`: X coordinate
- `y`: Y coordinate

**Returns:** Cursor index

#### GPUvisualVibration
Controls visual vibration effects.

**Parameters:**
- `pulData1`: Vibration data 1
- `pulData2`: Vibration data 2

**Returns:** Screen rumble flag

#### GPUfreeze
Freezes/thaws the GPU state for savestates.

**Parameters:**
- `mode`: 0=freeze, 1=thaw, 2=change slot
- `pulData`: Pointer to save buffer

**Returns:** 1 on success, 0 otherwise

---

## Rendering Modes

The plugin supports multiple rendering modes for polygons:

| Mode | Value | Description |
|------|-------|-------------|
| Standard | 0 | Standard polygon rendering |
| Wired | 1 | Wireframe rendering |
| Point | 2 | Point rendering |
| Non-textured | 3 | Non-textured polygon rendering |
| Non-textured+Wired | 4 | Combined non-textured and wired |
| Non-textured+Point | 5 | Combined non-textured and point |
| Standard+Wired | 6 | Combined standard and wired |
| Standard+Point | 7 | Combined standard and point |

---

## Visible Area Modes

| Mode | Value | Description |
|------|-------|-------------|
| Perfect | 0 | Perfect visible area (NTSC/PAL optimized) |
| Standard | 1 | Standard visible area |
| Custom | 2 | Custom visible area settings |
| Full VRAM (4-bit) | 3 | Full VRAM 4-bit mode |
| Full VRAM (8-bit) | 4 | Full VRAM 8-bit mode |
| Full VRAM (15-bit) | 5 | Full VRAM 15-bit mode |
| Full VRAM (24-bit) | 6 | Full VRAM 24-bit mode |

---

## Configuration System

### Configuration File Format

The plugin uses an INI-style configuration file with the following sections:

```ini
[display settings]
fullscreen=0
fullscreenmode=0
fullscreenwidth=640
fullscreenheight=480
fullscreencolordepth=32
fullscreenrefreshrate=60
windowedwidth=640
windowedheight=480
windowedmode=0
waitforvsync=0

[framerate]
fpslimitation=1
framerate=100

[processing]
internalresolutionx=1
internalresolutiony=1
use32bitrenderer=0
ditheringmethod=1
progressivescanrendering=0
postprocessing:deinterlacingmethod=0

[postprocessing]
screenfiltering=0
screenfiltername=Disabled
shaderstate=0
shadername=
shaderlevel=0
screenbilinearfiltering=0
brightness=0
gamma=0
contrast=0

[visible area]
preferences=1
ntscleft=608
ntsctop=16
palleft=638
paltop=35
positionx=0.0
positiony=0.0
mirroringx=0
mirroringy=0
zoomingw=0.0
zoomingh=0.0
overscan=0.0

[advanced]
polygonrenderer=0
improvedcoordsaccuracy=0
tesselation=0
vram2mb=0
texturereplacementcollect=0
texturereplacementreplace=0
texturereplacementcollectpath=/replacement/default/collect
texturereplacementreplacepath=/replacement/default/replace

[hot keys]
configdialog0=
showstatus0=
showinfo0=
fpslimitation0=
fastforward0=
togglefullscreen0=
showhidecursor0=
togglescreenbilinear0=
decreaseinternalresolutionx0=
increaseinternalresolutionx0=
decreaseinternalresolutiony0=
increaseinternalresolutiony0=
changerenderercolormode0=
changeditheringmethod0=
changevisiblemode0=
toggleshaderstate0=
reloadshader0=
decreaseshaderlevel0=
increaseshaderlevel0=
decreasebrightness0=
increasebrightness0=
decreasegamma0=
increasegamma0=
decreasecontrast0=
increasecontrast0=
rotatescreen0=
movescreenleft0=
movescreenright0=
movescreenup0=
movescreendown0=
decreasezoomw0=
increasezoomw0=
decreasezoomh0=
increasezoomh0=
fliph0=
flipv0=
decreaseoverscan0=
increaseoverscan0=
resetscreensettings0=
changepolygonrenderer0=
toggleimprovedcoordsaccuracy0=
toggletesselation0=
texturereplacementcollect0=
texturereplacementreplace0=
changerenderingmode0=
changerenderingwiredmode0=
changerenderingpointmode0=
changerenderingnontexturedmode0=
changerenderingtexturedmode0=
toggleshowframedrawingprocess0=
screenshot10=
screenshot20=
screenshot30=
screenshot40=
videorecording10=
videorecording20=
videorecording30=
videorecording40=
togglecommandsplaying0=
screenshot50=
screenshot5toggle0=
```

### Configuration Functions

#### GPUconfigure
Opens the configuration dialog for user settings.

**Return Values:**
- `0`: Success
- Non-zero: Error occurred

---

## Debug/Debug Console Commands

The plugin includes a debug command interpreter (function `sub_6F681700`) that supports the following commands:

| Command | Hex ID | Description |
|---------|--------|-------------|
| (none) | 0x00 | List available commands |
| Ok | 0x64 | Echo command |
| f | 0x66 | Set register 1010 |
| h | 0x68 | Set bit in register |
| j | 0x6A | Set register 1014 |
| l | 0x6C | Set bit in register 1014 |
| n | 0x6E | Set polygon rendering mode |
| o | 0x6F | Toggle full VRAM mode |
| q | 0x71 | Enable/disable primitive |
| s | 0x73 | Enable all primitives |
| t | 0x74 | List disabled primitives |
| x | 0x78 | Step-by-step mode |
| z | 0x7A | Load TIM file |
| \| | 0x7C | Fill rectangle |
| \x80 | 0x80 | Dump tpage to PNG |
| \x81 | 0x81 | Dump tpage to TIM |
| \x83 | 0x83 | Screenshot |
| \x85 | 0x85 | Load text data to VRAM |
| \x87 | 0x87 | Show frame drawing process |
| 500 | 0x1F4 | Set logging level |
| 999 | 0x3E7 | Exit |

---

## Hotkey System

The plugin supports 16 configurable hotkey sets with the following functions:

| Hotkey | Description |
|--------|-------------|
| configdialog | Open configuration dialog |
| showstatus | Toggle status display |
| showinfo | Toggle info display |
| fpslimitation | Toggle FPS limitation |
| fastforward | Toggle fast forward |
| togglefullscreen | Toggle fullscreen mode |
| showhidecursor | Show/Hide cursor |
| togglescreenbilinear | Toggle bilinear filtering |
| decreaseinternalresolutionx | Decrease X resolution |
| increaseinternalresolutionx | Increase X resolution |
| decreaseinternalresolutiony | Decrease Y resolution |
| increaseinternalresolutiony | Increase Y resolution |
| changerenderercolormode | Change color mode |
| changeditheringmethod | Change dithering method |
| changevisiblemode | Change visible area mode |
| toggleshaderstate | Toggle shader state |
| reloadshader | Reload shader |
| decreaseshaderlevel | Decrease shader level |
| increaseshaderlevel | Increase shader level |
| decreasebrightness | Decrease brightness |
| increasebrightness | Increase brightness |
| decreasegamma | Decrease gamma |
| increasegamma | Increase gamma |
| decreasecontrast | Decrease contrast |
| increasecontrast | Increase contrast |
| rotatescreen | Rotate screen |
| movescreenleft | Move screen left |
| movescreenright | Move screen right |
| movescreenup | Move screen up |
| movescreendown | Move screen down |
| decreasezoomw | Decrease zoom width |
| increasezoomw | Increase zoom width |
| decreasezoomh | Decrease zoom height |
| increasezoomh | Increase zoom height |
| fliph | Flip horizontally |
| flipv | Flip vertically |
| decreaseoverscan | Decrease overscan |
| increaseoverscan | Increase overscan |
| resetscreensettings | Reset screen settings |
| changepolygonrenderer | Change polygon renderer |
| toggleimprovedcoordsaccuracy | Toggle coordinate accuracy |
| toggletesselation | Toggle tesselation |
| texturereplacementcollect | Toggle texture collection |
| texturereplacementreplace | Toggle texture replacement |
| changerenderingmode | Change rendering mode |
| changerenderingwiredmode | Change wired mode |
| changerenderingpointmode | Change point mode |
| changerenderingnontexturedmode | Change non-textured mode |
| changerenderingtexturedmode | Change textured mode |
| toggleshowframedrawingprocess | Toggle frame drawing process |
| screenshot1-4 | Screenshot modes 1-4 |
| videorecording1-4 | Video recording modes 1-4 |
| togglecommandsplaying | Toggle command playing |
| screenshot5 | Screenshot mode 5 |
| screenshot5toggle | Toggle screenshot mode 5 |

---

## Texture Replacement System

The plugin supports texture replacement for enhanced graphics:

### Collect Mode
Collects original textures from the game for later analysis or replacement.

### Replace Mode
Replaces original textures with custom textures from a specified directory.

### Configuration
```ini
[advanced]
texturereplacementcollect=0
texturereplacementreplace=0
texturereplacementcollectpath=/replacement/default/collect
texturereplacementreplacepath=/replacement/default/replace
```

---

## Screenshot and Video Recording

### Screenshot Modes
| Mode | Description |
|------|-------------|
| 1 | Standard screenshot |
| 2 | Alternate screenshot |
| 3 | Additional screenshot |
| 4 | Main screenshot |
| 5 | Extended screenshot |

### Video Recording Modes
| Mode | Description |
|------|-------------|
| 1-4 | Four different video recording configurations |

---

## Build System

### Makefile Targets

```makefile
all           - Build the plugin (default)
clean         - Remove build artifacts
distclean     - Remove all generated files
install       - Install the plugin
uninstall     - Uninstall the plugin
debug         - Build debug version
release       - Build release version
check-deps    - Check for required dependencies
help          - Show this help message
```

### Build Requirements
- GCC or compatible compiler
- Make
- OpenGL headers and libraries (for GPU rendering)

---

## Known Limitations

1. **Decompilation Quality**: Some functions could not be fully decompiled due to:
   - Stack pointer issues
   - Complex obfuscation
   - Missing debug symbols

2. **Unsupported Features**:
   - Full alpha blending (research ongoing)
   - Stereo renderer (research ongoing)
   - Z-buffer implementation (research ongoing)

3. **Performance**:
   - Multi-threaded renderer has limited performance gain
   - High internal resolutions significantly impact FPS

---

## Future Development

### Planned Features
- Full alpha blending support
- Stereo renderer implementation
- Z-buffer support for proper depth rendering
- Additional shaders
- Improved texture filtering
- Hardware acceleration enhancements

### Community Involvement
This is a community-driven reverse engineering project. Contributions are welcome for:
- Code improvements and bug fixes
- Documentation updates
- Testing and quality assurance
- Feature development

---

## References

- **Original Author**: edgbla (emu-russia forum)
- **Project**: gpuBladeSoft reverse engineering
- **Plugin API**: PSEmu Plugin Developer Kit Header (PSEmu Plugin Defs.h)
- **Compatible Emulators**: PSEmuPro, PCSX2, ZiNc, pSxMAME

---

## License

This project is based on reverse-engineered code from the original gpuBladeSoft plugin. The original copyright remains with the author. This specification is provided for educational and preservation purposes.

---

*Last updated: 2026-06-29*
