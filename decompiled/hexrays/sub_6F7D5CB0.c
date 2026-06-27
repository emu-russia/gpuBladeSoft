bool sub_6F7D5CB0()
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
  PROC v12; // esi@22
  PROC v13; // eax@24
  PROC v14; // esi@24
  PROC v15; // eax@24
  int v17; // [sp+1Ch] [bp-40h]@1
  int v18; // [sp+20h] [bp-3Ch]@1
  int v19; // [sp+24h] [bp-38h]@1
  int v20; // [sp+28h] [bp-34h]@1
  int v21; // [sp+2Ch] [bp-30h]@1
  int v22; // [sp+30h] [bp-2Ch]@1
  int v23; // [sp+34h] [bp-28h]@1
  int v24; // [sp+38h] [bp-24h]@1
  int v25; // [sp+3Ch] [bp-20h]@1

  dword_70371AD0 = (int)wglGetProcAddress("glGetUniformi64vARB");
  v25 = dword_70371AD0;
  dword_70371ACC = (int)wglGetProcAddress("glGetUniformui64vARB");
  v17 = dword_70371ACC;
  dword_70371AC8 = (int)wglGetProcAddress("glGetnUniformi64vARB");
  v18 = dword_70371AC8;
  dword_70371AC4 = (int)wglGetProcAddress("glGetnUniformui64vARB");
  v19 = dword_70371AC4;
  dword_70371AC0 = (int)wglGetProcAddress("glProgramUniform1i64ARB");
  v20 = dword_70371AC0;
  dword_70371ABC = (int)wglGetProcAddress("glProgramUniform1i64vARB");
  v21 = dword_70371ABC;
  dword_70371AB8 = (int)wglGetProcAddress("glProgramUniform1ui64ARB");
  v22 = dword_70371AB8;
  v0 = wglGetProcAddress("glProgramUniform1ui64vARB");
  dword_70371AB4 = (int)v0;
  v1 = wglGetProcAddress("glProgramUniform2i64ARB");
  dword_70371AB0 = (int)v1;
  v2 = wglGetProcAddress("glProgramUniform2i64vARB");
  dword_70371AAC = (int)v2;
  dword_70371AA8 = (int)wglGetProcAddress("glProgramUniform2ui64ARB");
  v24 = dword_70371AA8;
  dword_70371AA4 = (int)wglGetProcAddress("glProgramUniform2ui64vARB");
  v23 = dword_70371AA4;
  dword_70371AA0 = (int)wglGetProcAddress("glProgramUniform3i64ARB");
  if ( !dword_70371AA0
    || v17 == 0
    || v18 == 0
    || v19 == 0
    || v20 == 0
    || v22 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v23 == 0
    || v24 == 0
    || v21 == 0
    || !v25 )
  {
    dword_70371A9C = (int)wglGetProcAddress("glProgramUniform3i64vARB");
    dword_70371A98 = (int)wglGetProcAddress("glProgramUniform3ui64ARB");
LABEL_28:
    dword_70371A94 = (int)wglGetProcAddress("glProgramUniform3ui64vARB");
    dword_70371A90 = (int)wglGetProcAddress("glProgramUniform4i64ARB");
LABEL_29:
    dword_70371A8C = (int)wglGetProcAddress("glProgramUniform4i64vARB");
    dword_70371A88 = (int)wglGetProcAddress("glProgramUniform4ui64ARB");
LABEL_30:
    dword_70371A84 = (int)wglGetProcAddress("glProgramUniform4ui64vARB");
    dword_70371A80 = (int)wglGetProcAddress("glUniform1i64ARB");
LABEL_31:
    dword_70371A7C = (int)wglGetProcAddress("glUniform1i64vARB");
    dword_70371A78 = (int)wglGetProcAddress("glUniform1ui64ARB");
LABEL_32:
    dword_70371A74 = (int)wglGetProcAddress("glUniform1ui64vARB");
    dword_70371A70 = (int)wglGetProcAddress("glUniform2i64ARB");
LABEL_33:
    dword_70371A6C = (int)wglGetProcAddress("glUniform2i64vARB");
    dword_70371A68 = (int)wglGetProcAddress("glUniform2ui64ARB");
LABEL_34:
    dword_70371A64 = (int)wglGetProcAddress("glUniform2ui64vARB");
    dword_70371A60 = (int)wglGetProcAddress("glUniform3i64ARB");
LABEL_35:
    dword_70371A5C = (int)wglGetProcAddress("glUniform3i64vARB");
    dword_70371A58 = (int)wglGetProcAddress("glUniform3ui64ARB");
LABEL_36:
    dword_70371A54 = (int)wglGetProcAddress("glUniform3ui64vARB");
    dword_70371A50 = (int)wglGetProcAddress("glUniform4i64ARB");
LABEL_37:
    dword_70371A4C = (int)wglGetProcAddress("glUniform4i64vARB");
    dword_70371A48 = (int)wglGetProcAddress("glUniform4ui64ARB");
    goto LABEL_38;
  }
  v3 = wglGetProcAddress("glProgramUniform3i64vARB");
  dword_70371A9C = (int)v3;
  dword_70371A98 = (int)wglGetProcAddress("glProgramUniform3ui64ARB");
  if ( !dword_70371A98 || !v3 )
    goto LABEL_28;
  v4 = wglGetProcAddress("glProgramUniform3ui64vARB");
  dword_70371A94 = (int)v4;
  dword_70371A90 = (int)wglGetProcAddress("glProgramUniform4i64ARB");
  if ( !dword_70371A90 || !v4 )
    goto LABEL_29;
  v5 = wglGetProcAddress("glProgramUniform4i64vARB");
  dword_70371A8C = (int)v5;
  dword_70371A88 = (int)wglGetProcAddress("glProgramUniform4ui64ARB");
  if ( !dword_70371A88 || !v5 )
    goto LABEL_30;
  v6 = wglGetProcAddress("glProgramUniform4ui64vARB");
  dword_70371A84 = (int)v6;
  dword_70371A80 = (int)wglGetProcAddress("glUniform1i64ARB");
  if ( !dword_70371A80 || !v6 )
    goto LABEL_31;
  v7 = wglGetProcAddress("glUniform1i64vARB");
  dword_70371A7C = (int)v7;
  dword_70371A78 = (int)wglGetProcAddress("glUniform1ui64ARB");
  if ( !dword_70371A78 || !v7 )
    goto LABEL_32;
  v8 = wglGetProcAddress("glUniform1ui64vARB");
  dword_70371A74 = (int)v8;
  dword_70371A70 = (int)wglGetProcAddress("glUniform2i64ARB");
  if ( !dword_70371A70 || !v8 )
    goto LABEL_33;
  v9 = wglGetProcAddress("glUniform2i64vARB");
  dword_70371A6C = (int)v9;
  dword_70371A68 = (int)wglGetProcAddress("glUniform2ui64ARB");
  if ( !dword_70371A68 || !v9 )
    goto LABEL_34;
  v10 = wglGetProcAddress("glUniform2ui64vARB");
  dword_70371A64 = (int)v10;
  dword_70371A60 = (int)wglGetProcAddress("glUniform3i64ARB");
  if ( !dword_70371A60 || !v10 )
    goto LABEL_35;
  v11 = wglGetProcAddress("glUniform3i64vARB");
  dword_70371A5C = (int)v11;
  dword_70371A58 = (int)wglGetProcAddress("glUniform3ui64ARB");
  if ( !dword_70371A58 || !v11 )
    goto LABEL_36;
  v12 = wglGetProcAddress("glUniform3ui64vARB");
  dword_70371A54 = (int)v12;
  dword_70371A50 = (int)wglGetProcAddress("glUniform4i64ARB");
  if ( !dword_70371A50 || !v12 )
    goto LABEL_37;
  v13 = wglGetProcAddress("glUniform4i64vARB");
  v14 = v13;
  dword_70371A4C = (int)v13;
  v15 = wglGetProcAddress("glUniform4ui64ARB");
  dword_70371A48 = (int)v15;
  if ( v14 && v15 )
  {
    dword_70371A44 = (int)wglGetProcAddress("glUniform4ui64vARB");
    return dword_70371A44 == 0;
  }
LABEL_38:
  dword_70371A44 = (int)wglGetProcAddress("glUniform4ui64vARB");
  return 1;
}
