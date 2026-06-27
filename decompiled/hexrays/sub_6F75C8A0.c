signed int __cdecl sub_6F75C8A0(int a1)
{
  int v1; // ebx@2
  unsigned int v2; // edx@3
  int v3; // eax@4
  int v5; // eax@22
  unsigned int v6; // ecx@23
  int v7; // ebx@23
  int v8; // edx@24
  _DWORD *v9; // eax@39
  int v10; // edi@39
  int v11; // edx@39
  _DWORD *v12; // ebx@39
  int v13; // ecx@39
  int v14; // edi@39
  int v15; // eax@39
  int v16; // edx@39
  int v17; // ecx@39
  int v18; // eax@39
  int v19; // esi@39
  _DWORD *v20; // eax@39

  if ( *(_DWORD *)(a1 + 36) && sub_6F75AAA0(a1) )
  {
    v5 = dword_7025A32C;
    if ( (int *)dword_7025A32C == &dword_7025A32C )
      goto LABEL_43;
    v6 = *(_DWORD *)(a1 + 36);
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)(v5 + 8);
      if ( v6 == *(_DWORD *)(v8 + 36)
        && (!v6
         || *(_DWORD *)v8 == *(_DWORD *)a1
         && *(_DWORD *)(v8 + 4) == *(_DWORD *)(a1 + 4)
         && *(_DWORD *)(v8 + 8) == *(_DWORD *)(a1 + 8)
         && (v6 <= 1
          || *(_DWORD *)(v8 + 12) == *(_DWORD *)(a1 + 12)
          && *(_DWORD *)(v8 + 16) == *(_DWORD *)(a1 + 16)
          && *(_DWORD *)(v8 + 20) == *(_DWORD *)(a1 + 20)
          && (v6 == 2
           || *(_DWORD *)(a1 + 24) == *(_DWORD *)(v8 + 24)
           && *(_DWORD *)(v8 + 28) == *(_DWORD *)(a1 + 28)
           && *(_DWORD *)(a1 + 32) == *(_DWORD *)(v8 + 32)))) )
      {
        ++v7;
      }
      v5 = *(_DWORD *)v5;
    }
    while ( (int *)v5 != &dword_7025A32C );
    if ( !v7 )
    {
LABEL_43:
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
      sub_6F9549A0((int)v20, (int)&dword_7025A320);
      ++dword_7025A328;
      return 0;
    }
    return 0;
  }
  v1 = dword_7025A32C;
  if ( (int *)dword_7025A32C == &dword_7025A32C )
    return 0;
  v2 = *(_DWORD *)(a1 + 36);
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 8);
    if ( v2 == *(_DWORD *)(v3 + 36)
      && (!v2
       || *(_DWORD *)v3 == *(_DWORD *)a1
       && *(_DWORD *)(v3 + 4) == *(_DWORD *)(a1 + 4)
       && *(_DWORD *)(v3 + 8) == *(_DWORD *)(a1 + 8)
       && (v2 <= 1
        || *(_DWORD *)(a1 + 12) == *(_DWORD *)(v3 + 12)
        && *(_DWORD *)(a1 + 16) == *(_DWORD *)(v3 + 16)
        && *(_DWORD *)(a1 + 20) == *(_DWORD *)(v3 + 20)
        && (v2 == 2
         || *(_DWORD *)(a1 + 24) == *(_DWORD *)(v3 + 24)
         && *(_DWORD *)(a1 + 28) == *(_DWORD *)(v3 + 28)
         && *(_DWORD *)(a1 + 32) == *(_DWORD *)(v3 + 32)))) )
    {
      break;
    }
    v1 = *(_DWORD *)v1;
    if ( (int *)v1 == &dword_7025A32C )
      return 0;
  }
  j_j_free_1_0(*(void **)(v1 + 8));
  --dword_7025A334;
  sub_6F9549C0(v1);
  j_free_1((void *)v1);
  return 1;
}
