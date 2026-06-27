void sub_6F75B290()
{
  void **v0; // ebx@1
  void **v1; // edx@3
  void **v2; // ebx@4
  int v3; // ebx@5
  int *v4; // eax@7
  int *v5; // ebx@8
  int v6; // ebx@9
  int *v7; // ecx@11
  int *v8; // ebx@12
  int v9; // ebx@13
  int *v10; // edx@15
  int *v11; // ebx@16

  sub_6F75E4A0();
  nullsub_8();
  sub_6F75F990();
  sub_6F75FA70();
  sub_6F7626C0();
  sub_6F762A70();
  v0 = (void **)dword_7025A344;
  if ( dword_7025A344 != &dword_7025A344 )
  {
    do
    {
      j_j_free_1_0(v0[2]);
      v0 = (void **)*v0;
    }
    while ( v0 != &dword_7025A344 );
    v1 = (void **)dword_7025A344;
    if ( dword_7025A344 != &dword_7025A344 )
    {
      do
      {
        v2 = (void **)*v1;
        j_free_1(v1);
        v1 = v2;
      }
      while ( v2 != &dword_7025A344 );
    }
  }
  v3 = dword_7025A338;
  dword_7025A348 = (int)&dword_7025A344;
  dword_7025A344 = &dword_7025A344;
  dword_7025A34C = 0;
  if ( (int *)dword_7025A338 != &dword_7025A338 )
  {
    do
    {
      j_j_free_1_0(*(void **)(v3 + 8));
      v3 = *(_DWORD *)v3;
    }
    while ( (int *)v3 != &dword_7025A338 );
    v4 = (int *)dword_7025A338;
    if ( (int *)dword_7025A338 != &dword_7025A338 )
    {
      do
      {
        v5 = (int *)*v4;
        j_free_1(v4);
        v4 = v5;
      }
      while ( v5 != &dword_7025A338 );
    }
  }
  v6 = dword_7025A32C;
  dword_7025A33C = (int)&dword_7025A338;
  dword_7025A338 = (int)&dword_7025A338;
  dword_7025A340 = 0;
  if ( (int *)dword_7025A32C != &dword_7025A32C )
  {
    do
    {
      j_j_free_1_0(*(void **)(v6 + 8));
      v6 = *(_DWORD *)v6;
    }
    while ( (int *)v6 != &dword_7025A32C );
    v7 = (int *)dword_7025A32C;
    if ( (int *)dword_7025A32C != &dword_7025A32C )
    {
      do
      {
        v8 = (int *)*v7;
        j_free_1(v7);
        v7 = v8;
      }
      while ( v8 != &dword_7025A32C );
    }
  }
  v9 = dword_7025A320;
  dword_7025A330 = (int)&dword_7025A32C;
  dword_7025A32C = (int)&dword_7025A32C;
  dword_7025A334 = 0;
  if ( (int *)dword_7025A320 != &dword_7025A320 )
  {
    do
    {
      j_j_free_1_0(*(void **)(v9 + 8));
      v9 = *(_DWORD *)v9;
    }
    while ( (int *)v9 != &dword_7025A320 );
    v10 = (int *)dword_7025A320;
    if ( (int *)dword_7025A320 != &dword_7025A320 )
    {
      do
      {
        v11 = (int *)*v10;
        j_free_1(v10);
        v10 = v11;
      }
      while ( v11 != &dword_7025A320 );
    }
  }
  dword_7025A324 = (int)&dword_7025A320;
  dword_7025A320 = (int)&dword_7025A320;
  dword_7025A328 = 0;
}
