bool sub_6F7D44C0()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // eax@10
  PROC v7; // esi@10
  PROC v8; // eax@10
  int v10; // [sp+14h] [bp-28h]@1
  int v11; // [sp+18h] [bp-24h]@1
  int v12; // [sp+1Ch] [bp-20h]@1

  dword_70371DE4 = (int)wglGetProcAddress("glGetImageHandleARB");
  v12 = dword_70371DE4;
  v0 = wglGetProcAddress("glGetTextureHandleARB");
  dword_70371DE0 = (int)v0;
  v1 = wglGetProcAddress("glGetTextureSamplerHandleARB");
  dword_70371DDC = (int)v1;
  v2 = wglGetProcAddress("glGetVertexAttribLui64vARB");
  dword_70371DD8 = (int)v2;
  dword_70371DD4 = (int)wglGetProcAddress("glIsImageHandleResidentARB");
  v11 = dword_70371DD4;
  dword_70371DD0 = (int)wglGetProcAddress("glIsTextureHandleResidentARB");
  v10 = dword_70371DD0;
  dword_70371DCC = (int)wglGetProcAddress("glMakeImageHandleNonResidentARB");
  if ( !dword_70371DCC || v0 == 0 || v1 == 0 || v2 == 0 || v10 == 0 || v11 == 0 || !v12 )
  {
    dword_70371DC8 = (int)wglGetProcAddress("glMakeImageHandleResidentARB");
    dword_70371DC4 = (int)wglGetProcAddress("glMakeTextureHandleNonResidentARB");
LABEL_14:
    dword_70371DC0 = (int)wglGetProcAddress("glMakeTextureHandleResidentARB");
    dword_70371DBC = (int)wglGetProcAddress("glProgramUniformHandleui64ARB");
LABEL_15:
    dword_70371DB8 = (int)wglGetProcAddress("glProgramUniformHandleui64vARB");
    dword_70371DB4 = (int)wglGetProcAddress("glUniformHandleui64ARB");
LABEL_16:
    dword_70371DB0 = (int)wglGetProcAddress("glUniformHandleui64vARB");
    dword_70371DAC = (int)wglGetProcAddress("glVertexAttribL1ui64ARB");
    goto LABEL_17;
  }
  v3 = wglGetProcAddress("glMakeImageHandleResidentARB");
  dword_70371DC8 = (int)v3;
  dword_70371DC4 = (int)wglGetProcAddress("glMakeTextureHandleNonResidentARB");
  if ( !dword_70371DC4 || !v3 )
    goto LABEL_14;
  v4 = wglGetProcAddress("glMakeTextureHandleResidentARB");
  dword_70371DC0 = (int)v4;
  dword_70371DBC = (int)wglGetProcAddress("glProgramUniformHandleui64ARB");
  if ( !dword_70371DBC || !v4 )
    goto LABEL_15;
  v5 = wglGetProcAddress("glProgramUniformHandleui64vARB");
  dword_70371DB8 = (int)v5;
  dword_70371DB4 = (int)wglGetProcAddress("glUniformHandleui64ARB");
  if ( !dword_70371DB4 || !v5 )
    goto LABEL_16;
  v6 = wglGetProcAddress("glUniformHandleui64vARB");
  v7 = v6;
  dword_70371DB0 = (int)v6;
  v8 = wglGetProcAddress("glVertexAttribL1ui64ARB");
  dword_70371DAC = (int)v8;
  if ( v7 && v8 )
  {
    dword_70371DA8 = (int)wglGetProcAddress("glVertexAttribL1ui64vARB");
    return dword_70371DA8 == 0;
  }
LABEL_17:
  dword_70371DA8 = (int)wglGetProcAddress("glVertexAttribL1ui64vARB");
  return 1;
}
