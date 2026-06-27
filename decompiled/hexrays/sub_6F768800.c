int __cdecl sub_6F768800(int a1)
{
  int result; // eax@1

  result = sub_6F773D90(*(_DWORD *)(a1 + 28), *(_DWORD *)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
