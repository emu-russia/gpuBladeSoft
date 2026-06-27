bool sub_6F7E3F00()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-3Ch]@2
  int v9; // [sp+18h] [bp-24h]@1
  int v10; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glAllocMPEGPredictorsSGIX");
  dword_7036FAF8 = (int)v0;
  v1 = wglGetProcAddress("glDeleteMPEGPredictorsSGIX");
  dword_7036FAF4 = (int)v1;
  v2 = wglGetProcAddress("glGenMPEGPredictorsSGIX");
  dword_7036FAF0 = (int)v2;
  dword_7036FAEC = (int)wglGetProcAddress("glGetMPEGParameterfvSGIX");
  v10 = dword_7036FAEC;
  dword_7036FAE8 = (int)wglGetProcAddress("glGetMPEGParameterivSGIX");
  v9 = dword_7036FAE8;
  dword_7036FAE4 = (int)wglGetProcAddress("glGetMPEGPredictorSGIX");
  if ( !dword_7036FAE4 )
  {
    v8 = "glGetMPEGQuantTableubv";
LABEL_10:
    dword_7036FAE0 = (int)wglGetProcAddress(v8);
    dword_7036FADC = (int)wglGetProcAddress("glIsMPEGPredictorSGIX");
LABEL_11:
    dword_7036FAD8 = (int)wglGetProcAddress("glMPEGPredictorSGIX");
    dword_7036FAD4 = (int)wglGetProcAddress("glMPEGQuantTableubv");
    goto LABEL_12;
  }
  v8 = "glGetMPEGQuantTableubv";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetMPEGQuantTableubv");
  dword_7036FAE0 = (int)v3;
  dword_7036FADC = (int)wglGetProcAddress("glIsMPEGPredictorSGIX");
  if ( !dword_7036FADC || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glMPEGPredictorSGIX");
  v5 = v4;
  dword_7036FAD8 = (int)v4;
  v6 = wglGetProcAddress("glMPEGQuantTableubv");
  dword_7036FAD4 = (int)v6;
  if ( v5 && v6 )
  {
    dword_7036FAD0 = (int)wglGetProcAddress("glSwapMPEGPredictorsSGIX");
    return dword_7036FAD0 == 0;
  }
LABEL_12:
  dword_7036FAD0 = (int)wglGetProcAddress("glSwapMPEGPredictorsSGIX");
  return 1;
}
