int __cdecl sub_6F79DEE0(int a1, unsigned int *a2)
{
  unsigned int v2; // edx@1
  int v3; // ebx@2
  unsigned __int16 v4; // ax@2
  int v5; // esi@2
  int v6; // esi@4
  int v7; // edi@4
  unsigned __int16 *v8; // ebp@4
  int v9; // ebx@5
  int result; // eax@5
  int v11; // esi@6
  int v12; // esi@6

  v2 = *a2 + 1;
  if ( v2 > 0xFFFF )
    goto LABEL_10;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = _byteswap_ushort(*(_WORD *)(v3 + 6));
  v5 = *(_BYTE *)(v3 + 9) | (*(_BYTE *)(v3 + 8) << 8);
  if ( v2 < v4 )
    v2 = v4;
  v6 = _byteswap_ushort(*(_WORD *)(v3 + 8));
  v7 = v2 - v4;
  v8 = (unsigned __int16 *)(v3 + 2 * (v2 - v4) + 10);
  if ( (unsigned __int16)v6 <= v2 - v4 )
  {
LABEL_10:
    result = 0;
    *a2 = 0;
    return result;
  }
  v9 = v3 + 2 * (v2 - v4) + 12;
  LOWORD(result) = _byteswap_ushort(*v8);
  if ( !(_WORD)result )
  {
    v11 = v2++ + v6;
    v12 = v11 - v7;
    while ( v2 != v12 )
    {
      v9 += 2;
      LOWORD(result) = *(_BYTE *)(v9 - 1) | (unsigned __int16)(*(_BYTE *)(v9 - 2) << 8);
      if ( (_WORD)result )
        goto LABEL_11;
      ++v2;
    }
    goto LABEL_10;
  }
LABEL_11:
  *a2 = v2;
  return (unsigned __int16)result;
}
