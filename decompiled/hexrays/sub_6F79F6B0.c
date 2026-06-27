int __cdecl sub_6F79F6B0(int a1, int a2)
{
  unsigned __int16 v2; // ax@2
  int v3; // ebx@2
  int v4; // esi@2
  int v5; // ebx@6

  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 10) )
    sub_6F769150(a2, 8);
  v2 = _byteswap_ushort(*(_WORD *)(a1 + 2));
  v3 = *(_BYTE *)(a1 + 9) | (*(_BYTE *)(a1 + 8) << 8);
  v4 = _byteswap_ushort(*(_WORD *)(a1 + 8));
  if ( *(_DWORD *)(a2 + 68) < (unsigned int)v2 + a1 || v2 < 2 * (unsigned int)(unsigned __int16)v3 + 10 )
    sub_6F769150(a2, 8);
  if ( *(_DWORD *)(a2 + 72) && (_WORD)v3 )
  {
    v5 = a1 + 10;
    do
    {
      v5 += 2;
      if ( (unsigned int)(unsigned __int16)(*(_BYTE *)(v5 - 1) | (unsigned __int16)(*(_BYTE *)(v5 - 2) << 8)) >= *(_DWORD *)(a2 + 80) )
        sub_6F769150(a2, 16);
      --v4;
    }
    while ( v4 );
  }
  return 0;
}
