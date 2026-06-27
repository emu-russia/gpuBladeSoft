signed int __cdecl sub_6F75C5C0(int a1)
{
  void **v1; // ebx@2
  unsigned int v2; // edx@3
  _DWORD *v3; // eax@4
  void **v5; // eax@22
  int v6; // ebx@23
  _DWORD *v7; // edx@24
  unsigned int v8; // ecx@25
  _DWORD *v9; // eax@40
  int v10; // edi@40
  int v11; // edx@40
  _DWORD *v12; // ebx@40
  int v13; // ecx@40
  int v14; // edi@40
  int v15; // eax@40
  int v16; // edx@40
  int v17; // ecx@40
  int v18; // eax@40
  int v19; // esi@40
  _DWORD *v20; // eax@40

  if ( !*(_DWORD *)(a1 + 36) || !sub_6F75AAA0(a1) )
  {
    v1 = (void **)dword_7025A344;
    if ( dword_7025A344 != &dword_7025A344 )
    {
      v2 = *(_DWORD *)(a1 + 36);
      while ( 1 )
      {
        v3 = v1[2];
        if ( v2 == v3[9]
          && (!v2
           || *v3 == *(_DWORD *)a1
           && v3[1] == *(_DWORD *)(a1 + 4)
           && v3[2] == *(_DWORD *)(a1 + 8)
           && (v2 <= 1
            || *(_DWORD *)(a1 + 12) == v3[3]
            && *(_DWORD *)(a1 + 16) == v3[4]
            && *(_DWORD *)(a1 + 20) == v3[5]
            && (v2 == 2
             || *(_DWORD *)(a1 + 24) == v3[6] && *(_DWORD *)(a1 + 28) == v3[7] && *(_DWORD *)(a1 + 32) == v3[8]))) )
        {
          break;
        }
        v1 = (void **)*v1;
        if ( v1 == &dword_7025A344 )
          return 0;
      }
      j_j_free_1_0(v1[2]);
      --dword_7025A34C;
      sub_6F9549C0((int)v1);
      j_free_1(v1);
    }
    return 0;
  }
  v5 = (void **)dword_7025A344;
  if ( dword_7025A344 != &dword_7025A344 )
  {
    v6 = 0;
    do
    {
      v7 = v5[2];
      if ( v7 )
      {
        v8 = *(_DWORD *)(a1 + 36);
        if ( v8 == v7[9]
          && (!v8
           || *v7 == *(_DWORD *)a1
           && v7[1] == *(_DWORD *)(a1 + 4)
           && v7[2] == *(_DWORD *)(a1 + 8)
           && (v8 <= 1
            || v7[3] == *(_DWORD *)(a1 + 12)
            && *(_DWORD *)(a1 + 16) == v7[4]
            && v7[5] == *(_DWORD *)(a1 + 20)
            && (v8 == 2
             || *(_DWORD *)(a1 + 24) == v7[6] && v7[7] == *(_DWORD *)(a1 + 28) && *(_DWORD *)(a1 + 32) == v7[8]))) )
        {
          ++v6;
        }
      }
      v5 = (void **)*v5;
    }
    while ( v5 != &dword_7025A344 );
    if ( v6 )
      return 0;
  }
  v9 = sub_6F961B60(0x28u);
  v10 = *(_DWORD *)(a1 + 4);
  v11 = *(_DWORD *)(a1 + 8);
  v12 = v9;
  *v9 = *(_DWORD *)a1;
  v13 = *(_DWORD *)(a1 + 16);
  v9[1] = v10;
  v14 = *(_DWORD *)(a1 + 20);
  v9[2] = v11;
  v15 = *(_DWORD *)(a1 + 12);
  v16 = *(_DWORD *)(a1 + 24);
  v12[4] = v13;
  v12[3] = v15;
  v17 = *(_DWORD *)(a1 + 32);
  v18 = *(_DWORD *)(a1 + 28);
  v19 = *(_DWORD *)(a1 + 36);
  v12[6] = v16;
  v12[8] = v17;
  v12[5] = v14;
  v12[7] = v18;
  v12[9] = v19;
  v20 = sub_6F961B60(0xCu);
  v20[2] = v12;
  sub_6F9549A0((int)v20, (int)&dword_7025A338);
  ++dword_7025A340;
  return 1;
}
