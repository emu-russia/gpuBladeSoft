int __cdecl sub_6F888484(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi@1
  int result; // eax@1
  int v7; // ecx@2
  int v8; // edx@2
  int v9; // esi@3
  int v10; // ecx@4
  int v11; // edi@4
  int v12; // ST10_4@4
  int v13; // ST08_4@4
  int v14; // edx@4
  int v15; // ST0C_4@4
  int v16; // ST14_4@4
  int v17; // ecx@4
  int v18; // edi@4
  int v19; // [sp+8h] [bp-3Ch]@1
  char v20[44]; // [sp+18h] [bp-2Ch]@2

  v5 = *(_DWORD *)(a2 + 84);
  result = 0;
  v19 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v7 = *(_DWORD *)(v5 + 4 * result) * *(_WORD *)(a3 + 2 * result);
    v8 = *(_DWORD *)(v5 + 4 * result + 32) * *(_WORD *)(a3 + 2 * result + 16);
    *(_DWORD *)&v20[4 * result] = v8 + v7;
    *(_DWORD *)&v20[4 * result++ + 16] = v7 - v8;
  }
  while ( result != 4 );
  v9 = v19;
  LOBYTE(result) = 0;
  do
  {
    v10 = *(_DWORD *)&v20[4 * result] + 4;
    v11 = *(_DWORD *)&v20[4 * result + 8];
    v12 = (v11 + v10) << 13;
    v13 = (v10 - v11) << 13;
    v14 = *(_DWORD *)&v20[4 * result + 12];
    v15 = 4433 * (v14 + *(_DWORD *)&v20[4 * result + 4]);
    v16 = v15 + 6270 * *(_DWORD *)&v20[4 * result + 4];
    v17 = v15 - 15137 * v14;
    v18 = *(_DWORD *)(a4 + result) + a5;
    *(_BYTE *)v18 = *(_BYTE *)(v9 + (((v12 + v16) >> 16) & 0x3FF));
    *(_BYTE *)(v18 + 3) = *(_BYTE *)(v9 + (((v12 - v16) >> 16) & 0x3FF));
    *(_BYTE *)(v18 + 1) = *(_BYTE *)(v9 + (((v17 + v13) >> 16) & 0x3FF));
    *(_BYTE *)(v18 + 2) = *(_BYTE *)(v9 + (((v13 - v17) >> 16) & 0x3FF));
    result += 4;
  }
  while ( result != 8 );
  return result;
}
