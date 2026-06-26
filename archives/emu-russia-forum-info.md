# Emu-Russia Forum GPU Plugin Information

## Forum Topic Details
- **URL**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- **Category**: edgbla's soft / gpuBladeSoft
- **Author**: edgbla (user ID: 735)
- **Last Edit**: 16 Jun 2009, 18:35

## Author Information
**Name**: edgbla  
**System Specs**:
- CPU: Intel Core Quad 9300 2.5GHz
- RAM: 4GB dual channel, OCZ 1333Hz
- GPU: Nvidia GeForce 9800Gtx, 768MB

## Plugin History and Versions

### Development Timeline
The GPU plugin development went through several phases:

#### Version 0.22 (Released)
- Added on-screen messages to confirm actions
- Fixed all known bugs
- Some aspect ratio issues still present (planned for later fixes)

#### Version 0.30
- Fixed rendering bugs in Tales Of Destiny 2, MediEvil2 and Tank Racer
- Removed unneeded information from save state's screenshot
- Improved picture output method (correct proportions and display area)
- Added "Fake 'gpu busy' state" support
- Increased internal resolution up to 4x
- Added deinterlacing method selection
- Added picture movement and zoom functionality
- Added reticle rendering for light gun games

#### Version 0.34
- Fixed rendering bugs in Tales Of Destiny 2, MediEvil2 and Tank Racer
- Removed unneeded information from save state's screenshot

## Technical Specifications

### Plugin Architecture
- **GUI Framework**: GTK (cross-platform)
- **Rendering**: Direct GPU acceleration
- **Shader Support**: Partial support for gpuPeteOGL2 shaders (GLSL only)

### Core Features

#### 1. Internal Resolution
- **Purpose**: Increase image resolution independently in width and height
- **Multiplier**: Arbitrary integer factor
- **Recommended**: 2x2 (optimal balance)
- **Maximum**: 4x (tested)
- **Annotation**: Higher resolutions cause "soapy" textures and poor FPS

#### 2. 24-bit Renderer
- **Purpose**: Improve color quality on Gouraud-shaded polygons
- **Console Native**: 15-bit renderer
- **Mode**: Switches to 24-bit when enabled
- **Options**: 
  - "Gouraud shaded primitives" (recommended)
  - "All primitives" (not recommended - causes artifacts)

#### 3. Texture Bilinear Filtering
- **Purpose**: Smooth texture transitions
- **Console Behavior**: Rounds texture coordinates (causes visible color transitions)
- **Enhancement**: Uses fractional part for weighted color blending

#### 4. Filters
- **Available**: Super Eagle, Sal, Hq, Scale
- **Note**: Resource-intensive, especially combined with high internal resolution

#### 5. Shaders
- **Support**: Partial GLSL shader support
- **Interface**: Combobox filled with shaders from "./shaders" directory
- **Compatibility**: Some shaders work with "4xMSAL", "2xSaL Smart", "HDR TV"

### Rendering Methods

#### Picture Enhancement
1. **Internal Resolution Increase**
   - Most powerful method
   - Independent width/height scaling
   - Recommended: 2x2, maximum tested: 4x

2. **24-bit Renderer**
   - Improves Gouraud shading colors
   - Eliminates hardware plugin artifacts

3. **Texture Bilinear Filtering**
   - Smooths texture transitions
   - Especially effective with high internal resolution

4. **Filters**
   - Super Eagle, Sal, Hq, Scale
   - Resource-intensive

5. **Shaders**
   - GLSL support
   - Partial compatibility with gpuPeteOGL2 shaders

### Known Issues

#### Aspect Ratio
- TV display variations affect output testing
- Some residual aspect ratio issues expected

#### Interlacing
- Counter resolution limits precise timing
- Some interlacing artifacts possible

#### DMA Issues
- ~10 games have graphic bugs due to DMA issues
- Pro Pinball: Fantastic Journey has an interesting bug (author doesn't own the game)

## Code Implementation Details

### Development Goals
1. **Maximum Precision**: Emulate PSX GPU with maximum precision
2. **Quality Enhancement**: Use all available methods to improve image quality
3. **Cross-platform**: GTK-based GUI for Windows/Linux compatibility

### Performance Notes
- Plugin is intentionally slow for precision
- No texture cache emulation (increases CPU load without visible benefit)
- No rendering timing implementation (would make rendering even slower)
- Geometry rendering is currently the only精确 (precise) component

### Technical Challenges

#### Vertex Jitter Issue
- **Problem**: At high internal resolutions (e.g., 4x4), vertices shift significantly
- **Solution**: Special handling for vertex jitter reduction
- **Impact**: Some games (Courier Crisis) still have issues due to camera code problems

#### Debugging Example
- NFS4 and FF8 videos demonstrate vertex jitter improvement
- Internal resolution 3x3 with jitter reduction shows visible quality improvement
- Performance impact: ~20 FPS on author's system

## Plugin API Functions (Inferred)

Based on the forum discussion and typical PSEmuPro GPU plugins:

### Core Functions
- `GPUinit()` - Initialize GPU plugin
- `GPUshutdown()` - Shutdown GPU plugin
- `GPUopen()` - Open GPU for rendering
- `GPUclose()` - Close GPU
- `GPUwriteStatus()` - Write to GPU status register
- `GPUreadStatus()` - Read GPU status register
- `GPUwriteData()` - Write data to GPU
- `GPUreadData()` - Read data from GPU
- `GPUdma()` - DMA transfer handling
- `GPUvblank()` - Vertical blank handling

### Extended Functions (Inferred)
- `GPUsetframelimit()` - Frame rate limiting
- `GPUsetMode()` - Set rendering mode
- `GPUgetMode()` - Get current mode
- `GPUsetExtra()` - Set extra options
- `GPUgetExtra()` - Get extra options

## Download Information

### Location
- **Forum Thread**: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- **Author**: edgbla
- **Category**: edgbla's soft / gpuBladeSoft

### Platform Support
- **Windows**: Full feature set
- **Linux**: Video recording support added
- **Cross-platform**: GTK-based GUI

## Research Notes

### Target for Reverse Engineering
Based on the forum information:
- **Latest Version**: 0.34 (last version mentioned in forum)
- **Platform**: Windows
- **Features**: Complete feature set including all enhancements

### Development Status
- **Current State**: Development paused
- **Reason**: Author working on other parts of the project
- **Future**: Plan to return to GPU plugin development

### Code Quality
- **Precision Focus**: Prioritizes accuracy over performance
- **Resource Usage**: Heavy resource consumption for precision
- **Code Organization**: Cross-platform with GTK GUI

## Next Steps

1. **Download Plugin Binaries**: Find and download version 0.34 DLL
2. **Research Pcsx Source Code**: Look for PSEmuPro plugin API documentation
3. **Identify Target**: Select specific Windows version for decompilation
4. **Create Decompilation Script**: Prepare IDA Pro 6.1 environment

## References
- Original Forum Topic: https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- Author Profile: edgbla (user ID: 735)
- Category: edgbla's soft / gpuBladeSoft
