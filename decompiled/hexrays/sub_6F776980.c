signed int __cdecl sub_6F776980(int a1, int a2, int a3, int a4, int a5)
{
  signed int v5; // ecx@1
  const char *v6; // edi@1
  bool v7; // zf@1
  int v8; // ebp@1
  _BYTE *v9; // esi@1
  int v10; // ebx@1
  char v11; // al@5
  int v12; // edx@7
  bool v13; // zf@7
  _BYTE *v14; // esi@8
  const char *v15; // edi@8
  signed int v16; // ecx@8
  char v17; // di@12
  size_t v18; // edi@16
  const void *v19; // esi@16
  unsigned int v20; // eax@17
  char *v21; // eax@17
  char *v22; // edx@17
  signed int result; // eax@17
  char *v24; // ST28_4@18
  _BYTE *v25; // esi@22
  const char *v26; // edi@22
  signed int v27; // ecx@22
  char v28; // di@26
  bool v29; // cf@28
  bool v30; // zf@28
  int v31; // eax@30
  _BYTE *v32; // esi@38
  const char *v33; // edi@38
  signed int v34; // ecx@38
  char v35; // di@42
  _BYTE *v36; // esi@45
  signed int v37; // ecx@45
  const char *v38; // edi@45
  bool v39; // si@48
  bool v40; // zf@48
  _BYTE *v41; // esi@49
  const char *v42; // edi@49
  signed int v43; // ecx@49
  bool v44; // zf@57
  unsigned int v45; // eax@58
  int v46; // ecx@63
  int v47; // eax@64
  signed int v48; // edi@65
  int v49; // esi@66
  unsigned int v50; // edx@67
  int v51; // esi@68
  int v52; // eax@71
  unsigned int v53; // edi@75
  int v54; // edx@76
  signed int v55; // eax@76
  int v56; // ecx@77
  int v57; // ebx@77
  void **v58; // edx@78
  unsigned int v59; // edi@78
  int v60; // eax@78
  unsigned int v61; // esi@78
  char *v62; // ebx@78
  char *v63; // ecx@79
  char v64; // dl@79
  int v65; // ecx@80
  size_t v66; // esi@86
  char *v67; // eax@86
  int v68; // edi@86
  _BYTE *v69; // esi@97
  const char *v70; // edi@97
  signed int v71; // ecx@97
  _BYTE *v72; // esi@101
  const char *v73; // edi@101
  signed int v74; // ecx@101
  int v75; // esi@110
  int v76; // eax@110
  int v77; // eax@113
  _BYTE *v78; // esi@117
  const char *v79; // edi@117
  signed int v80; // ecx@117
  _BYTE *v81; // esi@123
  const char *v82; // edi@123
  signed int v83; // ecx@123
  int v84; // esi@133
  _BYTE *v85; // edi@133
  int v86; // esi@134
  int v87; // ecx@134
  int v88; // edx@135
  int v89; // ecx@135
  _BYTE *v90; // ebx@135
  int v91; // edi@136
  int v92; // ebp@139
  __int16 v93; // dx@143
  int v94; // edx@150
  int v95; // edi@155
  __int16 v96; // cx@155
  _BYTE *v97; // eax@155
  __int16 v98; // dx@155
  unsigned __int8 *v99; // eax@155
  __int16 v100; // ST28_2@155
  __int16 v101; // ax@155
  __int16 v102; // si@155
  int v103; // eax@155
  __int16 v104; // dx@155
  int v105; // eax@155
  bool v106; // sf@155
  unsigned __int8 v107; // of@155
  __int16 v108; // ax@159
  __int16 v109; // ax@161
  unsigned __int16 v110; // ax@171
  int v111; // edx@181
  int v112; // esi@181
  unsigned int v113; // eax@184
  int v114; // edx@185
  int v115; // eax@187
  unsigned int v116; // eax@189
  int v117; // edx@190
  int v118; // eax@190
  unsigned int v119; // edx@191
  unsigned int v120; // ecx@191
  char *v121; // eax@198
  char *v122; // eax@202
  char *v123; // eax@204
  __int16 v124; // ax@206
  int v125; // [sp+24h] [bp-48h]@1
  int v126; // [sp+28h] [bp-44h]@14
  char *v127; // [sp+28h] [bp-44h]@65
  int v128; // [sp+28h] [bp-44h]@133
  int v129; // [sp+2Ch] [bp-40h]@1
  char v130; // [sp+2Ch] [bp-40h]@105
  char v131; // [sp+2Ch] [bp-40h]@115
  char v132; // [sp+2Ch] [bp-40h]@121
  char v133; // [sp+2Ch] [bp-40h]@127
  __int16 v134; // [sp+2Ch] [bp-40h]@155
  char v135; // [sp+30h] [bp-3Ch]@53
  int v136; // [sp+30h] [bp-3Ch]@56
  char v137; // [sp+30h] [bp-3Ch]@72
  _BYTE *v138; // [sp+34h] [bp-38h]@133
  int v139; // [sp+38h] [bp-34h]@135
  int v140; // [sp+3Ch] [bp-30h]@133
  int v141; // [sp+48h] [bp-24h]@1
  int v142; // [sp+4Ch] [bp-20h]@17

  v5 = 7;
  v6 = "COMMENT";
  v7 = 0;
  v8 = a5;
  v9 = (_BYTE *)a1;
  v141 = 0;
  v10 = *(_DWORD *)(a5 + 32);
  v129 = *(_DWORD *)(a5 + 32);
  v125 = *(_DWORD *)(v10 + 278664);
  do
  {
    if ( !v5 )
      break;
    v7 = *v9++ == *v6++;
    --v5;
  }
  while ( v7 );
  if ( v7 )
  {
    v11 = *(_BYTE *)(a1 + 7);
    if ( v11 == 13 || (v11 & 0xDF) == 0 || (unsigned __int8)(v11 - 9) <= 1u )
    {
      if ( v11 )
      {
        v19 = (const void *)(a1 + 8);
        v18 = a2 - 8;
      }
      else
      {
        v18 = a2 - 7;
        v19 = (const void *)(a1 + 7);
      }
      v20 = *(_DWORD *)(v10 + 88);
      v142 = 0;
      v21 = sub_6F773B30(v125, 1, v20, v18 + v20 + 1, *(char **)(v10 + 84), &v142);
      v22 = v21;
      *(_DWORD *)(v10 + 84) = v21;
      result = v142;
      if ( !v142 )
      {
        v24 = &v22[*(_DWORD *)(v10 + 88)];
        memcpy(v24, v19, v18);
        v24[v18] = 10;
        *(_DWORD *)(v10 + 88) += v18 + 1;
        result = v142;
      }
      v141 = result;
      goto LABEL_20;
    }
  }
  v12 = *(_DWORD *)a5;
  v13 = (*(_DWORD *)a5 & 0x20) == 0;
  if ( !(*(_DWORD *)a5 & 0x20) )
  {
    v14 = (_BYTE *)a1;
    v15 = "CHARS";
    v16 = 5;
    do
    {
      if ( !v16 )
        break;
      v13 = *v14++ == *v15++;
      --v16;
    }
    while ( v13 );
    if ( !v13
      || (v17 = *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 5) != 13 && (v17 & 0xDF) != 0) && (unsigned __int8)(v17 - 9) > 1u )
    {
      v141 = 180;
      v126 = v12 & 0x40;
      goto LABEL_35;
    }
    v141 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
    if ( v141 )
      goto LABEL_34;
    v46 = *(_DWORD *)(*(_DWORD *)(a5 + 139304) + 4);
    if ( !v46 )
      goto LABEL_216;
    v47 = *(_BYTE *)v46;
    if ( !(_BYTE)v47 )
      goto LABEL_216;
    v127 = (char *)&unk_6FB55B80;
    v48 = 10;
    if ( (_BYTE)v47 == 48 && (*(_BYTE *)(v46 + 1) & 0xDF) == 88 )
    {
      v47 = *(_BYTE *)(v46 + 2);
      v127 = byte_6FB55B60;
      v46 += 2;
      v48 = 16;
    }
    v49 = (unsigned __int8)v127[(unsigned __int8)v47 >> 3];
    if ( _bittest(&v49, v47 & 7) )
    {
      v50 = 0;
      do
      {
        ++v46;
        v50 = (unsigned __int8)byte_6FB55BA0[v47] + v48 * v50;
        v47 = *(_BYTE *)v46;
        v51 = (unsigned __int8)v127[(unsigned __int8)(*(_BYTE *)v46 >> 3)];
      }
      while ( _bittest(&v51, *(_BYTE *)v46 & 7) );
      v8 = a5;
      *(_DWORD *)(v10 + 48) = v50;
      *(_DWORD *)(a5 + 4) = v50;
      if ( v50 )
      {
        if ( v50 > 0x10FFFF )
        {
          v52 = *(_DWORD *)a5;
          v141 = 6;
          v126 = v52 & 0x40;
          goto LABEL_35;
        }
LABEL_95:
        *(_DWORD *)(v10 + 56) = sub_6F773B30(v125, 36, 0, v50, 0, &v141);
        if ( !v141 )
        {
          *(_DWORD *)v8 |= 0x20u;
          return 0;
        }
LABEL_34:
        v126 = *(_DWORD *)v8 & 0x40;
        goto LABEL_35;
      }
    }
    else
    {
LABEL_216:
      *(_DWORD *)(a5 + 4) = 0;
    }
    *(_DWORD *)(v10 + 48) = 64;
    v50 = 64;
    goto LABEL_95;
  }
  v25 = (_BYTE *)a1;
  v26 = "ENDFONT";
  v27 = 7;
  do
  {
    if ( !v27 )
      break;
    v13 = *v25++ == *v26++;
    --v27;
  }
  while ( v13 );
  if ( v13 )
  {
    v28 = *(_BYTE *)(a1 + 7);
    if ( *(_BYTE *)(a1 + 7) != 13 && (v28 & 0xDF) != 0 && (unsigned __int8)(v28 - 9) > 1u )
      goto LABEL_28;
    if ( v12 & 0xFC0 )
    {
      v141 = 186;
      v126 = v12 & 0x40;
      goto LABEL_35;
    }
    qsort(*(void **)(v10 + 56), *(_DWORD *)(v10 + 52), 0x24u, (int (__cdecl *)(const void *, const void *))sub_6F774160);
    *(_DWORD *)a5 &= 0xFFFFFFFE;
    result = v141;
LABEL_20:
    if ( !result )
      return result;
    goto LABEL_34;
  }
  v32 = (_BYTE *)a1;
  v33 = "ENDCHAR";
  v34 = 7;
  do
  {
    if ( !v34 )
      break;
    v13 = *v32++ == *v33++;
    --v34;
  }
  while ( v13 );
  if ( v13 )
  {
    v35 = *(_BYTE *)(a1 + 7);
    if ( *(_BYTE *)(a1 + 7) == 13 || (v35 & 0xDF) == 0 || (unsigned __int8)(v35 - 9) <= 1u )
    {
      *(_DWORD *)(a5 + 28) = 0;
      result = 0;
      *(_DWORD *)a5 = v12 & 0xFFFFF03F;
      return result;
    }
  }
LABEL_28:
  v29 = 0;
  v30 = (*(_DWORD *)a5 & 0x40) == 0;
  v126 = *(_DWORD *)a5 & 0x40;
  if ( v12 & 0x40 )
  {
    v29 = *(_DWORD *)(a5 + 28) < 0xFFFFFFFF;
    v30 = *(_DWORD *)(a5 + 28) == -1;
    if ( *(_DWORD *)(a5 + 28) == -1 )
    {
      v31 = *(_DWORD *)(*(_DWORD *)(a5 + 36) + 4);
      v29 = 0;
      v30 = v31 == 0;
      if ( !v31 )
        return 0;
    }
  }
  v36 = (_BYTE *)a1;
  v37 = 9;
  v38 = "STARTCHAR";
  do
  {
    if ( !v37 )
      break;
    v29 = *v36 < (const unsigned __int8)*v38;
    v30 = *v36++ == *v38++;
    --v37;
  }
  while ( v30 );
  v39 = !v29 && !v30;
  v40 = v39 == v29;
  if ( v39 == v29 )
  {
    v137 = *(_BYTE *)(a1 + 9);
    if ( v137 == 13 || (v137 & 0xDF) == 0 || (v40 = v137 == 10, (unsigned __int8)(v137 - 9) <= 1u) )
    {
      sub_6F773D90(v125, *(_DWORD *)(a5 + 24));
      *(_DWORD *)(a5 + 24) = 0;
      v141 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
      if ( v141 )
        goto LABEL_34;
      v53 = *(_DWORD *)(a5 + 139312);
      if ( v53 )
      {
        v54 = 0;
        v55 = 1;
        if ( v53 <= 1 )
        {
          *(_DWORD *)(a5 + 139312) = 0;
        }
        else
        {
          do
          {
            v56 = *(_DWORD *)(a5 + 139304);
            v57 = *(_DWORD *)(v56 + 4 * v55++);
            *(_DWORD *)(v56 + v54) = v57;
            v54 += 4;
          }
          while ( v53 != v55 );
          v58 = *(void ***)(a5 + 139304);
          v59 = v53 - 1;
          v60 = 0;
          *(_DWORD *)(a5 + 139312) = v59;
          v61 = 0;
          v62 = (char *)*v58;
          while ( 1 )
          {
            v63 = (char *)v58[v61];
            v64 = *v63;
            if ( *v63 )
            {
              v65 = (int)&v63[-v60];
              do
              {
                v62[++v60 - 1] = v64;
                v64 = *(_BYTE *)(v65 + v60);
              }
              while ( v64 );
              v59 = *(_DWORD *)(a5 + 139312);
            }
            if ( ++v61 >= v59 )
              break;
            v62[v60] = 32;
            v59 = *(_DWORD *)(a5 + 139312);
            ++v60;
            if ( v61 >= v59 )
              break;
            v58 = *(void ***)(a5 + 139304);
          }
          if ( (_UNKNOWN *)v62 == &unk_6FB55C20 )
          {
            v62 = (char *)&unk_6FB55C20;
            goto LABEL_86;
          }
          v62[v60] = 0;
          if ( v62 )
          {
LABEL_86:
            v66 = v60 + 1;
            v67 = sub_6F773B30(v125, 1, 0, v60 + 1, 0, &v141);
            v68 = v141;
            *(_DWORD *)(a5 + 24) = v67;
            if ( v68 )
              goto LABEL_34;
            memcpy(v67, v62, v66);
            *(_DWORD *)a5 |= 0x40u;
            result = v141;
            goto LABEL_20;
          }
        }
      }
      goto LABEL_113;
    }
  }
  v41 = (_BYTE *)a1;
  v42 = "ENCODING";
  v43 = 8;
  do
  {
    if ( !v43 )
      break;
    v40 = *v41++ == *v42++;
    --v43;
  }
  while ( v40 );
  if ( v40 )
  {
    v135 = *(_BYTE *)(a1 + 8);
    if ( v135 == 13 || (v135 & 0xDF) == 0 || (unsigned __int8)(v135 - 9) <= 1u )
    {
      if ( !(v12 & 0x40) )
        return 181;
      v141 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
      if ( v141 )
        goto LABEL_34;
      v75 = *(_DWORD *)(a5 + 139304);
      v76 = sub_6F774650(*(unsigned __int8 **)(v75 + 4));
      *(_DWORD *)(a5 + 28) = v76;
      if ( v76 < -1 )
      {
        *(_DWORD *)(a5 + 28) = -1;
      }
      else if ( v76 != -1 )
      {
        if ( v76 > 1114111 )
        {
LABEL_113:
          v77 = *(_DWORD *)a5;
          v141 = 3;
          v126 = v77 & 0x40;
          goto LABEL_35;
        }
        goto LABEL_181;
      }
      if ( *(_DWORD *)(a5 + 139312) > 2u )
      {
        v76 = sub_6F774650(*(unsigned __int8 **)(v75 + 8));
        if ( v76 < -1 )
        {
          *(_DWORD *)(a5 + 28) = -1;
          goto LABEL_183;
        }
        *(_DWORD *)(a5 + 28) = v76;
      }
      else
      {
        v76 = *(_DWORD *)(a5 + 28);
      }
      if ( v76 > 1114111 )
        goto LABEL_113;
      if ( v76 < 0 )
        goto LABEL_183;
LABEL_181:
      v111 = a5 + 4 * (v76 >> 5);
      v112 = *(_DWORD *)(v111 + 40);
      if ( !((1 << v76) & v112) )
      {
        *(_DWORD *)(v111 + 40) = v112 | (1 << v76);
        v116 = *(_DWORD *)(v10 + 52);
        if ( v116 == *(_DWORD *)(v10 + 48) )
        {
          v121 = sub_6F773B30(v125, 36, v116, v116 + 64, *(char **)(v10 + 56), &v141);
          v7 = v141 == 0;
          *(_DWORD *)(v10 + 56) = v121;
          if ( !v7 )
            goto LABEL_34;
          *(_DWORD *)(v10 + 48) += 64;
          v116 = *(_DWORD *)(v10 + 52);
        }
        v117 = *(_DWORD *)(v10 + 56);
        *(_DWORD *)(v10 + 52) = v116 + 1;
        v118 = v117 + 36 * v116;
        *(_DWORD *)v118 = *(_DWORD *)(a5 + 24);
        *(_DWORD *)(v118 + 4) = *(_DWORD *)(a5 + 28);
        *(_DWORD *)(a5 + 24) = 0;
        goto LABEL_187;
      }
      *(_DWORD *)(a5 + 28) = -1;
      *(_WORD *)(v10 + 278660) = 1;
LABEL_183:
      if ( *(_DWORD *)(*(_DWORD *)(a5 + 36) + 4) )
      {
        v113 = *(_DWORD *)(v10 + 64);
        if ( v113 == *(_DWORD *)(v10 + 60) )
        {
          v123 = sub_6F773B30(v125, 36, v113, v113 + 4, *(char **)(v10 + 68), &v141);
          v7 = v141 == 0;
          *(_DWORD *)(v10 + 68) = v123;
          if ( !v7 )
            goto LABEL_34;
          *(_DWORD *)(v10 + 60) += 4;
          v113 = *(_DWORD *)(v10 + 64);
        }
        v114 = *(_DWORD *)(v10 + 68) + 36 * v113;
        *(_DWORD *)v114 = *(_DWORD *)(a5 + 24);
        *(_DWORD *)(v10 + 64) = v113 + 1;
        *(_DWORD *)(v114 + 4) = v113;
      }
      else
      {
        sub_6F773D90(v125, *(_DWORD *)(a5 + 24));
      }
      *(_DWORD *)(a5 + 24) = 0;
LABEL_187:
      v115 = *(_DWORD *)a5 & 0x3FFFFFFF;
      LOBYTE(v115) = *(_BYTE *)a5 | 0x80;
      *(_DWORD *)a5 = v115;
      result = v141;
      goto LABEL_20;
    }
  }
  if ( *(_DWORD *)(a5 + 28) == -1 )
    v136 = *(_DWORD *)(v10 + 68) + 36 * *(_DWORD *)(v10 + 64) - 36;
  else
    v136 = *(_DWORD *)(v10 + 56) + 36 * *(_DWORD *)(v10 + 52) - 36;
  v44 = (BYTE1(v12) & 8) == 0;
  if ( BYTE1(v12) & 8 )
  {
    v45 = *(_DWORD *)(a5 + 8);
    if ( v45 >= *(_WORD *)(v136 + 14) )
    {
      if ( v12 >= 0 )
      {
        result = 0;
        *(_DWORD *)a5 = v12 | 0x80000000;
        *(_WORD *)(v10 + 278660) = 1;
        return result;
      }
      return 0;
    }
    v84 = *(_DWORD *)(v136 + 28);
    v140 = *(_DWORD *)(v136 + 28);
    v128 = 2 * v84;
    v85 = (_BYTE *)(*(_DWORD *)(v136 + 24) + v84 * v45);
    v138 = (_BYTE *)(*(_DWORD *)(v136 + 24) + v84 * v45);
    if ( 2 * v84 )
    {
      v86 = *(_BYTE *)a1;
      v87 = (unsigned __int8)byte_6FB55B60[(signed int)*(_BYTE *)a1 >> 3];
      if ( _bittest(&v87, *(_BYTE *)a1 & 7) )
      {
        v88 = *v85;
        v139 = *(_DWORD *)(a5 + 32);
        v89 = 0;
        v90 = v85;
        while ( 1 )
        {
          v88 *= 16;
          v91 = v89 + 1;
          LOBYTE(v88) = byte_6FB55BA0[v86] + v88;
          *v90 = v88;
          if ( v128 == v89 + 1 )
            break;
          if ( v89 & 1 )
          {
            v90[1] = 0;
            v88 = 0;
            ++v90;
          }
          ++v89;
          v86 = *(_BYTE *)(a1 + v91);
          v92 = (unsigned __int8)byte_6FB55B60[(signed int)*(_BYTE *)(a1 + v91) >> 3];
          if ( !_bittest(&v92, *(_BYTE *)(a1 + v91) & 7) )
          {
            v8 = a5;
            v138 = v90;
            v10 = v139;
            v12 = *(_DWORD *)a5;
            goto LABEL_141;
          }
        }
        v138 = v90;
        v8 = a5;
        v93 = *(_WORD *)(v136 + 12);
        if ( !v93 )
          goto LABEL_150;
        v91 = v128;
      }
      else
      {
        v91 = 0;
LABEL_141:
        if ( !(v12 & 0x40000000) )
        {
          *(_DWORD *)v8 = v12 | 0x40000000;
          *(_WORD *)(v10 + 278660) = 1;
        }
        v93 = *(_WORD *)(v136 + 12);
        if ( !v93 )
        {
LABEL_146:
          if ( v128 != v91 )
          {
LABEL_147:
            ++*(_DWORD *)(v8 + 8);
            result = v141;
            goto LABEL_20;
          }
LABEL_150:
          v94 = (unsigned __int8)byte_6FB55B60[(unsigned __int8)(*(_BYTE *)(a1 + 2 * v140) >> 3)];
          if ( _bittest(&v94, *(_BYTE *)(a1 + 2 * v140) & 7) && !(*(_DWORD *)v8 & 0x40000000) )
          {
            *(_DWORD *)v8 |= 0x40000000u;
            *(_WORD *)(v129 + 278660) = 1;
          }
          goto LABEL_147;
        }
      }
      v10 = *(_DWORD *)(v8 + 32);
    }
    else
    {
      v93 = *(_WORD *)(v136 + 12);
      if ( !v93 )
        goto LABEL_150;
      v91 = 0;
    }
    *v138 &= byte_6FB55B48[(_BYTE)v93 * (unsigned __int8)*(_WORD *)(v10 + 278662) & 7];
    goto LABEL_146;
  }
  v69 = (_BYTE *)a1;
  v70 = "SWIDTH";
  v71 = 6;
  do
  {
    if ( !v71 )
      break;
    v44 = *v69++ == *v70++;
    --v71;
  }
  while ( v44 );
  if ( v44 )
  {
    v131 = *(_BYTE *)(a1 + 6);
    if ( v131 == 13 || (v131 & 0xDF) == 0 || (v44 = v131 == 10, (unsigned __int8)(v131 - 9) <= 1u) )
    {
      if ( !(v12 & 0x80) )
        goto LABEL_108;
      v141 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
      if ( v141 )
        goto LABEL_34;
      *(_WORD *)(v136 + 8) = sub_6F774730(*(_BYTE **)(*(_DWORD *)(a5 + 139304) + 4));
      *(_DWORD *)a5 |= 0x100u;
      return 0;
    }
  }
  else
  {
    v72 = (_BYTE *)a1;
    v73 = "DWIDTH";
    v74 = 6;
    do
    {
      if ( !v74 )
        break;
      v44 = *v72++ == *v73++;
      --v74;
    }
    while ( v44 );
    if ( v44 )
    {
      v130 = *(_BYTE *)(a1 + 6);
      if ( v130 == 13 || (v130 & 0xDF) == 0 || (v44 = v130 == 10, (unsigned __int8)(v130 - 9) <= 1u) )
      {
        if ( v12 & 0x80 )
        {
          v141 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
          if ( v141 )
            goto LABEL_34;
          v110 = sub_6F774730(*(_BYTE **)(*(_DWORD *)(a5 + 139304) + 4));
          v7 = (*(_DWORD *)a5 & 0x100) == 0;
          *(_WORD *)(v136 + 10) = v110;
          if ( v7 )
            *(_WORD *)(v136 + 8) = sub_6F7C9420(v110, 72000, *(_DWORD *)(v10 + 20) * *(_DWORD *)(v10 + 16));
          *(_DWORD *)a5 |= 0x200u;
          result = v141;
          goto LABEL_20;
        }
LABEL_108:
        v141 = 182;
        goto LABEL_35;
      }
    }
  }
  v78 = (_BYTE *)a1;
  v79 = "BBX";
  v80 = 3;
  do
  {
    if ( !v80 )
      break;
    v44 = *v78++ == *v79++;
    --v80;
  }
  while ( v44 );
  if ( v44 )
  {
    v132 = *(_BYTE *)(a1 + 3);
    if ( v132 == 13 || (v132 & 0xDF) == 0 || (v44 = v132 == 10, (unsigned __int8)(v132 - 9) <= 1u) )
    {
      if ( v12 & 0x80 )
      {
        v141 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
        if ( v141 )
          goto LABEL_34;
        v95 = *(_DWORD *)(a5 + 139304);
        v96 = sub_6F7745B0(*(_BYTE **)(v95 + 4));
        v97 = *(_BYTE **)(v95 + 8);
        v134 = v96;
        *(_WORD *)(v136 + 12) = v96;
        v98 = sub_6F7745B0(v97);
        v99 = *(unsigned __int8 **)(v95 + 12);
        *(_WORD *)(v136 + 14) = v98;
        v100 = v98;
        v101 = sub_6F7744C0(v99);
        v102 = v101;
        *(_WORD *)(v136 + 16) = v101;
        v103 = sub_6F7744C0(*(unsigned __int8 **)(v95 + 16));
        *(_WORD *)(v136 + 18) = v103;
        v104 = v103 + v100;
        v105 = -v103;
        v107 = __OFSUB__(*(_WORD *)(a5 + 18), v104);
        v106 = (signed __int16)(*(_WORD *)(a5 + 18) - v104) < 0;
        *(_WORD *)(v136 + 20) = v104;
        if ( !(v106 ^ v107) )
          v104 = *(_WORD *)(a5 + 18);
        v107 = __OFSUB__(*(_WORD *)(a5 + 20), (_WORD)v105);
        v106 = (signed __int16)(*(_WORD *)(a5 + 20) - v105) < 0;
        *(_WORD *)(v136 + 22) = v105;
        if ( !(v106 ^ v107) )
          LOWORD(v105) = *(_WORD *)(a5 + 20);
        *(_WORD *)(a5 + 18) = v104;
        *(_WORD *)(a5 + 20) = v105;
        v108 = v102 + v134;
        v107 = __OFSUB__(*(_WORD *)(a5 + 16), v102 + v134);
        v106 = (signed __int16)(*(_WORD *)(a5 + 16) - (v102 + v134)) < 0;
        *(_WORD *)(a5 + 22) = v102 + v134;
        if ( !(v106 ^ v107) )
          v108 = *(_WORD *)(a5 + 16);
        v107 = __OFSUB__(*(_WORD *)(a5 + 12), v102);
        v7 = *(_WORD *)(a5 + 12) == v102;
        v106 = (signed __int16)(*(_WORD *)(a5 + 12) - v102) < 0;
        *(_WORD *)(a5 + 16) = v108;
        v109 = v102;
        if ( (unsigned __int8)(v106 ^ v107) | v7 )
          v109 = *(_WORD *)(a5 + 12);
        if ( *(_WORD *)(a5 + 14) >= v102 )
          v102 = *(_WORD *)(a5 + 14);
        *(_WORD *)(a5 + 12) = v109;
        *(_WORD *)(a5 + 14) = v102;
        if ( !(*(_DWORD *)a5 & 0x200) )
          *(_WORD *)(v136 + 10) = v134;
        if ( **(_DWORD **)(a5 + 36) )
        {
          v124 = sub_6F7C9420(*(_WORD *)(v136 + 10), 72000, *(_DWORD *)(v10 + 20) * *(_DWORD *)(v10 + 16));
          if ( v124 != *(_WORD *)(v136 + 8) )
          {
            v7 = *(_DWORD *)(a5 + 28) == -1;
            *(_WORD *)(v136 + 8) = v124;
            if ( v7 )
              *(_DWORD *)(v10 + 4 * ((unsigned int)(*(_DWORD *)(v10 + 64) - 1) >> 5) + 139396) |= 1 << (*(_BYTE *)(v10 + 64) - 1);
            else
              *(_DWORD *)(v10 + 4 * (*(_DWORD *)(v136 + 4) >> 5) + 132) |= 1 << *(_DWORD *)(v136 + 4);
            *(_DWORD *)a5 |= 0x1000u;
            *(_WORD *)(v10 + 278660) = 1;
          }
        }
        *(_DWORD *)a5 |= 0x400u;
        result = v141;
        goto LABEL_20;
      }
      goto LABEL_108;
    }
  }
  v81 = (_BYTE *)a1;
  v82 = "BITMAP";
  v83 = 6;
  do
  {
    if ( !v83 )
      break;
    v44 = *v81++ == *v82++;
    --v83;
  }
  while ( v44 );
  if ( !v44 || (v133 = *(_BYTE *)(a1 + 6), v133 != 13 && (v133 & 0xDF) != 0) && (unsigned __int8)(v133 - 9) > 1u )
  {
    v141 = 3;
    goto LABEL_35;
  }
  if ( !(BYTE1(v12) & 4) )
  {
    v141 = 183;
    goto LABEL_35;
  }
  v119 = (*(_WORD *)(v136 + 12) * *(_WORD *)(v10 + 278662) + 7) >> 3;
  v120 = v119 * *(_WORD *)(v136 + 14);
  *(_DWORD *)(v136 + 28) = v119;
  if ( v120 > 0xFFFF || v119 > 0xFFFF )
  {
    v141 = 184;
LABEL_35:
    if ( v126 )
    {
      sub_6F773D90(v125, *(_DWORD *)(v8 + 24));
      *(_DWORD *)(v8 + 24) = 0;
    }
    return v141;
  }
  *(_WORD *)(v136 + 32) = v120;
  v122 = sub_6F773B30(v125, 1, 0, v120, 0, &v141);
  v7 = v141 == 0;
  *(_DWORD *)(v136 + 24) = v122;
  if ( !v7 )
    goto LABEL_34;
  *(_DWORD *)(a5 + 8) = 0;
  *(_DWORD *)a5 |= 0x800u;
  return 0;
}
