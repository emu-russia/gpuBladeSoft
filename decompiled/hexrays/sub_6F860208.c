unsigned int *__cdecl sub_6F860208(int a1, int a2, unsigned int *a3, unsigned int a4, int a5, unsigned int *a6, unsigned int *a7)
{
  int v7; // esi@1
  unsigned int *result; // eax@2
  unsigned int v9; // edx@2
  int v10; // ecx@4
  int v11; // edi@4
  int v12; // ecx@6
  int v13; // edi@9
  unsigned int v14; // ecx@16
  int v15; // esi@17
  int v16; // edi@18
  int v17; // eax@20
  int v18; // [sp+38h] [bp-20h]@1

  v7 = *(_DWORD *)(a1 + 380);
  v18 = v7 + 8;
  while ( 1 )
  {
    result = a3;
    v9 = *a3;
    if ( *a3 >= a4 )
      break;
    result = a7;
    if ( *a6 >= (unsigned int)a7 )
      break;
    v10 = *(_DWORD *)(v7 + 52);
    v11 = a4 - v9;
    if ( a4 - v9 > *(_DWORD *)(a1 + 256) - v10 )
      v11 = *(_DWORD *)(a1 + 256) - v10;
    (*(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)(a1 + 392) + 4))(a1, a2 + 4 * v9, v18, v10, v11);
    *a3 += v11;
    v12 = v11 + *(_DWORD *)(v7 + 52);
    *(_DWORD *)(v7 + 52) = v12;
    result = (unsigned int *)(*(_DWORD *)(v7 + 48) - v11);
    *(_DWORD *)(v7 + 48) = result;
    if ( !result && v12 < *(_DWORD *)(a1 + 256) )
    {
      if ( *(_DWORD *)(a1 + 76) > 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          result = (unsigned int *)sub_6F8601B8(
                                     *(_DWORD *)(v7 + 4 * v13++ + 8),
                                     *(_DWORD *)(a1 + 28),
                                     v12,
                                     *(_DWORD *)(a1 + 256));
          if ( *(_DWORD *)(a1 + 76) <= v13 )
            break;
          v12 = *(_DWORD *)(v7 + 52);
        }
      }
      v12 = *(_DWORD *)(a1 + 256);
      *(_DWORD *)(v7 + 52) = v12;
    }
    if ( v12 == *(_DWORD *)(a1 + 256) )
    {
      (*(void (__cdecl **)(int, int, _DWORD, int, unsigned int))(*(_DWORD *)(a1 + 396) + 4))(a1, v18, 0, a5, *a6);
      *(_DWORD *)(v7 + 52) = 0;
      result = a6;
      ++*result;
    }
    if ( !*(_DWORD *)(v7 + 48) )
    {
      v14 = *a6;
      if ( (unsigned int)a7 > *a6 )
      {
        v15 = *(_DWORD *)(a1 + 84);
        if ( *(_DWORD *)(a1 + 76) > 0 )
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = *(_DWORD *)(v15 + 12) * *(_DWORD *)(v15 + 40) / *(_DWORD *)(a1 + 264);
            sub_6F8601B8(
              *(_DWORD *)(a5 + 4 * v16++),
              *(_DWORD *)(v15 + 28) * *(_DWORD *)(v15 + 36),
              v17 * v14,
              (_DWORD)a7 * v17);
            v15 += 88;
            result = (unsigned int *)a1;
            if ( *(_DWORD *)(a1 + 76) <= v16 )
              break;
            v14 = *a6;
          }
        }
        *a6 = (unsigned int)a7;
        return result;
      }
    }
  }
  return result;
}
