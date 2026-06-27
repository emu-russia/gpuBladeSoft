int __cdecl sub_6F79D220(int a1, int a2)
{
  int v2; // ecx@1

  v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)a2 = _byteswap_ushort(*(_WORD *)(v2 + 4));
  return 0;
}
