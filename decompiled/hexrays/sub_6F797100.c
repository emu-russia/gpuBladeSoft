signed int __cdecl sub_6F797100(unsigned int a1, int a2, signed int a3, int a4, int a5)
{
  signed int result; // eax@3
  bool v6; // al@4
  int v7; // ebx@6
  signed __int64 v8; // rax@9
  int v9; // eax@10
  bool v10; // cf@10
  int *i; // eax@13
  int v12; // edi@14
  int v13; // ebx@14
  signed __int64 v14; // rax@15
  signed __int64 v15; // rax@15
  signed __int64 v16; // rax@15
  unsigned int v17; // ST00_4@15
  signed __int64 v18; // rax@15
  unsigned int v19; // eax@21
  signed int v20; // esi@24
  __int64 v21; // rax@25
  signed __int64 v22; // rax@25
  int j; // ebx@25
  int v24; // eax@27
  signed __int64 v25; // rax@27
  _DWORD *v26; // ecx@35
  bool v27; // zf@35
  _DWORD *v28; // [sp+0h] [bp-28h]@22
  signed int v29; // [sp+4h] [bp-24h]@10
  int v30; // [sp+4h] [bp-24h]@22
  int v31; // [sp+8h] [bp-20h]@22
  signed int v32; // [sp+Ch] [bp-1Ch]@23
  signed int v33; // [sp+14h] [bp-14h]@21

  if ( *(_DWORD *)(a1 + 200) != a2 || *(_DWORD *)(a1 + 204) != a4 )
  {
    *(_DWORD *)(a1 + 200) = a2;
    *(_DWORD *)(a1 + 204) = a4;
    sub_6F796D30(a1, 0);
  }
  result = a1;
  if ( *(_DWORD *)(a1 + 404) == a3 && *(_DWORD *)(a1 + 408) == a5 )
    return result;
  *(_DWORD *)(a1 + 404) = a3;
  *(_DWORD *)(a1 + 408) = a5;
  sub_6F796D30(a1, 1);
  v6 = 0;
  if ( a3 <= 34359737 )
    v6 = 125 * a3 < 8 * *(_DWORD *)(a1 + 2476);
  v7 = *(_DWORD *)(a1 + 2480);
  *(_BYTE *)(a1 + 2492) = v6;
  if ( v7 > 0 )
  {
    do
    {
      v8 = (unsigned int)(((signed int)((unsigned __int64)(a3 * (signed __int64)v7) >> 32) >> 31) + 0x8000)
         + a3 * (signed __int64)v7;
      if ( (signed int)((HIDWORD(v8) << 16) + ((unsigned int)v8 >> 16)) <= 32 )
        break;
      --v7;
    }
    while ( v7 );
  }
  v29 = 1;
  *(_DWORD *)(a1 + 2484) = v7;
  v9 = 0;
  v10 = 1;
LABEL_11:
  if ( v10 )
  {
LABEL_14:
    for ( i = (int *)(a1 + 412); ; i = (int *)(a1 + 928) )
    {
      v12 = *i;
      v13 = (int)(i + 1);
      if ( *i )
        break;
LABEL_17:
      v9 = ++v29 - 1;
      v10 = (unsigned int)(v29 - 1) < 1;
      if ( v29 != 2 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( v9 == 2 )
    {
      i = (int *)(a1 + 1444);
      goto LABEL_14;
    }
    v12 = *(_DWORD *)(a1 + 1960);
    v13 = a1 + 1964;
    if ( !v12 )
      goto LABEL_16;
  }
  do
  {
    v14 = (unsigned int)(((signed int)((unsigned __int64)(a3 * (signed __int64)*(_DWORD *)(v13 + 8)) >> 32) >> 31)
                       + 0x8000)
        + a3 * (signed __int64)*(_DWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 28) = a5 + (HIDWORD(v14) << 16) + ((unsigned int)v14 >> 16);
    v15 = (unsigned int)(((signed int)((unsigned __int64)(a3 * (signed __int64)*(_DWORD *)(v13 + 12)) >> 32) >> 31)
                       + 0x8000)
        + a3 * (signed __int64)*(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 24) = a5 + (HIDWORD(v15) << 16) + ((unsigned int)v15 >> 16);
    v16 = (unsigned int)(((signed int)((unsigned __int64)(a3 * (signed __int64)*(_DWORD *)v13) >> 32) >> 31) + 0x8000)
        + a3 * (signed __int64)*(_DWORD *)v13;
    v17 = (HIDWORD(v16) << 16) + ((unsigned int)v16 >> 16);
    v18 = (unsigned int)(((signed int)((unsigned __int64)(a3 * (signed __int64)*(_DWORD *)(v13 + 4)) >> 32) >> 31)
                       + 0x8000)
        + a3 * (signed __int64)*(_DWORD *)(v13 + 4);
    *(_DWORD *)(v13 + 20) = (HIDWORD(v18) << 16) + ((unsigned int)v18 >> 16);
    v13 += 32;
    *(_DWORD *)(v13 - 16) = (a5 + v17 + 32) & 0xFFFFFFC0;
    --v12;
  }
  while ( v12 );
LABEL_16:
  if ( v29 != 4 )
    goto LABEL_17;
  v33 = 1;
  v19 = a1;
LABEL_22:
  v30 = v19 + 1444;
  v28 = (_DWORD *)(a1 + 416);
  v31 = *(_DWORD *)(a1 + 412);
  if ( !*(_DWORD *)(a1 + 412) )
    goto LABEL_31;
LABEL_23:
  result = *(_DWORD *)v30;
  v32 = *(_DWORD *)v30;
  do
  {
    while ( 1 )
    {
      v20 = v32;
      if ( v32 )
        break;
LABEL_29:
      v28 += 8;
      if ( !--v31 )
        goto LABEL_30;
    }
    v21 = *v28 - *(_DWORD *)(v30 + 4);
    v22 = a3 * (signed __int64)(signed int)((HIDWORD(v21) ^ v21) - HIDWORD(v21));
    result = (((unsigned __int64)(unsigned int)((SHIDWORD(v22) >> 31) + 0x8000) + v22) >> 32 << 16)
           + ((unsigned int)((SHIDWORD(v22) >> 31) + 0x8000 + v22) >> 16);
    for ( j = v30 + 4; result > 63; result = (HIDWORD(v25) << 16) + ((unsigned int)v25 >> 16) )
    {
      j += 32;
      if ( !--v20 )
        goto LABEL_29;
      v24 = abs(*v28 - *(_DWORD *)j);
      v25 = (unsigned int)(((signed int)((unsigned __int64)(a3 * (signed __int64)v24) >> 32) >> 31) + 0x8000)
          + a3 * (signed __int64)v24;
    }
    v26 = v28;
    v28 += 8;
    v27 = v31-- == 1;
    v26[7] = *(_DWORD *)(j + 28);
    v26[6] = *(_DWORD *)(j + 24);
    v26[4] = *(_DWORD *)(j + 16);
    result = *(_DWORD *)(j + 20);
    v26[5] = result;
  }
  while ( !v27 );
LABEL_30:
  if ( v33 != 2 )
  {
LABEL_31:
    while ( 1 )
    {
      ++v33;
      v19 = a1;
      if ( v33 == 1 )
        goto LABEL_22;
      v30 = a1 + 1960;
      v28 = (_DWORD *)(a1 + 932);
      result = *(_DWORD *)(a1 + 928);
      v31 = *(_DWORD *)(a1 + 928);
      if ( result )
        goto LABEL_23;
      if ( v33 == 2 )
        return result;
    }
  }
  return result;
}
