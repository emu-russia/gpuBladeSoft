bool sub_6F7E2CA0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glDepthRangeArrayfvNV");
  dword_7036FE44 = (int)v0;
  v1 = wglGetProcAddress("glDepthRangeIndexedfNV");
  dword_7036FE40 = (int)v1;
  v2 = wglGetProcAddress("glDisableiNV");
  dword_7036FE3C = (int)v2;
  dword_7036FE38 = (int)wglGetProcAddress("glEnableiNV");
  v8 = dword_7036FE38;
  dword_7036FE34 = (int)wglGetProcAddress("glGetFloati_vNV");
  if ( !dword_7036FE34 )
  {
    v7 = "glIsEnablediNV";
LABEL_12:
    dword_7036FE30 = (int)wglGetProcAddress(v7);
    dword_7036FE2C = (int)wglGetProcAddress("glScissorArrayvNV");
LABEL_13:
    dword_7036FE28 = (int)wglGetProcAddress("glScissorIndexedNV");
    dword_7036FE24 = (int)wglGetProcAddress("glScissorIndexedvNV");
LABEL_14:
    dword_7036FE20 = (int)wglGetProcAddress("glViewportArrayvNV");
    dword_7036FE1C = (int)wglGetProcAddress("glViewportIndexedfNV");
    goto LABEL_15;
  }
  v7 = "glIsEnablediNV";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glIsEnablediNV");
  dword_7036FE30 = (int)v3;
  dword_7036FE2C = (int)wglGetProcAddress("glScissorArrayvNV");
  if ( !dword_7036FE2C || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glScissorIndexedNV");
  dword_7036FE28 = (int)v4;
  dword_7036FE24 = (int)wglGetProcAddress("glScissorIndexedvNV");
  if ( !dword_7036FE24 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glViewportArrayvNV");
  dword_7036FE20 = (int)v5;
  dword_7036FE1C = (int)wglGetProcAddress("glViewportIndexedfNV");
  if ( dword_7036FE1C && v5 )
  {
    dword_7036FE18 = (int)wglGetProcAddress("glViewportIndexedfvNV");
    return dword_7036FE18 == 0;
  }
LABEL_15:
  dword_7036FE18 = (int)wglGetProcAddress("glViewportIndexedfvNV");
  return 1;
}
