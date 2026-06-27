int __cdecl sub_6F861894(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // edx@2
  unsigned int v5; // ecx@3
  unsigned int v6; // edx@3
  int v7; // eax@4
  int result; // eax@6
  int v9; // eax@7
  int v10; // [sp+1Ch] [bp-Ch]@6

  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 != 205 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 21;
    *(_DWORD *)(v4 + 24) = v3;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v5 = *(_DWORD *)(a1 + 120);
  v6 = *(_DWORD *)(a1 + 96);
  if ( v5 >= v6 )
  {
    v9 = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 20) = 126;
    (*(void (__cdecl **)(int, signed int))(v9 + 4))(a1, -1);
    result = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 4) = v5;
      *(_DWORD *)(v7 + 8) = v6;
      (*(void (__cdecl **)(int))v7)(a1);
    }
    v10 = 0;
    (*(void (__cdecl **)(int, int, int *, int))(*(_DWORD *)(a1 + 404) + 4))(a1, a2, &v10, a3);
    result = v10;
    *(_DWORD *)(a1 + 120) += v10;
  }
  return result;
}
