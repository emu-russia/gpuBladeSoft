# PSEmuPro GPU Plugin Research Summary

## Forum Information

### Topic: Plugin info, news. / Информация о плагине, новости.
- **URL**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- **Category**: edgbla's soft / gpuBladeSoft
- **Author**: edgbla (user ID: 735)
- **Last Edit**: 16 Jun 2009, 18:35

## Author System Specifications
- **CPU**: Intel Core Quad 9300 2.5GHz
- **RAM**: 4GB dual channel, OCZ 1333Hz
- **GPU**: Nvidia GeForce 9800Gtx, 768MB

## Plugin Versions and Development Timeline

### Version 0.22 (Released)
- Added on-screen messages to confirm actions
- Fixed all known bugs
- Some aspect ratio issues still present (planned for later fixes)

### Version 0.30
- Fixed rendering bugs in Tales Of Destiny 2, MediEvil2 and Tank Racer
- Improved picture output method (correct proportions and display area)
- Added "Fake 'gpu busy' state" support
- Increased internal resolution up to 4x
- Added deinterlacing method selection
- Added picture movement and zoom functionality
- Added reticle rendering for light gun games

### Version 0.34 (Latest)
- Fixed rendering bugs in Tales Of Destiny 2, MediEvil2 and Tank Racer
- Removed unneeded information from save state's screenshot

## Plugin Architecture

### GUI Framework
- **Toolkit**: GTK (cross-platform)
- **Platform Support**: Windows, Linux

### Rendering Features

#### 1. Internal Resolution Increase
- **Purpose**: Increase image resolution independently in width and height
- **Multiplier**: Arbitrary integer factor
- **Recommended**: 2x2 (optimal balance)
- **Maximum Tested**: 4x
- **Performance Note**: Higher resolutions cause "soapy" textures and poor FPS

#### 2. 24-bit Renderer
- **Console Native**: 15-bit renderer
- **Mode**: Switches to 24-bit when enabled
- **Options**: 
  - "Gouraud shaded primitives" (recommended)
  - "All primitives" (not recommended - causes artifacts)

#### 3. Texture Bilinear Filtering
- **Purpose**: Smooth texture transitions
- **Console Behavior**: Rounds texture coordinates
- **Enhancement**: Uses fractional part for weighted color blending

#### 4. Filters
- **Available**: Super Eagle, Sal, Hq, Scale
- **Note**: Resource-intensive, especially combined with high internal resolution

#### 5. Shaders
- **Support**: Partial GLSL shader support
- **Compatibility**: Some shaders work with "4xMSAL", "2xSaL Smart", "HDR TV"

## GPU Plugin Interface Functions

Based on PSEmuPro standard plugin API and the forum discussion:

### Core Functions
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

// Extended functions (inferred)
void GPUsetframelimit(int limit);
int GPUgetMode(void);
void GPUsetMode(int mode);
void GPUsetExtra(int extra);
int GPUgetExtra(void);
```

## Target for Reverse Engineering

### Selected Version
- **Version**: 0.34 (latest from forum)
- **Platform**: Windows
- **Features**: Complete feature set including all enhancements

### Download Location
- **Forum Thread**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- **Category**: edgbla's soft / gpuBladeSoft

## Technical Challenges Identified

### 1. Vertex Jitter Issue
- **Problem**: At high internal resolutions (e.g., 4x4), vertices shift significantly
- **Solution**: Special handling for vertex jitter reduction
- **Impact**: Some games still have issues due to camera code problems

### 2. DMA Issues
- **Scope**: ~10 games have graphic bugs due to DMA issues
- **Notable**: Pro Pinball: Fantastic Journey has an interesting bug

### 3. Rendering Precision
- **Current State**: Only geometry rendering is precise
- **Planned**: Blending algorithm implementation
- **Performance**: Will be slower but more accurate

## Documentation Sources

### Primary Sources
1. **Emu-Russia Forum**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
2. **PSEmuPro Documentation**: https://web.archive.org/web/20100101000000/http://psemupro.com/docs/plugins.txt (archived)
3. **Pcsx Source Code**: https://github.com/pcsx/pcsx

## Reverse Engineering Plan

### Phase 1: Information Gathering ✓
- [x] Access Emu-Russia forum
- [x] Download and analyze forum topic
- [x] Research PSEmuPro plugin API
- [ ] Download target GPU plugin binary (version 0.34)
- [ ] Research Pcsx source code for reference

### Phase 2: Target Selection
- [ ] Download latest Windows version (0.34)
- [ ] Analyze plugin structure
- [ ] Identify exported functions

### Phase 3: Decompilation
- [ ] Load DLL in IDA Pro 6.1
- [ ] Run decompilation script
- [ ] Extract HexRays output

### Phase 4: Source Recovery
- [ ] Analyze decompiled code
- [ ] Organize into modules
- [ ] Post-process and clean up code

## Next Steps

1. **Download GPU Plugin Binary**: Find and download version 0.34 DLL from forum
2. **Analyze Plugin Structure**: Examine exported functions and imports
3. **Create Decompilation Environment**: Prepare IDA Pro 6.1 with HexRays
4. **Develop Decompilation Script**: Create Python script for automated extraction
5. **Begin Reverse Engineering**: Execute decompilation and analyze output

## Notes

- All documentation and comments in English as per requirements
- Use Git LFS for managing large binary files
- Maintain comprehensive documentation throughout the process
- Focus on maximum precision as stated in original plugin goals
