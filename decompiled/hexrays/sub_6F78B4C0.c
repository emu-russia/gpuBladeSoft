int __cdecl sub_6F78B4C0(int a1, int a2)
{
  int v2; // esi@1

  v2 = *(_DWORD *)a1;
  sub_6F76C670(*(_DWORD *)a1, a2);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(v2 + 204) << 6;
  *(_DWORD *)(a1 + 28) = -64 * *(_DWORD *)(v2 + 208);
  *(_DWORD *)(a1 + 36) = *(_WORD *)(v2 + 236) << 6;
  return 0;
}
