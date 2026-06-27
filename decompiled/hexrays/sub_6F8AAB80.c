_WORD *__cdecl sub_6F8AAB80(int a1, int a2)
{
  __int16 v2; // dx@1
  int v3; // edx@4
  _WORD *result; // eax@4
  _WORD *v5; // edx@7

  v2 = *(_WORD *)(a1 + 2);
  if ( *(_WORD *)a1 )
    v2 = *(_WORD *)(a1 + 2) | 0x8000;
  *(_WORD *)(a2 + 10) = v2;
  if ( *(_WORD *)(a1 + 2) == 0x7FFF )
  {
    v5 = (_WORD *)(a1 + 6);
    result = (_WORD *)(a1 + 18);
    while ( !*v5 )
    {
      ++v5;
      if ( result == v5 )
      {
        result = 0;
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_WORD *)(a2 + 8) = 0;
        *(_WORD *)(a2 + 10) |= 0x7FFFu;
        return result;
      }
    }
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 2147467264;
  }
  else
  {
    v3 = a2 + 8;
    result = (_WORD *)(a1 + 6);
    do
    {
      ++result;
      v3 -= 2;
      *(_WORD *)(v3 + 2) = *(result - 1);
    }
    while ( v3 != a2 - 2 );
  }
  return result;
}
