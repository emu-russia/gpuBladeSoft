int __cdecl sub_6F79E560(int a1, int a2)
{
  unsigned int v2; // edx@1

  *(_DWORD *)(a1 + 16) = a2;
  v2 = *(_DWORD *)(a2 + 6);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = _byteswap_ulong(v2);
  return 0;
}
