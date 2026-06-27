void __cdecl sub_6F850CC3(int a1, int a2, int a3, int a4, char a5, char a6, char a7, char a8, char a9)
{
  unsigned int v9; // eax@12

  if ( a1 && a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_DWORD *)(a2 + 4) = a4;
    *(_BYTE *)(a2 + 24) = a5;
    *(_BYTE *)(a2 + 25) = a6;
    *(_BYTE *)(a2 + 26) = a8;
    *(_BYTE *)(a2 + 27) = a9;
    *(_BYTE *)(a2 + 28) = a7;
    sub_6F8374CA(
      a1,
      *(_DWORD *)a2,
      *(_DWORD *)(a2 + 4),
      *(_BYTE *)(a2 + 24),
      *(_BYTE *)(a2 + 25),
      *(_BYTE *)(a2 + 28),
      *(_BYTE *)(a2 + 26),
      *(_BYTE *)(a2 + 27));
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
    if ( *(_BYTE *)(a2 + 25) & 4 )
      ++*(_BYTE *)(a2 + 29);
    *(_BYTE *)(a2 + 30) = *(_BYTE *)(a2 + 24) * *(_BYTE *)(a2 + 29);
    if ( *(_BYTE *)(a2 + 30) <= 7u )
      v9 = (a3 * (unsigned int)*(_BYTE *)(a2 + 30) + 7) >> 3;
    else
      v9 = a3 * (unsigned __int8)(*(_BYTE *)(a2 + 30) >> 3);
    *(_DWORD *)(a2 + 12) = v9;
  }
}
