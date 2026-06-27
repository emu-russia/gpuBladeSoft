bool sub_6F7E20E0()
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
  PROC v22; // eax@42
  PROC v23; // esi@42
  PROC v24; // eax@42
  int v26; // [sp+14h] [bp-68h]@1
  int v27; // [sp+18h] [bp-64h]@1
  int v28; // [sp+1Ch] [bp-60h]@1
  int v29; // [sp+20h] [bp-5Ch]@1
  int v30; // [sp+24h] [bp-58h]@1
  int v31; // [sp+28h] [bp-54h]@1
  int v32; // [sp+2Ch] [bp-50h]@1
  int v33; // [sp+30h] [bp-4Ch]@1
  int v34; // [sp+34h] [bp-48h]@1
  int v35; // [sp+38h] [bp-44h]@1
  int v36; // [sp+3Ch] [bp-40h]@1
  int v37; // [sp+40h] [bp-3Ch]@1
  int v38; // [sp+44h] [bp-38h]@1
  int v39; // [sp+48h] [bp-34h]@1
  int v40; // [sp+4Ch] [bp-30h]@1
  int v41; // [sp+50h] [bp-2Ch]@1
  int v42; // [sp+54h] [bp-28h]@1
  int v43; // [sp+58h] [bp-24h]@1
  int v44; // [sp+5Ch] [bp-20h]@1

  dword_7036FF74 = (int)wglGetProcAddress("glAreProgramsResidentNV");
  v44 = dword_7036FF74;
  dword_7036FF70 = (int)wglGetProcAddress("glBindProgramNV");
  v26 = dword_7036FF70;
  dword_7036FF6C = (int)wglGetProcAddress("glDeleteProgramsNV");
  v27 = dword_7036FF6C;
  dword_7036FF68 = (int)wglGetProcAddress("glExecuteProgramNV");
  v28 = dword_7036FF68;
  dword_7036FF64 = (int)wglGetProcAddress("glGenProgramsNV");
  v29 = dword_7036FF64;
  dword_7036FF60 = (int)wglGetProcAddress("glGetProgramParameterdvNV");
  v30 = dword_7036FF60;
  dword_7036FF5C = (int)wglGetProcAddress("glGetProgramParameterfvNV");
  v31 = dword_7036FF5C;
  dword_7036FF58 = (int)wglGetProcAddress("glGetProgramStringNV");
  v32 = dword_7036FF58;
  dword_7036FF54 = (int)wglGetProcAddress("glGetProgramivNV");
  v33 = dword_7036FF54;
  dword_7036FF50 = (int)wglGetProcAddress("glGetTrackMatrixivNV");
  v34 = dword_7036FF50;
  dword_7036FF4C = (int)wglGetProcAddress("glGetVertexAttribPointervNV");
  v35 = dword_7036FF4C;
  dword_7036FF48 = (int)wglGetProcAddress("glGetVertexAttribdvNV");
  v36 = dword_7036FF48;
  dword_7036FF44 = (int)wglGetProcAddress("glGetVertexAttribfvNV");
  v37 = dword_7036FF44;
  dword_7036FF40 = (int)wglGetProcAddress("glGetVertexAttribivNV");
  v38 = dword_7036FF40;
  dword_7036FF3C = (int)wglGetProcAddress("glIsProgramNV");
  v39 = dword_7036FF3C;
  dword_7036FF38 = (int)wglGetProcAddress("glLoadProgramNV");
  v40 = dword_7036FF38;
  dword_7036FF34 = (int)wglGetProcAddress("glProgramParameter4dNV");
  v41 = dword_7036FF34;
  v0 = wglGetProcAddress("glProgramParameter4dvNV");
  dword_7036FF30 = (int)v0;
  v1 = wglGetProcAddress("glProgramParameter4fNV");
  dword_7036FF2C = (int)v1;
  v2 = wglGetProcAddress("glProgramParameter4fvNV");
  dword_7036FF28 = (int)v2;
  dword_7036FF24 = (int)wglGetProcAddress("glProgramParameters4dvNV");
  v43 = dword_7036FF24;
  dword_7036FF20 = (int)wglGetProcAddress("glProgramParameters4fvNV");
  v42 = dword_7036FF20;
  dword_7036FF1C = (int)wglGetProcAddress("glRequestResidentProgramsNV");
  if ( !dword_7036FF1C
    || v26 == 0
    || v27 == 0
    || v28 == 0
    || v29 == 0
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
    || v41 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v42 == 0
    || v43 == 0
    || v30 == 0
    || !v44 )
  {
    dword_7036FF18 = (int)wglGetProcAddress("glTrackMatrixNV");
    dword_7036FF14 = (int)wglGetProcAddress("glVertexAttrib1dNV");
LABEL_46:
    dword_7036FF10 = (int)wglGetProcAddress("glVertexAttrib1dvNV");
    dword_7036FF0C = (int)wglGetProcAddress("glVertexAttrib1fNV");
LABEL_47:
    dword_7036FF08 = (int)wglGetProcAddress("glVertexAttrib1fvNV");
    dword_7036FF04 = (int)wglGetProcAddress("glVertexAttrib1sNV");
LABEL_48:
    dword_7036FF00 = (int)wglGetProcAddress("glVertexAttrib1svNV");
    dword_7036FEFC = (int)wglGetProcAddress("glVertexAttrib2dNV");
LABEL_49:
    dword_7036FEF8 = (int)wglGetProcAddress("glVertexAttrib2dvNV");
    dword_7036FEF4 = (int)wglGetProcAddress("glVertexAttrib2fNV");
LABEL_50:
    dword_7036FEF0 = (int)wglGetProcAddress("glVertexAttrib2fvNV");
    dword_7036FEEC = (int)wglGetProcAddress("glVertexAttrib2sNV");
LABEL_51:
    dword_7036FEE8 = (int)wglGetProcAddress("glVertexAttrib2svNV");
    dword_7036FEE4 = (int)wglGetProcAddress("glVertexAttrib3dNV");
LABEL_52:
    dword_7036FEE0 = (int)wglGetProcAddress("glVertexAttrib3dvNV");
    dword_7036FEDC = (int)wglGetProcAddress("glVertexAttrib3fNV");
LABEL_53:
    dword_7036FED8 = (int)wglGetProcAddress("glVertexAttrib3fvNV");
    dword_7036FED4 = (int)wglGetProcAddress("glVertexAttrib3sNV");
LABEL_54:
    dword_7036FED0 = (int)wglGetProcAddress("glVertexAttrib3svNV");
    dword_7036FECC = (int)wglGetProcAddress("glVertexAttrib4dNV");
LABEL_55:
    dword_7036FEC8 = (int)wglGetProcAddress("glVertexAttrib4dvNV");
    dword_7036FEC4 = (int)wglGetProcAddress("glVertexAttrib4fNV");
LABEL_56:
    dword_7036FEC0 = (int)wglGetProcAddress("glVertexAttrib4fvNV");
    dword_7036FEBC = (int)wglGetProcAddress("glVertexAttrib4sNV");
LABEL_57:
    dword_7036FEB8 = (int)wglGetProcAddress("glVertexAttrib4svNV");
    dword_7036FEB4 = (int)wglGetProcAddress("glVertexAttrib4ubNV");
LABEL_58:
    dword_7036FEB0 = (int)wglGetProcAddress("glVertexAttrib4ubvNV");
    dword_7036FEAC = (int)wglGetProcAddress("glVertexAttribPointerNV");
LABEL_59:
    dword_7036FEA8 = (int)wglGetProcAddress("glVertexAttribs1dvNV");
    dword_7036FEA4 = (int)wglGetProcAddress("glVertexAttribs1fvNV");
LABEL_60:
    dword_7036FEA0 = (int)wglGetProcAddress("glVertexAttribs1svNV");
    dword_7036FE9C = (int)wglGetProcAddress("glVertexAttribs2dvNV");
LABEL_61:
    dword_7036FE98 = (int)wglGetProcAddress("glVertexAttribs2fvNV");
    dword_7036FE94 = (int)wglGetProcAddress("glVertexAttribs2svNV");
LABEL_62:
    dword_7036FE90 = (int)wglGetProcAddress("glVertexAttribs3dvNV");
    dword_7036FE8C = (int)wglGetProcAddress("glVertexAttribs3fvNV");
LABEL_63:
    dword_7036FE88 = (int)wglGetProcAddress("glVertexAttribs3svNV");
    dword_7036FE84 = (int)wglGetProcAddress("glVertexAttribs4dvNV");
LABEL_64:
    dword_7036FE80 = (int)wglGetProcAddress("glVertexAttribs4fvNV");
    dword_7036FE7C = (int)wglGetProcAddress("glVertexAttribs4svNV");
    goto LABEL_65;
  }
  v3 = wglGetProcAddress("glTrackMatrixNV");
  dword_7036FF18 = (int)v3;
  dword_7036FF14 = (int)wglGetProcAddress("glVertexAttrib1dNV");
  if ( !dword_7036FF14 || !v3 )
    goto LABEL_46;
  v4 = wglGetProcAddress("glVertexAttrib1dvNV");
  dword_7036FF10 = (int)v4;
  dword_7036FF0C = (int)wglGetProcAddress("glVertexAttrib1fNV");
  if ( !dword_7036FF0C || !v4 )
    goto LABEL_47;
  v5 = wglGetProcAddress("glVertexAttrib1fvNV");
  dword_7036FF08 = (int)v5;
  dword_7036FF04 = (int)wglGetProcAddress("glVertexAttrib1sNV");
  if ( !dword_7036FF04 || !v5 )
    goto LABEL_48;
  v6 = wglGetProcAddress("glVertexAttrib1svNV");
  dword_7036FF00 = (int)v6;
  dword_7036FEFC = (int)wglGetProcAddress("glVertexAttrib2dNV");
  if ( !dword_7036FEFC || !v6 )
    goto LABEL_49;
  v7 = wglGetProcAddress("glVertexAttrib2dvNV");
  dword_7036FEF8 = (int)v7;
  dword_7036FEF4 = (int)wglGetProcAddress("glVertexAttrib2fNV");
  if ( !dword_7036FEF4 || !v7 )
    goto LABEL_50;
  v8 = wglGetProcAddress("glVertexAttrib2fvNV");
  dword_7036FEF0 = (int)v8;
  dword_7036FEEC = (int)wglGetProcAddress("glVertexAttrib2sNV");
  if ( !dword_7036FEEC || !v8 )
    goto LABEL_51;
  v9 = wglGetProcAddress("glVertexAttrib2svNV");
  dword_7036FEE8 = (int)v9;
  dword_7036FEE4 = (int)wglGetProcAddress("glVertexAttrib3dNV");
  if ( !dword_7036FEE4 || !v9 )
    goto LABEL_52;
  v10 = wglGetProcAddress("glVertexAttrib3dvNV");
  dword_7036FEE0 = (int)v10;
  dword_7036FEDC = (int)wglGetProcAddress("glVertexAttrib3fNV");
  if ( !dword_7036FEDC || !v10 )
    goto LABEL_53;
  v11 = wglGetProcAddress("glVertexAttrib3fvNV");
  dword_7036FED8 = (int)v11;
  dword_7036FED4 = (int)wglGetProcAddress("glVertexAttrib3sNV");
  if ( !dword_7036FED4 || !v11 )
    goto LABEL_54;
  v12 = wglGetProcAddress("glVertexAttrib3svNV");
  dword_7036FED0 = (int)v12;
  dword_7036FECC = (int)wglGetProcAddress("glVertexAttrib4dNV");
  if ( !dword_7036FECC || !v12 )
    goto LABEL_55;
  v13 = wglGetProcAddress("glVertexAttrib4dvNV");
  dword_7036FEC8 = (int)v13;
  dword_7036FEC4 = (int)wglGetProcAddress("glVertexAttrib4fNV");
  if ( !dword_7036FEC4 || !v13 )
    goto LABEL_56;
  v14 = wglGetProcAddress("glVertexAttrib4fvNV");
  dword_7036FEC0 = (int)v14;
  dword_7036FEBC = (int)wglGetProcAddress("glVertexAttrib4sNV");
  if ( !dword_7036FEBC || !v14 )
    goto LABEL_57;
  v15 = wglGetProcAddress("glVertexAttrib4svNV");
  dword_7036FEB8 = (int)v15;
  dword_7036FEB4 = (int)wglGetProcAddress("glVertexAttrib4ubNV");
  if ( !dword_7036FEB4 || !v15 )
    goto LABEL_58;
  v16 = wglGetProcAddress("glVertexAttrib4ubvNV");
  dword_7036FEB0 = (int)v16;
  dword_7036FEAC = (int)wglGetProcAddress("glVertexAttribPointerNV");
  if ( !dword_7036FEAC || !v16 )
    goto LABEL_59;
  v17 = wglGetProcAddress("glVertexAttribs1dvNV");
  dword_7036FEA8 = (int)v17;
  dword_7036FEA4 = (int)wglGetProcAddress("glVertexAttribs1fvNV");
  if ( !dword_7036FEA4 || !v17 )
    goto LABEL_60;
  v18 = wglGetProcAddress("glVertexAttribs1svNV");
  dword_7036FEA0 = (int)v18;
  dword_7036FE9C = (int)wglGetProcAddress("glVertexAttribs2dvNV");
  if ( !dword_7036FE9C || !v18 )
    goto LABEL_61;
  v19 = wglGetProcAddress("glVertexAttribs2fvNV");
  dword_7036FE98 = (int)v19;
  dword_7036FE94 = (int)wglGetProcAddress("glVertexAttribs2svNV");
  if ( !dword_7036FE94 || !v19 )
    goto LABEL_62;
  v20 = wglGetProcAddress("glVertexAttribs3dvNV");
  dword_7036FE90 = (int)v20;
  dword_7036FE8C = (int)wglGetProcAddress("glVertexAttribs3fvNV");
  if ( !dword_7036FE8C || !v20 )
    goto LABEL_63;
  v21 = wglGetProcAddress("glVertexAttribs3svNV");
  dword_7036FE88 = (int)v21;
  dword_7036FE84 = (int)wglGetProcAddress("glVertexAttribs4dvNV");
  if ( !dword_7036FE84 || !v21 )
    goto LABEL_64;
  v22 = wglGetProcAddress("glVertexAttribs4fvNV");
  v23 = v22;
  dword_7036FE80 = (int)v22;
  v24 = wglGetProcAddress("glVertexAttribs4svNV");
  dword_7036FE7C = (int)v24;
  if ( v23 && v24 )
  {
    dword_7036FE78 = (int)wglGetProcAddress("glVertexAttribs4ubvNV");
    return dword_7036FE78 == 0;
  }
LABEL_65:
  dword_7036FE78 = (int)wglGetProcAddress("glVertexAttribs4ubvNV");
  return 1;
}
