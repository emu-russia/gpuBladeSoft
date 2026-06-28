# GPU Plugin Data Structures

## Overview
This document defines the data structures used in the PSEmuPro GPU plugin version 1.64 based on decompiled code analysis.

## Global Variables

### Main GPU State Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FB489C8` | 0x6FB489C8 | int | GPU init flag (set to 1 after init) |
| `dword_700584C0` | 0x700584C0 | int | GPU shutdown flag (set to 1 after shutdown) |
| `dword_6FB489CC` | 0x6FB489CC | int | GPU close flag |

### Status Register Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FD400E8` | 0x6FD400E8 | int | Status register flag 1 |
| `dword_6FD400D0` | 0x6FD400D0 | int | Status register flag 2 |
| `dword_6FD400E4` | 0x6FD400E4 | int | Status register pointer 1 |
| `dword_6FD400D8` | 0x6FD400D8 | int | Status register pointer 2 |
| `dword_6FD400DC` | 0x6FD400DC | int | Status register flag 3 |
| `dword_6FD400D4` | 0x6FD400D4 | int | Status register counter |
| `dword_6FD40994` | 0x6FD40994 | int | VBlank flag |
| `word_6FBB979C` | 0x6FBB979C | word | Status register (32-bit) |
| `byte_6FBB979F` | 0x6FBB979F | byte | Status byte |

### File/Buffer Pointers

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBB5098` | 0x6FBB5098 | int | File pointer/handle |
| `dword_6FD400E0` | 0x6FD400E0 | int | Recording flag |
| `dword_6FD400DC` | 0x6FD400DC | int | Video recording flag |

### Frame Buffer Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBB509C` | 0x6FBB509C | int | Frame buffer flag 1 |
| `dword_6FBB50A0` | 0x6FBB50A0 | int | Frame buffer flag 2 |
| `dword_6FBB50A4` | 0x6FBB50A4 | int | Frame buffer flag 3 |
| `dword_6FBB5078` | 0x6FBB5078 | int | Frame buffer flag 4 |

### Texture Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBBFD70` | 0x6FBBFD70 | int | Texture width |
| `dword_6FBBFD74` | 0x6FBBFD74 | int | Texture height |
| `dword_6FBBFD78` | 0x6FBBFD78 | int | Texture ID |
| `dword_6FBBFD7C` | 0x6FBBFD7C | int | Texture flag (set to 1 when texture exists) |

### Frame Control Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBB52C0` | 0x6FBB52C0 | int | Frame mode flag |
| `dword_6FBB84D0` | 0x6FBB84D0 | int | Frame mode flag 2 |
| `dword_6FBB84D4` | 0x6FBB84D4 | int | Frame mode flag 3 |
| `dword_6FBB9780` | 0x6FBB9780 | int | Frame limit flag |

### Display Mode Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBB5300` | 0x6FBB5300 | int | Visible area mode |
| `dword_6FBB7560` | 0x6FBB7560 | int | Dithering method |
| `dword_6FBB52EC` | 0x6FBB52EC | int | FPS limitation mode |

### Configuration Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBB5410` | 0x6FBB5410 | int | Shader state |
| `dword_6FBB5514` | 0x6FBB5514 | int | Shader level |
| `dword_6FBB5518` | 0x6FBB5518 | int | Screen bilinear filtering |
| `dword_6FBB551C` | 0x6FBB551C | int | Brightness |
| `dword_6FBB5520` | 0x6FBB5520 | int | Gamma |
| `dword_6FBB5524` | 0x6FBB5524 | int | Contrast |
| `dword_6FBB5538` | 0x6FBB5538 | int | Screen rotation |
| `dword_6FBB553C` | 0x6FBB553C | int | Polygon renderer mode |

### Screen Position Variables (Float)

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `flt_6FBB7574` | 0x6FBB7574 | float | Screen offset X |
| `flt_6FBB7578` | 0x6FBB7578 | float | Screen offset Y |
| `flt_6FBB7584` | 0x6FBB7584 | float | Screen width |
| `flt_6FBB7588` | 0x6FBB7588 | float | Screen height |
| `flt_6FBB758C` | 0x6FBB758C | float | Screen overscan |

### Screen Transformation Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBB757C` | 0x6FBB757C | int | Screen horizontal flip |
| `dword_6FBB7580` | 0x6FBB7580 | int | Screen vertical flip |

### Rendering Mode Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBB9558` | 0x6FBB9558 | int | Rendering mode |
| `dword_6FBB955C` | 0x6FBB955C | int | Wired rendering mode |
| `dword_6FBB9560` | 0x6FBB9560 | int | Point rendering mode |
| `dword_6FBB9564` | 0x6FBB9564 | int | Nontextured rendering mode |
| `dword_6FBB9568` | 0x6FBB9568 | int | Textured rendering mode |
| `dword_6FBB9570` | 0x6FBB9570 | int | Show drawing process |

### State Slot Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6F96D020` | 0x6F96D020 | int | State slot number |
| `dword_6F96D014` | 0x6F96D014 | int | Frame counter |

### Shader Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6FBBDB50` | 0x6FBBDB50 | int | Shader count |
| `dword_6FBBDB54` | 0x6FBBDB54 | int | Shader flag |

### Texture Replacement Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `qword_6FBB554C` | 0x6FBB554C | int64 | Texture replacement flags |

### ZNc Interface Variables

| Variable | Address | Type | Purpose |
|----------|---------|------|---------|
| `dword_6F96D01C` | 0x6F96D01C | int | ZNc init flag |
| `dword_6F96D018` | 0x6F96D018 | int | ZNc close flag |
| `dword_6FD412D0` | 0x6FD412D0 | int | ZNc open flag |
| `dword_6FD412CC` | 0x6FD412CC | int | ZNc initialization flag |

### Frame Structure (ZNc)

The frame structure at `dword_6FBB52C0` contains multiple sub-structures:

| Offset | Type | Purpose |
|--------|------|---------|
| +0x00 | int | Frame mode |
| +0x04 | int | Frame flag 1 |
| +0x08 | int | Frame flag 2 |
| +0x0C | int | Frame flag 3 |
| +0x10 | int | Frame flag 4 |
| ... | ... | ... |
| +0x8C8 (2228) | int | Frame flag N |
| +0x8D8 (2244) | int | Frame flag N+1 |
| ... | ... | ... |

## Data Structure Definitions

### GPU Status Register Structure

```c
typedef struct {
    uint32_t status_register;      // word_6FBB979C
    uint8_t status_byte;           // byte_6FBB979F
    uint32_t flags[4];             // dword_6FD400E8, dword_6FD400D0, dword_6FD400DC, dword_6FD400D4
    uint32_t pointers[2];          // dword_6FD400E4, dword_6FD400D8
    uint32_t counter;              // dword_6FD400D4
    uint32_t vblank_flag;          // dword_6FD40994
} GPUStatusRegister;
```

### Texture Structure

```c
typedef struct {
    int width;                     // dword_6FBBFD70
    int height;                    // dword_6FBBFD74
    int texture_id;                // dword_6FBBFD78
    int flag;                      // dword_6FBBFD7C
} GPUTexture;
```

### Screen Position Structure

```c
typedef struct {
    float offset_x;                // flt_6FBB7574
    float offset_y;                // flt_6FBB7578
    float width;                   // flt_6FBB7584
    float height;                  // flt_6FBB7588
    float overscan;                // flt_6FBB758C
    int flip_horizontal;           // dword_6FBB757C
    int flip_vertical;             // dword_6FBB7580
} GPUScreenPosition;
```

### Display Configuration Structure

```c
typedef struct {
    int visible_area_mode;         // dword_6FBB5300
    int dithering_method;          // dword_6FBB7560
    int fps_limitation;            // dword_6FBB52EC
    int shader_state;              // dword_6FBB5410
    int shader_level;              // dword_6FBB5514
    int bilinear_filtering;        // dword_6FBB5518
    int brightness;                // dword_6FBB551C
    int gamma;                     // dword_6FBB5520
    int contrast;                  // dword_6FBB5524
    int rotation;                  // dword_6FBB5538
    int polygon_renderer;          // dword_6FBB553C
} GPUDisplayConfig;
```

### Rendering Configuration Structure

```c
typedef struct {
    int rendering_mode;            // dword_6FBB9558
    int wired_mode;                // dword_6FBB955C
    int point_mode;                // dword_6FBB9560
    int nontextured_mode;          // dword_6FBB9564
    int textured_mode;             // dword_6FBB9568
    int show_drawing_process;      // dword_6FBB9570
} GPURenderingConfig;
```

### Frame Structure (ZNc)

```c
typedef struct {
    int mode;                      // dword_6FBB52C0
    int flag1;                     // dword_6FBB84D0
    int flag2;                     // dword_6FBB84D4
    int flag3;                     // dword_6FBB52EC
    int flag4;                     // dword_6FBB5300
    // ... additional flags
} GPUFrame;
```

### State Structure

```c
typedef struct {
    int state_slot;                // dword_6F96D020
    int frame_counter;             // dword_6F96D014
    int frame_buffer_flag1;        // dword_6FBB509C
    int frame_buffer_flag2;        // dword_6FBB50A0
    int frame_buffer_flag3;        // dword_6FBB50A4
    int frame_buffer_flag4;        // dword_6FBB5078
} GPUState;
```

### Shader Structure

```c
typedef struct {
    int shader_count;              // dword_6FBBDB50
    int shader_flag;               // dword_6FBBDB54
    // Texture arrays for multiple shaders
    int texture_data[8];           // dword_6FBBDAD0, dword_6FBBDAD4, etc.
    int texture_flags[8];          // dword_6FBBDAD8, dword_6FBBDADC, etc.
} GPUShader;
```

### Texture Replacement Structure

```c
typedef struct {
    uint64_t flags;                // qword_6FBB554C
    // Bit 0: collect mode
    // Bit 1: replace mode
} GPUTextureReplacement;
```

### Main GPU Structure

```c
typedef struct {
    // Initialization flags
    int init_flag;                 // dword_6FB489C8
    int shutdown_flag;             // dword_700584C0
    int close_flag;                // dword_6FB489CC
    
    // Status
    GPUStatusRegister status;
    
    // Textures
    GPUTexture texture;
    
    // Screen
    GPUScreenPosition screen;
    
    // Configuration
    GPUDisplayConfig display;
    GPURenderingConfig render;
    
    // State
    GPUState state;
    
    // Shader
    GPUShader shader;
    
    // Texture replacement
    GPUTextureReplacement texture_replace;
    
    // File I/O
    int file_handle;               // dword_6FBB5098
    int recording_flag;            // dword_6FD400DC
    int recording_handle;          // dword_6FD400D8
    
    // Frame
    GPUFrame frame;
} GPUPrimaryStructure;
```

## Function Parameter Structures

### GPUfreeze Parameters

```c
// a1: freeze type (2 = state slot change)
// a2: pointer to state slot number
typedef struct {
    int freeze_type;               // a1
    int *state_slot;               // a2
} GPUFreezeParams;
```

### ZN_GPUdmaSliceIn Parameters

```c
// a1: base address
// a2: offset
// a3: length
typedef struct {
    unsigned int *base;            // a1
    int offset;                    // a2
    int length;                    // a3
} ZNGPUDMASliceInParams;
```

### ZN_GPUdmaSliceOut Parameters

```c
// a1: base address
// a2: offset
// a3: length
typedef struct {
    unsigned int *base;            // a1
    int offset;                    // a2
    int length;                    // a3
} ZNGPUDMASliceOutParams;
```

## Memory Layout Summary

### Main Memory Blocks

| Address Range | Size | Purpose |
|---------------|------|---------|
| 0x6FB489C8-0x6FB489CC | 0x4 | GPU init/close flags |
| 0x6FD400D0-0x6FD40994 | 0x2C4 | Status register block |
| 0x6FBB5098-0x6FBB50A4 | 0xC | File/frame buffer flags |
| 0x6FBBFD70-0x6FBBFD7C | 0xC | Texture data |
| 0x6FBB52C0-0x6FBB554C | 0x16C | Frame/display structures |
| 0x6FBB7574-0x6FBB758C | 0x18 | Screen position floats |
| 0x6FBB9558-0x6FBB9570 | 0x18 | Rendering mode flags |
| 0x6F96D018-0x6F96D020 | 0x8 | ZNc flags/state slot |
| 0x6FBBDB50-0x6FBBDB54 | 0x8 | Shader data |

## Notes

- All addresses are based on the decompiled binary
- Data types inferred from usage patterns
- Some structures may be partially reconstructed
- Float values use standard IEEE 754 format
- Multi-threading support may require additional synchronization structures
- State save/load functionality uses file I/O functions
- OpenGL functions are used for texture management