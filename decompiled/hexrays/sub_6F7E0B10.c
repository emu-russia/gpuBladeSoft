bool sub_6F7E0B10()
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

  dword_70370274 = (int)wglGetProcAddress("glCopyPathNV");
  v44 = dword_70370274;
  dword_70370270 = (int)wglGetProcAddress("glCoverFillPathInstancedNV");
  v26 = dword_70370270;
  dword_7037026C = (int)wglGetProcAddress("glCoverFillPathNV");
  v27 = dword_7037026C;
  dword_70370268 = (int)wglGetProcAddress("glCoverStrokePathInstancedNV");
  v28 = dword_70370268;
  dword_70370264 = (int)wglGetProcAddress("glCoverStrokePathNV");
  v29 = dword_70370264;
  dword_70370260 = (int)wglGetProcAddress("glDeletePathsNV");
  v30 = dword_70370260;
  dword_7037025C = (int)wglGetProcAddress("glGenPathsNV");
  v31 = dword_7037025C;
  dword_70370258 = (int)wglGetProcAddress("glGetPathColorGenfvNV");
  v32 = dword_70370258;
  dword_70370254 = (int)wglGetProcAddress("glGetPathColorGenivNV");
  v33 = dword_70370254;
  dword_70370250 = (int)wglGetProcAddress("glGetPathCommandsNV");
  v34 = dword_70370250;
  dword_7037024C = (int)wglGetProcAddress("glGetPathCoordsNV");
  v35 = dword_7037024C;
  dword_70370248 = (int)wglGetProcAddress("glGetPathDashArrayNV");
  v36 = dword_70370248;
  dword_70370244 = (int)wglGetProcAddress("glGetPathLengthNV");
  v37 = dword_70370244;
  dword_70370240 = (int)wglGetProcAddress("glGetPathMetricRangeNV");
  v38 = dword_70370240;
  dword_7037023C = (int)wglGetProcAddress("glGetPathMetricsNV");
  v39 = dword_7037023C;
  dword_70370238 = (int)wglGetProcAddress("glGetPathParameterfvNV");
  v40 = dword_70370238;
  dword_70370234 = (int)wglGetProcAddress("glGetPathParameterivNV");
  v41 = dword_70370234;
  v0 = wglGetProcAddress("glGetPathSpacingNV");
  dword_70370230 = (int)v0;
  v1 = wglGetProcAddress("glGetPathTexGenfvNV");
  dword_7037022C = (int)v1;
  v2 = wglGetProcAddress("glGetPathTexGenivNV");
  dword_70370228 = (int)v2;
  dword_70370224 = (int)wglGetProcAddress("glGetProgramResourcefvNV");
  v43 = dword_70370224;
  dword_70370220 = (int)wglGetProcAddress("glInterpolatePathsNV");
  v42 = dword_70370220;
  dword_7037021C = (int)wglGetProcAddress("glIsPathNV");
  if ( !dword_7037021C
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
    dword_70370218 = (int)wglGetProcAddress("glIsPointInFillPathNV");
    dword_70370214 = (int)wglGetProcAddress("glIsPointInStrokePathNV");
LABEL_46:
    dword_70370210 = (int)wglGetProcAddress("glMatrixLoad3x2fNV");
    dword_7037020C = (int)wglGetProcAddress("glMatrixLoad3x3fNV");
LABEL_47:
    dword_70370208 = (int)wglGetProcAddress("glMatrixLoadTranspose3x3fNV");
    dword_70370204 = (int)wglGetProcAddress("glMatrixMult3x2fNV");
LABEL_48:
    dword_70370200 = (int)wglGetProcAddress("glMatrixMult3x3fNV");
    dword_703701FC = (int)wglGetProcAddress("glMatrixMultTranspose3x3fNV");
LABEL_49:
    dword_703701F8 = (int)wglGetProcAddress("glPathColorGenNV");
    dword_703701F4 = (int)wglGetProcAddress("glPathCommandsNV");
LABEL_50:
    dword_703701F0 = (int)wglGetProcAddress("glPathCoordsNV");
    dword_703701EC = (int)wglGetProcAddress("glPathCoverDepthFuncNV");
LABEL_51:
    dword_703701E8 = (int)wglGetProcAddress("glPathDashArrayNV");
    dword_703701E4 = (int)wglGetProcAddress("glPathFogGenNV");
LABEL_52:
    dword_703701E0 = (int)wglGetProcAddress("glPathGlyphIndexArrayNV");
    dword_703701DC = (int)wglGetProcAddress("glPathGlyphIndexRangeNV");
LABEL_53:
    dword_703701D8 = (int)wglGetProcAddress("glPathGlyphRangeNV");
    dword_703701D4 = (int)wglGetProcAddress("glPathGlyphsNV");
LABEL_54:
    dword_703701D0 = (int)wglGetProcAddress("glPathMemoryGlyphIndexArrayNV");
    dword_703701CC = (int)wglGetProcAddress("glPathParameterfNV");
LABEL_55:
    dword_703701C8 = (int)wglGetProcAddress("glPathParameterfvNV");
    dword_703701C4 = (int)wglGetProcAddress("glPathParameteriNV");
LABEL_56:
    dword_703701C0 = (int)wglGetProcAddress("glPathParameterivNV");
    dword_703701BC = (int)wglGetProcAddress("glPathStencilDepthOffsetNV");
LABEL_57:
    dword_703701B8 = (int)wglGetProcAddress("glPathStencilFuncNV");
    dword_703701B4 = (int)wglGetProcAddress("glPathStringNV");
LABEL_58:
    dword_703701B0 = (int)wglGetProcAddress("glPathSubCommandsNV");
    dword_703701AC = (int)wglGetProcAddress("glPathSubCoordsNV");
LABEL_59:
    dword_703701A8 = (int)wglGetProcAddress("glPathTexGenNV");
    dword_703701A4 = (int)wglGetProcAddress("glPointAlongPathNV");
LABEL_60:
    dword_703701A0 = (int)wglGetProcAddress("glProgramPathFragmentInputGenNV");
    dword_7037019C = (int)wglGetProcAddress("glStencilFillPathInstancedNV");
LABEL_61:
    dword_70370198 = (int)wglGetProcAddress("glStencilFillPathNV");
    dword_70370194 = (int)wglGetProcAddress("glStencilStrokePathInstancedNV");
LABEL_62:
    dword_70370190 = (int)wglGetProcAddress("glStencilStrokePathNV");
    dword_7037018C = (int)wglGetProcAddress("glStencilThenCoverFillPathInstancedNV");
LABEL_63:
    dword_70370188 = (int)wglGetProcAddress("glStencilThenCoverFillPathNV");
    dword_70370184 = (int)wglGetProcAddress("glStencilThenCoverStrokePathInstancedNV");
LABEL_64:
    dword_70370180 = (int)wglGetProcAddress("glStencilThenCoverStrokePathNV");
    dword_7037017C = (int)wglGetProcAddress("glTransformPathNV");
    goto LABEL_65;
  }
  v3 = wglGetProcAddress("glIsPointInFillPathNV");
  dword_70370218 = (int)v3;
  dword_70370214 = (int)wglGetProcAddress("glIsPointInStrokePathNV");
  if ( !dword_70370214 || !v3 )
    goto LABEL_46;
  v4 = wglGetProcAddress("glMatrixLoad3x2fNV");
  dword_70370210 = (int)v4;
  dword_7037020C = (int)wglGetProcAddress("glMatrixLoad3x3fNV");
  if ( !dword_7037020C || !v4 )
    goto LABEL_47;
  v5 = wglGetProcAddress("glMatrixLoadTranspose3x3fNV");
  dword_70370208 = (int)v5;
  dword_70370204 = (int)wglGetProcAddress("glMatrixMult3x2fNV");
  if ( !dword_70370204 || !v5 )
    goto LABEL_48;
  v6 = wglGetProcAddress("glMatrixMult3x3fNV");
  dword_70370200 = (int)v6;
  dword_703701FC = (int)wglGetProcAddress("glMatrixMultTranspose3x3fNV");
  if ( !dword_703701FC || !v6 )
    goto LABEL_49;
  v7 = wglGetProcAddress("glPathColorGenNV");
  dword_703701F8 = (int)v7;
  dword_703701F4 = (int)wglGetProcAddress("glPathCommandsNV");
  if ( !dword_703701F4 || !v7 )
    goto LABEL_50;
  v8 = wglGetProcAddress("glPathCoordsNV");
  dword_703701F0 = (int)v8;
  dword_703701EC = (int)wglGetProcAddress("glPathCoverDepthFuncNV");
  if ( !dword_703701EC || !v8 )
    goto LABEL_51;
  v9 = wglGetProcAddress("glPathDashArrayNV");
  dword_703701E8 = (int)v9;
  dword_703701E4 = (int)wglGetProcAddress("glPathFogGenNV");
  if ( !dword_703701E4 || !v9 )
    goto LABEL_52;
  v10 = wglGetProcAddress("glPathGlyphIndexArrayNV");
  dword_703701E0 = (int)v10;
  dword_703701DC = (int)wglGetProcAddress("glPathGlyphIndexRangeNV");
  if ( !dword_703701DC || !v10 )
    goto LABEL_53;
  v11 = wglGetProcAddress("glPathGlyphRangeNV");
  dword_703701D8 = (int)v11;
  dword_703701D4 = (int)wglGetProcAddress("glPathGlyphsNV");
  if ( !dword_703701D4 || !v11 )
    goto LABEL_54;
  v12 = wglGetProcAddress("glPathMemoryGlyphIndexArrayNV");
  dword_703701D0 = (int)v12;
  dword_703701CC = (int)wglGetProcAddress("glPathParameterfNV");
  if ( !dword_703701CC || !v12 )
    goto LABEL_55;
  v13 = wglGetProcAddress("glPathParameterfvNV");
  dword_703701C8 = (int)v13;
  dword_703701C4 = (int)wglGetProcAddress("glPathParameteriNV");
  if ( !dword_703701C4 || !v13 )
    goto LABEL_56;
  v14 = wglGetProcAddress("glPathParameterivNV");
  dword_703701C0 = (int)v14;
  dword_703701BC = (int)wglGetProcAddress("glPathStencilDepthOffsetNV");
  if ( !dword_703701BC || !v14 )
    goto LABEL_57;
  v15 = wglGetProcAddress("glPathStencilFuncNV");
  dword_703701B8 = (int)v15;
  dword_703701B4 = (int)wglGetProcAddress("glPathStringNV");
  if ( !dword_703701B4 || !v15 )
    goto LABEL_58;
  v16 = wglGetProcAddress("glPathSubCommandsNV");
  dword_703701B0 = (int)v16;
  dword_703701AC = (int)wglGetProcAddress("glPathSubCoordsNV");
  if ( !dword_703701AC || !v16 )
    goto LABEL_59;
  v17 = wglGetProcAddress("glPathTexGenNV");
  dword_703701A8 = (int)v17;
  dword_703701A4 = (int)wglGetProcAddress("glPointAlongPathNV");
  if ( !dword_703701A4 || !v17 )
    goto LABEL_60;
  v18 = wglGetProcAddress("glProgramPathFragmentInputGenNV");
  dword_703701A0 = (int)v18;
  dword_7037019C = (int)wglGetProcAddress("glStencilFillPathInstancedNV");
  if ( !dword_7037019C || !v18 )
    goto LABEL_61;
  v19 = wglGetProcAddress("glStencilFillPathNV");
  dword_70370198 = (int)v19;
  dword_70370194 = (int)wglGetProcAddress("glStencilStrokePathInstancedNV");
  if ( !dword_70370194 || !v19 )
    goto LABEL_62;
  v20 = wglGetProcAddress("glStencilStrokePathNV");
  dword_70370190 = (int)v20;
  dword_7037018C = (int)wglGetProcAddress("glStencilThenCoverFillPathInstancedNV");
  if ( !dword_7037018C || !v20 )
    goto LABEL_63;
  v21 = wglGetProcAddress("glStencilThenCoverFillPathNV");
  dword_70370188 = (int)v21;
  dword_70370184 = (int)wglGetProcAddress("glStencilThenCoverStrokePathInstancedNV");
  if ( !dword_70370184 || !v21 )
    goto LABEL_64;
  v22 = wglGetProcAddress("glStencilThenCoverStrokePathNV");
  v23 = v22;
  dword_70370180 = (int)v22;
  v24 = wglGetProcAddress("glTransformPathNV");
  dword_7037017C = (int)v24;
  if ( v23 && v24 )
  {
    dword_70370178 = (int)wglGetProcAddress("glWeightPathsNV");
    return dword_70370178 == 0;
  }
LABEL_65:
  dword_70370178 = (int)wglGetProcAddress("glWeightPathsNV");
  return 1;
}
