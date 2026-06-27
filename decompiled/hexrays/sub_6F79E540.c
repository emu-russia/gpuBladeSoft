int __cdecl sub_6F79E540(int a1, int a2)
{
  int v2; // eax@1

  v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 4) = 13;
  *(_DWORD *)a2 = _byteswap_ulong(*(_DWORD *)(v2 + 8));
  return 0;
}
