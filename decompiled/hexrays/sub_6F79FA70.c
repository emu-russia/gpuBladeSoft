int __cdecl sub_6F79FA70(int a1, int a2)
{
  int v2; // ebx@1
  unsigned int v3; // eax@2
  unsigned int v4; // esi@2

  v2 = a1 + 20;
  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 20) )
    sub_6F769150(a2, 8);
  v3 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  v4 = _byteswap_ulong(*(_DWORD *)(a1 + 16));
  if ( v3 > *(_DWORD *)(a2 + 68) - a1 || v3 <= 0x13 || v4 > (v3 - 20) >> 1 )
    sub_6F769150(a2, 8);
  if ( *(_DWORD *)(a2 + 72) && v4 )
  {
    do
    {
      v2 += 2;
      if ( (unsigned int)(unsigned __int16)(*(_BYTE *)(v2 - 1) | (unsigned __int16)(*(_BYTE *)(v2 - 2) << 8)) >= *(_DWORD *)(a2 + 80) )
        sub_6F769150(a2, 16);
      --v4;
    }
    while ( v4 );
  }
  return 0;
}
