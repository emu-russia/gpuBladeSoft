int __cdecl sub_6F768C90(int a1, int a2, int a3)
{
  void (__cdecl *v3)(_DWORD); // eax@1
  int v4; // ebp@3
  int v5; // eax@5
  int v6; // edx@5
  int v7; // ebx@6
  int v8; // eax@9
  void (__cdecl *v9)(int); // eax@12
  void (__cdecl *v10)(int); // eax@15
  int v11; // ebx@17
  int v12; // ebp@18
  int v13; // edi@18
  int v14; // edx@18
  void (__cdecl *v15)(int); // eax@18
  int v16; // ST14_4@19
  bool v17; // sf@20
  unsigned __int8 v18; // of@20
  void (__cdecl *v19)(int); // eax@21
  int v20; // ebp@23
  int v21; // ebx@23
  int v22; // edi@24
  int v23; // eax@26
  int v25; // [sp+1Ch] [bp-20h]@1

  v25 = *(_DWORD *)(a3 + 12);
  v3 = *(void (__cdecl **)(_DWORD))(a2 + 120);
  if ( v3 )
    v3(*(_DWORD *)(a2 + 116));
LABEL_3:
  v4 = *(_DWORD *)(a2 + 84);
  while ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = *(_DWORD *)(v5 + 84);
    if ( !v6 )
    {
      while ( 1 )
        ;
    }
    v7 = *(_DWORD *)(*(_DWORD *)(v5 + 96) + 8);
    if ( v6 == v4 )
    {
      *(_DWORD *)(v5 + 84) = *(_DWORD *)(v4 + 8);
LABEL_12:
      v9 = *(void (__cdecl **)(int))(v4 + 20);
      if ( v9 )
        v9(v4);
      sub_6F768BE0(v4);
      sub_6F773D90(v7, v4);
      goto LABEL_3;
    }
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 8);
      if ( !v8 )
        break;
      if ( v8 == v4 )
      {
        *(_DWORD *)(v6 + 8) = *(_DWORD *)(v4 + 8);
        goto LABEL_12;
      }
      v6 = *(_DWORD *)(v6 + 8);
    }
  }
  sub_6F7740D0((_DWORD *)(a2 + 108), (void (__cdecl *)(int, _DWORD, int))sub_6F768840, a1, a3);
  v10 = *(void (__cdecl **)(int))(a2 + 48);
  *(_DWORD *)(a2 + 88) = 0;
  if ( v10 )
    v10(a2);
  v11 = 0;
  if ( *(_DWORD *)(a2 + 36) > 0 )
  {
    do
    {
      v12 = 4 * v11;
      v13 = *(_DWORD *)(*(_DWORD *)(a2 + 40) + 4 * v11);
      v14 = *(_DWORD *)(*(_DWORD *)v13 + 100);
      v15 = *(void (__cdecl **)(int))(*(_DWORD *)(v13 + 12) + 8);
      if ( v15 )
      {
        v16 = *(_DWORD *)(*(_DWORD *)v13 + 100);
        v15(v13);
        v14 = v16;
      }
      ++v11;
      sub_6F773D90(v14, v13);
      v18 = __OFSUB__(v11, *(_DWORD *)(a2 + 36));
      v17 = v11 - *(_DWORD *)(a2 + 36) < 0;
      *(_DWORD *)(*(_DWORD *)(a2 + 40) + v12) = 0;
    }
    while ( v17 ^ v18 );
  }
  sub_6F773D90(a1, *(_DWORD *)(a2 + 40));
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  v19 = *(void (__cdecl **)(int))(v25 + 52);
  if ( v19 )
    v19(a2);
  v20 = *(_DWORD *)(a2 + 104);
  v21 = *(_DWORD *)(a2 + 8) & 0x400;
  if ( v20 )
  {
    v22 = *(_DWORD *)(v20 + 28);
    sub_6F771FD0(*(_DWORD *)(a2 + 104));
    if ( !v21 )
      sub_6F773D90(v22, v20);
  }
  v23 = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 104) = 0;
  if ( v23 )
  {
    sub_6F773D90(a1, v23);
    *(_DWORD *)(a2 + 128) = 0;
  }
  return sub_6F773D90(a1, a2);
}
