_WORD *__cdecl sub_6F8AA3E0(int a1, int a2)
{
  int v2; // edx@1
  _WORD *result; // eax@1
  unsigned __int16 *v4; // ebx@3
  unsigned __int16 v5; // ax@6
  int v6; // edx@10
  __int16 v7; // bx@11
  _WORD *v8; // edx@16
  _WORD *v9; // ebx@21

  v2 = *(_WORD *)(a1 + 2);
  result = (_WORD *)(a1 + 6);
  if ( (*(_WORD *)(a1 + 2) & 0x7FFF) == 0x7FFF )
  {
    v8 = (_WORD *)(a1 + 6);
    do
    {
      if ( *v8 )
      {
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 4) = -1073741824;
        *(_DWORD *)(a2 + 8) = 0x7FFF;
        return result;
      }
      ++v8;
    }
    while ( (_WORD *)(a1 + 18) != v8 );
    *(_WORD *)(a2 + 10) = 0;
    v6 = a2 + 6;
    if ( *(_WORD *)a1 )
      goto LABEL_15;
  }
  else
  {
    if ( !(_WORD)v2 )
    {
      v4 = (unsigned __int16 *)(a1 + 4);
      do
      {
        if ( *v4 & 1 )
          v2 |= 1u;
        v5 = *v4 >> 1;
        if ( v2 & 2 )
          v5 |= 0x8000u;
        ++v4;
        v2 *= 2;
        *(v4 - 1) = v5;
      }
      while ( (unsigned __int16 *)(a1 + 18) != v4 );
      result = (_WORD *)(a1 + 6);
    }
    *(_WORD *)(a2 + 10) = 0;
    v6 = a2 + 6;
    if ( *(_WORD *)a1 )
    {
LABEL_15:
      v7 = *(_WORD *)(a1 + 2) | 0x8000;
      goto LABEL_12;
    }
  }
  v7 = *(_WORD *)(a1 + 2);
LABEL_12:
  *(_WORD *)(a2 + 8) = v7;
  if ( (*(_WORD *)(a1 + 2) & 0x7FFF) == 0x7FFF )
  {
    v9 = result;
    while ( !*v9 )
    {
      ++v9;
      if ( v9 == (_WORD *)(a1 + 18) )
      {
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 4) = 2147483648;
        return result;
      }
    }
  }
  do
  {
    ++result;
    v6 -= 2;
    *(_WORD *)(v6 + 2) = *(result - 1);
  }
  while ( (_WORD *)(a1 + 14) != result );
  return result;
}
