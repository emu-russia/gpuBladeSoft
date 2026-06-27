signed int __cdecl sub_6F7A9C40(int a1)
{
  signed int result; // eax@1
  int v2; // edx@1
  int v3; // ebx@1
  int v4; // esi@2
  __int16 v5; // ax@2
  __int16 v6; // dx@2

  result = 20;
  v2 = *(_DWORD *)(a1 + 200);
  v3 = v2 + 10;
  if ( *(_DWORD *)(a1 + 204) >= (unsigned int)(v2 + 10) )
  {
    *(_WORD *)(a1 + 32) = _byteswap_ushort(*(_WORD *)v2);
    *(_DWORD *)(a1 + 36) = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 2));
    *(_DWORD *)(a1 + 40) = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 4));
    v4 = *(_BYTE *)(v2 + 7);
    *(_DWORD *)(a1 + 44) = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 6));
    v5 = *(_BYTE *)(v2 + 8);
    v6 = *(_BYTE *)(v2 + 9);
    *(_DWORD *)(a1 + 200) = v3;
    *(_DWORD *)(a1 + 48) = (signed __int16)(v6 | (v5 << 8));
    result = 0;
  }
  return result;
}
