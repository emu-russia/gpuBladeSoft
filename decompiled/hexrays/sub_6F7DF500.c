bool sub_6F7DF500()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // eax@8
  PROC v6; // esi@8
  PROC v7; // eax@8
  const CHAR *v9; // [sp+0h] [bp-3Ch]@2
  int v10; // [sp+18h] [bp-24h]@1
  int v11; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glGetImageHandleNV");
  dword_703705CC = (int)v0;
  v1 = wglGetProcAddress("glGetTextureHandleNV");
  dword_703705C8 = (int)v1;
  v2 = wglGetProcAddress("glGetTextureSamplerHandleNV");
  dword_703705C4 = (int)v2;
  dword_703705C0 = (int)wglGetProcAddress("glIsImageHandleResidentNV");
  v11 = dword_703705C0;
  dword_703705BC = (int)wglGetProcAddress("glIsTextureHandleResidentNV");
  v10 = dword_703705BC;
  dword_703705B8 = (int)wglGetProcAddress("glMakeImageHandleNonResidentNV");
  if ( !dword_703705B8 )
  {
    v9 = "glMakeImageHandleResidentNV";
LABEL_12:
    dword_703705B4 = (int)wglGetProcAddress(v9);
    dword_703705B0 = (int)wglGetProcAddress("glMakeTextureHandleNonResidentNV");
LABEL_13:
    dword_703705AC = (int)wglGetProcAddress("glMakeTextureHandleResidentNV");
    dword_703705A8 = (int)wglGetProcAddress("glProgramUniformHandleui64NV");
LABEL_14:
    dword_703705A4 = (int)wglGetProcAddress("glProgramUniformHandleui64vNV");
    dword_703705A0 = (int)wglGetProcAddress("glUniformHandleui64NV");
    goto LABEL_15;
  }
  v9 = "glMakeImageHandleResidentNV";
  if ( v1 == 0 || v2 == 0 || v10 == 0 || v11 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glMakeImageHandleResidentNV");
  dword_703705B4 = (int)v3;
  dword_703705B0 = (int)wglGetProcAddress("glMakeTextureHandleNonResidentNV");
  if ( !dword_703705B0 || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glMakeTextureHandleResidentNV");
  dword_703705AC = (int)v4;
  dword_703705A8 = (int)wglGetProcAddress("glProgramUniformHandleui64NV");
  if ( !dword_703705A8 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glProgramUniformHandleui64vNV");
  v6 = v5;
  dword_703705A4 = (int)v5;
  v7 = wglGetProcAddress("glUniformHandleui64NV");
  dword_703705A0 = (int)v7;
  if ( v6 && v7 )
  {
    dword_7037059C = (int)wglGetProcAddress("glUniformHandleui64vNV");
    return dword_7037059C == 0;
  }
LABEL_15:
  dword_7037059C = (int)wglGetProcAddress("glUniformHandleui64vNV");
  return 1;
}
