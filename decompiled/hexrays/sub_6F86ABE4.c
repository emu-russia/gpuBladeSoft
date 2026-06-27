char __cdecl sub_6F86ABE4(int a1, int *a2)
{
  int v2; // eax@2
  int v3; // ecx@6
  signed int v4; // eax@6
  signed int v5; // edx@9
  signed int v6; // ebx@12
  int v7; // edi@14
  signed int v8; // eax@15
  signed int v9; // eax@17
  int v10; // eax@18
  int v11; // ST24_4@19
  _BYTE *v12; // edi@19
  signed int v14; // ST24_4@25
  signed int v15; // eax@28
  signed int v16; // edi@30
  _BYTE *v17; // ebx@30
  signed int v18; // edi@32
  _BYTE *v19; // ebx@33
  signed int v20; // [sp+4h] [bp-44h]@30
  int v21; // [sp+8h] [bp-40h]@5
  _BYTE *v22; // [sp+Ch] [bp-3Ch]@29
  _BYTE *v23; // [sp+Ch] [bp-3Ch]@32
  _BYTE *v24; // [sp+10h] [bp-38h]@13
  int v25; // [sp+14h] [bp-34h]@13
  int v26; // [sp+18h] [bp-30h]@1
  signed int v27; // [sp+1Ch] [bp-2Ch]@5
  signed int v28; // [sp+20h] [bp-28h]@29
  signed int v29; // [sp+20h] [bp-28h]@33
  signed int v30; // [sp+24h] [bp-24h]@19
  int v31; // [sp+28h] [bp-20h]@13
  int v32; // [sp+2Ch] [bp-1Ch]@5

  v26 = *(_DWORD *)(a1 + 404);
  if ( *(_DWORD *)(a1 + 224) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 404) + 68);
    if ( !v2 )
    {
      sub_6F86A39C(a1, *(_DWORD *)(*(_DWORD *)(a1 + 404) + 72));
      v2 = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(v26 + 72) = ((unsigned __int8)*(_DWORD *)(v26 + 72) + 1) & 7;
    }
    *(_DWORD *)(v26 + 68) = v2 - 1;
  }
  v32 = *a2;
  v21 = *(_DWORD *)(*(_DWORD *)(a1 + 276) + 24);
  v27 = *(_DWORD *)(a1 + 348);
  if ( v27 > 0 )
  {
    v3 = *(_DWORD *)(a1 + 356);
    v4 = *(_DWORD *)(a1 + 348);
    while ( 1 )
    {
      v5 = *(_WORD *)(v32 + 2 * *(_DWORD *)(*(_DWORD *)(a1 + 364) + 4 * v4));
      if ( v5 >= 0 )
      {
        if ( v5 >> v3 )
          goto LABEL_11;
      }
      else if ( -v5 >> v3 )
      {
LABEL_11:
        v27 = v4;
        break;
      }
      if ( --v4 <= 0 )
        goto LABEL_11;
    }
  }
  v6 = *(_DWORD *)(a1 + 344);
  if ( v6 > v27 )
    goto LABEL_22;
  v25 = v21 + 32;
  v24 = (_BYTE *)(v26 + 204);
  v31 = *(_DWORD *)(a1 + 364);
  do
  {
    v7 = *(_DWORD *)(v26 + 4 * v25 + 12) + 3 * v6 - 3;
    sub_6F869F7C(a1, (_BYTE *)v7, 0);
    while ( 1 )
    {
      v9 = *(_WORD *)(v32 + 2 * *(_DWORD *)(v31 + 4 * v6));
      if ( v9 < 0 )
        break;
      v8 = v9 >> *(_DWORD *)(a1 + 356);
      if ( v8 )
      {
        v14 = v8;
        sub_6F869F7C(a1, (_BYTE *)(v7 + 1), 1);
        sub_6F869F7C(a1, v24, 0);
        v12 = (_BYTE *)(v7 + 2);
        v30 = v14 - 1;
        if ( !v30 )
          goto LABEL_20;
        goto LABEL_26;
      }
LABEL_16:
      sub_6F869F7C(a1, (_BYTE *)(v7 + 1), 0);
      v7 += 3;
      ++v6;
    }
    v10 = -v9 >> *(_DWORD *)(a1 + 356);
    if ( !v10 )
      goto LABEL_16;
    v11 = v10;
    sub_6F869F7C(a1, (_BYTE *)(v7 + 1), 1);
    sub_6F869F7C(a1, v24, 1);
    v12 = (_BYTE *)(v7 + 2);
    v30 = v11 - 1;
    if ( !v30 )
    {
LABEL_20:
      sub_6F869F7C(a1, v12, 0);
      goto LABEL_21;
    }
LABEL_26:
    sub_6F869F7C(a1, v12, 1);
    if ( !(v30 >> 1) )
      goto LABEL_20;
    sub_6F869F7C(a1, v12, 1);
    if ( *(_BYTE *)(a1 + v21 + 184) >= v6 )
      v15 = 189;
    else
      v15 = 217;
    v22 = (_BYTE *)(v15 + *(_DWORD *)(v26 + 4 * v25 + 12));
    v28 = v30 >> 2;
    if ( v30 >> 2 )
    {
      v16 = 2;
      v20 = v6;
      v17 = (_BYTE *)(v15 + *(_DWORD *)(v26 + 4 * v25 + 12));
      do
      {
        sub_6F869F7C(a1, v17, 1);
        v16 *= 2;
        ++v17;
        v28 >>= 1;
      }
      while ( v28 );
      v23 = v17;
      v6 = v20;
      sub_6F869F7C(a1, v23, 0);
      v18 = v16 >> 1;
      if ( v18 )
      {
        v29 = v20;
        v19 = v23 + 14;
        goto LABEL_34;
      }
    }
    else
    {
      sub_6F869F7C(a1, v22, 0);
      v18 = 1;
      v29 = v6;
      v19 = v22 + 14;
      do
      {
LABEL_34:
        sub_6F869F7C(a1, v19, (v18 & v30) != 0);
        v18 >>= 1;
      }
      while ( v18 );
      v6 = v29;
    }
LABEL_21:
    ++v6;
  }
  while ( v6 <= v27 );
LABEL_22:
  if ( *(_DWORD *)(a1 + 348) >= v6 )
    sub_6F869F7C(a1, (_BYTE *)(*(_DWORD *)(v26 + 4 * v21 + 140) + 3 * v6 - 3), 1);
  return 1;
}
