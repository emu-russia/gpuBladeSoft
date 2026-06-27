int __cdecl sub_6F8664CC(int a1)
{
  int v1; // edx@1
  int result; // eax@1

  v1 = *(_DWORD *)(a1 + 432);
  *(_DWORD *)(v1 + 92) = *(_DWORD *)(a1 + 276);
  result = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v1 + 96) = result;
  return result;
}
