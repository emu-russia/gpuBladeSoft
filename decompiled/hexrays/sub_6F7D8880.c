bool sub_6F7D8880()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glBindVertexBuffer");
  dword_703714D8 = (int)v0;
  v1 = wglGetProcAddress("glVertexArrayBindVertexBufferEXT");
  dword_703714D4 = (int)v1;
  v2 = wglGetProcAddress("glVertexArrayVertexAttribBindingEXT");
  dword_703714D0 = (int)v2;
  dword_703714CC = (int)wglGetProcAddress("glVertexArrayVertexAttribFormatEXT");
  v8 = dword_703714CC;
  dword_703714C8 = (int)wglGetProcAddress("glVertexArrayVertexAttribIFormatEXT");
  if ( !dword_703714C8 )
  {
    v7 = "glVertexArrayVertexAttribLFormatEXT";
LABEL_12:
    dword_703714C4 = (int)wglGetProcAddress(v7);
    dword_703714C0 = (int)wglGetProcAddress("glVertexArrayVertexBindingDivisorEXT");
LABEL_13:
    dword_703714BC = (int)wglGetProcAddress("glVertexAttribBinding");
    dword_703714B8 = (int)wglGetProcAddress("glVertexAttribFormat");
LABEL_14:
    dword_703714B4 = (int)wglGetProcAddress("glVertexAttribIFormat");
    dword_703714B0 = (int)wglGetProcAddress("glVertexAttribLFormat");
    goto LABEL_15;
  }
  v7 = "glVertexArrayVertexAttribLFormatEXT";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glVertexArrayVertexAttribLFormatEXT");
  dword_703714C4 = (int)v3;
  dword_703714C0 = (int)wglGetProcAddress("glVertexArrayVertexBindingDivisorEXT");
  if ( !dword_703714C0 || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glVertexAttribBinding");
  dword_703714BC = (int)v4;
  dword_703714B8 = (int)wglGetProcAddress("glVertexAttribFormat");
  if ( !dword_703714B8 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glVertexAttribIFormat");
  dword_703714B4 = (int)v5;
  dword_703714B0 = (int)wglGetProcAddress("glVertexAttribLFormat");
  if ( dword_703714B0 && v5 )
  {
    dword_703714AC = (int)wglGetProcAddress("glVertexBindingDivisor");
    return dword_703714AC == 0;
  }
LABEL_15:
  dword_703714AC = (int)wglGetProcAddress("glVertexBindingDivisor");
  return 1;
}
