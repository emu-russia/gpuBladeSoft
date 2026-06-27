bool sub_6F7DA2F0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  const CHAR *v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glArrayObjectATI");
  dword_703711E0 = (int)v0;
  v1 = wglGetProcAddress("glFreeObjectBufferATI");
  dword_703711DC = (int)v1;
  v2 = wglGetProcAddress("glGetArrayObjectfvATI");
  dword_703711D8 = (int)v2;
  dword_703711D4 = (int)wglGetProcAddress("glGetArrayObjectivATI");
  v8 = dword_703711D4;
  dword_703711D0 = (int)wglGetProcAddress("glGetObjectBufferfvATI");
  if ( !dword_703711D0 )
  {
    v7 = "glGetObjectBufferivATI";
LABEL_12:
    dword_703711CC = (int)wglGetProcAddress(v7);
    dword_703711C8 = (int)wglGetProcAddress("glGetVariantArrayObjectfvATI");
LABEL_13:
    dword_703711C4 = (int)wglGetProcAddress("glGetVariantArrayObjectivATI");
    dword_703711C0 = (int)wglGetProcAddress("glIsObjectBufferATI");
LABEL_14:
    dword_703711BC = (int)wglGetProcAddress("glNewObjectBufferATI");
    dword_703711B8 = (int)wglGetProcAddress("glUpdateObjectBufferATI");
    goto LABEL_15;
  }
  v7 = "glGetObjectBufferivATI";
  if ( v1 == 0 || v2 == 0 || v8 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glGetObjectBufferivATI");
  dword_703711CC = (int)v3;
  dword_703711C8 = (int)wglGetProcAddress("glGetVariantArrayObjectfvATI");
  if ( !dword_703711C8 || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glGetVariantArrayObjectivATI");
  dword_703711C4 = (int)v4;
  dword_703711C0 = (int)wglGetProcAddress("glIsObjectBufferATI");
  if ( !dword_703711C0 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glNewObjectBufferATI");
  dword_703711BC = (int)v5;
  dword_703711B8 = (int)wglGetProcAddress("glUpdateObjectBufferATI");
  if ( dword_703711B8 && v5 )
  {
    dword_703711B4 = (int)wglGetProcAddress("glVariantArrayObjectATI");
    return dword_703711B4 == 0;
  }
LABEL_15:
  dword_703711B4 = (int)wglGetProcAddress("glVariantArrayObjectATI");
  return 1;
}
