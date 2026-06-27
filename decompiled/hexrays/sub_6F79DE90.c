int __cdecl sub_6F79DE90(int a1, int a2)
{
  int v2; // ecx@1
  unsigned int v3; // ebx@1
  int result; // eax@1
  int v5; // edx@2

  v2 = *(_DWORD *)(a1 + 16);
  v3 = a2 - _byteswap_ushort(*(_WORD *)(v2 + 6));
  result = 0;
  if ( _byteswap_ushort(*(_WORD *)(v2 + 8)) > v3 )
  {
    v5 = *(_BYTE *)(v2 + 2 * v3 + 11);
    result = _byteswap_ushort(*(_WORD *)(v2 + 2 * v3 + 10));
  }
  return result;
}
