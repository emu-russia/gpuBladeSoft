int __cdecl sub_6F8446DD(int a1, int a2)
{
  unsigned int v2; // eax@57
  int result; // eax@59

  if ( *(_DWORD *)(a1 + 124) & 0x1000 )
  {
    if ( *(_BYTE *)(a2 + 25) == 3 )
    {
      if ( *(_WORD *)(a1 + 336) )
        *(_BYTE *)(a2 + 25) = 6;
      else
        *(_BYTE *)(a2 + 25) = 2;
      *(_BYTE *)(a2 + 24) = 8;
      *(_WORD *)(a2 + 22) = 0;
    }
    else
    {
      if ( *(_WORD *)(a1 + 336) && *(_DWORD *)(a1 + 124) & 0x2000000 )
        *(_BYTE *)(a2 + 25) |= 4u;
      if ( *(_BYTE *)(a2 + 24) <= 7u )
        *(_BYTE *)(a2 + 24) = 8;
      *(_WORD *)(a2 + 22) = 0;
    }
  }
  if ( *(_DWORD *)(a1 + 124) & 0x80 )
  {
    *(_DWORD *)(a2 + 170) = *(_DWORD *)(a1 + 360);
    *(_DWORD *)(a2 + 174) = *(_DWORD *)(a1 + 364);
    *(_WORD *)(a2 + 178) = *(_WORD *)(a1 + 368);
  }
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 732);
  if ( *(_BYTE *)(a2 + 24) == 16 )
  {
    if ( *(_DWORD *)(a1 + 124) & 0x4000000 )
      *(_BYTE *)(a2 + 24) = 8;
    if ( *(_DWORD *)(a1 + 124) & 0x400 )
      *(_BYTE *)(a2 + 24) = 8;
  }
  if ( *(_DWORD *)(a1 + 124) & 0x4000 )
    *(_BYTE *)(a2 + 25) |= 2u;
  if ( *(_DWORD *)(a1 + 124) & 0x600000 )
    *(_BYTE *)(a2 + 25) &= 0xFDu;
  if ( *(_DWORD *)(a1 + 124) & 0x40
    && (*(_BYTE *)(a2 + 25) == 2 || *(_BYTE *)(a2 + 25) == 6)
    && *(_DWORD *)(a1 + 520)
    && *(_BYTE *)(a2 + 24) == 8 )
  {
    *(_BYTE *)(a2 + 25) = 3;
  }
  if ( *(_DWORD *)(a1 + 124) & 0x200 && *(_BYTE *)(a2 + 24) == 8 && *(_BYTE *)(a2 + 25) != 3 )
    *(_BYTE *)(a2 + 24) = 16;
  if ( *(_DWORD *)(a1 + 124) & 4 && *(_BYTE *)(a2 + 24) <= 7u )
    *(_BYTE *)(a2 + 24) = 8;
  if ( *(_BYTE *)(a2 + 25) == 3 )
  {
    *(_BYTE *)(a2 + 29) = 1;
  }
  else if ( *(_BYTE *)(a2 + 25) & 2 )
  {
    *(_BYTE *)(a2 + 29) = 3;
  }
  else
  {
    *(_BYTE *)(a2 + 29) = 1;
  }
  if ( *(_DWORD *)(a1 + 124) & 0x40000 )
  {
    *(_BYTE *)(a2 + 25) &= 0xFBu;
    *(_WORD *)(a2 + 22) = 0;
  }
  if ( *(_BYTE *)(a2 + 25) & 4 )
    ++*(_BYTE *)(a2 + 29);
  if ( *(_DWORD *)(a1 + 124) & 0x8000 && (*(_BYTE *)(a2 + 25) == 2 || !*(_BYTE *)(a2 + 25)) )
  {
    ++*(_BYTE *)(a2 + 29);
    if ( *(_DWORD *)(a1 + 124) & 0x1000000 )
      *(_BYTE *)(a2 + 25) |= 4u;
  }
  if ( *(_DWORD *)(a1 + 124) & 0x100000 )
  {
    if ( *(_BYTE *)(a2 + 24) < *(_BYTE *)(a1 + 112) )
      *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 112);
    if ( *(_BYTE *)(a2 + 29) < *(_BYTE *)(a1 + 113) )
      *(_BYTE *)(a2 + 29) = *(_BYTE *)(a1 + 113);
  }
  *(_BYTE *)(a2 + 30) = *(_BYTE *)(a2 + 24) * *(_BYTE *)(a2 + 29);
  if ( *(_BYTE *)(a2 + 30) <= 7u )
    v2 = (*(_DWORD *)a2 * (unsigned int)*(_BYTE *)(a2 + 30) + 7) >> 3;
  else
    v2 = *(_DWORD *)a2 * (unsigned __int8)(*(_BYTE *)(a2 + 30) >> 3);
  *(_DWORD *)(a2 + 12) = v2;
  result = a1;
  *(_DWORD *)(a1 + 312) = *(_DWORD *)(a2 + 12);
  return result;
}
