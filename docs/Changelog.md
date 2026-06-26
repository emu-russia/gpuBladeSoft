Based on the forum topic, here is a detailed changelog of the `gpuBladeSoft` plugin's development, compiled from the author edgbla's posts.

---

### gpuBladeSoft Changelog

This changelog is compiled from the development blog of edgbla, the author of the `gpuBladeSoft` GPU plugin for PlayStation emulators. It details the major features, fixes, and experiments throughout the plugin's development.

---

#### Version 0.22 (25 Jul 2009)
- Initial release mentioned in the topic.
- Fixed all known bugs at the time.
- Added various on-screen messages to confirm actions.
- Resolved aspect ratio issues and screen shifting, particularly in Windows.
- Known issue: Potential minor aspect ratio problems still exist.

---

#### Version 0.24 - 0.30 (25 Jul 2009 - 31 Jul 2010)
This period covers a major update with significant feature additions and fixes.

- **Video & Savestates:** Fixed video recording and window size in Windows. Implemented drawing of savestate pictures (criticizing the outdated 128x96 BGR format).
- **Rendering Fixes:**
    - Fixed DMA errors causing graphical bugs in many games (Final Fantasy 9, Front Mission 3, Xenogears, Pro Pinball: Fantastic Journey).
    - Fixed polyline rendering with a large number of points.
    - Fixed a bug with drawing an unnecessary row/column on textured polygons.
- **Image Enhancement:**
    - Added support for auxiliary textures for shaders.
    - Introduced new fullscreen modes: "Desktop settings" (uses current desktop resolution) and "Native resolutions" (sets the PSX's internal resolution, intended for ArcadeVGA).
- **Shaders:** Added partial support for GLSL shaders written for `gpuPeteOpenGL2`.
- **Interface & Quality of Life:**
    - Made the configuration dialog scrollable for lower resolutions (800x600 and below).
    - Removed "Old TV" mode from the GUI (intended to be re-implemented as a shader later).
- **Overall:** The author considered this a significant step, fixing all known PSX GPU bugs at the time.

---

#### Version 1.40 (16 Sep 2011)
A major release with a version number bump to align with the PSEmuPro standard.

- **New Interfaces:** Added ZiNc interface, making the plugin compatible with ZiNc and pSxMAME.
- **Texture Enhancements:**
    - Implemented precise bilinear texture filtering, addressing shader issues. The author noted that the implementation is more accurate than `Pete's OGL2` plugin.
    - Added an option for high-precision vertex coordinates (pcsxr) to reduce "wobble."
    - Enabled texture caching.
- **Features:**
    - Added support for mice and joysticks.
    - Added a dedicated page for configuring hotkeys.
    - Added multiple gun crosshairs (9 types) and fixed gun positioning for light gun games.
    - Added "Full VRAM" and "Wireframe" drawing modes.
    - Added picture mirroring.
- **Performance:** The plugin became slower due to increased accuracy. The author noted that future research, such as Z-buffer implementation, would be explored.
- **Known Issues:** The improvements from research on full alpha blending and a stereo renderer were not yet implemented in this release.

---

#### Version 1.41 (24 Sep 2011)
- A bugfix release that corrected errors introduced in version 1.40.

---

#### Version 1.44 (19 Sep 2015)
A major update after a long period of development, porting the GUI to GTK3.

- **GUI & Platform:** Ported the configuration dialog to GTK3.
- **Major Rendering Features:**
    - **Quad Rendering:** Added a quad rendering mode for paired triangles, improving the look of certain 3D objects.
    - **Perspective-Correct Texturing:** Added an experimental mode for perspective-correct texture mapping.
    - **Interlacing:** Improved interlaced mode emulation and added dithering mode selection.
- **Image Enhancements:**
    - Added new screen filters: "RA 2x", "Scale4x", "Hq4x".
    - Added contrast adjustment.
    - Added various output modes for windowed mode.
- **Savestates:** Rewritten the savestate picture saving algorithm for higher quality (now saves a 640x480 JPEG in the limited PSEmuPro memory space), losing compatibility with other plugins.
- **Bugfixes & Misc:**
    - Fixed shader parameters and negative offset/screen scaling values.
    - Improved hotkey support.
    - Added Russian language localization.
    - Fixed support for ZiNc on Linux and Windows window management.

---

#### Version 1.46 (18 Mar 2016)
- **Bugfix:** Changed the image clipping method (removed `glClipPlane`) to fix shader-related bugs or the need for the `gl_ClipVertex` line.

---

#### Version 1.63 (09 Jun 2019)
- **Platform:** **Linux only (x86_64)**. This was due to unresolved build issues for the Windows version.
- **Major Performance & Rendering:**
    - **Multi-threaded Renderer:** Implemented a multi-threaded renderer (test mode), with the number of threads configurable from 1 to 6.
    - **Internal Resolution:** Fixed most of the artifacts associated with increased internal resolution. The maximum allowed resolution was increased to **16x16**.
    - **Aspect Ratio:** Added an option to set a custom aspect ratio.
- **Bugfixes:** Fixed loading of large shaders and the dithering mode.
- **Warning:** The multi-threaded blitter was implemented but offered little performance gain and was not recommended to be enabled.

---

#### Version 1.64 (25 Aug 2019)

- **Platform:** **Windows version added back** (x86). Linux version (x86_64) also available.
- **Multi-threading Optimizations:**
    - Confirmed that setting the number of threads above the number of physical cores decreases FPS.
    - Multi-threading is most beneficial at high internal resolutions (e.g., 4x4 and above). At 1x1, it decreases performance.
    - **Important:** The renderer will use 100% of the allocated threads.
- **Requirements:** It is recommended to disable power-saving technologies for maximum performance.
- **Bugfixes & Notes:**
    - Noted a quirk on Linux where the emulator sets the current working directory, requiring symbolic links for the plugin's config.
    - Provided a Windows build with necessary libraries and a script for running the configuration dialog.