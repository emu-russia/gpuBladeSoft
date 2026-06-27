bool sub_6F7DE510()
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

  v0 = wglGetProcAddress("glGetVertexAttribLdvEXT");
  dword_70370860 = (int)v0;
  v1 = wglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT");
  dword_7037085C = (int)v1;
  v2 = wglGetProcAddress("glVertexAttribL1dEXT");
  dword_70370858 = (int)v2;
  dword_70370854 = (int)wglGetProcAddress("glVertexAttribL1dvEXT");
  v10 = dword_70370854;
  dword_70370850 = (int)wglGetProcAddress("glVertexAttribL2dEXT");
  v9 = dword_70370850;
  dword_7037084C = (int)wglGetProcAddress("glVertexAttribL2dvEXT");
  if ( !dword_7037084C )
  {
    v8 = "glVertexAttribL3dEXT";
LABEL_10:
    dword_70370848 = (int)wglGetProcAddress(v8);
    dword_70370844 = (int)wglGetProcAddress("glVertexAttribL3dvEXT");
LABEL_11:
    dword_70370840 = (int)wglGetProcAddress("glVertexAttribL4dEXT");
    dword_7037083C = (int)wglGetProcAddress("glVertexAttribL4dvEXT");
    goto LABEL_12;
  }
  v8 = "glVertexAttribL3dEXT";
  if ( v1 == 0 || v2 == 0 || v9 == 0 || v10 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glVertexAttribL3dEXT");
  dword_70370848 = (int)v3;
  dword_70370844 = (int)wglGetProcAddress("glVertexAttribL3dvEXT");
  if ( !dword_70370844 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glVertexAttribL4dEXT");
  v5 = v4;
  dword_70370840 = (int)v4;
  v6 = wglGetProcAddress("glVertexAttribL4dvEXT");
  dword_7037083C = (int)v6;
  if ( v5 && v6 )
  {
    dword_70370838 = (int)wglGetProcAddress("glVertexAttribLPointerEXT");
    return dword_70370838 == 0;
  }
LABEL_12:
  dword_70370838 = (int)wglGetProcAddress("glVertexAttribLPointerEXT");
  return 1;
}
