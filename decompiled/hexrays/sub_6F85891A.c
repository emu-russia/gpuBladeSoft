int __cdecl sub_6F85891A(int a1, int a2, int a3)
{
  int result; // eax@1

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  result = a1;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
