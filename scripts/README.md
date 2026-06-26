# Decompilation Script for gpuBladeSoft 1.64

## Overview

This directory contains the decompilation script for extracting HexRays output from the gpuBladeSoft 1.64 GPU plugin DLL.

## Script: decompile.py

The Python script (`decompile.py`) is designed to run within IDA Pro 6.1 with HexRays decompiler.

### Features

1. **Automatic function detection** - Identifies all decompilable functions
2. **Module-based organization** - Groups functions by module based on naming conventions
3. **Error handling** - Handles decompilation failures gracefully
4. **Progress tracking** - Tracks decompilation progress
5. **Logging** - Logs all operations and errors to `decompilation.log`
6. **Detailed statistics** - Generates comprehensive statistics

### Prerequisites

- IDA Pro 6.1 (or compatible version)
- HexRays decompiler (with valid license)
- Python 2.7 or Python 3.x (IDA compatible)
- gpuBladeSoft 1.64 DLL binary

### Output Structure

```
decompiled/
├── functions/           # Individual function files
│   ├── GPUinit.txt
│   ├── GPUshutdown.txt
│   ├── GPUopen.txt
│   └── ...
├── modules/            # Module-based organization
│   ├── core.txt
│   ├── interface.txt
│   ├── registers.txt
│   ├── dma.txt
│   ├── vblank.txt
│   ├── texture.txt
│   ├── rendering.txt
│   └── ...
└── logs/
    ├── decompilation.log
    └── errors.log
```

### Usage Instructions

1. **Load the DLL in IDA Pro 6.1**
   - Open IDA Pro 6.1
   - Load the GPU plugin DLL (`gpuBladeSoft-1.64.dll`)
   - Allow IDA to complete automatic analysis

2. **Verify HexRays availability**
   - Check that HexRays decompiler is installed
   - Verify your license is valid
   - Open the output window (Alt+0) to see progress

3. **Run the decompilation script**
   - Open Script dialog (Alt+F7)
   - Navigate to `scripts/decompile.py`
   - Select and run the script
   - Script will automatically process all functions

4. **Verify output**
   - Check `decompiled/functions/` for individual function files
   - Check `decompiled/modules/` for module-based files
   - Check `decompiled/logs/decompilation.log` for statistics

### Module Classification

Functions are automatically classified into modules based on their names:

| Module | Functions |
|--------|-----------|
| core | GPUinit, GPUshutdown |
| interface | GPUopen, GPUclose |
| registers | GPUwriteStatus, GPUreadStatus, GPUwriteData, GPUreadData |
| dma | GPUdma |
| vblank | GPUvblank |
| texture | GPUsetTexture, GPUgetTexture, GPUsetFilter |
| rendering | GPUdrawPoly, GPUdrawLine, GPUdrawSprite |
| display | GPUupdateDisplay, GPUdisplayText |
| image | GPUloadImage, GPUstoreImage, GPUdrawImage |
| screen | GPUgetScreen |
| mode | GPUgetMode, GPUsetMode, GPUgetDefMode, GPUsetDefMode |
| config | GPUsetConfig, GPUgetConfig |
| state | GPUsaveState, GPUloadState |
| screenshot | GPUgetScreenShot, GPUsetScreenShot |
| thread | GPUsetThreadCount, GPUgetThreadCount |
| internal | GPUsetInternalRes, GPUgetInternalRes |
| multithread | GPUsetMultiThread, GPUgetMultiThread |
| hotkey | GPUsetHotkey, GPUgetHotkey |
| window | GPUsetWindow, GPUgetWindow |
| clip | GPUsetClip, GPUgetClip |
| palette | GPUsetPalette, GPUgetPalette |
| lcd | GPUsetLCD, GPUgetLCD |
| brightness | GPUsetBrightness |
| gamma | GPUsetGamma |
| contrast | GPUsetContrast |
| alpha | GPUsetAlpha |
| blending | GPUsetBlending |
| interlace | GPUsetInterlace |
| resolution | GPUsetResolution |
| aspect | GPUsetAspectRatio, GPUgetAspectRatio |
| vdp | GPUsetVDPregisters, GPUgetVDPregisters |
| extra | GPUsetExtra, GPUgetExtra |

### Troubleshooting

#### Common Issues

1. **HexRays not available**
   - Ensure HexRays decompiler is installed
   - Check license availability
   - Verify IDA Pro 6.1 compatibility

2. **Functions not decompiling**
   - Some functions may be too complex
   - Check error log for details
   - Some functions may be inlined or optimized

3. **Output directory issues**
   - Ensure write permissions
   - Check disk space
   - Verify IDA has access to the project directory

4. **No functions found**
   - Verify the DLL is loaded correctly
   - Check that IDA analysis completed
   - Some functions may be library stubs

### Script Configuration

The script can be customized by modifying the configuration section:

```python
# Output directory
OUTPUT_DIR = "decompiled"

# Module prefixes (add more as discovered)
MODULE_PREFIXES = {
    "GPUinit": "core",
    "GPUshutdown": "core",
    # ... add more
}
```

### Post-Decompilation Processing

After running the decompilation script:

1. Review the decompiled functions in `decompiled/functions/`
2. Analyze module files in `decompiled/modules/`
3. Check statistics in `decompiled/logs/decompilation.log`
4. Identify missing functions that need manual analysis
5. Begin organizing code into source modules

### Future Enhancements

Potential improvements to the script:

1. Support for newer IDA versions
2. Automatic module detection (beyond naming conventions)
3. Function classification heuristics
4. Batch processing for multiple DLLs
5. Integration with source code management
6. Export to different formats (JSON, XML)

### Notes

- All output is in English as per project requirements
- The script preserves function names from IDA
- Module classification is based on naming conventions
- Statistics include success rate and function counts

## Related Files

- `gpuBladeSoft-1.64.dll` - Target binary (in `LFS/extracted/plugins/`)
- `gpuBladeSoft-1.64.idb` - IDA Pro database (in `LFS/extracted/plugins/`)
- `gpuBladeSoft-1.64.ini` - Configuration file (in `LFS/extracted/configs/`)
- `Changelog.md` - Version history and features

## Support

For issues or questions:
1. Check the decompilation log
2. Review the statistics in `decompiled/logs/decompilation.log`
3. Verify HexRays license and installation
4. Check IDA Pro 6.1 documentation
