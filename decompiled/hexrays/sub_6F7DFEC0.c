bool sub_6F7DFEC0()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  PROC v3; // esi@4
  PROC v4; // esi@6
  PROC v5; // esi@8
  PROC v6; // esi@10
  PROC v7; // esi@12
  PROC v8; // esi@14
  PROC v9; // esi@16
  PROC v10; // esi@18
  PROC v11; // esi@20
  PROC v12; // eax@22
  PROC v13; // esi@22
  PROC v14; // eax@22
  int v16; // [sp+1Ch] [bp-40h]@1
  int v17; // [sp+20h] [bp-3Ch]@1
  int v18; // [sp+24h] [bp-38h]@1
  int v19; // [sp+28h] [bp-34h]@1
  int v20; // [sp+2Ch] [bp-30h]@1
  int v21; // [sp+30h] [bp-2Ch]@1
  int v22; // [sp+34h] [bp-28h]@1
  int v23; // [sp+38h] [bp-24h]@1
  int v24; // [sp+3Ch] [bp-20h]@1

  dword_70370424 = (int)wglGetProcAddress("glGetUniformi64vNV");
  v24 = dword_70370424;
  dword_70370420 = (int)wglGetProcAddress("glGetUniformui64vNV");
  v16 = dword_70370420;
  dword_7037041C = (int)wglGetProcAddress("glProgramUniform1i64NV");
  v17 = dword_7037041C;
  dword_70370418 = (int)wglGetProcAddress("glProgramUniform1i64vNV");
  v18 = dword_70370418;
  dword_70370414 = (int)wglGetProcAddress("glProgramUniform1ui64NV");
  v19 = dword_70370414;
  dword_70370410 = (int)wglGetProcAddress("glProgramUniform1ui64vNV");
  v20 = dword_70370410;
  dword_7037040C = (int)wglGetProcAddress("glProgramUniform2i64NV");
  v21 = dword_7037040C;
  v0 = wglGetProcAddress("glProgramUniform2i64vNV");
  dword_70370408 = (int)v0;
  v1 = wglGetProcAddress("glProgramUniform2ui64NV");
  dword_70370404 = (int)v1;
  v2 = wglGetProcAddress("glProgramUniform2ui64vNV");
  dword_70370400 = (int)v2;
  dword_703703FC = (int)wglGetProcAddress("glProgramUniform3i64NV");
  v23 = dword_703703FC;
  dword_703703F8 = (int)wglGetProcAddress("glProgramUniform3i64vNV");
  v22 = dword_703703F8;
  dword_703703F4 = (int)wglGetProcAddress("glProgramUniform3ui64NV");
  if ( !dword_703703F4
    || v16 == 0
    || v17 == 0
    || v18 == 0
    || v19 == 0
    || v21 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v23 == 0
    || v22 == 0
    || v20 == 0
    || !v24 )
  {
    dword_703703F0 = (int)wglGetProcAddress("glProgramUniform3ui64vNV");
    dword_703703EC = (int)wglGetProcAddress("glProgramUniform4i64NV");
LABEL_26:
    dword_703703E8 = (int)wglGetProcAddress("glProgramUniform4i64vNV");
    dword_703703E4 = (int)wglGetProcAddress("glProgramUniform4ui64NV");
LABEL_27:
    dword_703703E0 = (int)wglGetProcAddress("glProgramUniform4ui64vNV");
    dword_703703DC = (int)wglGetProcAddress("glUniform1i64NV");
LABEL_28:
    dword_703703D8 = (int)wglGetProcAddress("glUniform1i64vNV");
    dword_703703D4 = (int)wglGetProcAddress("glUniform1ui64NV");
LABEL_29:
    dword_703703D0 = (int)wglGetProcAddress("glUniform1ui64vNV");
    dword_703703CC = (int)wglGetProcAddress("glUniform2i64NV");
LABEL_30:
    dword_703703C8 = (int)wglGetProcAddress("glUniform2i64vNV");
    dword_703703C4 = (int)wglGetProcAddress("glUniform2ui64NV");
LABEL_31:
    dword_703703C0 = (int)wglGetProcAddress("glUniform2ui64vNV");
    dword_703703BC = (int)wglGetProcAddress("glUniform3i64NV");
LABEL_32:
    dword_703703B8 = (int)wglGetProcAddress("glUniform3i64vNV");
    dword_703703B4 = (int)wglGetProcAddress("glUniform3ui64NV");
LABEL_33:
    dword_703703B0 = (int)wglGetProcAddress("glUniform3ui64vNV");
    dword_703703AC = (int)wglGetProcAddress("glUniform4i64NV");
LABEL_34:
    dword_703703A8 = (int)wglGetProcAddress("glUniform4i64vNV");
    dword_703703A4 = (int)wglGetProcAddress("glUniform4ui64NV");
    goto LABEL_35;
  }
  v3 = wglGetProcAddress("glProgramUniform3ui64vNV");
  dword_703703F0 = (int)v3;
  dword_703703EC = (int)wglGetProcAddress("glProgramUniform4i64NV");
  if ( !dword_703703EC || !v3 )
    goto LABEL_26;
  v4 = wglGetProcAddress("glProgramUniform4i64vNV");
  dword_703703E8 = (int)v4;
  dword_703703E4 = (int)wglGetProcAddress("glProgramUniform4ui64NV");
  if ( !dword_703703E4 || !v4 )
    goto LABEL_27;
  v5 = wglGetProcAddress("glProgramUniform4ui64vNV");
  dword_703703E0 = (int)v5;
  dword_703703DC = (int)wglGetProcAddress("glUniform1i64NV");
  if ( !dword_703703DC || !v5 )
    goto LABEL_28;
  v6 = wglGetProcAddress("glUniform1i64vNV");
  dword_703703D8 = (int)v6;
  dword_703703D4 = (int)wglGetProcAddress("glUniform1ui64NV");
  if ( !dword_703703D4 || !v6 )
    goto LABEL_29;
  v7 = wglGetProcAddress("glUniform1ui64vNV");
  dword_703703D0 = (int)v7;
  dword_703703CC = (int)wglGetProcAddress("glUniform2i64NV");
  if ( !dword_703703CC || !v7 )
    goto LABEL_30;
  v8 = wglGetProcAddress("glUniform2i64vNV");
  dword_703703C8 = (int)v8;
  dword_703703C4 = (int)wglGetProcAddress("glUniform2ui64NV");
  if ( !dword_703703C4 || !v8 )
    goto LABEL_31;
  v9 = wglGetProcAddress("glUniform2ui64vNV");
  dword_703703C0 = (int)v9;
  dword_703703BC = (int)wglGetProcAddress("glUniform3i64NV");
  if ( !dword_703703BC || !v9 )
    goto LABEL_32;
  v10 = wglGetProcAddress("glUniform3i64vNV");
  dword_703703B8 = (int)v10;
  dword_703703B4 = (int)wglGetProcAddress("glUniform3ui64NV");
  if ( !dword_703703B4 || !v10 )
    goto LABEL_33;
  v11 = wglGetProcAddress("glUniform3ui64vNV");
  dword_703703B0 = (int)v11;
  dword_703703AC = (int)wglGetProcAddress("glUniform4i64NV");
  if ( !dword_703703AC || !v11 )
    goto LABEL_34;
  v12 = wglGetProcAddress("glUniform4i64vNV");
  v13 = v12;
  dword_703703A8 = (int)v12;
  v14 = wglGetProcAddress("glUniform4ui64NV");
  dword_703703A4 = (int)v14;
  if ( v13 && v14 )
  {
    dword_703703A0 = (int)wglGetProcAddress("glUniform4ui64vNV");
    return dword_703703A0 == 0;
  }
LABEL_35:
  dword_703703A0 = (int)wglGetProcAddress("glUniform4ui64vNV");
  return 1;
}
