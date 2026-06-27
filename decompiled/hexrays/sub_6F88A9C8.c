int __cdecl sub_6F88A9C8(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // ecx@1
  int v6; // eax@1
  char *v7; // edx@1
  int v8; // ST24_4@2
  int v9; // esi@2
  int v10; // ST20_4@2
  int v11; // ST24_4@2
  int v12; // esi@2
  int v13; // ST10_4@2
  int v14; // ST20_4@2
  int v15; // ST00_4@2
  int v16; // ST1C_4@2
  int v17; // esi@2
  int v18; // ST14_4@2
  int v19; // esi@2
  int v20; // ST0C_4@2
  int v21; // ST18_4@2
  int v22; // esi@2
  int v23; // esi@4
  int v24; // ecx@4
  int v25; // ST24_4@4
  int v26; // ebx@4
  int result; // eax@4
  int v28; // [sp+8h] [bp-7Ch]@1
  _DWORD *v29; // [sp+20h] [bp-64h]@3
  char v30[72]; // [sp+30h] [bp-54h]@1
  char v31; // [sp+78h] [bp-Ch]@4

  v5 = *(_DWORD *)(a2 + 84);
  v6 = 0;
  v7 = v30;
  v28 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v8 = (*(_DWORD *)(v5 + 4 * v6) * *(_WORD *)(a3 + 2 * v6) << 13) + 1024;
    v9 = *(_WORD *)(a3 + 2 * v6 + 64) * 5793 * *(_DWORD *)(v5 + 4 * v6 + 128);
    v10 = v9 + v8;
    v11 = (v8 - v9 - v9) >> 11;
    v12 = *(_WORD *)(a3 + 2 * v6 + 32) * 10033 * *(_DWORD *)(v5 + 4 * v6 + 64);
    v13 = v12 + v10;
    v14 = v10 - v12;
    v15 = *(_DWORD *)(v5 + 4 * v6 + 32) * *(_WORD *)(a3 + 2 * v6 + 16);
    v16 = *(_DWORD *)(v5 + 4 * v6 + 96) * *(_WORD *)(a3 + 2 * v6 + 48);
    v17 = *(_DWORD *)(v5 + 4 * v6 + 160) * *(_WORD *)(a3 + 2 * v6 + 80);
    v18 = v17;
    v19 = 2998 * (v15 + v17);
    v20 = v19 + ((v15 + v16) << 13);
    v21 = v19 + ((v18 - v16) << 13);
    v22 = 4 * (v15 - v16 - v18);
    *(_DWORD *)&v30[4 * v6] = (v20 + v13) >> 11;
    *(_DWORD *)&v30[4 * v6 + 60] = (v13 - v20) >> 11;
    *(_DWORD *)&v30[4 * v6 + 12] = v22 + v11;
    *(_DWORD *)&v30[4 * v6 + 48] = v11 - v22;
    *(_DWORD *)&v30[4 * v6 + 24] = (v21 + v14) >> 11;
    *(_DWORD *)&v30[4 * v6++ + 36] = (v14 - v21) >> 11;
  }
  while ( v6 != 3 );
  v29 = a4;
  do
  {
    v23 = *v29 + a5;
    v24 = (*(_DWORD *)v7 + 16) << 13;
    v25 = 5793 * *((_DWORD *)v7 + 2);
    v26 = 10033 * *((_DWORD *)v7 + 1);
    *(_BYTE *)v23 = *(_BYTE *)(v28 + (((v26 + v24 + v25) >> 18) & 0x3FF));
    result = ((v24 + v25 - v26) >> 18) & 0x3FF;
    *(_BYTE *)(v23 + 2) = *(_BYTE *)(v28 + result);
    LOBYTE(result) = *(_BYTE *)(v28 + (((v24 - v25 - v25) >> 18) & 0x3FF));
    *(_BYTE *)(v23 + 1) = result;
    v7 += 12;
    ++v29;
  }
  while ( v7 != &v31 );
  return result;
}
