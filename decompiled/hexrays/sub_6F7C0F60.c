int __usercall sub_6F7C0F60@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  int v3; // edi@1
  int v4; // ebx@1
  int v5; // edi@1
  int v6; // edi@1
  unsigned int v7; // eax@1
  int v8; // edx@4
  unsigned int v9; // eax@4
  int v10; // eax@7
  int v11; // eax@9
  _WORD *v12; // ebx@10
  int v13; // edi@10
  _BYTE *v14; // ebp@10
  unsigned int v15; // ebx@11
  int v16; // esi@11
  int v17; // eax@14
  int v18; // ecx@14
  signed __int64 v19; // rax@14
  signed __int64 v20; // rax@14
  char v21; // al@14
  unsigned int v22; // ecx@18
  int v23; // edx@18
  unsigned int v24; // edi@18
  __int16 v25; // ax@19
  unsigned int v26; // eax@21
  int *v27; // eax@21
  int v28; // eax@22
  int v29; // esi@22
  int v30; // edx@23
  int v31; // ebx@27
  int v32; // edi@28
  signed int v33; // esi@28
  signed int v34; // ebp@28
  int v35; // ecx@28
  int i; // eax@28
  int v37; // ebx@31
  int v38; // ecx@31
  char v39; // dl@33
  unsigned int v40; // eax@42
  __int16 v41; // dx@44
  int v42; // edi@46
  unsigned int v43; // ebx@49
  int v44; // edx@50
  int v45; // ecx@50
  __int16 v46; // ax@53
  int result; // eax@56
  unsigned int v48; // edi@58
  char *v49; // ecx@59
  signed int v50; // ebp@61
  unsigned int v51; // edi@63
  char *v52; // ecx@64
  signed int v53; // ebp@66
  int v54; // edi@71
  int v55; // ebp@71
  int v56; // [sp+24h] [bp-58h]@10
  int v57; // [sp+24h] [bp-58h]@22
  int v58; // [sp+24h] [bp-58h]@46
  int v59; // [sp+28h] [bp-54h]@1
  int v60; // [sp+28h] [bp-54h]@23
  __int16 v61; // [sp+28h] [bp-54h]@31
  int v62; // [sp+2Ch] [bp-50h]@1
  __int16 v63; // [sp+2Ch] [bp-50h]@31
  int v64; // [sp+30h] [bp-4Ch]@1
  int v65; // [sp+30h] [bp-4Ch]@21
  int v66; // [sp+34h] [bp-48h]@1
  int v67; // [sp+34h] [bp-48h]@21
  int v68; // [sp+38h] [bp-44h]@11
  int v69; // [sp+3Ch] [bp-40h]@1
  int *v70; // [sp+3Ch] [bp-40h]@21
  unsigned int v71; // [sp+40h] [bp-3Ch]@10
  signed int v72; // [sp+44h] [bp-38h]@11
  unsigned int v73; // [sp+44h] [bp-38h]@21
  unsigned int v74; // [sp+48h] [bp-34h]@10
  int v75; // [sp+4Ch] [bp-30h]@11
  int v76; // [sp+5Ch] [bp-20h]@1

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  v59 = v3;
  v5 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 1512) = 0;
  *(_DWORD *)(a1 + 1524) = 0;
  v69 = a2;
  v76 = 0;
  v62 = v5;
  v64 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_WORD *)a2;
  v66 = v6;
  if ( v7 > 8 )
  {
    v48 = *(_DWORD *)(v2 + 32);
    if ( v7 > v48 )
    {
      v49 = *(char **)(v2 + 40);
      if ( v49 == (char *)(v2 + 3000) )
      {
        *(_DWORD *)(v2 + 40) = 0;
        v49 = 0;
      }
      v50 = (v7 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(v2 + 40) = sub_6F773B30(v4, 4, v48, v50, v49, &v76);
      result = v76;
      if ( v76 )
        return result;
      *(_DWORD *)(v2 + 32) = v50;
      v8 = *(_WORD *)(v69 + 2);
      v9 = v8 + 2;
      if ( (unsigned int)(v8 + 2) <= 0x60 )
        goto LABEL_5;
LABEL_63:
      v51 = *(_DWORD *)(v2 + 20);
      if ( v9 > v51 )
      {
        v52 = *(char **)(v2 + 28);
        if ( v52 == (char *)(v2 + 3032) )
        {
          *(_DWORD *)(v2 + 28) = 0;
          v52 = 0;
        }
        v53 = (v9 + 9) & 0xFFFFFFF8;
        *(_DWORD *)(v2 + 28) = sub_6F773B30(v4, 40, v51, v53, v52, &v76);
        result = v76;
        if ( v76 )
          return result;
        *(_DWORD *)(v2 + 20) = v53;
        v8 = *(_WORD *)(v69 + 2);
      }
      goto LABEL_7;
    }
  }
  else if ( !*(_DWORD *)(v2 + 40) )
  {
    *(_DWORD *)(v2 + 32) = 8;
    *(_DWORD *)(v2 + 40) = v2 + 3000;
  }
  v8 = *(_WORD *)(a2 + 2);
  v9 = v8 + 2;
  if ( (unsigned int)(v8 + 2) > 0x60 )
    goto LABEL_63;
LABEL_5:
  if ( !*(_DWORD *)(v2 + 28) )
  {
    *(_DWORD *)(v2 + 20) = 96;
    *(_DWORD *)(v2 + 28) = v2 + 3032;
  }
LABEL_7:
  *(_DWORD *)(v2 + 24) = v8;
  v10 = *(_WORD *)v69;
  *(_DWORD *)(v2 + 68) = 2;
  *(_DWORD *)(v2 + 1536) = -1;
  *(_DWORD *)(v2 + 36) = v10;
  if ( sub_6F770840(v69) == 1 )
  {
    *(_DWORD *)(v2 + 68) = -2;
    *(_DWORD *)(v2 + 1536) = 1;
  }
  *(_DWORD *)(v2 + 2992) = 0;
  *(_DWORD *)(v2 + 2996) = 0;
  *(_DWORD *)(v2 + 4) = v59;
  *(_DWORD *)(v2 + 12) = v62;
  *(_DWORD *)(v2 + 8) = v64;
  *(_DWORD *)(v2 + 16) = v66;
  v11 = *(_DWORD *)(v2 + 24);
  if ( !v11 )
    return v76;
  v74 = *(_DWORD *)(v2 + 28);
  v71 = *(_DWORD *)(v2 + 28) + 40 * v11;
  v12 = *(_WORD **)(v69 + 12);
  v13 = *(_DWORD *)(v69 + 4);
  v14 = *(_BYTE **)(v69 + 8);
  v56 = v74 + 40 * *v12;
  if ( v74 >= v71 )
  {
    v22 = *(_DWORD *)(v2 + 40);
    v23 = 4 * *(_DWORD *)(v2 + 36);
    v24 = v22 + v23;
    if ( v22 < v22 + v23 )
      goto LABEL_19;
    return v76;
  }
  v75 = v2;
  v15 = *(_DWORD *)(v2 + 28);
  v72 = 0;
  v68 = v56;
  v16 = v56;
  do
  {
    while ( 1 )
    {
      *(_BYTE *)(v15 + 2) = 4;
      *(_BYTE *)(v15 + 3) = 4;
      v17 = *(_DWORD *)v13;
      v18 = *(_DWORD *)(v13 + 4);
      *(_WORD *)(v15 + 12) = *(_DWORD *)v13;
      *(_WORD *)(v15 + 14) = v18;
      v19 = (unsigned int)(((signed int)((unsigned __int64)(v59 * (signed __int64)v17) >> 32) >> 31) + 0x8000)
          + v59 * (signed __int64)v17;
      LODWORD(v19) = v64 + (HIDWORD(v19) << 16) + ((unsigned int)v19 >> 16);
      *(_DWORD *)(v15 + 16) = v19;
      *(_DWORD *)(v15 + 4) = v19;
      v20 = (unsigned int)(((signed int)((unsigned __int64)(v62 * (signed __int64)v18) >> 32) >> 31) + 0x8000)
          + v62 * (signed __int64)v18;
      LODWORD(v20) = v66 + (HIDWORD(v20) << 16) + ((unsigned int)v20 >> 16);
      *(_DWORD *)(v15 + 20) = v20;
      *(_DWORD *)(v15 + 8) = v20;
      v21 = *v14 & 3;
      if ( !v21 )
        break;
      *(_DWORD *)(v15 + 36) = v16;
      *(_WORD *)v15 = 2 * (v21 == 2);
      *(_DWORD *)(v16 + 32) = v15;
      v16 = v15;
      if ( v68 == v15 )
        goto LABEL_16;
LABEL_13:
      v15 += 40;
      v13 += 8;
      ++v14;
      if ( v71 <= v15 )
        goto LABEL_18;
    }
    *(_DWORD *)(v15 + 36) = v16;
    *(_WORD *)v15 = 1;
    *(_DWORD *)(v16 + 32) = v15;
    v16 = v15;
    if ( v68 != v15 )
      goto LABEL_13;
LABEL_16:
    ++v72;
    v16 = v68;
    if ( v72 >= *(_WORD *)v69 )
      goto LABEL_13;
    v15 += 40;
    v13 += 8;
    ++v14;
    v68 = v74 + 40 * *(_WORD *)(*(_DWORD *)(v69 + 12) + 2 * v72);
    v16 = v74 + 40 * *(_WORD *)(*(_DWORD *)(v69 + 12) + 2 * v72);
  }
  while ( v71 > v15 );
LABEL_18:
  v2 = v75;
  v22 = *(_DWORD *)(v75 + 40);
  v23 = 4 * *(_DWORD *)(v75 + 36);
  v24 = v22 + v23;
  v12 = *(_WORD **)(v69 + 12);
  if ( v22 + v23 <= v22 )
    goto LABEL_42;
LABEL_19:
  v25 = 0;
  do
  {
    v22 += 4;
    ++v12;
    *(_DWORD *)(v22 - 4) = v74 + 40 * v25;
    v25 = *(v12 - 1) + 1;
  }
  while ( v22 < v24 );
  v26 = 5 * (unsigned int)*(_WORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 2988) + 4) + 68) >> 9;
  v65 = v26;
  v67 = 2 * v26 - 1;
  v27 = *(int **)(v2 + 40);
  v70 = *(int **)(v2 + 40);
  v73 = (unsigned int)&v27[v23 / 4u];
  if ( v27 < &v27[v23 / 4u] )
  {
    do
    {
      v28 = *v27;
      v29 = *(_DWORD *)(v28 + 36);
      v57 = *(_DWORD *)(v28 + 36);
      if ( v28 == v29 )
      {
        v30 = *(_WORD *)(v29 + 12);
        v60 = *(_WORD *)(v29 + 14);
      }
      else
      {
        v30 = *(_WORD *)(v57 + 12);
        v60 = *(_WORD *)(v57 + 14);
        if ( v67 > (((*(_WORD *)(v28 + 14) - v60) >> 31) ^ (*(_WORD *)(v28 + 14) - v60))
                 - ((*(_WORD *)(v28 + 14) - v60) >> 31)
                 + (((*(_WORD *)(v28 + 12) - v30) >> 31) ^ (*(_WORD *)(v28 + 12) - v30))
                 - ((*(_WORD *)(v28 + 12) - v30) >> 31) )
        {
          while ( 1 )
          {
            v31 = *(_DWORD *)(v57 + 36);
            if ( v28 == v31
              || v67 <= (((v30 - *(_WORD *)(v31 + 12)) >> 31) ^ (v30 - *(_WORD *)(v31 + 12)))
                      - ((v30 - *(_WORD *)(v31 + 12)) >> 31)
                      + (((v60 - *(_WORD *)(v31 + 14)) >> 31) ^ (v60 - *(_WORD *)(v31 + 14)))
                      - ((v60 - *(_WORD *)(v31 + 14)) >> 31) )
            {
              break;
            }
            v57 = *(_DWORD *)(v57 + 36);
            v60 = *(_WORD *)(v31 + 14);
            v30 = *(_WORD *)(v31 + 12);
          }
        }
        else
        {
          v60 = *(_WORD *)(v28 + 14);
          v30 = *(_WORD *)(v28 + 12);
          v57 = v28;
        }
      }
      v32 = v57;
      v33 = 0;
      v34 = 0;
      v35 = v60;
      i = v57;
      *(_DWORD *)(v57 + 24) = 0;
      *(_DWORD *)(v57 + 28) = 0;
      while ( 1 )
      {
        v32 = *(_DWORD *)(v32 + 32);
        v61 = *(_WORD *)(v32 + 12);
        v34 += v61 - v30;
        v63 = *(_WORD *)(v32 + 14);
        v33 += v63 - v35;
        v37 = (v34 ^ (v34 >> 31)) - (v34 >> 31);
        v38 = (v33 ^ (v33 >> 31)) - (v33 >> 31);
        if ( v65 <= v37 + v38 )
          break;
        *(_WORD *)v32 |= 0x10u;
        if ( v32 == v57 )
          goto LABEL_40;
LABEL_30:
        v35 = v63;
        v30 = v61;
      }
      *(_DWORD *)(i + 24) = -858993459 * ((v32 - i) >> 3);
      *(_DWORD *)(v32 + 28) = 858993459 * ((v32 - i) >> 3);
      if ( v34 > v33 )
      {
        v39 = 1;
        if ( v33 < -v34 )
        {
          v38 = (v34 ^ (v34 >> 31)) - (v34 >> 31);
          v39 = -2;
          v34 = -v33;
        }
      }
      else
      {
        v34 = -v34;
        v39 = -1;
        if ( v34 <= v33 )
        {
          v38 = v37;
          v34 = v33;
          v39 = 2;
        }
      }
      if ( 14 * v38 >= v34 )
        v39 = 4;
      *(_BYTE *)(i + 3) = v39;
      for ( i = *(_DWORD *)(i + 32); v32 != i; i = *(_DWORD *)(i + 32) )
      {
        *(_BYTE *)(i + 2) = v39;
        *(_BYTE *)(i + 3) = v39;
      }
      *(_BYTE *)(v32 + 2) = v39;
      v34 = 0;
      *(_DWORD *)(i + 24) = -858993459 * ((v57 - i) >> 3);
      *(_DWORD *)(v57 + 28) = 858993459 * ((v57 - i) >> 3);
      v33 = 0;
      if ( v32 != v57 )
        goto LABEL_30;
LABEL_40:
      ++v70;
      v27 = v70;
    }
    while ( v73 > (unsigned int)v70 );
  }
  if ( v74 < v71 )
  {
LABEL_42:
    v40 = v74;
    do
    {
      while ( 1 )
      {
        v41 = *(_WORD *)v40;
        if ( !(*(_WORD *)v40 & 0x10) && *(_WORD *)(v40 + 2) == 1028 )
        {
          v58 = v40 + 40 * *(_DWORD *)(v40 + 24);
          v42 = v40 + 40 * *(_DWORD *)(v40 + 28);
          if ( ((*(_WORD *)(v58 + 12) - *(_WORD *)(v40 + 12)) ^ (*(_WORD *)(v40 + 12) - (signed int)*(_WORD *)(v42 + 12))) >= 0
            && ((*(_WORD *)(v58 + 14) - *(_WORD *)(v40 + 14)) ^ (*(_WORD *)(v40 + 14) - (signed int)*(_WORD *)(v42 + 14))) >= 0 )
          {
            break;
          }
        }
        v40 += 40;
        if ( v71 <= v40 )
          goto LABEL_49;
      }
      v40 += 40;
      *(_WORD *)(v40 - 40) = v41 | 0x10;
      *(_DWORD *)(v42 + 24) = -858993459 * ((v58 - v42) >> 3);
      *(_DWORD *)(v58 + 28) = 858993459 * ((v58 - v42) >> 3);
    }
    while ( v71 > v40 );
LABEL_49:
    v43 = v74;
    while ( 2 )
    {
      while ( 1 )
      {
        v46 = *(_WORD *)v43;
        if ( *(_WORD *)v43 & 0x10 )
          break;
        if ( !(v46 & 3) )
        {
          v44 = *(_BYTE *)(v43 + 3);
          v45 = *(_BYTE *)(v43 + 2);
          if ( (_BYTE)v44 == (_BYTE)v45 )
          {
            if ( (_BYTE)v44 == 4 )
            {
              v54 = v43 + 40 * *(_DWORD *)(v43 + 24);
              v55 = v43 + 40 * *(_DWORD *)(v43 + 28);
              if ( !sub_6F7CA120(
                      *(_WORD *)(v43 + 12) - *(_WORD *)(v55 + 12),
                      *(_WORD *)(v43 + 14) - *(_WORD *)(v55 + 14),
                      *(_WORD *)(v54 + 12) - *(_WORD *)(v43 + 12),
                      *(_WORD *)(v54 + 14) - *(_WORD *)(v43 + 14)) )
                break;
              *(_DWORD *)(v55 + 24) = -858993459 * ((v54 - v55) >> 3);
              *(_DWORD *)(v54 + 28) = 858993459 * ((v54 - v55) >> 3);
              v46 = *(_WORD *)v43;
            }
          }
          else if ( v44 + v45 )
          {
            break;
          }
        }
        v43 += 40;
        *(_WORD *)(v43 - 40) = v46 | 0x10;
        if ( v71 <= v43 )
          return v76;
      }
      v43 += 40;
      if ( v71 <= v43 )
        return v76;
      continue;
    }
  }
  return v76;
}
