bool sub_6F7D8D80()
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
  int v25; // [sp+14h] [bp-68h]@1
  int v26; // [sp+18h] [bp-64h]@1
  int v27; // [sp+1Ch] [bp-60h]@1
  int v28; // [sp+20h] [bp-5Ch]@1
  int v29; // [sp+24h] [bp-58h]@1
  int v30; // [sp+28h] [bp-54h]@1
  int v31; // [sp+2Ch] [bp-50h]@1
  int v32; // [sp+30h] [bp-4Ch]@1
  int v33; // [sp+34h] [bp-48h]@1
  int v34; // [sp+38h] [bp-44h]@1
  int v35; // [sp+3Ch] [bp-40h]@1
  int v36; // [sp+40h] [bp-3Ch]@1
  int v37; // [sp+44h] [bp-38h]@1
  int v38; // [sp+48h] [bp-34h]@1
  int v39; // [sp+4Ch] [bp-30h]@1
  int v40; // [sp+50h] [bp-2Ch]@1
  int v41; // [sp+54h] [bp-28h]@1
  int v42; // [sp+58h] [bp-24h]@1
  int v43; // [sp+5Ch] [bp-20h]@1

  dword_70371454 = (int)wglGetProcAddress("glBindProgramARB");
  v43 = dword_70371454;
  dword_70371450 = (int)wglGetProcAddress("glDeleteProgramsARB");
  v25 = dword_70371450;
  dword_7037144C = (int)wglGetProcAddress("glDisableVertexAttribArrayARB");
  v26 = dword_7037144C;
  dword_70371448 = (int)wglGetProcAddress("glEnableVertexAttribArrayARB");
  v27 = dword_70371448;
  dword_70371444 = (int)wglGetProcAddress("glGenProgramsARB");
  v28 = dword_70371444;
  dword_70371440 = (int)wglGetProcAddress("glGetProgramEnvParameterdvARB");
  v29 = dword_70371440;
  dword_7037143C = (int)wglGetProcAddress("glGetProgramEnvParameterfvARB");
  v30 = dword_7037143C;
  dword_70371438 = (int)wglGetProcAddress("glGetProgramLocalParameterdvARB");
  v31 = dword_70371438;
  dword_70371434 = (int)wglGetProcAddress("glGetProgramLocalParameterfvARB");
  v32 = dword_70371434;
  dword_70371430 = (int)wglGetProcAddress("glGetProgramStringARB");
  v33 = dword_70371430;
  dword_7037142C = (int)wglGetProcAddress("glGetProgramivARB");
  v34 = dword_7037142C;
  dword_70371428 = (int)wglGetProcAddress("glGetVertexAttribPointervARB");
  v35 = dword_70371428;
  dword_70371424 = (int)wglGetProcAddress("glGetVertexAttribdvARB");
  v36 = dword_70371424;
  dword_70371420 = (int)wglGetProcAddress("glGetVertexAttribfvARB");
  v37 = dword_70371420;
  dword_7037141C = (int)wglGetProcAddress("glGetVertexAttribivARB");
  v38 = dword_7037141C;
  dword_70371418 = (int)wglGetProcAddress("glIsProgramARB");
  v39 = dword_70371418;
  dword_70371414 = (int)wglGetProcAddress("glProgramEnvParameter4dARB");
  v40 = dword_70371414;
  v0 = wglGetProcAddress("glProgramEnvParameter4dvARB");
  dword_70371410 = (int)v0;
  v1 = wglGetProcAddress("glProgramEnvParameter4fARB");
  dword_7037140C = (int)v1;
  v2 = wglGetProcAddress("glProgramEnvParameter4fvARB");
  dword_70371408 = (int)v2;
  dword_70371404 = (int)wglGetProcAddress("glProgramLocalParameter4dARB");
  v42 = dword_70371404;
  dword_70371400 = (int)wglGetProcAddress("glProgramLocalParameter4dvARB");
  v41 = dword_70371400;
  dword_703713FC = (int)wglGetProcAddress("glProgramLocalParameter4fARB");
  if ( !dword_703713FC
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
    || v39 == 0
    || v40 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v41 == 0
    || v42 == 0
    || v29 == 0
    || !v43 )
  {
    dword_703713F8 = (int)wglGetProcAddress("glProgramLocalParameter4fvARB");
    dword_703713F4 = (int)wglGetProcAddress("glProgramStringARB");
LABEL_44:
    dword_703713F0 = (int)wglGetProcAddress("glVertexAttrib1dARB");
    dword_703713EC = (int)wglGetProcAddress("glVertexAttrib1dvARB");
LABEL_45:
    dword_703713E8 = (int)wglGetProcAddress("glVertexAttrib1fARB");
    dword_703713E4 = (int)wglGetProcAddress("glVertexAttrib1fvARB");
LABEL_46:
    dword_703713E0 = (int)wglGetProcAddress("glVertexAttrib1sARB");
    dword_703713DC = (int)wglGetProcAddress("glVertexAttrib1svARB");
LABEL_47:
    dword_703713D8 = (int)wglGetProcAddress("glVertexAttrib2dARB");
    dword_703713D4 = (int)wglGetProcAddress("glVertexAttrib2dvARB");
LABEL_48:
    dword_703713D0 = (int)wglGetProcAddress("glVertexAttrib2fARB");
    dword_703713CC = (int)wglGetProcAddress("glVertexAttrib2fvARB");
LABEL_49:
    dword_703713C8 = (int)wglGetProcAddress("glVertexAttrib2sARB");
    dword_703713C4 = (int)wglGetProcAddress("glVertexAttrib2svARB");
LABEL_50:
    dword_703713C0 = (int)wglGetProcAddress("glVertexAttrib3dARB");
    dword_703713BC = (int)wglGetProcAddress("glVertexAttrib3dvARB");
LABEL_51:
    dword_703713B8 = (int)wglGetProcAddress("glVertexAttrib3fARB");
    dword_703713B4 = (int)wglGetProcAddress("glVertexAttrib3fvARB");
LABEL_52:
    dword_703713B0 = (int)wglGetProcAddress("glVertexAttrib3sARB");
    dword_703713AC = (int)wglGetProcAddress("glVertexAttrib3svARB");
LABEL_53:
    dword_703713A8 = (int)wglGetProcAddress("glVertexAttrib4NbvARB");
    dword_703713A4 = (int)wglGetProcAddress("glVertexAttrib4NivARB");
LABEL_54:
    dword_703713A0 = (int)wglGetProcAddress("glVertexAttrib4NsvARB");
    dword_7037139C = (int)wglGetProcAddress("glVertexAttrib4NubARB");
LABEL_55:
    dword_70371398 = (int)wglGetProcAddress("glVertexAttrib4NubvARB");
    dword_70371394 = (int)wglGetProcAddress("glVertexAttrib4NuivARB");
LABEL_56:
    dword_70371390 = (int)wglGetProcAddress("glVertexAttrib4NusvARB");
    dword_7037138C = (int)wglGetProcAddress("glVertexAttrib4bvARB");
LABEL_57:
    dword_70371388 = (int)wglGetProcAddress("glVertexAttrib4dARB");
    dword_70371384 = (int)wglGetProcAddress("glVertexAttrib4dvARB");
LABEL_58:
    dword_70371380 = (int)wglGetProcAddress("glVertexAttrib4fARB");
    dword_7037137C = (int)wglGetProcAddress("glVertexAttrib4fvARB");
LABEL_59:
    dword_70371378 = (int)wglGetProcAddress("glVertexAttrib4ivARB");
    dword_70371374 = (int)wglGetProcAddress("glVertexAttrib4sARB");
LABEL_60:
    dword_70371370 = (int)wglGetProcAddress("glVertexAttrib4svARB");
    dword_7037136C = (int)wglGetProcAddress("glVertexAttrib4ubvARB");
LABEL_61:
    dword_70371368 = (int)wglGetProcAddress("glVertexAttrib4uivARB");
    dword_70371364 = (int)wglGetProcAddress("glVertexAttrib4usvARB");
    goto LABEL_62;
  }
  v3 = wglGetProcAddress("glProgramLocalParameter4fvARB");
  dword_703713F8 = (int)v3;
  dword_703713F4 = (int)wglGetProcAddress("glProgramStringARB");
  if ( !dword_703713F4 || !v3 )
    goto LABEL_44;
  v4 = wglGetProcAddress("glVertexAttrib1dARB");
  dword_703713F0 = (int)v4;
  dword_703713EC = (int)wglGetProcAddress("glVertexAttrib1dvARB");
  if ( !dword_703713EC || !v4 )
    goto LABEL_45;
  v5 = wglGetProcAddress("glVertexAttrib1fARB");
  dword_703713E8 = (int)v5;
  dword_703713E4 = (int)wglGetProcAddress("glVertexAttrib1fvARB");
  if ( !dword_703713E4 || !v5 )
    goto LABEL_46;
  v6 = wglGetProcAddress("glVertexAttrib1sARB");
  dword_703713E0 = (int)v6;
  dword_703713DC = (int)wglGetProcAddress("glVertexAttrib1svARB");
  if ( !dword_703713DC || !v6 )
    goto LABEL_47;
  v7 = wglGetProcAddress("glVertexAttrib2dARB");
  dword_703713D8 = (int)v7;
  dword_703713D4 = (int)wglGetProcAddress("glVertexAttrib2dvARB");
  if ( !dword_703713D4 || !v7 )
    goto LABEL_48;
  v8 = wglGetProcAddress("glVertexAttrib2fARB");
  dword_703713D0 = (int)v8;
  dword_703713CC = (int)wglGetProcAddress("glVertexAttrib2fvARB");
  if ( !dword_703713CC || !v8 )
    goto LABEL_49;
  v9 = wglGetProcAddress("glVertexAttrib2sARB");
  dword_703713C8 = (int)v9;
  dword_703713C4 = (int)wglGetProcAddress("glVertexAttrib2svARB");
  if ( !dword_703713C4 || !v9 )
    goto LABEL_50;
  v10 = wglGetProcAddress("glVertexAttrib3dARB");
  dword_703713C0 = (int)v10;
  dword_703713BC = (int)wglGetProcAddress("glVertexAttrib3dvARB");
  if ( !dword_703713BC || !v10 )
    goto LABEL_51;
  v11 = wglGetProcAddress("glVertexAttrib3fARB");
  dword_703713B8 = (int)v11;
  dword_703713B4 = (int)wglGetProcAddress("glVertexAttrib3fvARB");
  if ( !dword_703713B4 || !v11 )
    goto LABEL_52;
  v12 = wglGetProcAddress("glVertexAttrib3sARB");
  dword_703713B0 = (int)v12;
  dword_703713AC = (int)wglGetProcAddress("glVertexAttrib3svARB");
  if ( !dword_703713AC || !v12 )
    goto LABEL_53;
  v13 = wglGetProcAddress("glVertexAttrib4NbvARB");
  dword_703713A8 = (int)v13;
  dword_703713A4 = (int)wglGetProcAddress("glVertexAttrib4NivARB");
  if ( !dword_703713A4 || !v13 )
    goto LABEL_54;
  v14 = wglGetProcAddress("glVertexAttrib4NsvARB");
  dword_703713A0 = (int)v14;
  dword_7037139C = (int)wglGetProcAddress("glVertexAttrib4NubARB");
  if ( !dword_7037139C || !v14 )
    goto LABEL_55;
  v15 = wglGetProcAddress("glVertexAttrib4NubvARB");
  dword_70371398 = (int)v15;
  dword_70371394 = (int)wglGetProcAddress("glVertexAttrib4NuivARB");
  if ( !dword_70371394 || !v15 )
    goto LABEL_56;
  v16 = wglGetProcAddress("glVertexAttrib4NusvARB");
  dword_70371390 = (int)v16;
  dword_7037138C = (int)wglGetProcAddress("glVertexAttrib4bvARB");
  if ( !dword_7037138C || !v16 )
    goto LABEL_57;
  v17 = wglGetProcAddress("glVertexAttrib4dARB");
  dword_70371388 = (int)v17;
  dword_70371384 = (int)wglGetProcAddress("glVertexAttrib4dvARB");
  if ( !dword_70371384 || !v17 )
    goto LABEL_58;
  v18 = wglGetProcAddress("glVertexAttrib4fARB");
  dword_70371380 = (int)v18;
  dword_7037137C = (int)wglGetProcAddress("glVertexAttrib4fvARB");
  if ( !dword_7037137C || !v18 )
    goto LABEL_59;
  v19 = wglGetProcAddress("glVertexAttrib4ivARB");
  dword_70371378 = (int)v19;
  dword_70371374 = (int)wglGetProcAddress("glVertexAttrib4sARB");
  if ( !dword_70371374 || !v19 )
    goto LABEL_60;
  v20 = wglGetProcAddress("glVertexAttrib4svARB");
  dword_70371370 = (int)v20;
  dword_7037136C = (int)wglGetProcAddress("glVertexAttrib4ubvARB");
  if ( !dword_7037136C || !v20 )
    goto LABEL_61;
  v21 = wglGetProcAddress("glVertexAttrib4uivARB");
  v22 = v21;
  dword_70371368 = (int)v21;
  v23 = wglGetProcAddress("glVertexAttrib4usvARB");
  dword_70371364 = (int)v23;
  if ( v22 && v23 )
  {
    dword_70371360 = (int)wglGetProcAddress("glVertexAttribPointerARB");
    return dword_70371360 == 0;
  }
LABEL_62:
  dword_70371360 = (int)wglGetProcAddress("glVertexAttribPointerARB");
  return 1;
}
