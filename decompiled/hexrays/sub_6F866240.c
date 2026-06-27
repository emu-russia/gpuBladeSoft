unsigned int __cdecl sub_6F866240(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // ebx@1
  int v7; // edi@1
  int v8; // eax@2
  unsigned int result; // eax@3
  unsigned int v10; // edx@5
  unsigned int v11; // ST2C_4@4

  v6 = *(_DWORD *)(a1 + 412);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v6 + 12);
  }
  else
  {
    v8 = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD, signed int))(*(_DWORD *)(a1 + 4) + 28))(
           a1,
           *(_DWORD *)(v6 + 8),
           *(_DWORD *)(v6 + 20),
           *(_DWORD *)(v6 + 16),
           1);
    *(_DWORD *)(v6 + 12) = v8;
    v7 = *(_DWORD *)(v6 + 24);
  }
  (*(void (__cdecl **)(int, int, int, int, int, int, _DWORD))(*(_DWORD *)(a1 + 432) + 4))(
    a1,
    a2,
    a3,
    a4,
    v8,
    v6 + 24,
    *(_DWORD *)(v6 + 16));
  result = *(_DWORD *)(v6 + 24);
  if ( result > v7 )
  {
    v11 = result - v7;
    (*(void (__cdecl **)(int, int, _DWORD, unsigned int))(*(_DWORD *)(a1 + 440) + 4))(
      a1,
      *(_DWORD *)(v6 + 12) + 4 * v7,
      0,
      result - v7);
    *a6 += v11;
    result = *(_DWORD *)(v6 + 24);
  }
  v10 = *(_DWORD *)(v6 + 16);
  if ( v10 <= result )
  {
    *(_DWORD *)(v6 + 20) += v10;
    *(_DWORD *)(v6 + 24) = 0;
  }
  return result;
}
