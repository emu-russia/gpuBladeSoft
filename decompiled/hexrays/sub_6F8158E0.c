int __cdecl sub_6F8158E0(int a1, int a2, signed int a3, signed int a4)
{
  int v4; // eax@1
  int result; // eax@1

  v4 = *(_DWORD *)(a2 + 32) * (a4 >> 1) + (a3 >> 1);
  *(_DWORD *)(a1 + 16) = v4 + *(_DWORD *)(a2 + 40);
  result = *(_DWORD *)(a2 + 72) + v4;
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
