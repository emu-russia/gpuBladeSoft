int __cdecl sub_6F769110(int a1, int a2, int a3, int a4)
{
  int result; // eax@1

  result = a1;
  *(_DWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 68) = a3;
  *(_DWORD *)(a1 + 72) = a4;
  *(_DWORD *)(a1 + 76) = 0;
  return result;
}
