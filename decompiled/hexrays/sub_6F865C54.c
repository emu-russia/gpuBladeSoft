char __cdecl sub_6F865C54(int a1, int a2, int a3, int a4)
{
  int v4; // edx@1
  int v5; // eax@1
  int v6; // eax@2
  int v7; // esi@3
  int v8; // ecx@3
  int v9; // edx@3
  int v10; // ST10_4@3
  int v11; // ST0C_4@3
  int v12; // esi@3
  int v13; // ecx@3
  int v14; // ST10_4@3
  int v15; // ST10_4@3
  int v16; // edi@3
  int v17; // edx@6
  int v18; // eax@6
  int v19; // ebx@6
  int v20; // esi@6
  int v21; // eax@6
  int v22; // edx@6
  int v23; // ebx@6
  int v25; // [sp+8h] [bp-4Ch]@2
  int v26; // [sp+18h] [bp-3Ch]@1
  int v27; // [sp+1Ch] [bp-38h]@1
  int v28; // [sp+20h] [bp-34h]@1
  int v29; // [sp+24h] [bp-30h]@1
  _BYTE *v30; // [sp+28h] [bp-2Ch]@1
  _BYTE *v31; // [sp+2Ch] [bp-28h]@1
  int v32; // [sp+30h] [bp-24h]@1
  _BYTE *v33; // [sp+34h] [bp-20h]@1
  _BYTE *v34; // [sp+38h] [bp-1Ch]@1
  int v35; // [sp+3Ch] [bp-18h]@1
  int v36; // [sp+40h] [bp-14h]@1
  int v37; // [sp+44h] [bp-10h]@1

  v4 = *(_DWORD *)(a1 + 432);
  v35 = *(_DWORD *)(a1 + 292);
  v29 = *(_DWORD *)(v4 + 16);
  v28 = *(_DWORD *)(v4 + 20);
  v27 = *(_DWORD *)(v4 + 24);
  v26 = *(_DWORD *)(v4 + 28);
  v34 = *(_BYTE **)(*(_DWORD *)a2 + 8 * a3);
  v33 = *(_BYTE **)(*(_DWORD *)a2 + 8 * a3 + 4);
  v31 = *(_BYTE **)(*(_DWORD *)(a2 + 4) + 4 * a3);
  v30 = *(_BYTE **)(*(_DWORD *)(a2 + 8) + 4 * a3);
  v37 = *(_DWORD *)a4;
  v36 = *(_DWORD *)(a4 + 4);
  v5 = *(_DWORD *)(a1 + 92);
  v32 = *(_DWORD *)(a1 + 92) >> 1;
  if ( v32 )
  {
    v6 = 0;
    v25 = 0;
    do
    {
      v7 = 4 * v30[v25];
      v8 = 4 * v31[v25];
      v9 = (*(_DWORD *)(v26 + v8) + *(_DWORD *)(v27 + v7)) >> 16;
      v10 = *(_DWORD *)(v28 + v8);
      v11 = v34[2 * v25];
      v12 = v35 + *(_DWORD *)(v29 + v7);
      *(_BYTE *)(v37 + v6) = *(_BYTE *)(v12 + v11);
      *(_BYTE *)(v37 + v6 + 1) = *(_BYTE *)(v9 + v35 + v11);
      v13 = v35 + v10;
      *(_BYTE *)(v37 + v6 + 2) = *(_BYTE *)(v35 + v10 + v11);
      v14 = v34[2 * v25 + 1];
      *(_BYTE *)(v37 + v6 + 3) = *(_BYTE *)(v12 + v14);
      *(_BYTE *)(v37 + v6 + 4) = *(_BYTE *)(v9 + v35 + v14);
      *(_BYTE *)(v37 + v6 + 5) = *(_BYTE *)(v13 + v14);
      v15 = v33[2 * v25];
      *(_BYTE *)(v36 + v6) = *(_BYTE *)(v12 + v15);
      *(_BYTE *)(v36 + v6 + 1) = *(_BYTE *)(v9 + v35 + v15);
      *(_BYTE *)(v36 + v6 + 2) = *(_BYTE *)(v13 + v15);
      v16 = v33[2 * v25 + 1];
      *(_BYTE *)(v36 + v6 + 3) = *(_BYTE *)(v12 + v16);
      *(_BYTE *)(v36 + v6 + 4) = *(_BYTE *)(v9 + v35 + v16);
      *(_BYTE *)(v36 + v6 + 5) = *(_BYTE *)(v13 + v16);
      ++v25;
      v6 += 6;
    }
    while ( v32 != v25 );
    v31 += v32;
    v30 += v32;
    v34 += 2 * v32;
    v37 += 6 * v32;
    v33 += 2 * v32;
    v36 += 6 * v32;
    v5 = *(_DWORD *)(a1 + 92);
  }
  if ( v5 & 1 )
  {
    v17 = 4 * *v30;
    v18 = 4 * *v31;
    v19 = (*(_DWORD *)(v26 + v18) + *(_DWORD *)(v27 + v17)) >> 16;
    v20 = *(_DWORD *)(v28 + v18);
    v21 = *v34;
    v22 = v35 + *(_DWORD *)(v29 + v17);
    *(_BYTE *)v37 = *(_BYTE *)(v22 + v21);
    v23 = v35 + v19;
    *(_BYTE *)(v37 + 1) = *(_BYTE *)(v23 + v21);
    *(_BYTE *)(v37 + 2) = *(_BYTE *)(v20 + v35 + v21);
    v5 = *v33;
    *(_BYTE *)v36 = *(_BYTE *)(v22 + v5);
    *(_BYTE *)(v36 + 1) = *(_BYTE *)(v23 + v5);
    LOBYTE(v5) = *(_BYTE *)(v20 + v35 + v5);
    *(_BYTE *)(v36 + 2) = v5;
  }
  return v5;
}
