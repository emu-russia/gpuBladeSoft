bool sub_6F7E14F0()
{
  PROC v0; // edi@1
  PROC v1; // esi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // eax@8
  PROC v6; // esi@8
  PROC v7; // eax@8
  const CHAR *v9; // [sp+0h] [bp-3Ch]@2
  int v10; // [sp+18h] [bp-24h]@1
  int v11; // [sp+1Ch] [bp-20h]@1

  v0 = wglGetProcAddress("glCombinerInputNV");
  dword_7037013C = (int)v0;
  v1 = wglGetProcAddress("glCombinerOutputNV");
  dword_70370138 = (int)v1;
  v2 = wglGetProcAddress("glCombinerParameterfNV");
  dword_70370134 = (int)v2;
  dword_70370130 = (int)wglGetProcAddress("glCombinerParameterfvNV");
  v11 = dword_70370130;
  dword_7037012C = (int)wglGetProcAddress("glCombinerParameteriNV");
  v10 = dword_7037012C;
  dword_70370128 = (int)wglGetProcAddress("glCombinerParameterivNV");
  if ( !dword_70370128 )
  {
    v9 = "glFinalCombinerInputNV";
LABEL_12:
    dword_70370124 = (int)wglGetProcAddress(v9);
    dword_70370120 = (int)wglGetProcAddress("glGetCombinerInputParameterfvNV");
LABEL_13:
    dword_7037011C = (int)wglGetProcAddress("glGetCombinerInputParameterivNV");
    dword_70370118 = (int)wglGetProcAddress("glGetCombinerOutputParameterfvNV");
LABEL_14:
    dword_70370114 = (int)wglGetProcAddress("glGetCombinerOutputParameterivNV");
    dword_70370110 = (int)wglGetProcAddress("glGetFinalCombinerInputParameterfvNV");
    goto LABEL_15;
  }
  v9 = "glFinalCombinerInputNV";
  if ( v1 == 0 || v2 == 0 || v10 == 0 || v11 == 0 || !v0 )
    goto LABEL_12;
  v3 = wglGetProcAddress("glFinalCombinerInputNV");
  dword_70370124 = (int)v3;
  dword_70370120 = (int)wglGetProcAddress("glGetCombinerInputParameterfvNV");
  if ( !dword_70370120 || !v3 )
    goto LABEL_13;
  v4 = wglGetProcAddress("glGetCombinerInputParameterivNV");
  dword_7037011C = (int)v4;
  dword_70370118 = (int)wglGetProcAddress("glGetCombinerOutputParameterfvNV");
  if ( !dword_70370118 || !v4 )
    goto LABEL_14;
  v5 = wglGetProcAddress("glGetCombinerOutputParameterivNV");
  v6 = v5;
  dword_70370114 = (int)v5;
  v7 = wglGetProcAddress("glGetFinalCombinerInputParameterfvNV");
  dword_70370110 = (int)v7;
  if ( v6 && v7 )
  {
    dword_7037010C = (int)wglGetProcAddress("glGetFinalCombinerInputParameterivNV");
    return dword_7037010C == 0;
  }
LABEL_15:
  dword_7037010C = (int)wglGetProcAddress("glGetFinalCombinerInputParameterivNV");
  return 1;
}
