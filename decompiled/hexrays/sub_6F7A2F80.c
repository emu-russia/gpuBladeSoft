int __cdecl sub_6F7A2F80(int a1, int a2)
{
  int v2; // ebx@4

  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 4) )
    sub_6F769150(a2, 8);
  if ( *(_DWORD *)(a2 + 68) < a1 + (unsigned int)_byteswap_ushort(*(_WORD *)(a1 + 2))
    || _byteswap_ushort(*(_WORD *)(a1 + 2)) <= 0x105u )
  {
    sub_6F769150(a2, 8);
  }
  v2 = a1 + 6;
  if ( *(_DWORD *)(a2 + 72) )
  {
    do
    {
      if ( (unsigned int)*(_BYTE *)(++v2 - 1) >= *(_DWORD *)(a2 + 80) )
        sub_6F769150(a2, 16);
    }
    while ( v2 != a1 + 262 );
  }
  return 0;
}
