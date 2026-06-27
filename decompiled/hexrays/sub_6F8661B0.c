int __cdecl sub_6F8661B0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // edi@1
  unsigned int v8; // eax@1
  int result; // eax@3
  int v10; // [sp+2Ch] [bp-1Ch]@3

  v7 = *(_DWORD *)(a1 + 412);
  v8 = a7 - *a6;
  if ( v8 > *(_DWORD *)(v7 + 16) )
    v8 = *(_DWORD *)(v7 + 16);
  v10 = 0;
  (*(void (__cdecl **)(int, int, int, int, _DWORD, int *, unsigned int))(*(_DWORD *)(a1 + 432) + 4))(
    a1,
    a2,
    a3,
    a4,
    *(_DWORD *)(v7 + 12),
    &v10,
    v8);
  (*(void (__cdecl **)(int, _DWORD, int, int))(*(_DWORD *)(a1 + 440) + 4))(a1, *(_DWORD *)(v7 + 12), a5 + 4 * *a6, v10);
  result = v10;
  *a6 += v10;
  return result;
}
