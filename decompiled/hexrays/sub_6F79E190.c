int __cdecl sub_6F79E190(int a1, int a2)
{
  unsigned int v2; // edx@1

  *(_DWORD *)(a1 + 16) = a2;
  v2 = *(_DWORD *)(a2 + 12);
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 40) = _byteswap_ulong(v2);
  return 0;
}
