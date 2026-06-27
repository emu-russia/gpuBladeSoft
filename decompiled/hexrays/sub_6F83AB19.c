signed int __cdecl sub_6F83AB19(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7, _DWORD *a8, _DWORD *a9)
{
  signed int result; // eax@7

  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    *a3 = *(_DWORD *)a2;
    *a4 = *(_DWORD *)(a2 + 4);
    *a5 = *(_BYTE *)(a2 + 24);
    *a6 = *(_BYTE *)(a2 + 25);
    if ( a8 )
      *a8 = *(_BYTE *)(a2 + 26);
    if ( a9 )
      *a9 = *(_BYTE *)(a2 + 27);
    if ( a7 )
      *a7 = *(_BYTE *)(a2 + 28);
    sub_6F8374CA(
      a1,
      *(_DWORD *)a2,
      *(_DWORD *)(a2 + 4),
      *(_BYTE *)(a2 + 24),
      *(_BYTE *)(a2 + 25),
      *(_BYTE *)(a2 + 28),
      *(_BYTE *)(a2 + 26),
      *(_BYTE *)(a2 + 27));
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
