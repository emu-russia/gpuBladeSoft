bool sub_6F7E1C10()
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
  int v11; // [sp+10h] [bp-2Ch]@1
  int v12; // [sp+14h] [bp-28h]@1
  int v13; // [sp+18h] [bp-24h]@1
  int v14; // [sp+1Ch] [bp-20h]@1

  dword_7036FFF0 = (int)wglGetProcAddress("glGetVertexAttribLi64vNV");
  v14 = dword_7036FFF0;
  dword_7036FFEC = (int)wglGetProcAddress("glGetVertexAttribLui64vNV");
  v11 = dword_7036FFEC;
  v0 = wglGetProcAddress("glVertexAttribL1i64NV");
  dword_7036FFE8 = (int)v0;
  v1 = wglGetProcAddress("glVertexAttribL1i64vNV");
  dword_7036FFE4 = (int)v1;
  v2 = wglGetProcAddress("glVertexAttribL1ui64NV");
  dword_7036FFE0 = (int)v2;
  dword_7036FFDC = (int)wglGetProcAddress("glVertexAttribL1ui64vNV");
  v13 = dword_7036FFDC;
  dword_7036FFD8 = (int)wglGetProcAddress("glVertexAttribL2i64NV");
  v12 = dword_7036FFD8;
  dword_7036FFD4 = (int)wglGetProcAddress("glVertexAttribL2i64vNV");
  if ( !dword_7036FFD4 || v11 == 0 || v0 == 0 || v1 == 0 || v2 == 0 || v12 == 0 || v13 == 0 || !v14 )
  {
    dword_7036FFD0 = (int)wglGetProcAddress("glVertexAttribL2ui64NV");
    dword_7036FFCC = (int)wglGetProcAddress("glVertexAttribL2ui64vNV");
LABEL_16:
    dword_7036FFC8 = (int)wglGetProcAddress("glVertexAttribL3i64NV");
    dword_7036FFC4 = (int)wglGetProcAddress("glVertexAttribL3i64vNV");
LABEL_17:
    dword_7036FFC0 = (int)wglGetProcAddress("glVertexAttribL3ui64NV");
    dword_7036FFBC = (int)wglGetProcAddress("glVertexAttribL3ui64vNV");
LABEL_18:
    dword_7036FFB8 = (int)wglGetProcAddress("glVertexAttribL4i64NV");
    dword_7036FFB4 = (int)wglGetProcAddress("glVertexAttribL4i64vNV");
LABEL_19:
    dword_7036FFB0 = (int)wglGetProcAddress("glVertexAttribL4ui64NV");
    dword_7036FFAC = (int)wglGetProcAddress("glVertexAttribL4ui64vNV");
    goto LABEL_20;
  }
  v3 = wglGetProcAddress("glVertexAttribL2ui64NV");
  dword_7036FFD0 = (int)v3;
  dword_7036FFCC = (int)wglGetProcAddress("glVertexAttribL2ui64vNV");
  if ( !dword_7036FFCC || !v3 )
    goto LABEL_16;
  v4 = wglGetProcAddress("glVertexAttribL3i64NV");
  dword_7036FFC8 = (int)v4;
  dword_7036FFC4 = (int)wglGetProcAddress("glVertexAttribL3i64vNV");
  if ( !dword_7036FFC4 || !v4 )
    goto LABEL_17;
  v5 = wglGetProcAddress("glVertexAttribL3ui64NV");
  dword_7036FFC0 = (int)v5;
  dword_7036FFBC = (int)wglGetProcAddress("glVertexAttribL3ui64vNV");
  if ( !dword_7036FFBC || !v5 )
    goto LABEL_18;
  v6 = wglGetProcAddress("glVertexAttribL4i64NV");
  dword_7036FFB8 = (int)v6;
  dword_7036FFB4 = (int)wglGetProcAddress("glVertexAttribL4i64vNV");
  if ( !dword_7036FFB4 || !v6 )
    goto LABEL_19;
  v7 = wglGetProcAddress("glVertexAttribL4ui64NV");
  v8 = v7;
  dword_7036FFB0 = (int)v7;
  v9 = wglGetProcAddress("glVertexAttribL4ui64vNV");
  dword_7036FFAC = (int)v9;
  if ( v8 && v9 )
  {
    dword_7036FFA8 = (int)wglGetProcAddress("glVertexAttribLFormatNV");
    return dword_7036FFA8 == 0;
  }
LABEL_20:
  dword_7036FFA8 = (int)wglGetProcAddress("glVertexAttribLFormatNV");
  return 1;
}
