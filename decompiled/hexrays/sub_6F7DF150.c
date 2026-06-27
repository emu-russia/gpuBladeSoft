bool sub_6F7DF150()
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
  PROC v9; // eax@16
  PROC v10; // esi@16
  PROC v11; // eax@16
  int v13; // [sp+1Ch] [bp-30h]@1
  int v14; // [sp+20h] [bp-2Ch]@1
  int v15; // [sp+24h] [bp-28h]@1
  int v16; // [sp+28h] [bp-24h]@1
  int v17; // [sp+2Ch] [bp-20h]@1

  dword_70370658 = (int)wglGetProcAddress("glWindowPos2dMESA");
  v17 = dword_70370658;
  dword_70370654 = (int)wglGetProcAddress("glWindowPos2dvMESA");
  v13 = dword_70370654;
  dword_70370650 = (int)wglGetProcAddress("glWindowPos2fMESA");
  v14 = dword_70370650;
  v0 = wglGetProcAddress("glWindowPos2fvMESA");
  dword_7037064C = (int)v0;
  v1 = wglGetProcAddress("glWindowPos2iMESA");
  dword_70370648 = (int)v1;
  v2 = wglGetProcAddress("glWindowPos2ivMESA");
  dword_70370644 = (int)v2;
  dword_70370640 = (int)wglGetProcAddress("glWindowPos2sMESA");
  v16 = dword_70370640;
  dword_7037063C = (int)wglGetProcAddress("glWindowPos2svMESA");
  v15 = dword_7037063C;
  dword_70370638 = (int)wglGetProcAddress("glWindowPos3dMESA");
  if ( !dword_70370638 || v13 == 0 || v14 == 0 || v0 == 0 || v1 == 0 || v15 == 0 || v16 == 0 || v2 == 0 || !v17 )
  {
    dword_70370634 = (int)wglGetProcAddress("glWindowPos3dvMESA");
    dword_70370630 = (int)wglGetProcAddress("glWindowPos3fMESA");
LABEL_20:
    dword_7037062C = (int)wglGetProcAddress("glWindowPos3fvMESA");
    dword_70370628 = (int)wglGetProcAddress("glWindowPos3iMESA");
LABEL_21:
    dword_70370624 = (int)wglGetProcAddress("glWindowPos3ivMESA");
    dword_70370620 = (int)wglGetProcAddress("glWindowPos3sMESA");
LABEL_22:
    dword_7037061C = (int)wglGetProcAddress("glWindowPos3svMESA");
    dword_70370618 = (int)wglGetProcAddress("glWindowPos4dMESA");
LABEL_23:
    dword_70370614 = (int)wglGetProcAddress("glWindowPos4dvMESA");
    dword_70370610 = (int)wglGetProcAddress("glWindowPos4fMESA");
LABEL_24:
    dword_7037060C = (int)wglGetProcAddress("glWindowPos4fvMESA");
    dword_70370608 = (int)wglGetProcAddress("glWindowPos4iMESA");
LABEL_25:
    dword_70370604 = (int)wglGetProcAddress("glWindowPos4ivMESA");
    dword_70370600 = (int)wglGetProcAddress("glWindowPos4sMESA");
    goto LABEL_26;
  }
  v3 = wglGetProcAddress("glWindowPos3dvMESA");
  dword_70370634 = (int)v3;
  dword_70370630 = (int)wglGetProcAddress("glWindowPos3fMESA");
  if ( !dword_70370630 || !v3 )
    goto LABEL_20;
  v4 = wglGetProcAddress("glWindowPos3fvMESA");
  dword_7037062C = (int)v4;
  dword_70370628 = (int)wglGetProcAddress("glWindowPos3iMESA");
  if ( !dword_70370628 || !v4 )
    goto LABEL_21;
  v5 = wglGetProcAddress("glWindowPos3ivMESA");
  dword_70370624 = (int)v5;
  dword_70370620 = (int)wglGetProcAddress("glWindowPos3sMESA");
  if ( !dword_70370620 || !v5 )
    goto LABEL_22;
  v6 = wglGetProcAddress("glWindowPos3svMESA");
  dword_7037061C = (int)v6;
  dword_70370618 = (int)wglGetProcAddress("glWindowPos4dMESA");
  if ( !dword_70370618 || !v6 )
    goto LABEL_23;
  v7 = wglGetProcAddress("glWindowPos4dvMESA");
  dword_70370614 = (int)v7;
  dword_70370610 = (int)wglGetProcAddress("glWindowPos4fMESA");
  if ( !dword_70370610 || !v7 )
    goto LABEL_24;
  v8 = wglGetProcAddress("glWindowPos4fvMESA");
  dword_7037060C = (int)v8;
  dword_70370608 = (int)wglGetProcAddress("glWindowPos4iMESA");
  if ( !dword_70370608 || !v8 )
    goto LABEL_25;
  v9 = wglGetProcAddress("glWindowPos4ivMESA");
  v10 = v9;
  dword_70370604 = (int)v9;
  v11 = wglGetProcAddress("glWindowPos4sMESA");
  dword_70370600 = (int)v11;
  if ( v10 && v11 )
  {
    dword_703705FC = (int)wglGetProcAddress("glWindowPos4svMESA");
    return dword_703705FC == 0;
  }
LABEL_26:
  dword_703705FC = (int)wglGetProcAddress("glWindowPos4svMESA");
  return 1;
}
