bool sub_6F7D9CD0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-3Ch]@2
  int v9; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glDepthRangeArrayv");
  dword_703712B8 = (int)v0;
  v1 = wglGetProcAddress("glDepthRangeIndexed");
  dword_703712B4 = (int)v1;
  dword_703712B0 = (int)wglGetProcAddress("glGetDoublei_v");
  v9 = dword_703712B0;
  v2 = wglGetProcAddress("glGetFloati_v");
  dword_703712AC = (int)v2;
  dword_703712A8 = (int)wglGetProcAddress("glScissorArrayv");
  if ( !dword_703712A8 )
  {
    v8 = "glScissorIndexed";
LABEL_10:
    dword_703712A4 = (int)wglGetProcAddress(v8);
    dword_703712A0 = (int)wglGetProcAddress("glScissorIndexedv");
LABEL_11:
    dword_7037129C = (int)wglGetProcAddress("glViewportArrayv");
    dword_70371298 = (int)wglGetProcAddress("glViewportIndexedf");
    goto LABEL_12;
  }
  v8 = "glScissorIndexed";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glScissorIndexed");
  dword_703712A4 = (int)v3;
  dword_703712A0 = (int)wglGetProcAddress("glScissorIndexedv");
  if ( !dword_703712A0 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glViewportArrayv");
  v5 = v4;
  dword_7037129C = (int)v4;
  v6 = wglGetProcAddress("glViewportIndexedf");
  dword_70371298 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70371294 = (int)wglGetProcAddress("glViewportIndexedfv");
    return dword_70371294 == 0;
  }
LABEL_12:
  dword_70371294 = (int)wglGetProcAddress("glViewportIndexedfv");
  return 1;
}
