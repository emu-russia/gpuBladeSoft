bool sub_6F7E16F0()
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

  v0 = wglGetProcAddress("glGetBufferParameterui64vNV");
  dword_703700EC = (int)v0;
  v1 = wglGetProcAddress("glGetIntegerui64vNV");
  dword_703700E8 = (int)v1;
  v2 = wglGetProcAddress("glGetNamedBufferParameterui64vNV");
  dword_703700E4 = (int)v2;
  dword_703700E0 = (int)wglGetProcAddress("glIsBufferResidentNV");
  v11 = dword_703700E0;
  dword_703700DC = (int)wglGetProcAddress("glIsNamedBufferResidentNV");
  v10 = dword_703700DC;
  dword_703700D8 = (int)wglGetProcAddress("glMakeBufferNonResidentNV");
  if ( !dword_703700D8 )
  {
    v9 = "glMakeBufferResidentNV";
LABEL_12:
    dword_703700D4 = (int)wglGetProcAddress(v9);
    dword_703700D0 = (int)wglGetProcAddress("glMakeNamedBufferNonResidentNV");
LABEL_13:
    dword_703700CC = (int)wglGetProcAddress("glMakeNamedBufferResidentNV");
    dword_703700C8 = (int)wglGetProcAddress("glProgramUniformui64NV");
LABEL_14:
    dword_703700C4 = (int)wglGetProcAddress("glProgramUniformui64vNV");
    dword_703700C0 = (int)wglGetProcAddress("glUniformui64NV");
    goto LABEL_15;
  }
  v9 = "glMakeBufferResidentNV";
  if ( v1 == 0 || v2 == 0 || v10 == 0 || v11 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glMakeBufferResidentNV");
  dword_703700D4 = (int)v3;
  dword_703700D0 = (int)wglGetProcAddress("glMakeNamedBufferNonResidentNV");
  if ( !dword_703700D0 || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glMakeNamedBufferResidentNV");
  dword_703700CC = (int)v4;
  dword_703700C8 = (int)wglGetProcAddress("glProgramUniformui64NV");
  if ( !dword_703700C8 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glProgramUniformui64vNV");
  v6 = v5;
  dword_703700C4 = (int)v5;
  v7 = wglGetProcAddress("glUniformui64NV");
  dword_703700C0 = (int)v7;
  if ( v6 && v7 )
  {
    dword_703700BC = (int)wglGetProcAddress("glUniformui64vNV");
    return dword_703700BC == 0;
  }
LABEL_15:
  dword_703700BC = (int)wglGetProcAddress("glUniformui64vNV");
  return 1;
}
