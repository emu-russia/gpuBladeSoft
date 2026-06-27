unsigned int __cdecl sub_6F7A1040(int a1, int a2, unsigned int a3, void *a4, unsigned int *a5)
{
  unsigned int v5; // ebp@1
  unsigned int v6; // eax@2
  unsigned int v7; // edx@2
  unsigned int result; // eax@3
  unsigned int v9; // ebx@4

  v5 = a3;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a1 + 156);
    v7 = v6 + 16 * *(_WORD *)(a1 + 152);
    if ( v6 >= v7 )
      return 142;
    while ( 1 )
    {
      if ( a2 == *(_DWORD *)v6 )
      {
        v9 = *(_DWORD *)(v6 + 12);
        if ( v9 )
          break;
      }
      v6 += 16;
      if ( v7 <= v6 )
        return 142;
    }
    v5 = *(_DWORD *)(v6 + 8) + a3;
    if ( !a5 )
      goto LABEL_13;
  }
  else
  {
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 104) + 4);
    if ( !a5 )
    {
LABEL_13:
      result = v9;
      return sub_6F772140(*(_DWORD *)(a1 + 104), v5, a4, result);
    }
  }
  result = *a5;
  if ( *a5 )
    return sub_6F772140(*(_DWORD *)(a1 + 104), v5, a4, result);
  *a5 = v9;
  return result;
}
