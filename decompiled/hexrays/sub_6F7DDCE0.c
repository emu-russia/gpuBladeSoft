bool sub_6F7DDCE0()
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

  v0 = wglGetProcAddress("glGetHistogramEXT");
  dword_70370AF0 = (int)v0;
  v1 = wglGetProcAddress("glGetHistogramParameterfvEXT");
  dword_70370AEC = (int)v1;
  dword_70370AE8 = (int)wglGetProcAddress("glGetHistogramParameterivEXT");
  v9 = dword_70370AE8;
  v2 = wglGetProcAddress("glGetMinmaxEXT");
  dword_70370AE4 = (int)v2;
  dword_70370AE0 = (int)wglGetProcAddress("glGetMinmaxParameterfvEXT");
  if ( !dword_70370AE0 )
  {
    v8 = "glGetMinmaxParameterivEXT";
LABEL_10:
    dword_70370ADC = (int)wglGetProcAddress(v8);
    dword_70370AD8 = (int)wglGetProcAddress("glHistogramEXT");
LABEL_11:
    dword_70370AD4 = (int)wglGetProcAddress("glMinmaxEXT");
    dword_70370AD0 = (int)wglGetProcAddress("glResetHistogramEXT");
    goto LABEL_12;
  }
  v8 = "glGetMinmaxParameterivEXT";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetMinmaxParameterivEXT");
  dword_70370ADC = (int)v3;
  dword_70370AD8 = (int)wglGetProcAddress("glHistogramEXT");
  if ( !dword_70370AD8 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glMinmaxEXT");
  v5 = v4;
  dword_70370AD4 = (int)v4;
  v6 = wglGetProcAddress("glResetHistogramEXT");
  dword_70370AD0 = (int)v6;
  if ( v5 && v6 )
  {
    dword_70370ACC = (int)wglGetProcAddress("glResetMinmaxEXT");
    return dword_70370ACC == 0;
  }
LABEL_12:
  dword_70370ACC = (int)wglGetProcAddress("glResetMinmaxEXT");
  return 1;
}
