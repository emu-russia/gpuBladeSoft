signed int __usercall sub_6F7C16F0@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // ecx@1
  int v4; // eax@1
  signed int v5; // edx@1
  int v6; // esi@1
  unsigned int v7; // eax@2
  unsigned int i; // ecx@2
  int v9; // edx@3
  int v10; // edi@5
  int *v11; // eax@5
  int v12; // eax@6
  int v13; // edx@6
  int v14; // ebp@8
  signed int v15; // ecx@8
  signed int v16; // eax@8
  signed int v17; // ebx@8
  int v18; // edx@8
  signed int v19; // esi@9
  int v20; // eax@20
  __int16 v21; // bx@23
  signed int v22; // eax@29
  int v23; // ecx@30
  signed int v24; // ecx@34
  signed int v25; // edx@37
  int v26; // esi@39
  signed int result; // eax@40
  signed int v28; // edx@41
  int v29; // edx@42
  int v30; // ecx@42
  int v31; // edx@46
  unsigned int v32; // eax@46
  unsigned int v33; // esi@46
  int v34; // ecx@50
  int v35; // edi@53
  int v36; // ebx@53
  int v37; // ecx@53
  int v38; // edx@53
  int v39; // edi@53
  int v40; // ecx@56
  int v41; // eax@31
  unsigned int v42; // eax@68
  unsigned int v43; // ecx@68
  int v44; // edx@69
  signed int v45; // ST2C_4@71
  char *v46; // eax@71
  int v47; // ecx@71
  bool v48; // zf@71
  int v49; // [sp+24h] [bp-88h]@6
  int v50; // [sp+28h] [bp-84h]@1
  int v51; // [sp+2Ch] [bp-80h]@5
  signed int v52; // [sp+2Ch] [bp-80h]@40
  char v53; // [sp+32h] [bp-7Ah]@18
  char v54; // [sp+33h] [bp-79h]@8
  int v55; // [sp+34h] [bp-78h]@5
  int *v56; // [sp+38h] [bp-74h]@1
  int v57; // [sp+3Ch] [bp-70h]@1
  int v58; // [sp+40h] [bp-6Ch]@5
  unsigned int v59; // [sp+44h] [bp-68h]@1
  int v60; // [sp+48h] [bp-64h]@1
  int v61; // [sp+4Ch] [bp-60h]@1
  int v62; // [sp+5Ch] [bp-50h]@29
  int v63; // [sp+60h] [bp-4Ch]@1
  int v64; // [sp+64h] [bp-48h]@33
  int v65; // [sp+68h] [bp-44h]@33
  int v66; // [sp+6Ch] [bp-40h]@33
  int v67; // [sp+70h] [bp-3Ch]@33
  int v68; // [sp+74h] [bp-38h]@33
  int v69; // [sp+78h] [bp-34h]@33
  int v70; // [sp+7Ch] [bp-30h]@33
  int v71; // [sp+80h] [bp-2Ch]@1
  int v72; // [sp+84h] [bp-28h]@33
  int v73; // [sp+88h] [bp-24h]@33
  int v74; // [sp+8Ch] [bp-20h]@33

  v2 = a2;
  v61 = a2;
  v57 = a1;
  v60 = *(_DWORD *)a1;
  v56 = *(int **)(a1 + 40);
  v59 = (unsigned int)&v56[*(_DWORD *)(a1 + 36)];
  memset(&v63, 0, 0x30u);
  v3 = a1;
  v71 = 32000;
  v4 = a1 + 1468 * a2;
  v5 = *(_DWORD *)(v4 + 68);
  v6 = *(_DWORD *)(v4 + 68);
  *(_DWORD *)(v4 + 44) = 0;
  v50 = ((v5 >> 31) ^ v6) - (v5 >> 31);
  if ( !v2 )
  {
    v7 = *(_DWORD *)(v3 + 28);
    for ( i = v7 + 40 * *(_DWORD *)(v3 + 24); i > v7; *(_DWORD *)(v7 - 12) = *(_WORD *)(v7 - 26) )
    {
      v9 = *(_WORD *)(v7 + 12);
      v7 += 40;
      *(_DWORD *)(v7 - 16) = v9;
    }
    goto LABEL_4;
  }
  v42 = *(_DWORD *)(v57 + 28);
  v43 = v42 + 40 * *(_DWORD *)(v57 + 24);
  if ( v42 < v43 )
  {
    do
    {
      v44 = *(_WORD *)(v42 + 14);
      v42 += 40;
      *(_DWORD *)(v42 - 16) = v44;
      *(_DWORD *)(v42 - 12) = *(_WORD *)(v42 - 28);
    }
    while ( v43 > v42 );
LABEL_4:
    if ( (unsigned int)v56 < v59 )
      goto LABEL_5;
LABEL_46:
    v31 = v57 + 1468 * v61;
    v32 = *(_DWORD *)(v31 + 52);
    v33 = v32 + 48 * *(_DWORD *)(v31 + 44);
    if ( v32 >= v33 )
      return 0;
    while ( 1 )
    {
      v35 = *(_DWORD *)(v32 + 40);
      v36 = *(_DWORD *)(v32 + 44);
      v37 = *(_DWORD *)(v35 + 28);
      v38 = *(_DWORD *)(v36 + 28);
      v39 = *(_DWORD *)(*(_DWORD *)(v35 + 36) + 28);
      if ( v37 < v38 )
        break;
      if ( v37 < v39 )
        *(_WORD *)(v32 + 8) += (v39 - v37) >> 1;
      v40 = *(_DWORD *)(*(_DWORD *)(v36 + 32) + 28);
      if ( v38 <= v40 )
      {
LABEL_52:
        v32 += 48;
        if ( v33 <= v32 )
          return 0;
      }
      else
      {
        *(_WORD *)(v32 + 8) += (v38 - v40) >> 1;
        v32 += 48;
        if ( v33 <= v32 )
          return 0;
      }
    }
    if ( v37 > v39 )
      *(_WORD *)(v32 + 8) += (v37 - v39) >> 1;
    v34 = *(_DWORD *)(*(_DWORD *)(v36 + 32) + 28);
    if ( v38 < v34 )
      *(_WORD *)(v32 + 8) += (v34 - v38) >> 1;
    goto LABEL_52;
  }
  if ( (unsigned int)v56 >= v59 )
    return 0;
LABEL_5:
  v10 = 0;
  v51 = v50;
  v58 = 1468 * v61;
  v11 = v56;
  v55 = 1468 * v61 + v57;
  while ( 1 )
  {
    v12 = *v11;
    v13 = *(_DWORD *)(v12 + 36);
    v49 = v12;
    if ( v12 != v13 )
      break;
LABEL_45:
    ++v56;
    v11 = v56;
    if ( v59 <= (unsigned int)v56 )
      goto LABEL_46;
  }
  if ( v50 == (((signed int)*(_BYTE *)(v13 + 3) >> 31) ^ *(_BYTE *)(v13 + 3)) - ((signed int)*(_BYTE *)(v13 + 3) >> 31)
    && v50 == (((signed int)*(_BYTE *)(v12 + 3) >> 31) ^ *(_BYTE *)(v12 + 3)) - ((signed int)*(_BYTE *)(v12 + 3) >> 31) )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v13 + 36);
      if ( v50 != (((signed int)*(_BYTE *)(v13 + 3) >> 31) ^ *(_BYTE *)(v13 + 3))
                - ((signed int)*(_BYTE *)(v13 + 3) >> 31) )
        break;
      if ( v12 == v13 )
        goto LABEL_8;
    }
    v49 = *(_DWORD *)(v13 + 32);
  }
LABEL_8:
  v14 = v49;
  v54 = 0;
  v15 = -32000;
  v16 = 32000;
  v17 = 0;
  v18 = v10;
  while ( 1 )
  {
    if ( !v17 )
    {
      if ( v49 != v14 )
        goto LABEL_18;
      goto LABEL_25;
    }
    v19 = *(_DWORD *)(v14 + 24);
    if ( v16 > v19 )
      v16 = *(_DWORD *)(v14 + 24);
    if ( v15 < v19 )
      v15 = *(_DWORD *)(v14 + 24);
    if ( *(_BYTE *)(v14 + 3) != v51 || v49 == v14 )
      break;
LABEL_15:
    v14 = *(_DWORD *)(v14 + 32);
  }
  *(_DWORD *)(v18 + 44) = v14;
  *(_WORD *)(v18 + 2) = (v15 + v16) >> 1;
  v20 = *(_DWORD *)(v18 + 40);
  if ( (*(_BYTE *)v14 | *(_BYTE *)v20) & 3 )
    *(_BYTE *)v18 |= 1u;
  v15 = *(_DWORD *)(v14 + 28);
  v16 = *(_DWORD *)(v20 + 28);
  if ( v15 <= v16 )
  {
    if ( v15 >= v16 )
    {
      v16 = *(_DWORD *)(v14 + 28);
      v21 = 0;
    }
    else
    {
      v21 = v16 - v15;
      v15 = v16;
      v16 = *(_DWORD *)(v14 + 28);
    }
  }
  else
  {
    v21 = v15 - v16;
  }
  *(_WORD *)(v18 + 4) = v16;
  *(_WORD *)(v18 + 6) = v15;
  *(_WORD *)(v18 + 8) = v21;
  v18 = 0;
  if ( v49 != v14 )
    goto LABEL_18;
LABEL_25:
  if ( v54 )
  {
    v10 = v18;
    goto LABEL_45;
  }
  v54 = 1;
LABEL_18:
  v53 = *(_BYTE *)(v14 + 3);
  if ( v50 != (v53 ^ (v53 >> 31)) - (v53 >> 31) )
  {
    v17 = 0;
    goto LABEL_15;
  }
  v62 = 0;
  v22 = *(_DWORD *)(v55 + 44);
  if ( v22 <= 17 )
  {
    v23 = *(_DWORD *)(v55 + 52);
    if ( !v23 )
    {
      v41 = v57 + v58 + 72;
      v23 = v41;
      *(_DWORD *)(v55 + 52) = v41;
      *(_DWORD *)(v55 + 48) = 18;
      v22 = *(_DWORD *)(v55 + 44);
    }
    goto LABEL_32;
  }
  v24 = *(_DWORD *)(v55 + 48);
  if ( v22 < v24 )
  {
    v23 = *(_DWORD *)(v55 + 52);
LABEL_32:
    *(_DWORD *)(v55 + 44) = v22 + 1;
    v18 = v23 + 48 * v22;
LABEL_33:
    v51 = v53;
    v17 = 1;
    *(_DWORD *)v18 = v63;
    *(_DWORD *)(v18 + 4) = v64;
    *(_DWORD *)(v18 + 8) = v65;
    *(_DWORD *)(v18 + 12) = v66;
    *(_DWORD *)(v18 + 16) = v67;
    *(_DWORD *)(v18 + 20) = v68;
    *(_DWORD *)(v18 + 24) = v69;
    *(_DWORD *)(v18 + 28) = v70;
    *(_DWORD *)(v18 + 32) = v71;
    *(_DWORD *)(v18 + 36) = v72;
    *(_DWORD *)(v18 + 40) = v73;
    *(_DWORD *)(v18 + 44) = v74;
    *(_BYTE *)(v18 + 1) = v53;
    v16 = *(_DWORD *)(v14 + 24);
    *(_DWORD *)(v18 + 40) = v14;
    *(_DWORD *)(v18 + 44) = v14;
    v15 = v16;
    goto LABEL_15;
  }
  if ( v24 <= 44739241 )
  {
    v25 = v24 + (v24 >> 2) + 4;
    if ( v24 > v25 || v25 > 44739242 )
      v25 = 44739242;
    v26 = *(_DWORD *)(v55 + 52);
    if ( v26 == v57 + v58 + 72 )
    {
      v45 = v25;
      v46 = sub_6F773B30(v60, 48, 0, v25, 0, &v62);
      v47 = v62;
      v48 = v62 == 0;
      *(_DWORD *)(v55 + 52) = v46;
      v28 = v45;
      if ( !v48 )
        return v47;
      *(_DWORD *)v46 = *(_DWORD *)v26;
      *((_DWORD *)v46 + 215) = *(_DWORD *)(v26 + 860);
      qmemcpy(
        (void *)((unsigned int)(v46 + 4) & 0xFFFFFFFC),
        (const void *)(v26 - (_DWORD)&v46[-((unsigned int)(v46 + 4) & 0xFFFFFFFC)]),
        4 * ((unsigned int)&v46[-((unsigned int)(v46 + 4) & 0xFFFFFFFC) + 864] >> 2));
      result = v62;
    }
    else
    {
      v52 = v25;
      *(_DWORD *)(v55 + 52) = sub_6F773B30(v60, 48, v24, v25, (char *)v26, &v62);
      result = v62;
      if ( v62 )
        return result;
      v28 = v52;
    }
    *(_DWORD *)(v55 + 48) = v28;
    v29 = *(_DWORD *)(v55 + 44);
    v30 = v29 + 1;
    v18 = *(_DWORD *)(v55 + 52) + 48 * v29;
    *(_DWORD *)(v55 + 44) = v30;
    if ( result )
      return result;
    goto LABEL_33;
  }
  return 64;
}
