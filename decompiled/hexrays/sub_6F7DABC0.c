bool sub_6F7DABC0()
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

  v0 = wglGetProcAddress("glConvolutionFilter1DEXT");
  dword_70371090 = (int)v0;
  v1 = wglGetProcAddress("glConvolutionFilter2DEXT");
  dword_7037108C = (int)v1;
  v2 = wglGetProcAddress("glConvolutionParameterfEXT");
  dword_70371088 = (int)v2;
  dword_70371084 = (int)wglGetProcAddress("glConvolutionParameterfvEXT");
  v11 = dword_70371084;
  dword_70371080 = (int)wglGetProcAddress("glConvolutionParameteriEXT");
  v10 = dword_70371080;
  dword_7037107C = (int)wglGetProcAddress("glConvolutionParameterivEXT");
  if ( !dword_7037107C )
  {
    v9 = "glCopyConvolutionFilter1DEXT";
LABEL_12:
    dword_70371078 = (int)wglGetProcAddress(v9);
    dword_70371074 = (int)wglGetProcAddress("glCopyConvolutionFilter2DEXT");
LABEL_13:
    dword_70371070 = (int)wglGetProcAddress("glGetConvolutionFilterEXT");
    dword_7037106C = (int)wglGetProcAddress("glGetConvolutionParameterfvEXT");
LABEL_14:
    dword_70371068 = (int)wglGetProcAddress("glGetConvolutionParameterivEXT");
    dword_70371064 = (int)wglGetProcAddress("glGetSeparableFilterEXT");
    goto LABEL_15;
  }
  v9 = "glCopyConvolutionFilter1DEXT";
  if ( v1 == 0 || v2 == 0 || v10 == 0 || v11 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glCopyConvolutionFilter1DEXT");
  dword_70371078 = (int)v3;
  dword_70371074 = (int)wglGetProcAddress("glCopyConvolutionFilter2DEXT");
  if ( !dword_70371074 || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glGetConvolutionFilterEXT");
  dword_70371070 = (int)v4;
  dword_7037106C = (int)wglGetProcAddress("glGetConvolutionParameterfvEXT");
  if ( !dword_7037106C || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glGetConvolutionParameterivEXT");
  v6 = v5;
  dword_70371068 = (int)v5;
  v7 = wglGetProcAddress("glGetSeparableFilterEXT");
  dword_70371064 = (int)v7;
  if ( v6 && v7 )
  {
    dword_70371060 = (int)wglGetProcAddress("glSeparableFilter2DEXT");
    return dword_70371060 == 0;
  }
LABEL_15:
  dword_70371060 = (int)wglGetProcAddress("glSeparableFilter2DEXT");
  return 1;
}
