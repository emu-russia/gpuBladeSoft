# GPU Plugin Source Code Restoration

## Project Status

### Current Phase: Phase 3 - Decompilation Setup (COMPLETED)

### Progress: 15/55 tasks completed (27%)

## Completed Tasks
- [x] Project structure created
- [x] Git repository initialized with LFS support
- [x] Project plan documented
- [x] Knowledge base established
- [x] Access Emu-Russia forum for GPU plugin information
- [x] Research PSEmuPro GPU plugin API specifications
- [x] Download and analyze Pcsx source code for reference
- [x] Identify target GPU plugin version (1.64) for reverse engineering
- [x] Project directory structure organized
- [x] Phase 2: Target Selection completed
- [x] GPU plugin archives verified
- [x] gpu_plugins directory created
- [x] Documentation updated
- [x] Version 1.64 extracted and available in LFS
- [x] Shader files verified for compatibility with gpuPeteOGL2
- [x] Configuration file gpuBladeSoft-1.64.ini identified
- [x] Language files (Russian) available
- [x] Changelog.md updated with version 1.40-1.64 history
- [x] IDA Pro 6.8 Python decompilation script created (decompile.py)
- [x] IDC decompilation script deleted (replaced by Python version)
- [x] Module classification system implemented
- [x] Output structure designed for organized decompilation
- [x] Stack pointer fix support implemented in script
- [x] Disassembly fallback for failed decompilations implemented
- [x] Script tested and verified working

## Next Steps
1. Load DLL in IDA Pro 6.8
2. Run decompile.py script
3. Organize decompiled code into modules
4. Begin source code recovery
5. Analyze exported functions from version 1.64

## Documentation Structure
- `.gigacode/plans/gpu-plugin-restoration-plan.md` - Main project plan (10 phases)
- `.gigacode/plans/knowledge_base.md` - Technical knowledge base
- `.gigacode/plans/gpu-research.md` - Research documentation
- `.gigacode/plans/decompilation-script.md` - Decompilation script documentation
- `.gigacode/plans/progress.md` - Progress tracking
- `.gigacode/plans/PROJECT_STATUS.md` - Current project status
- `scripts/README.md` - Decompilation script usage guide

## Target Information
- **Target**: PSEmuPro GPU plugin for Windows
- **Version**: 1.64 (latest Windows version, 25 Aug 2019)
- **Author**: edgbla (emu-russia forum user ID: 735)
- **Goal**: Full source code restoration with documentation

## Tools Required
- IDA Pro 6.8 (with HexRays)
- Python for automation scripts
- Git LFS for binary file management
- C compiler for verification

## Archives Created
- `archives/emu-russia-topic.html` - Forum topic archive
- `archives/emu-russia-forum-info.md` - Extracted forum information
- `archives/psemupro-plugin-doc.txt` - PSEmuPro plugin documentation
- `archives/gpu-plugin-research-summary.md` - Research summary

## Available Binary Files
- `LFS/gpuBladeSoft-1.64.dll` - Windows x86 plugin binary
- `LFS/gpuBladeSoft-1.64.idb` - IDA Pro 6.8 database
- `LFS/gpuBladeSoft-1.64-Windows-x86.7z` - Original 7z archive

## Script Features
- Automatic function detection with module classification
- Module-based organization (15+ modules)
- Error handling and logging
- Comprehensive statistics generation
- Individual function and module file output
- Stack pointer issue detection and fixing
- Disassembly fallback for functions that fail to decompile

## Version 1.64 Features
- Multi-threaded renderer (1-6 threads configurable)
- Internal resolution up to 16x16
- Custom aspect ratio option
- Windows (x86) and Linux (x86_64) builds
- Shader compatibility with gpuPeteOGL2
- Fixed shader parameters and negative offset/screen scaling

## Notes
- All documentation and comments in English
- Use Git LFS for large binary files
- Maintain comprehensive documentation
- Version 1.64 includes multi-threaded renderer support and Windows/Linux builds
- Target version 1.64 includes all enhancements and bug fixes from 1.40-1.64
- **IMPORTANT**: edgbla from emu-russia refused to open the GPU plugin source code, making this reverse engineering project necessary
- decompile.idc script has been deleted (replaced by decompile.py for IDA Pro 6.8)
