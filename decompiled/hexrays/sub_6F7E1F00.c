bool sub_6F7E1F00()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBufferAddressRangeNV");
  dword_7036FFA4 = (int)v0;
  v1 = wglGetProcAddress("glColorFormatNV");
  dword_7036FFA0 = (int)v1;
  v2 = wglGetProcAddress("glEdgeFlagFormatNV");
  dword_7036FF9C = (int)v2;
  dword_7036FF98 = (int)wglGetProcAddress("glFogCoordFormatNV");
  v8 = dword_7036FF98;
  dword_7036FF94 = (int)wglGetProcAddress("glGetIntegerui64i_vNV");
  if ( !dword_7036FF94 )
  {
    v7 = "glIndexFormatNV";
LABEL_12:
    dword_7036FF90 = (int)wglGetProcAddress(v7);
    dword_7036FF8C = (int)wglGetProcAddress("glNormalFormatNV");
LABEL_13:
    dword_7036FF88 = (int)wglGetProcAddress("glSecondaryColorFormatNV");
    dword_7036FF84 = (int)wglGetProcAddress("glTexCoordFormatNV");
LABEL_14:
    dword_7036FF80 = (int)wglGetProcAddress("glVertexAttribFormatNV");
    dword_7036FF7C = (int)wglGetProcAddress("glVertexAttribIFormatNV");
    goto LABEL_15;
  }
  v7 = "glIndexFormatNV";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glIndexFormatNV");
  dword_7036FF90 = (int)v3;
  dword_7036FF8C = (int)wglGetProcAddress("glNormalFormatNV");
  if ( !dword_7036FF8C || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glSecondaryColorFormatNV");
  dword_7036FF88 = (int)v4;
  dword_7036FF84 = (int)wglGetProcAddress("glTexCoordFormatNV");
  if ( !dword_7036FF84 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glVertexAttribFormatNV");
  dword_7036FF80 = (int)v5;
  dword_7036FF7C = (int)wglGetProcAddress("glVertexAttribIFormatNV");
  if ( dword_7036FF7C && v5 )
  {
    dword_7036FF78 = (int)wglGetProcAddress("glVertexFormatNV");
    return dword_7036FF78 == 0;
  }
LABEL_15:
  dword_7036FF78 = (int)wglGetProcAddress("glVertexFormatNV");
  return 1;
}
