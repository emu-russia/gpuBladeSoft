int __cdecl sub_6F88B8B0(int a1)
{
  int result; // eax@1

  result = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 1732584193;
  *(_DWORD *)(a1 + 12) = -271733879;
  *(_DWORD *)(a1 + 16) = -1732584194;
  *(_DWORD *)(a1 + 20) = 271733878;
  return result;
}
