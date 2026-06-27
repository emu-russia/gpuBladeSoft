_DWORD *__cdecl sub_6F8664EC(int a1, int a2, _DWORD *a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // edi@1
  int v8; // esi@1
  int v9; // edx@1
  int v10; // eax@1
  int v11; // ecx@2
  unsigned int v12; // ebx@3
  _DWORD *result; // eax@7
  int v14; // ebx@7
  int v15; // ebx@11
  int v16; // edi@11
  int v17; // edx@11
  int v18; // [sp+28h] [bp-20h]@12

  v7 = a1;
  v8 = *(_DWORD *)(a1 + 432);
  v9 = *(_DWORD *)(v8 + 92);
  v10 = *(_DWORD *)(a1 + 276);
  if ( v9 >= v10 )
  {
    if ( *(_DWORD *)(a1 + 36) > 0 )
    {
      v15 = 0;
      v16 = *(_DWORD *)(a1 + 196);
      v17 = a1;
      do
      {
        v18 = v17;
        (*(void (__cdecl **)(int, int, int, int))(v8 + 4 * v15 + 52))(
          v17,
          v16,
          *(_DWORD *)(a2 + 4 * v15) + *a3 * 4 * *(_DWORD *)(v8 + 4 * v15 + 100),
          v8 + 4 * v15 + 12);
        ++v15;
        v16 += 88;
        v17 = v18;
      }
      while ( *(_DWORD *)(v18 + 36) > v15 );
      v7 = v18;
      v10 = *(_DWORD *)(v18 + 276);
    }
    *(_DWORD *)(v8 + 92) = 0;
    v11 = 0;
    v9 = 0;
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 92);
  }
  v12 = a7 - *a6;
  if ( v12 > *(_DWORD *)(v8 + 96) )
    v12 = *(_DWORD *)(v8 + 96);
  if ( v12 > v10 - v9 )
    v12 = v10 - v9;
  (*(void (__cdecl **)(int, int, int, int, unsigned int))(*(_DWORD *)(v7 + 436) + 4))(
    v7,
    v8 + 12,
    v11,
    a5 + 4 * *a6,
    v12);
  result = a6;
  *result += v12;
  *(_DWORD *)(v8 + 96) -= v12;
  v14 = *(_DWORD *)(v8 + 92) + v12;
  *(_DWORD *)(v8 + 92) = v14;
  if ( v14 >= *(_DWORD *)(v7 + 276) )
    ++*a3;
  return result;
}
