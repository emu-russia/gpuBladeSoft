bool sub_6F7D7C30()
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
  PROC v13; // esi@24
  PROC v14; // eax@26
  PROC v15; // esi@26
  PROC v16; // eax@26
  int (__stdcall *v18)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-44h]@1
  int (*v19)(void); // [sp+1Ch] [bp-40h]@1
  int (__stdcall *v20)(_DWORD); // [sp+20h] [bp-3Ch]@1
  int v21; // [sp+24h] [bp-38h]@1
  int v22; // [sp+28h] [bp-34h]@1
  int v23; // [sp+2Ch] [bp-30h]@1
  int v24; // [sp+30h] [bp-2Ch]@1
  int v25; // [sp+34h] [bp-28h]@1
  int (__stdcall *v26)(_DWORD); // [sp+38h] [bp-24h]@1
  int (__stdcall *v27)(_DWORD, _DWORD, _DWORD); // [sp+3Ch] [bp-20h]@1

  dword_703716E8 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))wglGetProcAddress("glAttachObjectARB");
  v27 = dword_703716E8;
  dword_703716E4 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))wglGetProcAddress("glCompileShaderARB");
  v18 = dword_703716E4;
  dword_703716E0 = (int (*)(void))wglGetProcAddress("glCreateProgramObjectARB");
  v19 = dword_703716E0;
  dword_703716DC = (int (__stdcall *)(_DWORD))wglGetProcAddress("glCreateShaderObjectARB");
  v20 = dword_703716DC;
  dword_703716D8 = (int)wglGetProcAddress("glDeleteObjectARB");
  v21 = dword_703716D8;
  dword_703716D4 = (int)wglGetProcAddress("glDetachObjectARB");
  v22 = dword_703716D4;
  dword_703716D0 = (int)wglGetProcAddress("glGetActiveUniformARB");
  v23 = dword_703716D0;
  dword_703716CC = (int)wglGetProcAddress("glGetAttachedObjectsARB");
  v24 = dword_703716CC;
  v0 = wglGetProcAddress("glGetHandleARB");
  dword_703716C8 = (int)v0;
  v1 = wglGetProcAddress("glGetInfoLogARB");
  dword_703716C4 = (int (__stdcall *)(_DWORD))v1;
  v2 = wglGetProcAddress("glGetObjectParameterfvARB");
  dword_703716C0 = (int)v2;
  dword_703716BC = (int (__stdcall *)(_DWORD))wglGetProcAddress("glGetObjectParameterivARB");
  v26 = dword_703716BC;
  dword_703716B8 = (int)wglGetProcAddress("glGetShaderSourceARB");
  v25 = dword_703716B8;
  dword_703716B4 = (int (__stdcall *)(_DWORD, _DWORD))wglGetProcAddress("glGetUniformLocationARB");
  if ( !dword_703716B4
    || v18 == 0
    || v19 == 0
    || v20 == 0
    || v21 == 0
    || v23 == 0
    || v24 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v26 == 0
    || v25 == 0
    || v22 == 0
    || !v27 )
  {
    dword_703716B0 = (int)wglGetProcAddress("glGetUniformfvARB");
    dword_703716AC = (int)wglGetProcAddress("glGetUniformivARB");
LABEL_30:
    dword_703716A8 = (int (__stdcall *)(_DWORD, _DWORD))wglGetProcAddress("glLinkProgramARB");
    dword_703716A4 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))wglGetProcAddress("glShaderSourceARB");
LABEL_31:
    dword_703716A0 = (int)wglGetProcAddress("glUniform1fARB");
    dword_7037169C = (int)wglGetProcAddress("glUniform1fvARB");
LABEL_32:
    dword_70371698 = (int)wglGetProcAddress("glUniform1iARB");
    dword_70371694 = (int)wglGetProcAddress("glUniform1ivARB");
LABEL_33:
    dword_70371690 = (int)wglGetProcAddress("glUniform2fARB");
    dword_7037168C = (int)wglGetProcAddress("glUniform2fvARB");
LABEL_34:
    dword_70371688 = (int)wglGetProcAddress("glUniform2iARB");
    dword_70371684 = (int)wglGetProcAddress("glUniform2ivARB");
LABEL_35:
    dword_70371680 = (int)wglGetProcAddress("glUniform3fARB");
    dword_7037167C = (int)wglGetProcAddress("glUniform3fvARB");
LABEL_36:
    dword_70371678 = (int)wglGetProcAddress("glUniform3iARB");
    dword_70371674 = (int)wglGetProcAddress("glUniform3ivARB");
LABEL_37:
    dword_70371670 = (int)wglGetProcAddress("glUniform4fARB");
    dword_7037166C = (int)wglGetProcAddress("glUniform4fvARB");
LABEL_38:
    dword_70371668 = (int)wglGetProcAddress("glUniform4iARB");
    dword_70371664 = (int)wglGetProcAddress("glUniform4ivARB");
LABEL_39:
    dword_70371660 = (int)wglGetProcAddress("glUniformMatrix2fvARB");
    dword_7037165C = (int)wglGetProcAddress("glUniformMatrix3fvARB");
LABEL_40:
    dword_70371658 = (int)wglGetProcAddress("glUniformMatrix4fvARB");
    dword_70371654 = (int (__stdcall *)(_DWORD))wglGetProcAddress("glUseProgramObjectARB");
    goto LABEL_41;
  }
  v3 = wglGetProcAddress("glGetUniformfvARB");
  dword_703716B0 = (int)v3;
  dword_703716AC = (int)wglGetProcAddress("glGetUniformivARB");
  if ( !dword_703716AC || !v3 )
    goto LABEL_30;
  v4 = wglGetProcAddress("glLinkProgramARB");
  dword_703716A8 = (int (__stdcall *)(_DWORD, _DWORD))v4;
  dword_703716A4 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))wglGetProcAddress("glShaderSourceARB");
  if ( !dword_703716A4 || !v4 )
    goto LABEL_31;
  v5 = wglGetProcAddress("glUniform1fARB");
  dword_703716A0 = (int)v5;
  dword_7037169C = (int)wglGetProcAddress("glUniform1fvARB");
  if ( !dword_7037169C || !v5 )
    goto LABEL_32;
  v6 = wglGetProcAddress("glUniform1iARB");
  dword_70371698 = (int)v6;
  dword_70371694 = (int)wglGetProcAddress("glUniform1ivARB");
  if ( !dword_70371694 || !v6 )
    goto LABEL_33;
  v7 = wglGetProcAddress("glUniform2fARB");
  dword_70371690 = (int)v7;
  dword_7037168C = (int)wglGetProcAddress("glUniform2fvARB");
  if ( !dword_7037168C || !v7 )
    goto LABEL_34;
  v8 = wglGetProcAddress("glUniform2iARB");
  dword_70371688 = (int)v8;
  dword_70371684 = (int)wglGetProcAddress("glUniform2ivARB");
  if ( !dword_70371684 || !v8 )
    goto LABEL_35;
  v9 = wglGetProcAddress("glUniform3fARB");
  dword_70371680 = (int)v9;
  dword_7037167C = (int)wglGetProcAddress("glUniform3fvARB");
  if ( !dword_7037167C || !v9 )
    goto LABEL_36;
  v10 = wglGetProcAddress("glUniform3iARB");
  dword_70371678 = (int)v10;
  dword_70371674 = (int)wglGetProcAddress("glUniform3ivARB");
  if ( !dword_70371674 || !v10 )
    goto LABEL_37;
  v11 = wglGetProcAddress("glUniform4fARB");
  dword_70371670 = (int)v11;
  dword_7037166C = (int)wglGetProcAddress("glUniform4fvARB");
  if ( !dword_7037166C || !v11 )
    goto LABEL_38;
  v12 = wglGetProcAddress("glUniform4iARB");
  dword_70371668 = (int)v12;
  dword_70371664 = (int)wglGetProcAddress("glUniform4ivARB");
  if ( !dword_70371664 || !v12 )
    goto LABEL_39;
  v13 = wglGetProcAddress("glUniformMatrix2fvARB");
  dword_70371660 = (int)v13;
  dword_7037165C = (int)wglGetProcAddress("glUniformMatrix3fvARB");
  if ( !dword_7037165C || !v13 )
    goto LABEL_40;
  v14 = wglGetProcAddress("glUniformMatrix4fvARB");
  v15 = v14;
  dword_70371658 = (int)v14;
  v16 = wglGetProcAddress("glUseProgramObjectARB");
  dword_70371654 = (int (__stdcall *)(_DWORD))v16;
  if ( v15 && v16 )
  {
    dword_70371650 = (int)wglGetProcAddress("glValidateProgramARB");
    return dword_70371650 == 0;
  }
LABEL_41:
  dword_70371650 = (int)wglGetProcAddress("glValidateProgramARB");
  return 1;
}
