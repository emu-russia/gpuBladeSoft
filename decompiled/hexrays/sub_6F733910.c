void sub_6F733910()
{
  char *v0; // edi@2
  int v1; // esi@3
  void *v2; // ecx@6
  int v3; // ebx@6
  int v4; // edi@23
  int v5; // esi@24
  void *v6; // edx@26
  int v7; // ebx@29
  void *v8; // eax@30
  int v9; // esi@33
  void *v10; // ecx@34
  int v11; // esi@37
  void *v12; // edx@38
  int v13; // esi@41
  void *v14; // eax@42
  int v15; // esi@45
  void *v16; // ecx@46
  int v17; // esi@49
  void *v18; // edx@50
  int v19; // esi@53
  void *v20; // eax@54

  if ( dword_6FBB5540 )
  {
    v0 = (char *)&unk_6FF41C20;
    do
    {
      v1 = (int)(v0 - 2048);
      do
      {
        if ( *(_DWORD *)v1 )
        {
          j_j_free_1(*(void **)v1);
          *(_DWORD *)v1 = 0;
        }
        v2 = *(void **)(v1 + 4);
        v3 = v1 + 4;
        if ( v2 )
        {
          j_j_free_1(v2);
          *(_DWORD *)(v1 + 4) = 0;
        }
        if ( *(_DWORD *)(v1 + 8) )
        {
          j_j_free_1(*(void **)(v1 + 8));
          *(_DWORD *)(v1 + 8) = 0;
        }
        if ( *(_DWORD *)(v1 + 12) )
        {
          j_j_free_1(*(void **)(v1 + 12));
          *(_DWORD *)(v1 + 12) = 0;
        }
        if ( *(_DWORD *)(v1 + 16) )
        {
          j_j_free_1(*(void **)(v1 + 16));
          *(_DWORD *)(v1 + 16) = 0;
        }
        if ( *(_DWORD *)(v1 + 20) )
        {
          j_j_free_1(*(void **)(v1 + 20));
          *(_DWORD *)(v1 + 20) = 0;
        }
        if ( *(_DWORD *)(v1 + 24) )
        {
          j_j_free_1(*(void **)(v1 + 24));
          *(_DWORD *)(v1 + 24) = 0;
        }
        if ( *(_DWORD *)(v1 + 28) )
        {
          j_j_free_1(*(void **)(v1 + 28));
          *(_DWORD *)(v1 + 28) = 0;
        }
        v1 += 32;
      }
      while ( (char *)(v3 + 28) != v0 );
      v0 = (char *)(v3 + 2076);
    }
    while ( (_UNKNOWN *)(v3 + 2076) != &unk_70041C20 );
  }
  if ( dword_6FBB553C == 2 )
  {
    v4 = 2048;
    do
    {
      v5 = v4 - 2048;
      do
      {
        if ( *(int *)((char *)dword_6FE41420 + v5) )
        {
          j_j_free_1(*(void **)((char *)dword_6FE41420 + v5));
          v6 = *(void **)((char *)dword_6FD41420 + v5);
          *(int *)((char *)dword_6FE41420 + v5) = 0;
          if ( v6 )
            j_j_free_1(v6);
          *(int *)((char *)dword_6FD41420 + v5) = 0;
        }
        v7 = v5 + 4;
        if ( *(int *)((char *)&dword_6FE41420[1] + v5) )
        {
          j_j_free_1(*(void **)((char *)&dword_6FE41420[1] + v5));
          v8 = *(void **)((char *)dword_6FD41420 + v7);
          *(int *)((char *)dword_6FE41420 + v7) = 0;
          if ( v8 )
            j_j_free_1(v8);
          *(int *)((char *)dword_6FD41420 + v7) = 0;
        }
        v9 = v5 + 8;
        if ( *(int *)((char *)&dword_6FE41420[1] + v7) )
        {
          j_j_free_1(*(void **)((char *)&dword_6FE41420[1] + v7));
          v10 = *(void **)((char *)dword_6FD41420 + v9);
          *(int *)((char *)dword_6FE41420 + v9) = 0;
          if ( v10 )
            j_j_free_1(v10);
          *(int *)((char *)dword_6FD41420 + v9) = 0;
        }
        v11 = v7 + 8;
        if ( *(int *)((char *)&dword_6FE41420[2] + v7) )
        {
          j_j_free_1(*(void **)((char *)&dword_6FE41420[2] + v7));
          v12 = *(void **)((char *)dword_6FD41420 + v11);
          *(int *)((char *)dword_6FE41420 + v11) = 0;
          if ( v12 )
            j_j_free_1(v12);
          *(int *)((char *)dword_6FD41420 + v11) = 0;
        }
        v13 = v7 + 12;
        if ( *(int *)((char *)&dword_6FE41420[3] + v7) )
        {
          j_j_free_1(*(void **)((char *)&dword_6FE41420[3] + v7));
          v14 = *(void **)((char *)dword_6FD41420 + v13);
          *(int *)((char *)dword_6FE41420 + v13) = 0;
          if ( v14 )
            j_j_free_1(v14);
          *(int *)((char *)dword_6FD41420 + v13) = 0;
        }
        v15 = v7 + 16;
        if ( *(int *)((char *)&dword_6FE41420[4] + v7) )
        {
          j_j_free_1(*(void **)((char *)&dword_6FE41420[4] + v7));
          v16 = *(void **)((char *)dword_6FD41420 + v15);
          *(int *)((char *)dword_6FE41420 + v15) = 0;
          if ( v16 )
            j_j_free_1(v16);
          *(int *)((char *)dword_6FD41420 + v15) = 0;
        }
        v17 = v7 + 20;
        if ( *(int *)((char *)&dword_6FE41420[5] + v7) )
        {
          j_j_free_1(*(void **)((char *)&dword_6FE41420[5] + v7));
          v18 = *(void **)((char *)dword_6FD41420 + v17);
          *(int *)((char *)dword_6FE41420 + v17) = 0;
          if ( v18 )
            j_j_free_1(v18);
          *(int *)((char *)dword_6FD41420 + v17) = 0;
        }
        v19 = v7 + 24;
        if ( *(int *)((char *)&dword_6FE41420[6] + v7) )
        {
          j_j_free_1(*(void **)((char *)&dword_6FE41420[6] + v7));
          v20 = *(void **)((char *)dword_6FD41420 + v19);
          *(int *)((char *)dword_6FE41420 + v19) = 0;
          if ( v20 )
            j_j_free_1(v20);
          *(int *)((char *)dword_6FD41420 + v19) = 0;
        }
        v5 = v7 + 28;
      }
      while ( v4 != v7 + 28 );
      v4 = v7 + 2076;
    }
    while ( v7 != 1048548 );
  }
}
