int __cdecl sub_6F800CF0(int a1)
{
  int result; // eax@1

  result = 0;
  *(_DWORD *)a1 = 0;
  memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 64) >> 2));
  *(_BYTE *)a1 = 3;
  *(_BYTE *)(a1 + 1) = 2;
  *(_BYTE *)(a1 + 2) = 1;
  *(_DWORD *)(a1 + 60) = 6;
  return result;
}
