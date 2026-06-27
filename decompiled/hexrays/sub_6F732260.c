void sub_6F732260()
{
  int v0; // ebx@1
  int *v1; // esi@2
  void *v2; // ST00_4@2
  int v3; // ebx@3
  int *v4; // esi@4
  void *v5; // ST00_4@4
  int v6; // ebx@5
  int *v7; // esi@6
  void *v8; // ST00_4@6
  int *v9; // eax@7
  int *v10; // esi@8
  int *v11; // edx@9
  int *v12; // ebx@10
  int *v13; // ecx@11
  int *v14; // esi@12

  sub_6F761860(&dword_70057F18);
  v0 = dword_6FBBFDB8;
  if ( (int *)dword_6FBBFDB8 != &dword_6FBBFDB8 )
  {
    do
    {
      v1 = *(int **)v0;
      free(*(void **)(v0 + 8));
      --dword_6FBBFDC0;
      sub_6F9549C0(v0);
      v2 = (void *)v0;
      v0 = (int)v1;
      j_free_1(v2);
    }
    while ( v1 != &dword_6FBBFDB8 );
  }
  v3 = dword_6FBBFDAC;
  if ( (int *)dword_6FBBFDAC != &dword_6FBBFDAC )
  {
    do
    {
      v4 = *(int **)v3;
      free(*(void **)(v3 + 8));
      --dword_6FBBFDB4;
      sub_6F9549C0(v3);
      v5 = (void *)v3;
      v3 = (int)v4;
      j_free_1(v5);
    }
    while ( v4 != &dword_6FBBFDAC );
  }
  v6 = dword_6FBBFDA0;
  if ( (int *)dword_6FBBFDA0 != &dword_6FBBFDA0 )
  {
    do
    {
      v7 = *(int **)v6;
      free(*(void **)(v6 + 8));
      --dword_6FBBFDA8;
      sub_6F9549C0(v6);
      v8 = (void *)v6;
      v6 = (int)v7;
      j_free_1(v8);
    }
    while ( v7 != &dword_6FBBFDA0 );
  }
  v9 = (int *)dword_6FBBFDB8;
  if ( (int *)dword_6FBBFDB8 != &dword_6FBBFDB8 )
  {
    do
    {
      v10 = (int *)*v9;
      j_free_1(v9);
      v9 = v10;
    }
    while ( v10 != &dword_6FBBFDB8 );
  }
  v11 = (int *)dword_6FBBFDAC;
  dword_6FBBFDBC = (int)&dword_6FBBFDB8;
  dword_6FBBFDB8 = (int)&dword_6FBBFDB8;
  dword_6FBBFDC0 = 0;
  if ( (int *)dword_6FBBFDAC != &dword_6FBBFDAC )
  {
    do
    {
      v12 = (int *)*v11;
      j_free_1(v11);
      v11 = v12;
    }
    while ( v12 != &dword_6FBBFDAC );
  }
  v13 = (int *)dword_6FBBFDA0;
  dword_6FBBFDB0 = (int)&dword_6FBBFDAC;
  dword_6FBBFDAC = (int)&dword_6FBBFDAC;
  dword_6FBBFDB4 = 0;
  if ( (int *)dword_6FBBFDA0 != &dword_6FBBFDA0 )
  {
    do
    {
      v14 = (int *)*v13;
      j_free_1(v13);
      v13 = v14;
    }
    while ( v14 != &dword_6FBBFDA0 );
  }
  dword_6FBBFDA4 = (int)&dword_6FBBFDA0;
  dword_6FBBFDA0 = (int)&dword_6FBBFDA0;
  dword_6FBBFDA8 = 0;
}
