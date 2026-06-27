signed int __cdecl sub_6F7A2EF0(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  signed int result; // eax@3
  unsigned int v6; // eax@7

  if ( a4 && a5 )
  {
    if ( a3 )
    {
      result = 142;
      if ( *(_WORD *)(a1 + 152) > a2 )
      {
        v6 = *(_DWORD *)(a1 + 156) + 16 * a2;
        *a3 = *(_DWORD *)v6;
        *a4 = *(_DWORD *)(v6 + 8);
        *a5 = *(_DWORD *)(v6 + 12);
        result = 0;
      }
    }
    else
    {
      *a5 = *(_WORD *)(a1 + 152);
      result = 0;
    }
  }
  else
  {
    result = 6;
  }
  return result;
}
