char __usercall sub_6F86D5EC@<al>(unsigned int a1@<eax>)
{
  unsigned int v1; // ebx@1
  signed int v2; // eax@1
  signed int v3; // eax@2
  signed int v4; // esi@3
  int v5; // eax@7
  int v6; // edx@8
  _DWORD *v7; // eax@9
  int v8; // edx@13
  int v9; // ecx@13
  int v10; // eax@13
  int v11; // edx@13
  int v12; // edx@14
  int v13; // edi@14
  signed int v14; // esi@15
  _BYTE *v15; // eax@18
  int v16; // eax@18
  _BYTE *v17; // eax@20
  int v18; // eax@20
  int v19; // edi@25
  int v20; // esi@26
  _BYTE *v21; // eax@29
  int v22; // eax@29
  _BYTE *v23; // eax@31
  int v24; // eax@31
  int *v25; // edx@6
  int v26; // eax@6
  int v27; // ST2C_4@33
  int v28; // ST1C_4@33
  int v29; // ST24_4@33
  signed int v31; // [sp+28h] [bp-20h]@15
  int v32; // [sp+2Ch] [bp-1Ch]@14
  int v33; // [sp+2Ch] [bp-1Ch]@25

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 128);
  if ( !v2 )
    return v2;
  v3 = v2 >> 1;
  if ( v3 )
  {
    v4 = 0;
    do
    {
      ++v4;
      v3 >>= 1;
    }
    while ( v3 );
    if ( v4 > 14 )
    {
      v25 = *(int **)(v1 + 120);
      v26 = *v25;
      *(_DWORD *)(v26 + 20) = 41;
      (*(void (__cdecl **)(int *))v26)(v25);
    }
    v5 = 16 * v4;
  }
  else
  {
    v5 = 0;
    v4 = 0;
  }
  v6 = *(_DWORD *)(v1 + 124);
  if ( *(_BYTE *)(v1 + 108) )
  {
    v7 = (_DWORD *)(*(_DWORD *)(v1 + 4 * v6 + 92) + 4 * v5);
    ++*v7;
    goto LABEL_10;
  }
  v8 = *(_DWORD *)(v1 + 4 * v6 + 60);
  v9 = *(_BYTE *)(v8 + v5 + 1024);
  v10 = *(_DWORD *)(v8 + 4 * v5);
  v11 = *(_DWORD *)(v1 + 16);
  if ( v9
    || (v27 = **(_DWORD **)(v1 + 120),
        *(_DWORD *)(v27 + 20) = 41,
        v28 = v10,
        v29 = v11,
        (*(void (__cdecl **)(_DWORD))v27)(*(_DWORD *)(v1 + 120)),
        v10 = v28,
        v11 = v29,
        v9 = 0,
        !*(_BYTE *)(v1 + 108)) )
  {
    v12 = v9 + v11;
    v32 = v12;
    v13 = *(_DWORD *)(v1 + 12) | ((v10 & ((1 << v9) - 1)) << (24 - v12));
    if ( v12 <= 7 )
    {
LABEL_23:
      *(_DWORD *)(v1 + 12) = v13;
      *(_DWORD *)(v1 + 16) = v32;
      if ( !v4 )
        goto LABEL_11;
      goto LABEL_24;
    }
    v31 = v4;
    v14 = v12;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(_BYTE **)(v1 + 112);
        *v15 = v13 >> 16;
        *(_DWORD *)(v1 + 112) = v15 + 1;
        v16 = *(_DWORD *)(v1 + 116) - 1;
        *(_DWORD *)(v1 + 116) = v16;
        if ( !v16 )
          break;
        if ( ((v13 >> 16) & 0xFF) == 255 )
          goto LABEL_20;
LABEL_17:
        v13 <<= 8;
        v14 -= 8;
        if ( v14 <= 7 )
          goto LABEL_22;
      }
      sub_6F86CA70(v1);
      if ( ((v13 >> 16) & 0xFF) != 255 )
        goto LABEL_17;
LABEL_20:
      v17 = *(_BYTE **)(v1 + 112);
      *v17 = 0;
      *(_DWORD *)(v1 + 112) = v17 + 1;
      v18 = *(_DWORD *)(v1 + 116) - 1;
      *(_DWORD *)(v1 + 116) = v18;
      if ( v18 )
        goto LABEL_17;
      sub_6F86CA70(v1);
      v13 <<= 8;
      v14 -= 8;
      if ( v14 <= 7 )
      {
LABEL_22:
        v4 = v31;
        v32 &= 7u;
        goto LABEL_23;
      }
    }
  }
LABEL_10:
  if ( !v4 )
    goto LABEL_11;
LABEL_24:
  if ( *(_BYTE *)(v1 + 108) )
    goto LABEL_11;
  v33 = v4 + *(_DWORD *)(v1 + 16);
  v19 = *(_DWORD *)(v1 + 12) | ((*(_DWORD *)(v1 + 128) & ((1 << v4) - 1)) << (24 - v33));
  if ( v33 <= 7 )
    goto LABEL_36;
  v20 = v4 + *(_DWORD *)(v1 + 16);
  do
  {
    v21 = *(_BYTE **)(v1 + 112);
    *v21 = v19 >> 16;
    *(_DWORD *)(v1 + 112) = v21 + 1;
    v22 = *(_DWORD *)(v1 + 116) - 1;
    *(_DWORD *)(v1 + 116) = v22;
    if ( v22 )
    {
      if ( ((v19 >> 16) & 0xFF) != 255 )
        goto LABEL_28;
    }
    else
    {
      sub_6F86CA70(v1);
      if ( ((v19 >> 16) & 0xFF) != 255 )
        goto LABEL_28;
    }
    v23 = *(_BYTE **)(v1 + 112);
    *v23 = 0;
    *(_DWORD *)(v1 + 112) = v23 + 1;
    v24 = *(_DWORD *)(v1 + 116) - 1;
    *(_DWORD *)(v1 + 116) = v24;
    if ( !v24 )
      sub_6F86CA70(v1);
LABEL_28:
    v19 <<= 8;
    v20 -= 8;
  }
  while ( v20 > 7 );
  v33 &= 7u;
LABEL_36:
  *(_DWORD *)(v1 + 12) = v19;
  *(_DWORD *)(v1 + 16) = v33;
LABEL_11:
  *(_DWORD *)(v1 + 128) = 0;
  LOBYTE(v2) = sub_6F86D4D4(v1, *(_DWORD *)(v1 + 136), *(_DWORD *)(v1 + 132));
  *(_DWORD *)(v1 + 132) = 0;
  return v2;
}
