void __cdecl sub_6F762F90(int a1)
{
  int i; // ebx@2
  int v2; // edx@3
  void *v3; // edi@5

  if ( a1 )
  {
    for ( i = 0; *(_DWORD *)(a1 + 4) > i; ++i )
    {
      v2 = *(_DWORD *)(a1 + 12);
      if ( *(_DWORD *)(v2 + 4 * i) )
        free(*(void **)(v2 + 4 * i));
      v3 = *(void **)(*(_DWORD *)(a1 + 8) + 4 * i);
      if ( v3 )
        free(v3);
    }
    free(*(void **)(a1 + 8));
    free(*(void **)(a1 + 12));
    free(*(void **)(a1 + 16));
    free((void *)a1);
  }
}
