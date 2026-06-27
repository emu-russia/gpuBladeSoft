bool sub_6F7D8700()
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

  v0 = wglGetProcAddress("glGetVertexAttribLdv");
  dword_70371500 = (int)v0;
  v1 = wglGetProcAddress("glVertexAttribL1d");
  dword_703714FC = (int)v1;
  dword_703714F8 = (int)wglGetProcAddress("glVertexAttribL1dv");
  v9 = dword_703714F8;
  v2 = wglGetProcAddress("glVertexAttribL2d");
  dword_703714F4 = (int)v2;
  dword_703714F0 = (int)wglGetProcAddress("glVertexAttribL2dv");
  if ( !dword_703714F0 )
  {
    v8 = "glVertexAttribL3d";
LABEL_10:
    dword_703714EC = (int)wglGetProcAddress(v8);
    dword_703714E8 = (int)wglGetProcAddress("glVertexAttribL3dv");
LABEL_11:
    dword_703714E4 = (int)wglGetProcAddress("glVertexAttribL4d");
    dword_703714E0 = (int)wglGetProcAddress("glVertexAttribL4dv");
    goto LABEL_12;
  }
  v8 = "glVertexAttribL3d";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glVertexAttribL3d");
  dword_703714EC = (int)v3;
  dword_703714E8 = (int)wglGetProcAddress("glVertexAttribL3dv");
  if ( !dword_703714E8 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glVertexAttribL4d");
  v5 = v4;
  dword_703714E4 = (int)v4;
  v6 = wglGetProcAddress("glVertexAttribL4dv");
  dword_703714E0 = (int)v6;
  if ( v5 && v6 )
  {
    dword_703714DC = (int)wglGetProcAddress("glVertexAttribLPointer");
    return dword_703714DC == 0;
  }
LABEL_12:
  dword_703714DC = (int)wglGetProcAddress("glVertexAttribLPointer");
  return 1;
}
