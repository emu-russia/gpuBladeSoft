bool sub_6F7E40A0()
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
  int v18; // [sp+14h] [bp-48h]@1
  int v19; // [sp+18h] [bp-44h]@1
  int v20; // [sp+1Ch] [bp-40h]@1
  int v21; // [sp+20h] [bp-3Ch]@1
  int v22; // [sp+24h] [bp-38h]@1
  int v23; // [sp+28h] [bp-34h]@1
  int v24; // [sp+2Ch] [bp-30h]@1
  int v25; // [sp+30h] [bp-2Ch]@1
  int v26; // [sp+34h] [bp-28h]@1
  int v27; // [sp+38h] [bp-24h]@1
  int v28; // [sp+3Ch] [bp-20h]@1

  dword_7036F9F4 = (int)wglGetProcAddress("glColor3fVertex3fSUN");
  v28 = dword_7036F9F4;
  dword_7036F9F0 = (int)wglGetProcAddress("glColor3fVertex3fvSUN");
  v18 = dword_7036F9F0;
  dword_7036F9EC = (int)wglGetProcAddress("glColor4fNormal3fVertex3fSUN");
  v19 = dword_7036F9EC;
  dword_7036F9E8 = (int)wglGetProcAddress("glColor4fNormal3fVertex3fvSUN");
  v20 = dword_7036F9E8;
  dword_7036F9E4 = (int)wglGetProcAddress("glColor4ubVertex2fSUN");
  v21 = dword_7036F9E4;
  dword_7036F9E0 = (int)wglGetProcAddress("glColor4ubVertex2fvSUN");
  v22 = dword_7036F9E0;
  dword_7036F9DC = (int)wglGetProcAddress("glColor4ubVertex3fSUN");
  v23 = dword_7036F9DC;
  dword_7036F9D8 = (int)wglGetProcAddress("glColor4ubVertex3fvSUN");
  v24 = dword_7036F9D8;
  dword_7036F9D4 = (int)wglGetProcAddress("glNormal3fVertex3fSUN");
  v25 = dword_7036F9D4;
  v0 = wglGetProcAddress("glNormal3fVertex3fvSUN");
  dword_7036F9D0 = (int)v0;
  v1 = wglGetProcAddress("glReplacementCodeuiColor3fVertex3fSUN");
  dword_7036F9CC = (int)v1;
  v2 = wglGetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN");
  dword_7036F9C8 = (int)v2;
  dword_7036F9C4 = (int)wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
  v27 = dword_7036F9C4;
  dword_7036F9C0 = (int)wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
  v26 = dword_7036F9C0;
  dword_7036F9BC = (int)wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN");
  if ( !dword_7036F9BC
    || v18 == 0
    || v19 == 0
    || v20 == 0
    || v21 == 0
    || v23 == 0
    || v24 == 0
    || v25 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v26 == 0
    || v27 == 0
    || v22 == 0
    || !v28 )
  {
    dword_7036F9B8 = (int)wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
    dword_7036F9B4 = (int)wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
LABEL_30:
    dword_7036F9B0 = (int)wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
    dword_7036F9AC = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
LABEL_31:
    dword_7036F9A8 = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
    dword_7036F9A4 = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
LABEL_32:
    dword_7036F9A0 = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
    dword_7036F99C = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
LABEL_33:
    dword_7036F998 = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
    dword_7036F994 = (int)wglGetProcAddress("glReplacementCodeuiVertex3fSUN");
LABEL_34:
    dword_7036F990 = (int)wglGetProcAddress("glReplacementCodeuiVertex3fvSUN");
    dword_7036F98C = (int)wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN");
LABEL_35:
    dword_7036F988 = (int)wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
    dword_7036F984 = (int)wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
LABEL_36:
    dword_7036F980 = (int)wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
    dword_7036F97C = (int)wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
LABEL_37:
    dword_7036F978 = (int)wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
    dword_7036F974 = (int)wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
LABEL_38:
    dword_7036F970 = (int)wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
    dword_7036F96C = (int)wglGetProcAddress("glTexCoord2fVertex3fSUN");
LABEL_39:
    dword_7036F968 = (int)wglGetProcAddress("glTexCoord2fVertex3fvSUN");
    dword_7036F964 = (int)wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
LABEL_40:
    dword_7036F960 = (int)wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
    dword_7036F95C = (int)wglGetProcAddress("glTexCoord4fVertex4fSUN");
    goto LABEL_41;
  }
  v3 = wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
  dword_7036F9B8 = (int)v3;
  dword_7036F9B4 = (int)wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
  if ( !dword_7036F9B4 || !v3 )
    goto LABEL_30;
  v4 = wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
  dword_7036F9B0 = (int)v4;
  dword_7036F9AC = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
  if ( !dword_7036F9AC || !v4 )
    goto LABEL_31;
  v5 = wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
  dword_7036F9A8 = (int)v5;
  dword_7036F9A4 = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
  if ( !dword_7036F9A4 || !v5 )
    goto LABEL_32;
  v6 = wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
  dword_7036F9A0 = (int)v6;
  dword_7036F99C = (int)wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
  if ( !dword_7036F99C || !v6 )
    goto LABEL_33;
  v7 = wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
  dword_7036F998 = (int)v7;
  dword_7036F994 = (int)wglGetProcAddress("glReplacementCodeuiVertex3fSUN");
  if ( !dword_7036F994 || !v7 )
    goto LABEL_34;
  v8 = wglGetProcAddress("glReplacementCodeuiVertex3fvSUN");
  dword_7036F990 = (int)v8;
  dword_7036F98C = (int)wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN");
  if ( !dword_7036F98C || !v8 )
    goto LABEL_35;
  v9 = wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
  dword_7036F988 = (int)v9;
  dword_7036F984 = (int)wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
  if ( !dword_7036F984 || !v9 )
    goto LABEL_36;
  v10 = wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
  dword_7036F980 = (int)v10;
  dword_7036F97C = (int)wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
  if ( !dword_7036F97C || !v10 )
    goto LABEL_37;
  v11 = wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
  dword_7036F978 = (int)v11;
  dword_7036F974 = (int)wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
  if ( !dword_7036F974 || !v11 )
    goto LABEL_38;
  v12 = wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
  dword_7036F970 = (int)v12;
  dword_7036F96C = (int)wglGetProcAddress("glTexCoord2fVertex3fSUN");
  if ( !dword_7036F96C || !v12 )
    goto LABEL_39;
  v13 = wglGetProcAddress("glTexCoord2fVertex3fvSUN");
  dword_7036F968 = (int)v13;
  dword_7036F964 = (int)wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
  if ( !dword_7036F964 || !v13 )
    goto LABEL_40;
  v14 = wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
  v15 = v14;
  dword_7036F960 = (int)v14;
  v16 = wglGetProcAddress("glTexCoord4fVertex4fSUN");
  dword_7036F95C = (int)v16;
  if ( v15 && v16 )
  {
    dword_7036F958 = (int)wglGetProcAddress("glTexCoord4fVertex4fvSUN");
    return dword_7036F958 == 0;
  }
LABEL_41:
  dword_7036F958 = (int)wglGetProcAddress("glTexCoord4fVertex4fvSUN");
  return 1;
}
