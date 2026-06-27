void __usercall sub_6F755C60(int a1@<ebp>)
{
  size_t v1; // ebx@5
  void *v2; // eax@5
  const void *v3; // ebp@5
  int v4; // edx@6
  char *v5; // esi@7
  char *v6; // edi@7
  char *v7; // esi@7
  int v8; // ecx@7
  char *v9; // ST00_4@11
  int v10; // ST38_4@12
  char *v11; // ST00_4@12
  char *v12; // ST00_4@12
  int v13; // ST38_4@13
  char *v14; // ST00_4@13
  char *v15; // ST00_4@13
  int v16; // ST38_4@14
  char *v17; // ST00_4@14
  char *v18; // edi@14
  char *v19; // ST00_4@14
  char *v20; // esi@14
  char *v21; // ST00_4@14
  char *v22; // edi@14
  char *v23; // ST00_4@14
  char *v24; // esi@14
  char *v25; // ST00_4@14
  char *v26; // edi@14
  char *v27; // ST00_4@14
  char *v28; // esi@14
  char *v29; // ST00_4@14
  char *v30; // ST00_4@14
  int v31; // ebx@15
  int v32; // [sp+2Ch] [bp-30h]@7
  signed int v33; // [sp+30h] [bp-2Ch]@5
  char *v34; // [sp+34h] [bp-28h]@5
  int v35; // [sp+38h] [bp-24h]@7
  int v36; // [sp+3Ch] [bp-20h]@5

  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  if ( dword_70258D1C != dword_6FD400C4
    || (GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC), dword_70258D18 != dword_6FD400C8)
    || ((unk_6FBB979E >> 4) & 1) != dword_70258D14 )
  {
    if ( dword_6FD400E0 )
      sub_6F753CE0();
    sub_6F755500(a1);
  }
  glPixelStorei(3333, 1);
  glReadPixels(0, 0, dword_70258D1C, dword_70258D18, 6407, 5121, dword_70258D10);
  v1 = 3 * dword_70258D1C;
  v33 = dword_70258D18;
  v36 = dword_70258D1C;
  v34 = (char *)dword_70258D10;
  v2 = malloc(3 * dword_70258D1C);
  v3 = v2;
  if ( !v2 )
  {
    nullsub_10();
    exit(1);
  }
  v4 = v33 / 2;
  if ( v33 > 1 )
  {
    v32 = v33 / 2;
    v5 = &v34[v1 * (v33 - 1)];
    v35 = ((_BYTE)v4 - 1) & 3;
    memcpy(v2, v34, v1);
    v6 = &v34[v1];
    memcpy(v34, v5, v1);
    v7 = &v5[-v1];
    memcpy(&v34[v1 * (v33 - 1)], v3, v1);
    v8 = 1;
    if ( v33 / 2 > 1 )
    {
      if ( !v35 )
        goto LABEL_26;
      if ( v35 != 1 )
      {
        if ( v35 != 2 )
        {
          memcpy((void *)v3, v6, v1);
          v6 += v1;
          memcpy(&v34[v1], v7, v1);
          v9 = v7;
          v7 -= v1;
          memcpy(v9, v3, v1);
          v8 = 2;
        }
        v10 = v8;
        memcpy((void *)v3, v6, v1);
        v11 = v6;
        v6 += v1;
        memcpy(v11, v7, v1);
        v12 = v7;
        v7 -= v1;
        memcpy(v12, v3, v1);
        v8 = v10 + 1;
      }
      v13 = v8;
      memcpy((void *)v3, v6, v1);
      v14 = v6;
      v6 += v1;
      memcpy(v14, v7, v1);
      v15 = v7;
      v7 -= v1;
      memcpy(v15, v3, v1);
      v8 = v13 + 1;
      if ( v32 > v13 + 1 )
      {
LABEL_26:
        do
        {
          v16 = v8;
          memcpy((void *)v3, v6, v1);
          v17 = v6;
          v18 = &v6[v1];
          memcpy(v17, v7, v1);
          v19 = v7;
          v20 = &v7[-v1];
          memcpy(v19, v3, v1);
          memcpy((void *)v3, v18, v1);
          v21 = v18;
          v22 = &v18[v1];
          memcpy(v21, v20, v1);
          v23 = v20;
          v24 = &v20[-v1];
          memcpy(v23, v3, v1);
          memcpy((void *)v3, v22, v1);
          v25 = v22;
          v26 = &v22[v1];
          memcpy(v25, v24, v1);
          v27 = v24;
          v28 = &v24[-v1];
          memcpy(v27, v3, v1);
          memcpy((void *)v3, v26, v1);
          v29 = v26;
          v6 = &v26[v1];
          memcpy(v29, v28, v1);
          v30 = v28;
          v7 = &v28[-v1];
          memcpy(v30, v3, v1);
          v8 = v16 + 4;
        }
        while ( v32 > v16 + 4 );
      }
    }
  }
  free((void *)v3);
  v31 = dword_70258D0C;
  sub_6F753380((int)v34, dword_70258D0C, v36, v33);
  if ( sub_6F752330(v36, v33, v31, 0) )
  {
    if ( dword_6FD400E0 )
      sub_6F753CE0();
  }
}
