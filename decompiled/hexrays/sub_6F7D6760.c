bool sub_6F7D6760()
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
  PROC v12; // eax@22
  PROC v13; // esi@22
  PROC v14; // eax@22
  int v16; // [sp+1Ch] [bp-40h]@1
  int v17; // [sp+20h] [bp-3Ch]@1
  int v18; // [sp+24h] [bp-38h]@1
  int v19; // [sp+28h] [bp-34h]@1
  int v20; // [sp+2Ch] [bp-30h]@1
  int v21; // [sp+30h] [bp-2Ch]@1
  int v22; // [sp+34h] [bp-28h]@1
  int v23; // [sp+38h] [bp-24h]@1
  int v24; // [sp+3Ch] [bp-20h]@1

  dword_7037194C = (int)wglGetProcAddress("glActiveTextureARB");
  v24 = dword_7037194C;
  dword_70371948 = (int)wglGetProcAddress("glClientActiveTextureARB");
  v16 = dword_70371948;
  dword_70371944 = (int)wglGetProcAddress("glMultiTexCoord1dARB");
  v17 = dword_70371944;
  dword_70371940 = (int)wglGetProcAddress("glMultiTexCoord1dvARB");
  v18 = dword_70371940;
  dword_7037193C = (int)wglGetProcAddress("glMultiTexCoord1fARB");
  v19 = dword_7037193C;
  dword_70371938 = (int)wglGetProcAddress("glMultiTexCoord1fvARB");
  v20 = dword_70371938;
  dword_70371934 = (int)wglGetProcAddress("glMultiTexCoord1iARB");
  v21 = dword_70371934;
  v0 = wglGetProcAddress("glMultiTexCoord1ivARB");
  dword_70371930 = (int)v0;
  v1 = wglGetProcAddress("glMultiTexCoord1sARB");
  dword_7037192C = (int)v1;
  v2 = wglGetProcAddress("glMultiTexCoord1svARB");
  dword_70371928 = (int)v2;
  dword_70371924 = (int)wglGetProcAddress("glMultiTexCoord2dARB");
  v23 = dword_70371924;
  dword_70371920 = (int)wglGetProcAddress("glMultiTexCoord2dvARB");
  v22 = dword_70371920;
  dword_7037191C = (int)wglGetProcAddress("glMultiTexCoord2fARB");
  if ( !dword_7037191C
    || v16 == 0
    || v17 == 0
    || v18 == 0
    || v19 == 0
    || v21 == 0
    || v0 == 0
    || v1 == 0
    || v2 == 0
    || v23 == 0
    || v22 == 0
    || v20 == 0
    || !v24 )
  {
    dword_70371918 = (int)wglGetProcAddress("glMultiTexCoord2fvARB");
    dword_70371914 = (int)wglGetProcAddress("glMultiTexCoord2iARB");
LABEL_26:
    dword_70371910 = (int)wglGetProcAddress("glMultiTexCoord2ivARB");
    dword_7037190C = (int)wglGetProcAddress("glMultiTexCoord2sARB");
LABEL_27:
    dword_70371908 = (int)wglGetProcAddress("glMultiTexCoord2svARB");
    dword_70371904 = (int)wglGetProcAddress("glMultiTexCoord3dARB");
LABEL_28:
    dword_70371900 = (int)wglGetProcAddress("glMultiTexCoord3dvARB");
    dword_703718FC = (int)wglGetProcAddress("glMultiTexCoord3fARB");
LABEL_29:
    dword_703718F8 = (int)wglGetProcAddress("glMultiTexCoord3fvARB");
    dword_703718F4 = (int)wglGetProcAddress("glMultiTexCoord3iARB");
LABEL_30:
    dword_703718F0 = (int)wglGetProcAddress("glMultiTexCoord3ivARB");
    dword_703718EC = (int)wglGetProcAddress("glMultiTexCoord3sARB");
LABEL_31:
    dword_703718E8 = (int)wglGetProcAddress("glMultiTexCoord3svARB");
    dword_703718E4 = (int)wglGetProcAddress("glMultiTexCoord4dARB");
LABEL_32:
    dword_703718E0 = (int)wglGetProcAddress("glMultiTexCoord4dvARB");
    dword_703718DC = (int)wglGetProcAddress("glMultiTexCoord4fARB");
LABEL_33:
    dword_703718D8 = (int)wglGetProcAddress("glMultiTexCoord4fvARB");
    dword_703718D4 = (int)wglGetProcAddress("glMultiTexCoord4iARB");
LABEL_34:
    dword_703718D0 = (int)wglGetProcAddress("glMultiTexCoord4ivARB");
    dword_703718CC = (int)wglGetProcAddress("glMultiTexCoord4sARB");
    goto LABEL_35;
  }
  v3 = wglGetProcAddress("glMultiTexCoord2fvARB");
  dword_70371918 = (int)v3;
  dword_70371914 = (int)wglGetProcAddress("glMultiTexCoord2iARB");
  if ( !dword_70371914 || !v3 )
    goto LABEL_26;
  v4 = wglGetProcAddress("glMultiTexCoord2ivARB");
  dword_70371910 = (int)v4;
  dword_7037190C = (int)wglGetProcAddress("glMultiTexCoord2sARB");
  if ( !dword_7037190C || !v4 )
    goto LABEL_27;
  v5 = wglGetProcAddress("glMultiTexCoord2svARB");
  dword_70371908 = (int)v5;
  dword_70371904 = (int)wglGetProcAddress("glMultiTexCoord3dARB");
  if ( !dword_70371904 || !v5 )
    goto LABEL_28;
  v6 = wglGetProcAddress("glMultiTexCoord3dvARB");
  dword_70371900 = (int)v6;
  dword_703718FC = (int)wglGetProcAddress("glMultiTexCoord3fARB");
  if ( !dword_703718FC || !v6 )
    goto LABEL_29;
  v7 = wglGetProcAddress("glMultiTexCoord3fvARB");
  dword_703718F8 = (int)v7;
  dword_703718F4 = (int)wglGetProcAddress("glMultiTexCoord3iARB");
  if ( !dword_703718F4 || !v7 )
    goto LABEL_30;
  v8 = wglGetProcAddress("glMultiTexCoord3ivARB");
  dword_703718F0 = (int)v8;
  dword_703718EC = (int)wglGetProcAddress("glMultiTexCoord3sARB");
  if ( !dword_703718EC || !v8 )
    goto LABEL_31;
  v9 = wglGetProcAddress("glMultiTexCoord3svARB");
  dword_703718E8 = (int)v9;
  dword_703718E4 = (int)wglGetProcAddress("glMultiTexCoord4dARB");
  if ( !dword_703718E4 || !v9 )
    goto LABEL_32;
  v10 = wglGetProcAddress("glMultiTexCoord4dvARB");
  dword_703718E0 = (int)v10;
  dword_703718DC = (int)wglGetProcAddress("glMultiTexCoord4fARB");
  if ( !dword_703718DC || !v10 )
    goto LABEL_33;
  v11 = wglGetProcAddress("glMultiTexCoord4fvARB");
  dword_703718D8 = (int)v11;
  dword_703718D4 = (int)wglGetProcAddress("glMultiTexCoord4iARB");
  if ( !dword_703718D4 || !v11 )
    goto LABEL_34;
  v12 = wglGetProcAddress("glMultiTexCoord4ivARB");
  v13 = v12;
  dword_703718D0 = (int)v12;
  v14 = wglGetProcAddress("glMultiTexCoord4sARB");
  dword_703718CC = (int)v14;
  if ( v13 && v14 )
  {
    dword_703718C8 = (int)wglGetProcAddress("glMultiTexCoord4svARB");
    return dword_703718C8 == 0;
  }
LABEL_35:
  dword_703718C8 = (int)wglGetProcAddress("glMultiTexCoord4svARB");
  return 1;
}
