bool sub_6F7E0400()
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
  PROC v16; // eax@30
  PROC v17; // esi@30
  PROC v18; // eax@30
  int v20; // [sp+1Ch] [bp-50h]@1
  int v21; // [sp+20h] [bp-4Ch]@1
  int v22; // [sp+24h] [bp-48h]@1
  int v23; // [sp+28h] [bp-44h]@1
  int v24; // [sp+2Ch] [bp-40h]@1
  int v25; // [sp+30h] [bp-3Ch]@1
  int v26; // [sp+34h] [bp-38h]@1
  int v27; // [sp+38h] [bp-34h]@1
  int v28; // [sp+3Ch] [bp-30h]@1
  int v29; // [sp+40h] [bp-2Ch]@1
  int v30; // [sp+44h] [bp-28h]@1
  int v31; // [sp+48h] [bp-24h]@1
  int v32; // [sp+4Ch] [bp-20h]@1

  dword_7037039C = (int)wglGetProcAddress("glColor3hNV");
  v32 = dword_7037039C;
  dword_70370398 = (int)wglGetProcAddress("glColor3hvNV");
  v20 = dword_70370398;
  dword_70370394 = (int)wglGetProcAddress("glColor4hNV");
  v21 = dword_70370394;
  dword_70370390 = (int)wglGetProcAddress("glColor4hvNV");
  v22 = dword_70370390;
  dword_7037038C = (int)wglGetProcAddress("glFogCoordhNV");
  v23 = dword_7037038C;
  dword_70370388 = (int)wglGetProcAddress("glFogCoordhvNV");
  v24 = dword_70370388;
  dword_70370384 = (int)wglGetProcAddress("glMultiTexCoord1hNV");
  v25 = dword_70370384;
  dword_70370380 = (int)wglGetProcAddress("glMultiTexCoord1hvNV");
  v26 = dword_70370380;
  dword_7037037C = (int)wglGetProcAddress("glMultiTexCoord2hNV");
  v27 = dword_7037037C;
  dword_70370378 = (int)wglGetProcAddress("glMultiTexCoord2hvNV");
  v28 = dword_70370378;
  dword_70370374 = (int)wglGetProcAddress("glMultiTexCoord3hNV");
  v29 = dword_70370374;
  v0 = wglGetProcAddress("glMultiTexCoord3hvNV");
  dword_70370370 = (int)v0;
  v1 = wglGetProcAddress("glMultiTexCoord4hNV");
  dword_7037036C = (int)v1;
  v2 = wglGetProcAddress("glMultiTexCoord4hvNV");
  dword_70370368 = (int)v2;
  dword_70370364 = (int)wglGetProcAddress("glNormal3hNV");
  v31 = dword_70370364;
  dword_70370360 = (int)wglGetProcAddress("glNormal3hvNV");
  v30 = dword_70370360;
  dword_7037035C = (int)wglGetProcAddress("glSecondaryColor3hNV");
  if ( !dword_7037035C
    || v20 == 0
    || v21 == 0
    || v22 == 0
    || v23 == 0
    || v25 == 0
    || v26 == 0
    || v27 == 0
    || v28 == 0
    || v29 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v30 == 0
    || v31 == 0
    || v24 == 0
    || !v32 )
  {
    dword_70370358 = (int)wglGetProcAddress("glSecondaryColor3hvNV");
    dword_70370354 = (int)wglGetProcAddress("glTexCoord1hNV");
LABEL_34:
    dword_70370350 = (int)wglGetProcAddress("glTexCoord1hvNV");
    dword_7037034C = (int)wglGetProcAddress("glTexCoord2hNV");
LABEL_35:
    dword_70370348 = (int)wglGetProcAddress("glTexCoord2hvNV");
    dword_70370344 = (int)wglGetProcAddress("glTexCoord3hNV");
LABEL_36:
    dword_70370340 = (int)wglGetProcAddress("glTexCoord3hvNV");
    dword_7037033C = (int)wglGetProcAddress("glTexCoord4hNV");
LABEL_37:
    dword_70370338 = (int)wglGetProcAddress("glTexCoord4hvNV");
    dword_70370334 = (int)wglGetProcAddress("glVertex2hNV");
LABEL_38:
    dword_70370330 = (int)wglGetProcAddress("glVertex2hvNV");
    dword_7037032C = (int)wglGetProcAddress("glVertex3hNV");
LABEL_39:
    dword_70370328 = (int)wglGetProcAddress("glVertex3hvNV");
    dword_70370324 = (int)wglGetProcAddress("glVertex4hNV");
LABEL_40:
    dword_70370320 = (int)wglGetProcAddress("glVertex4hvNV");
    dword_7037031C = (int)wglGetProcAddress("glVertexAttrib1hNV");
LABEL_41:
    dword_70370318 = (int)wglGetProcAddress("glVertexAttrib1hvNV");
    dword_70370314 = (int)wglGetProcAddress("glVertexAttrib2hNV");
LABEL_42:
    dword_70370310 = (int)wglGetProcAddress("glVertexAttrib2hvNV");
    dword_7037030C = (int)wglGetProcAddress("glVertexAttrib3hNV");
LABEL_43:
    dword_70370308 = (int)wglGetProcAddress("glVertexAttrib3hvNV");
    dword_70370304 = (int)wglGetProcAddress("glVertexAttrib4hNV");
LABEL_44:
    dword_70370300 = (int)wglGetProcAddress("glVertexAttrib4hvNV");
    dword_703702FC = (int)wglGetProcAddress("glVertexAttribs1hvNV");
LABEL_45:
    dword_703702F8 = (int)wglGetProcAddress("glVertexAttribs2hvNV");
    dword_703702F4 = (int)wglGetProcAddress("glVertexAttribs3hvNV");
LABEL_46:
    dword_703702F0 = (int)wglGetProcAddress("glVertexAttribs4hvNV");
    dword_703702EC = (int)wglGetProcAddress("glVertexWeighthNV");
    goto LABEL_47;
  }
  v3 = wglGetProcAddress("glSecondaryColor3hvNV");
  dword_70370358 = (int)v3;
  dword_70370354 = (int)wglGetProcAddress("glTexCoord1hNV");
  if ( !dword_70370354 || !v3 )
    goto LABEL_34;
  v4 = wglGetProcAddress("glTexCoord1hvNV");
  dword_70370350 = (int)v4;
  dword_7037034C = (int)wglGetProcAddress("glTexCoord2hNV");
  if ( !dword_7037034C || !v4 )
    goto LABEL_35;
  v5 = wglGetProcAddress("glTexCoord2hvNV");
  dword_70370348 = (int)v5;
  dword_70370344 = (int)wglGetProcAddress("glTexCoord3hNV");
  if ( !dword_70370344 || !v5 )
    goto LABEL_36;
  v6 = wglGetProcAddress("glTexCoord3hvNV");
  dword_70370340 = (int)v6;
  dword_7037033C = (int)wglGetProcAddress("glTexCoord4hNV");
  if ( !dword_7037033C || !v6 )
    goto LABEL_37;
  v7 = wglGetProcAddress("glTexCoord4hvNV");
  dword_70370338 = (int)v7;
  dword_70370334 = (int)wglGetProcAddress("glVertex2hNV");
  if ( !dword_70370334 || !v7 )
    goto LABEL_38;
  v8 = wglGetProcAddress("glVertex2hvNV");
  dword_70370330 = (int)v8;
  dword_7037032C = (int)wglGetProcAddress("glVertex3hNV");
  if ( !dword_7037032C || !v8 )
    goto LABEL_39;
  v9 = wglGetProcAddress("glVertex3hvNV");
  dword_70370328 = (int)v9;
  dword_70370324 = (int)wglGetProcAddress("glVertex4hNV");
  if ( !dword_70370324 || !v9 )
    goto LABEL_40;
  v10 = wglGetProcAddress("glVertex4hvNV");
  dword_70370320 = (int)v10;
  dword_7037031C = (int)wglGetProcAddress("glVertexAttrib1hNV");
  if ( !dword_7037031C || !v10 )
    goto LABEL_41;
  v11 = wglGetProcAddress("glVertexAttrib1hvNV");
  dword_70370318 = (int)v11;
  dword_70370314 = (int)wglGetProcAddress("glVertexAttrib2hNV");
  if ( !dword_70370314 || !v11 )
    goto LABEL_42;
  v12 = wglGetProcAddress("glVertexAttrib2hvNV");
  dword_70370310 = (int)v12;
  dword_7037030C = (int)wglGetProcAddress("glVertexAttrib3hNV");
  if ( !dword_7037030C || !v12 )
    goto LABEL_43;
  v13 = wglGetProcAddress("glVertexAttrib3hvNV");
  dword_70370308 = (int)v13;
  dword_70370304 = (int)wglGetProcAddress("glVertexAttrib4hNV");
  if ( !dword_70370304 || !v13 )
    goto LABEL_44;
  v14 = wglGetProcAddress("glVertexAttrib4hvNV");
  dword_70370300 = (int)v14;
  dword_703702FC = (int)wglGetProcAddress("glVertexAttribs1hvNV");
  if ( !dword_703702FC || !v14 )
    goto LABEL_45;
  v15 = wglGetProcAddress("glVertexAttribs2hvNV");
  dword_703702F8 = (int)v15;
  dword_703702F4 = (int)wglGetProcAddress("glVertexAttribs3hvNV");
  if ( !dword_703702F4 || !v15 )
    goto LABEL_46;
  v16 = wglGetProcAddress("glVertexAttribs4hvNV");
  v17 = v16;
  dword_703702F0 = (int)v16;
  v18 = wglGetProcAddress("glVertexWeighthNV");
  dword_703702EC = (int)v18;
  if ( v17 && v18 )
  {
    dword_703702E8 = (int)wglGetProcAddress("glVertexWeighthvNV");
    return dword_703702E8 == 0;
  }
LABEL_47:
  dword_703702E8 = (int)wglGetProcAddress("glVertexWeighthvNV");
  return 1;
}
