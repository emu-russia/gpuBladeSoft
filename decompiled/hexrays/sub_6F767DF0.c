int __cdecl sub_6F767DF0(int a1, int a2)
{
  int *v2; // ecx@1
  int v3; // edx@1

  v2 = *(int **)a1;
  v3 = a2 + 28;
  *(_DWORD *)(v3 - 8) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v3 - 4) = *(_DWORD *)(a1 + 24);
  return sub_6F7C8060(v2, a1 + 28, a2 + 28);
}
