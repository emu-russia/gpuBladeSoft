int __cdecl sub_6F82FA10(int a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
      free(*(void **)a1);
    if ( *(_DWORD *)(a1 + 16) )
      free(*(void **)(a1 + 16));
    if ( *(_DWORD *)(a1 + 20) )
      free(*(void **)(a1 + 20));
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 356) = 0;
    memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 360) >> 2));
  }
  return 0;
}
