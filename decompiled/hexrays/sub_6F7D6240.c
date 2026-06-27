bool sub_6F7D6240()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // esi@10
  PROC v7; // esi@12
  PROC v8; // esi@14
  PROC v9; // esi@16
  PROC v10; // esi@18
  PROC v11; // esi@20
  PROC v12; // eax@22
  PROC v13; // esi@22
  PROC v14; // eax@22
  int v16; // [sp+10h] [bp-3Ch]@1
  int v17; // [sp+14h] [bp-38h]@1
  int v18; // [sp+18h] [bp-34h]@1
  int v19; // [sp+1Ch] [bp-30h]@1
  int v20; // [sp+20h] [bp-2Ch]@1
  int v21; // [sp+24h] [bp-28h]@1
  int v22; // [sp+28h] [bp-24h]@1
  int v23; // [sp+2Ch] [bp-20h]@1

  dword_70372358 = (int)wglGetProcAddress("glBlendEquation");
  v23 = dword_70372358;
  dword_70371A40 = (int)wglGetProcAddress("glColorSubTable");
  v16 = dword_70371A40;
  dword_70371A3C = (int)wglGetProcAddress("glColorTable");
  v17 = dword_70371A3C;
  dword_70371A38 = (int)wglGetProcAddress("glColorTableParameterfv");
  v18 = dword_70371A38;
  dword_70371A34 = (int)wglGetProcAddress("glColorTableParameteriv");
  v19 = dword_70371A34;
  dword_70371A30 = (int)wglGetProcAddress("glConvolutionFilter1D");
  v20 = dword_70371A30;
  v0 = wglGetProcAddress("glConvolutionFilter2D");
  dword_70371A2C = (int)v0;
  v1 = wglGetProcAddress("glConvolutionParameterf");
  dword_70371A28 = (int)v1;
  v2 = wglGetProcAddress("glConvolutionParameterfv");
  dword_70371A24 = (int)v2;
  dword_70371A20 = (int)wglGetProcAddress("glConvolutionParameteri");
  v22 = dword_70371A20;
  dword_70371A1C = (int)wglGetProcAddress("glConvolutionParameteriv");
  v21 = dword_70371A1C;
  dword_70371A18 = (int)wglGetProcAddress("glCopyColorSubTable");
  if ( !dword_70371A18
    || v16 == 0
    || v17 == 0
    || v18 == 0
    || v19 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v21 == 0
    || v22 == 0
    || v20 == 0
    || !v23 )
  {
    dword_70371A14 = (int)wglGetProcAddress("glCopyColorTable");
    dword_70371A10 = (int)wglGetProcAddress("glCopyConvolutionFilter1D");
LABEL_26:
    dword_70371A0C = (int)wglGetProcAddress("glCopyConvolutionFilter2D");
    dword_70371A08 = (int)wglGetProcAddress("glGetColorTable");
LABEL_27:
    dword_70371A04 = (int)wglGetProcAddress("glGetColorTableParameterfv");
    dword_70371A00 = (int)wglGetProcAddress("glGetColorTableParameteriv");
LABEL_28:
    dword_703719FC = (int)wglGetProcAddress("glGetConvolutionFilter");
    dword_703719F8 = (int)wglGetProcAddress("glGetConvolutionParameterfv");
LABEL_29:
    dword_703719F4 = (int)wglGetProcAddress("glGetConvolutionParameteriv");
    dword_703719F0 = (int)wglGetProcAddress("glGetHistogram");
LABEL_30:
    dword_703719EC = (int)wglGetProcAddress("glGetHistogramParameterfv");
    dword_703719E8 = (int)wglGetProcAddress("glGetHistogramParameteriv");
LABEL_31:
    dword_703719E4 = (int)wglGetProcAddress("glGetMinmax");
    dword_703719E0 = (int)wglGetProcAddress("glGetMinmaxParameterfv");
LABEL_32:
    dword_703719DC = (int)wglGetProcAddress("glGetMinmaxParameteriv");
    dword_703719D8 = (int)wglGetProcAddress("glGetSeparableFilter");
LABEL_33:
    dword_703719D4 = (int)wglGetProcAddress("glHistogram");
    dword_703719D0 = (int)wglGetProcAddress("glMinmax");
LABEL_34:
    dword_703719CC = (int)wglGetProcAddress("glResetHistogram");
    dword_703719C8 = (int)wglGetProcAddress("glResetMinmax");
    goto LABEL_35;
  }
  v3 = wglGetProcAddress("glCopyColorTable");
  dword_70371A14 = (int)v3;
  dword_70371A10 = (int)wglGetProcAddress("glCopyConvolutionFilter1D");
  if ( !dword_70371A10 || !v3 )
    goto LABEL_26;
  v4 = wglGetProcAddress("glCopyConvolutionFilter2D");
  dword_70371A0C = (int)v4;
  dword_70371A08 = (int)wglGetProcAddress("glGetColorTable");
  if ( !dword_70371A08 || !v4 )
    goto LABEL_27;
  v5 = wglGetProcAddress("glGetColorTableParameterfv");
  dword_70371A04 = (int)v5;
  dword_70371A00 = (int)wglGetProcAddress("glGetColorTableParameteriv");
  if ( !dword_70371A00 || !v5 )
    goto LABEL_28;
  v6 = wglGetProcAddress("glGetConvolutionFilter");
  dword_703719FC = (int)v6;
  dword_703719F8 = (int)wglGetProcAddress("glGetConvolutionParameterfv");
  if ( !dword_703719F8 || !v6 )
    goto LABEL_29;
  v7 = wglGetProcAddress("glGetConvolutionParameteriv");
  dword_703719F4 = (int)v7;
  dword_703719F0 = (int)wglGetProcAddress("glGetHistogram");
  if ( !dword_703719F0 || !v7 )
    goto LABEL_30;
  v8 = wglGetProcAddress("glGetHistogramParameterfv");
  dword_703719EC = (int)v8;
  dword_703719E8 = (int)wglGetProcAddress("glGetHistogramParameteriv");
  if ( !dword_703719E8 || !v8 )
    goto LABEL_31;
  v9 = wglGetProcAddress("glGetMinmax");
  dword_703719E4 = (int)v9;
  dword_703719E0 = (int)wglGetProcAddress("glGetMinmaxParameterfv");
  if ( !dword_703719E0 || !v9 )
    goto LABEL_32;
  v10 = wglGetProcAddress("glGetMinmaxParameteriv");
  dword_703719DC = (int)v10;
  dword_703719D8 = (int)wglGetProcAddress("glGetSeparableFilter");
  if ( !dword_703719D8 || !v10 )
    goto LABEL_33;
  v11 = wglGetProcAddress("glHistogram");
  dword_703719D4 = (int)v11;
  dword_703719D0 = (int)wglGetProcAddress("glMinmax");
  if ( !dword_703719D0 || !v11 )
    goto LABEL_34;
  v12 = wglGetProcAddress("glResetHistogram");
  v13 = v12;
  dword_703719CC = (int)v12;
  v14 = wglGetProcAddress("glResetMinmax");
  dword_703719C8 = (int)v14;
  if ( v13 && v14 )
  {
    dword_703719C4 = (int)wglGetProcAddress("glSeparableFilter2D");
    return dword_703719C4 == 0;
  }
LABEL_35:
  dword_703719C4 = (int)wglGetProcAddress("glSeparableFilter2D");
  return 1;
}
