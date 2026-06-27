int __cdecl sub_6F76DFA0(int a1, int a2, int a3)
{
  int result; // eax@1
  void *v4; // ecx@1
  int v5; // ebx@4
  int i; // edx@5
  int v7; // ecx@18

  result = 0;
  v4 = *(void **)(a2 + 72);
  if ( v4 == (void *)1651078259 )
    return result;
  if ( v4 == &loc_6F75746C )
  {
    i = *(_DWORD *)(a1 + 156);
    v5 = *(_DWORD *)(a1 + 148);
    if ( i )
      goto LABEL_12;
    return 7;
  }
  if ( !a1 )
    return 7;
  v5 = *(_DWORD *)(a1 + 148);
  if ( !v5 )
    return 7;
  for ( i = *(_DWORD *)(v5 + 8); v4 != *(void **)(i + 16); i = *(_DWORD *)(v5 + 8) )
  {
    v5 = *(_DWORD *)(v5 + 4);
    if ( !v5 )
      return 7;
  }
LABEL_12:
  while ( 1 )
  {
    result = (*(int (__cdecl **)(int, int, int, _DWORD))(i + 60))(i, a2, a3, 0);
    if ( !result || (_BYTE)result != 19 || !a1 )
      return result;
    v5 = v5 ? *(_DWORD *)(v5 + 4) : *(_DWORD *)(a1 + 148);
    if ( !v5 )
      return result;
    i = *(_DWORD *)(v5 + 8);
    v7 = *(_DWORD *)(a2 + 72);
    if ( v7 != *(_DWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          return result;
        i = *(_DWORD *)(v5 + 8);
        if ( v7 == *(_DWORD *)(i + 16) )
          goto LABEL_12;
      }
    }
  }
}
