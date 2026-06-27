bool sub_6F7D9700()
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
  int v17; // [sp+14h] [bp-48h]@1
  int v18; // [sp+18h] [bp-44h]@1
  int v19; // [sp+1Ch] [bp-40h]@1
  int v20; // [sp+20h] [bp-3Ch]@1
  int v21; // [sp+24h] [bp-38h]@1
  int v22; // [sp+28h] [bp-34h]@1
  int v23; // [sp+2Ch] [bp-30h]@1
  int v24; // [sp+30h] [bp-2Ch]@1
  int v25; // [sp+34h] [bp-28h]@1
  int v26; // [sp+38h] [bp-24h]@1
  int v27; // [sp+3Ch] [bp-20h]@1

  dword_70371350 = (int)wglGetProcAddress("glColorP3ui");
  v27 = dword_70371350;
  dword_7037134C = (int)wglGetProcAddress("glColorP3uiv");
  v17 = dword_7037134C;
  dword_70371348 = (int)wglGetProcAddress("glColorP4ui");
  v18 = dword_70371348;
  dword_70371344 = (int)wglGetProcAddress("glColorP4uiv");
  v19 = dword_70371344;
  dword_70371340 = (int)wglGetProcAddress("glMultiTexCoordP1ui");
  v20 = dword_70371340;
  dword_7037133C = (int)wglGetProcAddress("glMultiTexCoordP1uiv");
  v21 = dword_7037133C;
  dword_70371338 = (int)wglGetProcAddress("glMultiTexCoordP2ui");
  v22 = dword_70371338;
  dword_70371334 = (int)wglGetProcAddress("glMultiTexCoordP2uiv");
  v23 = dword_70371334;
  dword_70371330 = (int)wglGetProcAddress("glMultiTexCoordP3ui");
  v24 = dword_70371330;
  v0 = wglGetProcAddress("glMultiTexCoordP3uiv");
  dword_7037132C = (int)v0;
  v1 = wglGetProcAddress("glMultiTexCoordP4ui");
  dword_70371328 = (int)v1;
  v2 = wglGetProcAddress("glMultiTexCoordP4uiv");
  dword_70371324 = (int)v2;
  dword_70371320 = (int)wglGetProcAddress("glNormalP3ui");
  v26 = dword_70371320;
  dword_7037131C = (int)wglGetProcAddress("glNormalP3uiv");
  v25 = dword_7037131C;
  dword_70371318 = (int)wglGetProcAddress("glSecondaryColorP3ui");
  if ( !dword_70371318
    || v17 == 0
    || v18 == 0
    || v19 == 0
    || v20 == 0
    || v22 == 0
    || v23 == 0
    || v24 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v26 == 0
    || v25 == 0
    || v21 == 0
    || !v27 )
  {
    dword_70371314 = (int)wglGetProcAddress("glSecondaryColorP3uiv");
    dword_70371310 = (int)wglGetProcAddress("glTexCoordP1ui");
LABEL_28:
    dword_7037130C = (int)wglGetProcAddress("glTexCoordP1uiv");
    dword_70371308 = (int)wglGetProcAddress("glTexCoordP2ui");
LABEL_29:
    dword_70371304 = (int)wglGetProcAddress("glTexCoordP2uiv");
    dword_70371300 = (int)wglGetProcAddress("glTexCoordP3ui");
LABEL_30:
    dword_703712FC = (int)wglGetProcAddress("glTexCoordP3uiv");
    dword_703712F8 = (int)wglGetProcAddress("glTexCoordP4ui");
LABEL_31:
    dword_703712F4 = (int)wglGetProcAddress("glTexCoordP4uiv");
    dword_703712F0 = (int)wglGetProcAddress("glVertexAttribP1ui");
LABEL_32:
    dword_703712EC = (int)wglGetProcAddress("glVertexAttribP1uiv");
    dword_703712E8 = (int)wglGetProcAddress("glVertexAttribP2ui");
LABEL_33:
    dword_703712E4 = (int)wglGetProcAddress("glVertexAttribP2uiv");
    dword_703712E0 = (int)wglGetProcAddress("glVertexAttribP3ui");
LABEL_34:
    dword_703712DC = (int)wglGetProcAddress("glVertexAttribP3uiv");
    dword_703712D8 = (int)wglGetProcAddress("glVertexAttribP4ui");
LABEL_35:
    dword_703712D4 = (int)wglGetProcAddress("glVertexAttribP4uiv");
    dword_703712D0 = (int)wglGetProcAddress("glVertexP2ui");
LABEL_36:
    dword_703712CC = (int)wglGetProcAddress("glVertexP2uiv");
    dword_703712C8 = (int)wglGetProcAddress("glVertexP3ui");
LABEL_37:
    dword_703712C4 = (int)wglGetProcAddress("glVertexP3uiv");
    dword_703712C0 = (int)wglGetProcAddress("glVertexP4ui");
    goto LABEL_38;
  }
  v3 = wglGetProcAddress("glSecondaryColorP3uiv");
  dword_70371314 = (int)v3;
  dword_70371310 = (int)wglGetProcAddress("glTexCoordP1ui");
  if ( !dword_70371310 || !v3 )
    goto LABEL_28;
  v4 = wglGetProcAddress("glTexCoordP1uiv");
  dword_7037130C = (int)v4;
  dword_70371308 = (int)wglGetProcAddress("glTexCoordP2ui");
  if ( !dword_70371308 || !v4 )
    goto LABEL_29;
  v5 = wglGetProcAddress("glTexCoordP2uiv");
  dword_70371304 = (int)v5;
  dword_70371300 = (int)wglGetProcAddress("glTexCoordP3ui");
  if ( !dword_70371300 || !v5 )
    goto LABEL_30;
  v6 = wglGetProcAddress("glTexCoordP3uiv");
  dword_703712FC = (int)v6;
  dword_703712F8 = (int)wglGetProcAddress("glTexCoordP4ui");
  if ( !dword_703712F8 || !v6 )
    goto LABEL_31;
  v7 = wglGetProcAddress("glTexCoordP4uiv");
  dword_703712F4 = (int)v7;
  dword_703712F0 = (int)wglGetProcAddress("glVertexAttribP1ui");
  if ( !dword_703712F0 || !v7 )
    goto LABEL_32;
  v8 = wglGetProcAddress("glVertexAttribP1uiv");
  dword_703712EC = (int)v8;
  dword_703712E8 = (int)wglGetProcAddress("glVertexAttribP2ui");
  if ( !dword_703712E8 || !v8 )
    goto LABEL_33;
  v9 = wglGetProcAddress("glVertexAttribP2uiv");
  dword_703712E4 = (int)v9;
  dword_703712E0 = (int)wglGetProcAddress("glVertexAttribP3ui");
  if ( !dword_703712E0 || !v9 )
    goto LABEL_34;
  v10 = wglGetProcAddress("glVertexAttribP3uiv");
  dword_703712DC = (int)v10;
  dword_703712D8 = (int)wglGetProcAddress("glVertexAttribP4ui");
  if ( !dword_703712D8 || !v10 )
    goto LABEL_35;
  v11 = wglGetProcAddress("glVertexAttribP4uiv");
  dword_703712D4 = (int)v11;
  dword_703712D0 = (int)wglGetProcAddress("glVertexP2ui");
  if ( !dword_703712D0 || !v11 )
    goto LABEL_36;
  v12 = wglGetProcAddress("glVertexP2uiv");
  dword_703712CC = (int)v12;
  dword_703712C8 = (int)wglGetProcAddress("glVertexP3ui");
  if ( !dword_703712C8 || !v12 )
    goto LABEL_37;
  v13 = wglGetProcAddress("glVertexP3uiv");
  v14 = v13;
  dword_703712C4 = (int)v13;
  v15 = wglGetProcAddress("glVertexP4ui");
  dword_703712C0 = (int)v15;
  if ( v14 && v15 )
  {
    dword_703712BC = (int)wglGetProcAddress("glVertexP4uiv");
    return dword_703712BC == 0;
  }
LABEL_38:
  dword_703712BC = (int)wglGetProcAddress("glVertexP4uiv");
  return 1;
}
