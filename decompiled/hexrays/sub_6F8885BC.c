char __cdecl sub_6F8885BC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // esi@1
  int v6; // edx@1
  int v7; // ecx@1
  int v8; // eax@1
  int v9; // ebx@1
  char result; // al@1

  v5 = *(_DWORD *)(a1 + 292) + 128;
  v6 = *(_DWORD *)(a2 + 84);
  v7 = *a4 + a5;
  v8 = *(_DWORD *)v6 * *(_WORD *)a3 + 4;
  v9 = *(_DWORD *)(v6 + 4) * *(_WORD *)(a3 + 2);
  *(_BYTE *)v7 = *(_BYTE *)(v5 + (((v9 + v8) >> 3) & 0x3FF));
  result = *(_BYTE *)(v5 + (((v8 - v9) >> 3) & 0x3FF));
  *(_BYTE *)(v7 + 1) = result;
  return result;
}
