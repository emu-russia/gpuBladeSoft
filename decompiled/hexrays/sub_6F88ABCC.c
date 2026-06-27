int __cdecl sub_6F88ABCC(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax@1
  int v6; // ebx@2
  int v7; // edx@2
  int v8; // ST0C_4@2
  int v9; // ST08_4@2
  int v10; // ebx@2
  int v11; // edx@2
  int v12; // edi@2
  int v13; // esi@2
  int v14; // edi@2
  int v15; // ebx@4
  int v16; // edx@4
  int v17; // esi@4
  int v18; // [sp+0h] [bp-3Ch]@1
  int v19; // [sp+4h] [bp-38h]@1
  char v20[44]; // [sp+10h] [bp-2Ch]@2

  v19 = *(_DWORD *)(a2 + 84);
  result = 0;
  v18 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = *(_DWORD *)(v19 + 4 * result) * *(_WORD *)(a3 + 2 * result);
    v7 = *(_DWORD *)(v19 + 4 * result + 64) * *(_WORD *)(a3 + 2 * result + 32);
    v8 = (v7 + v6) << 13;
    v9 = (v6 - v7) << 13;
    v10 = *(_DWORD *)(v19 + 4 * result + 32) * *(_WORD *)(a3 + 2 * result + 16);
    v11 = *(_DWORD *)(v19 + 4 * result + 96) * *(_WORD *)(a3 + 2 * result + 48);
    v12 = 4433 * (v11 + v10);
    v13 = v12 + 6270 * v10;
    v14 = v12 - 15137 * v11;
    *(_DWORD *)&v20[4 * result] = v13 + v8;
    *(_DWORD *)&v20[4 * result + 24] = v8 - v13;
    *(_DWORD *)&v20[4 * result + 8] = v14 + v9;
    *(_DWORD *)&v20[4 * result++ + 16] = v9 - v14;
  }
  while ( result != 2 );
  LOBYTE(result) = 0;
  do
  {
    v15 = *(_DWORD *)(a4 + 4 * result) + a5;
    v16 = *(_DWORD *)&v20[8 * result] + 0x8000;
    v17 = *(_DWORD *)&v20[8 * result + 4];
    *(_BYTE *)v15 = *(_BYTE *)(v18 + (((v17 + v16) >> 16) & 0x3FF));
    *(_BYTE *)(v15 + 1) = *(_BYTE *)(v18 + (((v16 - v17) >> 16) & 0x3FF));
    ++result;
  }
  while ( result != 4 );
  return result;
}
