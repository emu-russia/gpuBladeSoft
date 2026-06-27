int *__cdecl sub_6F7A5CE0(int a1, int a2, unsigned int a3)
{
  int v3; // esi@1
  int v4; // ebx@1
  unsigned int v5; // eax@1
  unsigned int v6; // ebp@7
  unsigned __int32 v7; // eax@7
  unsigned int v8; // edi@8
  unsigned int *v9; // ebp@8
  unsigned __int32 v10; // ebx@8
  unsigned int v11; // esi@10
  unsigned int v12; // eax@10
  int v13; // edx@10
  unsigned int v14; // ecx@10
  int v15; // edx@18
  int *result; // eax@20
  unsigned int v17; // edi@22
  unsigned int *v18; // ebp@22
  unsigned __int32 i; // edx@22
  unsigned int v20; // esi@24
  int v21; // ecx@24
  unsigned int v22; // eax@24
  char *v23; // eax@31
  int v24; // ecx@31
  char *v25; // edx@31
  unsigned int v26; // ebx@25
  int v27; // [sp+2Ch] [bp-40h]@1
  unsigned __int32 v28; // [sp+30h] [bp-3Ch]@7
  int v29; // [sp+34h] [bp-38h]@4
  int *v30; // [sp+38h] [bp-34h]@4
  int *v31; // [sp+3Ch] [bp-30h]@2
  int v32; // [sp+4Ch] [bp-20h]@1

  v32 = 0;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 24);
  v27 = v3 + 10;
  v5 = *(_DWORD *)(a1 + 28);
  if ( v4 + 1 > v5 )
  {
    *(_DWORD *)(a1 + 36) = a2;
    v23 = sub_6F773B30(a2, 4, v5, v4 + 1, *(char **)(a1 + 32), &v32);
    v24 = v32;
    v25 = v23;
    *(_DWORD *)(a1 + 32) = v23;
    result = 0;
    if ( v24 )
      return result;
    v31 = (int *)v25;
    *(_DWORD *)(a1 + 28) = v4 + 1;
  }
  else
  {
    v31 = *(int **)(a1 + 32);
  }
  if ( v4 )
  {
    v29 = v3 + 11 * v4 + 10;
    v30 = v31;
    do
    {
LABEL_7:
      v6 = *(_DWORD *)(v27 + 3);
      v27 += 11;
      v7 = _byteswap_ulong(v6);
      v28 = _byteswap_ulong(*(_DWORD *)(v27 - 4));
      if ( v7 )
      {
        v8 = 0;
        v9 = (unsigned int *)(*(_DWORD *)(a1 + 16) + v7);
        v10 = _byteswap_ulong(*v9);
        while ( v10 > v8 )
        {
          v11 = (v10 + v8) >> 1;
          v12 = BYTE2(v9[v11 + 1]) | (LOBYTE(v9[v11 + 1]) << 16) | (BYTE1(v9[v11 + 1]) << 8);
          v13 = BYTE3(v9[v11 + 1]);
          v14 = (v10 + v8) >> 1;
          if ( a3 < v12 )
          {
            while ( v8 < v11 )
            {
              v14 = (v8 + v11) >> 1;
              v13 = BYTE3(v9[v14 + 1]);
              v12 = BYTE2(v9[v14 + 1]) | (LOBYTE(v9[v14 + 1]) << 16) | (BYTE1(v9[v14 + 1]) << 8);
              if ( a3 >= v12 )
              {
                v10 = v11;
                goto LABEL_16;
              }
              v11 = (v8 + v11) >> 1;
            }
            break;
          }
LABEL_16:
          if ( a3 <= v13 + v12 )
          {
LABEL_19:
            *v30 = *(_BYTE *)(v27 - 9) | (*(_BYTE *)(v27 - 11) << 16) | (*(_BYTE *)(v27 - 10) << 8);
            ++v30;
            if ( v29 != v27 )
              goto LABEL_7;
            goto LABEL_20;
          }
          v8 = v14 + 1;
        }
      }
      if ( v28 )
      {
        v17 = 0;
        v18 = (unsigned int *)(*(_DWORD *)(a1 + 16) + v28);
        for ( i = _byteswap_ulong(*v18); i > v17; i = v20 )
        {
          v20 = (i + v17) >> 1;
          v21 = (int)v18 + 5 * v20 + 4;
          v22 = *(_BYTE *)(v21 + 2) | (*(_BYTE *)(v21 + 1) << 8) | (*(_BYTE *)v21 << 16);
          if ( a3 < v22 )
          {
            while ( v17 < v20 )
            {
              v26 = (v17 + v20) >> 1;
              v21 = (int)v18 + 5 * v26 + 4;
              v22 = *(_BYTE *)(v21 + 2) | (*(_BYTE *)v21 << 16) | (*(_BYTE *)(v21 + 1) << 8);
              if ( a3 >= v22 )
                goto LABEL_29;
              v20 = (v17 + v20) >> 1;
            }
            break;
          }
          v26 = (i + v17) >> 1;
          v20 = i;
LABEL_29:
          if ( a3 <= v22 )
          {
            v15 = *(_BYTE *)(v21 + 4);
            if ( !_byteswap_ushort(*(_WORD *)(v21 + 3)) )
              break;
            goto LABEL_19;
          }
          v17 = v26 + 1;
        }
      }
    }
    while ( v29 != v27 );
  }
  else
  {
    v30 = v31;
  }
LABEL_20:
  *v30 = 0;
  return v31;
}
