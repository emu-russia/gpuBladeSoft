bool sub_6F7D84F0()
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

  v0 = wglGetProcAddress("glBindBufferBase");
  dword_70371538 = (int)v0;
  v1 = wglGetProcAddress("glBindBufferRange");
  dword_70371534 = (int)v1;
  dword_70371530 = (int)wglGetProcAddress("glGetActiveUniformBlockName");
  v9 = dword_70371530;
  v2 = wglGetProcAddress("glGetActiveUniformBlockiv");
  dword_7037152C = (int)v2;
  dword_70371528 = (int)wglGetProcAddress("glGetActiveUniformName");
  if ( !dword_70371528 )
  {
    v8 = "glGetActiveUniformsiv";
LABEL_10:
    dword_70371524 = (int)wglGetProcAddress(v8);
    dword_70371520 = (int)wglGetProcAddress("glGetIntegeri_v");
LABEL_11:
    dword_7037151C = (int)wglGetProcAddress("glGetUniformBlockIndex");
    dword_70371518 = (int)wglGetProcAddress("glGetUniformIndices");
    goto LABEL_12;
  }
  v8 = "glGetActiveUniformsiv";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetActiveUniformsiv");
  dword_70371524 = (int)v3;
  dword_70371520 = (int)wglGetProcAddress("glGetIntegeri_v");
  if ( !dword_70371520 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glGetUniformBlockIndex");
  v5 = v4;
  dword_7037151C = (int)v4;
  v6 = wglGetProcAddress("glGetUniformIndices");
  dword_70371518 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70371514 = (int)wglGetProcAddress("glUniformBlockBinding");
    return dword_70371514 == 0;
  }
LABEL_12:
  dword_70371514 = (int)wglGetProcAddress("glUniformBlockBinding");
  return 1;
}
