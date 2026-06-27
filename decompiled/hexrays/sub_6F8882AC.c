int *__cdecl sub_6F8882AC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // esi@1
  int v6; // eax@1
  int v7; // ST1C_4@2
  int v8; // ebx@2
  int v9; // edx@2
  int *result; // eax@3
  int v11; // edx@4
  int v12; // esi@4
  int v13; // ecx@4
  int v14; // ebx@4
  int v15; // ST1C_4@4
  int v16; // ecx@4
  int v17; // ST0C_4@4
  int v18; // ST08_4@4
  int v19; // ecx@4
  int v20; // esi@4
  int v21; // ST04_4@4
  int v22; // esi@4
  int v23; // ecx@4
  _DWORD *v24; // [sp+10h] [bp-6Ch]@3
  int v25; // [sp+14h] [bp-68h]@1
  int v26[6]; // [sp+28h] [bp-54h]@2
  int v27[6]; // [sp+40h] [bp-3Ch]@2
  int v28[6]; // [sp+58h] [bp-24h]@2
  char v29; // [sp+70h] [bp-Ch]@4

  v5 = *(_DWORD *)(a2 + 84);
  v6 = 0;
  v25 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v7 = (*(_DWORD *)(v5 + 4 * v6) * *(_WORD *)(a3 + 2 * v6) << 13) + 1024;
    v8 = *(_WORD *)(a3 + 2 * v6 + 32) * 5793 * *(_DWORD *)(v5 + 4 * v6 + 64);
    v9 = *(_WORD *)(a3 + 2 * v6 + 16) * 10033 * *(_DWORD *)(v5 + 4 * v6 + 32);
    v26[v6] = (v9 + v8 + v7) >> 11;
    v28[v6] = (v8 + v7 - v9) >> 11;
    v27[v6++] = (v7 - v8 - v8) >> 11;
  }
  while ( v6 != 6 );
  v24 = a4;
  result = v26;
  do
  {
    v11 = *v24 + a5;
    v12 = (*result + 16) << 13;
    v13 = 5793 * result[4];
    v14 = v12 + v13;
    v15 = v12 - v13 - v13;
    v16 = 10033 * result[2];
    v17 = v14 + v16;
    v18 = v14 - v16;
    v19 = result[1];
    v20 = 2998 * (v19 + result[5]);
    v21 = v20 + ((v19 + result[3]) << 13);
    v22 = ((result[5] - result[3]) << 13) + v20;
    v23 = (v19 - result[3] - result[5]) << 13;
    *(_BYTE *)v11 = *(_BYTE *)(v25 + (((v21 + v17) >> 18) & 0x3FF));
    *(_BYTE *)(v11 + 5) = *(_BYTE *)(v25 + (((v17 - v21) >> 18) & 0x3FF));
    *(_BYTE *)(v11 + 1) = *(_BYTE *)(v25 + (((v23 + v15) >> 18) & 0x3FF));
    *(_BYTE *)(v11 + 4) = *(_BYTE *)(v25 + (((v15 - v23) >> 18) & 0x3FF));
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v25 + (((v22 + v18) >> 18) & 0x3FF));
    *(_BYTE *)(v11 + 3) = *(_BYTE *)(v25 + (((v18 - v22) >> 18) & 0x3FF));
    result += 6;
    ++v24;
  }
  while ( (char *)result != &v29 );
  return result;
}
