int sub_6F75B060()
{
  int v0; // esi@1
  _DWORD *v1; // ebx@2
  int v2; // eax@2
  _DWORD *v3; // eax@2
  int v4; // ebx@3
  int *v5; // edx@5
  int *v6; // esi@6
  int v7; // esi@7
  _DWORD *v8; // ebx@8
  int v9; // eax@8
  _DWORD *v10; // eax@8
  int v11; // ebx@9
  int *v12; // edx@11
  int *v13; // esi@12
  int result; // eax@13

  sub_6F75E460();
  sub_6F75F760();
  sub_6F762650();
  v0 = dword_7025A338;
  if ( (int *)dword_7025A338 != &dword_7025A338 )
  {
    do
    {
      v1 = sub_6F961B60(0x28u);
      v2 = *(_DWORD *)(v0 + 8);
      *v1 = *(_DWORD *)v2;
      v1[1] = *(_DWORD *)(v2 + 4);
      v1[2] = *(_DWORD *)(v2 + 8);
      v1[3] = *(_DWORD *)(v2 + 12);
      v1[4] = *(_DWORD *)(v2 + 16);
      v1[5] = *(_DWORD *)(v2 + 20);
      v1[6] = *(_DWORD *)(v2 + 24);
      v1[7] = *(_DWORD *)(v2 + 28);
      v1[8] = *(_DWORD *)(v2 + 32);
      v1[9] = *(_DWORD *)(v2 + 36);
      v3 = sub_6F961B60(0xCu);
      v3[2] = v1;
      sub_6F9549A0((int)v3, (int)&dword_7025A344);
      v0 = *(_DWORD *)v0;
      ++dword_7025A34C;
    }
    while ( (int *)v0 != &dword_7025A338 );
    v4 = dword_7025A338;
    if ( (int *)dword_7025A338 != &dword_7025A338 )
    {
      do
      {
        j_j_free_1_0(*(void **)(v4 + 8));
        v4 = *(_DWORD *)v4;
      }
      while ( (int *)v4 != &dword_7025A338 );
      v5 = (int *)dword_7025A338;
      if ( (int *)dword_7025A338 != &dword_7025A338 )
      {
        do
        {
          v6 = (int *)*v5;
          j_free_1(v5);
          v5 = v6;
        }
        while ( v6 != &dword_7025A338 );
      }
    }
  }
  v7 = dword_7025A320;
  dword_7025A33C = (int)&dword_7025A338;
  dword_7025A338 = (int)&dword_7025A338;
  dword_7025A340 = 0;
  if ( (int *)dword_7025A320 != &dword_7025A320 )
  {
    do
    {
      v8 = sub_6F961B60(0x28u);
      v9 = *(_DWORD *)(v7 + 8);
      *v8 = *(_DWORD *)v9;
      v8[1] = *(_DWORD *)(v9 + 4);
      v8[2] = *(_DWORD *)(v9 + 8);
      v8[3] = *(_DWORD *)(v9 + 12);
      v8[4] = *(_DWORD *)(v9 + 16);
      v8[5] = *(_DWORD *)(v9 + 20);
      v8[6] = *(_DWORD *)(v9 + 24);
      v8[7] = *(_DWORD *)(v9 + 28);
      v8[8] = *(_DWORD *)(v9 + 32);
      v8[9] = *(_DWORD *)(v9 + 36);
      v10 = sub_6F961B60(0xCu);
      v10[2] = v8;
      sub_6F9549A0((int)v10, (int)&dword_7025A32C);
      v7 = *(_DWORD *)v7;
      ++dword_7025A334;
    }
    while ( (int *)v7 != &dword_7025A320 );
    v11 = dword_7025A320;
    if ( (int *)dword_7025A320 != &dword_7025A320 )
    {
      do
      {
        j_j_free_1_0(*(void **)(v11 + 8));
        v11 = *(_DWORD *)v11;
      }
      while ( (int *)v11 != &dword_7025A320 );
      v12 = (int *)dword_7025A320;
      if ( (int *)dword_7025A320 != &dword_7025A320 )
      {
        do
        {
          v13 = (int *)*v12;
          j_free_1(v12);
          v12 = v13;
        }
        while ( v13 != &dword_7025A320 );
      }
    }
  }
  dword_7025A324 = (int)&dword_7025A320;
  result = 0;
  dword_7025A320 = (int)&dword_7025A320;
  dword_7025A328 = 0;
  return result;
}
