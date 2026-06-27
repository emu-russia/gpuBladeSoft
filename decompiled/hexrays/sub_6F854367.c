int __cdecl sub_6F854367(int a1, int a2)
{
  int result; // eax@20
  int i; // [sp+2Ch] [bp-1Ch]@10

  if ( a1 )
  {
    if ( !(*(_DWORD *)(a1 + 116) & 4) )
      sub_6F839044(a1, (int)"No IDATs written into file");
    if ( *(_DWORD *)(a1 + 332) > (signed int)*(_WORD *)(a1 + 328) )
      sub_6F839519(a1, "Wrote palette index exceeding num_palette");
    if ( a2 )
    {
      if ( *(_DWORD *)(a2 + 8) & 0x200 && !(*(_DWORD *)(a1 + 116) & 0x200) )
        sub_6F85A914(a1, a2 + 140);
      for ( i = 0; *(_DWORD *)(a2 + 128) > i; ++i )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i) <= 0 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i) < 0 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i) == -1 )
            {
              sub_6F85A09F(
                a1,
                *(char **)(*(_DWORD *)(a2 + 136) + 28 * i + 4),
                *(const char **)(*(_DWORD *)(a2 + 136) + 28 * i + 8));
              *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i) = -3;
            }
          }
          else
          {
            sub_6F85A18B(
              a1,
              *(char **)(*(_DWORD *)(a2 + 136) + 28 * i + 4),
              *(const char **)(*(_DWORD *)(a2 + 136) + 28 * i + 8),
              0,
              *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i));
            *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i) = -2;
          }
        }
        else
        {
          sub_6F85A2EF(
            a1,
            *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i),
            *(char **)(*(_DWORD *)(a2 + 136) + 28 * i + 4),
            *(const char **)(*(_DWORD *)(a2 + 136) + 28 * i + 20),
            *(const char **)(*(_DWORD *)(a2 + 136) + 28 * i + 24),
            *(const char **)(*(_DWORD *)(a2 + 136) + 28 * i + 8));
          *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * i) = -3;
        }
      }
      sub_6F853A04(a1, a2, 8u);
    }
    *(_DWORD *)(a1 + 116) |= 8u;
    result = sub_6F85957A(a1);
  }
  return result;
}
