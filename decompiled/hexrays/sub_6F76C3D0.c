signed int __cdecl sub_6F76C3D0(int a1)
{
  int v1; // esi@2
  signed int result; // eax@2
  int v3; // edi@3
  int v4; // ebp@4
  int v5; // eax@4
  int v6; // ST1C_4@5
  void (__cdecl *v7)(int); // eax@6
  void (__cdecl *v8)(int); // eax@8
  int v9; // eax@13

  if ( !a1 )
    return 36;
  v1 = *(_DWORD *)a1;
  result = 35;
  if ( !*(_DWORD *)a1 )
    return result;
  v3 = *(_DWORD *)(v1 + 96);
  result = 34;
  if ( !v3 )
    return result;
  v4 = *(_DWORD *)(v3 + 8);
  v5 = sub_6F773F40((int *)(v1 + 108), a1);
  if ( !v5 )
    return 36;
  v6 = v5;
  sub_6F773FF0(v1 + 108, v5);
  sub_6F773D90(v4, v6);
  if ( a1 == *(_DWORD *)(v1 + 88) )
  {
    v9 = *(_DWORD *)(v1 + 108);
    *(_DWORD *)(v1 + 88) = 0;
    if ( v9 )
      *(_DWORD *)(v1 + 88) = *(_DWORD *)(v9 + 8);
  }
  v7 = *(void (__cdecl **)(int))(a1 + 8);
  if ( v7 )
    v7(a1);
  v8 = *(void (__cdecl **)(int))(*(_DWORD *)(v3 + 12) + 60);
  if ( v8 )
    v8(a1);
  sub_6F773D90(v4, *(_DWORD *)(a1 + 40));
  *(_DWORD *)(a1 + 40) = 0;
  sub_6F773D90(v4, a1);
  return 0;
}
