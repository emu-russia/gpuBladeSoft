void __cdecl sub_6F897490(void *a1, size_t a2, int a3)
{
  size_t v3; // esi@1
  int v4; // edx@1
  size_t v5; // eax@1
  void *v6; // eax@8

  v3 = *(_DWORD *)(a3 + 8);
  v4 = *(_DWORD *)(a3 + 12);
  v5 = a2 + *(_DWORD *)(a3 + 4) + 1;
  if ( v5 > v3 )
  {
    if ( v4 )
      return;
    if ( v3 || (v3 = 2, v5 > 2) )
    {
      do
        v3 *= 2;
      while ( v5 > v3 );
    }
    v6 = realloc(*(void **)a3, v3);
    if ( !v6 )
    {
      free(*(void **)a3);
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 12) = 1;
      return;
    }
    *(_DWORD *)a3 = v6;
    v4 = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(a3 + 8) = v3;
  }
  if ( !v4 )
  {
    memcpy((void *)(*(_DWORD *)a3 + *(_DWORD *)(a3 + 4)), a1, a2);
    *(_BYTE *)(*(_DWORD *)(a3 + 4) + a2 + *(_DWORD *)a3) = 0;
    *(_DWORD *)(a3 + 4) += a2;
  }
}
