signed int __cdecl sub_6F77E250(int a1)
{
  signed int result; // eax@1
  int v2; // edi@3
  int v3; // esi@3
  signed int v4; // edx@3
  unsigned int v5; // ecx@4
  signed int v6; // eax@6
  int v7; // eax@10
  int v8; // edx@17

  result = 161;
  if ( *(_DWORD *)(a1 + 404) >= (unsigned int)(a1 + 24) )
  {
    v2 = *(_DWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 412);
    v4 = *(_BYTE *)v2;
    if ( (_BYTE)v4 == 30 )
    {
      v6 = (signed int)sub_6F77A6B0((_BYTE *)v2, *(_DWORD *)(a1 + 20), 0, 0) >> 16;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 20);
      if ( v4 == 28 )
      {
        if ( v5 < v2 + 3 )
          goto LABEL_19;
        v8 = *(_BYTE *)(v2 + 2);
        v6 = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 1));
      }
      else if ( v4 == 29 )
      {
        if ( v5 < v2 + 5 )
          goto LABEL_19;
        v6 = _byteswap_ulong(*(_DWORD *)(v2 + 1));
      }
      else
      {
        v6 = v4 - 139;
        if ( v4 > 246 )
        {
          if ( v4 <= 250 )
          {
            v6 = 0;
            if ( v5 >= v2 + 2 )
              v6 = ((v4 - 247) << 8) + *(_BYTE *)(v2 + 1) + 108;
LABEL_10:
            *(_DWORD *)(v3 + 120) = v6;
            v7 = sub_6F77C910(a1 + 20);
            if ( v7 >= 0 )
            {
              *(_DWORD *)(v3 + 116) = v7;
              return 0;
            }
            return 3;
          }
          if ( v5 >= v2 + 2 )
            return 3;
LABEL_19:
          v6 = 0;
          goto LABEL_10;
        }
      }
    }
    if ( v6 < 0 )
      return 3;
    goto LABEL_10;
  }
  return result;
}
