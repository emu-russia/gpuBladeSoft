unsigned int __cdecl sub_6F78D600(int a1, unsigned int *a2)
{
  unsigned int v2; // esi@1
  unsigned int v3; // ebx@2
  unsigned int result; // eax@2
  unsigned int v5; // ecx@4
  int v6; // edi@4
  unsigned int v7; // edx@4
  unsigned int v8; // ebx@7
  unsigned int v9; // edx@13
  unsigned int v10; // edx@6

  v2 = *a2 + 1;
LABEL_2:
  v3 = *(_DWORD *)(a1 + 16);
  result = 0;
  while ( 1 )
  {
    if ( result >= v3 )
      goto LABEL_11;
    v5 = result + ((v3 - result) >> 1);
    v6 = *(_DWORD *)(a1 + 20);
    v7 = 16 * (result + ((v3 - result) >> 1));
    if ( *(_DWORD *)(v6 + v7) == v2 )
    {
      v10 = result + ((v3 - result) >> 1);
LABEL_16:
      if ( v10 )
      {
        result = v10 + 1;
LABEL_14:
        *a2 = v2;
        return result;
      }
      ++v2;
      goto LABEL_2;
    }
    if ( *(_DWORD *)(v6 + v7) >= v2 )
      break;
    v10 = result + ((v3 - result) >> 1);
    v5 = v3;
LABEL_18:
    result = v10 + 1;
    v3 = v5;
  }
  while ( result < v5 )
  {
    v10 = result + ((v5 - result) >> 1);
    v8 = 16 * (result + ((v5 - result) >> 1));
    if ( v2 == *(_DWORD *)(v6 + v8) )
      goto LABEL_16;
    if ( v2 > *(_DWORD *)(v6 + v8) )
      goto LABEL_18;
    v5 = result + ((v5 - result) >> 1);
  }
LABEL_11:
  v2 = 0;
  if ( *(_DWORD *)(a1 + 16) > result )
  {
    if ( result )
    {
      v9 = result++;
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 16 * v9);
    }
    goto LABEL_14;
  }
  result = 0;
  *a2 = 0;
  return result;
}
