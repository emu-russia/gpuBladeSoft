int __cdecl sub_6F79D250(int a1, unsigned int a2)
{
  int v2; // ecx@1
  int v3; // edx@2
  int v4; // ecx@2
  int v5; // edx@3
  unsigned __int16 v6; // cx@5
  int v7; // esi@5
  unsigned int v8; // ebx@5
  __int16 v9; // di@7
  unsigned __int8 v10; // si@7
  int v11; // eax@7
  __int16 v12; // dx@7
  __int16 v13; // cx@7
  int result; // eax@7
  __int16 v15; // dx@7

  v2 = *(_DWORD *)(a1 + 16);
  if ( a2 > 0xFFFF )
    return 0;
  v3 = v2 + 6;
  v4 = v2 + 518;
  if ( !(a2 >> 8) )
  {
    if ( !_byteswap_ushort(*(_WORD *)(v3 + 2 * (unsigned __int8)a2)) )
    {
      v5 = v4;
      goto LABEL_4;
    }
    return 0;
  }
  v5 = v4 + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(v3 + 2 * (a2 >> 8))) & 0xFFF8);
  if ( v4 == v5 )
    return 0;
LABEL_4:
  if ( !v5 )
    return 0;
  v6 = _byteswap_ushort(*(_WORD *)(v5 + 6));
  v7 = *(_BYTE *)(v5 + 3);
  v8 = (unsigned __int8)a2 - _byteswap_ushort(*(_WORD *)v5);
  if ( _byteswap_ushort(*(_WORD *)(v5 + 2)) <= v8 || !v6 )
    return 0;
  v9 = *(_BYTE *)(v5 + 4);
  v10 = *(_BYTE *)(v5 + 5);
  v11 = v5 + v6 + 2 * v8 + 6;
  v12 = *(_BYTE *)v11;
  v13 = *(_BYTE *)(v11 + 1);
  result = 0;
  v15 = v13 | (v12 << 8);
  if ( v15 )
    result = (unsigned __int16)((v10 | (unsigned __int16)(v9 << 8)) + v15);
  return result;
}
