unsigned int __cdecl sub_6F78D590(int a1, unsigned int a2)
{
  unsigned int v2; // ecx@1
  unsigned int i; // ebp@1
  int v4; // ebx@3
  unsigned int v5; // edx@3
  unsigned int v6; // eax@3
  unsigned int v7; // ebp@6
  unsigned int v9; // eax@5

  v2 = 0;
  for ( i = *(_DWORD *)(a1 + 16); ; i = v5 )
  {
    if ( v2 >= i )
      return 0;
    v4 = *(_DWORD *)(a1 + 20);
    v5 = v2 + ((i - v2) >> 1);
    v6 = 16 * (v2 + ((i - v2) >> 1));
    if ( a2 == *(_DWORD *)(v4 + v6) )
      break;
    if ( a2 <= *(_DWORD *)(v4 + v6) )
    {
      while ( v2 < v5 )
      {
        v9 = v2 + ((v5 - v2) >> 1);
        v7 = 16 * (v2 + ((v5 - v2) >> 1));
        if ( *(_DWORD *)(v4 + v7) == a2 )
          return v9 + 1;
        if ( *(_DWORD *)(v4 + v7) < a2 )
          goto LABEL_13;
        v5 = v2 + ((v5 - v2) >> 1);
      }
      return 0;
    }
    v9 = v2 + ((i - v2) >> 1);
    v5 = i;
LABEL_13:
    v2 = v9 + 1;
  }
  v9 = v2 + ((i - v2) >> 1);
  return v9 + 1;
}
