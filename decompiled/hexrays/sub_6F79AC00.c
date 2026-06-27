signed int __cdecl sub_6F79AC00(signed int a1, int a2, int a3)
{
  signed int result; // eax@1
  signed int v4; // eax@5
  int v5; // edi@7
  int v6; // eax@7
  signed int v7; // eax@8
  signed int v8; // ebp@8
  signed int v9; // eax@8
  int v10; // eax@8
  int v11; // esi@8
  unsigned int v12; // edx@9
  int v13; // ecx@10
  unsigned int v14; // ebx@10
  int v15; // eax@15
  int v16; // eax@16
  int v17; // ebp@16
  char *v18; // esi@17
  unsigned int v19; // esi@19
  unsigned int v20; // edi@19
  int v21; // edx@19
  int v22; // ebx@20
  int v23; // ecx@20
  char *v24; // edx@22
  unsigned int v25; // eax@26
  char *v26; // eax@32
  char *v27; // edx@36
  unsigned int v28; // ecx@36
  unsigned int v29; // ecx@39
  int v30; // eax@40
  int v31; // eax@45
  int v32; // edx@45
  unsigned int v33; // ecx@45
  unsigned int v34; // eax@45
  int v35; // eax@53
  int v36; // ebp@53
  unsigned int v37; // edx@53
  unsigned int v38; // eax@53
  int v39; // eax@55
  unsigned int v40; // edx@55
  unsigned int v41; // eax@55
  char *v42; // eax@58
  unsigned int v43; // ecx@60
  int v44; // ebx@60
  int v45; // eax@61
  int v46; // eax@64
  int v47; // ebp@64
  unsigned int v48; // edx@64
  unsigned int v49; // eax@64
  unsigned int v50; // edx@71
  char *v51; // eax@74
  signed int v52; // edi@76
  char *v53; // eax@76
  char *v54; // edx@76
  signed int v55; // esi@78
  char *v56; // eax@78
  int v57; // [sp+24h] [bp-58h]@7
  int v58; // [sp+24h] [bp-58h]@19
  signed int v59; // [sp+28h] [bp-54h]@8
  signed int v60; // [sp+28h] [bp-54h]@58
  signed int v61; // [sp+28h] [bp-54h]@74
  int v62; // [sp+2Ch] [bp-50h]@39
  signed int v63; // [sp+2Ch] [bp-50h]@49
  int v64; // [sp+30h] [bp-4Ch]@7
  int v65; // [sp+34h] [bp-48h]@48
  int v66; // [sp+3Ch] [bp-40h]@49
  signed int v67; // [sp+40h] [bp-3Ch]@7
  int v68; // [sp+44h] [bp-38h]@19
  int v69; // [sp+48h] [bp-34h]@19
  int v70; // [sp+4Ch] [bp-30h]@5
  int v71; // [sp+50h] [bp-2Ch]@45
  int v72; // [sp+54h] [bp-28h]@9
  unsigned int v73; // [sp+58h] [bp-24h]@19
  int v74; // [sp+5Ch] [bp-20h]@19

  result = a1;
  if ( *(_DWORD *)(a1 + 4) )
    return result;
  result = 6;
  if ( *(_DWORD *)(a1 + 12) != 1 )
    goto LABEL_3;
  v70 = *(_DWORD *)a1;
  v4 = 1;
  if ( !a2 )
    v4 = 0;
  v5 = 0;
  v67 = v4;
  v6 = 36 * v4;
  v57 = v6 + a1;
  v64 = v6 + 16;
  do
  {
    LOWORD(v7) = sub_6F7C9390(*(_DWORD *)(a3 + 8 * v5 + 4));
    v8 = v7 >> 16;
    LOWORD(v9) = sub_6F7C9390(*(_DWORD *)(a3 + 8 * v5));
    v10 = v9 >> 16;
    v59 = 0;
    v11 = v10;
    if ( v8 < 0 )
    {
      if ( v8 == -21 )
      {
        v11 = v10 - 21;
        v59 = 3;
        v8 = 0;
      }
      else
      {
        v59 = 1;
        v8 = 0;
      }
    }
    *(&v72 + v5) = -1;
    v12 = *(_DWORD *)(v57 + 16);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v57 + 24);
      v14 = 0;
      while ( *(_DWORD *)v13 != v11 || *(_DWORD *)(v13 + 4) != v8 )
      {
        ++v14;
        v13 += 12;
        if ( v12 == v14 )
        {
          v14 = *(_DWORD *)(v57 + 16);
          goto LABEL_39;
        }
      }
      if ( v12 <= v14 )
        goto LABEL_39;
    }
    else
    {
      v14 = 0;
LABEL_39:
      v62 = *(_DWORD *)(v57 + 24);
      v29 = v12 + 1;
      if ( v12 + 1 >= *(_DWORD *)(v57 + 20) )
      {
        v71 = 0;
        v65 = a1 + v64;
        if ( v29 > *(_DWORD *)(a1 + v64 + 4) )
        {
          v66 = v12 + 1;
          v63 = (v12 + 8) & 0xFFFFFFF8;
          *(_DWORD *)(v65 + 8) = sub_6F773B30(v70, 12, *(_DWORD *)(a1 + v64 + 4), v63, *(char **)(v65 + 8), &v71);
          result = v71;
          if ( v71 )
            goto LABEL_3;
          v29 = v66;
          *(_DWORD *)(v65 + 4) = v63;
          v62 = *(_DWORD *)(v57 + 24);
        }
      }
      v30 = v62 + 12 * v29 - 12;
      *(_DWORD *)(v57 + 16) = v29;
      *(_DWORD *)v30 = v11;
      *(_DWORD *)(v30 + 4) = v8;
      *(_DWORD *)(v30 + 8) = v59;
    }
    v15 = *(_DWORD *)(v57 + 28);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v57 + 36) + 16 * (v15 + 0xFFFFFFF);
      v17 = v16;
      if ( v14 < *(_DWORD *)v16 )
      {
        v18 = *(char **)(v16 + 8);
        goto LABEL_18;
      }
    }
    else
    {
      if ( !*(_DWORD *)(v57 + 32) )
      {
        v71 = 0;
        if ( !*(_DWORD *)(a1 + v64 + 16) )
        {
          *(_DWORD *)(a1 + v64 + 20) = sub_6F773B30(v70, 16, 0, 8, *(char **)(a1 + v64 + 20), &v71);
          result = v71;
          if ( v71 )
            goto LABEL_3;
          *(_DWORD *)(a1 + v64 + 16) = 8;
        }
      }
      v17 = *(_DWORD *)(v57 + 36);
      *(_DWORD *)v17 = 0;
      *(_DWORD *)(v17 + 12) = 0;
      *(_DWORD *)(v57 + 28) = 1;
    }
    v31 = *(_DWORD *)(v17 + 4);
    v32 = v14 + 1;
    v71 = 0;
    v33 = (unsigned int)(v31 + 7) >> 3;
    v34 = (v14 + 8) >> 3;
    if ( v33 < v34 )
    {
      v60 = (v34 + 7) & 0xFFFFFFF8;
      v42 = sub_6F773B30(v70, 1, v33, v60, *(char **)(v17 + 8), &v71);
      v18 = v42;
      *(_DWORD *)(v17 + 8) = v42;
      result = v71;
      if ( v71 )
        goto LABEL_3;
      v32 = v14 + 1;
      *(_DWORD *)(v17 + 4) = 8 * v60;
    }
    else
    {
      v18 = *(char **)(v17 + 8);
    }
    *(_DWORD *)v17 = v32;
LABEL_18:
    *(&v72 + v5++) = v14;
    v18[v14 >> 3] |= 128 >> (v14 & 7);
  }
  while ( v5 != 3 );
  v19 = v73;
  v58 = v74;
  v20 = v72;
  v21 = a1 + 36 * v67;
  v69 = *(_DWORD *)(v21 + 48);
  v68 = *(_DWORD *)(v21 + 40);
  if ( *(_DWORD *)(v21 + 40) )
  {
    v22 = *(_DWORD *)(v21 + 48);
    v23 = *(_DWORD *)(v21 + 40);
    while ( 1 )
    {
      v25 = *(_DWORD *)v22;
      if ( *(_DWORD *)v22 > (unsigned int)v72 )
      {
        v24 = *(char **)(v22 + 8);
        if ( (unsigned __int8)v24[v72 >> 3] & (unsigned __int8)(128 >> (v72 & 7)) )
        {
          if ( v72 < 0 )
            goto LABEL_30;
          goto LABEL_29;
        }
      }
      if ( v25 > v73 )
      {
        v24 = *(char **)(v22 + 8);
        if ( (unsigned __int8)v24[(signed int)v73 >> 3] & (128 >> (v73 & 7)) )
          break;
      }
      if ( v25 > v74 )
      {
        v24 = *(char **)(v22 + 8);
        if ( (unsigned __int8)v24[v74 >> 3] & (128 >> (v74 & 7)) )
          break;
      }
      v22 += 16;
      if ( !--v23 )
        goto LABEL_60;
    }
    if ( v72 < 0 )
      goto LABEL_30;
    if ( v25 <= v72 )
    {
LABEL_53:
      v35 = *(_DWORD *)(v22 + 4);
      v36 = v20 + 1;
      v71 = 0;
      v37 = (v20 + 8) >> 3;
      v38 = (unsigned int)(v35 + 7) >> 3;
      if ( v38 >= v37 )
      {
        v24 = *(char **)(v22 + 8);
        *(_DWORD *)v22 = v36;
        goto LABEL_29;
      }
      v61 = (v37 + 7) & 0xFFFFFFF8;
      v51 = sub_6F773B30(v70, 1, v38, v61, *(char **)(v22 + 8), &v71);
      v24 = v51;
      *(_DWORD *)(v22 + 8) = v51;
      result = v71;
      if ( !v71 )
      {
        *(_DWORD *)v22 = v36;
        *(_DWORD *)(v22 + 4) = 8 * v61;
        goto LABEL_29;
      }
LABEL_3:
      *(_DWORD *)(a1 + 4) = result;
      return result;
    }
LABEL_29:
    v24[v20 >> 3] |= 128 >> (v20 & 7);
LABEL_30:
    if ( (v19 & 0x80000000) == 0 )
    {
      if ( v19 < *(_DWORD *)v22 )
      {
        v26 = *(char **)(v22 + 8);
        goto LABEL_33;
      }
LABEL_64:
      v46 = *(_DWORD *)(v22 + 4);
      v47 = v19 + 1;
      v71 = 0;
      v48 = (v19 + 8) >> 3;
      v49 = (unsigned int)(v46 + 7) >> 3;
      if ( v49 < v48 )
      {
        v52 = (v48 + 7) & 0xFFFFFFF8;
        v53 = sub_6F773B30(v70, 1, v49, v52, *(char **)(v22 + 8), &v71);
        v54 = v53;
        *(_DWORD *)(v22 + 8) = v53;
        result = v71;
        if ( v71 )
          goto LABEL_3;
        *(_DWORD *)v22 = v47;
        *(_DWORD *)(v22 + 4) = 8 * v52;
        v26 = v54;
      }
      else
      {
        v26 = *(char **)(v22 + 8);
        *(_DWORD *)v22 = v47;
      }
LABEL_33:
      v26[v19 >> 3] |= 128 >> (v19 & 7);
    }
  }
  else
  {
LABEL_60:
    v43 = v68 + 1;
    v44 = 36 * v67 + a1;
    if ( (unsigned int)(v68 + 1) > *(_DWORD *)(v44 + 44) )
    {
      v71 = 0;
      v45 = v69;
      v50 = *(_DWORD *)(a1 + 36 * v67 + 44);
      if ( v43 > v50 )
      {
        *(_DWORD *)(a1 + 36 * v67 + 48) = sub_6F773B30(
                                            v70,
                                            16,
                                            v50,
                                            (v68 + 8) & 0xFFFFFFF8,
                                            *(char **)(a1 + 36 * v67 + 48),
                                            &v71);
        result = v71;
        if ( v71 )
          goto LABEL_3;
        v43 = v68 + 1;
        *(_DWORD *)(a1 + 36 * v67 + 44) = (v68 + 8) & 0xFFFFFFF8;
        v45 = *(_DWORD *)(v44 + 48);
      }
    }
    else
    {
      v45 = v69;
    }
    v22 = v45 + 16 * v68;
    *(_DWORD *)v22 = 0;
    *(_DWORD *)(v22 + 12) = 0;
    *(_DWORD *)(a1 + 36 * v67 + 40) = v43;
    if ( (v20 & 0x80000000) == 0 )
      goto LABEL_53;
    if ( (v19 & 0x80000000) == 0 )
      goto LABEL_64;
  }
  result = v58;
  if ( v58 >= 0 )
  {
    if ( (unsigned int)v58 >= *(_DWORD *)v22 )
    {
      v39 = *(_DWORD *)(v22 + 4);
      v71 = 0;
      v40 = (unsigned int)(v58 + 8) >> 3;
      v41 = (unsigned int)(v39 + 7) >> 3;
      if ( v41 < v40 )
      {
        v55 = (v40 + 7) & 0xFFFFFFF8;
        v56 = sub_6F773B30(v70, 1, v41, v55, *(char **)(v22 + 8), &v71);
        v27 = v56;
        *(_DWORD *)(v22 + 8) = v56;
        result = v71;
        if ( v71 )
          goto LABEL_3;
        *(_DWORD *)(v22 + 4) = 8 * v55;
      }
      else
      {
        v27 = *(char **)(v22 + 8);
      }
      *(_DWORD *)v22 = v58 + 1;
      v28 = v58;
    }
    else
    {
      v27 = *(char **)(v22 + 8);
      v28 = v58;
    }
    result = 128 >> (v28 & 7);
    v27[v28 >> 3] |= result;
  }
  return result;
}
