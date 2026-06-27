bool sub_6F7D21F0()
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
  int (__stdcall *v20)(_DWORD); // [sp+1Ch] [bp-50h]@1
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
  int (__stdcall *v32)(_DWORD); // [sp+4Ch] [bp-20h]@1

  dword_70372414 = (int (__stdcall *)(_DWORD))wglGetProcAddress("glActiveTexture");
  v32 = dword_70372414;
  dword_70372410 = (int (__stdcall *)(_DWORD))wglGetProcAddress("glClientActiveTexture");
  v20 = dword_70372410;
  dword_7037240C = (int)wglGetProcAddress("glCompressedTexImage1D");
  v21 = dword_7037240C;
  dword_70372408 = (int)wglGetProcAddress("glCompressedTexImage2D");
  v22 = dword_70372408;
  dword_70372404 = (int)wglGetProcAddress("glCompressedTexImage3D");
  v23 = dword_70372404;
  dword_70372400 = (int)wglGetProcAddress("glCompressedTexSubImage1D");
  v24 = dword_70372400;
  dword_703723FC = (int)wglGetProcAddress("glCompressedTexSubImage2D");
  v25 = dword_703723FC;
  dword_703723F8 = (int)wglGetProcAddress("glCompressedTexSubImage3D");
  v26 = dword_703723F8;
  dword_703723F4 = (int)wglGetProcAddress("glGetCompressedTexImage");
  v27 = dword_703723F4;
  dword_703723F0 = (int)wglGetProcAddress("glLoadTransposeMatrixd");
  v28 = dword_703723F0;
  dword_703723EC = (int)wglGetProcAddress("glLoadTransposeMatrixf");
  v29 = dword_703723EC;
  v0 = wglGetProcAddress("glMultTransposeMatrixd");
  dword_703723E8 = (int)v0;
  v1 = wglGetProcAddress("glMultTransposeMatrixf");
  dword_703723E4 = (int)v1;
  v2 = wglGetProcAddress("glMultiTexCoord1d");
  dword_703723E0 = (int)v2;
  dword_703723DC = (int)wglGetProcAddress("glMultiTexCoord1dv");
  v31 = dword_703723DC;
  dword_703723D8 = (int)wglGetProcAddress("glMultiTexCoord1f");
  v30 = dword_703723D8;
  dword_703723D4 = (int)wglGetProcAddress("glMultiTexCoord1fv");
  if ( !dword_703723D4
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
    dword_703723D0 = (int)wglGetProcAddress("glMultiTexCoord1i");
    dword_703723CC = (int)wglGetProcAddress("glMultiTexCoord1iv");
LABEL_34:
    dword_703723C8 = (int)wglGetProcAddress("glMultiTexCoord1s");
    dword_703723C4 = (int)wglGetProcAddress("glMultiTexCoord1sv");
LABEL_35:
    dword_703723C0 = (int)wglGetProcAddress("glMultiTexCoord2d");
    dword_703723BC = (int)wglGetProcAddress("glMultiTexCoord2dv");
LABEL_36:
    dword_703723B8 = (int)wglGetProcAddress("glMultiTexCoord2f");
    dword_703723B4 = (int)wglGetProcAddress("glMultiTexCoord2fv");
LABEL_37:
    dword_703723B0 = (int)wglGetProcAddress("glMultiTexCoord2i");
    dword_703723AC = (int)wglGetProcAddress("glMultiTexCoord2iv");
LABEL_38:
    dword_703723A8 = (int)wglGetProcAddress("glMultiTexCoord2s");
    dword_703723A4 = (int)wglGetProcAddress("glMultiTexCoord2sv");
LABEL_39:
    dword_703723A0 = (int)wglGetProcAddress("glMultiTexCoord3d");
    dword_7037239C = (int)wglGetProcAddress("glMultiTexCoord3dv");
LABEL_40:
    dword_70372398 = (int)wglGetProcAddress("glMultiTexCoord3f");
    dword_70372394 = (int)wglGetProcAddress("glMultiTexCoord3fv");
LABEL_41:
    dword_70372390 = (int)wglGetProcAddress("glMultiTexCoord3i");
    dword_7037238C = (int)wglGetProcAddress("glMultiTexCoord3iv");
LABEL_42:
    dword_70372388 = (int)wglGetProcAddress("glMultiTexCoord3s");
    dword_70372384 = (int)wglGetProcAddress("glMultiTexCoord3sv");
LABEL_43:
    dword_70372380 = (int)wglGetProcAddress("glMultiTexCoord4d");
    dword_7037237C = (int)wglGetProcAddress("glMultiTexCoord4dv");
LABEL_44:
    dword_70372378 = (int)wglGetProcAddress("glMultiTexCoord4f");
    dword_70372374 = (int)wglGetProcAddress("glMultiTexCoord4fv");
LABEL_45:
    dword_70372370 = (int)wglGetProcAddress("glMultiTexCoord4i");
    dword_7037236C = (int)wglGetProcAddress("glMultiTexCoord4iv");
LABEL_46:
    dword_70372368 = (int)wglGetProcAddress("glMultiTexCoord4s");
    dword_70372364 = (int)wglGetProcAddress("glMultiTexCoord4sv");
    goto LABEL_47;
  }
  v3 = wglGetProcAddress("glMultiTexCoord1i");
  dword_703723D0 = (int)v3;
  dword_703723CC = (int)wglGetProcAddress("glMultiTexCoord1iv");
  if ( !dword_703723CC || !v3 )
    goto LABEL_34;
  v4 = wglGetProcAddress("glMultiTexCoord1s");
  dword_703723C8 = (int)v4;
  dword_703723C4 = (int)wglGetProcAddress("glMultiTexCoord1sv");
  if ( !dword_703723C4 || !v4 )
    goto LABEL_35;
  v5 = wglGetProcAddress("glMultiTexCoord2d");
  dword_703723C0 = (int)v5;
  dword_703723BC = (int)wglGetProcAddress("glMultiTexCoord2dv");
  if ( !dword_703723BC || !v5 )
    goto LABEL_36;
  v6 = wglGetProcAddress("glMultiTexCoord2f");
  dword_703723B8 = (int)v6;
  dword_703723B4 = (int)wglGetProcAddress("glMultiTexCoord2fv");
  if ( !dword_703723B4 || !v6 )
    goto LABEL_37;
  v7 = wglGetProcAddress("glMultiTexCoord2i");
  dword_703723B0 = (int)v7;
  dword_703723AC = (int)wglGetProcAddress("glMultiTexCoord2iv");
  if ( !dword_703723AC || !v7 )
    goto LABEL_38;
  v8 = wglGetProcAddress("glMultiTexCoord2s");
  dword_703723A8 = (int)v8;
  dword_703723A4 = (int)wglGetProcAddress("glMultiTexCoord2sv");
  if ( !dword_703723A4 || !v8 )
    goto LABEL_39;
  v9 = wglGetProcAddress("glMultiTexCoord3d");
  dword_703723A0 = (int)v9;
  dword_7037239C = (int)wglGetProcAddress("glMultiTexCoord3dv");
  if ( !dword_7037239C || !v9 )
    goto LABEL_40;
  v10 = wglGetProcAddress("glMultiTexCoord3f");
  dword_70372398 = (int)v10;
  dword_70372394 = (int)wglGetProcAddress("glMultiTexCoord3fv");
  if ( !dword_70372394 || !v10 )
    goto LABEL_41;
  v11 = wglGetProcAddress("glMultiTexCoord3i");
  dword_70372390 = (int)v11;
  dword_7037238C = (int)wglGetProcAddress("glMultiTexCoord3iv");
  if ( !dword_7037238C || !v11 )
    goto LABEL_42;
  v12 = wglGetProcAddress("glMultiTexCoord3s");
  dword_70372388 = (int)v12;
  dword_70372384 = (int)wglGetProcAddress("glMultiTexCoord3sv");
  if ( !dword_70372384 || !v12 )
    goto LABEL_43;
  v13 = wglGetProcAddress("glMultiTexCoord4d");
  dword_70372380 = (int)v13;
  dword_7037237C = (int)wglGetProcAddress("glMultiTexCoord4dv");
  if ( !dword_7037237C || !v13 )
    goto LABEL_44;
  v14 = wglGetProcAddress("glMultiTexCoord4f");
  dword_70372378 = (int)v14;
  dword_70372374 = (int)wglGetProcAddress("glMultiTexCoord4fv");
  if ( !dword_70372374 || !v14 )
    goto LABEL_45;
  v15 = wglGetProcAddress("glMultiTexCoord4i");
  dword_70372370 = (int)v15;
  dword_7037236C = (int)wglGetProcAddress("glMultiTexCoord4iv");
  if ( !dword_7037236C || !v15 )
    goto LABEL_46;
  v16 = wglGetProcAddress("glMultiTexCoord4s");
  v17 = v16;
  dword_70372368 = (int)v16;
  v18 = wglGetProcAddress("glMultiTexCoord4sv");
  dword_70372364 = (int)v18;
  if ( v17 && v18 )
  {
    dword_70372360 = (int)wglGetProcAddress("glSampleCoverage");
    return dword_70372360 == 0;
  }
LABEL_47:
  dword_70372360 = (int)wglGetProcAddress("glSampleCoverage");
  return 1;
}
