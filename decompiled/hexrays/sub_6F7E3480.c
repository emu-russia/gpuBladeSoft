bool sub_6F7E3480()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glExtGetBufferPointervQCOM");
  dword_7036FCC4 = (int)v0;
  v1 = wglGetProcAddress("glExtGetBuffersQCOM");
  dword_7036FCC0 = (int)v1;
  dword_7036FCBC = (int)wglGetProcAddress("glExtGetFramebuffersQCOM");
  v8 = dword_7036FCBC;
  v2 = wglGetProcAddress("glExtGetRenderbuffersQCOM");
  dword_7036FCB8 = (int)v2;
  dword_7036FCB4 = (int)wglGetProcAddress("glExtGetTexLevelParameterivQCOM");
  if ( !dword_7036FCB4 )
  {
    v7 = "glExtGetTexSubImageQCOM";
LABEL_8:
    dword_7036FCB0 = (int)wglGetProcAddress(v7);
    dword_7036FCAC = (int)wglGetProcAddress("glExtGetTexturesQCOM");
    goto LABEL_9;
  }
  v7 = "glExtGetTexSubImageQCOM";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glExtGetTexSubImageQCOM");
  v4 = v3;
  dword_7036FCB0 = (int)v3;
  v5 = wglGetProcAddress("glExtGetTexturesQCOM");
  dword_7036FCAC = (int)v5;
  if ( v4 && v5 )
  {
    dword_7036FCA8 = (int)wglGetProcAddress("glExtTexObjectStateOverrideiQCOM");
    return dword_7036FCA8 == 0;
  }
LABEL_9:
  dword_7036FCA8 = (int)wglGetProcAddress("glExtTexObjectStateOverrideiQCOM");
  return 1;
}
