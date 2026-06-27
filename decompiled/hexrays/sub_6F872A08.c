char __cdecl sub_6F872A08(int a1, int a2)
{
  int v2; // edx@4
  int v3; // ebx@4
  signed int v4; // eax@4
  int v5; // edi@5
  int v6; // ebx@6
  int v7; // edx@9
  int v8; // ebx@11
  int v9; // esi@12
  int v10; // ecx@13
  int v11; // edx@13
  signed int v12; // edx@14
  int v14; // [sp+18h] [bp-80h]@5
  int v15; // [sp+1Ch] [bp-7Ch]@12
  int v16; // [sp+40h] [bp-58h]@1
  int v17; // [sp+44h] [bp-54h]@1
  int v18; // [sp+48h] [bp-50h]@4
  _WORD *v19; // [sp+48h] [bp-50h]@12
  int v20; // [sp+4Ch] [bp-4Ch]@4
  int v21; // [sp+4Ch] [bp-4Ch]@9
  int *v22; // [sp+4Ch] [bp-4Ch]@14
  char v23; // [sp+58h] [bp-40h]@4
  int v24[4]; // [sp+5Ch] [bp-3Ch]@11
  int v25; // [sp+6Ch] [bp-2Ch]@4
  int v26; // [sp+70h] [bp-28h]@4
  int v27; // [sp+74h] [bp-24h]@16
  int v28; // [sp+78h] [bp-20h]@16
  int v29; // [sp+7Ch] [bp-1Ch]@4

  v17 = *(_DWORD *)(a1 + 424);
  v16 = *(_DWORD *)(a1 + 380);
  if ( *(_DWORD *)(a1 + 252) && !*(_DWORD *)(*(_DWORD *)(a1 + 424) + 40) && !sub_6F872974(a1) )
    return 0;
  if ( *(_BYTE *)(v17 + 36) )
    goto LABEL_19;
  v29 = a1;
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)v2;
  v25 = *(_DWORD *)v2;
  v20 = *(_DWORD *)(v2 + 4);
  v26 = *(_DWORD *)(v2 + 4);
  v18 = *(_DWORD *)(v17 + 8);
  v4 = *(_DWORD *)(v17 + 12);
  qmemcpy(&v23, (const void *)(v17 + 16), 0x14u);
  if ( *(_DWORD *)(a1 + 324) <= 0 )
    goto LABEL_18;
  v14 = v18;
  v5 = 0;
  do
  {
    v19 = *(_WORD **)(a2 + 4 * v5);
    v9 = *(_DWORD *)(a1 + 4 * v5 + 328);
    v15 = *(_DWORD *)(v17 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 4 * v9 + 300) + 20) + 44);
    if ( v4 > 7 )
      goto LABEL_30;
    v22 = &v25;
    if ( !sub_6F87276C((int)&v25, v14, v4, 0) )
      return 0;
    v14 = v27;
    v4 = v28;
    if ( v28 > 7 )
    {
LABEL_30:
      v10 = (unsigned __int8)(v14 >> (v4 - 8));
      v11 = *(_DWORD *)(v15 + 4 * v10 + 144);
      if ( v11 )
      {
        v4 -= v11;
        v6 = *(_BYTE *)(v15 + v10 + 1168);
        goto LABEL_7;
      }
      v12 = 9;
      v22 = &v25;
    }
    else
    {
      v12 = 1;
    }
    v6 = sub_6F8728A4((int)v22, v14, v4, v15, v12);
    if ( v6 < 0 )
      return 0;
    v14 = v27;
    v4 = v28;
LABEL_7:
    if ( v6 )
    {
      if ( v6 > v4 )
      {
        if ( !sub_6F87276C((int)&v25, v14, v4, v6) )
          return 0;
        v14 = v27;
        v4 = v28;
      }
      v4 -= v6;
      v21 = dword_6FB9EC80[v6];
      v7 = v21 & (v14 >> v4);
      if ( v7 > dword_6FB9EC7C[v6] )
        v6 = v21 & (v14 >> v4);
      else
        v6 = v7 - v21;
    }
    v8 = v24[v9] + v6;
    v24[v9] = v8;
    *v19 = v8 << v16;
    ++v5;
  }
  while ( *(_DWORD *)(a1 + 324) > v5 );
  v18 = v14;
  v2 = *(_DWORD *)(a1 + 24);
  v3 = v25;
  v20 = v26;
LABEL_18:
  *(_DWORD *)v2 = v3;
  *(_DWORD *)(v2 + 4) = v20;
  *(_DWORD *)(v17 + 8) = v18;
  *(_DWORD *)(v17 + 12) = v4;
  qmemcpy((void *)(v17 + 16), &v23, 0x14u);
LABEL_19:
  --*(_DWORD *)(v17 + 40);
  return 1;
}
