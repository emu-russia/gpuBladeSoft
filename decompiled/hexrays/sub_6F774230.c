int __cdecl sub_6F774230(int a1, unsigned int *a2)
{
  unsigned int v2; // ecx@1
  int v3; // edi@1
  unsigned int v4; // esi@1
  unsigned int i; // ebp@1
  unsigned int v6; // edx@3
  int v7; // ebx@3
  int v8; // eax@11
  unsigned int v9; // esi@11
  int result; // eax@11
  __int16 v11; // ax@12
  unsigned int v12; // eax@5

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *a2 + 1;
  for ( i = *(_DWORD *)(a1 + 16); v2 < i; i = v6 )
  {
    v6 = (v2 + i) >> 1;
    v7 = v3 + 8 * v6;
    if ( v4 == *(_DWORD *)v7 )
    {
LABEL_12:
      v11 = *(_WORD *)(v7 + 4);
      *a2 = v4;
      return (unsigned __int16)(v11 + 1);
    }
    if ( v4 < *(_DWORD *)v7 )
    {
      while ( v2 < v6 )
      {
        v12 = (v2 + v6) >> 1;
        v7 = v3 + 8 * v12;
        if ( v4 == *(_DWORD *)v7 )
          goto LABEL_12;
        if ( v4 >= *(_DWORD *)v7 )
          goto LABEL_13;
        v6 = (v2 + v6) >> 1;
      }
      break;
    }
    v12 = (v2 + i) >> 1;
    v6 = i;
LABEL_13:
    v2 = v12 + 1;
  }
  if ( v2 >= *(_DWORD *)(a1 + 16) )
  {
    result = 0;
    *a2 = 0;
  }
  else
  {
    v8 = v3 + 8 * v2;
    v9 = *(_DWORD *)v8;
    LOWORD(v8) = *(_WORD *)(v8 + 4);
    *a2 = v9;
    result = (unsigned __int16)(v8 + 1);
  }
  return result;
}
