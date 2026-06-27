bool sub_6F7E2E80()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBlendEquationSeparateiOES");
  dword_7036FDF8 = (int)v0;
  v1 = wglGetProcAddress("glBlendEquationiOES");
  dword_7036FDF4 = (int)v1;
  dword_7036FDF0 = (int)wglGetProcAddress("glBlendFuncSeparateiOES");
  v8 = dword_7036FDF0;
  v2 = wglGetProcAddress("glBlendFunciOES");
  dword_7036FDEC = (int)v2;
  dword_7036FDE8 = (int)wglGetProcAddress("glColorMaskiOES");
  if ( !dword_7036FDE8 )
  {
    v7 = "glDisableiOES";
LABEL_8:
    dword_7036FDE4 = (int)wglGetProcAddress(v7);
    dword_7036FDE0 = (int)wglGetProcAddress("glEnableiOES");
    goto LABEL_9;
  }
  v7 = "glDisableiOES";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glDisableiOES");
  v4 = v3;
  dword_7036FDE4 = (int)v3;
  v5 = wglGetProcAddress("glEnableiOES");
  dword_7036FDE0 = (int)v5;
  if ( v4 && v5 )
  {
    dword_7036FDDC = (int)wglGetProcAddress("glIsEnablediOES");
    return dword_7036FDDC == 0;
  }
LABEL_9:
  dword_7036FDDC = (int)wglGetProcAddress("glIsEnablediOES");
  return 1;
}
