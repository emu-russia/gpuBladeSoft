bool sub_6F7D70D0()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // eax@8
  PROC v6; // esi@8
  PROC v7; // eax@8
  int v9; // [sp+14h] [bp-28h]@1
  int v10; // [sp+18h] [bp-24h]@1
  int v11; // [sp+1Ch] [bp-20h]@1

  dword_7037181C = (int)wglGetProcAddress("glBindSampler");
  v11 = dword_7037181C;
  v0 = wglGetProcAddress("glDeleteSamplers");
  dword_70371818 = (int)v0;
  v1 = wglGetProcAddress("glGenSamplers");
  dword_70371814 = (int)v1;
  v2 = wglGetProcAddress("glGetSamplerParameterIiv");
  dword_70371810 = (int)v2;
  dword_7037180C = (int)wglGetProcAddress("glGetSamplerParameterIuiv");
  v10 = dword_7037180C;
  dword_70371808 = (int)wglGetProcAddress("glGetSamplerParameterfv");
  v9 = dword_70371808;
  dword_70371804 = (int)wglGetProcAddress("glGetSamplerParameteriv");
  if ( !dword_70371804 || v0 == 0 || v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v11 )
  {
    dword_70371800 = (int)wglGetProcAddress("glIsSampler");
    dword_703717FC = (int)wglGetProcAddress("glSamplerParameterIiv");
LABEL_12:
    dword_703717F8 = (int)wglGetProcAddress("glSamplerParameterIuiv");
    dword_703717F4 = (int)wglGetProcAddress("glSamplerParameterf");
LABEL_13:
    dword_703717F0 = (int)wglGetProcAddress("glSamplerParameterfv");
    dword_703717EC = (int)wglGetProcAddress("glSamplerParameteri");
    goto LABEL_14;
  }
  v3 = wglGetProcAddress("glIsSampler");
  dword_70371800 = (int)v3;
  dword_703717FC = (int)wglGetProcAddress("glSamplerParameterIiv");
  if ( !dword_703717FC || !v3 )
    goto LABEL_12;
  v4 = wglGetProcAddress("glSamplerParameterIuiv");
  dword_703717F8 = (int)v4;
  dword_703717F4 = (int)wglGetProcAddress("glSamplerParameterf");
  if ( !dword_703717F4 || !v4 )
    goto LABEL_13;
  v5 = wglGetProcAddress("glSamplerParameterfv");
  v6 = v5;
  dword_703717F0 = (int)v5;
  v7 = wglGetProcAddress("glSamplerParameteri");
  dword_703717EC = (int)v7;
  if ( v6 && v7 )
  {
    dword_703717E8 = (int)wglGetProcAddress("glSamplerParameteriv");
    return dword_703717E8 == 0;
  }
LABEL_14:
  dword_703717E8 = (int)wglGetProcAddress("glSamplerParameteriv");
  return 1;
}
