bool sub_6F7E3200()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glGetSamplerParameterIivOES");
  dword_7036FD48 = (int)v0;
  v1 = wglGetProcAddress("glGetSamplerParameterIuivOES");
  dword_7036FD44 = (int)v1;
  dword_7036FD40 = (int)wglGetProcAddress("glGetTexParameterIivOES");
  v8 = dword_7036FD40;
  v2 = wglGetProcAddress("glGetTexParameterIuivOES");
  dword_7036FD3C = (int)v2;
  dword_7036FD38 = (int)wglGetProcAddress("glSamplerParameterIivOES");
  if ( !dword_7036FD38 )
  {
    v7 = "glSamplerParameterIuivOES";
LABEL_8:
    dword_7036FD34 = (int)wglGetProcAddress(v7);
    dword_7036FD30 = (int)wglGetProcAddress("glTexParameterIivOES");
    goto LABEL_9;
  }
  v7 = "glSamplerParameterIuivOES";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glSamplerParameterIuivOES");
  v4 = v3;
  dword_7036FD34 = (int)v3;
  v5 = wglGetProcAddress("glTexParameterIivOES");
  dword_7036FD30 = (int)v5;
  if ( v4 && v5 )
  {
    dword_7036FD2C = (int)wglGetProcAddress("glTexParameterIuivOES");
    return dword_7036FD2C == 0;
  }
LABEL_9:
  dword_7036FD2C = (int)wglGetProcAddress("glTexParameterIuivOES");
  return 1;
}
