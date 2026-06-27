bool sub_6F7D2900()
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
  int v20; // [sp+18h] [bp-54h]@1
  int v21; // [sp+1Ch] [bp-50h]@1
  int v22; // [sp+20h] [bp-4Ch]@1
  int v23; // [sp+24h] [bp-48h]@1
  int v24; // [sp+28h] [bp-44h]@1
  int v25; // [sp+2Ch] [bp-40h]@1
  int v26; // [sp+30h] [bp-3Ch]@1
  int v27; // [sp+34h] [bp-38h]@1
  int v28; // [sp+38h] [bp-34h]@1
  int v29; // [sp+3Ch] [bp-30h]@1
  int v30; // [sp+40h] [bp-2Ch]@1
  int v31; // [sp+44h] [bp-28h]@1
  int v32; // [sp+48h] [bp-24h]@1
  int v33; // [sp+4Ch] [bp-20h]@1

  dword_7037235C = (int)wglGetProcAddress("glBlendColor");
  v33 = dword_7037235C;
  dword_70372358 = (int)wglGetProcAddress("glBlendEquation");
  v20 = dword_70372358;
  dword_70372354 = (int)wglGetProcAddress("glBlendFuncSeparate");
  v21 = dword_70372354;
  dword_70372350 = (int)wglGetProcAddress("glFogCoordPointer");
  v22 = dword_70372350;
  dword_7037234C = (int)wglGetProcAddress("glFogCoordd");
  v23 = dword_7037234C;
  dword_70372348 = (int)wglGetProcAddress("glFogCoorddv");
  v24 = dword_70372348;
  dword_70372344 = (int)wglGetProcAddress("glFogCoordf");
  v25 = dword_70372344;
  dword_70372340 = (int)wglGetProcAddress("glFogCoordfv");
  v26 = dword_70372340;
  dword_7037233C = (int)wglGetProcAddress("glMultiDrawArrays");
  v27 = dword_7037233C;
  dword_70372338 = (int)wglGetProcAddress("glMultiDrawElements");
  v28 = dword_70372338;
  dword_70372334 = (int)wglGetProcAddress("glPointParameterf");
  v29 = dword_70372334;
  dword_70372330 = (int)wglGetProcAddress("glPointParameterfv");
  v30 = dword_70372330;
  v0 = wglGetProcAddress("glPointParameteri");
  dword_7037232C = (int)v0;
  v1 = wglGetProcAddress("glPointParameteriv");
  dword_70372328 = (int)v1;
  v2 = wglGetProcAddress("glSecondaryColor3b");
  dword_70372324 = (int)v2;
  dword_70372320 = (int)wglGetProcAddress("glSecondaryColor3bv");
  v32 = dword_70372320;
  dword_7037231C = (int)wglGetProcAddress("glSecondaryColor3d");
  v31 = dword_7037231C;
  dword_70372318 = (int)wglGetProcAddress("glSecondaryColor3dv");
  if ( !dword_70372318
    || v20 == 0
    || v21 == 0
    || v22 == 0
    || v23 == 0
    || v25 == 0
    || v26 == 0
    || v27 == 0
    || v28 == 0
    || v29 == 0
    || v30 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v32 == 0
    || v31 == 0
    || v24 == 0
    || !v33 )
  {
    dword_70372314 = (int)wglGetProcAddress("glSecondaryColor3f");
    dword_70372310 = (int)wglGetProcAddress("glSecondaryColor3fv");
LABEL_34:
    dword_7037230C = (int)wglGetProcAddress("glSecondaryColor3i");
    dword_70372308 = (int)wglGetProcAddress("glSecondaryColor3iv");
LABEL_35:
    dword_70372304 = (int)wglGetProcAddress("glSecondaryColor3s");
    dword_70372300 = (int)wglGetProcAddress("glSecondaryColor3sv");
LABEL_36:
    dword_703722FC = (int)wglGetProcAddress("glSecondaryColor3ub");
    dword_703722F8 = (int)wglGetProcAddress("glSecondaryColor3ubv");
LABEL_37:
    dword_703722F4 = (int)wglGetProcAddress("glSecondaryColor3ui");
    dword_703722F0 = (int)wglGetProcAddress("glSecondaryColor3uiv");
LABEL_38:
    dword_703722EC = (int)wglGetProcAddress("glSecondaryColor3us");
    dword_703722E8 = (int)wglGetProcAddress("glSecondaryColor3usv");
LABEL_39:
    dword_703722E4 = (int)wglGetProcAddress("glSecondaryColorPointer");
    dword_703722E0 = (int)wglGetProcAddress("glWindowPos2d");
LABEL_40:
    dword_703722DC = (int)wglGetProcAddress("glWindowPos2dv");
    dword_703722D8 = (int)wglGetProcAddress("glWindowPos2f");
LABEL_41:
    dword_703722D4 = (int)wglGetProcAddress("glWindowPos2fv");
    dword_703722D0 = (int)wglGetProcAddress("glWindowPos2i");
LABEL_42:
    dword_703722CC = (int)wglGetProcAddress("glWindowPos2iv");
    dword_703722C8 = (int)wglGetProcAddress("glWindowPos2s");
LABEL_43:
    dword_703722C4 = (int)wglGetProcAddress("glWindowPos2sv");
    dword_703722C0 = (int)wglGetProcAddress("glWindowPos3d");
LABEL_44:
    dword_703722BC = (int)wglGetProcAddress("glWindowPos3dv");
    dword_703722B8 = (int)wglGetProcAddress("glWindowPos3f");
LABEL_45:
    dword_703722B4 = (int)wglGetProcAddress("glWindowPos3fv");
    dword_703722B0 = (int)wglGetProcAddress("glWindowPos3i");
LABEL_46:
    dword_703722AC = (int)wglGetProcAddress("glWindowPos3iv");
    dword_703722A8 = (int)wglGetProcAddress("glWindowPos3s");
    goto LABEL_47;
  }
  v3 = wglGetProcAddress("glSecondaryColor3f");
  dword_70372314 = (int)v3;
  dword_70372310 = (int)wglGetProcAddress("glSecondaryColor3fv");
  if ( !dword_70372310 || !v3 )
    goto LABEL_34;
  v4 = wglGetProcAddress("glSecondaryColor3i");
  dword_7037230C = (int)v4;
  dword_70372308 = (int)wglGetProcAddress("glSecondaryColor3iv");
  if ( !dword_70372308 || !v4 )
    goto LABEL_35;
  v5 = wglGetProcAddress("glSecondaryColor3s");
  dword_70372304 = (int)v5;
  dword_70372300 = (int)wglGetProcAddress("glSecondaryColor3sv");
  if ( !dword_70372300 || !v5 )
    goto LABEL_36;
  v6 = wglGetProcAddress("glSecondaryColor3ub");
  dword_703722FC = (int)v6;
  dword_703722F8 = (int)wglGetProcAddress("glSecondaryColor3ubv");
  if ( !dword_703722F8 || !v6 )
    goto LABEL_37;
  v7 = wglGetProcAddress("glSecondaryColor3ui");
  dword_703722F4 = (int)v7;
  dword_703722F0 = (int)wglGetProcAddress("glSecondaryColor3uiv");
  if ( !dword_703722F0 || !v7 )
    goto LABEL_38;
  v8 = wglGetProcAddress("glSecondaryColor3us");
  dword_703722EC = (int)v8;
  dword_703722E8 = (int)wglGetProcAddress("glSecondaryColor3usv");
  if ( !dword_703722E8 || !v8 )
    goto LABEL_39;
  v9 = wglGetProcAddress("glSecondaryColorPointer");
  dword_703722E4 = (int)v9;
  dword_703722E0 = (int)wglGetProcAddress("glWindowPos2d");
  if ( !dword_703722E0 || !v9 )
    goto LABEL_40;
  v10 = wglGetProcAddress("glWindowPos2dv");
  dword_703722DC = (int)v10;
  dword_703722D8 = (int)wglGetProcAddress("glWindowPos2f");
  if ( !dword_703722D8 || !v10 )
    goto LABEL_41;
  v11 = wglGetProcAddress("glWindowPos2fv");
  dword_703722D4 = (int)v11;
  dword_703722D0 = (int)wglGetProcAddress("glWindowPos2i");
  if ( !dword_703722D0 || !v11 )
    goto LABEL_42;
  v12 = wglGetProcAddress("glWindowPos2iv");
  dword_703722CC = (int)v12;
  dword_703722C8 = (int)wglGetProcAddress("glWindowPos2s");
  if ( !dword_703722C8 || !v12 )
    goto LABEL_43;
  v13 = wglGetProcAddress("glWindowPos2sv");
  dword_703722C4 = (int)v13;
  dword_703722C0 = (int)wglGetProcAddress("glWindowPos3d");
  if ( !dword_703722C0 || !v13 )
    goto LABEL_44;
  v14 = wglGetProcAddress("glWindowPos3dv");
  dword_703722BC = (int)v14;
  dword_703722B8 = (int)wglGetProcAddress("glWindowPos3f");
  if ( !dword_703722B8 || !v14 )
    goto LABEL_45;
  v15 = wglGetProcAddress("glWindowPos3fv");
  dword_703722B4 = (int)v15;
  dword_703722B0 = (int)wglGetProcAddress("glWindowPos3i");
  if ( !dword_703722B0 || !v15 )
    goto LABEL_46;
  v16 = wglGetProcAddress("glWindowPos3iv");
  v17 = v16;
  dword_703722AC = (int)v16;
  v18 = wglGetProcAddress("glWindowPos3s");
  dword_703722A8 = (int)v18;
  if ( v17 && v18 )
  {
    dword_703722A4 = (int)wglGetProcAddress("glWindowPos3sv");
    return dword_703722A4 == 0;
  }
LABEL_47:
  dword_703722A4 = (int)wglGetProcAddress("glWindowPos3sv");
  return 1;
}
