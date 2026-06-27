char __cdecl sub_6F872C7C(int a1, int *a2)
{
  int v2; // edx@4
  int v4; // ecx@8
  int v5; // ebx@8
  int v6; // esi@8
  int v7; // edx@8
  signed int v8; // edi@8
  int v9; // esi@11
  int v10; // eax@11
  int v11; // ebx@13
  int v12; // eax@16
  int v13; // ecx@16
  signed int v14; // ebx@17
  int v15; // ebx@18
  signed int v16; // eax@21
  signed int v17; // ebx@32
  int v18; // [sp+1Ch] [bp-7Ch]@9
  int v19; // [sp+3Ch] [bp-5Ch]@4
  int v20; // [sp+40h] [bp-58h]@8
  int v21; // [sp+44h] [bp-54h]@4
  int v22; // [sp+48h] [bp-50h]@4
  int v23; // [sp+4Ch] [bp-4Ch]@4
  int v24; // [sp+50h] [bp-48h]@1
  signed int v25; // [sp+54h] [bp-44h]@18
  int v26; // [sp+58h] [bp-40h]@12
  int v27; // [sp+5Ch] [bp-3Ch]@8
  int v28; // [sp+6Ch] [bp-2Ch]@8
  int v29; // [sp+70h] [bp-28h]@8
  int v30; // [sp+74h] [bp-24h]@23
  int v31; // [sp+78h] [bp-20h]@23
  int v32; // [sp+7Ch] [bp-1Ch]@8

  v24 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) && !*(_DWORD *)(*(_DWORD *)(a1 + 424) + 40) && !sub_6F872974(a1) )
    return 0;
  if ( *(_BYTE *)(v24 + 36) )
    goto LABEL_7;
  v23 = *(_DWORD *)(a1 + 372);
  v22 = *(_DWORD *)(a1 + 380);
  v21 = *(_DWORD *)(a1 + 388);
  v2 = *(_DWORD *)(v24 + 16);
  v19 = v2;
  if ( v2 )
  {
    v19 = v2 - 1;
LABEL_6:
    *(_DWORD *)(v24 + 16) = v19;
LABEL_7:
    --*(_DWORD *)(v24 + 40);
    return 1;
  }
  v32 = a1;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)v4;
  v28 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(v4 + 4);
  v29 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v24 + 8);
  v8 = *(_DWORD *)(v24 + 12);
  v20 = *a2;
  v27 = *(_DWORD *)(a1 + 368);
  if ( v23 < v27 )
  {
LABEL_36:
    *(_DWORD *)v4 = v5;
    *(_DWORD *)(v4 + 4) = v6;
    *(_DWORD *)(v24 + 8) = v7;
    *(_DWORD *)(v24 + 12) = v8;
    goto LABEL_6;
  }
  v18 = *(_DWORD *)(v24 + 60);
  while ( 1 )
  {
    if ( v8 > 7 )
      goto LABEL_42;
    if ( !sub_6F87276C((int)&v28, v7, v8, 0) )
      return 0;
    v7 = v30;
    v8 = v31;
    if ( v31 > 7 )
    {
LABEL_42:
      v12 = (v7 >> (v8 - 8)) & 0xFF;
      v13 = *(_DWORD *)(v18 + 4 * v12 + 144);
      if ( v13 )
      {
        v8 -= v13;
        v14 = *(_BYTE *)(v18 + v12 + 1168);
        goto LABEL_18;
      }
      v16 = 9;
    }
    else
    {
      v16 = 1;
    }
    v14 = sub_6F8728A4((int)&v28, v7, v8, v18, v16);
    if ( v14 < 0 )
      return 0;
    v7 = v30;
    v8 = v31;
LABEL_18:
    v25 = v14 >> 4;
    v15 = v14 & 0xF;
    if ( v15 )
    {
      if ( v8 < v15 )
      {
        if ( !sub_6F87276C((int)&v28, v7, v8, v15) )
          return 0;
        v7 = v30;
        v8 = v31;
      }
      v8 -= v15;
      v9 = dword_6FB9EC80[v15];
      v10 = v9 & (v7 >> v8);
      if ( v10 > dword_6FB9EC7C[v15] )
        v26 = v9 & (v7 >> v8);
      else
        v26 = v10 - v9;
      v11 = v27 + v25;
      *(_WORD *)(v20 + 2 * *(_DWORD *)(v21 + 4 * (v27 + v25))) = v26 << v22;
      goto LABEL_14;
    }
    if ( v25 != 15 )
      break;
    v11 = v27 + 15;
LABEL_14:
    v27 = v11 + 1;
    if ( v23 < v11 + 1 )
    {
      v4 = *(_DWORD *)(a1 + 24);
      v5 = v28;
      v6 = v29;
      goto LABEL_36;
    }
  }
  v17 = 1 << v25;
  if ( !v25 )
    goto LABEL_35;
  if ( v8 >= v25 )
    goto LABEL_34;
  if ( sub_6F87276C((int)&v28, v7, v8, v25) )
  {
    v7 = v30;
    v8 = v31;
LABEL_34:
    v8 -= v25;
    v17 += dword_6FB9EC80[v25] & (v7 >> v8);
LABEL_35:
    v19 = v17 - 1;
    v4 = *(_DWORD *)(a1 + 24);
    v5 = v28;
    v6 = v29;
    goto LABEL_36;
  }
  return 0;
}
