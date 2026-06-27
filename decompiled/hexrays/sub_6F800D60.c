int __cdecl sub_6F800D60(int a1)
{
  int result; // eax@1

  result = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
