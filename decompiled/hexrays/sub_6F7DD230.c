bool sub_6F7DD230()
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
  int v11; // [sp+14h] [bp-28h]@1
  int v12; // [sp+18h] [bp-24h]@1
  int v13; // [sp+1Ch] [bp-20h]@1

  dword_70370C20 = (int)wglGetProcAddress("glFragmentColorMaterialEXT");
  v13 = dword_70370C20;
  v0 = wglGetProcAddress("glFragmentLightModelfEXT");
  dword_70370C1C = (int)v0;
  v1 = wglGetProcAddress("glFragmentLightModelfvEXT");
  dword_70370C18 = (int)v1;
  v2 = wglGetProcAddress("glFragmentLightModeliEXT");
  dword_70370C14 = (int)v2;
  dword_70370C10 = (int)wglGetProcAddress("glFragmentLightModelivEXT");
  v12 = dword_70370C10;
  dword_70370C0C = (int)wglGetProcAddress("glFragmentLightfEXT");
  v11 = dword_70370C0C;
  dword_70370C08 = (int)wglGetProcAddress("glFragmentLightfvEXT");
  if ( !dword_70370C08 || v0 == 0 || v1 == 0 || v2 == 0 || v11 == 0 || v12 == 0 || !v13 )
  {
    dword_70370C04 = (int)wglGetProcAddress("glFragmentLightiEXT");
    dword_70370C00 = (int)wglGetProcAddress("glFragmentLightivEXT");
LABEL_16:
    dword_70370BFC = (int)wglGetProcAddress("glFragmentMaterialfEXT");
    dword_70370BF8 = (int)wglGetProcAddress("glFragmentMaterialfvEXT");
LABEL_17:
    dword_70370BF4 = (int)wglGetProcAddress("glFragmentMaterialiEXT");
    dword_70370BF0 = (int)wglGetProcAddress("glFragmentMaterialivEXT");
LABEL_18:
    dword_70370BEC = (int)wglGetProcAddress("glGetFragmentLightfvEXT");
    dword_70370BE8 = (int)wglGetProcAddress("glGetFragmentLightivEXT");
LABEL_19:
    dword_70370BE4 = (int)wglGetProcAddress("glGetFragmentMaterialfvEXT");
    dword_70370BE0 = (int)wglGetProcAddress("glGetFragmentMaterialivEXT");
    goto LABEL_20;
  }
  v3 = wglGetProcAddress("glFragmentLightiEXT");
  dword_70370C04 = (int)v3;
  dword_70370C00 = (int)wglGetProcAddress("glFragmentLightivEXT");
  if ( !dword_70370C00 || !v3 )
    goto LABEL_16;
  v4 = wglGetProcAddress("glFragmentMaterialfEXT");
  dword_70370BFC = (int)v4;
  dword_70370BF8 = (int)wglGetProcAddress("glFragmentMaterialfvEXT");
  if ( !dword_70370BF8 || !v4 )
    goto LABEL_17;
  v5 = wglGetProcAddress("glFragmentMaterialiEXT");
  dword_70370BF4 = (int)v5;
  dword_70370BF0 = (int)wglGetProcAddress("glFragmentMaterialivEXT");
  if ( !dword_70370BF0 || !v5 )
    goto LABEL_18;
  v6 = wglGetProcAddress("glGetFragmentLightfvEXT");
  dword_70370BEC = (int)v6;
  dword_70370BE8 = (int)wglGetProcAddress("glGetFragmentLightivEXT");
  if ( !dword_70370BE8 || !v6 )
    goto LABEL_19;
  v7 = wglGetProcAddress("glGetFragmentMaterialfvEXT");
  v8 = v7;
  dword_70370BE4 = (int)v7;
  v9 = wglGetProcAddress("glGetFragmentMaterialivEXT");
  dword_70370BE0 = (int)v9;
  if ( v8 && v9 )
  {
    dword_70370BDC = (int)wglGetProcAddress("glLightEnviEXT");
    return dword_70370BDC == 0;
  }
LABEL_20:
  dword_70370BDC = (int)wglGetProcAddress("glLightEnviEXT");
  return 1;
}
