char __cdecl sub_6F861BE4(int a1)
{
  int v1; // ebx@1
  int v2; // eax@2

  v1 = *(_DWORD *)(a1 + 24);
  if ( fwrite(*(const void **)(v1 + 24), 1u, 0x1000u, *(FILE **)(v1 + 20)) != 4096 )
  {
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(v2 + 20) = 38;
    (*(void (__cdecl **)(int))v2)(a1);
  }
  *(_DWORD *)v1 = *(_DWORD *)(v1 + 24);
  *(_DWORD *)(v1 + 4) = 4096;
  return 1;
}
