signed int __usercall sub_6F78F1D0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, unsigned int a5)
{
  int v5; // edi@1
  signed int v6; // esi@1
  int v8; // eax@4
  unsigned int v9; // ebp@4
  _BYTE *v10; // edi@6
  char v11; // cl@7
  _BYTE *v12; // edx@10
  unsigned int v13; // eax@13
  int v14; // edx@13
  unsigned int v15; // eax@14
  char *v16; // eax@15
  int v17; // edx@15
  int v18; // ecx@15
  unsigned int v19; // ebx@17
  int v20; // edx@17
  int v21; // ecx@17
  signed int v22; // esi@27
  unsigned int v23; // eax@30
  unsigned int v24; // ebx@31
  char v25; // dl@32
  char v26; // cl@33
  int v27; // edx@35
  unsigned int v28; // edx@42
  char *v29; // eax@44
  int v30; // edx@44
  bool v31; // zf@44
  char *v32; // edx@45
  int v33; // edx@46
  _BYTE *v34; // eax@47
  int v35; // esi@49
  int v36; // ebx@50
  unsigned int v37; // esi@56
  char v38; // cl@56
  int v39; // edi@58
  int v40; // ebx@61
  int v41; // edi@65
  int v42; // esi@66
  int v43; // ebx@69
  int v44; // eax@77
  _BYTE *v45; // ebx@86
  unsigned int v46; // ecx@87
  int v47; // eax@89
  signed int v48; // edi@92
  unsigned int v49; // edx@93
  int *v50; // eax@93
  unsigned int v51; // esi@98
  int v52; // edi@107
  int v53; // ebp@107
  unsigned int v54; // esi@108
  int v55; // esi@110
  signed int v56; // eax@115
  int v57; // eax@118
  int v58; // edi@119
  int v59; // edx@119
  int v60; // ecx@119
  int v61; // ebx@122
  int v62; // esi@122
  int v63; // ebx@122
  int v64; // ecx@123
  int v65; // eax@127
  __int16 v66; // bp@128
  int v67; // esi@128
  int v68; // edx@131
  int v69; // ecx@131
  int v70; // edx@131
  int v71; // ecx@132
  int v72; // eax@136
  int v73; // esi@137
  int v74; // eax@138
  int v75; // edx@138
  int v76; // ebp@138
  int v77; // esi@141
  unsigned int v78; // ebx@142
  int v79; // esi@145
  unsigned int v80; // ebx@146
  int v81; // esi@149
  int v82; // ecx@151
  signed int v83; // ebx@152
  int v84; // esi@163
  int v85; // edx@164
  int v86; // ebp@164
  int v87; // eax@164
  int v88; // edx@164
  int v89; // ebp@164
  int v90; // ebp@164
  int v91; // ebx@184
  signed int v92; // eax@184
  int v93; // edi@185
  int v94; // eax@185
  int v95; // ecx@185
  int *v96; // ebx@186
  int v97; // esi@187
  int v98; // ST04_4@189
  int v99; // eax@189
  int v100; // eax@193
  int v101; // ebx@194
  int v102; // edx@194
  int v103; // ecx@194
  int v104; // [sp+2Ch] [bp-70h]@1
  int v105; // [sp+30h] [bp-6Ch]@1
  int v106; // [sp+34h] [bp-68h]@14
  unsigned int v107; // [sp+34h] [bp-68h]@43
  int v108; // [sp+34h] [bp-68h]@48
  unsigned int v109; // [sp+34h] [bp-68h]@93
  __int16 v110; // [sp+34h] [bp-68h]@119
  int v111; // [sp+34h] [bp-68h]@128
  int v112; // [sp+34h] [bp-68h]@182
  char v113; // [sp+38h] [bp-64h]@7
  int v114; // [sp+38h] [bp-64h]@33
  unsigned int v115; // [sp+38h] [bp-64h]@85
  int v116; // [sp+38h] [bp-64h]@182
  unsigned int v117; // [sp+3Ch] [bp-60h]@11
  int v118; // [sp+3Ch] [bp-60h]@31
  int v119; // [sp+3Ch] [bp-60h]@183
  unsigned int v120; // [sp+40h] [bp-5Ch]@13
  char v121; // [sp+40h] [bp-5Ch]@44
  int v122; // [sp+40h] [bp-5Ch]@182
  int v123; // [sp+44h] [bp-58h]@31
  unsigned int v124; // [sp+44h] [bp-58h]@87
  int v125; // [sp+48h] [bp-54h]@128
  signed int v126; // [sp+48h] [bp-54h]@183
  int v127; // [sp+4Ch] [bp-50h]@48
  int v128; // [sp+5Ch] [bp-40h]@6
  int v129; // [sp+60h] [bp-3Ch]@31
  int v130; // [sp+64h] [bp-38h]@85
  int v131; // [sp+68h] [bp-34h]@164
  int v132; // [sp+6Ch] [bp-30h]@164
  int v133; // [sp+70h] [bp-2Ch]@164
  int v134; // [sp+74h] [bp-28h]@164
  int v135; // [sp+78h] [bp-24h]@85
  int v136; // [sp+7Ch] [bp-20h]@85

  v5 = a3;
  v105 = a1;
  v104 = a2;
  v6 = sub_6F771FF0(a2, a3 + a4);
  if ( v6 )
    return v6;
  v6 = sub_6F772380(v104, a5);
  if ( v6 )
    return v6;
  v8 = *(_DWORD *)(v104 + 32);
  v9 = v8 + a5;
  if ( a5 && *(_BYTE *)v8 < 0 )
  {
    v24 = v8 + 1;
    v129 = 0;
    v123 = *(_DWORD *)(v105 + 28);
    v118 = *(_DWORD *)(v105 + 16);
    if ( v9 < v8 + 1 )
      goto LABEL_27;
    v25 = *(_BYTE *)v8;
    if ( *(_BYTE *)v8 >= 0 )
      goto LABEL_27;
    v26 = v25 & 0x3F;
    v114 = v25 & 0x3F;
    if ( v25 & 8 )
    {
      v24 = v8 + 2;
      if ( v9 < v8 + 2 )
        goto LABEL_27;
      v27 = *(_BYTE *)(v8 + 1);
      if ( *(_BYTE *)(v8 + 1) )
      {
        if ( v9 < v8 + 4 )
          goto LABEL_27;
        v24 = *(_BYTE *)(v8 + 2) + v8 + 4;
        if ( v9 < v24 )
          goto LABEL_27;
        while ( --v27 )
        {
          if ( v9 >= v24 + 2 )
          {
            v24 += 2 + *(_BYTE *)v24;
            if ( v9 >= v24 )
              continue;
          }
          goto LABEL_27;
        }
      }
    }
    v28 = *(_DWORD *)(v105 + 20);
    if ( v114 + v118 <= v28 )
    {
      v32 = *(char **)(v105 + 24);
    }
    else
    {
      v107 = (v114 + v118 + 3) & 0xFFFFFFFC;
      if ( v107 > 0x40 )
        goto LABEL_27;
      v121 = v26;
      v29 = sub_6F773B30(*(_DWORD *)v123, 24, v28, v107, *(char **)(v105 + 24), &v129);
      v30 = v129;
      v31 = v129 == 0;
      *(_DWORD *)(v105 + 24) = v29;
      if ( !v31 )
      {
        v22 = v30;
        goto LABEL_28;
      }
      *(_DWORD *)(v105 + 20) = v107;
      v26 = v121;
      v32 = v29;
    }
    v33 = (int)&v32[24 * v118];
    if ( v26 )
    {
      v34 = (_BYTE *)(v24 + 1);
      if ( v9 < v24 + 1 )
        goto LABEL_27;
      v108 = 0;
      v127 = v5;
      while ( 1 )
      {
        v37 = *(_BYTE *)v24;
        *(_DWORD *)v33 = 0x10000;
        v38 = v37;
        if ( v37 & 0x10 )
        {
          v34 = (_BYTE *)(v24 + 3);
          if ( v9 < v24 + 3 )
            goto LABEL_27;
          v39 = *(_BYTE *)(v24 + 2) | (*(_BYTE *)(v24 + 1) << 8);
          *(_DWORD *)v33 = 16 * (signed __int16)_byteswap_ushort(*(_WORD *)(v24 + 1));
        }
        *(_DWORD *)(v33 + 4) = 0x10000;
        if ( v37 & 0x20 )
        {
          if ( v9 < (unsigned int)(v34 + 2) )
            goto LABEL_27;
          v40 = v34[1] | (*v34 << 8);
          *(_DWORD *)(v33 + 4) = 16 * (signed __int16)_byteswap_ushort(*(_WORD *)v34);
          v34 += 2;
        }
        if ( (v37 & 3) == 1 )
        {
          if ( v9 < (unsigned int)(v34 + 2) )
            goto LABEL_27;
          v41 = v34[1] | (*v34 << 8);
          v34 += 2;
          v41 = (signed __int16)v41;
        }
        else if ( (v37 & 3) == 2 )
        {
          if ( v9 < (unsigned int)(v34 + 1) )
            goto LABEL_27;
          v41 = *v34++;
        }
        else
        {
          v41 = 0;
        }
        v42 = (v37 >> 2) & 3;
        if ( v42 == 1 )
        {
          if ( v9 < (unsigned int)(v34 + 2) )
            goto LABEL_27;
          v43 = v34[1] | (*v34 << 8);
          v34 += 2;
          v43 = (signed __int16)v43;
        }
        else if ( v42 == 2 )
        {
          if ( v9 < (unsigned int)(v34 + 1) )
            goto LABEL_27;
          v43 = *v34++;
        }
        else
        {
          v43 = 0;
        }
        *(_DWORD *)(v33 + 8) = v41;
        *(_DWORD *)(v33 + 12) = v43;
        if ( v38 & 0x40 )
        {
          v35 = (int)(v34 + 2);
          if ( v9 < (unsigned int)(v34 + 2) )
            goto LABEL_27;
          v36 = v34[1] | (*v34 << 8);
          *(_DWORD *)(v33 + 20) = _byteswap_ushort(*(_WORD *)v34);
        }
        else
        {
          v35 = (int)(v34 + 1);
          if ( v9 < (unsigned int)(v34 + 1) )
            goto LABEL_27;
          *(_DWORD *)(v33 + 20) = *v34;
        }
        if ( v38 >= 0 )
        {
          v24 = v35 + 2;
          if ( v9 < v35 + 2 )
            goto LABEL_27;
          v82 = *(_BYTE *)(v35 + 1);
          *(_DWORD *)(v33 + 16) = _byteswap_ushort(*(_WORD *)v35);
        }
        else
        {
          v24 = v35 + 3;
          if ( v9 < v35 + 3 )
            goto LABEL_27;
          *(_DWORD *)(v33 + 16) = *(_BYTE *)(v35 + 2) | (*(_BYTE *)v35 << 16) | (*(_BYTE *)(v35 + 1) << 8);
        }
        ++v108;
        v33 += 24;
        ++*(_DWORD *)(v105 + 16);
        if ( v114 == v108 )
          break;
        v34 = (_BYTE *)(v24 + 1);
        if ( v9 < v24 + 1 )
          goto LABEL_27;
      }
      v6 = 0;
      v5 = v127;
    }
    sub_6F772460(v104);
    v112 = 0;
    v116 = 24 * v118;
    v122 = *(_DWORD *)(v105 + 16) - v118;
    if ( *(_DWORD *)(v105 + 16) != v118 )
    {
      v126 = v6;
      v119 = v5;
      while ( 1 )
      {
        v91 = *(_WORD *)(v123 + 22);
        v92 = sub_6F78F1D0(
                v105,
                v104,
                v119,
                *(_DWORD *)(v116 + *(_DWORD *)(v105 + 24) + 16),
                *(_DWORD *)(v116 + *(_DWORD *)(v105 + 24) + 20));
        if ( v92 )
          break;
        v93 = *(_DWORD *)(v105 + 24) + v116;
        v94 = *(_DWORD *)v93;
        v95 = *(_WORD *)(v123 + 22) - v91;
        if ( *(_DWORD *)v93 != 0x10000 || *(_DWORD *)(v93 + 4) != 0x10000 )
        {
          v96 = (int *)(*(_DWORD *)(v123 + 24) + 8 * v91);
          if ( v95 > 0 )
          {
            v97 = (int)&v96[2 * v95];
            while ( 1 )
            {
              v98 = v94;
              v99 = *v96;
              v96 += 2;
              *(v96 - 2) = *(_DWORD *)(v93 + 8) + sub_6F7C9730(v99, v98);
              *(v96 - 1) = *(_DWORD *)(v93 + 12) + sub_6F7C9730(*(v96 - 1), *(_DWORD *)(v93 + 4));
              if ( v96 == (int *)v97 )
                break;
              v94 = *(_DWORD *)v93;
            }
          }
        }
        else
        {
          v100 = *(_DWORD *)(v123 + 24) + 8 * v91;
          if ( v95 > 0 )
          {
            v101 = *(_DWORD *)(v93 + 8);
            v102 = *(_DWORD *)(v93 + 12);
            v103 = v100 + 8 * v95;
            do
            {
              *(_DWORD *)v100 += v101;
              *(_DWORD *)(v100 + 4) += v102;
              v100 += 8;
            }
            while ( v100 != v103 );
          }
        }
        ++v112;
        v116 += 24;
        if ( v122 == v112 )
          return v126;
      }
      v6 = v92;
    }
    return v6;
  }
  v10 = (_BYTE *)(v8 + 1);
  v128 = 0;
  if ( v9 < v8 + 1 )
    goto LABEL_27;
  v11 = *(_BYTE *)v8;
  v113 = *(_BYTE *)v8;
  if ( *(_BYTE *)v8 < 0 )
    goto LABEL_27;
  if ( v11 & 4 )
  {
    v10 = (_BYTE *)(v8 + 2);
    if ( v9 < v8 + 2 )
      goto LABEL_27;
    v23 = *(_BYTE *)(v8 + 1);
    v120 = v23 >> 4;
    v117 = v23 & 0xF;
    v14 = v23 & 0xF;
    goto LABEL_14;
  }
  if ( v11 & 2 )
  {
    v12 = (_BYTE *)(v8 + 2);
    if ( v9 < v8 + 2 )
      goto LABEL_27;
    v117 = *(_BYTE *)(v8 + 1);
    if ( v11 & 1 )
      goto LABEL_12;
    v10 = (_BYTE *)(v8 + 2);
    v120 = 0;
    v14 = *(_BYTE *)(v8 + 1);
LABEL_14:
    v106 = v14 + v120;
    v15 = *(_DWORD *)(v105 + 4);
    if ( v14 + v120 > v15 )
    {
      v83 = (v14 + v120 + 7) & 0xFFFFFFF8;
      v16 = sub_6F773B30(**(_DWORD **)(v105 + 28), 4, v15, v83, *(char **)(v105 + 8), &v128);
      *(_DWORD *)(v105 + 8) = v16;
      v22 = v128;
      if ( v128 )
        goto LABEL_28;
      *(_DWORD *)(v105 + 4) = v83;
      v17 = 4 * v117;
      v18 = v105;
    }
    else
    {
      v16 = *(char **)(v105 + 8);
      v17 = 4 * v14;
      v18 = v105;
    }
    *(_DWORD *)(v18 + 12) = &v16[v17];
    if ( v106 )
    {
      v19 = 0;
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        if ( !(v21 & 7) )
        {
          if ( v9 < (unsigned int)(v10 + 1) )
            goto LABEL_27;
          v19 = *v10++;
        }
        if ( v19 & 1 )
        {
          if ( v9 < (unsigned int)(v10 + 2) )
            goto LABEL_27;
          v20 = v10[1] | (*v10 << 8);
          v10 += 2;
          v20 = (signed __int16)v20;
        }
        else
        {
          if ( v9 < (unsigned int)(v10 + 1) )
            goto LABEL_27;
          v20 += *v10++;
        }
        *(_DWORD *)&v16[4 * v21] = v20;
        v19 >>= 1;
        if ( v106 == ++v21 )
          goto LABEL_75;
      }
    }
    goto LABEL_75;
  }
  if ( v113 & 1 )
  {
    v12 = (_BYTE *)(v8 + 1);
    v117 = 0;
LABEL_12:
    v10 = v12 + 1;
    if ( v9 < (unsigned int)(v12 + 1) )
      goto LABEL_27;
    v13 = *v12;
    v14 = v117;
    v120 = v13;
    goto LABEL_14;
  }
  v120 = 0;
  v117 = 0;
  *(_DWORD *)(v105 + 12) = *(_DWORD *)(v105 + 8);
LABEL_75:
  if ( v113 & 8 )
  {
    v22 = 8;
    if ( v9 < (unsigned int)(v10 + 1) )
      goto LABEL_28;
    v44 = *v10;
    if ( *v10 )
    {
      if ( v9 < (unsigned int)(v10 + 3) )
        goto LABEL_28;
      v10 += v10[1] + 3;
      if ( v9 < (unsigned int)v10 )
        goto LABEL_28;
      while ( --v44 )
      {
        if ( v9 >= (unsigned int)(v10 + 2) )
        {
          v10 += *v10 + 2;
          if ( v9 >= (unsigned int)v10 )
            continue;
        }
        goto LABEL_27;
      }
    }
    else
    {
      ++v10;
    }
    v128 = 0;
  }
  v130 = 0;
  v129 = 0;
  v115 = v9;
  *(_BYTE *)(v105 + 32) = 0;
  v136 = 0;
  v135 = v129;
  while ( 1 )
  {
    v45 = v10 + 1;
    if ( v115 < (unsigned int)(v10 + 1) )
      break;
    v46 = *v10 & 0xF;
    v124 = (unsigned int)*v10 >> 4;
    switch ( v124 )
    {
      case 3u:
        if ( v46 >= v120 )
          goto LABEL_27;
        v129 = v135;
        v47 = *(_DWORD *)(*(_DWORD *)(v105 + 12) + 4 * v46);
        goto LABEL_90;
      case 0u:
        goto LABEL_91;
      case 1u:
      case 4u:
      case 5u:
        v48 = 1;
        break;
      case 6u:
        v48 = 3;
        v46 = 2958;
        break;
      case 2u:
        if ( v46 >= v117 )
          goto LABEL_27;
        v129 = *(_DWORD *)(*(_DWORD *)(v105 + 8) + 4 * v46);
        v47 = v136;
LABEL_90:
        v130 = v47;
        v135 = v129;
        v136 = v47;
        goto LABEL_91;
      case 7u:
        v48 = 3;
        v46 = 3627;
        break;
      default:
        v48 = 4;
        break;
    }
    v49 = 0;
    v50 = &v129;
    v109 = v48;
    do
    {
      v54 = v46 & 3;
      if ( v54 == 1 )
      {
        if ( v115 < (unsigned int)(v45 + 2) )
          goto LABEL_27;
        v55 = v45[1] | (*v45 << 8);
        *v50 = (signed __int16)_byteswap_ushort(*(_WORD *)v45);
        v45 += 2;
      }
      else if ( v54 < 1 )
      {
        v77 = (int)(v45 + 1);
        if ( v115 < (unsigned int)(v45 + 1) )
          goto LABEL_27;
        v78 = *v45;
        if ( v78 >= v117 )
          goto LABEL_27;
        *v50 = *(_DWORD *)(*(_DWORD *)(v105 + 8) + 4 * v78);
        v45 = (_BYTE *)v77;
      }
      else if ( v54 == 2 )
      {
        if ( v115 < (unsigned int)(v45 + 1) )
          goto LABEL_27;
        *v50 = v135 + *v45++;
      }
      else
      {
        *v50 = v135;
      }
      v51 = (v46 >> 2) & 3;
      if ( v51 == 1 )
      {
        if ( v115 < (unsigned int)(v45 + 2) )
          goto LABEL_27;
        v81 = v45[1] | (*v45 << 8);
        v50[1] = (signed __int16)_byteswap_ushort(*(_WORD *)v45);
        v45 += 2;
      }
      else if ( v51 < 1 )
      {
        v79 = (int)(v45 + 1);
        if ( v115 < (unsigned int)(v45 + 1) )
          goto LABEL_27;
        v80 = *v45;
        if ( v80 >= v120 )
          goto LABEL_27;
        v50[1] = *(_DWORD *)(*(_DWORD *)(v105 + 12) + 4 * v80);
        v45 = (_BYTE *)v79;
      }
      else if ( v51 == 2 )
      {
        if ( v115 < (unsigned int)(v45 + 1) )
          goto LABEL_27;
        v50[1] = v136 + *v45++;
      }
      else
      {
        v50[1] = v136;
      }
      if ( v49 || v109 != 4 )
      {
        v46 >>= 4;
      }
      else
      {
        if ( v115 < (unsigned int)(v45 + 1) )
          goto LABEL_27;
        v46 = *v45;
        v109 = 3;
        ++v45;
      }
      v52 = *v50;
      v53 = v50[1];
      ++v49;
      v50 += 2;
      v135 = v52;
      v136 = v53;
    }
    while ( v49 < v109 );
LABEL_91:
    switch ( v124 )
    {
      case 1u:
      case 2u:
      case 3u:
        v56 = 8;
        if ( !*(_BYTE *)(v105 + 32) )
          break;
        v72 = v105;
        goto LABEL_137;
      case 0u:
        v57 = *(_DWORD *)(v105 + 28);
        if ( !*(_BYTE *)(v105 + 32) )
          goto LABEL_125;
        v58 = *(_WORD *)(v57 + 56);
        v110 = *(_WORD *)(v57 + 58);
        v59 = v110 - 1;
        v60 = 0;
        if ( (signed __int16)v58 > 0 )
          v60 = *(_WORD *)(*(_DWORD *)(v57 + 68) + 2 * (signed __int16)v58 - 2);
        if ( v59 <= v60 )
          goto LABEL_175;
        v61 = *(_DWORD *)(v57 + 60);
        v62 = v61 + 8 * v60;
        v63 = v61 + 8 * v59;
        if ( *(_DWORD *)v62 != *(_DWORD *)v63 || *(_DWORD *)(v62 + 4) != *(_DWORD *)(v63 + 4) )
          goto LABEL_203;
        *(_WORD *)(v57 + 58) = v110 - 1;
        v59 = v110 - 2;
LABEL_175:
        if ( v60 <= v59 )
        {
LABEL_203:
          v64 = *(_DWORD *)(v57 + 68);
          *(_WORD *)(v57 + 56) = v58 + 1;
          *(_WORD *)(v64 + 2 * v58) = v59;
        }
        *(_BYTE *)(v105 + 32) = 0;
LABEL_125:
        sub_6F7CA8C0(v57);
        goto LABEL_126;
      case 4u:
      case 5u:
        v65 = *(_DWORD *)(v105 + 28);
        if ( !*(_BYTE *)(v105 + 32) )
          goto LABEL_133;
        v66 = *(_WORD *)(v65 + 56);
        v111 = 0;
        v125 = *(_WORD *)(v65 + 58);
        v67 = v125 - 1;
        if ( v66 > 0 )
          v111 = *(_WORD *)(*(_DWORD *)(v65 + 68) + 2 * v66 - 2);
        if ( v67 <= v111 )
          goto LABEL_171;
        v68 = *(_DWORD *)(v65 + 60);
        v69 = v68 + 8 * v111;
        v70 = v68 + 8 * v67;
        if ( *(_DWORD *)v69 != *(_DWORD *)v70 || *(_DWORD *)(v69 + 4) != *(_DWORD *)(v70 + 4) )
          goto LABEL_204;
        v67 = v125 - 2;
        --*(_WORD *)(v65 + 58);
LABEL_171:
        if ( v111 <= v67 )
        {
LABEL_204:
          v71 = *(_DWORD *)(v65 + 68);
          *(_WORD *)(v65 + 56) = v66 + 1;
          *(_WORD *)(v71 + 2 * v66) = v67;
        }
LABEL_133:
        *(_BYTE *)(v105 + 32) = 1;
        if ( (unsigned int)(*(_WORD *)(v65 + 22) + *(_WORD *)(v65 + 58) + 1) <= *(_DWORD *)(v65 + 4)
          && (unsigned int)(*(_WORD *)(v65 + 20) + *(_WORD *)(v65 + 56) + 1) <= *(_DWORD *)(v65 + 8)
          || (v56 = sub_6F7CA4F0(v65, 1, 1)) == 0 )
        {
          v56 = 8;
          if ( *(_BYTE *)(v105 + 32) )
          {
            v72 = v105;
LABEL_137:
            v73 = *(_DWORD *)(v72 + 28);
            if ( (unsigned int)(*(_WORD *)(v73 + 22) + *(_WORD *)(v73 + 58) + 1) <= *(_DWORD *)(v73 + 4)
              || (v56 = sub_6F7CA4F0(v73, 1, 0)) == 0 )
            {
              v74 = *(_WORD *)(v73 + 58);
              v75 = *(_DWORD *)(v73 + 60);
              v76 = v130;
              *(_DWORD *)(v75 + 8 * v74) = v129;
              *(_DWORD *)(v75 + 8 * v74 + 4) = v76;
              *(_BYTE *)(*(_DWORD *)(v73 + 64) + v74) = 1;
              v56 = 0;
              ++*(_WORD *)(v73 + 58);
            }
          }
        }
        break;
      default:
        v56 = 8;
        if ( *(_BYTE *)(v105 + 32) )
        {
          v84 = *(_DWORD *)(v105 + 28);
          if ( (unsigned int)(*(_WORD *)(v84 + 22) + *(_WORD *)(v84 + 58) + 3) <= *(_DWORD *)(v84 + 4)
            || (v56 = sub_6F7CA4F0(v84, 3, 0)) == 0 )
          {
            v85 = *(_WORD *)(v84 + 58);
            v86 = v130;
            v87 = *(_DWORD *)(v84 + 60) + 8 * v85;
            v88 = *(_DWORD *)(v84 + 64) + v85;
            *(_DWORD *)v87 = v129;
            *(_DWORD *)(v87 + 4) = v86;
            v89 = v132;
            *(_DWORD *)(v87 + 8) = v131;
            *(_DWORD *)(v87 + 12) = v89;
            v90 = v134;
            *(_DWORD *)(v87 + 16) = v133;
            *(_DWORD *)(v87 + 20) = v90;
            v56 = 0;
            *(_BYTE *)v88 = 2;
            *(_BYTE *)(v88 + 1) = 2;
            *(_BYTE *)(v88 + 2) = 1;
            *(_WORD *)(v84 + 58) += 3;
          }
        }
        break;
    }
    v128 = v56;
    if ( v56 )
    {
LABEL_126:
      v22 = v128;
      goto LABEL_28;
    }
    v10 = v45;
  }
LABEL_27:
  v22 = 8;
LABEL_28:
  sub_6F772460(v104);
  return v22;
}
