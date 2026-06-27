int __cdecl sub_6F88ACF0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx@1
  int v6; // eax@1
  int v7; // ST00_4@1
  int v8; // edx@1
  int result; // eax@1

  v5 = *(_DWORD *)(a1 + 292) + 128;
  v6 = *(_DWORD *)(a2 + 84);
  v7 = *(_DWORD *)v6 * *(_WORD *)a3 + 4;
  v8 = *(_DWORD *)(v6 + 32) * *(_WORD *)(a3 + 16);
  *(_BYTE *)(*(_DWORD *)a4 + a5) = *(_BYTE *)(v5 + (((v8 + v7) >> 3) & 0x3FF));
  result = *(_DWORD *)(a4 + 4);
  *(_BYTE *)(result + a5) = *(_BYTE *)(v5 + (((v7 - v8) >> 3) & 0x3FF));
  return result;
}
