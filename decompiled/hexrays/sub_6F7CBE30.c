int __usercall sub_6F7CBE30@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // esi@1
  char *v5; // eax@1
  unsigned int v6; // ebx@1
  void *v7; // edx@1
  size_t v8; // eax@3
  size_t v9; // ebx@3
  int v10; // ebp@6
  int (__cdecl *v11)(_DWORD, void *, size_t); // eax@9
  void *v12; // ST1C_4@10
  int v13; // eax@10
  char *v14; // ST1C_4@11
  int v15; // ebp@11
  int v16; // eax@11
  int v18; // ebx@13
  void *v19; // ecx@13
  size_t v20; // eax@14
  size_t v21; // ebx@14
  int v22; // eax@17
  int (__cdecl *v23)(_DWORD, void *, size_t); // eax@20
  void *v24; // ST18_4@21
  int v25; // eax@21
  void *v26; // ST00_4@22
  char *v27; // ST18_4@22
  int v28; // [sp+14h] [bp-28h]@1
  char *v29; // [sp+18h] [bp-24h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(char **)(a2 + 12);
  v6 = *(_DWORD *)(v4 + 52);
  v7 = *(void **)(v4 + 48);
  v28 = a3;
  v29 = v5;
  if ( (unsigned int)v7 > v6 )
    v6 = *(_DWORD *)(v4 + 44);
  v8 = *(_DWORD *)(v3 + 16);
  v9 = v6 - (_DWORD)v7;
  if ( v9 > v8 )
    v9 = *(_DWORD *)(v3 + 16);
  if ( v9 )
  {
    v10 = 0;
    if ( a3 != -5 )
      v10 = a3;
    v28 = v10;
  }
  *(_DWORD *)(v3 + 20) += v9;
  *(_DWORD *)(v3 + 16) = v8 - v9;
  v11 = *(int (__cdecl **)(_DWORD, void *, size_t))(v4 + 56);
  if ( v11 )
  {
    v12 = v7;
    v13 = v11(*(_DWORD *)(v4 + 60), v7, v9);
    v7 = v12;
    *(_DWORD *)(v4 + 60) = v13;
    *(_DWORD *)(v3 + 48) = v13;
  }
  v14 = (char *)v7;
  v15 = (int)&v29[v9];
  memcpy(v29, v7, v9);
  v16 = (int)&v14[v9];
  if ( &v14[v9] == *(char **)(v4 + 44) )
  {
    v18 = *(_DWORD *)(v4 + 52);
    v19 = *(void **)(v4 + 40);
    if ( v16 == v18 )
    {
      v20 = *(_DWORD *)(v3 + 16);
      *(_DWORD *)(v4 + 52) = v19;
      v21 = 0;
    }
    else
    {
      v20 = *(_DWORD *)(v3 + 16);
      v21 = v18 - (_DWORD)v19;
      if ( v21 > v20 )
        v21 = *(_DWORD *)(v3 + 16);
      if ( v21 )
      {
        v22 = 0;
        if ( v28 != -5 )
          v22 = v28;
        v28 = v22;
        v20 = *(_DWORD *)(v3 + 16);
      }
    }
    *(_DWORD *)(v3 + 20) += v21;
    *(_DWORD *)(v3 + 16) = v20 - v21;
    v23 = *(int (__cdecl **)(_DWORD, void *, size_t))(v4 + 56);
    if ( v23 )
    {
      v24 = v19;
      v25 = v23(*(_DWORD *)(v4 + 60), v19, v21);
      v19 = v24;
      *(_DWORD *)(v4 + 60) = v25;
      *(_DWORD *)(v3 + 48) = v25;
    }
    v26 = (void *)v15;
    v15 += v21;
    v27 = (char *)v19;
    memcpy(v26, v19, v21);
    v16 = (int)&v27[v21];
  }
  *(_DWORD *)(v3 + 12) = v15;
  *(_DWORD *)(v4 + 48) = v16;
  return v28;
}
