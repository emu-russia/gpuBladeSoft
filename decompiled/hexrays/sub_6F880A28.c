int __cdecl sub_6F880A28(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edx@1
  int v6; // esi@1
  int v7; // ebx@1
  int v8; // ecx@1
  int v9; // edi@1
  int v10; // ecx@1
  int v11; // ebx@1
  int v12; // eax@1
  int v13; // esi@1
  int v14; // ST00_4@1
  int v15; // ebx@1
  int v16; // ebx@1

  v5 = *(_DWORD *)(a1 + 292) + 128;
  v6 = *(_DWORD *)(a2 + 84);
  v7 = *(_DWORD *)(v6 + 32) * *(_WORD *)(a3 + 16);
  v8 = *(_DWORD *)v6 * *(_WORD *)a3 + 4;
  v9 = v8 + v7;
  v10 = v8 - v7;
  v11 = *(_DWORD *)(v6 + 4) * *(_WORD *)(a3 + 2);
  v12 = *(_DWORD *)(v6 + 36) * *(_WORD *)(a3 + 18);
  v13 = v12 + v11;
  v14 = v11 - v12;
  v15 = *(_DWORD *)a4 + a5;
  *(_BYTE *)v15 = *(_BYTE *)(v5 + (((v13 + v9) >> 3) & 0x3FF));
  *(_BYTE *)(v15 + 1) = *(_BYTE *)(v5 + (((v9 - v13) >> 3) & 0x3FF));
  v16 = *(_DWORD *)(a4 + 4) + a5;
  *(_BYTE *)v16 = *(_BYTE *)(v5 + (((v10 + v14) >> 3) & 0x3FF));
  *(_BYTE *)(v16 + 1) = *(_BYTE *)(v5 + (((v10 - v14) >> 3) & 0x3FF));
  return v14;
}
