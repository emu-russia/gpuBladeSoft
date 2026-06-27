int __cdecl sub_6F78B510(int a1, int *a2, unsigned int a3)
{
  int v3; // ebx@1
  int result; // eax@1
  unsigned int v5; // esi@4
  int v6; // edi@4
  int v7; // esi@6
  int v8; // edx@6
  int v9; // ebp@6
  int v10; // eax@6
  int v11; // eax@6
  int v12; // ecx@6
  signed int v13; // edx@6
  unsigned int v14; // eax@10
  unsigned int v15; // ebp@13
  unsigned int v16; // ecx@16
  int v17; // eax@16
  signed int v18; // eax@18
  int v19; // eax@20
  int v20; // edi@21
  unsigned int v21; // ecx@21
  char v22; // dl@22
  char v23; // bl@22
  char v24; // dl@22
  int v25; // edx@24
  int v26; // ecx@24
  int v27; // eax@24
  _BYTE *v28; // edi@28
  int v29; // ecx@29
  unsigned int v30; // eax@30
  unsigned int v31; // edx@30
  int v32; // eax@32
  unsigned int v33; // edi@33
  char v34; // dl@34
  char v35; // cl@34

  v3 = *a2;
  result = 35;
  if ( !*a2 )
    return result;
  result = 6;
  if ( *(_DWORD *)(v3 + 16) <= a3 )
    return result;
  v5 = 0;
  v6 = *(_DWORD *)(v3 + 104);
  if ( a3 )
    v5 = 16 * (a3 - 1);
  v7 = *(_DWORD *)(v3 + 292) + v5;
  v8 = *(_WORD *)v7;
  v9 = *(_WORD *)(v7 + 8) + *(_WORD *)(v7 + 6);
  *(_DWORD *)(a1 + 76) = v9;
  v10 = *(_WORD *)(v7 + 2);
  *(_BYTE *)(a1 + 94) = 1;
  v11 = v10 - v8;
  *(_WORD *)(a1 + 92) = 1;
  *(_DWORD *)(a1 + 80) = v11;
  v12 = *(_DWORD *)(v3 + 308) & 3;
  v13 = 1 << v12;
  if ( 1 << v12 == 2 )
  {
    v14 = 2 * ((unsigned int)(v11 + 15) >> 4);
    *(_DWORD *)(a1 + 84) = v14;
    goto LABEL_13;
  }
  if ( 1 << v12 <= 2 )
  {
    if ( v13 == 1 )
    {
      v14 = (unsigned int)(v11 + 7) >> 3;
      *(_DWORD *)(a1 + 84) = v14;
      goto LABEL_13;
    }
    return 3;
  }
  if ( v13 == 4 )
  {
    v14 = 4 * ((unsigned int)(v11 + 31) >> 5);
    *(_DWORD *)(a1 + 84) = v14;
    goto LABEL_13;
  }
  if ( v13 != 8 )
    return 3;
  v14 = 8 * ((unsigned int)(v11 + 63) >> 6);
  *(_DWORD *)(a1 + 84) = v14;
LABEL_13:
  v15 = v14 * v9;
  result = sub_6F769350(a1, v15);
  if ( !result )
  {
    result = sub_6F771FF0(v6, *(_DWORD *)(v7 + 12));
    if ( !result )
    {
      result = sub_6F7720B0(v6, *(void **)(a1 + 88), v15);
      if ( !result )
      {
        v16 = *(_DWORD *)(v3 + 308);
        v17 = *(_DWORD *)(v3 + 308) & 8;
        if ( !v17 )
        {
          v28 = *(_BYTE **)(a1 + 88);
          if ( v15 )
          {
            v29 = (int)&v28[v15];
            do
            {
              v30 = *v28++;
              v31 = (unsigned __int8)(2 * v30 & 0xAA) | (v30 >> 1) & 0x55;
              *(v28 - 1) = ((4 * (_BYTE)v31 & 0xCC | (v31 >> 2) & 0x33) >> 4) | 16
                                                                              * (4 * v31 & 0xCC | (v31 >> 2) & 0x33);
            }
            while ( v28 != (_BYTE *)v29 );
            v16 = *(_DWORD *)(v3 + 308);
            v17 = *(_DWORD *)(v3 + 308) & 8;
          }
        }
        if ( ((v16 >> 2) & 1) != (v17 != 0) )
        {
          v18 = 1 << ((unsigned __int8)(v16 & 0x30) >> 4);
          if ( v18 == 2 )
          {
            v32 = *(_DWORD *)(a1 + 88);
            if ( v15 > 1 )
            {
              v33 = v32 + 2 * ((v15 - 2) >> 1) + 2;
              do
              {
                v34 = *(_BYTE *)v32;
                v35 = *(_BYTE *)(v32 + 1);
                v32 += 2;
                *(_BYTE *)(v32 - 2) = v35;
                *(_BYTE *)(v32 - 1) = v34;
              }
              while ( v32 != v33 );
            }
          }
          else if ( v18 == 4 )
          {
            v19 = *(_DWORD *)(a1 + 88);
            if ( v15 > 3 )
            {
              v20 = v3;
              v21 = v19 + 4 * ((v15 - 4) >> 2) + 4;
              do
              {
                v22 = *(_BYTE *)v19;
                v23 = *(_BYTE *)(v19 + 3);
                v19 += 4;
                *(_BYTE *)(v19 - 4) = v23;
                *(_BYTE *)(v19 - 1) = v22;
                v24 = *(_BYTE *)(v19 - 3);
                *(_BYTE *)(v19 - 3) = *(_BYTE *)(v19 - 2);
                *(_BYTE *)(v19 - 2) = v24;
              }
              while ( v19 != v21 );
              v3 = v20;
            }
          }
        }
        v25 = *(_WORD *)v7;
        v26 = *(_WORD *)(v7 + 4);
        *(_DWORD *)(a1 + 72) = 1651078259;
        *(_DWORD *)(a1 + 100) = v25;
        v27 = *(_WORD *)(v7 + 6);
        *(_DWORD *)(a1 + 40) = v26 << 6;
        *(_DWORD *)(a1 + 104) = v27;
        *(_DWORD *)(a1 + 32) = v25 << 6;
        *(_DWORD *)(a1 + 36) = v27 << 6;
        *(_DWORD *)(a1 + 24) = (*(_WORD *)(v7 + 2) - v25) << 6;
        *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 76) << 6;
        sub_6F76C600(a1 + 24, (*(_DWORD *)(v3 + 204) + *(_DWORD *)(v3 + 208)) << 6);
        result = 0;
      }
    }
  }
  return result;
}
