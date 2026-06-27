bool sub_6F7E49C0()
{
  bool v0; // di@1
  PROC v1; // esi@1
  PROC v2; // esi@3
  PROC v3; // edi@3
  PROC v4; // ebp@3
  PROC v5; // esi@6
  PROC v6; // esi@8
  PROC v7; // esi@10
  PROC v8; // esi@12
  PROC v9; // esi@14
  PROC v10; // esi@16
  PROC v11; // esi@18
  PROC v12; // esi@20
  PROC v13; // esi@22
  PROC v14; // esi@24
  PROC v15; // esi@26
  PROC v16; // esi@28
  PROC v17; // esi@30
  PROC v18; // esi@32
  PROC v19; // esi@34
  PROC v20; // esi@36
  PROC v21; // esi@38
  PROC v22; // eax@40
  PROC v23; // esi@40
  PROC v24; // eax@40
  bool v26; // [sp+17h] [bp-65h]@1
  int v27; // [sp+18h] [bp-64h]@3
  int v28; // [sp+1Ch] [bp-60h]@3
  int v29; // [sp+20h] [bp-5Ch]@3
  int v30; // [sp+24h] [bp-58h]@3
  int v31; // [sp+28h] [bp-54h]@3
  int v32; // [sp+2Ch] [bp-50h]@3
  int v33; // [sp+30h] [bp-4Ch]@3
  int v34; // [sp+34h] [bp-48h]@3
  int v35; // [sp+38h] [bp-44h]@3
  int v36; // [sp+3Ch] [bp-40h]@3
  int v37; // [sp+40h] [bp-3Ch]@3
  int v38; // [sp+44h] [bp-38h]@3
  int v39; // [sp+48h] [bp-34h]@3
  int v40; // [sp+4Ch] [bp-30h]@3
  int v41; // [sp+50h] [bp-2Ch]@3
  int v42; // [sp+54h] [bp-28h]@3
  int v43; // [sp+58h] [bp-24h]@3
  int v44; // [sp+5Ch] [bp-20h]@3

  v0 = sub_6F7D56D0();
  v1 = wglGetProcAddress("glFlushMappedBufferRange");
  dword_7037198C = (int)v1;
  dword_70371988 = (int)wglGetProcAddress("glMapBufferRange");
  v26 = dword_70371988 == 0 || v0 != 0 || v1 == 0;
  if ( v26 )
    sub_6F7D84F0();
  else
    v26 = sub_6F7D84F0() != 0;
  dword_70371510 = (int)wglGetProcAddress("glBindVertexArray");
  v44 = dword_70371510;
  dword_7037150C = (int)wglGetProcAddress("glDeleteVertexArrays");
  v39 = dword_7037150C;
  dword_70371508 = (int)wglGetProcAddress("glGenVertexArrays");
  v40 = dword_70371508;
  dword_70371504 = (int)wglGetProcAddress("glIsVertexArray");
  v41 = dword_70371504;
  dword_703720C8 = (int)wglGetProcAddress("glBeginConditionalRender");
  v27 = dword_703720C8;
  dword_703720C4 = (int)wglGetProcAddress("glBeginTransformFeedback");
  v28 = dword_703720C4;
  dword_703720C0 = (int)wglGetProcAddress("glBindFragDataLocation");
  v29 = dword_703720C0;
  dword_703720BC = (int)wglGetProcAddress("glClampColor");
  v30 = dword_703720BC;
  dword_703720B8 = (int)wglGetProcAddress("glClearBufferfi");
  v31 = dword_703720B8;
  dword_703720B4 = (int)wglGetProcAddress("glClearBufferfv");
  v32 = dword_703720B4;
  dword_703720B0 = (int)wglGetProcAddress("glClearBufferiv");
  v33 = dword_703720B0;
  dword_703720AC = (int)wglGetProcAddress("glClearBufferuiv");
  v34 = dword_703720AC;
  dword_703720A8 = (int)wglGetProcAddress("glColorMaski");
  v35 = dword_703720A8;
  dword_703720A4 = (int)wglGetProcAddress("glDisablei");
  v36 = dword_703720A4;
  dword_703720A0 = (int)wglGetProcAddress("glEnablei");
  v37 = dword_703720A0;
  dword_7037209C = (int)wglGetProcAddress("glEndConditionalRender");
  v38 = dword_7037209C;
  v2 = wglGetProcAddress("glEndTransformFeedback");
  dword_70372098 = (int)v2;
  v3 = wglGetProcAddress("glGetBooleani_v");
  dword_70372094 = (int)v3;
  v4 = wglGetProcAddress("glGetFragDataLocation");
  dword_70372090 = (int)v4;
  dword_7037208C = (int)wglGetProcAddress("glGetStringi");
  v43 = dword_7037208C;
  dword_70372088 = (int)wglGetProcAddress("glGetTexParameterIiv");
  v42 = dword_70372088;
  dword_70372084 = (int)wglGetProcAddress("glGetTexParameterIuiv");
  if ( !dword_70372084
    || v39 == 0
    || v40 == 0
    || v41 == 0
    || v27 == 0
    || v29 == 0
    || v30 == 0
    || v31 == 0
    || v32 == 0
    || v33 == 0
    || v34 == 0
    || v35 == 0
    || v36 == 0
    || v37 == 0
    || v38 == 0
    || v2 == 0
    || v3 == 0
    || v4 == 0
    || v26
    || v42 == 0
    || v43 == 0
    || v28 == 0
    || !v44 )
  {
    dword_70372080 = (int)wglGetProcAddress("glGetTransformFeedbackVarying");
    dword_7037207C = (int)wglGetProcAddress("glGetUniformuiv");
LABEL_44:
    dword_70372078 = (int)wglGetProcAddress("glGetVertexAttribIiv");
    dword_70372074 = (int)wglGetProcAddress("glGetVertexAttribIuiv");
LABEL_45:
    dword_70372070 = (int)wglGetProcAddress("glIsEnabledi");
    dword_7037206C = (int)wglGetProcAddress("glTexParameterIiv");
LABEL_46:
    dword_70372068 = (int)wglGetProcAddress("glTexParameterIuiv");
    dword_70372064 = (int)wglGetProcAddress("glTransformFeedbackVaryings");
LABEL_47:
    dword_70372060 = (int)wglGetProcAddress("glUniform1ui");
    dword_7037205C = (int)wglGetProcAddress("glUniform1uiv");
LABEL_48:
    dword_70372058 = (int)wglGetProcAddress("glUniform2ui");
    dword_70372054 = (int)wglGetProcAddress("glUniform2uiv");
LABEL_49:
    dword_70372050 = (int)wglGetProcAddress("glUniform3ui");
    dword_7037204C = (int)wglGetProcAddress("glUniform3uiv");
LABEL_50:
    dword_70372048 = (int)wglGetProcAddress("glUniform4ui");
    dword_70372044 = (int)wglGetProcAddress("glUniform4uiv");
LABEL_51:
    dword_70372040 = (int)wglGetProcAddress("glVertexAttribI1i");
    dword_7037203C = (int)wglGetProcAddress("glVertexAttribI1iv");
LABEL_52:
    dword_70372038 = (int)wglGetProcAddress("glVertexAttribI1ui");
    dword_70372034 = (int)wglGetProcAddress("glVertexAttribI1uiv");
LABEL_53:
    dword_70372030 = (int)wglGetProcAddress("glVertexAttribI2i");
    dword_7037202C = (int)wglGetProcAddress("glVertexAttribI2iv");
LABEL_54:
    dword_70372028 = (int)wglGetProcAddress("glVertexAttribI2ui");
    dword_70372024 = (int)wglGetProcAddress("glVertexAttribI2uiv");
LABEL_55:
    dword_70372020 = (int)wglGetProcAddress("glVertexAttribI3i");
    dword_7037201C = (int)wglGetProcAddress("glVertexAttribI3iv");
LABEL_56:
    dword_70372018 = (int)wglGetProcAddress("glVertexAttribI3ui");
    dword_70372014 = (int)wglGetProcAddress("glVertexAttribI3uiv");
LABEL_57:
    dword_70372010 = (int)wglGetProcAddress("glVertexAttribI4bv");
    dword_7037200C = (int)wglGetProcAddress("glVertexAttribI4i");
LABEL_58:
    dword_70372008 = (int)wglGetProcAddress("glVertexAttribI4iv");
    dword_70372004 = (int)wglGetProcAddress("glVertexAttribI4sv");
LABEL_59:
    dword_70372000 = (int)wglGetProcAddress("glVertexAttribI4ubv");
    dword_70371FFC = (int)wglGetProcAddress("glVertexAttribI4ui");
LABEL_60:
    dword_70371FF8 = (int)wglGetProcAddress("glVertexAttribI4uiv");
    dword_70371FF4 = (int)wglGetProcAddress("glVertexAttribI4usv");
    goto LABEL_61;
  }
  v5 = wglGetProcAddress("glGetTransformFeedbackVarying");
  dword_70372080 = (int)v5;
  dword_7037207C = (int)wglGetProcAddress("glGetUniformuiv");
  if ( !dword_7037207C || !v5 )
    goto LABEL_44;
  v6 = wglGetProcAddress("glGetVertexAttribIiv");
  dword_70372078 = (int)v6;
  dword_70372074 = (int)wglGetProcAddress("glGetVertexAttribIuiv");
  if ( !dword_70372074 || !v6 )
    goto LABEL_45;
  v7 = wglGetProcAddress("glIsEnabledi");
  dword_70372070 = (int)v7;
  dword_7037206C = (int)wglGetProcAddress("glTexParameterIiv");
  if ( !dword_7037206C || !v7 )
    goto LABEL_46;
  v8 = wglGetProcAddress("glTexParameterIuiv");
  dword_70372068 = (int)v8;
  dword_70372064 = (int)wglGetProcAddress("glTransformFeedbackVaryings");
  if ( !dword_70372064 || !v8 )
    goto LABEL_47;
  v9 = wglGetProcAddress("glUniform1ui");
  dword_70372060 = (int)v9;
  dword_7037205C = (int)wglGetProcAddress("glUniform1uiv");
  if ( !dword_7037205C || !v9 )
    goto LABEL_48;
  v10 = wglGetProcAddress("glUniform2ui");
  dword_70372058 = (int)v10;
  dword_70372054 = (int)wglGetProcAddress("glUniform2uiv");
  if ( !dword_70372054 || !v10 )
    goto LABEL_49;
  v11 = wglGetProcAddress("glUniform3ui");
  dword_70372050 = (int)v11;
  dword_7037204C = (int)wglGetProcAddress("glUniform3uiv");
  if ( !dword_7037204C || !v11 )
    goto LABEL_50;
  v12 = wglGetProcAddress("glUniform4ui");
  dword_70372048 = (int)v12;
  dword_70372044 = (int)wglGetProcAddress("glUniform4uiv");
  if ( !dword_70372044 || !v12 )
    goto LABEL_51;
  v13 = wglGetProcAddress("glVertexAttribI1i");
  dword_70372040 = (int)v13;
  dword_7037203C = (int)wglGetProcAddress("glVertexAttribI1iv");
  if ( !dword_7037203C || !v13 )
    goto LABEL_52;
  v14 = wglGetProcAddress("glVertexAttribI1ui");
  dword_70372038 = (int)v14;
  dword_70372034 = (int)wglGetProcAddress("glVertexAttribI1uiv");
  if ( !dword_70372034 || !v14 )
    goto LABEL_53;
  v15 = wglGetProcAddress("glVertexAttribI2i");
  dword_70372030 = (int)v15;
  dword_7037202C = (int)wglGetProcAddress("glVertexAttribI2iv");
  if ( !dword_7037202C || !v15 )
    goto LABEL_54;
  v16 = wglGetProcAddress("glVertexAttribI2ui");
  dword_70372028 = (int)v16;
  dword_70372024 = (int)wglGetProcAddress("glVertexAttribI2uiv");
  if ( !dword_70372024 || !v16 )
    goto LABEL_55;
  v17 = wglGetProcAddress("glVertexAttribI3i");
  dword_70372020 = (int)v17;
  dword_7037201C = (int)wglGetProcAddress("glVertexAttribI3iv");
  if ( !dword_7037201C || !v17 )
    goto LABEL_56;
  v18 = wglGetProcAddress("glVertexAttribI3ui");
  dword_70372018 = (int)v18;
  dword_70372014 = (int)wglGetProcAddress("glVertexAttribI3uiv");
  if ( !dword_70372014 || !v18 )
    goto LABEL_57;
  v19 = wglGetProcAddress("glVertexAttribI4bv");
  dword_70372010 = (int)v19;
  dword_7037200C = (int)wglGetProcAddress("glVertexAttribI4i");
  if ( !dword_7037200C || !v19 )
    goto LABEL_58;
  v20 = wglGetProcAddress("glVertexAttribI4iv");
  dword_70372008 = (int)v20;
  dword_70372004 = (int)wglGetProcAddress("glVertexAttribI4sv");
  if ( !dword_70372004 || !v20 )
    goto LABEL_59;
  v21 = wglGetProcAddress("glVertexAttribI4ubv");
  dword_70372000 = (int)v21;
  dword_70371FFC = (int)wglGetProcAddress("glVertexAttribI4ui");
  if ( !dword_70371FFC || !v21 )
    goto LABEL_60;
  v22 = wglGetProcAddress("glVertexAttribI4uiv");
  v23 = v22;
  dword_70371FF8 = (int)v22;
  v24 = wglGetProcAddress("glVertexAttribI4usv");
  dword_70371FF4 = (int)v24;
  if ( v23 && v24 )
  {
    dword_70371FF0 = (int)wglGetProcAddress("glVertexAttribIPointer");
    return dword_70371FF0 == 0;
  }
LABEL_61:
  dword_70371FF0 = (int)wglGetProcAddress("glVertexAttribIPointer");
  return 1;
}
