int __cdecl sub_6F7741C0(int a1, unsigned int a2)
{
  unsigned int v2; // ecx@1
  int v3; // esi@1
  unsigned int i; // ebp@1
  unsigned int v5; // edx@3
  int v6; // ebx@3
  unsigned int v8; // eax@5

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  for ( i = *(_DWORD *)(a1 + 16); ; i = v5 )
  {
    if ( v2 >= i )
      return 0;
    v5 = (v2 + i) >> 1;
    v6 = v3 + 8 * v5;
    if ( a2 == *(_DWORD *)v6 )
      break;
    if ( a2 < *(_DWORD *)v6 )
    {
      while ( v2 < v5 )
      {
        v8 = (v2 + v5) >> 1;
        v6 = v3 + 8 * v8;
        if ( *(_DWORD *)v6 == a2 )
          return (unsigned __int16)(*(_WORD *)(v6 + 4) + 1);
        if ( *(_DWORD *)v6 <= a2 )
          goto LABEL_12;
        v5 = (v2 + v5) >> 1;
      }
      return 0;
    }
    v8 = (v2 + i) >> 1;
    v5 = i;
LABEL_12:
    v2 = v8 + 1;
  }
  return (unsigned __int16)(*(_WORD *)(v6 + 4) + 1);
}
