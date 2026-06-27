int __cdecl sub_6F7BF5E0(int a1)
{
  int v1; // esi@1
  int v2; // eax@1

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 132);
  sub_6F76C670(*(_DWORD *)a1, 0);
  v2 = *(_WORD *)(v1 + 80);
  *(_DWORD *)(a1 + 24) = v2 << 6;
  *(_DWORD *)(a1 + 28) = (v2 - *(_WORD *)(v1 + 96)) << 6;
  *(_DWORD *)(a1 + 36) = *(_WORD *)(v1 + 102) << 6;
  return 0;
}
