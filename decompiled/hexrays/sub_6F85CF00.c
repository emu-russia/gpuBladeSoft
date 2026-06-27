int __cdecl sub_6F85CF00(int a1, int a2, unsigned int a3)
{
  int v3; // eax@1
  int v4; // edx@2
  int v5; // eax@5
  int v6; // eax@7
  unsigned int v7; // edx@9
  int result; // eax@11
  int v9; // eax@4
  int v10; // [sp+1Ch] [bp-Ch]@11

  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 != 101 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 21;
    *(_DWORD *)(v4 + 24) = v3;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( *(_DWORD *)(a1 + 244) >= *(_DWORD *)(a1 + 32) )
  {
    v9 = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 20) = 126;
    (*(void (__cdecl **)(int, signed int))(v9 + 4))(a1, -1);
  }
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(a1 + 244);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a1 + 32);
    (*(void (__cdecl **)(int))v5)(a1);
  }
  v6 = *(_DWORD *)(a1 + 372);
  if ( *(_BYTE *)(v6 + 12) )
    (*(void (__cdecl **)(int))(v6 + 4))(a1);
  v7 = a3;
  if ( a3 > *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 244) )
    v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 244);
  v10 = 0;
  (*(void (__cdecl **)(int, int, int *, unsigned int))(*(_DWORD *)(a1 + 376) + 4))(a1, a2, &v10, v7);
  result = v10;
  *(_DWORD *)(a1 + 244) += v10;
  return result;
}
