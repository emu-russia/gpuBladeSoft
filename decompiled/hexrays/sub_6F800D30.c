int __cdecl sub_6F800D30(int a1)
{
  int result; // eax@1

  result = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 60) = 0;
  memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 64) >> 2));
  return result;
}
