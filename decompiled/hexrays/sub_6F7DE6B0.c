bool sub_6F7DE6B0()
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
  PROC v15; // eax@28
  PROC v16; // esi@28
  PROC v17; // eax@28
  int v19; // [sp+14h] [bp-48h]@1
  int v20; // [sp+18h] [bp-44h]@1
  int v21; // [sp+1Ch] [bp-40h]@1
  int v22; // [sp+20h] [bp-3Ch]@1
  int v23; // [sp+24h] [bp-38h]@1
  int v24; // [sp+28h] [bp-34h]@1
  int v25; // [sp+2Ch] [bp-30h]@1
  int v26; // [sp+30h] [bp-2Ch]@1
  int v27; // [sp+34h] [bp-28h]@1
  int v28; // [sp+38h] [bp-24h]@1
  int v29; // [sp+3Ch] [bp-20h]@1

  dword_70370834 = (int)wglGetProcAddress("glBeginVertexShaderEXT");
  v29 = dword_70370834;
  dword_70370830 = (int)wglGetProcAddress("glBindLightParameterEXT");
  v19 = dword_70370830;
  dword_7037082C = (int)wglGetProcAddress("glBindMaterialParameterEXT");
  v20 = dword_7037082C;
  dword_70370828 = (int)wglGetProcAddress("glBindParameterEXT");
  v21 = dword_70370828;
  dword_70370824 = (int)wglGetProcAddress("glBindTexGenParameterEXT");
  v22 = dword_70370824;
  dword_70370820 = (int)wglGetProcAddress("glBindTextureUnitParameterEXT");
  v23 = dword_70370820;
  dword_7037081C = (int)wglGetProcAddress("glBindVertexShaderEXT");
  v24 = dword_7037081C;
  dword_70370818 = (int)wglGetProcAddress("glDeleteVertexShaderEXT");
  v25 = dword_70370818;
  dword_70370814 = (int)wglGetProcAddress("glDisableVariantClientStateEXT");
  v26 = dword_70370814;
  v0 = wglGetProcAddress("glEnableVariantClientStateEXT");
  dword_70370810 = (int)v0;
  v1 = wglGetProcAddress("glEndVertexShaderEXT");
  dword_7037080C = (int)v1;
  v2 = wglGetProcAddress("glExtractComponentEXT");
  dword_70370808 = (int)v2;
  dword_70370804 = (int)wglGetProcAddress("glGenSymbolsEXT");
  v28 = dword_70370804;
  dword_70370800 = (int)wglGetProcAddress("glGenVertexShadersEXT");
  v27 = dword_70370800;
  dword_703707FC = (int)wglGetProcAddress("glGetInvariantBooleanvEXT");
  if ( !dword_703707FC
    || v19 == 0
    || v20 == 0
    || v21 == 0
    || v22 == 0
    || v24 == 0
    || v25 == 0
    || v26 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v27 == 0
    || v28 == 0
    || v23 == 0
    || !v29 )
  {
    dword_703707F8 = (int)wglGetProcAddress("glGetInvariantFloatvEXT");
    dword_703707F4 = (int)wglGetProcAddress("glGetInvariantIntegervEXT");
LABEL_32:
    dword_703707F0 = (int)wglGetProcAddress("glGetLocalConstantBooleanvEXT");
    dword_703707EC = (int)wglGetProcAddress("glGetLocalConstantFloatvEXT");
LABEL_33:
    dword_703707E8 = (int)wglGetProcAddress("glGetLocalConstantIntegervEXT");
    dword_703707E4 = (int)wglGetProcAddress("glGetVariantBooleanvEXT");
LABEL_34:
    dword_703707E0 = (int)wglGetProcAddress("glGetVariantFloatvEXT");
    dword_703707DC = (int)wglGetProcAddress("glGetVariantIntegervEXT");
LABEL_35:
    dword_703707D8 = (int)wglGetProcAddress("glGetVariantPointervEXT");
    dword_703707D4 = (int)wglGetProcAddress("glInsertComponentEXT");
LABEL_36:
    dword_703707D0 = (int)wglGetProcAddress("glIsVariantEnabledEXT");
    dword_703707CC = (int)wglGetProcAddress("glSetInvariantEXT");
LABEL_37:
    dword_703707C8 = (int)wglGetProcAddress("glSetLocalConstantEXT");
    dword_703707C4 = (int)wglGetProcAddress("glShaderOp1EXT");
LABEL_38:
    dword_703707C0 = (int)wglGetProcAddress("glShaderOp2EXT");
    dword_703707BC = (int)wglGetProcAddress("glShaderOp3EXT");
LABEL_39:
    dword_703707B8 = (int)wglGetProcAddress("glSwizzleEXT");
    dword_703707B4 = (int)wglGetProcAddress("glVariantPointerEXT");
LABEL_40:
    dword_703707B0 = (int)wglGetProcAddress("glVariantbvEXT");
    dword_703707AC = (int)wglGetProcAddress("glVariantdvEXT");
LABEL_41:
    dword_703707A8 = (int)wglGetProcAddress("glVariantfvEXT");
    dword_703707A4 = (int)wglGetProcAddress("glVariantivEXT");
LABEL_42:
    dword_703707A0 = (int)wglGetProcAddress("glVariantsvEXT");
    dword_7037079C = (int)wglGetProcAddress("glVariantubvEXT");
LABEL_43:
    dword_70370798 = (int)wglGetProcAddress("glVariantuivEXT");
    dword_70370794 = (int)wglGetProcAddress("glVariantusvEXT");
    goto LABEL_44;
  }
  v3 = wglGetProcAddress("glGetInvariantFloatvEXT");
  dword_703707F8 = (int)v3;
  dword_703707F4 = (int)wglGetProcAddress("glGetInvariantIntegervEXT");
  if ( !dword_703707F4 || !v3 )
    goto LABEL_32;
  v4 = wglGetProcAddress("glGetLocalConstantBooleanvEXT");
  dword_703707F0 = (int)v4;
  dword_703707EC = (int)wglGetProcAddress("glGetLocalConstantFloatvEXT");
  if ( !dword_703707EC || !v4 )
    goto LABEL_33;
  v5 = wglGetProcAddress("glGetLocalConstantIntegervEXT");
  dword_703707E8 = (int)v5;
  dword_703707E4 = (int)wglGetProcAddress("glGetVariantBooleanvEXT");
  if ( !dword_703707E4 || !v5 )
    goto LABEL_34;
  v6 = wglGetProcAddress("glGetVariantFloatvEXT");
  dword_703707E0 = (int)v6;
  dword_703707DC = (int)wglGetProcAddress("glGetVariantIntegervEXT");
  if ( !dword_703707DC || !v6 )
    goto LABEL_35;
  v7 = wglGetProcAddress("glGetVariantPointervEXT");
  dword_703707D8 = (int)v7;
  dword_703707D4 = (int)wglGetProcAddress("glInsertComponentEXT");
  if ( !dword_703707D4 || !v7 )
    goto LABEL_36;
  v8 = wglGetProcAddress("glIsVariantEnabledEXT");
  dword_703707D0 = (int)v8;
  dword_703707CC = (int)wglGetProcAddress("glSetInvariantEXT");
  if ( !dword_703707CC || !v8 )
    goto LABEL_37;
  v9 = wglGetProcAddress("glSetLocalConstantEXT");
  dword_703707C8 = (int)v9;
  dword_703707C4 = (int)wglGetProcAddress("glShaderOp1EXT");
  if ( !dword_703707C4 || !v9 )
    goto LABEL_38;
  v10 = wglGetProcAddress("glShaderOp2EXT");
  dword_703707C0 = (int)v10;
  dword_703707BC = (int)wglGetProcAddress("glShaderOp3EXT");
  if ( !dword_703707BC || !v10 )
    goto LABEL_39;
  v11 = wglGetProcAddress("glSwizzleEXT");
  dword_703707B8 = (int)v11;
  dword_703707B4 = (int)wglGetProcAddress("glVariantPointerEXT");
  if ( !dword_703707B4 || !v11 )
    goto LABEL_40;
  v12 = wglGetProcAddress("glVariantbvEXT");
  dword_703707B0 = (int)v12;
  dword_703707AC = (int)wglGetProcAddress("glVariantdvEXT");
  if ( !dword_703707AC || !v12 )
    goto LABEL_41;
  v13 = wglGetProcAddress("glVariantfvEXT");
  dword_703707A8 = (int)v13;
  dword_703707A4 = (int)wglGetProcAddress("glVariantivEXT");
  if ( !dword_703707A4 || !v13 )
    goto LABEL_42;
  v14 = wglGetProcAddress("glVariantsvEXT");
  dword_703707A0 = (int)v14;
  dword_7037079C = (int)wglGetProcAddress("glVariantubvEXT");
  if ( !dword_7037079C || !v14 )
    goto LABEL_43;
  v15 = wglGetProcAddress("glVariantuivEXT");
  v16 = v15;
  dword_70370798 = (int)v15;
  v17 = wglGetProcAddress("glVariantusvEXT");
  dword_70370794 = (int)v17;
  if ( v16 && v17 )
  {
    dword_70370790 = (int)wglGetProcAddress("glWriteMaskEXT");
    return dword_70370790 == 0;
  }
LABEL_44:
  dword_70370790 = (int)wglGetProcAddress("glWriteMaskEXT");
  return 1;
}
