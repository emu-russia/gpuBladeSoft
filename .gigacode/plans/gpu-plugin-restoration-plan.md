# GPU Plugin Source Code Restoration Plan for PSEmuPro

## Project Overview
This project aims to restore the source code for a GPU plugin for PSEmuPro (PlayStation emulator) through reverse engineering. The original author (edgbla from emu-russia) has not released the source code, so we will use decompilation techniques to recover the implementation.

**IMPORTANT NOTICE**: edgbla from emu-russia forum refused to open the GPU plugin source code, making this reverse engineering project necessary.

## Current State
- **Project Directory**: `c:\\Work\\gpuBladeSoft`
- **Git Status**: Initialized with LFS support
- **Current Files**: README.md, LICENSE, Changelog.md
- **Repository**: git@github.com:gigacode/gpuBladeSoft.git (hypothetical)
- **Target Version**: 1.64 (extracted in LFS)
- **Current Phase**: Phase 3 - Decompilation Setup (COMPLETED)
- **Binary Files Available**:
  - `LFS/gpuBladeSoft-1.64.dll` - Windows x86 plugin binary
  - `LFS/gpuBladeSoft-1.64.idb` - IDA Pro 6.8 database
  - `LFS/gpuBladeSoft-1.64-Windows-x86.7z` - Original 7z archive

## Phase 1: Information Gathering and Research

### 1.1 Research PSEmuPro Plugin Specifications
- Search for PSEmuPro plugin API documentation
- Find Pcsx source code with GPU plugin specifications
- Document the GPU plugin interface and requirements

### 1.2 Research Emu-Russia Forum Topic
- Access https://forum.emu-russia.net/viewtopic.php?f=29&t=1188
- Extract information about available GPU plugin versions
- Identify the latest Windows version for reverse engineering

### 1.3 Search for PSEmuPro emulators and GPU plugins
- Search GitHub, old software repositories for PSEmuPro
- Look for Pcsx source code repositories
- Find documentation about GPU plugin structure

## Phase 2: Repository Organization

### 2.1 Set up Git LFS for large binary files
- Initialize LFS for DLL files and archives
- Create LFS tracking rules for emulator archives

### 2.2 Organize project structure
```
gpuBladeSoft/
├── docs/                    # Documentation
│   ├── specifications/     # Plugin API specs
│   ├── research/           # Research notes
│   └── reverse_engineering/ # Reverse engineering notes
├── archives/               # Downloaded emulator archives (LFS)
│   ├── pcsx/              # Pcsx emulator sources
│   ├── psemupro/          # PSEmuPro versions
│   └── gpu_plugins/       # GPU plugin versions
├── decompiled/            # Decompilation output
│   ├── hexrays/          # HexRays output
│   └── modules/          # Reorganized modules
├── scripts/               # Automation scripts
│   ├── decompile.py      # IDA decompilation script (Python)
│   └── process.py        # Post-processing scripts
└── src/                   # Recovered source code
    ├── gpu_core/         # Core GPU functionality
    ├── gpu_interface/    # Plugin interface
    └── gpu_render/       # Rendering functions
```

### 2.3 Create memory bank for agent progress tracking
- Create progress tracking files
- Create knowledge base documentation
- Set up status monitoring

## Phase 3: Download and Archive Emulators

### 3.1 Download Pcsx source code
- Clone/download Pcsx repository
- Extract GPU-related code for reference

### 3.2 Download PSEmuPro versions
- Download PSEmuPro emulator archives
- Save to LFS for version management

### 3.3 Download GPU plugin versions
- Download all available GPU plugin versions
- Organize by version and platform

## Phase 4: Select Target for Reverse Engineering

### 4.1 Choose target version
- Select latest Windows GPU plugin version
- Verify compatibility with PSEmuPro API

### 4.2 Document target specifications
- Plugin version and build information
- Dependencies and requirements
- Expected functionality

### 4.3 Version 1.64 Specifics
- Multi-threaded renderer (1-6 threads configurable)
- Internal resolution up to 16x16
- Custom aspect ratio option
- Windows (x86) and Linux (x86_64) builds
- Shader compatibility with gpuPeteOGL2

## Phase 5: Create Decompilation Script

### 5.1 Develop IDA Pro 6.8 Python decompilation script
- Script must load DLL in IDA Pro
- Extract all decompiled functions
- Save each function to separate text file
- Handle naming conventions and comments
- Support stack pointer fixing
- Provide disassembly fallback for failed decompilations

### 5.2 Script features
- Automatic function detection
- Module-based organization
- Error handling and logging
- Progress tracking
- Stack pointer issue detection and fixing
- Disassembly fallback for functions that fail to decompile

## Phase 6: Decompile Target Plugin

### 6.1 Load plugin in IDA Pro 6.8
- Manual step: Load DLL in IDA Pro
- Ensure proper analysis
- Wait for auto-analysis completion

### 6.2 Run decompilation script
- Execute script to extract HexRays output
- Verify all functions are decompiled
- Review any errors or warnings

### 6.3 Organize decompiled output
- Group functions by module
- Create initial module structure
- Document findings

## Phase 7: Source Code Recovery

### 7.1 Analyze decompiled code
- Identify functions and their purposes
- Map to GPU plugin functionality
- Document function signatures

### 7.2 Organize code into modules
- Create C source files for each module
- Extract data structures
- Define function interfaces

### 7.3 Post-process decompiled code
- Clean up HexRays artifacts
- Restore meaningful names
- Add documentation

## Phase 8: Documentation and Finalization

### 8.1 Create comprehensive documentation
- Plugin architecture
- Function reference
- Data structures
- Usage guidelines

### 8.2 Add code comments
- Function descriptions
- Algorithm explanations
- Historical notes

### 8.3 Create build documentation
- Compilation requirements
- Dependencies
- Build instructions

## Phase 9: Verification and Testing

### 9.1 Verify code structure
- Ensure all functions are present
- Check module organization
- Validate documentation

### 9.2 Create test framework
- Basic functionality tests
- Integration tests
- Performance benchmarks

## Phase 10: Release

### 10.1 Final review
- Code quality check
- Documentation completeness
- Version tagging

### 10.2 Release source code
- Tag release version
- Create release notes
- Document changes

## Knowledge Base Structure

### Progress Tracking
- Current phase and status
- Completed tasks
- Next steps

### Knowledge Database
- Plugin API specifications
- Function mappings
- Code patterns discovered
- Technical notes

## Dependencies and Tools

- IDA Pro 6.8 (with HexRays)
- Git LFS
- Python 2.7/3.x (for automation scripts)
- C compiler for verification
- Pcsx source code (reference)

## Estimated Timeline

- Phase 1-2: 1-2 days (Research and setup)
- Phase 3-4: 1-2 days (Downloading and selecting target)
- Phase 5-6: 1 day (Decompilation)
- Phase 7-8: 2-3 days (Source recovery and documentation)
- Phase 9-10: 1 day (Verification and release)

**Total Estimated Time**: 6-10 days

## Notes

- This is a complex reverse engineering project requiring careful documentation
- All operations must be documented in English as per requirements
- Git LFS will be used to manage large binary files (emulator archives)
- The final goal is to produce compilable, well-documented source code
- **IMPORTANT**: edgbla from emu-russia refused to share the GPU plugin source code, making this reverse engineering project necessary
- decompile.idc script has been deleted (replaced by decompile.py for IDA Pro 6.8)
- LFS contains: gpuBladeSoft-1.64-Windows-x86.7z, gpuBladeSoft-1.64.dll, gpuBladeSoft-1.64.idb
