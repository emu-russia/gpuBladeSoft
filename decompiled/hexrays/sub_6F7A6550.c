signed int __cdecl sub_6F7A6550(int a1, unsigned int a2, _DWORD *a3)
{
  signed int result; // eax@1
  int v4; // esi@4
  int v5; // eax@5
  unsigned int v6; // eax@12

  result = 35;
  if ( a1 )
  {
    result = 16;
    if ( *(_WORD *)(a1 + 264) > a2 )
    {
      v4 = *(_DWORD *)(a1 + 536);
      result = 7;
      if ( v4 )
      {
        *a3 = (*(int (__cdecl **)(_DWORD))(v4 + 16))(0);
        v5 = *(_DWORD *)(a1 + 468);
        if ( v5 == 0x10000 )
        {
          v6 = a2;
          if ( a2 > 0x101 )
            return 0;
        }
        else if ( v5 == 0x20000 )
        {
          if ( !*(_BYTE *)(a1 + 612) && sub_6F7A3280(a1) )
            return 0;
          if ( a2 >= *(_WORD *)(a1 + 616) )
            return 0;
          v6 = *(_WORD *)(*(_DWORD *)(a1 + 620) + 2 * a2);
          if ( (unsigned __int16)v6 > 0x101u )
          {
            *a3 = *(_DWORD *)(*(_DWORD *)(a1 + 624) + 4 * v6 - 1032);
            return 0;
          }
        }
        else
        {
          if ( v5 != 163840 )
            return 0;
          if ( !*(_BYTE *)(a1 + 612) && sub_6F7A3280(a1) )
            return 0;
          if ( a2 >= *(_WORD *)(a1 + 616) )
            return 0;
          v6 = a2 + *(_BYTE *)(*(_DWORD *)(a1 + 620) + a2);
        }
        *a3 = (*(int (__cdecl **)(unsigned int))(v4 + 16))(v6);
        return 0;
      }
    }
  }
  return result;
}
