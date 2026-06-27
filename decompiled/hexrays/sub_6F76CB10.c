signed int __cdecl sub_6F76CB10(int a1, int a2)
{
  int v2; // esi@3
  int v3; // edi@4
  signed int result; // eax@5
  int v5; // eax@6
  int (__cdecl *v6)(_DWORD, int); // eax@6
  int v7; // eax@14
  int v8; // ebp@14
  int v9; // edx@16
  int v10; // eax@16
  int v11; // edx@19
  int v12; // esi@22
  unsigned int v13; // ebp@22
  int v14; // ecx@23
  _DWORD *v15; // edx@23
  int v16; // [sp+1Ch] [bp-20h]@6

  if ( !a1 )
    return 35;
  if ( !a2 )
    return 6;
  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 < 0 )
    return 6;
  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 < 0 )
    return 6;
  result = 6;
  if ( *(_DWORD *)a2 > 4u )
    return result;
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 96) + 12);
  v16 = v5;
  v6 = *(int (__cdecl **)(_DWORD, int))(v5 + 88);
  if ( v6 )
    return v6(*(_DWORD *)(a1 + 88), a2);
  if ( (*(_DWORD *)(a1 + 8) & 3) != 2 )
  {
    sub_6F76C770(a1, a2);
    return 0;
  }
  if ( !(*(_DWORD *)(a1 + 8) & 2) )
    return 35;
  result = 7;
  if ( *(_DWORD *)a2 )
    return result;
  v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 4);
  if ( v7 )
    v8 = (v2 * v7 + 36) / 72;
  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_DWORD *)(a2 + 8);
  if ( v9 )
    v10 = (v3 * v9 + 36) / 72;
  if ( v2 )
  {
    if ( !v3 )
      v10 = v8;
  }
  else
  {
    v11 = v8;
    if ( v3 )
      v11 = v10;
    v8 = v11;
  }
  v12 = *(_DWORD *)(a1 + 28);
  v13 = (v8 + 32) & 0xFFFFFFC0;
  if ( v12 <= 0 )
    return 23;
  v14 = 0;
  v15 = (_DWORD *)(*(_DWORD *)(a1 + 32) + 12);
  while ( ((v10 + 32) & 0xFFFFFFC0) != ((*v15 + 32) & 0xFFFFFFC0) || v13 != ((*(v15 - 1) + 32) & 0xFFFFFFC0) )
  {
    ++v14;
    v15 += 4;
    if ( v14 == v12 )
      return 23;
  }
  if ( v14 < 0 )
    return 6;
  result = 6;
  if ( v14 < v12 )
  {
    v6 = *(int (__cdecl **)(_DWORD, int))(v16 + 92);
    if ( v6 )
    {
      a2 = v14;
      return v6(*(_DWORD *)(a1 + 88), a2);
    }
    sub_6F76C670(a1, v14);
    result = 0;
  }
  return result;
}
