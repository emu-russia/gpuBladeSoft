unsigned int __cdecl sub_6F853D4F(int a1, int a2)
{
  int v2; // eax@28
  unsigned int result; // eax@42
  signed int i; // [sp+38h] [bp-20h]@11
  int j; // [sp+3Ch] [bp-1Ch]@30
  int k; // [sp+3Ch] [bp-1Ch]@33

  if ( a1 && a2 )
  {
    sub_6F853AF9(a1, a2);
    if ( *(_DWORD *)(a2 + 8) & 8 )
    {
      sub_6F85910A(a1, *(_DWORD *)(a2 + 16), *(_WORD *)(a2 + 20));
    }
    else if ( *(_BYTE *)(a2 + 25) == 3 )
    {
      sub_6F839044(a1, (int)"Valid palette required for paletted images");
    }
    if ( *(_DWORD *)(a2 + 8) & 0x10 )
    {
      if ( *(_DWORD *)(a1 + 124) & 0x80000 && *(_BYTE *)(a2 + 25) == 3 )
      {
        for ( i = 0; *(_WORD *)(a2 + 22) > i; ++i )
          *(_BYTE *)(i + *(_DWORD *)(a2 + 156)) = ~*(_BYTE *)(*(_DWORD *)(a2 + 156) + i);
      }
      sub_6F859C7F(a1, *(_DWORD *)(a2 + 156), a2 + 160, *(_WORD *)(a2 + 22), *(_BYTE *)(a2 + 25));
    }
    if ( *(_DWORD *)(a2 + 8) & 0x20 )
      sub_6F859E35(a1, a2 + 170, *(_BYTE *)(a2 + 25));
    if ( *(_DWORD *)(a2 + 8) & 0x40 )
      sub_6F859FFA(a1, *(_DWORD *)(a2 + 204), *(_WORD *)(a2 + 20));
    if ( *(_DWORD *)(a2 + 8) & 0x100 )
      sub_6F85A576(a1, *(_DWORD *)(a2 + 180), *(_DWORD *)(a2 + 184), *(_BYTE *)(a2 + 188));
    if ( *(_DWORD *)(a2 + 8) & 0x400 )
      sub_6F85A5E6(
        a1,
        *(char **)(a2 + 208),
        *(_DWORD *)(a2 + 212),
        *(_DWORD *)(a2 + 216),
        *(_BYTE *)(a2 + 228),
        *(_BYTE *)(a2 + 229),
        *(const char **)(a2 + 220),
        *(_DWORD *)(a2 + 224));
    if ( *(_DWORD *)(a2 + 8) & 0x4000 )
      sub_6F85A7F0(a1, *(_BYTE *)(a2 + 252), *(const char **)(a2 + 256), *(const char **)(a2 + 260));
    if ( *(_DWORD *)(a2 + 8) & 0x80 )
      sub_6F85A8A4(a1, *(_DWORD *)(a2 + 192), *(_DWORD *)(a2 + 196), *(_BYTE *)(a2 + 200));
    if ( *(_DWORD *)(a2 + 8) & 0x200 )
    {
      sub_6F85A914(a1, a2 + 140);
      v2 = *(_DWORD *)(a1 + 116);
      BYTE1(v2) |= 2u;
      *(_DWORD *)(a1 + 116) = v2;
    }
    if ( *(_DWORD *)(a2 + 8) & 0x2000 )
    {
      for ( j = 0; *(_DWORD *)(a2 + 248) > j; ++j )
        sub_6F859834(a1, 16 * j + *(_DWORD *)(a2 + 244));
    }
    for ( k = 0; *(_DWORD *)(a2 + 128) > k; ++k )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k) <= 0 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k) )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k) == -1 )
          {
            sub_6F85A09F(
              a1,
              *(char **)(*(_DWORD *)(a2 + 136) + 28 * k + 4),
              *(const char **)(*(_DWORD *)(a2 + 136) + 28 * k + 8));
            *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k) = -3;
          }
        }
        else
        {
          sub_6F85A18B(
            a1,
            *(char **)(*(_DWORD *)(a2 + 136) + 28 * k + 4),
            *(const char **)(*(_DWORD *)(a2 + 136) + 28 * k + 8),
            0,
            *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k));
          *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k) = -2;
        }
      }
      else
      {
        sub_6F85A2EF(
          a1,
          *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k),
          *(char **)(*(_DWORD *)(a2 + 136) + 28 * k + 4),
          *(const char **)(*(_DWORD *)(a2 + 136) + 28 * k + 20),
          *(const char **)(*(_DWORD *)(a2 + 136) + 28 * k + 24),
          *(const char **)(*(_DWORD *)(a2 + 136) + 28 * k + 8));
        *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * k) = -3;
      }
    }
    result = sub_6F853A04(a1, a2, 2u);
  }
  return result;
}
