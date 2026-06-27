char __cdecl sub_6F861EA4(int a1)
{
  int v1; // ebx@1
  size_t v2; // eax@1
  int v3; // eax@4
  int v5; // eax@3

  v1 = *(_DWORD *)(a1 + 24);
  v2 = fread(*(void **)(v1 + 32), 1u, 0x1000u, *(FILE **)(v1 + 28));
  if ( !v2 )
  {
    if ( *(_BYTE *)(v1 + 36) )
    {
      v5 = *(_DWORD *)a1;
      *(_DWORD *)(v5 + 20) = 43;
      (*(void (__cdecl **)(int))v5)(a1);
    }
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 123;
    (*(void (__cdecl **)(int, signed int))(v3 + 4))(a1, -1);
    **(_BYTE **)(v1 + 32) = -1;
    *(_BYTE *)(*(_DWORD *)(v1 + 32) + 1) = -39;
    v2 = 2;
  }
  *(_DWORD *)v1 = *(_DWORD *)(v1 + 32);
  *(_DWORD *)(v1 + 4) = v2;
  *(_BYTE *)(v1 + 36) = 0;
  return 1;
}
