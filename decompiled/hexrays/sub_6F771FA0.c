int __cdecl sub_6F771FA0(int a1, int a2, int a3)
{
  int result; // eax@1

  result = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 4) = a3;
  return result;
}
