bool sub_6F7E3320()
{
  PROC v0; // ebp@1
  PROC v1; // esi@1
  PROC v2; // edi@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-2Ch]@2

  v0 = wglGetProcAddress("glGetTexGenfvOES");
  dword_7036FD20 = (int)v0;
  v1 = wglGetProcAddress("glGetTexGenivOES");
  dword_7036FD1C = (int)v1;
  v2 = wglGetProcAddress("glGetTexGenxvOES");
  dword_7036FD18 = (int)v2;
  dword_7036FD14 = (int)wglGetProcAddress("glTexGenfOES");
  if ( !dword_7036FD14 )
  {
    v8 = "glTexGenfvOES";
LABEL_10:
    dword_7036FD10 = (int)wglGetProcAddress(v8);
    dword_7036FD0C = (int)wglGetProcAddress("glTexGeniOES");
LABEL_11:
    dword_7036FD08 = (int)wglGetProcAddress("glTexGenivOES");
    dword_7036FD04 = (int)wglGetProcAddress("glTexGenxOES");
    goto LABEL_12;
  }
  v8 = "glTexGenfvOES";
  if ( v1 == 0 || v2 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glTexGenfvOES");
  dword_7036FD10 = (int)v3;
  dword_7036FD0C = (int)wglGetProcAddress("glTexGeniOES");
  if ( !dword_7036FD0C || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glTexGenivOES");
  v5 = v4;
  dword_7036FD08 = (int)v4;
  v6 = wglGetProcAddress("glTexGenxOES");
  dword_7036FD04 = (int)v6;
  if ( v5 && v6 )
  {
    dword_7036FD00 = (int)wglGetProcAddress("glTexGenxvOES");
    return dword_7036FD00 == 0;
  }
LABEL_12:
  dword_7036FD00 = (int)wglGetProcAddress("glTexGenxvOES");
  return 1;
}
