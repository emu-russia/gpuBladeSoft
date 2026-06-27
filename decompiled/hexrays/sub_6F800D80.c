_DWORD *__cdecl sub_6F800D80(int a1, const char *a2)
{
  _DWORD *result; // eax@1
  _DWORD *v3; // ebp@1
  int v4; // esi@2
  _DWORD *v5; // esi@2
  size_t v6; // eax@3
  size_t v7; // edi@3
  int v8; // esi@3
  int v9; // ecx@4

  result = realloc(*(void **)a1, 4 * *(_DWORD *)(a1 + 8) + 8);
  v3 = result;
  if ( result )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)a1 = result;
    result = realloc(*(void **)(a1 + 4), 4 * v4 + 8);
    v5 = result;
    if ( result )
    {
      *(_DWORD *)(a1 + 4) = result;
      v6 = strlen(a2);
      v7 = v6 + 1;
      v5[*(_DWORD *)(a1 + 8)] = v6;
      v8 = *(_DWORD *)(a1 + 8);
      result = malloc(v6 + 1);
      v3[v8] = result;
      if ( result )
      {
        result = memcpy(*(void **)(*(_DWORD *)a1 + 4 * v8), a2, v7);
        v9 = *(_DWORD *)(a1 + 8) + 1;
        *(_DWORD *)(a1 + 8) = v9;
        *(_DWORD *)(*(_DWORD *)a1 + 4 * v9) = 0;
      }
    }
  }
  return result;
}
