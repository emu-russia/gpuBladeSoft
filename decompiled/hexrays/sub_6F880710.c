int __cdecl sub_6F880710(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax@1
  int v6; // ebx@2
  int v7; // ecx@2
  int v8; // ST14_4@2
  int v9; // ST10_4@2
  int v10; // ebx@2
  int v11; // ecx@2
  int v12; // edi@2
  int v13; // ebx@2
  int v14; // edi@2
  int v15; // ebx@4
  int v16; // esi@4
  int v17; // ST0C_4@4
  int v18; // ST08_4@4
  int v19; // ecx@4
  int v20; // ST10_4@4
  int v21; // ST14_4@4
  int v22; // ebx@4
  int v23; // esi@4
  int v24; // [sp+4h] [bp-60h]@1
  int v25; // [sp+Ch] [bp-58h]@1
  char v26[76]; // [sp+18h] [bp-4Ch]@2

  v25 = *(_DWORD *)(a2 + 84);
  result = 0;
  v24 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = *(_DWORD *)(v25 + 4 * result) * *(_WORD *)(a3 + 2 * result);
    v7 = *(_DWORD *)(v25 + 4 * result + 64) * *(_WORD *)(a3 + 2 * result + 32);
    v8 = 4 * (v7 + v6);
    v9 = 4 * (v6 - v7);
    v10 = *(_DWORD *)(v25 + 4 * result + 32) * *(_WORD *)(a3 + 2 * result + 16);
    v11 = *(_DWORD *)(v25 + 4 * result + 96) * *(_WORD *)(a3 + 2 * result + 48);
    v12 = 4433 * (v11 + v10) + 1024;
    v13 = (v12 + 6270 * v10) >> 11;
    v14 = (v12 - 15137 * v11) >> 11;
    *(_DWORD *)&v26[4 * result] = v13 + v8;
    *(_DWORD *)&v26[4 * result + 48] = v8 - v13;
    *(_DWORD *)&v26[4 * result + 16] = v14 + v9;
    *(_DWORD *)&v26[4 * result++ + 32] = v9 - v14;
  }
  while ( result != 4 );
  LOBYTE(result) = 0;
  do
  {
    v15 = *(_DWORD *)&v26[4 * result] + 16;
    v16 = *(_DWORD *)&v26[4 * result + 8];
    v17 = (v16 + v15) << 13;
    v18 = (v15 - v16) << 13;
    v19 = *(_DWORD *)&v26[4 * result + 12];
    v20 = 4433 * (v19 + *(_DWORD *)&v26[4 * result + 4]);
    v21 = v20 + 6270 * *(_DWORD *)&v26[4 * result + 4];
    v22 = v20 - 15137 * v19;
    v23 = *(_DWORD *)(a4 + result) + a5;
    *(_BYTE *)v23 = *(_BYTE *)(v24 + (((v17 + v21) >> 18) & 0x3FF));
    *(_BYTE *)(v23 + 3) = *(_BYTE *)(v24 + (((v17 - v21) >> 18) & 0x3FF));
    *(_BYTE *)(v23 + 1) = *(_BYTE *)(v24 + (((v22 + v18) >> 18) & 0x3FF));
    *(_BYTE *)(v23 + 2) = *(_BYTE *)(v24 + (((v18 - v22) >> 18) & 0x3FF));
    result += 4;
  }
  while ( result != 16 );
  return result;
}
