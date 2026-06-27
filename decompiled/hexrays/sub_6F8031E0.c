char *__usercall sub_6F8031E0@<eax>(int a1@<eax>)
{
  int v1; // edi@1
  int v2; // esi@1
  char *result; // eax@1
  char v4; // al@5
  int v5; // ebp@8
  _DWORD *v6; // esi@10
  int v7; // ebp@10
  char v8; // cl@11
  int v9; // ebx@13
  int v10; // eax@13
  int v11; // edx@19
  int v12; // eax@20
  bool v13; // zf@20
  int v14; // ebp@41
  int v15; // edx@53
  int v16; // eax@58
  unsigned __int8 v17; // al@62
  unsigned __int8 v18; // al@64
  int v19; // ecx@67
  int v20; // eax@68
  int v21; // ebx@69
  int v22; // eax@69
  unsigned __int8 v23; // dl@69
  unsigned __int8 v24; // cl@80
  unsigned __int8 v25; // al@84
  unsigned __int8 v26; // cl@88
  unsigned __int8 v27; // al@92
  unsigned __int8 v28; // cl@96
  unsigned __int8 v29; // al@100
  unsigned __int8 v30; // cl@104
  unsigned __int8 v31; // al@108
  int v32; // eax@111
  int v33; // ecx@111
  int v34; // ecx@111
  int v35; // ebx@140
  int v36; // esi@170
  int v37; // ebx@188
  unsigned int v38; // esi@188
  int v39; // edx@189
  int v40; // eax@189
  unsigned __int8 v41; // dl@192
  int v42; // ebp@192
  int v43; // ebx@193
  int v44; // eax@193
  int v45; // edx@208
  int v46; // eax@209
  bool v47; // cf@209
  int v48; // esi@233
  int v49; // ebp@252
  int v50; // eax@253
  int v51; // edx@254
  int v52; // ebx@267
  int v53; // edx@268
  int v54; // ebx@278
  signed int v55; // eax@278
  int v56; // edi@280
  int v57; // esi@280
  int v58; // ebp@282
  int v59; // edx@286
  int v60; // edx@289
  int v61; // edi@292
  int v62; // ebx@308
  int v63; // edx@310
  int v64; // ebp@310
  int v65; // ebx@310
  int v66; // esi@310
  int v67; // ebx@311
  unsigned int v68; // ST08_4@311
  int v69; // ST04_4@311
  signed int v70; // ebx@311
  int v71; // eax@315
  int v72; // ecx@316
  int v73; // ecx@316
  int v74; // eax@317
  int v75; // eax@317
  int v76; // edx@318
  int v77; // edx@318
  int v78; // edx@318
  int v79; // ecx@318
  int v80; // edx@318
  int v81; // esi@319
  int v82; // esi@319
  int v83; // ebp@319
  int v84; // ebx@319
  int v85; // ecx@323
  char v86; // dl@323
  int v87; // eax@325
  int v88; // ecx@327
  int v89; // ecx@329
  int v90; // ecx@331
  int v91; // eax@332
  int v92; // ST2C_4@332
  int v93; // ecx@332
  _DWORD *v94; // ecx@334
  int v95; // edx@334
  int *i; // ecx@334
  int v97; // ecx@336
  int v98; // ST2C_4@336
  int v99; // ST30_4@330
  int v100; // edx@330
  int v101; // ST2C_4@330
  int v102; // ST30_4@328
  int v103; // edx@328
  int v104; // ST2C_4@328
  int v105; // ST30_4@326
  int v106; // edx@326
  int v107; // ST2C_4@326
  unsigned int v108; // esi@343
  _BYTE *v109; // ecx@343
  int v110; // ebx@344
  int v111; // ebp@346
  int v112; // edx@347
  int v113; // eax@347
  int v114; // ebx@350
  char v115; // dl@350
  int v116; // ecx@350
  char v117; // al@361
  char v118; // al@365
  char v119; // al@369
  char v120; // al@373
  char v121; // al@377
  char v122; // al@381
  char v123; // al@385
  char v124; // al@389
  int v125; // eax@392
  char v126; // cl@392
  char v127; // cl@395
  char v128; // cl@398
  char v129; // cl@401
  char v130; // cl@404
  char v131; // cl@407
  char v132; // cl@410
  int v133; // esi@435
  int v134; // [sp+18h] [bp-44h]@10
  int v135; // [sp+18h] [bp-44h]@188
  unsigned int v136; // [sp+18h] [bp-44h]@251
  unsigned int v137; // [sp+18h] [bp-44h]@278
  char *v138; // [sp+18h] [bp-44h]@310
  int v139; // [sp+18h] [bp-44h]@319
  int v140; // [sp+1Ch] [bp-40h]@13
  int v141; // [sp+1Ch] [bp-40h]@19
  int v142; // [sp+1Ch] [bp-40h]@41
  int v143; // [sp+1Ch] [bp-40h]@65
  unsigned int v144; // [sp+1Ch] [bp-40h]@188
  int v145; // [sp+1Ch] [bp-40h]@282
  char *v146; // [sp+1Ch] [bp-40h]@310
  int v147; // [sp+1Ch] [bp-40h]@319
  int v148; // [sp+1Ch] [bp-40h]@343
  int v149; // [sp+20h] [bp-3Ch]@9
  int v150; // [sp+20h] [bp-3Ch]@188
  int v151; // [sp+20h] [bp-3Ch]@278
  int v152; // [sp+20h] [bp-3Ch]@310
  int v153; // [sp+20h] [bp-3Ch]@319
  unsigned int v154; // [sp+20h] [bp-3Ch]@435
  _DWORD *v155; // [sp+24h] [bp-38h]@19
  int v156; // [sp+24h] [bp-38h]@28
  _DWORD *v157; // [sp+24h] [bp-38h]@170
  unsigned int v158; // [sp+24h] [bp-38h]@188
  int v159; // [sp+24h] [bp-38h]@252
  int v160; // [sp+24h] [bp-38h]@310
  int v161; // [sp+24h] [bp-38h]@319
  int v162; // [sp+24h] [bp-38h]@422
  int v163; // [sp+28h] [bp-34h]@10
  int v164; // [sp+28h] [bp-34h]@20
  int v165; // [sp+28h] [bp-34h]@157
  int v166; // [sp+28h] [bp-34h]@209
  unsigned int v167; // [sp+28h] [bp-34h]@233
  unsigned int v168; // [sp+28h] [bp-34h]@279
  int v169; // [sp+28h] [bp-34h]@311
  int v170; // [sp+28h] [bp-34h]@319
  int v171; // [sp+2Ch] [bp-30h]@10
  int v172; // [sp+2Ch] [bp-30h]@220
  _DWORD *v173; // [sp+2Ch] [bp-30h]@278
  bool v174; // [sp+30h] [bp-2Ch]@12
  char v175; // [sp+30h] [bp-2Ch]@192
  int v176; // [sp+30h] [bp-2Ch]@252
  unsigned int v177; // [sp+34h] [bp-28h]@278
  int v178; // [sp+38h] [bp-24h]@1
  int v179; // [sp+3Ch] [bp-20h]@19

  v1 = a1 + 51552;
  v2 = a1;
  v178 = a1;
  result = (char *)sub_6F8332B0(a1 + 51552);
  if ( *(_DWORD *)(v2 + 268) <= 0 )
    goto LABEL_143;
  sub_6F832980(v1, 0, 1u);
  sub_6F832980(v1, *(_BYTE *)(v2 + 792), 1u);
  sub_6F832980(v1, *(_BYTE *)(v2 + 795), 6u);
  if ( *(_BYTE *)(v2 + 794) <= 1u
    || (sub_6F832980(v1, 1, 1u), sub_6F832980(v1, *(_BYTE *)(v2 + 796), 6u), *(_BYTE *)(v2 + 794) <= 2u) )
  {
    sub_6F832980(v1, 0, 1u);
  }
  else
  {
    sub_6F832980(v1, 1, 1u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 797), 6u);
  }
  v4 = *(_BYTE *)(v178 + 792);
  if ( !v4 )
  {
    sub_6F832980(v1, 0, 3u);
    v4 = *(_BYTE *)(v178 + 792);
  }
  if ( v4 != 1 )
    goto LABEL_8;
  v37 = *(_DWORD *)(v178 + 228);
  v150 = *(_DWORD *)(v178 + 224);
  v38 = 0;
  v158 = *(_DWORD *)(v178 + 228);
  v135 = (**(_BYTE **)(v178 + 224) >> 1) & 1;
  sub_6F832980(v1, v135, 1u);
  v144 = 0;
  if ( v37 )
    goto LABEL_192;
LABEL_189:
  v39 = 0;
  v40 = 0;
LABEL_190:
  sub_6F832980(
    v1,
    dword_6FB88A24[v40] + v39 - (unsigned __int16)word_6FB88A40[v40],
    (unsigned __int8)byte_6FB88A1A[v40]);
  v135 ^= 1u;
  while ( v158 > v38 )
  {
LABEL_192:
    v41 = (*(_BYTE *)(v150 + v38) >> 1) & 1;
    v42 = v41;
    v175 = (*(_BYTE *)(v150 + v38) >> 1) & 1;
    if ( v41 != v135 )
      goto LABEL_189;
    v43 = 0;
    v44 = ((_BYTE)v158 + ~(_BYTE)v38) & 7;
    if ( !(((_BYTE)v158 + ~(_BYTE)v38) & 7)
      || (++v38, v144 += v135, v43 = 1, v158 > v38)
      && ((*(_BYTE *)(v150 + v38) >> 1) & 1) == v135
      && (v44 == 1
       || (v44 == 2
        || (v44 == 3
         || (v44 == 4
          || (v44 == 5
           || (v44 == 6 || (++v38, v43 = 2, v144 += v135, ((*(_BYTE *)(v150 + v38) >> 1) & 1) == v41))
           && (++v38, ++v43, v144 += v135, ((*(_BYTE *)(v150 + v38) >> 1) & 1) == v41))
          && (++v38, ++v43, v144 += v135, ((*(_BYTE *)(v150 + v38) >> 1) & 1) == v41))
         && (++v38, ++v43, v144 += v135, ((*(_BYTE *)(v150 + v38) >> 1) & 1) == v41))
        && (++v38, ++v43, v144 += v135, ((*(_BYTE *)(v150 + v38) >> 1) & 1) == v41))
       && (++v38, ++v43, v144 += v135, ((*(_BYTE *)(v150 + v38) >> 1) & 1) == v41)) )
    {
      v45 = v135;
      do
      {
        v46 = v38 + 1;
        v144 += v45;
        v47 = v158 < v38 + 1;
        v13 = v158 == v38++ + 1;
        v166 = v43++ + 1;
        if ( v47 || v13 )
          break;
        if ( ((*(_BYTE *)(v150 + v46) >> 1) & 1) != v42 )
          break;
        ++v38;
        v144 += v135;
        ++v43;
        if ( ((*(_BYTE *)(v150 + v38) >> 1) & 1) != v42 )
          break;
        v144 += v135;
        v43 = v166 + 2;
        v38 = v46 + 2;
        if ( ((*(_BYTE *)(v150 + v46 + 2) >> 1) & 1) != v42 )
          break;
        v144 += v135;
        v38 = v46 + 3;
        v43 = v166 + 3;
        if ( ((*(_BYTE *)(v150 + v46 + 3) >> 1) & 1) != v42 )
          break;
        v144 += v135;
        v38 = v46 + 4;
        v43 = v166 + 4;
        if ( ((*(_BYTE *)(v150 + v46 + 4) >> 1) & 1) != v42 )
          break;
        v144 += v135;
        v38 = v46 + 5;
        v43 = v166 + 5;
        if ( ((*(_BYTE *)(v150 + v46 + 5) >> 1) & 1) != v42 )
          break;
        v144 += v135;
        v38 = v46 + 6;
        v43 = v166 + 6;
        if ( ((*(_BYTE *)(v150 + v46 + 6) >> 1) & 1) != v42 )
          break;
        v38 = v46 + 7;
        v45 = v135;
        v144 += v135;
        v43 = v166 + 7;
      }
      while ( ((*(_BYTE *)(v150 + v46 + 7) >> 1) & 1) == v42 );
    }
    if ( v43 <= 4128
      || ((_BYTE)v43 - 33) & 7
      && ((v172 = ((_BYTE)v43 - 33) & 7,
           sub_6F832980(v1, 0x3FFFF, 0x12u),
           v43 -= 4129,
           sub_6F832980(v1, v42, 1u),
           v43 <= 4128)
       || v172 != 1
       && (v172 != 2
        && (v172 != 3
         && (v172 != 4
          && (v172 != 5
           && (v172 != 6 && (v43 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v42, 1u), v43 <= 4128)
            || (v43 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v42, 1u), v43 <= 4128))
           || (v43 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v42, 1u), v43 <= 4128))
          || (v43 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v42, 1u), v43 <= 4128))
         || (v43 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v42, 1u), v43 <= 4128))
        || (v43 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v42, 1u), v43 <= 4128))) )
    {
LABEL_245:
      v39 = v43;
      if ( v43 <= 1 )
      {
        v40 = 0;
      }
      else if ( v43 <= 3 )
      {
        v40 = 1;
      }
      else if ( v43 <= 5 )
      {
        v40 = 2;
      }
      else if ( v43 <= 9 )
      {
        v40 = 3;
      }
      else if ( v43 <= 17 )
      {
        v40 = 4;
      }
      else
      {
        v40 = (v43 > 33) + 5;
      }
      goto LABEL_190;
    }
    v167 = v38;
    v48 = v43;
    while ( 1 )
    {
      v43 = v48 - 4129;
      sub_6F832980(v1, 0x3FFFF, 0x12u);
      if ( v48 == 4129 )
        break;
      sub_6F832980(v1, v42, 1u);
      if ( v43 <= 4128 )
        goto LABEL_244;
      v48 -= 8258;
      sub_6F832980(v1, 0x3FFFF, 0x12u);
      sub_6F832980(v1, v42, 1u);
      if ( v43 - 4129 > 4128 )
      {
        v48 = v43 - 8258;
        sub_6F832980(v1, 0x3FFFF, 0x12u);
        sub_6F832980(v1, v42, 1u);
        if ( v43 - 8258 > 4128 )
        {
          v48 = v43 - 12387;
          sub_6F832980(v1, 0x3FFFF, 0x12u);
          sub_6F832980(v1, v42, 1u);
          if ( v43 - 12387 > 4128 )
          {
            v48 = v43 - 16516;
            sub_6F832980(v1, 0x3FFFF, 0x12u);
            sub_6F832980(v1, v42, 1u);
            if ( v43 - 16516 > 4128 )
            {
              v48 = v43 - 20645;
              sub_6F832980(v1, 0x3FFFF, 0x12u);
              sub_6F832980(v1, v42, 1u);
              if ( v43 - 20645 > 4128 )
              {
                v48 = v43 - 24774;
                sub_6F832980(v1, 0x3FFFF, 0x12u);
                sub_6F832980(v1, v42, 1u);
                if ( v43 - 24774 > 4128 )
                {
                  v48 = v43 - 28903;
                  sub_6F832980(v1, 0x3FFFF, 0x12u);
                  sub_6F832980(v1, v42, 1u);
                  if ( v43 - 28903 > 4128 )
                    continue;
                }
              }
            }
          }
        }
      }
      v43 = v48;
LABEL_244:
      v38 = v167;
      goto LABEL_245;
    }
    v38 = v167;
    if ( v158 > v167 )
      sub_6F832980(v1, (unsigned __int8)(v175 ^ 1), 1u);
    v135 = (unsigned __int8)(v175 ^ 1);
  }
  v136 = *(_DWORD *)(v178 + 228);
  if ( *(_DWORD *)(v178 + 228) <= v144 )
    goto LABEL_252;
  v108 = 0;
  v109 = *(_BYTE **)(v178 + 224);
  v148 = *(_DWORD *)(v178 + 224);
  if ( *v109 & 2 )
  {
    v110 = *(_DWORD *)(v178 + 224);
    do
      v109 = (_BYTE *)(v110 + ++v108);
    while ( *(_BYTE *)(v110 + v108) & 2 );
  }
  v111 = *v109 & 1;
  sub_6F832980(v1, v111, 1u);
  if ( v136 > v108 )
    goto LABEL_350;
  v112 = 0;
  v113 = 0;
LABEL_348:
  v111 ^= 1u;
  sub_6F832980(
    v1,
    dword_6FB88A24[v113] + v112 - (unsigned __int16)word_6FB88A40[v113],
    (unsigned __int8)byte_6FB88A1A[v113]);
  while ( v136 > v108 )
  {
LABEL_350:
    v114 = 0;
    v115 = *(_BYTE *)(v148 + v108);
    v116 = ((_BYTE)v136 + ~(_BYTE)v108) & 7;
    if ( !(v115 & 2) )
    {
      if ( (v115 & 1) != v111 )
        goto LABEL_414;
      v114 = 1;
    }
    if ( v136 > ++v108 )
    {
      if ( !v116 )
        goto LABEL_389;
      if ( v116 != 1 )
      {
        if ( v116 != 2 )
        {
          if ( v116 != 3 )
          {
            if ( v116 != 4 )
            {
              if ( v116 != 5 )
              {
                if ( v116 != 6 )
                {
                  v117 = *(_BYTE *)(v148 + v108);
                  if ( !(v117 & 2) )
                  {
                    if ( (v117 & 1) != v111 )
                      goto LABEL_414;
                    ++v114;
                  }
                  ++v108;
                }
                v118 = *(_BYTE *)(v148 + v108);
                if ( !(v118 & 2) )
                {
                  if ( (v118 & 1) != v111 )
                    goto LABEL_414;
                  ++v114;
                }
                ++v108;
              }
              v119 = *(_BYTE *)(v148 + v108);
              if ( !(v119 & 2) )
              {
                if ( (v119 & 1) != v111 )
                  goto LABEL_414;
                ++v114;
              }
              ++v108;
            }
            v120 = *(_BYTE *)(v148 + v108);
            if ( !(v120 & 2) )
            {
              if ( (v120 & 1) != v111 )
                goto LABEL_414;
              ++v114;
            }
            ++v108;
          }
          v121 = *(_BYTE *)(v148 + v108);
          if ( !(v121 & 2) )
          {
            if ( (v121 & 1) != v111 )
              goto LABEL_414;
            ++v114;
          }
          ++v108;
        }
        v122 = *(_BYTE *)(v148 + v108);
        if ( !(v122 & 2) )
        {
          if ( (v122 & 1) != v111 )
            goto LABEL_414;
          ++v114;
        }
        ++v108;
      }
      v123 = *(_BYTE *)(v148 + v108);
      if ( !(v123 & 2) )
      {
        if ( (v123 & 1) != v111 )
          goto LABEL_414;
        ++v114;
      }
      if ( v136 > ++v108 )
      {
        do
        {
LABEL_389:
          v124 = *(_BYTE *)(v148 + v108);
          if ( !(v124 & 2) )
          {
            if ( (v124 & 1) != v111 )
              break;
            ++v114;
          }
          v125 = v108 + 1;
          v126 = *(_BYTE *)(v148 + v108++ + 1);
          if ( !(v126 & 2) )
          {
            if ( (v126 & 1) != v111 )
              break;
            ++v114;
          }
          v108 = v125 + 1;
          v127 = *(_BYTE *)(v148 + v125 + 1);
          if ( !(v127 & 2) )
          {
            if ( (v127 & 1) != v111 )
              break;
            ++v114;
          }
          v108 = v125 + 2;
          v128 = *(_BYTE *)(v148 + v125 + 2);
          if ( !(v128 & 2) )
          {
            if ( (v128 & 1) != v111 )
              break;
            ++v114;
          }
          v108 = v125 + 3;
          v129 = *(_BYTE *)(v148 + v125 + 3);
          if ( !(v129 & 2) )
          {
            if ( (v129 & 1) != v111 )
              break;
            ++v114;
          }
          v108 = v125 + 4;
          v130 = *(_BYTE *)(v148 + v125 + 4);
          if ( !(v130 & 2) )
          {
            if ( (v130 & 1) != v111 )
              break;
            ++v114;
          }
          v108 = v125 + 5;
          v131 = *(_BYTE *)(v148 + v125 + 5);
          if ( !(v131 & 2) )
          {
            if ( (v131 & 1) != v111 )
              break;
            ++v114;
          }
          v108 = v125 + 6;
          v132 = *(_BYTE *)(v148 + v125 + 6);
          if ( !(v132 & 2) )
          {
            if ( (v132 & 1) != v111 )
              break;
            ++v114;
          }
          v108 = v125 + 7;
        }
        while ( v136 > v125 + 7 );
      }
    }
LABEL_414:
    if ( v114 <= 4128
      || ((_BYTE)v114 - 33) & 7
      && ((v162 = ((_BYTE)v114 - 33) & 7,
           sub_6F832980(v1, 0x3FFFF, 0x12u),
           v114 -= 4129,
           sub_6F832980(v1, v111, 1u),
           v114 <= 4128)
       || v162 != 1
       && (v162 != 2
        && (v162 != 3
         && (v162 != 4
          && (v162 != 5
           && (v162 != 6 && (v114 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v111, 1u), v114 <= 4128)
            || (v114 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v111, 1u), v114 <= 4128))
           || (v114 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v111, 1u), v114 <= 4128))
          || (v114 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v111, 1u), v114 <= 4128))
         || (v114 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v111, 1u), v114 <= 4128))
        || (v114 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v111, 1u), v114 <= 4128))) )
    {
LABEL_415:
      v112 = v114;
      if ( v114 <= 1 )
      {
        v113 = 0;
      }
      else if ( v114 <= 3 )
      {
        v113 = 1;
      }
      else if ( v114 <= 5 )
      {
        v113 = 2;
      }
      else if ( v114 <= 9 )
      {
        v113 = 3;
      }
      else if ( v114 <= 17 )
      {
        v113 = 4;
      }
      else
      {
        v113 = (v114 > 33) + 5;
      }
      goto LABEL_348;
    }
    v154 = v108;
    v133 = v114;
    while ( 1 )
    {
      v114 = v133 - 4129;
      sub_6F832980(v1, 0x3FFFF, 0x12u);
      if ( v133 == 4129 )
        break;
      sub_6F832980(v1, v111, 1u);
      if ( v114 <= 4128 )
        goto LABEL_446;
      v133 -= 8258;
      sub_6F832980(v1, 0x3FFFF, 0x12u);
      sub_6F832980(v1, v111, 1u);
      if ( v114 - 4129 > 4128 )
      {
        v133 = v114 - 8258;
        sub_6F832980(v1, 0x3FFFF, 0x12u);
        sub_6F832980(v1, v111, 1u);
        if ( v114 - 8258 > 4128 )
        {
          v133 = v114 - 12387;
          sub_6F832980(v1, 0x3FFFF, 0x12u);
          sub_6F832980(v1, v111, 1u);
          if ( v114 - 12387 > 4128 )
          {
            v133 = v114 - 16516;
            sub_6F832980(v1, 0x3FFFF, 0x12u);
            sub_6F832980(v1, v111, 1u);
            if ( v114 - 16516 > 4128 )
            {
              v133 = v114 - 20645;
              sub_6F832980(v1, 0x3FFFF, 0x12u);
              sub_6F832980(v1, v111, 1u);
              if ( v114 - 20645 > 4128 )
              {
                v133 = v114 - 24774;
                sub_6F832980(v1, 0x3FFFF, 0x12u);
                sub_6F832980(v1, v111, 1u);
                if ( v114 - 24774 > 4128 )
                {
                  v133 = v114 - 28903;
                  sub_6F832980(v1, 0x3FFFF, 0x12u);
                  sub_6F832980(v1, v111, 1u);
                  if ( v114 - 28903 > 4128 )
                    continue;
                }
              }
            }
          }
        }
      }
      v114 = v133;
LABEL_446:
      v108 = v154;
      goto LABEL_415;
    }
    v108 = v154;
    v111 ^= 1u;
    if ( v136 > v154 )
      sub_6F832980(v1, v111, 1u);
  }
  v136 = *(_DWORD *)(v178 + 228);
LABEL_252:
  v49 = *(_DWORD *)(v178 + 204);
  v176 = *(_DWORD *)(v178 + 220);
  v159 = *(_DWORD *)(v178 + 224);
  if ( v136 )
  {
    v50 = 0;
    if ( !(**(_BYTE **)(v178 + 224) & 2) )
    {
      v51 = ((_BYTE)v136 - 1) & 7;
      if ( !(((_BYTE)v136 - 1) & 7) )
        goto LABEL_458;
      v50 = 1;
      if ( *(_BYTE *)(v159 + 1) & 2 )
        goto LABEL_277;
      if ( v51 == 1 )
      {
LABEL_458:
        v52 = *(_DWORD *)(v178 + 224);
        goto LABEL_268;
      }
      if ( v51 == 2
        || (v51 == 3
         || (v51 == 4
          || (v51 == 5 || (v51 == 6 || (v50 = 2, !(*(_BYTE *)(v159 + 2) & 2))) && (++v50, !(*(_BYTE *)(v159 + v50) & 2)))
          && (++v50, !(*(_BYTE *)(v159 + v50) & 2)))
         && (++v50, !(*(_BYTE *)(v159 + v50) & 2)))
        && (++v50, !(*(_BYTE *)(v159 + v50) & 2)) )
      {
        ++v50;
        v52 = *(_DWORD *)(v178 + 224);
        if ( !(*(_BYTE *)(v159 + v50) & 2) )
        {
LABEL_268:
          while ( 1 )
          {
            v53 = v50++ + 1;
            if ( v50 == v136 )
              goto LABEL_308;
            if ( !(*(_BYTE *)(v52 + v53) & 2) && !(*(_BYTE *)(v52 + ++v50) & 2) )
            {
              v50 = v53 + 2;
              if ( !(*(_BYTE *)(v52 + v53 + 2) & 2) )
              {
                v50 = v53 + 3;
                if ( !(*(_BYTE *)(v52 + v53 + 3) & 2) )
                {
                  v50 = v53 + 4;
                  if ( !(*(_BYTE *)(v52 + v53 + 4) & 2) )
                  {
                    v50 = v53 + 5;
                    if ( !(*(_BYTE *)(v52 + v53 + 5) & 2) )
                    {
                      v50 = v53 + 6;
                      if ( !(*(_BYTE *)(v52 + v53 + 6) & 2) )
                      {
                        v50 = v53 + 7;
                        if ( !(*(_BYTE *)(v52 + v53 + 7) & 2) )
                          continue;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
      }
LABEL_277:
      v50 <<= 6;
    }
    v54 = *(_BYTE *)(v49 + 4 * *(_DWORD *)(v176 + v50)) & 1;
    sub_6F832980(v1, v54, 1u);
    v137 = 0;
    v177 = 0;
    v151 = v1;
    v55 = 0;
    v173 = (_DWORD *)(v178 + 136);
    do
    {
      v168 = *v173 + v177;
      v177 += *v173;
      if ( v177 > v137 )
      {
        v56 = v49;
        v57 = v176 + (v137 << 6);
        do
        {
          v145 = v57 + 64;
          v58 = v56;
          if ( *(_BYTE *)(v159 + v137) & 2 )
          {
            do
            {
              if ( *(_DWORD *)v57 >= 0 )
              {
                if ( (*(_BYTE *)(v58 + 4 * *(_DWORD *)v57) & 1) == v54 )
                {
                  ++v55;
                }
                else
                {
                  v54 ^= 1u;
                  sub_6F832980(v151, (unsigned __int16)word_6FB889C0[v55 - 1], (unsigned __int8)byte_6FB889FB[v55]);
                  v55 = 1;
                }
              }
              v59 = *(_DWORD *)(v57 + 4);
              if ( v59 >= 0 )
              {
                if ( (*(_BYTE *)(v58 + 4 * v59) & 1) == v54 )
                {
                  ++v55;
                }
                else
                {
                  v54 ^= 1u;
                  sub_6F832980(v151, (unsigned __int16)word_6FB889C0[v55 - 1], (unsigned __int8)byte_6FB889FB[v55]);
                  v55 = 1;
                }
              }
              v60 = *(_DWORD *)(v57 + 8);
              if ( v60 >= 0 )
              {
                if ( (*(_BYTE *)(v58 + 4 * v60) & 1) == v54 )
                {
                  ++v55;
                }
                else
                {
                  v54 ^= 1u;
                  sub_6F832980(v151, (unsigned __int16)word_6FB889C0[v55 - 1], (unsigned __int8)byte_6FB889FB[v55]);
                  v55 = 1;
                }
              }
              v61 = *(_DWORD *)(v57 + 12);
              if ( v61 >= 0 )
              {
                if ( (*(_BYTE *)(v58 + 4 * v61) & 1) == v54 )
                {
                  ++v55;
                }
                else
                {
                  v54 ^= 1u;
                  sub_6F832980(v151, (unsigned __int16)word_6FB889C0[v55 - 1], (unsigned __int8)byte_6FB889FB[v55]);
                  v55 = 1;
                }
              }
              v57 += 16;
            }
            while ( v57 != v145 );
            v56 = v58;
          }
          ++v137;
          v57 = v145;
        }
        while ( v168 > v137 );
        v49 = v56;
        v137 = v168;
      }
      v173 += 8;
    }
    while ( v173 != (_DWORD *)(v178 + 232) );
    v1 = v151;
    if ( v55 )
      sub_6F832980(v151, (unsigned __int16)word_6FB889BE[v55], (unsigned __int8)byte_6FB889FB[v55]);
  }
LABEL_308:
  v62 = *(_BYTE *)(v178 + 51712);
  sub_6F832980(v1, v62, 3u);
  if ( !v62 )
  {
    sub_6F832980(v1, *(_BYTE *)(v178 + 51664), 3u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 51665), 3u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 51666), 3u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 51667), 3u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 51668), 3u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 51669), 3u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 51670), 3u);
    sub_6F832980(v1, *(_BYTE *)(v178 + 51671), 3u);
  }
  v63 = *(_DWORD *)(v178 + 51584);
  v64 = *(_DWORD *)(v178 + 4 * v62 + 51632);
  v65 = ((_WORD)v62 + 1) & 0x1F8;
  v160 = *(_DWORD *)(v178 + 51584);
  v138 = &byte_6FB88B90[v65];
  v146 = (char *)&unk_6FB88B80 + v65;
  v66 = *(_DWORD *)(v178 + 51580);
  v152 = *(_DWORD *)(v178 + 236);
  if ( v63 )
  {
    v169 = ((_BYTE)v63 - 1) & 3;
    v67 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + *(_DWORD *)v66));
    v68 = (unsigned __int8)v138[v67];
    v69 = (unsigned __int8)v146[v67];
    v70 = 1;
    sub_6F832980(v1, v69, v68);
    if ( 1 != v160 )
    {
      if ( !v169 )
        goto LABEL_459;
      if ( v169 != 1 )
      {
        if ( v169 != 2 )
        {
          v71 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + *(_DWORD *)(v66 + 4)));
          v70 = 2;
          sub_6F832980(v1, (unsigned __int8)v146[v71], (unsigned __int8)v138[v71]);
        }
        v72 = *(_DWORD *)(v66 + 4 * v70++);
        v73 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + v72));
        sub_6F832980(v1, (unsigned __int8)v146[v73], (unsigned __int8)v138[v73]);
      }
      v74 = *(_DWORD *)(v66 + 4 * v70++);
      v75 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + v74));
      sub_6F832980(v1, (unsigned __int8)v146[v75], (unsigned __int8)v138[v75]);
      if ( v70 != v160 )
      {
LABEL_459:
        do
        {
          v76 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + *(_DWORD *)(v66 + 4 * v70)));
          sub_6F832980(v1, (unsigned __int8)v146[v76], (unsigned __int8)v138[v76]);
          v77 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + *(_DWORD *)(v66 + 4 * v70 + 4)));
          sub_6F832980(v1, (unsigned __int8)v146[v77], (unsigned __int8)v138[v77]);
          v78 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + *(_DWORD *)(v66 + 4 * v70 + 8)));
          sub_6F832980(v1, (unsigned __int8)v146[v78], (unsigned __int8)v138[v78]);
          v79 = *(_DWORD *)(v66 + 4 * v70 + 12);
          v70 += 4;
          v80 = *(_BYTE *)(v64 + *(_BYTE *)(v152 + v79));
          sub_6F832980(v1, (unsigned __int8)v146[v80], (unsigned __int8)v138[v80]);
        }
        while ( v70 != v160 );
      }
    }
  }
  v81 = *(_DWORD *)(v178 + 51628) < *(_DWORD *)(v178 + 51624);
  sub_6F832980(v1, v81, 1u);
  v82 = v81 << 6;
  v139 = *(_DWORD *)(v178 + 51580);
  v170 = *(_DWORD *)(v178 + 232);
  v161 = *(_DWORD *)(v178 + 212);
  v147 = *(_DWORD *)(v178 + 51584);
  v153 = *(_DWORD *)(v178 + 236);
  v83 = *(_DWORD *)(v178 + 204);
  v84 = 0;
  if ( v147 )
  {
    while ( 1 )
    {
      v85 = *(_DWORD *)(v139 + 4 * v84);
      v86 = *(_BYTE *)(v153 + v85);
      if ( v86 == 6 )
        break;
      if ( v86 == 7 )
      {
        v87 = v170 + 48 * v85;
        if ( *(_BYTE *)(v83 + 4 * *(_DWORD *)v87) & 1 )
        {
          v105 = v170 + 48 * v85;
          v106 = v161 + 2 * *(_DWORD *)v87;
          v107 = *(_BYTE *)(v106 + 1);
          sub_6F832980(
            v1,
            (unsigned __int8)*(&byte_6FB88A80[*(_BYTE *)v106 + 31] + v82),
            (unsigned __int8)*(&byte_6FB88B00[*(_BYTE *)v106 + 31] + v82));
          sub_6F832980(
            v1,
            (unsigned __int8)*(&byte_6FB88A80[v107 + 31] + v82),
            (unsigned __int8)*(&byte_6FB88B00[v107 + 31] + v82));
          v87 = v105;
        }
        v88 = *(_DWORD *)(v87 + 4);
        if ( *(_BYTE *)(v83 + 4 * v88) & 1 )
        {
          v102 = v87;
          v103 = v161 + 2 * v88;
          v104 = *(_BYTE *)(v103 + 1);
          sub_6F832980(
            v1,
            (unsigned __int8)*(&byte_6FB88A80[*(_BYTE *)v103 + 31] + v82),
            (unsigned __int8)*(&byte_6FB88B00[*(_BYTE *)v103 + 31] + v82));
          sub_6F832980(
            v1,
            (unsigned __int8)*(&byte_6FB88A80[v104 + 31] + v82),
            (unsigned __int8)*(&byte_6FB88B00[v104 + 31] + v82));
          v87 = v102;
        }
        v89 = *(_DWORD *)(v87 + 8);
        if ( *(_BYTE *)(v83 + 4 * v89) & 1 )
        {
          v99 = v87;
          v100 = v161 + 2 * v89;
          v101 = *(_BYTE *)(v100 + 1);
          sub_6F832980(
            v1,
            (unsigned __int8)*(&byte_6FB88A80[*(_BYTE *)v100 + 31] + v82),
            (unsigned __int8)*(&byte_6FB88B00[*(_BYTE *)v100 + 31] + v82));
          sub_6F832980(
            v1,
            (unsigned __int8)*(&byte_6FB88A80[v101 + 31] + v82),
            (unsigned __int8)*(&byte_6FB88B00[v101 + 31] + v82));
          v87 = v99;
        }
        v90 = *(_DWORD *)(v87 + 12);
        if ( !(*(_BYTE *)(v83 + 4 * v90) & 1) )
          goto LABEL_322;
        v91 = v161 + 2 * v90;
        v92 = *(_BYTE *)(v91 + 1);
        sub_6F832980(
          v1,
          (unsigned __int8)*(&byte_6FB88A80[*(_BYTE *)v91 + 31] + v82),
          (unsigned __int8)*(&byte_6FB88B00[*(_BYTE *)v91 + 31] + v82));
        v93 = v92 + v82 + 31;
        goto LABEL_333;
      }
      if ( v86 == 2 )
        break;
LABEL_322:
      if ( ++v84 == v147 )
        goto LABEL_8;
    }
    v94 = (_DWORD *)(v170 + 48 * v85);
    v95 = *v94;
    for ( i = v94 + 1; !(*(_BYTE *)(v83 + 4 * v95) & 1); ++i )
      v95 = *i;
    v97 = v161 + 2 * v95;
    v98 = *(_BYTE *)(v97 + 1);
    sub_6F832980(
      v1,
      (unsigned __int8)*(&byte_6FB88A80[*(_BYTE *)v97 + 31] + v82),
      (unsigned __int8)*(&byte_6FB88B00[*(_BYTE *)v97 + 31] + v82));
    v93 = v98 + v82 + 31;
LABEL_333:
    sub_6F832980(v1, (unsigned __int8)byte_6FB88A80[v93], (unsigned __int8)byte_6FB88B00[v93]);
    goto LABEL_322;
  }
LABEL_8:
  v5 = v178;
  if ( *(_BYTE *)(v178 + 794) > 1u )
  {
    v149 = *(_DWORD *)(v178 + 268);
    if ( *(_DWORD *)(v178 + 268) > 0 )
    {
      v6 = *(_DWORD **)(v178 + 252);
      v134 = *(_DWORD *)(v178 + 204);
      v171 = (*(_BYTE *)(v134 + 4 * *v6) & 0xFC) != 0;
      v7 = 0;
      sub_6F832980(v1, v171, 1u);
      v163 = 0;
      do
      {
        v8 = v149;
        if ( v149 > v7 )
        {
          while ( 1 )
          {
            v174 = (*(_BYTE *)(v134 + 4 * v6[v7]) & 0xFC) != 0;
            if ( v174 != v171 )
              goto LABEL_149;
            v9 = 0;
            v10 = (*(_BYTE *)(v134 + 4 * v6[v7]) & 0xFC) == 0;
            v140 = (v8 + ~(_BYTE)v7) & 3;
            if ( !((v8 + ~(_BYTE)v7) & 3) )
              break;
            ++v7;
            v163 += v10;
            v9 = 1;
            if ( ((*(_BYTE *)(v134 + 4 * v6[v7]) & 0xFC) != 0) == v171 )
            {
              if ( v140 == 1 )
              {
                v179 = v1;
                v11 = v163;
                v141 = v10;
                v155 = v6;
                do
                {
LABEL_20:
                  v12 = v7 + 1;
                  v11 += v141;
                  v13 = v7 + 1 == v149;
                  ++v9;
                  ++v7;
                  v164 = v9;
                  if ( v13 )
                    break;
                  if ( ((*(_BYTE *)(v134 + 4 * v155[v12]) & 0xFC) != 0) != v174 )
                    break;
                  ++v7;
                  ++v9;
                  v11 += v141;
                  if ( ((*(_BYTE *)(v134 + 4 * v155[v7]) & 0xFC) != 0) != v174 )
                    break;
                  v11 += v141;
                  v9 = v164 + 2;
                  v7 = v12 + 2;
                  if ( ((*(_BYTE *)(v134 + 4 * v155[v12 + 2]) & 0xFC) != 0) != v174 )
                    break;
                  v7 = v12 + 3;
                  v11 += v141;
                  v9 = v164 + 3;
                }
                while ( ((*(_BYTE *)(v134 + 4 * v155[v12 + 3]) & 0xFC) != 0) == v174 );
                v1 = v179;
                v163 = v11;
                goto LABEL_26;
              }
              if ( v140 == 2
                || (++v7, v163 += v10, LOBYTE(v9) = 2, ((*(_BYTE *)(v134 + 4 * v6[v7]) & 0xFC) != 0) == v171) )
              {
                ++v7;
                ++v9;
                v163 += v10;
                if ( ((*(_BYTE *)(v134 + 4 * v6[v7]) & 0xFC) != 0) == v174 )
                  break;
              }
            }
LABEL_26:
            if ( v9 <= 4128
              || ((_BYTE)v9 - 33) & 7
              && ((v156 = ((_BYTE)v9 - 33) & 7,
                   sub_6F832980(v1, 0x3FFFF, 0x12u),
                   v9 -= 4129,
                   sub_6F832980(v1, v174, 1u),
                   v9 <= 4128)
               || v156 != 1
               && (v156 != 2
                && (v156 != 3
                 && (v156 != 4
                  && (v156 != 5
                   && (v156 != 6
                    && (v9 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v174, 1u), v9 <= 4128)
                    || (v9 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v174, 1u), v9 <= 4128))
                   || (v9 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v174, 1u), v9 <= 4128))
                  || (v9 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v174, 1u), v9 <= 4128))
                 || (v9 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v174, 1u), v9 <= 4128))
                || (v9 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v174, 1u), v9 <= 4128))) )
            {
LABEL_53:
              v15 = v9;
              if ( v9 <= 1 )
                goto LABEL_150;
              if ( v9 <= 3 )
              {
                v16 = 1;
              }
              else if ( v9 <= 5 )
              {
                v16 = 2;
              }
              else if ( v9 <= 9 )
              {
                v16 = 3;
              }
              else if ( v9 <= 17 )
              {
                v16 = 4;
              }
              else
              {
                v16 = (v9 > 33) + 5;
              }
              goto LABEL_59;
            }
            v142 = v7;
            v14 = v9;
            while ( 1 )
            {
              v9 = v14 - 4129;
              sub_6F832980(v1, 0x3FFFF, 0x12u);
              if ( v14 == 4129 )
                break;
              sub_6F832980(v1, v174, 1u);
              if ( v9 <= 4128 )
                goto LABEL_52;
              v14 -= 8258;
              sub_6F832980(v1, 0x3FFFF, 0x12u);
              sub_6F832980(v1, v174, 1u);
              if ( v9 - 4129 > 4128 )
              {
                v14 = v9 - 8258;
                sub_6F832980(v1, 0x3FFFF, 0x12u);
                sub_6F832980(v1, v174, 1u);
                if ( v9 - 8258 > 4128 )
                {
                  v14 = v9 - 12387;
                  sub_6F832980(v1, 0x3FFFF, 0x12u);
                  sub_6F832980(v1, v174, 1u);
                  if ( v9 - 12387 > 4128 )
                  {
                    v14 = v9 - 16516;
                    sub_6F832980(v1, 0x3FFFF, 0x12u);
                    sub_6F832980(v1, v174, 1u);
                    if ( v9 - 16516 > 4128 )
                    {
                      v14 = v9 - 20645;
                      sub_6F832980(v1, 0x3FFFF, 0x12u);
                      sub_6F832980(v1, v174, 1u);
                      if ( v9 - 20645 > 4128 )
                      {
                        v14 = v9 - 24774;
                        sub_6F832980(v1, 0x3FFFF, 0x12u);
                        sub_6F832980(v1, v174, 1u);
                        if ( v9 - 24774 > 4128 )
                        {
                          v14 = v9 - 28903;
                          sub_6F832980(v1, 0x3FFFF, 0x12u);
                          sub_6F832980(v1, v174, 1u);
                          if ( v9 - 28903 > 4128 )
                            continue;
                        }
                      }
                    }
                  }
                }
              }
              v9 = v14;
LABEL_52:
              v7 = v142;
              goto LABEL_53;
            }
            v7 = v142;
            if ( v149 > v142 )
              sub_6F832980(v1, !v174, 1u);
            v171 = !v174;
            if ( v142 >= v149 )
              goto LABEL_60;
            v8 = v149;
            if ( v149 <= v142 )
              goto LABEL_149;
          }
          v179 = v1;
          v11 = v163;
          v141 = v10;
          v155 = v6;
          goto LABEL_20;
        }
LABEL_149:
        v15 = 0;
LABEL_150:
        v16 = 0;
LABEL_59:
        sub_6F832980(
          v1,
          dword_6FB88A24[v16] + v15 - (unsigned __int16)word_6FB88A40[v16],
          (unsigned __int8)byte_6FB88A1A[v16]);
        v171 ^= 1u;
      }
      while ( v7 < v149 );
LABEL_60:
      v5 = v163;
      if ( v149 > v163 && *(_BYTE *)(v178 + 794) > 2u )
      {
        v17 = *(_BYTE *)(v134 + 4 * *v6);
        if ( v17 & 0xFC )
        {
          v5 = 0;
          v143 = (v17 >> 2) - 1;
          sub_6F832980(v1, v143, 1u);
LABEL_66:
          if ( v149 > v5 )
            goto LABEL_69;
          v19 = 0;
LABEL_68:
          v20 = 0;
LABEL_140:
          sub_6F832980(
            v1,
            dword_6FB88A24[v20] + v19 - (unsigned __int16)word_6FB88A40[v20],
            (unsigned __int8)byte_6FB88A1A[v20]);
          v35 = v143 == 0;
          while ( 1 )
          {
            v143 = v35;
            if ( v149 <= v5 )
              goto LABEL_142;
LABEL_69:
            v21 = 0;
            v22 = ((_BYTE)v149 + ~(_BYTE)v5) & 7;
            v23 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
            if ( v23 )
            {
              if ( v23 - 1 != v143 )
                goto LABEL_134;
              v21 = 1;
            }
            if ( ++v5 != v149 )
            {
              if ( !v22 )
                goto LABEL_108;
              if ( v22 != 1 )
              {
                if ( v22 != 2 )
                {
                  if ( v22 != 3 )
                  {
                    if ( v22 != 4 )
                    {
                      if ( v22 != 5 )
                      {
                        if ( v22 != 6 )
                        {
                          v24 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
                          if ( v24 )
                          {
                            if ( v24 - 1 != v143 )
                              goto LABEL_133;
                            ++v21;
                          }
                          ++v5;
                        }
                        v25 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
                        if ( v25 )
                        {
                          if ( v25 - 1 != v143 )
                            goto LABEL_133;
                          ++v21;
                        }
                        ++v5;
                      }
                      v26 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
                      if ( v26 )
                      {
                        if ( v26 - 1 != v143 )
                          goto LABEL_133;
                        ++v21;
                      }
                      ++v5;
                    }
                    v27 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
                    if ( v27 )
                    {
                      if ( v27 - 1 != v143 )
                        goto LABEL_133;
                      ++v21;
                    }
                    ++v5;
                  }
                  v28 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
                  if ( v28 )
                  {
                    if ( v28 - 1 != v143 )
                      goto LABEL_133;
                    ++v21;
                  }
                  ++v5;
                }
                v29 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
                if ( v29 )
                {
                  if ( v29 - 1 != v143 )
                    goto LABEL_133;
                  ++v21;
                }
                ++v5;
              }
              v30 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
              if ( v30 )
              {
                if ( v30 - 1 != v143 )
                  goto LABEL_133;
                ++v21;
              }
              if ( ++v5 != v149 )
              {
                do
                {
LABEL_108:
                  v31 = *(_BYTE *)(v134 + 4 * v6[v5]) >> 2;
                  if ( v31 )
                  {
                    if ( v31 - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v32 = v5 + 1;
                  v33 = v6[v5++ + 1];
                  v34 = (unsigned __int8)(*(_BYTE *)(v134 + 4 * v33) >> 2);
                  if ( v34 )
                  {
                    if ( v34 - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v5 = v32 + 1;
                  if ( *(_BYTE *)(v134 + 4 * v6[v32 + 1]) >> 2 )
                  {
                    if ( (unsigned __int8)(*(_BYTE *)(v134 + 4 * v6[v32 + 1]) >> 2) - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v5 = v32 + 2;
                  if ( *(_BYTE *)(v134 + 4 * v6[v32 + 2]) >> 2 )
                  {
                    if ( (unsigned __int8)(*(_BYTE *)(v134 + 4 * v6[v32 + 2]) >> 2) - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v5 = v32 + 3;
                  if ( *(_BYTE *)(v134 + 4 * v6[v32 + 3]) >> 2 )
                  {
                    if ( (unsigned __int8)(*(_BYTE *)(v134 + 4 * v6[v32 + 3]) >> 2) - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v5 = v32 + 4;
                  if ( *(_BYTE *)(v134 + 4 * v6[v32 + 4]) >> 2 )
                  {
                    if ( (unsigned __int8)(*(_BYTE *)(v134 + 4 * v6[v32 + 4]) >> 2) - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v5 = v32 + 5;
                  if ( *(_BYTE *)(v134 + 4 * v6[v32 + 5]) >> 2 )
                  {
                    if ( (unsigned __int8)(*(_BYTE *)(v134 + 4 * v6[v32 + 5]) >> 2) - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v5 = v32 + 6;
                  if ( *(_BYTE *)(v134 + 4 * v6[v32 + 6]) >> 2 )
                  {
                    if ( (unsigned __int8)(*(_BYTE *)(v134 + 4 * v6[v32 + 6]) >> 2) - 1 != v143 )
                      break;
                    ++v21;
                  }
                  v5 = v32 + 7;
                }
                while ( v32 + 7 != v149 );
              }
            }
LABEL_133:
            if ( v21 <= 4128
              || ((_BYTE)v21 - 33) & 7
              && ((v165 = ((_BYTE)v21 - 33) & 7,
                   sub_6F832980(v1, 0x3FFFF, 0x12u),
                   v21 -= 4129,
                   sub_6F832980(v1, v143, 1u),
                   v21 <= 4128)
               || v165 != 1
               && (v165 != 2
                && (v165 != 3
                 && (v165 != 4
                  && (v165 != 5
                   && (v165 != 6
                    && (v21 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v143, 1u), v21 <= 4128)
                    || (v21 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v143, 1u), v21 <= 4128))
                   || (v21 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v143, 1u), v21 <= 4128))
                  || (v21 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v143, 1u), v21 <= 4128))
                 || (v21 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v143, 1u), v21 <= 4128))
                || (v21 -= 4129, sub_6F832980(v1, 0x3FFFF, 0x12u), sub_6F832980(v1, v143, 1u), v21 <= 4128))) )
            {
LABEL_134:
              v19 = v21;
              if ( v21 <= 1 )
                goto LABEL_68;
              if ( v21 <= 3 )
              {
                v20 = 1;
              }
              else if ( v21 <= 5 )
              {
                v20 = 2;
              }
              else if ( v21 <= 9 )
              {
                v20 = 3;
              }
              else if ( v21 <= 17 )
              {
                v20 = 4;
              }
              else
              {
                v20 = (v21 > 33) + 5;
              }
              goto LABEL_140;
            }
            v157 = v6;
            v36 = v21;
            while ( 1 )
            {
              v21 = v36 - 4129;
              sub_6F832980(v1, 0x3FFFF, 0x12u);
              if ( v36 == 4129 )
                break;
              sub_6F832980(v1, v143, 1u);
              if ( v21 <= 4128 )
                goto LABEL_181;
              v36 -= 8258;
              sub_6F832980(v1, 0x3FFFF, 0x12u);
              sub_6F832980(v1, v143, 1u);
              if ( v21 - 4129 > 4128 )
              {
                v36 = v21 - 8258;
                sub_6F832980(v1, 0x3FFFF, 0x12u);
                sub_6F832980(v1, v143, 1u);
                if ( v21 - 8258 > 4128 )
                {
                  v36 = v21 - 12387;
                  sub_6F832980(v1, 0x3FFFF, 0x12u);
                  sub_6F832980(v1, v143, 1u);
                  if ( v21 - 12387 > 4128 )
                  {
                    v36 = v21 - 16516;
                    sub_6F832980(v1, 0x3FFFF, 0x12u);
                    sub_6F832980(v1, v143, 1u);
                    if ( v21 - 16516 > 4128 )
                    {
                      v36 = v21 - 20645;
                      sub_6F832980(v1, 0x3FFFF, 0x12u);
                      sub_6F832980(v1, v143, 1u);
                      if ( v21 - 20645 > 4128 )
                      {
                        v36 = v21 - 24774;
                        sub_6F832980(v1, 0x3FFFF, 0x12u);
                        sub_6F832980(v1, v143, 1u);
                        if ( v21 - 24774 > 4128 )
                        {
                          v36 = v21 - 28903;
                          sub_6F832980(v1, 0x3FFFF, 0x12u);
                          sub_6F832980(v1, v143, 1u);
                          if ( v21 - 28903 > 4128 )
                            continue;
                        }
                      }
                    }
                  }
                }
              }
              v21 = v36;
LABEL_181:
              v6 = v157;
              goto LABEL_134;
            }
            v6 = v157;
            v35 = v143 == 0;
            if ( v149 > v5 )
              sub_6F832980(v1, v143 == 0, 1u);
          }
        }
        v5 = 0;
        do
          v18 = *(_BYTE *)(v134 + 4 * v6[++v5]);
        while ( !(v18 & 0xFC) );
        v143 = (v18 >> 2) - 1;
        sub_6F832980(v1, v143, 1u);
        if ( v149 > v5 )
          goto LABEL_66;
      }
    }
  }
LABEL_142:
  sub_6F814080(v178, v178);
  result = sub_6F801CF0(v178, (void *)v5);
LABEL_143:
  *(_DWORD *)(v178 + 51588) = 1;
  return result;
}
