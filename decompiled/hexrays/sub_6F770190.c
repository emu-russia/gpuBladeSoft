signed int __cdecl sub_6F770190(int a1, int a2)
{
  signed int v2; // edi@3

  if ( a1 && a2 )
  {
    v2 = 6;
    if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
    {
      v2 = 0;
      if ( a1 != a2 )
      {
        memcpy(*(void **)(a2 + 4), *(const void **)(a1 + 4), 8 * *(_WORD *)(a1 + 2));
        memcpy(*(void **)(a2 + 8), *(const void **)(a1 + 8), *(_WORD *)(a1 + 2));
        memcpy(*(void **)(a2 + 12), *(const void **)(a1 + 12), 2 * *(_WORD *)a1);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 16) & 1 | *(_DWORD *)(a1 + 16) & 0xFFFFFFFE;
      }
    }
  }
  else
  {
    v2 = 20;
  }
  return v2;
}
