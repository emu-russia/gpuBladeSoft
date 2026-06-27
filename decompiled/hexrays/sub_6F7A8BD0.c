int __cdecl sub_6F7A8BD0(int a1, int a2, int a3)
{
  int v3; // ebp@1
  int v4; // esi@1
  int v5; // ecx@1
  int v6; // eax@1
  signed int v7; // ecx@1
  int v8; // edi@1
  signed int v9; // edx@1
  int v10; // ebp@1
  int v11; // edi@1
  signed int v12; // edx@1
  signed int v13; // eax@3
  signed int v14; // edi@8
  signed int v15; // edi@13
  int v16; // eax@15
  int v17; // ebp@17
  int v18; // eax@17
  int v19; // eax@17
  signed int v20; // kr00_4@17
  int v21; // ebp@17
  int v22; // eax@17
  signed int v23; // eax@17
  int v24; // ebp@17
  int v25; // edx@17
  signed int v27; // edi@20
  int v28; // edx@25
  signed int v29; // [sp+4h] [bp-28h]@1
  signed int v30; // [sp+8h] [bp-24h]@1
  int v31; // [sp+8h] [bp-24h]@16

  v3 = *(_DWORD *)(a3 + 128);
  v4 = a3 + 140;
  v5 = 4 * *(_DWORD *)a2;
  v29 = v5;
  *(_DWORD *)(a3 + 140) = v5;
  v6 = *(_DWORD *)a1;
  v7 = 4 * *(_DWORD *)(a2 + 4);
  v8 = 4 * *(_DWORD *)a1;
  *(_DWORD *)(a3 + 144) = v7;
  v9 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a3 + 156) = v3;
  v10 = v29 + v3;
  *(_DWORD *)(a3 + 148) = v8;
  v9 *= 4;
  v30 = v9;
  *(_DWORD *)(a3 + 152) = v9;
  v11 = v10 + -2 * v8;
  v12 = *(_DWORD *)(a3 + 132);
  *(_DWORD *)(a3 + 160) = v12;
  if ( v11 < 0 )
    v11 = 8 * v6 - v10;
  v13 = v7 + v12 + -2 * v30;
  if ( v13 < 0 )
    v13 = 2 * v30 - (v7 + v12);
  if ( v11 >= v13 )
    v13 = v11;
  if ( v13 <= 63 )
    goto LABEL_30;
  v14 = v30;
  if ( v7 <= v30 )
    v14 = v7;
  if ( v12 <= v14 )
    v14 = v12;
  if ( v14 >> 8 >= *(_DWORD *)(a3 + 84) )
    goto LABEL_30;
  v27 = v30;
  if ( v7 >= v30 )
    v27 = v7;
  if ( v12 < v27 )
    v12 = v27;
  if ( v12 >> 8 < *(_DWORD *)(a3 + 80) )
  {
LABEL_30:
    v15 = -1;
    goto LABEL_14;
  }
  v28 = 0;
  do
  {
    v13 >>= 2;
    ++v28;
  }
  while ( v13 > 64 );
  *(_DWORD *)(a3 + 916) = v28;
  v16 = 0;
  v15 = 0;
  while ( 1 )
  {
    v31 = *(_DWORD *)(a3 + v16 + 916);
    if ( v31 <= 0 )
      break;
    v17 = *(_DWORD *)(v4 + 8);
    v18 = *(_DWORD *)(v4 + 16);
    ++v15;
    v4 += 16;
    *(_DWORD *)(v4 + 16) = v18;
    v19 = (v17 + v18) / 2;
    *(_DWORD *)(v4 + 8) = v19;
    v20 = v17 + v29;
    v21 = *(_DWORD *)(v4 - 4);
    *(_DWORD *)(v4 - 8) = v20 / 2;
    *(_DWORD *)v4 = (v20 / 2 + v19) / 2;
    v22 = *(_DWORD *)(v4 + 4);
    *(_DWORD *)(v4 + 20) = v22;
    v23 = v21 + v22;
    v24 = (v21 + v7) / 2;
    v23 /= 2;
    *(_DWORD *)(v4 - 4) = v24;
    *(_DWORD *)(v4 + 12) = v23;
    v25 = 4 * v15;
    *(_DWORD *)(v4 + 4) = (v24 + v23) / 2;
    *(_DWORD *)(a3 + 916 + v25 - 4) = v31 - 1;
    *(_DWORD *)(a3 + v25 + 916) = v31 - 1;
    if ( v15 == -1 )
      return 0;
LABEL_15:
    v16 = 4 * v15;
    v29 = *(_DWORD *)v4;
    v7 = *(_DWORD *)(v4 + 4);
  }
  --v15;
LABEL_14:
  v4 -= 16;
  sub_6F7A8270(a3, v29, v7);
  if ( v15 != -1 )
    goto LABEL_15;
  return 0;
}
