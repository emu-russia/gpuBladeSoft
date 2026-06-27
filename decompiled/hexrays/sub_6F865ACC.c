char __cdecl sub_6F865ACC(int a1, int a2, int a3, int *a4)
{
  int v4; // edx@1
  int v5; // eax@1
  int v6; // eax@2
  int v7; // edx@2
  int v8; // esi@3
  int v9; // ebx@3
  int v10; // ST08_4@3
  int v11; // ST04_4@3
  int v12; // ebx@3
  int v13; // esi@3
  int v14; // ST08_4@3
  int v15; // ebx@3
  int v16; // ebx@6
  int v17; // edx@6
  int v18; // edx@6
  int v19; // ecx@6
  int v21; // [sp+Ch] [bp-34h]@1
  int v22; // [sp+10h] [bp-30h]@1
  int v23; // [sp+14h] [bp-2Ch]@1
  int v24; // [sp+18h] [bp-28h]@1
  int v25; // [sp+1Ch] [bp-24h]@1
  _BYTE *v26; // [sp+20h] [bp-20h]@1
  _BYTE *v27; // [sp+24h] [bp-1Ch]@1
  int v28; // [sp+28h] [bp-18h]@1
  _BYTE *v29; // [sp+2Ch] [bp-14h]@1
  int v30; // [sp+30h] [bp-10h]@1

  v4 = *(_DWORD *)(a1 + 432);
  v30 = *(_DWORD *)(a1 + 292);
  v25 = *(_DWORD *)(v4 + 16);
  v24 = *(_DWORD *)(v4 + 20);
  v23 = *(_DWORD *)(v4 + 24);
  v22 = *(_DWORD *)(v4 + 28);
  v29 = *(_BYTE **)(*(_DWORD *)a2 + 4 * a3);
  v27 = *(_BYTE **)(*(_DWORD *)(a2 + 4) + 4 * a3);
  v26 = *(_BYTE **)(*(_DWORD *)(a2 + 8) + 4 * a3);
  v21 = *a4;
  v5 = *(_DWORD *)(a1 + 92);
  v28 = *(_DWORD *)(a1 + 92) >> 1;
  if ( v28 )
  {
    v6 = *a4;
    v7 = 0;
    do
    {
      v8 = 4 * v26[v7];
      v9 = 4 * v27[v7];
      v10 = (*(_DWORD *)(v22 + v9) + *(_DWORD *)(v23 + v8)) >> 16;
      v11 = *(_DWORD *)(v24 + v9);
      v12 = v29[2 * v7];
      v13 = v30 + *(_DWORD *)(v25 + v8);
      *(_BYTE *)v6 = *(_BYTE *)(v13 + v12);
      v14 = v30 + v10;
      *(_BYTE *)(v6 + 1) = *(_BYTE *)(v14 + v12);
      *(_BYTE *)(v6 + 2) = *(_BYTE *)(v30 + v11 + v12);
      v15 = v29[2 * v7 + 1];
      *(_BYTE *)(v6 + 3) = *(_BYTE *)(v13 + v15);
      *(_BYTE *)(v6 + 4) = *(_BYTE *)(v14 + v15);
      *(_BYTE *)(v6 + 5) = *(_BYTE *)(v30 + v11 + v15);
      v6 += 6;
      ++v7;
    }
    while ( v28 != v7 );
    v27 += v28;
    v26 += v28;
    v29 += 2 * v28;
    v21 += 6 * v28;
    v5 = *(_DWORD *)(a1 + 92);
  }
  if ( v5 & 1 )
  {
    v16 = 4 * *v26;
    v17 = 4 * *v27;
    v5 = (*(_DWORD *)(v22 + v17) + *(_DWORD *)(v23 + v16)) >> 16;
    v18 = *(_DWORD *)(v24 + v17);
    v19 = *v29;
    *(_BYTE *)v21 = *(_BYTE *)(v30 + *(_DWORD *)(v25 + v16) + v19);
    *(_BYTE *)(v21 + 1) = *(_BYTE *)(v30 + v5 + v19);
    LOBYTE(v5) = *(_BYTE *)(v30 + v18 + v19);
    *(_BYTE *)(v21 + 2) = v5;
  }
  return v5;
}
