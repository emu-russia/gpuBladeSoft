char *__cdecl sub_6F7A01F0(int a1, int a2)
{
  int v2; // edi@1
  unsigned __int16 v3; // bx@1
  int v4; // esi@1
  char *result; // eax@1
  int v6; // ebx@3
  int v7; // edx@3
  int v8; // ecx@3
  int v9; // ebp@3
  char v10; // dl@6
  int v11; // [sp+2Ch] [bp-20h]@1

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_WORD *)(a1 + 8) >> 1;
  v4 = v3;
  result = sub_6F773B30(a2, 1, 0, v3 + 1, 0, &v11);
  if ( v11 )
  {
    result = 0;
  }
  else
  {
    if ( v3 )
    {
      v6 = v2 + 2;
      v7 = *(_BYTE *)(v2 + 1) | (*(_BYTE *)v2 << 8);
      v8 = 0;
      v9 = _byteswap_ushort(*(_WORD *)v2);
      if ( _byteswap_ushort(*(_WORD *)v2) )
      {
        do
        {
          v10 = v9;
          if ( (unsigned int)(v9 - 32) > 0x5F )
            v10 = 63;
          result[v8++] = v10;
          if ( v4 == v8 )
            break;
          v6 += 2;
          v9 = (unsigned __int16)(*(_BYTE *)(v6 - 1) | (unsigned __int16)(*(_BYTE *)(v6 - 2) << 8));
        }
        while ( *(_BYTE *)(v6 - 1) | (unsigned __int16)(*(_BYTE *)(v6 - 2) << 8) );
      }
    }
    else
    {
      v8 = 0;
    }
    result[v8] = 0;
  }
  return result;
}
