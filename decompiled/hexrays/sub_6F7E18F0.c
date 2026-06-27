bool sub_6F7E18F0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-3Ch]@2
  int v9; // [sp+18h] [bp-24h]@1
  int v10; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glActiveVaryingNV");
  dword_7037006C = (int)v0;
  v1 = wglGetProcAddress("glBeginTransformFeedbackNV");
  dword_70370068 = (int)v1;
  v2 = wglGetProcAddress("glBindBufferBaseNV");
  dword_70370064 = (int)v2;
  dword_70370060 = (int)wglGetProcAddress("glBindBufferOffsetNV");
  v10 = dword_70370060;
  dword_7037005C = (int)wglGetProcAddress("glBindBufferRangeNV");
  v9 = dword_7037005C;
  dword_70370058 = (int)wglGetProcAddress("glEndTransformFeedbackNV");
  if ( !dword_70370058 )
  {
    v8 = "glGetActiveVaryingNV";
LABEL_10:
    dword_70370054 = (int)wglGetProcAddress(v8);
    dword_70370050 = (int)wglGetProcAddress("glGetTransformFeedbackVaryingNV");
LABEL_11:
    dword_7037004C = (int)wglGetProcAddress("glGetVaryingLocationNV");
    dword_70370048 = (int)wglGetProcAddress("glTransformFeedbackAttribsNV");
    goto LABEL_12;
  }
  v8 = "glGetActiveVaryingNV";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetActiveVaryingNV");
  dword_70370054 = (int)v3;
  dword_70370050 = (int)wglGetProcAddress("glGetTransformFeedbackVaryingNV");
  if ( !dword_70370050 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glGetVaryingLocationNV");
  v5 = v4;
  dword_7037004C = (int)v4;
  v6 = wglGetProcAddress("glTransformFeedbackAttribsNV");
  dword_70370048 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70370044 = (int)wglGetProcAddress("glTransformFeedbackVaryingsNV");
    return dword_70370044 == 0;
  }
LABEL_12:
  dword_70370044 = (int)wglGetProcAddress("glTransformFeedbackVaryingsNV");
  return 1;
}
