bool sub_6F7D6DC0()
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
  int v11; // [sp+1Ch] [bp-30h]@1
  int v12; // [sp+20h] [bp-2Ch]@1
  int v13; // [sp+24h] [bp-28h]@1
  int v14; // [sp+28h] [bp-24h]@1
  int v15; // [sp+2Ch] [bp-20h]@1

  dword_70371878 = (int)wglGetProcAddress("glGetGraphicsResetStatusARB");
  v15 = dword_70371878;
  dword_70371874 = (int)wglGetProcAddress("glGetnColorTableARB");
  v11 = dword_70371874;
  dword_70371870 = (int)wglGetProcAddress("glGetnCompressedTexImageARB");
  v12 = dword_70371870;
  v0 = wglGetProcAddress("glGetnConvolutionFilterARB");
  dword_7037186C = (int)v0;
  v1 = wglGetProcAddress("glGetnHistogramARB");
  dword_70371868 = (int)v1;
  v2 = wglGetProcAddress("glGetnMapdvARB");
  dword_70371864 = (int)v2;
  dword_70371860 = (int)wglGetProcAddress("glGetnMapfvARB");
  v14 = dword_70371860;
  dword_7037185C = (int)wglGetProcAddress("glGetnMapivARB");
  v13 = dword_7037185C;
  dword_70371858 = (int)wglGetProcAddress("glGetnMinmaxARB");
  if ( !dword_70371858 || v11 == 0 || v12 == 0 || v0 == 0 || v1 == 0 || v13 == 0 || v14 == 0 || v2 == 0 || !v15 )
  {
    dword_70371854 = (int)wglGetProcAddress("glGetnPixelMapfvARB");
    dword_70371850 = (int)wglGetProcAddress("glGetnPixelMapuivARB");
LABEL_16:
    dword_7037184C = (int)wglGetProcAddress("glGetnPixelMapusvARB");
    dword_70371848 = (int)wglGetProcAddress("glGetnPolygonStippleARB");
LABEL_17:
    dword_70371844 = (int)wglGetProcAddress("glGetnSeparableFilterARB");
    dword_70371840 = (int)wglGetProcAddress("glGetnTexImageARB");
LABEL_18:
    dword_7037183C = (int)wglGetProcAddress("glGetnUniformdvARB");
    dword_70371838 = (int)wglGetProcAddress("glGetnUniformfvARB");
LABEL_19:
    dword_70371834 = (int)wglGetProcAddress("glGetnUniformivARB");
    dword_70371830 = (int)wglGetProcAddress("glGetnUniformuivARB");
    goto LABEL_20;
  }
  v3 = wglGetProcAddress("glGetnPixelMapfvARB");
  dword_70371854 = (int)v3;
  dword_70371850 = (int)wglGetProcAddress("glGetnPixelMapuivARB");
  if ( !dword_70371850 || !v3 )
    goto LABEL_16;
  v4 = wglGetProcAddress("glGetnPixelMapusvARB");
  dword_7037184C = (int)v4;
  dword_70371848 = (int)wglGetProcAddress("glGetnPolygonStippleARB");
  if ( !dword_70371848 || !v4 )
    goto LABEL_17;
  v5 = wglGetProcAddress("glGetnSeparableFilterARB");
  dword_70371844 = (int)v5;
  dword_70371840 = (int)wglGetProcAddress("glGetnTexImageARB");
  if ( !dword_70371840 || !v5 )
    goto LABEL_18;
  v6 = wglGetProcAddress("glGetnUniformdvARB");
  dword_7037183C = (int)v6;
  dword_70371838 = (int)wglGetProcAddress("glGetnUniformfvARB");
  if ( !dword_70371838 || !v6 )
    goto LABEL_19;
  v7 = wglGetProcAddress("glGetnUniformivARB");
  v8 = v7;
  dword_70371834 = (int)v7;
  v9 = wglGetProcAddress("glGetnUniformuivARB");
  dword_70371830 = (int)v9;
  if ( v8 && v9 )
  {
    dword_7037182C = (int)wglGetProcAddress("glReadnPixelsARB");
    return dword_7037182C == 0;
  }
LABEL_20:
  dword_7037182C = (int)wglGetProcAddress("glReadnPixelsARB");
  return 1;
}
