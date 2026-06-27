bool sub_6F7D3320()
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
  PROC v14; // esi@26
  PROC v15; // esi@28
  PROC v16; // esi@30
  PROC v17; // esi@32
  PROC v18; // esi@34
  PROC v19; // esi@36
  PROC v20; // esi@38
  PROC v21; // esi@40
  PROC v22; // esi@42
  PROC v23; // esi@44
  PROC v24; // esi@46
  PROC v25; // esi@48
  PROC v26; // esi@50
  PROC v27; // esi@52
  PROC v28; // esi@54
  PROC v29; // esi@56
  PROC v30; // esi@58
  PROC v31; // esi@60
  PROC v32; // eax@62
  PROC v33; // esi@62
  PROC v34; // eax@62
  int v36; // [sp+10h] [bp-8Ch]@1
  int v37; // [sp+14h] [bp-88h]@1
  int v38; // [sp+18h] [bp-84h]@1
  int v39; // [sp+1Ch] [bp-80h]@1
  int v40; // [sp+20h] [bp-7Ch]@1
  int (__stdcall *v41)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+24h] [bp-78h]@1
  int (__stdcall *v42)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+28h] [bp-74h]@1
  int (__stdcall *v43)(_DWORD, _DWORD); // [sp+2Ch] [bp-70h]@1
  int v44; // [sp+30h] [bp-6Ch]@1
  int v45; // [sp+34h] [bp-68h]@1
  int v46; // [sp+38h] [bp-64h]@1
  int v47; // [sp+3Ch] [bp-60h]@1
  int v48; // [sp+40h] [bp-5Ch]@1
  int v49; // [sp+44h] [bp-58h]@1
  int v50; // [sp+48h] [bp-54h]@1
  int v51; // [sp+4Ch] [bp-50h]@1
  int v52; // [sp+50h] [bp-4Ch]@1
  int v53; // [sp+54h] [bp-48h]@1
  int v54; // [sp+58h] [bp-44h]@1
  int (__stdcall *v55)(_DWORD, _DWORD, _DWORD); // [sp+5Ch] [bp-40h]@1
  int v56; // [sp+60h] [bp-3Ch]@1
  int v57; // [sp+64h] [bp-38h]@1
  int v58; // [sp+68h] [bp-34h]@1
  int v59; // [sp+6Ch] [bp-30h]@1
  int v60; // [sp+70h] [bp-2Ch]@1
  int v61; // [sp+74h] [bp-28h]@1
  int v62; // [sp+78h] [bp-24h]@1
  int v63; // [sp+7Ch] [bp-20h]@1

  dword_70372254 = (int)wglGetProcAddress("glAttachShader");
  v63 = dword_70372254;
  dword_70372250 = (int)wglGetProcAddress("glBindAttribLocation");
  v36 = dword_70372250;
  dword_7037224C = (int)wglGetProcAddress("glBlendEquationSeparate");
  v37 = dword_7037224C;
  dword_70372248 = (int)wglGetProcAddress("glCompileShader");
  v38 = dword_70372248;
  dword_70372244 = (int)wglGetProcAddress("glCreateProgram");
  v39 = dword_70372244;
  dword_70372240 = (int)wglGetProcAddress("glCreateShader");
  v40 = dword_70372240;
  dword_7037223C = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))wglGetProcAddress("glDeleteProgram");
  v41 = dword_7037223C;
  dword_70372238 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))wglGetProcAddress("glDeleteShader");
  v42 = dword_70372238;
  dword_70372234 = (int (__stdcall *)(_DWORD, _DWORD))wglGetProcAddress("glDetachShader");
  v43 = dword_70372234;
  dword_70372230 = (int)wglGetProcAddress("glDisableVertexAttribArray");
  v44 = dword_70372230;
  dword_7037222C = (int)wglGetProcAddress("glDrawBuffers");
  v45 = dword_7037222C;
  dword_70372228 = (int)wglGetProcAddress("glEnableVertexAttribArray");
  v46 = dword_70372228;
  dword_70372224 = (int)wglGetProcAddress("glGetActiveAttrib");
  v47 = dword_70372224;
  dword_70372220 = (int)wglGetProcAddress("glGetActiveUniform");
  v48 = dword_70372220;
  dword_7037221C = (int)wglGetProcAddress("glGetAttachedShaders");
  v49 = dword_7037221C;
  dword_70372218 = (int)wglGetProcAddress("glGetAttribLocation");
  v50 = dword_70372218;
  dword_70372214 = (int)wglGetProcAddress("glGetProgramInfoLog");
  v51 = dword_70372214;
  dword_70372210 = (int)wglGetProcAddress("glGetProgramiv");
  v52 = dword_70372210;
  dword_7037220C = (int)wglGetProcAddress("glGetShaderInfoLog");
  v53 = dword_7037220C;
  dword_70372208 = (int)wglGetProcAddress("glGetShaderSource");
  v54 = dword_70372208;
  dword_70372204 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))wglGetProcAddress("glGetShaderiv");
  v55 = dword_70372204;
  dword_70372200 = (int)wglGetProcAddress("glGetUniformLocation");
  v56 = dword_70372200;
  dword_703721FC = (int)wglGetProcAddress("glGetUniformfv");
  v57 = dword_703721FC;
  dword_703721F8 = (int)wglGetProcAddress("glGetUniformiv");
  v58 = dword_703721F8;
  dword_703721F4 = (int)wglGetProcAddress("glGetVertexAttribPointerv");
  v59 = dword_703721F4;
  dword_703721F0 = (int)wglGetProcAddress("glGetVertexAttribdv");
  v60 = dword_703721F0;
  v0 = wglGetProcAddress("glGetVertexAttribfv");
  dword_703721EC = (int)v0;
  v1 = wglGetProcAddress("glGetVertexAttribiv");
  dword_703721E8 = (int)v1;
  v2 = wglGetProcAddress("glIsProgram");
  dword_703721E4 = (int)v2;
  dword_703721E0 = (int)wglGetProcAddress("glIsShader");
  v62 = dword_703721E0;
  dword_703721DC = (int)wglGetProcAddress("glLinkProgram");
  v61 = dword_703721DC;
  dword_703721D8 = (int)wglGetProcAddress("glShaderSource");
  if ( !dword_703721D8
    || v36 == 0
    || v37 == 0
    || v38 == 0
    || v39 == 0
    || v41 == 0
    || v42 == 0
    || v43 == 0
    || v44 == 0
    || v45 == 0
    || v46 == 0
    || v47 == 0
    || v48 == 0
    || v49 == 0
    || v50 == 0
    || v51 == 0
    || v52 == 0
    || v53 == 0
    || v54 == 0
    || v55 == 0
    || v56 == 0
    || v57 == 0
    || v58 == 0
    || v59 == 0
    || v60 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v62 == 0
    || v61 == 0
    || v40 == 0
    || !v63 )
  {
    dword_703721D4 = (int)wglGetProcAddress("glStencilFuncSeparate");
    dword_703721D0 = (int)wglGetProcAddress("glStencilMaskSeparate");
LABEL_66:
    dword_703721CC = (int)wglGetProcAddress("glStencilOpSeparate");
    dword_703721C8 = (int)wglGetProcAddress("glUniform1f");
LABEL_67:
    dword_703721C4 = (int)wglGetProcAddress("glUniform1fv");
    dword_703721C0 = (int (__stdcall *)(_DWORD, _DWORD))wglGetProcAddress("glUniform1i");
LABEL_68:
    dword_703721BC = (int)wglGetProcAddress("glUniform1iv");
    dword_703721B8 = (int)wglGetProcAddress("glUniform2f");
LABEL_69:
    dword_703721B4 = (int)wglGetProcAddress("glUniform2fv");
    dword_703721B0 = (int)wglGetProcAddress("glUniform2i");
LABEL_70:
    dword_703721AC = (int)wglGetProcAddress("glUniform2iv");
    dword_703721A8 = (int)wglGetProcAddress("glUniform3f");
LABEL_71:
    dword_703721A4 = (int)wglGetProcAddress("glUniform3fv");
    dword_703721A0 = (int)wglGetProcAddress("glUniform3i");
LABEL_72:
    dword_7037219C = (int)wglGetProcAddress("glUniform3iv");
    dword_70372198 = (int)wglGetProcAddress("glUniform4f");
LABEL_73:
    dword_70372194 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))wglGetProcAddress("glUniform4fv");
    dword_70372190 = (int)wglGetProcAddress("glUniform4i");
LABEL_74:
    dword_7037218C = (int)wglGetProcAddress("glUniform4iv");
    dword_70372188 = (int)wglGetProcAddress("glUniformMatrix2fv");
LABEL_75:
    dword_70372184 = (int)wglGetProcAddress("glUniformMatrix3fv");
    dword_70372180 = (int)wglGetProcAddress("glUniformMatrix4fv");
LABEL_76:
    dword_7037217C = (int)wglGetProcAddress("glUseProgram");
    dword_70372178 = (int)wglGetProcAddress("glValidateProgram");
LABEL_77:
    dword_70372174 = (int)wglGetProcAddress("glVertexAttrib1d");
    dword_70372170 = (int)wglGetProcAddress("glVertexAttrib1dv");
LABEL_78:
    dword_7037216C = (int)wglGetProcAddress("glVertexAttrib1f");
    dword_70372168 = (int)wglGetProcAddress("glVertexAttrib1fv");
LABEL_79:
    dword_70372164 = (int)wglGetProcAddress("glVertexAttrib1s");
    dword_70372160 = (int)wglGetProcAddress("glVertexAttrib1sv");
LABEL_80:
    dword_7037215C = (int)wglGetProcAddress("glVertexAttrib2d");
    dword_70372158 = (int)wglGetProcAddress("glVertexAttrib2dv");
LABEL_81:
    dword_70372154 = (int)wglGetProcAddress("glVertexAttrib2f");
    dword_70372150 = (int)wglGetProcAddress("glVertexAttrib2fv");
LABEL_82:
    dword_7037214C = (int)wglGetProcAddress("glVertexAttrib2s");
    dword_70372148 = (int)wglGetProcAddress("glVertexAttrib2sv");
LABEL_83:
    dword_70372144 = (int)wglGetProcAddress("glVertexAttrib3d");
    dword_70372140 = (int)wglGetProcAddress("glVertexAttrib3dv");
LABEL_84:
    dword_7037213C = (int)wglGetProcAddress("glVertexAttrib3f");
    dword_70372138 = (int)wglGetProcAddress("glVertexAttrib3fv");
LABEL_85:
    dword_70372134 = (int)wglGetProcAddress("glVertexAttrib3s");
    dword_70372130 = (int)wglGetProcAddress("glVertexAttrib3sv");
LABEL_86:
    dword_7037212C = (int)wglGetProcAddress("glVertexAttrib4Nbv");
    dword_70372128 = (int)wglGetProcAddress("glVertexAttrib4Niv");
LABEL_87:
    dword_70372124 = (int)wglGetProcAddress("glVertexAttrib4Nsv");
    dword_70372120 = (int)wglGetProcAddress("glVertexAttrib4Nub");
LABEL_88:
    dword_7037211C = (int)wglGetProcAddress("glVertexAttrib4Nubv");
    dword_70372118 = (int)wglGetProcAddress("glVertexAttrib4Nuiv");
LABEL_89:
    dword_70372114 = (int)wglGetProcAddress("glVertexAttrib4Nusv");
    dword_70372110 = (int)wglGetProcAddress("glVertexAttrib4bv");
LABEL_90:
    dword_7037210C = (int)wglGetProcAddress("glVertexAttrib4d");
    dword_70372108 = (int)wglGetProcAddress("glVertexAttrib4dv");
LABEL_91:
    dword_70372104 = (int)wglGetProcAddress("glVertexAttrib4f");
    dword_70372100 = (int)wglGetProcAddress("glVertexAttrib4fv");
LABEL_92:
    dword_703720FC = (int)wglGetProcAddress("glVertexAttrib4iv");
    dword_703720F8 = (int)wglGetProcAddress("glVertexAttrib4s");
LABEL_93:
    dword_703720F4 = (int)wglGetProcAddress("glVertexAttrib4sv");
    dword_703720F0 = (int)wglGetProcAddress("glVertexAttrib4ubv");
LABEL_94:
    dword_703720EC = (int)wglGetProcAddress("glVertexAttrib4uiv");
    dword_703720E8 = (int)wglGetProcAddress("glVertexAttrib4usv");
    goto LABEL_95;
  }
  v3 = wglGetProcAddress("glStencilFuncSeparate");
  dword_703721D4 = (int)v3;
  dword_703721D0 = (int)wglGetProcAddress("glStencilMaskSeparate");
  if ( !dword_703721D0 || !v3 )
    goto LABEL_66;
  v4 = wglGetProcAddress("glStencilOpSeparate");
  dword_703721CC = (int)v4;
  dword_703721C8 = (int)wglGetProcAddress("glUniform1f");
  if ( !dword_703721C8 || !v4 )
    goto LABEL_67;
  v5 = wglGetProcAddress("glUniform1fv");
  dword_703721C4 = (int)v5;
  dword_703721C0 = (int (__stdcall *)(_DWORD, _DWORD))wglGetProcAddress("glUniform1i");
  if ( !dword_703721C0 || !v5 )
    goto LABEL_68;
  v6 = wglGetProcAddress("glUniform1iv");
  dword_703721BC = (int)v6;
  dword_703721B8 = (int)wglGetProcAddress("glUniform2f");
  if ( !dword_703721B8 || !v6 )
    goto LABEL_69;
  v7 = wglGetProcAddress("glUniform2fv");
  dword_703721B4 = (int)v7;
  dword_703721B0 = (int)wglGetProcAddress("glUniform2i");
  if ( !dword_703721B0 || !v7 )
    goto LABEL_70;
  v8 = wglGetProcAddress("glUniform2iv");
  dword_703721AC = (int)v8;
  dword_703721A8 = (int)wglGetProcAddress("glUniform3f");
  if ( !dword_703721A8 || !v8 )
    goto LABEL_71;
  v9 = wglGetProcAddress("glUniform3fv");
  dword_703721A4 = (int)v9;
  dword_703721A0 = (int)wglGetProcAddress("glUniform3i");
  if ( !dword_703721A0 || !v9 )
    goto LABEL_72;
  v10 = wglGetProcAddress("glUniform3iv");
  dword_7037219C = (int)v10;
  dword_70372198 = (int)wglGetProcAddress("glUniform4f");
  if ( !dword_70372198 || !v10 )
    goto LABEL_73;
  v11 = wglGetProcAddress("glUniform4fv");
  dword_70372194 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))v11;
  dword_70372190 = (int)wglGetProcAddress("glUniform4i");
  if ( !dword_70372190 || !v11 )
    goto LABEL_74;
  v12 = wglGetProcAddress("glUniform4iv");
  dword_7037218C = (int)v12;
  dword_70372188 = (int)wglGetProcAddress("glUniformMatrix2fv");
  if ( !dword_70372188 || !v12 )
    goto LABEL_75;
  v13 = wglGetProcAddress("glUniformMatrix3fv");
  dword_70372184 = (int)v13;
  dword_70372180 = (int)wglGetProcAddress("glUniformMatrix4fv");
  if ( !dword_70372180 || !v13 )
    goto LABEL_76;
  v14 = wglGetProcAddress("glUseProgram");
  dword_7037217C = (int)v14;
  dword_70372178 = (int)wglGetProcAddress("glValidateProgram");
  if ( !dword_70372178 || !v14 )
    goto LABEL_77;
  v15 = wglGetProcAddress("glVertexAttrib1d");
  dword_70372174 = (int)v15;
  dword_70372170 = (int)wglGetProcAddress("glVertexAttrib1dv");
  if ( !dword_70372170 || !v15 )
    goto LABEL_78;
  v16 = wglGetProcAddress("glVertexAttrib1f");
  dword_7037216C = (int)v16;
  dword_70372168 = (int)wglGetProcAddress("glVertexAttrib1fv");
  if ( !dword_70372168 || !v16 )
    goto LABEL_79;
  v17 = wglGetProcAddress("glVertexAttrib1s");
  dword_70372164 = (int)v17;
  dword_70372160 = (int)wglGetProcAddress("glVertexAttrib1sv");
  if ( !dword_70372160 || !v17 )
    goto LABEL_80;
  v18 = wglGetProcAddress("glVertexAttrib2d");
  dword_7037215C = (int)v18;
  dword_70372158 = (int)wglGetProcAddress("glVertexAttrib2dv");
  if ( !dword_70372158 || !v18 )
    goto LABEL_81;
  v19 = wglGetProcAddress("glVertexAttrib2f");
  dword_70372154 = (int)v19;
  dword_70372150 = (int)wglGetProcAddress("glVertexAttrib2fv");
  if ( !dword_70372150 || !v19 )
    goto LABEL_82;
  v20 = wglGetProcAddress("glVertexAttrib2s");
  dword_7037214C = (int)v20;
  dword_70372148 = (int)wglGetProcAddress("glVertexAttrib2sv");
  if ( !dword_70372148 || !v20 )
    goto LABEL_83;
  v21 = wglGetProcAddress("glVertexAttrib3d");
  dword_70372144 = (int)v21;
  dword_70372140 = (int)wglGetProcAddress("glVertexAttrib3dv");
  if ( !dword_70372140 || !v21 )
    goto LABEL_84;
  v22 = wglGetProcAddress("glVertexAttrib3f");
  dword_7037213C = (int)v22;
  dword_70372138 = (int)wglGetProcAddress("glVertexAttrib3fv");
  if ( !dword_70372138 || !v22 )
    goto LABEL_85;
  v23 = wglGetProcAddress("glVertexAttrib3s");
  dword_70372134 = (int)v23;
  dword_70372130 = (int)wglGetProcAddress("glVertexAttrib3sv");
  if ( !dword_70372130 || !v23 )
    goto LABEL_86;
  v24 = wglGetProcAddress("glVertexAttrib4Nbv");
  dword_7037212C = (int)v24;
  dword_70372128 = (int)wglGetProcAddress("glVertexAttrib4Niv");
  if ( !dword_70372128 || !v24 )
    goto LABEL_87;
  v25 = wglGetProcAddress("glVertexAttrib4Nsv");
  dword_70372124 = (int)v25;
  dword_70372120 = (int)wglGetProcAddress("glVertexAttrib4Nub");
  if ( !dword_70372120 || !v25 )
    goto LABEL_88;
  v26 = wglGetProcAddress("glVertexAttrib4Nubv");
  dword_7037211C = (int)v26;
  dword_70372118 = (int)wglGetProcAddress("glVertexAttrib4Nuiv");
  if ( !dword_70372118 || !v26 )
    goto LABEL_89;
  v27 = wglGetProcAddress("glVertexAttrib4Nusv");
  dword_70372114 = (int)v27;
  dword_70372110 = (int)wglGetProcAddress("glVertexAttrib4bv");
  if ( !dword_70372110 || !v27 )
    goto LABEL_90;
  v28 = wglGetProcAddress("glVertexAttrib4d");
  dword_7037210C = (int)v28;
  dword_70372108 = (int)wglGetProcAddress("glVertexAttrib4dv");
  if ( !dword_70372108 || !v28 )
    goto LABEL_91;
  v29 = wglGetProcAddress("glVertexAttrib4f");
  dword_70372104 = (int)v29;
  dword_70372100 = (int)wglGetProcAddress("glVertexAttrib4fv");
  if ( !dword_70372100 || !v29 )
    goto LABEL_92;
  v30 = wglGetProcAddress("glVertexAttrib4iv");
  dword_703720FC = (int)v30;
  dword_703720F8 = (int)wglGetProcAddress("glVertexAttrib4s");
  if ( !dword_703720F8 || !v30 )
    goto LABEL_93;
  v31 = wglGetProcAddress("glVertexAttrib4sv");
  dword_703720F4 = (int)v31;
  dword_703720F0 = (int)wglGetProcAddress("glVertexAttrib4ubv");
  if ( !dword_703720F0 || !v31 )
    goto LABEL_94;
  v32 = wglGetProcAddress("glVertexAttrib4uiv");
  v33 = v32;
  dword_703720EC = (int)v32;
  v34 = wglGetProcAddress("glVertexAttrib4usv");
  dword_703720E8 = (int)v34;
  if ( v33 && v34 )
  {
    dword_703720E4 = (int)wglGetProcAddress("glVertexAttribPointer");
    return dword_703720E4 == 0;
  }
LABEL_95:
  dword_703720E4 = (int)wglGetProcAddress("glVertexAttribPointer");
  return 1;
}
