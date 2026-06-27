bool sub_6F7D59E0()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // esi@10
  PROC v7; // eax@12
  PROC v8; // esi@12
  PROC v9; // eax@12
  int v11; // [sp+14h] [bp-28h]@1
  int v12; // [sp+18h] [bp-24h]@1
  int v13; // [sp+1Ch] [bp-20h]@1

  dword_70371B18 = (int)wglGetProcAddress("glGetUniformdv");
  v13 = dword_70371B18;
  v0 = wglGetProcAddress("glUniform1d");
  dword_70371B14 = (int)v0;
  v1 = wglGetProcAddress("glUniform1dv");
  dword_70371B10 = (int)v1;
  v2 = wglGetProcAddress("glUniform2d");
  dword_70371B0C = (int)v2;
  dword_70371B08 = (int)wglGetProcAddress("glUniform2dv");
  v12 = dword_70371B08;
  dword_70371B04 = (int)wglGetProcAddress("glUniform3d");
  v11 = dword_70371B04;
  dword_70371B00 = (int)wglGetProcAddress("glUniform3dv");
  if ( !dword_70371B00 || v0 == 0 || v1 == 0 || v2 == 0 || v11 == 0 || v12 == 0 || !v13 )
  {
    dword_70371AFC = (int)wglGetProcAddress("glUniform4d");
    dword_70371AF8 = (int)wglGetProcAddress("glUniform4dv");
LABEL_16:
    dword_70371AF4 = (int)wglGetProcAddress("glUniformMatrix2dv");
    dword_70371AF0 = (int)wglGetProcAddress("glUniformMatrix2x3dv");
LABEL_17:
    dword_70371AEC = (int)wglGetProcAddress("glUniformMatrix2x4dv");
    dword_70371AE8 = (int)wglGetProcAddress("glUniformMatrix3dv");
LABEL_18:
    dword_70371AE4 = (int)wglGetProcAddress("glUniformMatrix3x2dv");
    dword_70371AE0 = (int)wglGetProcAddress("glUniformMatrix3x4dv");
LABEL_19:
    dword_70371ADC = (int)wglGetProcAddress("glUniformMatrix4dv");
    dword_70371AD8 = (int)wglGetProcAddress("glUniformMatrix4x2dv");
    goto LABEL_20;
  }
  v3 = wglGetProcAddress("glUniform4d");
  dword_70371AFC = (int)v3;
  dword_70371AF8 = (int)wglGetProcAddress("glUniform4dv");
  if ( !dword_70371AF8 || !v3 )
    goto LABEL_16;
  v4 = wglGetProcAddress("glUniformMatrix2dv");
  dword_70371AF4 = (int)v4;
  dword_70371AF0 = (int)wglGetProcAddress("glUniformMatrix2x3dv");
  if ( !dword_70371AF0 || !v4 )
    goto LABEL_17;
  v5 = wglGetProcAddress("glUniformMatrix2x4dv");
  dword_70371AEC = (int)v5;
  dword_70371AE8 = (int)wglGetProcAddress("glUniformMatrix3dv");
  if ( !dword_70371AE8 || !v5 )
    goto LABEL_18;
  v6 = wglGetProcAddress("glUniformMatrix3x2dv");
  dword_70371AE4 = (int)v6;
  dword_70371AE0 = (int)wglGetProcAddress("glUniformMatrix3x4dv");
  if ( !dword_70371AE0 || !v6 )
    goto LABEL_19;
  v7 = wglGetProcAddress("glUniformMatrix4dv");
  v8 = v7;
  dword_70371ADC = (int)v7;
  v9 = wglGetProcAddress("glUniformMatrix4x2dv");
  dword_70371AD8 = (int)v9;
  if ( v8 && v9 )
  {
    dword_70371AD4 = (int)wglGetProcAddress("glUniformMatrix4x3dv");
    return dword_70371AD4 == 0;
  }
LABEL_20:
  dword_70371AD4 = (int)wglGetProcAddress("glUniformMatrix4x3dv");
  return 1;
}
