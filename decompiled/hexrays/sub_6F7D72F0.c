bool sub_6F7D72F0()
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
  PROC v21; // eax@40
  PROC v22; // esi@40
  PROC v23; // eax@40
  int v25; // [sp+1Ch] [bp-60h]@1
  int v26; // [sp+20h] [bp-5Ch]@1
  int v27; // [sp+24h] [bp-58h]@1
  int v28; // [sp+28h] [bp-54h]@1
  int v29; // [sp+2Ch] [bp-50h]@1
  int v30; // [sp+30h] [bp-4Ch]@1
  int v31; // [sp+34h] [bp-48h]@1
  int v32; // [sp+38h] [bp-44h]@1
  int v33; // [sp+3Ch] [bp-40h]@1
  int v34; // [sp+40h] [bp-3Ch]@1
  int v35; // [sp+44h] [bp-38h]@1
  int v36; // [sp+48h] [bp-34h]@1
  int v37; // [sp+4Ch] [bp-30h]@1
  int v38; // [sp+50h] [bp-2Ch]@1
  int v39; // [sp+54h] [bp-28h]@1
  int v40; // [sp+58h] [bp-24h]@1
  int v41; // [sp+5Ch] [bp-20h]@1

  dword_703717E4 = (int)wglGetProcAddress("glActiveShaderProgram");
  v41 = dword_703717E4;
  dword_703717E0 = (int)wglGetProcAddress("glBindProgramPipeline");
  v25 = dword_703717E0;
  dword_703717DC = (int)wglGetProcAddress("glCreateShaderProgramv");
  v26 = dword_703717DC;
  dword_703717D8 = (int)wglGetProcAddress("glDeleteProgramPipelines");
  v27 = dword_703717D8;
  dword_703717D4 = (int)wglGetProcAddress("glGenProgramPipelines");
  v28 = dword_703717D4;
  dword_703717D0 = (int)wglGetProcAddress("glGetProgramPipelineInfoLog");
  v29 = dword_703717D0;
  dword_703717CC = (int)wglGetProcAddress("glGetProgramPipelineiv");
  v30 = dword_703717CC;
  dword_703717C8 = (int)wglGetProcAddress("glIsProgramPipeline");
  v31 = dword_703717C8;
  dword_703717C4 = (int)wglGetProcAddress("glProgramUniform1d");
  v32 = dword_703717C4;
  dword_703717C0 = (int)wglGetProcAddress("glProgramUniform1dv");
  v33 = dword_703717C0;
  dword_703717BC = (int)wglGetProcAddress("glProgramUniform1f");
  v34 = dword_703717BC;
  dword_703717B8 = (int)wglGetProcAddress("glProgramUniform1fv");
  v35 = dword_703717B8;
  dword_703717B4 = (int)wglGetProcAddress("glProgramUniform1i");
  v36 = dword_703717B4;
  dword_703717B0 = (int)wglGetProcAddress("glProgramUniform1iv");
  v37 = dword_703717B0;
  dword_703717AC = (int)wglGetProcAddress("glProgramUniform1ui");
  v38 = dword_703717AC;
  v0 = wglGetProcAddress("glProgramUniform1uiv");
  dword_703717A8 = (int)v0;
  v1 = wglGetProcAddress("glProgramUniform2d");
  dword_703717A4 = (int)v1;
  v2 = wglGetProcAddress("glProgramUniform2dv");
  dword_703717A0 = (int)v2;
  dword_7037179C = (int)wglGetProcAddress("glProgramUniform2f");
  v40 = dword_7037179C;
  dword_70371798 = (int)wglGetProcAddress("glProgramUniform2fv");
  v39 = dword_70371798;
  dword_70371794 = (int)wglGetProcAddress("glProgramUniform2i");
  if ( !dword_70371794
    || v25 == 0
    || v26 == 0
    || v27 == 0
    || v28 == 0
    || v30 == 0
    || v31 == 0
    || v32 == 0
    || v33 == 0
    || v34 == 0
    || v35 == 0
    || v36 == 0
    || v37 == 0
    || v38 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v39 == 0
    || v40 == 0
    || v29 == 0
    || !v41 )
  {
    dword_70371790 = (int)wglGetProcAddress("glProgramUniform2iv");
    dword_7037178C = (int)wglGetProcAddress("glProgramUniform2ui");
LABEL_44:
    dword_70371788 = (int)wglGetProcAddress("glProgramUniform2uiv");
    dword_70371784 = (int)wglGetProcAddress("glProgramUniform3d");
LABEL_45:
    dword_70371780 = (int)wglGetProcAddress("glProgramUniform3dv");
    dword_7037177C = (int)wglGetProcAddress("glProgramUniform3f");
LABEL_46:
    dword_70371778 = (int)wglGetProcAddress("glProgramUniform3fv");
    dword_70371774 = (int)wglGetProcAddress("glProgramUniform3i");
LABEL_47:
    dword_70371770 = (int)wglGetProcAddress("glProgramUniform3iv");
    dword_7037176C = (int)wglGetProcAddress("glProgramUniform3ui");
LABEL_48:
    dword_70371768 = (int)wglGetProcAddress("glProgramUniform3uiv");
    dword_70371764 = (int)wglGetProcAddress("glProgramUniform4d");
LABEL_49:
    dword_70371760 = (int)wglGetProcAddress("glProgramUniform4dv");
    dword_7037175C = (int)wglGetProcAddress("glProgramUniform4f");
LABEL_50:
    dword_70371758 = (int)wglGetProcAddress("glProgramUniform4fv");
    dword_70371754 = (int)wglGetProcAddress("glProgramUniform4i");
LABEL_51:
    dword_70371750 = (int)wglGetProcAddress("glProgramUniform4iv");
    dword_7037174C = (int)wglGetProcAddress("glProgramUniform4ui");
LABEL_52:
    dword_70371748 = (int)wglGetProcAddress("glProgramUniform4uiv");
    dword_70371744 = (int)wglGetProcAddress("glProgramUniformMatrix2dv");
LABEL_53:
    dword_70371740 = (int)wglGetProcAddress("glProgramUniformMatrix2fv");
    dword_7037173C = (int)wglGetProcAddress("glProgramUniformMatrix2x3dv");
LABEL_54:
    dword_70371738 = (int)wglGetProcAddress("glProgramUniformMatrix2x3fv");
    dword_70371734 = (int)wglGetProcAddress("glProgramUniformMatrix2x4dv");
LABEL_55:
    dword_70371730 = (int)wglGetProcAddress("glProgramUniformMatrix2x4fv");
    dword_7037172C = (int)wglGetProcAddress("glProgramUniformMatrix3dv");
LABEL_56:
    dword_70371728 = (int)wglGetProcAddress("glProgramUniformMatrix3fv");
    dword_70371724 = (int)wglGetProcAddress("glProgramUniformMatrix3x2dv");
LABEL_57:
    dword_70371720 = (int)wglGetProcAddress("glProgramUniformMatrix3x2fv");
    dword_7037171C = (int)wglGetProcAddress("glProgramUniformMatrix3x4dv");
LABEL_58:
    dword_70371718 = (int)wglGetProcAddress("glProgramUniformMatrix3x4fv");
    dword_70371714 = (int)wglGetProcAddress("glProgramUniformMatrix4dv");
LABEL_59:
    dword_70371710 = (int)wglGetProcAddress("glProgramUniformMatrix4fv");
    dword_7037170C = (int)wglGetProcAddress("glProgramUniformMatrix4x2dv");
LABEL_60:
    dword_70371708 = (int)wglGetProcAddress("glProgramUniformMatrix4x2fv");
    dword_70371704 = (int)wglGetProcAddress("glProgramUniformMatrix4x3dv");
LABEL_61:
    dword_70371700 = (int)wglGetProcAddress("glProgramUniformMatrix4x3fv");
    dword_703716FC = (int)wglGetProcAddress("glUseProgramStages");
    goto LABEL_62;
  }
  v3 = wglGetProcAddress("glProgramUniform2iv");
  dword_70371790 = (int)v3;
  dword_7037178C = (int)wglGetProcAddress("glProgramUniform2ui");
  if ( !dword_7037178C || !v3 )
    goto LABEL_44;
  v4 = wglGetProcAddress("glProgramUniform2uiv");
  dword_70371788 = (int)v4;
  dword_70371784 = (int)wglGetProcAddress("glProgramUniform3d");
  if ( !dword_70371784 || !v4 )
    goto LABEL_45;
  v5 = wglGetProcAddress("glProgramUniform3dv");
  dword_70371780 = (int)v5;
  dword_7037177C = (int)wglGetProcAddress("glProgramUniform3f");
  if ( !dword_7037177C || !v5 )
    goto LABEL_46;
  v6 = wglGetProcAddress("glProgramUniform3fv");
  dword_70371778 = (int)v6;
  dword_70371774 = (int)wglGetProcAddress("glProgramUniform3i");
  if ( !dword_70371774 || !v6 )
    goto LABEL_47;
  v7 = wglGetProcAddress("glProgramUniform3iv");
  dword_70371770 = (int)v7;
  dword_7037176C = (int)wglGetProcAddress("glProgramUniform3ui");
  if ( !dword_7037176C || !v7 )
    goto LABEL_48;
  v8 = wglGetProcAddress("glProgramUniform3uiv");
  dword_70371768 = (int)v8;
  dword_70371764 = (int)wglGetProcAddress("glProgramUniform4d");
  if ( !dword_70371764 || !v8 )
    goto LABEL_49;
  v9 = wglGetProcAddress("glProgramUniform4dv");
  dword_70371760 = (int)v9;
  dword_7037175C = (int)wglGetProcAddress("glProgramUniform4f");
  if ( !dword_7037175C || !v9 )
    goto LABEL_50;
  v10 = wglGetProcAddress("glProgramUniform4fv");
  dword_70371758 = (int)v10;
  dword_70371754 = (int)wglGetProcAddress("glProgramUniform4i");
  if ( !dword_70371754 || !v10 )
    goto LABEL_51;
  v11 = wglGetProcAddress("glProgramUniform4iv");
  dword_70371750 = (int)v11;
  dword_7037174C = (int)wglGetProcAddress("glProgramUniform4ui");
  if ( !dword_7037174C || !v11 )
    goto LABEL_52;
  v12 = wglGetProcAddress("glProgramUniform4uiv");
  dword_70371748 = (int)v12;
  dword_70371744 = (int)wglGetProcAddress("glProgramUniformMatrix2dv");
  if ( !dword_70371744 || !v12 )
    goto LABEL_53;
  v13 = wglGetProcAddress("glProgramUniformMatrix2fv");
  dword_70371740 = (int)v13;
  dword_7037173C = (int)wglGetProcAddress("glProgramUniformMatrix2x3dv");
  if ( !dword_7037173C || !v13 )
    goto LABEL_54;
  v14 = wglGetProcAddress("glProgramUniformMatrix2x3fv");
  dword_70371738 = (int)v14;
  dword_70371734 = (int)wglGetProcAddress("glProgramUniformMatrix2x4dv");
  if ( !dword_70371734 || !v14 )
    goto LABEL_55;
  v15 = wglGetProcAddress("glProgramUniformMatrix2x4fv");
  dword_70371730 = (int)v15;
  dword_7037172C = (int)wglGetProcAddress("glProgramUniformMatrix3dv");
  if ( !dword_7037172C || !v15 )
    goto LABEL_56;
  v16 = wglGetProcAddress("glProgramUniformMatrix3fv");
  dword_70371728 = (int)v16;
  dword_70371724 = (int)wglGetProcAddress("glProgramUniformMatrix3x2dv");
  if ( !dword_70371724 || !v16 )
    goto LABEL_57;
  v17 = wglGetProcAddress("glProgramUniformMatrix3x2fv");
  dword_70371720 = (int)v17;
  dword_7037171C = (int)wglGetProcAddress("glProgramUniformMatrix3x4dv");
  if ( !dword_7037171C || !v17 )
    goto LABEL_58;
  v18 = wglGetProcAddress("glProgramUniformMatrix3x4fv");
  dword_70371718 = (int)v18;
  dword_70371714 = (int)wglGetProcAddress("glProgramUniformMatrix4dv");
  if ( !dword_70371714 || !v18 )
    goto LABEL_59;
  v19 = wglGetProcAddress("glProgramUniformMatrix4fv");
  dword_70371710 = (int)v19;
  dword_7037170C = (int)wglGetProcAddress("glProgramUniformMatrix4x2dv");
  if ( !dword_7037170C || !v19 )
    goto LABEL_60;
  v20 = wglGetProcAddress("glProgramUniformMatrix4x2fv");
  dword_70371708 = (int)v20;
  dword_70371704 = (int)wglGetProcAddress("glProgramUniformMatrix4x3dv");
  if ( !dword_70371704 || !v20 )
    goto LABEL_61;
  v21 = wglGetProcAddress("glProgramUniformMatrix4x3fv");
  v22 = v21;
  dword_70371700 = (int)v21;
  v23 = wglGetProcAddress("glUseProgramStages");
  dword_703716FC = (int)v23;
  if ( v22 && v23 )
  {
    dword_703716F8 = (int)wglGetProcAddress("glValidateProgramPipeline");
    return dword_703716F8 == 0;
  }
LABEL_62:
  dword_703716F8 = (int)wglGetProcAddress("glValidateProgramPipeline");
  return 1;
}
