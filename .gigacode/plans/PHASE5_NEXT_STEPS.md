# Phase 5: Source Recovery - Next Steps

## Current Status
- **Phase**: 5 - Source Recovery (IN PROGRESS)
- **Progress**: 20/65 tasks completed (31%)
- **Decompilation**: Complete with 60+ function files
- **Documentation**: Complete with function analysis and global variables

## User Preferences
1. **Priority**: Add meaningful names to variables and functions
2. **Organization**: Group functions by functionality into larger modules
3. **Global Variables**: Create a single global context structure (g_gpuContext)

## Immediate Next Steps

### Step 1: Create Main Global Context Header
Create `gpu_context.h` that defines the unified global context structure combining all subsystems.

**Tasks:**
- Define GPUGlobalContext structure
- Include all subsystem structures
- Add extern declarations for global variables
- Create accessor macros for easy variable access

**Output:** `gpu_headers/gpu_context.h`

### Step 2: Create Source File Structure
Create the main source files for each module based on functionality grouping.

**Tasks:**
- Create `src/gpu_core.c` - Core initialization and shutdown
- Create `src/gpu_interface.c` - PSEmuPro plugin interface
- Create `src/gpu_render.c` - Rendering functions
- Create `src/gpu_texture.c` - Texture management
- Create `src/gpu_display.c` - Display configuration
- Create `src/gpu_frame.c` - Frame control
- Create `src/gpu_state.c` - State save/load
- Create `src/gpu_znc.c` - ZNc extended interface

**Output:** `src/` directory with module source files

### Step 3: Variable Naming Convention
Establish and apply consistent naming conventions to global variables.

**Tasks:**
- Rename `dword_*` to meaningful names (e.g., `g_gpu.initFlag`, `g_gpu.shutdownFlag`)
- Rename `word_*` and `byte_*` appropriately
- Create structure member names based on usage patterns
- Apply consistent prefix (g_gpu, gpuContext, etc.)

**Output:** Updated source files with meaningful names

### Step 4: Function Implementation
Transfer decompiled functions to source files with proper signatures.

**Tasks:**
- Extract function bodies from decompiled files
- Update parameter names (a1, a2 → meaningful names)
- Add function documentation
- Implement missing helper functions
- Link functions to appropriate modules

**Output:** Complete source files with functional implementations

### Step 5: Create Build System
Create Makefile for cross-platform compilation.

**Tasks:**
- Define build targets (Windows DLL, Linux SO)
- Set compiler flags for x86 and x86_64
- Add dependency management
- Create clean/install targets

**Output:** `Makefile` in project root

## Long-term Goals

### Phase 5 Completion Criteria
- [ ] All source files created in `src/` directory
- [ ] Global context structure defined
- [ ] Meaningful names applied to all variables
- [ ] All functions properly documented
- [ ] Makefile created and working

### Phase 6: Documentation
- [ ] API reference documentation
- [ ] Code comments for complex functions
- [ ] Build instructions
- [ ] Integration guide

### Phase 7: Verification
- [ ] Compile test builds
- [ ] Verify API compatibility with PSEmuPro
- [ ] Test with PSEmuPro emulator

## Current Status Summary

### Completed
- Project setup and organization
- Information gathering and research
- Target selection (version 1.64)
- Decompilation setup and execution
- Function analysis and module classification
- Global variable documentation
- Header file structure created

### In Progress
- Source code recovery
- Variable naming
- Function organization

### Pending
- Source file creation
- Build system implementation
- Documentation
- Verification and testing

## Next Action
Start with **Step 1: Create Main Global Context Header** to establish the unified structure for all GPU subsystems.
