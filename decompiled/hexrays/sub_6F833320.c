void __cdecl sub_6F833320(int a1)
{
  if ( *(_DWORD *)(a1 + 8) )
    free(*(void **)(a1 + 8));
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
}
