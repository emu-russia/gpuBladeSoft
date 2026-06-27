signed int __cdecl sub_6F8B6450(int a1)
{
  int v1; // edx@1

  v1 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 12) = -v1;
  return sub_6F8B6400(a1, 0);
}
