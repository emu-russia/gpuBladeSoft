bool sub_6F7DE3F0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // eax@4
  PROC v4; // esi@4
  PROC v5; // eax@4
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glArrayElementEXT");
  dword_7037088C = (int)v0;
  v1 = wglGetProcAddress("glColorPointerEXT");
  dword_70370888 = (int)v1;
  dword_70370884 = (int)wglGetProcAddress("glDrawArraysEXT");
  v8 = dword_70370884;
  v2 = wglGetProcAddress("glEdgeFlagPointerEXT");
  dword_70370880 = (int)v2;
  dword_7037087C = (int)wglGetProcAddress("glIndexPointerEXT");
  if ( !dword_7037087C )
  {
    v7 = "glNormalPointerEXT";
LABEL_8:
    dword_70370878 = (int)wglGetProcAddress(v7);
    dword_70370874 = (int)wglGetProcAddress("glTexCoordPointerEXT");
    goto LABEL_9;
  }
  v7 = "glNormalPointerEXT";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_8;
  v3 = wglGetProcAddress("glNormalPointerEXT");
  v4 = v3;
  dword_70370878 = (int)v3;
  v5 = wglGetProcAddress("glTexCoordPointerEXT");
  dword_70370874 = (int)v5;
  if ( v4 && v5 )
  {
    dword_70370870 = (int)wglGetProcAddress("glVertexPointerEXT");
    return dword_70370870 == 0;
  }
LABEL_9:
  dword_70370870 = (int)wglGetProcAddress("glVertexPointerEXT");
  return 1;
}
