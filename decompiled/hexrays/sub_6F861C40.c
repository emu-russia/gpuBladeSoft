int __cdecl sub_6F861C40(int a1)
{
  int v1; // ebx@1
  size_t v2; // edi@4
  int result; // eax@2
  int v4; // eax@3
  int v5; // eax@5

  v1 = *(_DWORD *)(a1 + 24);
  if ( 4096 != *(_DWORD *)(v1 + 4) )
  {
    v2 = 4096 - *(_DWORD *)(v1 + 4);
    if ( fwrite(*(const void **)(v1 + 24), 1u, v2, *(FILE **)(v1 + 20)) != v2 )
    {
      v5 = *(_DWORD *)a1;
      *(_DWORD *)(v5 + 20) = 38;
      (*(void (__cdecl **)(int))v5)(a1);
    }
  }
  fflush(*(FILE **)(v1 + 20));
  result = *(_DWORD *)(v1 + 20);
  if ( *(_BYTE *)(result + 12) & 0x20 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 38;
    result = (*(int (__cdecl **)(int))v4)(a1);
  }
  return result;
}
