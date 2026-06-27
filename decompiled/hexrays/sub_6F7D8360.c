bool sub_6F7D8360()
{
  PROC v0; // ebp@1
  PROC v1; // esi@1
  PROC v2; // edi@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-2Ch]@2

  v0 = wglGetProcAddress("glClientWaitSync");
  dword_70371608 = (int)v0;
  v1 = wglGetProcAddress("glDeleteSync");
  dword_70371604 = (int)v1;
  v2 = wglGetProcAddress("glFenceSync");
  dword_70371600 = (int)v2;
  dword_703715FC = (int)wglGetProcAddress("glGetInteger64v");
  if ( !dword_703715FC )
  {
    v7 = "glGetSynciv";
LABEL_8:
    dword_703715F8 = (int)wglGetProcAddress(v7);
    dword_703715F4 = (int)wglGetProcAddress("glIsSync");
    goto LABEL_9;
  }
  v7 = "glGetSynciv";
  if ( v1 == 0 || v2 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glGetSynciv");
  v4 = v3;
  dword_703715F8 = (int)v3;
  v5 = wglGetProcAddress("glIsSync");
  dword_703715F4 = (int)v5;
  if ( v4 && v5 )
  {
    dword_703715F0 = (int)wglGetProcAddress("glWaitSync");
    return dword_703715F0 == 0;
  }
LABEL_9:
  dword_703715F0 = (int)wglGetProcAddress("glWaitSync");
  return 1;
}
