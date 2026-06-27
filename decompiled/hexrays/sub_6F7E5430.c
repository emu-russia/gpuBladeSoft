int sub_6F7E5430()
{
  int (*v0)(void); // eax@1
  int (__stdcall *v1)(HDC); // esi@1
  HDC v2; // eax@2
  _BYTE *v3; // esi@2
  void *v4; // edi@3
  int v5; // eax@5
  char v6; // bp@7
  char v7; // al@8
  bool v8; // zf@8
  char v9; // bp@8
  char v10; // bp@9
  char v11; // bp@12
  int v12; // ST20_4@17
  bool v13; // al@19
  unsigned __int8 v14; // bp@21
  PROC v15; // ebp@23
  bool v16; // al@25
  char v17; // al@27
  unsigned __int8 v18; // bp@27
  char v19; // al@29
  unsigned __int8 v20; // bp@29
  char v21; // al@31
  unsigned __int8 v22; // bp@31
  bool v23; // al@33
  char v24; // al@35
  unsigned __int8 v25; // bp@35
  PROC v26; // eax@38
  PROC v27; // ebp@38
  PROC v28; // eax@38
  bool v29; // al@40
  char v30; // al@42
  unsigned __int8 v31; // bp@42
  PROC v32; // ebp@43
  bool v33; // al@45
  char v34; // al@47
  unsigned __int8 v35; // bp@47
  PROC v36; // ebp@48
  bool v37; // al@50
  char v38; // al@52
  unsigned __int8 v39; // bp@52
  PROC v40; // ebp@54
  bool v41; // al@56
  char v42; // al@58
  unsigned __int8 v43; // bp@58
  char v44; // al@60
  unsigned __int8 v45; // bp@60
  bool v46; // al@62
  char v47; // al@64
  unsigned __int8 v48; // bp@64
  PROC v49; // eax@67
  PROC v50; // ebp@67
  PROC v51; // eax@67
  bool v52; // al@69
  char v53; // al@71
  unsigned __int8 v54; // bp@71
  PROC v55; // ebp@72
  bool v56; // al@74
  char v57; // al@76
  unsigned __int8 v58; // bp@76
  bool v59; // al@78
  char v60; // al@80
  unsigned __int8 v61; // bp@80
  bool v62; // al@82
  char v63; // al@84
  unsigned __int8 v64; // bp@84
  PROC v65; // ebp@86
  bool v66; // al@88
  char v67; // al@90
  unsigned __int8 v68; // bp@90
  signed int v69; // ebp@93
  int v70; // ST20_4@100
  PROC v71; // eax@100
  int v72; // edx@100
  int v73; // ebp@100
  bool v74; // al@102
  char v75; // al@104
  unsigned __int8 v76; // bp@104
  PROC v77; // ebp@105
  bool v78; // bp@105
  bool v79; // al@107
  char v80; // al@109
  unsigned __int8 v81; // bp@109
  PROC v82; // ebp@110
  bool v83; // bp@110
  bool v84; // al@112
  char v85; // al@114
  unsigned __int8 v86; // bp@114
  PROC v87; // ebp@115
  bool v88; // bp@115
  bool v89; // al@117
  char v90; // al@119
  unsigned __int8 v91; // bp@119
  PROC v92; // ebp@120
  PROC v93; // ebp@123
  PROC v94; // ebp@125
  bool v95; // al@127
  char v96; // al@129
  unsigned __int8 v97; // bp@129
  char v98; // al@131
  unsigned __int8 v99; // bp@131
  char v100; // al@133
  unsigned __int8 v101; // bp@133
  PROC v102; // ebp@134
  PROC v103; // ebp@136
  bool v104; // al@138
  char v105; // al@140
  unsigned __int8 v106; // bp@140
  PROC v107; // eax@141
  PROC v108; // ebp@141
  PROC v109; // eax@141
  bool v110; // al@143
  char v111; // al@145
  unsigned __int8 v112; // bp@145
  PROC v113; // ebp@146
  PROC v114; // ebp@149
  bool v115; // al@151
  char v116; // al@153
  unsigned __int8 v117; // bp@153
  bool v118; // al@155
  char v119; // al@157
  unsigned __int8 v120; // bp@157
  PROC v121; // ebp@158
  PROC v122; // ebp@160
  bool v123; // al@162
  char v124; // al@164
  unsigned __int8 v125; // bp@164
  PROC v126; // ebp@165
  PROC v127; // ebp@168
  bool v128; // al@170
  PROC v129; // esi@173
  PROC v130; // edi@173
  PROC v131; // esi@176
  bool v132; // al@178
  PROC v134; // eax@184
  char v135; // [sp+1Fh] [bp-21h]@8
  int v136; // [sp+20h] [bp-20h]@120
  int v137; // [sp+20h] [bp-20h]@146
  int v138; // [sp+20h] [bp-20h]@165

  dword_7037242C = (int)wglGetProcAddress("wglGetExtensionsStringARB");
  v0 = (int (*)(void))wglGetProcAddress("wglGetExtensionsStringEXT");
  v1 = (int (__stdcall *)(HDC))dword_7037242C;
  dword_70372428 = (int)v0;
  if ( dword_7037242C )
  {
    v2 = wglGetCurrentDC();
    v3 = (_BYTE *)v1(v2);
  }
  else
  {
    if ( !v0 )
    {
      v3 = &unk_6FB77F1C;
      v6 = byte_7036F3A0;
      v4 = &unk_6FB77F1C;
      goto LABEL_182;
    }
    v3 = (_BYTE *)v0();
  }
  v4 = 0;
  if ( v3 )
  {
    if ( *v3 )
    {
      v5 = (int)(v3 + 1);
      do
        v4 = (void *)v5++;
      while ( *(_BYTE *)(v5 - 1) );
    }
    else
    {
      v4 = v3;
    }
  }
  v6 = byte_7036F3A0;
  if ( dword_7037242C )
  {
LABEL_8:
    byte_7036F3D8 = sub_6F7E4870("WGL_3DFX_multisample", v3, (unsigned int)v4);
    v7 = sub_6F7E4870("WGL_3DL_stereo_control", v3, (unsigned int)v4);
    v135 = 0;
    v8 = ((unsigned __int8)v7 | (unsigned __int8)v6) == 0;
    byte_7036F3D7 = v7;
    v9 = v7 | v6;
    if ( v8 )
      goto LABEL_9;
    goto LABEL_184;
  }
LABEL_182:
  if ( dword_70372428 )
    goto LABEL_8;
  byte_7036F3D8 = sub_6F7E4870("WGL_3DFX_multisample", v3, (unsigned int)v4);
  v135 = 1;
  byte_7036F3D7 = sub_6F7E4870("WGL_3DL_stereo_control", v3, (unsigned int)v4);
LABEL_184:
  v134 = wglGetProcAddress("wglSetStereoEmitterState3DL");
  v9 = byte_7036F3A0;
  dword_7036F5B4 = (int)v134;
  byte_7036F3D7 = v134 != 0;
LABEL_9:
  byte_7036F3D6 = sub_6F7E4870("WGL_AMD_gpu_association", v3, (unsigned int)v4);
  v10 = byte_7036F3D6 | v135 | v9;
  if ( !v10 )
    goto LABEL_21;
  dword_7036F5B0 = (int)wglGetProcAddress("wglBlitContextFramebufferAMD");
  if ( dword_7036F5B0 )
  {
    dword_7036F5AC = (int)wglGetProcAddress("wglCreateAssociatedContextAMD");
    if ( dword_7036F5AC )
    {
      v11 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = 1;
    dword_7036F5AC = (int)wglGetProcAddress("wglCreateAssociatedContextAMD");
    if ( dword_7036F5AC )
    {
LABEL_13:
      dword_7036F5A8 = (int)wglGetProcAddress("wglCreateAssociatedContextAttribsAMD");
      if ( dword_7036F5A8 )
        goto LABEL_14;
      goto LABEL_215;
    }
  }
  v11 = 1;
  dword_7036F5A8 = (int)wglGetProcAddress("wglCreateAssociatedContextAttribsAMD");
  if ( dword_7036F5A8 )
  {
LABEL_14:
    dword_7036F5A4 = (int)wglGetProcAddress("wglDeleteAssociatedContextAMD");
    if ( dword_7036F5A4 )
      goto LABEL_15;
LABEL_216:
    dword_7036F5A0 = (int)wglGetProcAddress("wglGetContextGPUIDAMD");
    goto LABEL_217;
  }
LABEL_215:
  v11 = 1;
  dword_7036F5A4 = (int)wglGetProcAddress("wglDeleteAssociatedContextAMD");
  if ( !dword_7036F5A4 )
    goto LABEL_216;
LABEL_15:
  dword_7036F5A0 = (int)wglGetProcAddress("wglGetContextGPUIDAMD");
  if ( !dword_7036F5A0 )
  {
LABEL_217:
    dword_7036F59C = (int)wglGetProcAddress("wglGetCurrentAssociatedContextAMD");
    goto LABEL_218;
  }
  dword_7036F59C = (int)wglGetProcAddress("wglGetCurrentAssociatedContextAMD");
  if ( !dword_7036F59C )
  {
LABEL_218:
    dword_7036F598 = (int)wglGetProcAddress("wglGetGPUIDsAMD");
    dword_7036F594 = (int)wglGetProcAddress("wglGetGPUInfoAMD");
LABEL_219:
    dword_7036F590 = (int)wglGetProcAddress("wglMakeAssociatedContextCurrentAMD");
    v13 = 0;
    goto LABEL_20;
  }
  dword_7036F598 = (int)wglGetProcAddress("wglGetGPUIDsAMD");
  v12 = dword_7036F598;
  dword_7036F594 = (int)wglGetProcAddress("wglGetGPUInfoAMD");
  if ( v12 == 0 || dword_7036F594 == 0 || v11 )
    goto LABEL_219;
  dword_7036F590 = (int)wglGetProcAddress("wglMakeAssociatedContextCurrentAMD");
  v13 = dword_7036F590 != 0;
LABEL_20:
  byte_7036F3D6 = v13;
  v10 = byte_7036F3A0;
LABEL_21:
  byte_7036F3D5 = sub_6F7E4870("WGL_ARB_buffer_region", v3, (unsigned int)v4);
  v14 = byte_7036F3D5 | v135 | v10;
  if ( !v14 )
    goto LABEL_27;
  dword_7036F58C = (int)wglGetProcAddress("wglCreateBufferRegionARB");
  if ( !dword_7036F58C )
  {
    dword_7036F588 = (int)wglGetProcAddress("wglDeleteBufferRegionARB");
    dword_7036F584 = (int)wglGetProcAddress("wglRestoreBufferRegionARB");
LABEL_206:
    dword_7036F580 = (int)wglGetProcAddress("wglSaveBufferRegionARB");
    v16 = 0;
    goto LABEL_26;
  }
  v15 = wglGetProcAddress("wglDeleteBufferRegionARB");
  dword_7036F588 = (int)v15;
  dword_7036F584 = (int)wglGetProcAddress("wglRestoreBufferRegionARB");
  if ( !dword_7036F584 || !v15 )
    goto LABEL_206;
  dword_7036F580 = (int)wglGetProcAddress("wglSaveBufferRegionARB");
  v16 = dword_7036F580 != 0;
LABEL_26:
  byte_7036F3D5 = v16;
  v14 = byte_7036F3A0 | v135;
LABEL_27:
  byte_7036F3D4 = sub_6F7E4870("WGL_ARB_context_flush_control", v3, (unsigned int)v4);
  v17 = sub_6F7E4870("WGL_ARB_create_context", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v17 | v14) == 0;
  byte_7036F3D3 = v17;
  v18 = v17 | v14;
  if ( !v8 )
  {
    dword_7036F57C = (int)wglGetProcAddress("wglCreateContextAttribsARB");
    byte_7036F3D3 = dword_7036F57C != 0;
    v18 = byte_7036F3A0 | v135;
  }
  byte_7036F3D2 = sub_6F7E4870("WGL_ARB_create_context_no_error", v3, (unsigned int)v4);
  byte_7036F3D1 = sub_6F7E4870("WGL_ARB_create_context_profile", v3, (unsigned int)v4);
  byte_7036F3D0 = sub_6F7E4870("WGL_ARB_create_context_robustness", v3, (unsigned int)v4);
  v19 = sub_6F7E4870("WGL_ARB_extensions_string", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v19 | v18) == 0;
  byte_7036F3CF = v19;
  v20 = v19 | v18;
  if ( !v8 )
  {
    dword_7036F578 = (int (__cdecl *)(_DWORD))wglGetProcAddress("wglGetExtensionsStringARB");
    byte_7036F3CF = dword_7036F578 != 0;
    v20 = byte_7036F3A0 | v135;
  }
  byte_7036F3CE = sub_6F7E4870("WGL_ARB_framebuffer_sRGB", v3, (unsigned int)v4);
  v21 = sub_6F7E4870("WGL_ARB_make_current_read", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v21 | v20) == 0;
  byte_7036F3CD = v21;
  v22 = v21 | v20;
  if ( !v8 )
  {
    dword_7036F574 = (int)wglGetProcAddress("wglGetCurrentReadDCARB");
    if ( dword_7036F574 )
    {
      dword_7036F570 = (int)wglGetProcAddress("wglMakeContextCurrentARB");
      v23 = dword_7036F570 != 0;
    }
    else
    {
      dword_7036F570 = (int)wglGetProcAddress("wglMakeContextCurrentARB");
      v23 = 0;
    }
    byte_7036F3CD = v23;
    v22 = byte_7036F3A0 | v135;
  }
  byte_7036F3CC = sub_6F7E4870("WGL_ARB_multisample", v3, (unsigned int)v4);
  v24 = sub_6F7E4870("WGL_ARB_pbuffer", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v24 | v22) == 0;
  byte_7036F3CB = v24;
  v25 = v24 | v22;
  if ( !v8 )
  {
    dword_7036F56C = (int)wglGetProcAddress("wglCreatePbufferARB");
    if ( dword_7036F56C )
    {
      dword_7036F568 = (int)wglGetProcAddress("wglDestroyPbufferARB");
      if ( dword_7036F568 )
      {
        v26 = wglGetProcAddress("wglGetPbufferDCARB");
        v27 = v26;
        dword_7036F564 = (int)v26;
        v28 = wglGetProcAddress("wglQueryPbufferARB");
        dword_7036F560 = (int)v28;
        if ( v27 && v28 )
        {
          dword_7036F55C = (int)wglGetProcAddress("wglReleasePbufferDCARB");
          v29 = dword_7036F55C != 0;
LABEL_41:
          byte_7036F3CB = v29;
          v25 = byte_7036F3A0 | v135;
          goto LABEL_42;
        }
LABEL_234:
        dword_7036F55C = (int)wglGetProcAddress("wglReleasePbufferDCARB");
        v29 = 0;
        goto LABEL_41;
      }
    }
    else
    {
      dword_7036F568 = (int)wglGetProcAddress("wglDestroyPbufferARB");
    }
    dword_7036F564 = (int)wglGetProcAddress("wglGetPbufferDCARB");
    dword_7036F560 = (int)wglGetProcAddress("wglQueryPbufferARB");
    goto LABEL_234;
  }
LABEL_42:
  v30 = sub_6F7E4870("WGL_ARB_pixel_format", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v30 | v25) == 0;
  byte_7036F3CA = v30;
  v31 = v30 | v25;
  if ( !v8 )
  {
    v32 = wglGetProcAddress("wglChoosePixelFormatARB");
    dword_7036F558 = (int)v32;
    dword_7036F554 = (int)wglGetProcAddress("wglGetPixelFormatAttribfvARB");
    if ( dword_7036F554 && v32 )
    {
      dword_7036F550 = (int)wglGetProcAddress("wglGetPixelFormatAttribivARB");
      v33 = dword_7036F550 != 0;
    }
    else
    {
      dword_7036F550 = (int)wglGetProcAddress("wglGetPixelFormatAttribivARB");
      v33 = 0;
    }
    byte_7036F3CA = v33;
    v31 = byte_7036F3A0 | v135;
  }
  byte_7036F3C9 = sub_6F7E4870("WGL_ARB_pixel_format_float", v3, (unsigned int)v4);
  v34 = sub_6F7E4870("WGL_ARB_render_texture", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v34 | v31) == 0;
  byte_7036F3C8 = v34;
  v35 = v34 | v31;
  if ( !v8 )
  {
    v36 = wglGetProcAddress("wglBindTexImageARB");
    dword_7036F54C = (int)v36;
    dword_7036F548 = (int)wglGetProcAddress("wglReleaseTexImageARB");
    if ( dword_7036F548 && v36 )
    {
      dword_7036F544 = (int)wglGetProcAddress("wglSetPbufferAttribARB");
      v37 = dword_7036F544 != 0;
    }
    else
    {
      dword_7036F544 = (int)wglGetProcAddress("wglSetPbufferAttribARB");
      v37 = 0;
    }
    byte_7036F3C8 = v37;
    v35 = byte_7036F3A0 | v135;
  }
  byte_7036F3C7 = sub_6F7E4870("WGL_ARB_robustness_application_isolation", v3, (unsigned int)v4);
  byte_7036F3C6 = sub_6F7E4870("WGL_ARB_robustness_share_group_isolation", v3, (unsigned int)v4);
  byte_7036F3C5 = sub_6F7E4870("WGL_ATI_pixel_format_float", v3, (unsigned int)v4);
  byte_7036F3C4 = sub_6F7E4870("WGL_ATI_render_texture_rectangle", v3, (unsigned int)v4);
  byte_7036F3C3 = sub_6F7E4870("WGL_EXT_colorspace", v3, (unsigned int)v4);
  byte_7036F3C2 = sub_6F7E4870("WGL_EXT_create_context_es2_profile", v3, (unsigned int)v4);
  byte_7036F3C1 = sub_6F7E4870("WGL_EXT_create_context_es_profile", v3, (unsigned int)v4);
  byte_7036F3C0 = sub_6F7E4870("WGL_EXT_depth_float", v3, (unsigned int)v4);
  v38 = sub_6F7E4870("WGL_EXT_display_color_table", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v38 | v35) == 0;
  byte_7036F3BF = v38;
  v39 = v38 | v35;
  if ( !v8 )
  {
    dword_7036F540 = (int)wglGetProcAddress("wglBindDisplayColorTableEXT");
    if ( dword_7036F540 )
    {
      v40 = wglGetProcAddress("wglCreateDisplayColorTableEXT");
      dword_7036F53C = (int)v40;
      dword_7036F538 = (int)wglGetProcAddress("wglDestroyDisplayColorTableEXT");
      if ( dword_7036F538 && v40 )
      {
        dword_7036F534 = (int)wglGetProcAddress("wglLoadDisplayColorTableEXT");
        v41 = dword_7036F534 != 0;
LABEL_57:
        byte_7036F3BF = v41;
        v39 = byte_7036F3A0 | v135;
        goto LABEL_58;
      }
    }
    else
    {
      dword_7036F53C = (int)wglGetProcAddress("wglCreateDisplayColorTableEXT");
      dword_7036F538 = (int)wglGetProcAddress("wglDestroyDisplayColorTableEXT");
    }
    dword_7036F534 = (int)wglGetProcAddress("wglLoadDisplayColorTableEXT");
    v41 = 0;
    goto LABEL_57;
  }
LABEL_58:
  v42 = sub_6F7E4870("WGL_EXT_extensions_string", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v42 | v39) == 0;
  byte_7036F3BE = v42;
  v43 = v42 | v39;
  if ( !v8 )
  {
    dword_7036F530 = (int)wglGetProcAddress("wglGetExtensionsStringEXT");
    byte_7036F3BE = dword_7036F530 != 0;
    v43 = byte_7036F3A0 | v135;
  }
  byte_7036F3BD = sub_6F7E4870("WGL_EXT_framebuffer_sRGB", v3, (unsigned int)v4);
  v44 = sub_6F7E4870("WGL_EXT_make_current_read", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v44 | v43) == 0;
  byte_7036F3BC = v44;
  v45 = v44 | v43;
  if ( !v8 )
  {
    dword_7036F52C = (int)wglGetProcAddress("wglGetCurrentReadDCEXT");
    if ( dword_7036F52C )
    {
      dword_7036F528 = (int)wglGetProcAddress("wglMakeContextCurrentEXT");
      v46 = dword_7036F528 != 0;
    }
    else
    {
      dword_7036F528 = (int)wglGetProcAddress("wglMakeContextCurrentEXT");
      v46 = 0;
    }
    byte_7036F3BC = v46;
    v45 = byte_7036F3A0 | v135;
  }
  byte_7036F3BB = sub_6F7E4870("WGL_EXT_multisample", v3, (unsigned int)v4);
  v47 = sub_6F7E4870("WGL_EXT_pbuffer", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v47 | v45) == 0;
  byte_7036F3BA = v47;
  v48 = v47 | v45;
  if ( !v8 )
  {
    dword_7036F524 = (int)wglGetProcAddress("wglCreatePbufferEXT");
    if ( dword_7036F524 )
    {
      dword_7036F520 = (int)wglGetProcAddress("wglDestroyPbufferEXT");
      if ( dword_7036F520 )
      {
        v49 = wglGetProcAddress("wglGetPbufferDCEXT");
        v50 = v49;
        dword_7036F51C = (int)v49;
        v51 = wglGetProcAddress("wglQueryPbufferEXT");
        dword_7036F518 = (int)v51;
        if ( v50 && v51 )
        {
          dword_7036F514 = (int)wglGetProcAddress("wglReleasePbufferDCEXT");
          v52 = dword_7036F514 != 0;
LABEL_70:
          byte_7036F3BA = v52;
          v48 = byte_7036F3A0 | v135;
          goto LABEL_71;
        }
LABEL_222:
        dword_7036F514 = (int)wglGetProcAddress("wglReleasePbufferDCEXT");
        v52 = 0;
        goto LABEL_70;
      }
    }
    else
    {
      dword_7036F520 = (int)wglGetProcAddress("wglDestroyPbufferEXT");
    }
    dword_7036F51C = (int)wglGetProcAddress("wglGetPbufferDCEXT");
    dword_7036F518 = (int)wglGetProcAddress("wglQueryPbufferEXT");
    goto LABEL_222;
  }
LABEL_71:
  v53 = sub_6F7E4870("WGL_EXT_pixel_format", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v53 | v48) == 0;
  byte_7036F3B9 = v53;
  v54 = v53 | v48;
  if ( !v8 )
  {
    v55 = wglGetProcAddress("wglChoosePixelFormatEXT");
    dword_7036F510 = (int)v55;
    dword_7036F50C = (int)wglGetProcAddress("wglGetPixelFormatAttribfvEXT");
    if ( dword_7036F50C && v55 )
    {
      dword_7036F508 = (int)wglGetProcAddress("wglGetPixelFormatAttribivEXT");
      v56 = dword_7036F508 != 0;
    }
    else
    {
      dword_7036F508 = (int)wglGetProcAddress("wglGetPixelFormatAttribivEXT");
      v56 = 0;
    }
    byte_7036F3B9 = v56;
    v54 = byte_7036F3A0 | v135;
  }
  byte_7036F3B8 = sub_6F7E4870("WGL_EXT_pixel_format_packed_float", v3, (unsigned int)v4);
  v57 = sub_6F7E4870("WGL_EXT_swap_control", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v57 | v54) == 0;
  byte_7036F3B7 = v57;
  v58 = v57 | v54;
  if ( !v8 )
  {
    dword_7036F504 = (int)wglGetProcAddress("wglGetSwapIntervalEXT");
    if ( dword_7036F504 )
    {
      dword_7036F500 = (int (__stdcall *)(_DWORD))wglGetProcAddress("wglSwapIntervalEXT");
      v59 = dword_7036F500 != 0;
    }
    else
    {
      dword_7036F500 = (int (__stdcall *)(_DWORD))wglGetProcAddress("wglSwapIntervalEXT");
      v59 = 0;
    }
    byte_7036F3B7 = v59;
    v58 = byte_7036F3A0 | v135;
  }
  byte_7036F3B6 = sub_6F7E4870("WGL_EXT_swap_control_tear", v3, (unsigned int)v4);
  v60 = sub_6F7E4870("WGL_I3D_digital_video_control", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v60 | v58) == 0;
  byte_7036F3B5 = v60;
  v61 = v60 | v58;
  if ( !v8 )
  {
    dword_7036F4FC = (int)wglGetProcAddress("wglGetDigitalVideoParametersI3D");
    if ( dword_7036F4FC )
    {
      dword_7036F4F8 = (int)wglGetProcAddress("wglSetDigitalVideoParametersI3D");
      v62 = dword_7036F4F8 != 0;
    }
    else
    {
      dword_7036F4F8 = (int)wglGetProcAddress("wglSetDigitalVideoParametersI3D");
      v62 = 0;
    }
    byte_7036F3B5 = v62;
    v61 = byte_7036F3A0 | v135;
  }
  v63 = sub_6F7E4870("WGL_I3D_gamma", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v63 | v61) == 0;
  byte_7036F3B4 = v63;
  v64 = v63 | v61;
  if ( !v8 )
  {
    dword_7036F4F4 = (int)wglGetProcAddress("wglGetGammaTableI3D");
    if ( dword_7036F4F4 )
    {
      v65 = wglGetProcAddress("wglGetGammaTableParametersI3D");
      dword_7036F4F0 = (int)v65;
      dword_7036F4EC = (int)wglGetProcAddress("wglSetGammaTableI3D");
      if ( dword_7036F4EC && v65 )
      {
        dword_7036F4E8 = (int)wglGetProcAddress("wglSetGammaTableParametersI3D");
        v66 = dword_7036F4E8 != 0;
LABEL_89:
        byte_7036F3B4 = v66;
        v64 = byte_7036F3A0 | v135;
        goto LABEL_90;
      }
    }
    else
    {
      dword_7036F4F0 = (int)wglGetProcAddress("wglGetGammaTableParametersI3D");
      dword_7036F4EC = (int)wglGetProcAddress("wglSetGammaTableI3D");
    }
    dword_7036F4E8 = (int)wglGetProcAddress("wglSetGammaTableParametersI3D");
    v66 = 0;
    goto LABEL_89;
  }
LABEL_90:
  v67 = sub_6F7E4870("WGL_I3D_genlock", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v67 | v64) == 0;
  byte_7036F3B3 = v67;
  v68 = v67 | v64;
  if ( v8 )
    goto LABEL_104;
  dword_7036F4E4 = (int)wglGetProcAddress("wglDisableGenlockI3D");
  if ( dword_7036F4E4 )
  {
    dword_7036F4E0 = (int)wglGetProcAddress("wglEnableGenlockI3D");
    if ( dword_7036F4E0 )
    {
      v69 = 0;
      goto LABEL_94;
    }
  }
  else
  {
    v69 = 1;
    dword_7036F4E0 = (int)wglGetProcAddress("wglEnableGenlockI3D");
    if ( dword_7036F4E0 )
    {
LABEL_94:
      dword_7036F4DC = (int)wglGetProcAddress("wglGenlockSampleRateI3D");
      if ( dword_7036F4DC )
        goto LABEL_95;
      goto LABEL_225;
    }
  }
  v69 = 1;
  dword_7036F4DC = (int)wglGetProcAddress("wglGenlockSampleRateI3D");
  if ( dword_7036F4DC )
  {
LABEL_95:
    dword_7036F4D8 = (int)wglGetProcAddress("wglGenlockSourceDelayI3D");
    if ( dword_7036F4D8 )
      goto LABEL_96;
    goto LABEL_226;
  }
LABEL_225:
  v69 = 1;
  dword_7036F4D8 = (int)wglGetProcAddress("wglGenlockSourceDelayI3D");
  if ( dword_7036F4D8 )
  {
LABEL_96:
    dword_7036F4D4 = (int)wglGetProcAddress("wglGenlockSourceEdgeI3D");
    if ( dword_7036F4D4 )
      goto LABEL_97;
    goto LABEL_227;
  }
LABEL_226:
  v69 = 1;
  dword_7036F4D4 = (int)wglGetProcAddress("wglGenlockSourceEdgeI3D");
  if ( dword_7036F4D4 )
  {
LABEL_97:
    dword_7036F4D0 = (int)wglGetProcAddress("wglGenlockSourceI3D");
    if ( dword_7036F4D0 )
      goto LABEL_98;
    goto LABEL_228;
  }
LABEL_227:
  v69 = 1;
  dword_7036F4D0 = (int)wglGetProcAddress("wglGenlockSourceI3D");
  if ( dword_7036F4D0 )
  {
LABEL_98:
    dword_7036F4CC = (int)wglGetProcAddress("wglGetGenlockSampleRateI3D");
    if ( dword_7036F4CC )
      goto LABEL_99;
LABEL_229:
    dword_7036F4C8 = (int)wglGetProcAddress("wglGetGenlockSourceDelayI3D");
    goto LABEL_230;
  }
LABEL_228:
  v69 = 1;
  dword_7036F4CC = (int)wglGetProcAddress("wglGetGenlockSampleRateI3D");
  if ( !dword_7036F4CC )
    goto LABEL_229;
LABEL_99:
  dword_7036F4C8 = (int)wglGetProcAddress("wglGetGenlockSourceDelayI3D");
  if ( !dword_7036F4C8 )
  {
LABEL_230:
    dword_7036F4C4 = (int)wglGetProcAddress("wglGetGenlockSourceEdgeI3D");
    dword_7036F4C0 = (int)wglGetProcAddress("wglGetGenlockSourceI3D");
    dword_7036F4BC = (int)wglGetProcAddress("wglIsEnabledGenlockI3D");
LABEL_231:
    dword_7036F4B8 = (int)wglGetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
    v74 = 0;
    goto LABEL_103;
  }
  dword_7036F4C4 = (int)wglGetProcAddress("wglGetGenlockSourceEdgeI3D");
  v70 = dword_7036F4C4;
  v71 = wglGetProcAddress("wglGetGenlockSourceI3D");
  dword_7036F4C0 = (int)v71;
  v72 = v70;
  LOBYTE(v72) = v70 == 0;
  LOBYTE(v71) = v71 == 0;
  v73 = (unsigned int)v71 | v72 | v69;
  dword_7036F4BC = (int)wglGetProcAddress("wglIsEnabledGenlockI3D");
  if ( !dword_7036F4BC || (_BYTE)v73 )
    goto LABEL_231;
  dword_7036F4B8 = (int)wglGetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
  v74 = dword_7036F4B8 != 0;
LABEL_103:
  byte_7036F3B3 = v74;
  v68 = byte_7036F3A0 | v135;
LABEL_104:
  v75 = sub_6F7E4870("WGL_I3D_image_buffer", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v75 | v68) == 0;
  byte_7036F3B2 = v75;
  v76 = v75 | v68;
  if ( !v8 )
  {
    v77 = wglGetProcAddress("wglAssociateImageBufferEventsI3D");
    dword_7036F4B4 = (int)v77;
    dword_7036F4B0 = (int)wglGetProcAddress("wglCreateImageBufferI3D");
    v78 = v77 == 0 || dword_7036F4B0 == 0;
    dword_7036F4AC = (int)wglGetProcAddress("wglDestroyImageBufferI3D");
    if ( !dword_7036F4AC || v78 )
    {
      dword_7036F4A8 = (int)wglGetProcAddress("wglReleaseImageBufferEventsI3D");
      v79 = 0;
    }
    else
    {
      dword_7036F4A8 = (int)wglGetProcAddress("wglReleaseImageBufferEventsI3D");
      v79 = dword_7036F4A8 != 0;
    }
    byte_7036F3B2 = v79;
    v76 = byte_7036F3A0 | v135;
  }
  v80 = sub_6F7E4870("WGL_I3D_swap_frame_lock", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v80 | v76) == 0;
  byte_7036F3B1 = v80;
  v81 = v80 | v76;
  if ( !v8 )
  {
    v82 = wglGetProcAddress("wglDisableFrameLockI3D");
    dword_7036F4A4 = (int)v82;
    dword_7036F4A0 = (int)wglGetProcAddress("wglEnableFrameLockI3D");
    v83 = dword_7036F4A0 == 0 || v82 == 0;
    dword_7036F49C = (int)wglGetProcAddress("wglIsEnabledFrameLockI3D");
    if ( !dword_7036F49C || v83 )
    {
      dword_7036F498 = (int)wglGetProcAddress("wglQueryFrameLockMasterI3D");
      v84 = 0;
    }
    else
    {
      dword_7036F498 = (int)wglGetProcAddress("wglQueryFrameLockMasterI3D");
      v84 = dword_7036F498 != 0;
    }
    byte_7036F3B1 = v84;
    v81 = byte_7036F3A0 | v135;
  }
  v85 = sub_6F7E4870("WGL_I3D_swap_frame_usage", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v85 | v81) == 0;
  byte_7036F3B0 = v85;
  v86 = v85 | v81;
  if ( !v8 )
  {
    v87 = wglGetProcAddress("wglBeginFrameTrackingI3D");
    dword_7036F494 = (int)v87;
    dword_7036F490 = (int)wglGetProcAddress("wglEndFrameTrackingI3D");
    v88 = dword_7036F490 == 0 || v87 == 0;
    dword_7036F48C = (int)wglGetProcAddress("wglGetFrameUsageI3D");
    if ( !dword_7036F48C || v88 )
    {
      dword_7036F488 = (int)wglGetProcAddress("wglQueryFrameTrackingI3D");
      v89 = 0;
    }
    else
    {
      dword_7036F488 = (int)wglGetProcAddress("wglQueryFrameTrackingI3D");
      v89 = dword_7036F488 != 0;
    }
    byte_7036F3B0 = v89;
    v86 = byte_7036F3A0 | v135;
  }
  v90 = sub_6F7E4870("WGL_NV_DX_interop", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v90 | v86) == 0;
  byte_7036F3AF = v90;
  v91 = v90 | v86;
  if ( !v8 )
  {
    v92 = wglGetProcAddress("wglDXCloseDeviceNV");
    dword_7036F484 = (int)v92;
    dword_7036F480 = (int)wglGetProcAddress("wglDXLockObjectsNV");
    v136 = dword_7036F480;
    dword_7036F47C = (int)wglGetProcAddress("wglDXObjectAccessNV");
    if ( dword_7036F47C && v92 && v136 )
    {
      v93 = wglGetProcAddress("wglDXOpenDeviceNV");
      dword_7036F478 = (int)v93;
      dword_7036F474 = (int)wglGetProcAddress("wglDXRegisterObjectNV");
      if ( dword_7036F474 && v93 )
      {
        v94 = wglGetProcAddress("wglDXSetResourceShareHandleNV");
        dword_7036F470 = (int)v94;
        dword_7036F46C = (int)wglGetProcAddress("wglDXUnlockObjectsNV");
        if ( dword_7036F46C && v94 )
        {
          dword_7036F468 = (int)wglGetProcAddress("wglDXUnregisterObjectNV");
          v95 = dword_7036F468 != 0;
LABEL_128:
          byte_7036F3AF = v95;
          v91 = byte_7036F3A0 | v135;
          goto LABEL_129;
        }
LABEL_204:
        dword_7036F468 = (int)wglGetProcAddress("wglDXUnregisterObjectNV");
        v95 = 0;
        goto LABEL_128;
      }
    }
    else
    {
      dword_7036F478 = (int)wglGetProcAddress("wglDXOpenDeviceNV");
      dword_7036F474 = (int)wglGetProcAddress("wglDXRegisterObjectNV");
    }
    dword_7036F470 = (int)wglGetProcAddress("wglDXSetResourceShareHandleNV");
    dword_7036F46C = (int)wglGetProcAddress("wglDXUnlockObjectsNV");
    goto LABEL_204;
  }
LABEL_129:
  byte_7036F3AE = sub_6F7E4870("WGL_NV_DX_interop2", v3, (unsigned int)v4);
  v96 = sub_6F7E4870("WGL_NV_copy_image", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v96 | v91) == 0;
  byte_7036F3AD = v96;
  v97 = v96 | v91;
  if ( !v8 )
  {
    dword_7036F464 = (int)wglGetProcAddress("wglCopyImageSubDataNV");
    byte_7036F3AD = dword_7036F464 != 0;
    v97 = byte_7036F3A0 | v135;
  }
  v98 = sub_6F7E4870("WGL_NV_delay_before_swap", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v98 | v97) == 0;
  byte_7036F3AC = v98;
  v99 = v98 | v97;
  if ( !v8 )
  {
    dword_7036F460 = (int)wglGetProcAddress("wglDelayBeforeSwapNV");
    byte_7036F3AC = dword_7036F460 != 0;
    v99 = byte_7036F3A0 | v135;
  }
  byte_7036F3AB = sub_6F7E4870("WGL_NV_float_buffer", v3, (unsigned int)v4);
  v100 = sub_6F7E4870("WGL_NV_gpu_affinity", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v100 | v99) == 0;
  byte_7036F3AA = v100;
  v101 = v100 | v99;
  if ( !v8 )
  {
    v102 = wglGetProcAddress("wglCreateAffinityDCNV");
    dword_7036F45C = (int)v102;
    dword_7036F458 = (int)wglGetProcAddress("wglDeleteDCNV");
    if ( dword_7036F458 && v102 )
    {
      v103 = wglGetProcAddress("wglEnumGpuDevicesNV");
      dword_7036F454 = (int)v103;
      dword_7036F450 = (int)wglGetProcAddress("wglEnumGpusFromAffinityDCNV");
      if ( dword_7036F450 && v103 )
      {
        dword_7036F44C = (int)wglGetProcAddress("wglEnumGpusNV");
        v104 = dword_7036F44C != 0;
LABEL_139:
        byte_7036F3AA = v104;
        v101 = byte_7036F3A0 | v135;
        goto LABEL_140;
      }
    }
    else
    {
      dword_7036F454 = (int)wglGetProcAddress("wglEnumGpuDevicesNV");
      dword_7036F450 = (int)wglGetProcAddress("wglEnumGpusFromAffinityDCNV");
    }
    dword_7036F44C = (int)wglGetProcAddress("wglEnumGpusNV");
    v104 = 0;
    goto LABEL_139;
  }
LABEL_140:
  byte_7036F3A9 = sub_6F7E4870("WGL_NV_multisample_coverage", v3, (unsigned int)v4);
  v105 = sub_6F7E4870("WGL_NV_present_video", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v105 | v101) == 0;
  byte_7036F3A8 = v105;
  v106 = v105 | v101;
  if ( !v8 )
  {
    v107 = wglGetProcAddress("wglBindVideoDeviceNV");
    v108 = v107;
    dword_7036F448 = (int)v107;
    v109 = wglGetProcAddress("wglEnumerateVideoDevicesNV");
    dword_7036F444 = (int)v109;
    if ( v108 && v109 )
    {
      dword_7036F440 = (int)wglGetProcAddress("wglQueryCurrentContextNV");
      v110 = dword_7036F440 != 0;
    }
    else
    {
      dword_7036F440 = (int)wglGetProcAddress("wglQueryCurrentContextNV");
      v110 = 0;
    }
    byte_7036F3A8 = v110;
    v106 = byte_7036F3A0 | v135;
  }
  byte_7036F3A7 = sub_6F7E4870("WGL_NV_render_depth_texture", v3, (unsigned int)v4);
  byte_7036F3A6 = sub_6F7E4870("WGL_NV_render_texture_rectangle", v3, (unsigned int)v4);
  v111 = sub_6F7E4870("WGL_NV_swap_group", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v111 | v106) == 0;
  byte_7036F3A5 = v111;
  v112 = v111 | v106;
  if ( !v8 )
  {
    dword_7036F43C = (int)wglGetProcAddress("wglBindSwapBarrierNV");
    v137 = dword_7036F43C;
    v113 = wglGetProcAddress("wglJoinSwapGroupNV");
    dword_7036F438 = (int)v113;
    dword_7036F434 = (int)wglGetProcAddress("wglQueryFrameCountNV");
    if ( dword_7036F434 && v113 && v137 )
    {
      v114 = wglGetProcAddress("wglQueryMaxSwapGroupsNV");
      dword_7036F430 = (int)v114;
      dword_7036F42C = (int)wglGetProcAddress("wglQuerySwapGroupNV");
      if ( dword_7036F42C && v114 )
      {
        dword_7036F428 = (int)wglGetProcAddress("wglResetFrameCountNV");
        v115 = dword_7036F428 != 0;
LABEL_152:
        byte_7036F3A5 = v115;
        v112 = byte_7036F3A0 | v135;
        goto LABEL_153;
      }
    }
    else
    {
      dword_7036F430 = (int)wglGetProcAddress("wglQueryMaxSwapGroupsNV");
      dword_7036F42C = (int)wglGetProcAddress("wglQuerySwapGroupNV");
    }
    dword_7036F428 = (int)wglGetProcAddress("wglResetFrameCountNV");
    v115 = 0;
    goto LABEL_152;
  }
LABEL_153:
  v116 = sub_6F7E4870("WGL_NV_vertex_array_range", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v116 | v112) == 0;
  byte_7036F3A4 = v116;
  v117 = v116 | v112;
  if ( !v8 )
  {
    dword_7036F424 = (int)wglGetProcAddress("wglAllocateMemoryNV");
    if ( dword_7036F424 )
    {
      dword_7036F420 = (int)wglGetProcAddress("wglFreeMemoryNV");
      v118 = dword_7036F420 != 0;
    }
    else
    {
      dword_7036F420 = (int)wglGetProcAddress("wglFreeMemoryNV");
      v118 = 0;
    }
    byte_7036F3A4 = v118;
    v117 = byte_7036F3A0 | v135;
  }
  v119 = sub_6F7E4870("WGL_NV_video_capture", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v119 | v117) == 0;
  byte_7036F3A3 = v119;
  v120 = v119 | v117;
  if ( !v8 )
  {
    v121 = wglGetProcAddress("wglBindVideoCaptureDeviceNV");
    dword_7036F41C = (int)v121;
    dword_7036F418 = (int)wglGetProcAddress("wglEnumerateVideoCaptureDevicesNV");
    if ( dword_7036F418 && v121 )
    {
      v122 = wglGetProcAddress("wglLockVideoCaptureDeviceNV");
      dword_7036F414 = (int)v122;
      dword_7036F410 = (int)wglGetProcAddress("wglQueryVideoCaptureDeviceNV");
      if ( dword_7036F410 && v122 )
      {
        dword_7036F40C = (int)wglGetProcAddress("wglReleaseVideoCaptureDeviceNV");
        v123 = dword_7036F40C != 0;
LABEL_163:
        byte_7036F3A3 = v123;
        v120 = byte_7036F3A0 | v135;
        goto LABEL_164;
      }
    }
    else
    {
      dword_7036F414 = (int)wglGetProcAddress("wglLockVideoCaptureDeviceNV");
      dword_7036F410 = (int)wglGetProcAddress("wglQueryVideoCaptureDeviceNV");
    }
    dword_7036F40C = (int)wglGetProcAddress("wglReleaseVideoCaptureDeviceNV");
    v123 = 0;
    goto LABEL_163;
  }
LABEL_164:
  v124 = sub_6F7E4870("WGL_NV_video_output", v3, (unsigned int)v4);
  v8 = ((unsigned __int8)v124 | v120) == 0;
  byte_7036F3A2 = v124;
  v125 = v124 | v120;
  if ( v8 )
    goto LABEL_172;
  dword_7036F408 = (int)wglGetProcAddress("wglBindVideoImageNV");
  v138 = dword_7036F408;
  v126 = wglGetProcAddress("wglGetVideoDeviceNV");
  dword_7036F404 = (int)v126;
  dword_7036F400 = (int)wglGetProcAddress("wglGetVideoInfoNV");
  if ( !dword_7036F400 || !v126 || !v138 )
  {
    dword_7036F3FC = (int)wglGetProcAddress("wglReleaseVideoDeviceNV");
    dword_7036F3F8 = (int)wglGetProcAddress("wglReleaseVideoImageNV");
LABEL_195:
    dword_7036F3F4 = (int)wglGetProcAddress("wglSendPbufferToVideoNV");
    v128 = 0;
    goto LABEL_171;
  }
  v127 = wglGetProcAddress("wglReleaseVideoDeviceNV");
  dword_7036F3FC = (int)v127;
  dword_7036F3F8 = (int)wglGetProcAddress("wglReleaseVideoImageNV");
  if ( !dword_7036F3F8 || !v127 )
    goto LABEL_195;
  dword_7036F3F4 = (int)wglGetProcAddress("wglSendPbufferToVideoNV");
  v128 = dword_7036F3F4 != 0;
LABEL_171:
  byte_7036F3A2 = v128;
  v125 = byte_7036F3A0 | v135;
LABEL_172:
  byte_7036F3A1 = sub_6F7E4870("WGL_OML_sync_control", v3, (unsigned int)v4);
  if ( (unsigned __int8)byte_7036F3A1 | v125 )
  {
    v129 = wglGetProcAddress("wglGetMscRateOML");
    dword_7036F3F0 = (int)v129;
    v130 = wglGetProcAddress("wglGetSyncValuesOML");
    dword_7036F3EC = (int)v130;
    dword_7036F3E8 = (int)wglGetProcAddress("wglSwapBuffersMscOML");
    if ( dword_7036F3E8 && v129 && v130 )
    {
      v131 = wglGetProcAddress("wglSwapLayerBuffersMscOML");
      dword_7036F3E4 = (int)v131;
      dword_7036F3E0 = (int)wglGetProcAddress("wglWaitForMscOML");
      if ( dword_7036F3E0 && v131 )
      {
        dword_7036F3DC = (int)wglGetProcAddress("wglWaitForSbcOML");
        v132 = dword_7036F3DC != 0;
LABEL_179:
        byte_7036F3A1 = v132;
        return 0;
      }
    }
    else
    {
      dword_7036F3E4 = (int)wglGetProcAddress("wglSwapLayerBuffersMscOML");
      dword_7036F3E0 = (int)wglGetProcAddress("wglWaitForMscOML");
    }
    dword_7036F3DC = (int)wglGetProcAddress("wglWaitForSbcOML");
    v132 = 0;
    goto LABEL_179;
  }
  return 0;
}
