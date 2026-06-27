signed int __cdecl sub_6F7C8060(int *a1, int a2, int a3)
{
  signed int result; // eax@1
  signed int v4; // esi@5
  int v5; // ebp@5
  void *v6; // edx@6
  size_t v7; // esi@6
  unsigned int v8; // ecx@7
  void *v9; // eax@8
  int v10; // eax@12
  int v11; // ecx@12
  char *v12; // edi@13
  int v13; // ebx@13
  char *v14; // ebp@13
  char *v15; // ST04_4@14
  unsigned int v16; // eax@20
  unsigned int v17; // [sp+24h] [bp-38h]@6
  int v18; // [sp+28h] [bp-34h]@5
  int v19; // [sp+2Ch] [bp-30h]@6
  int v20; // [sp+3Ch] [bp-20h]@1

  result = 33;
  v20 = 0;
  if ( !a1 )
    return result;
  if ( !a2 || !a3 )
    return 6;
  if ( a2 == a3 )
    return 0;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = (*(_DWORD *)(a2 + 8) >> 31) | 1;
  v18 = (*(_DWORD *)(a3 + 8) >> 31) | 1;
  if ( !*(_DWORD *)(a2 + 12) )
  {
    *(_DWORD *)a3 = *(_DWORD *)a2;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a2 + 20);
    if ( v5 != v18 )
      *(_DWORD *)(a3 + 8) = -v4;
    return 0;
  }
  v6 = *(void **)(a3 + 12);
  v19 = *a1;
  v7 = ((v4 >> 31) ^ v4) - (v4 >> 31);
  v17 = v7 * *(_DWORD *)a2;
  if ( v6 )
  {
    v8 = *(_DWORD *)a3 * (((*(_DWORD *)(a3 + 8) >> 31) ^ *(_DWORD *)(a3 + 8)) - (*(_DWORD *)(a3 + 8) >> 31));
    if ( v17 == v8 )
      goto LABEL_12;
    v9 = sub_6F773C80(v19, 1, v8, v17, v6, &v20);
    *(_DWORD *)(a3 + 12) = v9;
    v6 = v9;
  }
  else
  {
    v16 = sub_6F773AE0(v19, v17, &v20);
    *(_DWORD *)(a3 + 12) = v16;
    v6 = (void *)v16;
  }
  result = v20;
  if ( v20 )
    return result;
LABEL_12:
  v10 = *(_DWORD *)a2;
  *(_DWORD *)a3 = *(_DWORD *)a2;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 12) = v6;
  *(_DWORD *)(a3 + 20) = v11;
  if ( v5 == v18 )
  {
    memcpy(v6, *(const void **)(a2 + 12), v17);
    return v20;
  }
  v12 = *(char **)(a2 + 12);
  v13 = v10;
  v14 = (char *)v6 + v7 * (v10 - 1);
  if ( !v10 )
    return 0;
  do
  {
    v15 = v12;
    v12 += v7;
    memcpy(v14, v15, v7);
    v14 -= v7;
    --v13;
  }
  while ( v13 );
  return v20;
}
