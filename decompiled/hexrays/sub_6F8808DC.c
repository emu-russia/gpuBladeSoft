int __cdecl sub_6F8808DC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // edi@1
  int v6; // eax@1
  int v7; // ST08_4@2
  int v8; // ebx@2
  int v9; // edx@2
  int *v10; // edx@3
  int v11; // edi@4
  int v12; // ecx@4
  int v13; // ST0C_4@4
  int v14; // ebx@4
  int result; // eax@4
  int v16; // [sp+4h] [bp-48h]@1
  _DWORD *v17; // [sp+8h] [bp-44h]@3
  int v18[3]; // [sp+1Ch] [bp-30h]@2
  int v19[3]; // [sp+28h] [bp-24h]@2
  int v20[3]; // [sp+34h] [bp-18h]@2
  char v21; // [sp+40h] [bp-Ch]@4

  v5 = *(_DWORD *)(a2 + 84);
  v6 = 0;
  v16 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v7 = (*(_DWORD *)(v5 + 4 * v6) * *(_WORD *)(a3 + 2 * v6) << 13) + 1024;
    v8 = *(_WORD *)(a3 + 2 * v6 + 32) * 5793 * *(_DWORD *)(v5 + 4 * v6 + 64);
    v9 = *(_WORD *)(a3 + 2 * v6 + 16) * 10033 * *(_DWORD *)(v5 + 4 * v6 + 32);
    v18[v6] = (v8 + v7 + v9) >> 11;
    v20[v6] = (v8 + v7 - v9) >> 11;
    v19[v6++] = (v7 - v8 - v8) >> 11;
  }
  while ( v6 != 3 );
  v17 = a4;
  v10 = v18;
  do
  {
    v11 = *v17 + a5;
    v12 = (*v10 + 16) << 13;
    v13 = 5793 * v10[2];
    v14 = 10033 * v10[1];
    *(_BYTE *)v11 = *(_BYTE *)(v16 + (((v14 + v12 + v13) >> 18) & 0x3FF));
    result = ((v12 + v13 - v14) >> 18) & 0x3FF;
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v16 + result);
    LOBYTE(result) = *(_BYTE *)(v16 + (((v12 - v13 - v13) >> 18) & 0x3FF));
    *(_BYTE *)(v11 + 1) = result;
    v10 += 3;
    ++v17;
  }
  while ( (char *)v10 != &v21 );
  return result;
}
