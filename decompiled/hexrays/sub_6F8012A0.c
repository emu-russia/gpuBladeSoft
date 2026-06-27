void __cdecl sub_6F8012A0(int a1)
{
  int v1; // ebx@2
  void *v2; // ecx@3

  if ( a1 )
  {
    v1 = 0;
    while ( *(_DWORD *)(a1 + 8) > v1 )
    {
      v2 = *(void **)(*(_DWORD *)a1 + 4 * v1++);
      free(v2);
    }
    free(*(void **)a1);
    free(*(void **)(a1 + 4));
    free(*(void **)(a1 + 12));
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
}
