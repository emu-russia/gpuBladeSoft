bool sub_6F7E35A0()
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
  PROC v11; // eax@20
  PROC v12; // esi@20
  PROC v13; // eax@20
  int v15; // [sp+10h] [bp-3Ch]@1
  int v16; // [sp+14h] [bp-38h]@1
  int v17; // [sp+18h] [bp-34h]@1
  int v18; // [sp+1Ch] [bp-30h]@1
  int v19; // [sp+20h] [bp-2Ch]@1
  int v20; // [sp+24h] [bp-28h]@1
  int v21; // [sp+28h] [bp-24h]@1
  int v22; // [sp+2Ch] [bp-20h]@1

  dword_7036FC7C = (int)wglGetProcAddress("glAlphaFuncx");
  v22 = dword_7036FC7C;
  dword_7036FC78 = (int)wglGetProcAddress("glClearColorx");
  v15 = dword_7036FC78;
  dword_7036FC74 = (int)wglGetProcAddress("glClearDepthx");
  v16 = dword_7036FC74;
  dword_7036FC70 = (int)wglGetProcAddress("glColor4x");
  v17 = dword_7036FC70;
  dword_7036FC6C = (int)wglGetProcAddress("glDepthRangex");
  v18 = dword_7036FC6C;
  dword_7036FC68 = (int)wglGetProcAddress("glFogx");
  v19 = dword_7036FC68;
  v0 = wglGetProcAddress("glFogxv");
  dword_7036FC64 = (int)v0;
  v1 = wglGetProcAddress("glFrustumf");
  dword_7036FC60 = (int)v1;
  v2 = wglGetProcAddress("glFrustumx");
  dword_7036FC5C = (int)v2;
  dword_7036FC58 = (int)wglGetProcAddress("glLightModelx");
  v21 = dword_7036FC58;
  dword_7036FC54 = (int)wglGetProcAddress("glLightModelxv");
  v20 = dword_7036FC54;
  dword_7036FC50 = (int)wglGetProcAddress("glLightx");
  if ( !dword_7036FC50
    || v15 == 0
    || v16 == 0
    || v17 == 0
    || v18 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v20 == 0
    || v21 == 0
    || v19 == 0
    || !v22 )
  {
    dword_7036FC4C = (int)wglGetProcAddress("glLightxv");
    dword_7036FC48 = (int)wglGetProcAddress("glLineWidthx");
LABEL_24:
    dword_7036FC44 = (int)wglGetProcAddress("glLoadMatrixx");
    dword_7036FC40 = (int)wglGetProcAddress("glMaterialx");
LABEL_25:
    dword_7036FC3C = (int)wglGetProcAddress("glMaterialxv");
    dword_7036FC38 = (int)wglGetProcAddress("glMultMatrixx");
LABEL_26:
    dword_7036FC34 = (int)wglGetProcAddress("glMultiTexCoord4x");
    dword_7036FC30 = (int)wglGetProcAddress("glNormal3x");
LABEL_27:
    dword_7036FC2C = (int)wglGetProcAddress("glOrthof");
    dword_7036FC28 = (int)wglGetProcAddress("glOrthox");
LABEL_28:
    dword_7036FC24 = (int)wglGetProcAddress("glPointSizex");
    dword_7036FC20 = (int)wglGetProcAddress("glPolygonOffsetx");
LABEL_29:
    dword_7036FC1C = (int)wglGetProcAddress("glRotatex");
    dword_7036FC18 = (int)wglGetProcAddress("glSampleCoveragex");
LABEL_30:
    dword_7036FC14 = (int)wglGetProcAddress("glScalex");
    dword_7036FC10 = (int)wglGetProcAddress("glTexEnvx");
LABEL_31:
    dword_7036FC0C = (int)wglGetProcAddress("glTexEnvxv");
    dword_7036FC08 = (int)wglGetProcAddress("glTexParameterx");
    goto LABEL_32;
  }
  v3 = wglGetProcAddress("glLightxv");
  dword_7036FC4C = (int)v3;
  dword_7036FC48 = (int)wglGetProcAddress("glLineWidthx");
  if ( !dword_7036FC48 || !v3 )
    goto LABEL_24;
  v4 = wglGetProcAddress("glLoadMatrixx");
  dword_7036FC44 = (int)v4;
  dword_7036FC40 = (int)wglGetProcAddress("glMaterialx");
  if ( !dword_7036FC40 || !v4 )
    goto LABEL_25;
  v5 = wglGetProcAddress("glMaterialxv");
  dword_7036FC3C = (int)v5;
  dword_7036FC38 = (int)wglGetProcAddress("glMultMatrixx");
  if ( !dword_7036FC38 || !v5 )
    goto LABEL_26;
  v6 = wglGetProcAddress("glMultiTexCoord4x");
  dword_7036FC34 = (int)v6;
  dword_7036FC30 = (int)wglGetProcAddress("glNormal3x");
  if ( !dword_7036FC30 || !v6 )
    goto LABEL_27;
  v7 = wglGetProcAddress("glOrthof");
  dword_7036FC2C = (int)v7;
  dword_7036FC28 = (int)wglGetProcAddress("glOrthox");
  if ( !dword_7036FC28 || !v7 )
    goto LABEL_28;
  v8 = wglGetProcAddress("glPointSizex");
  dword_7036FC24 = (int)v8;
  dword_7036FC20 = (int)wglGetProcAddress("glPolygonOffsetx");
  if ( !dword_7036FC20 || !v8 )
    goto LABEL_29;
  v9 = wglGetProcAddress("glRotatex");
  dword_7036FC1C = (int)v9;
  dword_7036FC18 = (int)wglGetProcAddress("glSampleCoveragex");
  if ( !dword_7036FC18 || !v9 )
    goto LABEL_30;
  v10 = wglGetProcAddress("glScalex");
  dword_7036FC14 = (int)v10;
  dword_7036FC10 = (int)wglGetProcAddress("glTexEnvx");
  if ( !dword_7036FC10 || !v10 )
    goto LABEL_31;
  v11 = wglGetProcAddress("glTexEnvxv");
  v12 = v11;
  dword_7036FC0C = (int)v11;
  v13 = wglGetProcAddress("glTexParameterx");
  dword_7036FC08 = (int)v13;
  if ( v12 && v13 )
  {
    dword_7036FC04 = (int)wglGetProcAddress("glTranslatex");
    return dword_7036FC04 == 0;
  }
LABEL_32:
  dword_7036FC04 = (int)wglGetProcAddress("glTranslatex");
  return 1;
}
