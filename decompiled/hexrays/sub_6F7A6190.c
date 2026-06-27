int __cdecl sub_6F7A6190(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi@1
  unsigned __int32 i; // eax@1
  unsigned int v5; // ebp@3
  unsigned int v6; // ebx@3
  _BYTE *v7; // ecx@3
  int v8; // eax@3
  int v9; // ecx@3
  unsigned int v10; // eax@3
  int v11; // ecx@5
  unsigned __int32 v13; // eax@14
  unsigned int v14; // edi@16
  int v15; // ebp@16
  unsigned __int32 j; // edx@16
  unsigned int v17; // esi@18
  int v18; // ecx@18
  unsigned int v19; // eax@18
  unsigned int v20; // ebx@19
  unsigned int v21; // edi@26
  int v22; // ebp@26
  unsigned __int32 v23; // ebx@26
  unsigned int v24; // esi@28
  unsigned int v25; // eax@28
  int v26; // edx@28
  unsigned int v27; // ecx@28
  int v28; // edx@36
  int v29; // [sp+0h] [bp-18h]@1
  unsigned __int32 v30; // [sp+4h] [bp-14h]@1
  unsigned __int32 v31; // [sp+4h] [bp-14h]@14

  v3 = 0;
  v29 = *(_DWORD *)(a1 + 16);
  v30 = _byteswap_ulong(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 6));
  for ( i = v30; i > v3; i = v30 )
  {
    v5 = (i + v3) >> 1;
    v6 = v5;
    v7 = (_BYTE *)(v29 + 11 * v5 + 10);
    v8 = *v7;
    v9 = (int)(v7 + 3);
    v10 = *(_BYTE *)(v9 - 1) | (v8 << 16) | (*(_BYTE *)(v9 - 2) << 8);
    if ( a3 < v10 )
    {
      while ( v3 < v5 )
      {
        v6 = (v3 + v5) >> 1;
        v11 = v29 + 11 * v6 + 10;
        v10 = *(_BYTE *)(v11 + 2) | (*(_BYTE *)v11 << 16) | (*(_BYTE *)(v11 + 1) << 8);
        if ( a3 >= v10 )
        {
          v9 = v11 + 3;
          v30 = v5;
          goto LABEL_11;
        }
        v5 = (v3 + v5) >> 1;
      }
      return -1;
    }
LABEL_11:
    if ( a3 <= v10 )
    {
      if ( v9 )
      {
        v13 = _byteswap_ulong(*(_DWORD *)v9);
        v31 = _byteswap_ulong(*(_DWORD *)(v9 + 4));
        if ( v13 )
        {
          v21 = 0;
          v22 = v29 + v13;
          v23 = _byteswap_ulong(*(_DWORD *)(v29 + v13));
          while ( v23 > v21 )
          {
            v24 = (v23 + v21) >> 1;
            v25 = *(_BYTE *)(v22 + 4 * v24 + 6) | (*(_BYTE *)(v22 + 4 * v24 + 5) << 8) | (*(_BYTE *)(v22 + 4 * v24 + 4) << 16);
            v26 = *(_BYTE *)(v22 + 4 * v24 + 7);
            v27 = (v23 + v21) >> 1;
            if ( a2 < v25 )
            {
              while ( v21 < v24 )
              {
                v27 = (v21 + v24) >> 1;
                v26 = *(_BYTE *)(v22 + 4 * v27 + 7);
                v25 = *(_BYTE *)(v22 + 4 * v27 + 6) | (*(_BYTE *)(v22 + 4 * v27 + 4) << 16) | (*(_BYTE *)(v22 + 4 * v27 + 5) << 8);
                if ( a2 >= v25 )
                {
                  v23 = v24;
                  goto LABEL_34;
                }
                v24 = (v21 + v24) >> 1;
              }
              break;
            }
LABEL_34:
            if ( a2 <= v25 + v26 )
              return 1;
            v21 = v27 + 1;
          }
        }
        if ( v31 )
        {
          v14 = 0;
          v15 = v31 + v29;
          for ( j = _byteswap_ulong(*(_DWORD *)(v31 + v29)); j > v14; j = v17 )
          {
            v17 = (j + v14) >> 1;
            v18 = v15 + 5 * v17 + 4;
            v19 = *(_BYTE *)(v18 + 2) | (*(_BYTE *)v18 << 16) | (*(_BYTE *)(v18 + 1) << 8);
            if ( v19 > a2 )
            {
              while ( v14 < v17 )
              {
                v20 = (v14 + v17) >> 1;
                v18 = v15 + 5 * v20 + 4;
                v19 = *(_BYTE *)(v18 + 2) | (*(_BYTE *)v18 << 16) | (*(_BYTE *)(v18 + 1) << 8);
                if ( a2 >= v19 )
                  goto LABEL_24;
                v17 = (v14 + v17) >> 1;
              }
              return -1;
            }
            v20 = (j + v14) >> 1;
            v17 = j;
LABEL_24:
            if ( a2 <= v19 )
            {
              v28 = *(_BYTE *)(v18 + 4);
              return -(_byteswap_ushort(*(_WORD *)(v18 + 3)) == 0);
            }
            v14 = v20 + 1;
          }
        }
      }
      return -1;
    }
    v3 = v6 + 1;
  }
  return -1;
}
