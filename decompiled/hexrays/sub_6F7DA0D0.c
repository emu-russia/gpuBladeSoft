bool sub_6F7DA0D0()
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

  dword_70371230 = (int)wglGetProcAddress("glAlphaFragmentOp1ATI");
  v11 = dword_70371230;
  v0 = wglGetProcAddress("glAlphaFragmentOp2ATI");
  dword_7037122C = (int)v0;
  v1 = wglGetProcAddress("glAlphaFragmentOp3ATI");
  dword_70371228 = (int)v1;
  v2 = wglGetProcAddress("glBeginFragmentShaderATI");
  dword_70371224 = (int)v2;
  dword_70371220 = (int)wglGetProcAddress("glBindFragmentShaderATI");
  v10 = dword_70371220;
  dword_7037121C = (int)wglGetProcAddress("glColorFragmentOp1ATI");
  v9 = dword_7037121C;
  dword_70371218 = (int)wglGetProcAddress("glColorFragmentOp2ATI");
  if ( !dword_70371218 || v0 == 0 || v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v11 )
  {
    dword_70371214 = (int)wglGetProcAddress("glColorFragmentOp3ATI");
    dword_70371210 = (int)wglGetProcAddress("glDeleteFragmentShaderATI");
LABEL_12:
    dword_7037120C = (int)wglGetProcAddress("glEndFragmentShaderATI");
    dword_70371208 = (int)wglGetProcAddress("glGenFragmentShadersATI");
LABEL_13:
    dword_70371204 = (int)wglGetProcAddress("glPassTexCoordATI");
    dword_70371200 = (int)wglGetProcAddress("glSampleMapATI");
    goto LABEL_14;
  }
  v3 = wglGetProcAddress("glColorFragmentOp3ATI");
  dword_70371214 = (int)v3;
  dword_70371210 = (int)wglGetProcAddress("glDeleteFragmentShaderATI");
  if ( !dword_70371210 || !v3 )
    goto LABEL_12;
  v4 = wglGetProcAddress("glEndFragmentShaderATI");
  dword_7037120C = (int)v4;
  dword_70371208 = (int)wglGetProcAddress("glGenFragmentShadersATI");
  if ( !dword_70371208 || !v4 )
    goto LABEL_13;
  v5 = wglGetProcAddress("glPassTexCoordATI");
  v6 = v5;
  dword_70371204 = (int)v5;
  v7 = wglGetProcAddress("glSampleMapATI");
  dword_70371200 = (int)v7;
  if ( v6 && v7 )
  {
    dword_703711FC = (int)wglGetProcAddress("glSetFragmentShaderConstantATI");
    return dword_703711FC == 0;
  }
LABEL_14:
  dword_703711FC = (int)wglGetProcAddress("glSetFragmentShaderConstantATI");
  return 1;
}
