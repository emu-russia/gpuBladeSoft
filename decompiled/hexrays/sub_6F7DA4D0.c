bool sub_6F7DA4D0()
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
  int v20; // [sp+10h] [bp-4Ch]@1
  int v21; // [sp+14h] [bp-48h]@1
  int v22; // [sp+18h] [bp-44h]@1
  int v23; // [sp+1Ch] [bp-40h]@1
  int v24; // [sp+20h] [bp-3Ch]@1
  int v25; // [sp+24h] [bp-38h]@1
  int v26; // [sp+28h] [bp-34h]@1
  int v27; // [sp+2Ch] [bp-30h]@1
  int v28; // [sp+30h] [bp-2Ch]@1
  int v29; // [sp+34h] [bp-28h]@1
  int v30; // [sp+38h] [bp-24h]@1
  int v31; // [sp+3Ch] [bp-20h]@1

  dword_703711A4 = (int)wglGetProcAddress("glClientActiveVertexStreamATI");
  v31 = dword_703711A4;
  dword_703711A0 = (int)wglGetProcAddress("glNormalStream3bATI");
  v20 = dword_703711A0;
  dword_7037119C = (int)wglGetProcAddress("glNormalStream3bvATI");
  v21 = dword_7037119C;
  dword_70371198 = (int)wglGetProcAddress("glNormalStream3dATI");
  v22 = dword_70371198;
  dword_70371194 = (int)wglGetProcAddress("glNormalStream3dvATI");
  v23 = dword_70371194;
  dword_70371190 = (int)wglGetProcAddress("glNormalStream3fATI");
  v24 = dword_70371190;
  dword_7037118C = (int)wglGetProcAddress("glNormalStream3fvATI");
  v25 = dword_7037118C;
  dword_70371188 = (int)wglGetProcAddress("glNormalStream3iATI");
  v26 = dword_70371188;
  dword_70371184 = (int)wglGetProcAddress("glNormalStream3ivATI");
  v27 = dword_70371184;
  dword_70371180 = (int)wglGetProcAddress("glNormalStream3sATI");
  v28 = dword_70371180;
  v0 = wglGetProcAddress("glNormalStream3svATI");
  dword_7037117C = (int)v0;
  v1 = wglGetProcAddress("glVertexBlendEnvfATI");
  dword_70371178 = (int)v1;
  v2 = wglGetProcAddress("glVertexBlendEnviATI");
  dword_70371174 = (int)v2;
  dword_70371170 = (int)wglGetProcAddress("glVertexStream1dATI");
  v30 = dword_70371170;
  dword_7037116C = (int)wglGetProcAddress("glVertexStream1dvATI");
  v29 = dword_7037116C;
  dword_70371168 = (int)wglGetProcAddress("glVertexStream1fATI");
  if ( !dword_70371168
    || v20 == 0
    || v21 == 0
    || v22 == 0
    || v23 == 0
    || v25 == 0
    || v26 == 0
    || v27 == 0
    || v28 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v29 == 0
    || v30 == 0
    || v24 == 0
    || !v31 )
  {
    dword_70371164 = (int)wglGetProcAddress("glVertexStream1fvATI");
    dword_70371160 = (int)wglGetProcAddress("glVertexStream1iATI");
LABEL_34:
    dword_7037115C = (int)wglGetProcAddress("glVertexStream1ivATI");
    dword_70371158 = (int)wglGetProcAddress("glVertexStream1sATI");
LABEL_35:
    dword_70371154 = (int)wglGetProcAddress("glVertexStream1svATI");
    dword_70371150 = (int)wglGetProcAddress("glVertexStream2dATI");
LABEL_36:
    dword_7037114C = (int)wglGetProcAddress("glVertexStream2dvATI");
    dword_70371148 = (int)wglGetProcAddress("glVertexStream2fATI");
LABEL_37:
    dword_70371144 = (int)wglGetProcAddress("glVertexStream2fvATI");
    dword_70371140 = (int)wglGetProcAddress("glVertexStream2iATI");
LABEL_38:
    dword_7037113C = (int)wglGetProcAddress("glVertexStream2ivATI");
    dword_70371138 = (int)wglGetProcAddress("glVertexStream2sATI");
LABEL_39:
    dword_70371134 = (int)wglGetProcAddress("glVertexStream2svATI");
    dword_70371130 = (int)wglGetProcAddress("glVertexStream3dATI");
LABEL_40:
    dword_7037112C = (int)wglGetProcAddress("glVertexStream3dvATI");
    dword_70371128 = (int)wglGetProcAddress("glVertexStream3fATI");
LABEL_41:
    dword_70371124 = (int)wglGetProcAddress("glVertexStream3fvATI");
    dword_70371120 = (int)wglGetProcAddress("glVertexStream3iATI");
LABEL_42:
    dword_7037111C = (int)wglGetProcAddress("glVertexStream3ivATI");
    dword_70371118 = (int)wglGetProcAddress("glVertexStream3sATI");
LABEL_43:
    dword_70371114 = (int)wglGetProcAddress("glVertexStream3svATI");
    dword_70371110 = (int)wglGetProcAddress("glVertexStream4dATI");
LABEL_44:
    dword_7037110C = (int)wglGetProcAddress("glVertexStream4dvATI");
    dword_70371108 = (int)wglGetProcAddress("glVertexStream4fATI");
LABEL_45:
    dword_70371104 = (int)wglGetProcAddress("glVertexStream4fvATI");
    dword_70371100 = (int)wglGetProcAddress("glVertexStream4iATI");
LABEL_46:
    dword_703710FC = (int)wglGetProcAddress("glVertexStream4ivATI");
    dword_703710F8 = (int)wglGetProcAddress("glVertexStream4sATI");
    goto LABEL_47;
  }
  v3 = wglGetProcAddress("glVertexStream1fvATI");
  dword_70371164 = (int)v3;
  dword_70371160 = (int)wglGetProcAddress("glVertexStream1iATI");
  if ( !dword_70371160 || !v3 )
    goto LABEL_34;
  v4 = wglGetProcAddress("glVertexStream1ivATI");
  dword_7037115C = (int)v4;
  dword_70371158 = (int)wglGetProcAddress("glVertexStream1sATI");
  if ( !dword_70371158 || !v4 )
    goto LABEL_35;
  v5 = wglGetProcAddress("glVertexStream1svATI");
  dword_70371154 = (int)v5;
  dword_70371150 = (int)wglGetProcAddress("glVertexStream2dATI");
  if ( !dword_70371150 || !v5 )
    goto LABEL_36;
  v6 = wglGetProcAddress("glVertexStream2dvATI");
  dword_7037114C = (int)v6;
  dword_70371148 = (int)wglGetProcAddress("glVertexStream2fATI");
  if ( !dword_70371148 || !v6 )
    goto LABEL_37;
  v7 = wglGetProcAddress("glVertexStream2fvATI");
  dword_70371144 = (int)v7;
  dword_70371140 = (int)wglGetProcAddress("glVertexStream2iATI");
  if ( !dword_70371140 || !v7 )
    goto LABEL_38;
  v8 = wglGetProcAddress("glVertexStream2ivATI");
  dword_7037113C = (int)v8;
  dword_70371138 = (int)wglGetProcAddress("glVertexStream2sATI");
  if ( !dword_70371138 || !v8 )
    goto LABEL_39;
  v9 = wglGetProcAddress("glVertexStream2svATI");
  dword_70371134 = (int)v9;
  dword_70371130 = (int)wglGetProcAddress("glVertexStream3dATI");
  if ( !dword_70371130 || !v9 )
    goto LABEL_40;
  v10 = wglGetProcAddress("glVertexStream3dvATI");
  dword_7037112C = (int)v10;
  dword_70371128 = (int)wglGetProcAddress("glVertexStream3fATI");
  if ( !dword_70371128 || !v10 )
    goto LABEL_41;
  v11 = wglGetProcAddress("glVertexStream3fvATI");
  dword_70371124 = (int)v11;
  dword_70371120 = (int)wglGetProcAddress("glVertexStream3iATI");
  if ( !dword_70371120 || !v11 )
    goto LABEL_42;
  v12 = wglGetProcAddress("glVertexStream3ivATI");
  dword_7037111C = (int)v12;
  dword_70371118 = (int)wglGetProcAddress("glVertexStream3sATI");
  if ( !dword_70371118 || !v12 )
    goto LABEL_43;
  v13 = wglGetProcAddress("glVertexStream3svATI");
  dword_70371114 = (int)v13;
  dword_70371110 = (int)wglGetProcAddress("glVertexStream4dATI");
  if ( !dword_70371110 || !v13 )
    goto LABEL_44;
  v14 = wglGetProcAddress("glVertexStream4dvATI");
  dword_7037110C = (int)v14;
  dword_70371108 = (int)wglGetProcAddress("glVertexStream4fATI");
  if ( !dword_70371108 || !v14 )
    goto LABEL_45;
  v15 = wglGetProcAddress("glVertexStream4fvATI");
  dword_70371104 = (int)v15;
  dword_70371100 = (int)wglGetProcAddress("glVertexStream4iATI");
  if ( !dword_70371100 || !v15 )
    goto LABEL_46;
  v16 = wglGetProcAddress("glVertexStream4ivATI");
  v17 = v16;
  dword_703710FC = (int)v16;
  v18 = wglGetProcAddress("glVertexStream4sATI");
  dword_703710F8 = (int)v18;
  if ( v17 && v18 )
  {
    dword_703710F4 = (int)wglGetProcAddress("glVertexStream4svATI");
    return dword_703710F4 == 0;
  }
LABEL_47:
  dword_703710F4 = (int)wglGetProcAddress("glVertexStream4svATI");
  return 1;
}
