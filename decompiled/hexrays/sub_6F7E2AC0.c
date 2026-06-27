bool sub_6F7E2AC0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBeginVideoCaptureNV");
  dword_7036FE74 = (int)v0;
  v1 = wglGetProcAddress("glBindVideoCaptureStreamBufferNV");
  dword_7036FE70 = (int)v1;
  v2 = wglGetProcAddress("glBindVideoCaptureStreamTextureNV");
  dword_7036FE6C = (int)v2;
  dword_7036FE68 = (int)wglGetProcAddress("glEndVideoCaptureNV");
  v8 = dword_7036FE68;
  dword_7036FE64 = (int)wglGetProcAddress("glGetVideoCaptureStreamdvNV");
  if ( !dword_7036FE64 )
  {
    v7 = "glGetVideoCaptureStreamfvNV";
LABEL_12:
    dword_7036FE60 = (int)wglGetProcAddress(v7);
    dword_7036FE5C = (int)wglGetProcAddress("glGetVideoCaptureStreamivNV");
LABEL_13:
    dword_7036FE58 = (int)wglGetProcAddress("glGetVideoCaptureivNV");
    dword_7036FE54 = (int)wglGetProcAddress("glVideoCaptureNV");
LABEL_14:
    dword_7036FE50 = (int)wglGetProcAddress("glVideoCaptureStreamParameterdvNV");
    dword_7036FE4C = (int)wglGetProcAddress("glVideoCaptureStreamParameterfvNV");
    goto LABEL_15;
  }
  v7 = "glGetVideoCaptureStreamfvNV";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glGetVideoCaptureStreamfvNV");
  dword_7036FE60 = (int)v3;
  dword_7036FE5C = (int)wglGetProcAddress("glGetVideoCaptureStreamivNV");
  if ( !dword_7036FE5C || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glGetVideoCaptureivNV");
  dword_7036FE58 = (int)v4;
  dword_7036FE54 = (int)wglGetProcAddress("glVideoCaptureNV");
  if ( !dword_7036FE54 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glVideoCaptureStreamParameterdvNV");
  dword_7036FE50 = (int)v5;
  dword_7036FE4C = (int)wglGetProcAddress("glVideoCaptureStreamParameterfvNV");
  if ( dword_7036FE4C && v5 )
  {
    dword_7036FE48 = (int)wglGetProcAddress("glVideoCaptureStreamParameterivNV");
    return dword_7036FE48 == 0;
  }
LABEL_15:
  dword_7036FE48 = (int)wglGetProcAddress("glVideoCaptureStreamParameterivNV");
  return 1;
}
