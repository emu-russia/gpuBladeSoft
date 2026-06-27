char *__cdecl sub_6F7A58F0(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // edi@1
  int v4; // ebp@1
  unsigned __int32 i; // eax@1
  unsigned int v6; // esi@3
  unsigned int v7; // ebx@3
  _BYTE *v8; // ecx@3
  int v9; // eax@3
  int v10; // ecx@3
  unsigned int v11; // eax@3
  int v12; // ecx@5
  char *result; // eax@8
  unsigned __int32 v14; // eax@14
  unsigned __int32 v15; // ebx@14
  int v16; // ebx@17
  int v17; // ebp@17
  unsigned __int32 v18; // eax@17
  unsigned __int32 v19; // esi@17
  _BYTE *v20; // eax@17
  unsigned __int32 v21; // edx@18
  int v22; // ecx@18
  int v23; // esi@19
  unsigned int v24; // esi@22
  unsigned int v25; // eax@22
  int v26; // edx@24
  int v27; // esi@24
  unsigned int v28; // ebp@24
  unsigned int v29; // esi@24
  unsigned int v30; // edi@24
  int v31; // edx@24
  int v32; // ecx@24
  int v33; // ebx@24
  unsigned int v34; // edx@25
  int v35; // edx@29
  int v36; // ecx@29
  int v37; // edi@32
  int v38; // ecx@32
  int v39; // esi@34
  int v40; // edx@34
  _BYTE *v41; // edx@41
  char *v42; // esi@41
  int v43; // ecx@42
  unsigned int v44; // edx@46
  int v45; // ecx@47
  int v46; // ebp@49
  int v47; // esi@50
  int v48; // edx@50
  unsigned int v49; // edi@50
  int v50; // esi@50
  unsigned int v51; // edx@50
  int v52; // ecx@51
  char *v53; // eax@55
  int v54; // ecx@55
  char *v55; // edx@55
  unsigned __int32 v56; // [sp+24h] [bp-48h]@1
  unsigned int v57; // [sp+24h] [bp-48h]@24
  int v58; // [sp+28h] [bp-44h]@24
  unsigned int v59; // [sp+2Ch] [bp-40h]@24
  unsigned int v60; // [sp+30h] [bp-3Ch]@24
  int v61; // [sp+34h] [bp-38h]@24
  unsigned __int32 v62; // [sp+38h] [bp-34h]@17
  unsigned __int32 v63; // [sp+3Ch] [bp-30h]@17
  int v64; // [sp+4Ch] [bp-20h]@22

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 16);
  v56 = _byteswap_ulong(*(_DWORD *)(v4 + 6));
  for ( i = v56; ; i = v56 )
  {
    if ( i <= v3 )
      return 0;
    v6 = (i + v3) >> 1;
    v7 = v6;
    v8 = (_BYTE *)(v4 + 11 * v6 + 10);
    v9 = *v8;
    v10 = (int)(v8 + 3);
    v11 = *(_BYTE *)(v10 - 1) | (v9 << 16) | (*(_BYTE *)(v10 - 2) << 8);
    if ( a3 < v11 )
    {
      while ( v3 < v6 )
      {
        v7 = (v3 + v6) >> 1;
        v12 = v4 + 11 * v7 + 10;
        v11 = *(_BYTE *)(v12 + 2) | (*(_BYTE *)v12 << 16) | (*(_BYTE *)(v12 + 1) << 8);
        if ( a3 >= v11 )
        {
          v10 = v12 + 3;
          v56 = v6;
          goto LABEL_11;
        }
        v6 = (v3 + v6) >> 1;
      }
      return 0;
    }
LABEL_11:
    if ( a3 <= v11 )
      break;
    v3 = v7 + 1;
  }
  if ( !v10 )
    return 0;
  v14 = _byteswap_ulong(*(_DWORD *)v10);
  v15 = _byteswap_ulong(*(_DWORD *)(v10 + 4));
  if ( !(v15 | v14) )
    return 0;
  if ( !v14 )
    return sub_6F7A5310(a1, (unsigned int *)(v4 + v15), a2);
  if ( !v15 )
    return sub_6F7A57E0(a1, (unsigned int *)(v4 + v14), a2);
  v16 = v4 + v15;
  v17 = v14 + v4;
  v62 = _byteswap_ulong(*(_DWORD *)v16);
  v18 = _byteswap_ulong(*(_DWORD *)v17);
  v19 = v18;
  v63 = v18;
  v20 = (_BYTE *)(v17 + 7);
  if ( !v19 )
  {
    if ( v62 )
      return sub_6F7A5310(a1, (unsigned int *)v16, a2);
    return sub_6F7A57E0(a1, (unsigned int *)v17, a2);
  }
  v21 = v19;
  v22 = 0;
  do
  {
    v23 = *v20;
    v20 += 4;
    --v21;
    v22 += v23 + 1;
  }
  while ( v21 );
  if ( !v62 )
    return sub_6F7A57E0(a1, (unsigned int *)v17, a2);
  if ( !v22 )
    return sub_6F7A5310(a1, (unsigned int *)v16, a2);
  v64 = 0;
  v24 = v62 + v22 + 1;
  v25 = *(_DWORD *)(a1 + 28);
  if ( v24 > v25 )
  {
    *(_DWORD *)(a1 + 36) = a2;
    v53 = sub_6F773B30(a2, 4, v25, v24, *(char **)(a1 + 32), &v64);
    v54 = v64;
    v55 = v53;
    *(_DWORD *)(a1 + 32) = v53;
    result = 0;
    if ( !v54 )
    {
      *(_DWORD *)(a1 + 28) = v24;
      result = v55;
      goto LABEL_24;
    }
  }
  else
  {
    result = *(char **)(a1 + 32);
LABEL_24:
    v60 = 1;
    v59 = 1;
    v61 = v17 + 8;
    v58 = v16 + 9;
    v26 = (*(_BYTE *)(v17 + 4) << 16) | (*(_BYTE *)(v17 + 5) << 8);
    v27 = *(_BYTE *)(v17 + 6);
    v28 = *(_BYTE *)(v17 + 7);
    v29 = v26 | v27;
    v30 = v29 + v28;
    v31 = (*(_BYTE *)(v16 + 4) << 16) | (*(_BYTE *)(v16 + 5) << 8);
    v32 = *(_BYTE *)(v16 + 6);
    v33 = 0;
    v57 = v32 | v31;
    while ( 1 )
    {
      v34 = 0;
      if ( v57 <= v30 )
        break;
LABEL_32:
      while ( 1 )
      {
        v37 = v29 + v34;
        v38 = v33 + 1;
        ++v34;
        *(_DWORD *)&result[4 * (v33 + 1) - 4] = v37;
        if ( v28 < v34 )
          break;
        ++v33;
      }
      if ( ++v59 > v63 )
      {
        if ( v60 > v62 )
        {
          ++v33;
        }
        else
        {
          v33 += 2;
          *(_DWORD *)&result[4 * v38] = v57;
          if ( v60 < v62 )
          {
            v41 = (_BYTE *)v58;
            v42 = &result[4 * v33];
            do
            {
              v43 = *v41;
              v41 += 5;
              v42 += 4;
              *((_DWORD *)v42 - 1) = *(v41 - 3) | (v43 << 16) | (*(v41 - 4) << 8);
            }
            while ( (_BYTE *)(v58 + 5 * (v62 - v60)) != v41 );
            v33 += v62 - v60;
          }
        }
        goto LABEL_44;
      }
      ++v33;
      v28 = *(_BYTE *)(v61 + 3);
      v39 = (*(_BYTE *)(v61 + 1) << 8) | (*(_BYTE *)v61 << 16);
      v40 = *(_BYTE *)(v61 + 2);
      v61 += 4;
      v29 = v40 | v39;
      v30 = v29 + v28;
    }
    while ( 1 )
    {
      if ( v29 > v57 )
        *(_DWORD *)&result[4 * v33++] = v57;
      if ( v62 < ++v60 )
        break;
      v35 = (*(_BYTE *)v58 << 16) | (*(_BYTE *)(v58 + 1) << 8);
      v36 = v58;
      v58 += 5;
      v57 = *(_BYTE *)(v36 + 2) | v35;
      v34 = 0;
      if ( v57 > v30 )
        goto LABEL_32;
    }
    if ( v59 <= v63 )
    {
      v44 = 0;
      do
      {
        v45 = v29 + v44++;
        *(_DWORD *)&result[4 * ++v33 - 4] = v45;
      }
      while ( v28 >= v44 );
      if ( v59 < v63 )
      {
        v46 = v61;
        do
        {
          v47 = *(_BYTE *)v46;
          v48 = *(_BYTE *)(v46 + 1);
          v46 += 4;
          v49 = *(_BYTE *)(v46 - 1);
          v50 = *(_BYTE *)(v46 - 2) | (v48 << 8) | (v47 << 16);
          v51 = 0;
          do
          {
            v52 = v50 + v51++;
            *(_DWORD *)&result[4 * ++v33 - 4] = v52;
          }
          while ( v49 >= v51 );
          ++v59;
        }
        while ( v59 != v63 );
      }
    }
LABEL_44:
    *(_DWORD *)&result[4 * v33] = 0;
  }
  return result;
}
