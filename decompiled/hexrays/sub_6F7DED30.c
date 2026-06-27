bool sub_6F7DED30()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glColorPointerListIBM");
  dword_70370744 = (int)v0;
  v1 = wglGetProcAddress("glEdgeFlagPointerListIBM");
  dword_70370740 = (int)v1;
  dword_7037073C = (int)wglGetProcAddress("glFogCoordPointerListIBM");
  v8 = dword_7037073C;
  v2 = wglGetProcAddress("glIndexPointerListIBM");
  dword_70370738 = (int)v2;
  dword_70370734 = (int)wglGetProcAddress("glNormalPointerListIBM");
  if ( !dword_70370734 )
  {
    v7 = "glSecondaryColorPointerListIBM";
LABEL_8:
    dword_70370730 = (int)wglGetProcAddress(v7);
    dword_7037072C = (int)wglGetProcAddress("glTexCoordPointerListIBM");
    goto LABEL_9;
  }
  v7 = "glSecondaryColorPointerListIBM";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glSecondaryColorPointerListIBM");
  v4 = v3;
  dword_70370730 = (int)v3;
  v5 = wglGetProcAddress("glTexCoordPointerListIBM");
  dword_7037072C = (int)v5;
  if ( v4 && v5 )
  {
    dword_70370728 = (int)wglGetProcAddress("glVertexPointerListIBM");
    return dword_70370728 == 0;
  }
LABEL_9:
  dword_70370728 = (int)wglGetProcAddress("glVertexPointerListIBM");
  return 1;
}
