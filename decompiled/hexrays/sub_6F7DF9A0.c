bool sub_6F7DF9A0()
{
  PROC v0; // ebp@1
  PROC v1; // esi@1
  PROC v2; // edi@1
  PROC v3; // esi@4
  PROC v4; // eax@6
  PROC v5; // esi@6
  PROC v6; // eax@6
  const CHAR *v8; // [sp+0h] [bp-2Ch]@2

  v0 = wglGetProcAddress("glEvalMapsNV");
  dword_703704FC = (int)v0;
  v1 = wglGetProcAddress("glGetMapAttribParameterfvNV");
  dword_703704F8 = (int)v1;
  v2 = wglGetProcAddress("glGetMapAttribParameterivNV");
  dword_703704F4 = (int)v2;
  dword_703704F0 = (int)wglGetProcAddress("glGetMapControlPointsNV");
  if ( !dword_703704F0 )
  {
    v8 = "glGetMapParameterfvNV";
LABEL_10:
    dword_703704EC = (int)wglGetProcAddress(v8);
    dword_703704E8 = (int)wglGetProcAddress("glGetMapParameterivNV");
LABEL_11:
    dword_703704E4 = (int)wglGetProcAddress("glMapControlPointsNV");
    dword_703704E0 = (int)wglGetProcAddress("glMapParameterfvNV");
    goto LABEL_12;
  }
  v8 = "glGetMapParameterfvNV";
  if ( v1 == 0 || v2 == 0 || !v0 )
    goto LABEL_10;
  v3 = wglGetProcAddress("glGetMapParameterfvNV");
  dword_703704EC = (int)v3;
  dword_703704E8 = (int)wglGetProcAddress("glGetMapParameterivNV");
  if ( !dword_703704E8 || !v3 )
    goto LABEL_11;
  v4 = wglGetProcAddress("glMapControlPointsNV");
  v5 = v4;
  dword_703704E4 = (int)v4;
  v6 = wglGetProcAddress("glMapParameterfvNV");
  dword_703704E0 = (int)v6;
  if ( v5 && v6 )
  {
    dword_703704DC = (int)wglGetProcAddress("glMapParameterivNV");
    return dword_703704DC == 0;
  }
LABEL_12:
  dword_703704DC = (int)wglGetProcAddress("glMapParameterivNV");
  return 1;
}
