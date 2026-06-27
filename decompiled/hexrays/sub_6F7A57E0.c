char *__usercall sub_6F7A57E0@<eax>(int a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>)
{
  unsigned __int32 v3; // ebx@1
  char *v4; // esi@2
  unsigned __int32 v5; // ecx@2
  int v6; // edi@2
  int v7; // ebp@3
  unsigned int v8; // edi@4
  unsigned int *v9; // esi@5
  unsigned int v10; // edx@5
  char *v11; // ebp@6
  int v12; // eax@8
  int v13; // eax@8
  int v14; // edi@8
  int v15; // edx@8
  int v16; // ecx@8
  char *result; // eax@11
  int v18; // ebp@13
  char *v19; // eax@13
  int v20; // ecx@13
  char *v21; // edx@13
  int v22; // [sp+28h] [bp-34h]@1
  char *v23; // [sp+2Ch] [bp-30h]@6
  int v24; // [sp+3Ch] [bp-20h]@5

  v22 = a3;
  v3 = _byteswap_ulong(*a2);
  if ( v3 )
  {
    v4 = (char *)a2 + 7;
    v5 = v3;
    v6 = 0;
    do
    {
      v7 = (unsigned __int8)*v4;
      v4 += 4;
      --v5;
      v6 += v7 + 1;
    }
    while ( v5 );
    v8 = v6 + 1;
  }
  else
  {
    v8 = 1;
  }
  v9 = a2 + 1;
  v10 = *(_DWORD *)(a1 + 28);
  v24 = 0;
  if ( v10 < v8 )
  {
    v18 = a1;
    *(_DWORD *)(a1 + 36) = v22;
    v19 = sub_6F773B30(v22, 4, v10, v8, *(char **)(a1 + 32), &v24);
    v20 = v24;
    v21 = v19;
    *(_DWORD *)(v18 + 32) = v19;
    result = 0;
    if ( v20 )
      return result;
    *(_DWORD *)(v18 + 28) = v8;
    v23 = v21;
    v11 = v21;
  }
  else
  {
    v23 = *(char **)(a1 + 32);
    v11 = *(char **)(a1 + 32);
  }
  for ( ; v3; v11 += 4 * v14 )
  {
    v12 = *(_BYTE *)v9;
    ++v9;
    v13 = *((_BYTE *)v9 - 2) | (v12 << 16) | (*((_BYTE *)v9 - 3) << 8);
    v14 = *((_BYTE *)v9 - 1) + 1;
    v15 = (int)&v11[-4 * v13];
    v16 = v14 + v13;
    do
    {
      *(_DWORD *)(v15 + 4 * v13) = v13;
      ++v13;
    }
    while ( v13 != v16 );
    --v3;
  }
  result = v23;
  *(_DWORD *)v11 = 0;
  return result;
}
