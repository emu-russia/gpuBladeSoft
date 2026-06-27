int (__cdecl **__cdecl sub_6F86B914(int a1, char a2))(int a1, int a2)
{
  int (__cdecl **result)(int, int); // eax@1
  int v3; // ebx@2
  int v4; // esi@3
  int (__cdecl *v5)(int, signed int, _DWORD, int, int, signed int); // ST2C_4@4
  signed int v6; // ST24_4@4
  int v7; // ST20_4@4
  int v8; // eax@4
  int v9; // eax@6
  int (__cdecl **v10)(int, int); // edx@6
  int v11; // ecx@6
  int (__cdecl **v12)(int, int); // [sp+28h] [bp-20h]@1

  result = (int (__cdecl **)(int, int))(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 104);
  v12 = result;
  *(_DWORD *)(a1 + 384) = result;
  *result = sub_6F86B1D8;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 84);
    if ( *(_DWORD *)(a1 + 76) > 0 )
    {
      v4 = 0;
      do
      {
        v5 = *(int (__cdecl **)(int, signed int, _DWORD, int, int, signed int))(*(_DWORD *)(a1 + 4) + 20);
        v6 = *(_DWORD *)(v3 + 12);
        v7 = sub_6F868CD8(*(_DWORD *)(v3 + 32), v6);
        v8 = sub_6F868CD8(*(_DWORD *)(v3 + 28), *(_DWORD *)(v3 + 8));
        result = (int (__cdecl **)(int, int))v5(a1, 1, 0, v8, v7, v6);
        v12[v4++ + 16] = (int (__cdecl *)(int, int))result;
        v3 += 88;
      }
      while ( *(_DWORD *)(a1 + 76) > v4 );
    }
  }
  else
  {
    v9 = (*(int (__cdecl **)(int, signed int, signed int))(*(_DWORD *)(a1 + 4) + 4))(a1, 1, 1280);
    v10 = v12;
    v11 = v9 + 1280;
    do
    {
      v10[6] = (int (__cdecl *)(int, int))v9;
      v9 += 128;
      ++v10;
    }
    while ( v9 != v11 );
    result = v12;
    v12[16] = 0;
  }
  return result;
}
