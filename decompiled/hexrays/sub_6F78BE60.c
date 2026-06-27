int __usercall sub_6F78BE60@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // edi@1
  int v3; // ebp@1
  int result; // eax@2
  signed int v5; // eax@6
  char *v6; // eax@7
  int v7; // esi@7
  int v8; // ebx@7
  unsigned int v9; // eax@8
  unsigned int v10; // esi@9
  int v11; // esi@12
  int v12; // eax@13
  int v13; // ecx@15
  int v14; // ebx@15
  int v15; // edx@16
  int v16; // eax@16
  signed int v17; // eax@20
  char *v18; // ecx@22
  char *v19; // esi@22
  int v20; // ST28_4@23
  unsigned int v21; // ecx@24
  int v22; // ebx@24
  int v23; // esi@25
  int v24; // eax@25
  int v25; // edx@25
  int v26; // edx@32
  int v27; // eax@32
  unsigned int v28; // edx@35
  unsigned int v29; // eax@35
  unsigned int v30; // esi@37
  int v31; // ebx@37
  unsigned int v32; // ecx@44
  char *v33; // eax@47
  int v34; // esi@47
  signed int v35; // eax@51
  unsigned int v36; // edx@54
  unsigned int v37; // eax@54
  unsigned int v38; // eax@58
  int v39; // eax@58
  char *v40; // ecx@68
  int v41; // esi@69
  int v42; // ebp@69
  int v43; // ebp@75
  int v44; // edx@81
  char *v45; // eax@93
  int v46; // edx@94
  int v47; // esi@94
  _DWORD *v48; // ebx@94
  size_t *v49; // edi@94
  char *v50; // ebp@94
  void *v51; // eax@97
  size_t v52; // eax@100
  void *v53; // eax@102
  size_t v54; // eax@103
  int v55; // ebx@106
  int v56; // edi@106
  int v57; // eax@108
  signed int v58; // esi@108
  int v59; // ebp@108
  unsigned int v60; // ecx@111
  int v61; // ebx@112
  int v62; // esi@112
  int v63; // edx@112
  int v64; // ST40_4@112
  int v65; // esi@112
  int v66; // ebx@112
  unsigned int v67; // ebx@112
  unsigned int v68; // ecx@113
  int v69; // eax@116
  unsigned int v70; // edx@116
  unsigned int v71; // ecx@117
  unsigned int v72; // ecx@121
  unsigned int v73; // edx@122
  int v74; // eax@125
  int v75; // ecx@126
  int v76; // ebx@126
  int v77; // edx@127
  int v78; // eax@127
  unsigned int v79; // edx@130
  unsigned int v80; // eax@130
  unsigned int v81; // eax@132
  signed int v82; // ebx@134
  int v83; // esi@137
  char *v84; // ebx@137
  signed int v85; // esi@146
  int i; // eax@151
  unsigned int v87; // edx@152
  int v88; // ebx@159
  int v89; // ecx@159
  int v90; // edx@160
  int v91; // eax@160
  unsigned int v92; // edx@163
  unsigned int v93; // eax@163
  int v94; // ebx@166
  signed int v95; // esi@167
  char *v96; // ebx@175
  signed int j; // ebp@179
  int v98; // eax@182
  signed int v99; // ecx@184
  int v100; // edx@184
  int v101; // eax@194
  int v102; // edx@194
  int v103; // eax@196
  int v104; // ebx@196
  _BYTE **v105; // eax@196
  bool v106; // cf@197
  bool v107; // zf@197
  int v108; // edx@197
  _BYTE *v109; // esi@199
  signed int v110; // ecx@199
  const char *v111; // edi@199
  char v112; // cl@202
  int v113; // eax@205
  char v114; // dl@207
  _BYTE **v115; // eax@209
  bool v116; // cf@209
  bool v117; // zf@209
  int v118; // edx@209
  _BYTE *v119; // esi@211
  signed int v120; // ecx@211
  const char *v121; // edi@211
  char v122; // cl@214
  int v123; // eax@217
  _BYTE **v124; // eax@221
  bool v125; // cf@221
  bool v126; // zf@221
  int v127; // edx@221
  _BYTE *v128; // esi@223
  signed int v129; // ecx@223
  const char *v130; // edi@223
  char v131; // cl@226
  int v132; // eax@229
  _BYTE *v133; // edx@231
  _BYTE **v134; // eax@234
  bool v135; // cf@234
  bool v136; // zf@234
  int v137; // edx@234
  _BYTE *v138; // esi@236
  signed int v139; // ecx@236
  const char *v140; // edi@236
  char v141; // cl@239
  int v142; // eax@241
  _BYTE *v143; // edx@243
  size_t v144; // eax@247
  signed int v145; // ebx@247
  size_t v146; // eax@249
  size_t v147; // eax@251
  size_t v148; // eax@253
  _BYTE *v149; // eax@256
  int v150; // edx@256
  int v151; // ebx@257
  const char *v152; // edx@258
  size_t v153; // edi@258
  char *v154; // esi@260
  const char **v155; // eax@267
  int v156; // eax@270
  char *v157; // ebx@270
  int v158; // eax@271
  int v159; // edi@271
  const char **v160; // esi@271
  const char **v161; // eax@271
  int v162; // eax@272
  const char **v163; // eax@273
  const char **v164; // eax@275
  const char **v165; // eax@277
  const char **v166; // eax@279
  int v167; // eax@281
  int v168; // eax@285
  const char **v169; // ebx@286
  const char **v170; // eax@286
  char *v171; // eax@293
  const char *v172; // eax@301
  void *v173; // eax@307
  void *v174; // eax@315
  int v175; // [sp+24h] [bp-78h]@1
  int v176; // [sp+28h] [bp-74h]@30
  unsigned int v177; // [sp+28h] [bp-74h]@58
  char *v178; // [sp+28h] [bp-74h]@92
  char *v179; // [sp+28h] [bp-74h]@94
  unsigned int v180; // [sp+28h] [bp-74h]@111
  int v181; // [sp+28h] [bp-74h]@116
  unsigned int v182; // [sp+28h] [bp-74h]@132
  unsigned int v183; // [sp+28h] [bp-74h]@167
  __int16 v184; // [sp+28h] [bp-74h]@271
  const char *v185; // [sp+28h] [bp-74h]@280
  char v186; // [sp+2Ch] [bp-70h]@31
  unsigned int v187; // [sp+2Ch] [bp-70h]@61
  int v188; // [sp+2Ch] [bp-70h]@106
  _BYTE **v189; // [sp+2Ch] [bp-70h]@196
  signed int *v190; // [sp+2Ch] [bp-70h]@269
  unsigned int v191; // [sp+30h] [bp-6Ch]@41
  int v192; // [sp+30h] [bp-6Ch]@60
  size_t v193; // [sp+30h] [bp-6Ch]@85
  int v194; // [sp+30h] [bp-6Ch]@106
  int v195; // [sp+30h] [bp-6Ch]@131
  signed int v196; // [sp+30h] [bp-6Ch]@167
  int v197; // [sp+30h] [bp-6Ch]@196
  __int16 v198; // [sp+30h] [bp-6Ch]@278
  int v199; // [sp+34h] [bp-68h]@48
  int v200; // [sp+34h] [bp-68h]@94
  int v201; // [sp+34h] [bp-68h]@108
  int v202; // [sp+34h] [bp-68h]@133
  signed int v203; // [sp+34h] [bp-68h]@167
  char *v204; // [sp+38h] [bp-64h]@69
  int v205; // [sp+38h] [bp-64h]@94
  _DWORD *v206; // [sp+38h] [bp-64h]@111
  signed int v207; // [sp+38h] [bp-64h]@177
  int v208; // [sp+3Ch] [bp-60h]@69
  int v209; // [sp+3Ch] [bp-60h]@94
  int v210; // [sp+3Ch] [bp-60h]@106
  int v211; // [sp+3Ch] [bp-60h]@136
  int v212; // [sp+3Ch] [bp-60h]@164
  int v213; // [sp+40h] [bp-5Ch]@175
  signed int v214; // [sp+44h] [bp-58h]@177
  int v215; // [sp+48h] [bp-54h]@166
  int v216; // [sp+4Ch] [bp-50h]@177
  int v217; // [sp+58h] [bp-44h]@13
  int v218; // [sp+5Ch] [bp-40h]@196
  const char *v219; // [sp+60h] [bp-3Ch]@196
  const char *v220; // [sp+64h] [bp-38h]@196
  const char *v221; // [sp+68h] [bp-34h]@196
  const char *v222; // [sp+6Ch] [bp-30h]@196
  int v223; // [sp+70h] [bp-2Ch]@4
  size_t v224; // [sp+74h] [bp-28h]@248
  size_t v225; // [sp+78h] [bp-24h]@250
  size_t v226; // [sp+7Ch] [bp-20h]@252

  v2 = a1;
  v3 = a2;
  v175 = *(_DWORD *)(a2 + 100);
  if ( sub_6F771FF0(a1, 0) )
    return 3;
  v223 = sub_6F7728E0(v2, (int)&unk_6FB58418, v3 + 184);
  if ( v223 )
    return 3;
  if ( *(_DWORD *)(v3 + 184) != 1885562369 )
    return 3;
  v5 = *(_DWORD *)(v3 + 188);
  if ( (unsigned int)(v5 - 1) > 0x7FFFFFE )
    return 3;
  v6 = sub_6F773B30(v175, 16, 0, v5, 0, &v223);
  v7 = v223;
  v8 = (int)v6;
  *(_DWORD *)(v3 + 192) = v6;
  if ( v7 )
    return 3;
  v9 = *(_DWORD *)(v3 + 188);
  if ( v9 )
  {
    v10 = 0;
    while ( 1 )
    {
      v223 = sub_6F7728E0(v2, (int)&unk_6FB58400, v8);
      if ( v223 )
        break;
      v9 = *(_DWORD *)(v3 + 188);
      ++v10;
      v8 += 16;
      if ( v10 >= v9 )
        goto LABEL_106;
    }
    v11 = *(_DWORD *)(v3 + 192);
LABEL_13:
    sub_6F773D90(v175, v11);
    v12 = v223;
    *(_DWORD *)(v3 + 192) = 0;
    v217 = v12;
    if ( v12 )
      return 3;
    v11 = 0;
  }
  else
  {
LABEL_106:
    v188 = v2;
    v210 = v9 - 1;
    v55 = v9 - 1;
    v194 = v3;
    v56 = *(_DWORD *)(v3 + 192);
    do
    {
      if ( !v55 )
        break;
      v57 = v56 + 12;
      v58 = 0;
      v59 = 0;
      v201 = v55;
      do
      {
        v60 = *(_DWORD *)v57;
        ++v59;
        v206 = (_DWORD *)v57;
        v180 = *(_DWORD *)(v57 + 16);
        if ( *(_DWORD *)v57 > *(_DWORD *)(v57 + 16) )
        {
          v61 = *(_DWORD *)(v57 + 4);
          v62 = *(_DWORD *)(v57 - 12);
          v63 = *(_DWORD *)(v57 - 4);
          *(_DWORD *)(v57 + 16) = v60;
          *(_DWORD *)(v57 - 12) = v61;
          v64 = v62;
          v65 = *(_DWORD *)(v57 - 8);
          *(_DWORD *)(v57 - 8) = *(_DWORD *)(v57 + 8);
          v66 = *(_DWORD *)(v57 + 12);
          *(_DWORD *)(v57 + 8) = v65;
          *(_DWORD *)(v57 + 12) = v63;
          v58 = 1;
          *(_DWORD *)(v57 - 4) = v66;
          v67 = v180;
          v180 = v60;
          *(_DWORD *)v57 = v67;
          *(_DWORD *)(v57 + 4) = v64;
        }
        v68 = *(_DWORD *)(v57 - 4);
        if ( v68 <= v180 )
        {
          v57 += 16;
          if ( *v206 <= v180 - v68 )
            continue;
        }
        v11 = v56;
        v3 = v194;
        v2 = v188;
        v223 = 9;
        goto LABEL_13;
      }
      while ( v59 != v201 );
      v55 = v201 - 1;
    }
    while ( v58 );
    v11 = v56;
    v2 = v188;
    v3 = v194;
    v69 = v11;
    v181 = 0;
    v70 = *(_DWORD *)(v188 + 4);
    while ( v210 != v181 )
    {
      v71 = *(_DWORD *)(v69 + 8);
      if ( v70 < v71 || *(_DWORD *)(v69 + 12) > v70 - v71 )
        goto LABEL_186;
      ++v181;
      v69 += 16;
    }
    v72 = *(_DWORD *)(v69 + 12);
    if ( v70 < v72 )
    {
LABEL_186:
      v223 = 8;
      goto LABEL_13;
    }
    v73 = v70 - v72;
    if ( *(_DWORD *)(v69 + 8) > v73 )
      *(_DWORD *)(v69 + 8) = v73;
    v217 = 0;
  }
  v13 = *(_DWORD *)(v3 + 188);
  v14 = *(_DWORD *)(v3 + 100);
  if ( !v13 )
    goto LABEL_20;
  v15 = 0;
  v16 = v11 + 16;
  if ( *(_DWORD *)v11 != 1 )
  {
    while ( v13 != ++v15 )
    {
      v11 = v16;
      v16 += 16;
      if ( *(_DWORD *)(v16 - 16) == 1 )
        goto LABEL_54;
    }
LABEL_20:
    v17 = 3;
LABEL_21:
    v223 = v17;
LABEL_22:
    v18 = 0;
    v19 = 0;
    goto LABEL_23;
  }
LABEL_54:
  v36 = *(_DWORD *)(v2 + 8);
  v37 = *(_DWORD *)(v11 + 12);
  if ( v36 > v37 || sub_6F772040(v2, v37 - v36) )
  {
    v17 = 83;
    goto LABEL_21;
  }
  v38 = *(_DWORD *)(v11 + 8);
  v223 = 0;
  v177 = v38;
  v39 = sub_6F772860(v2, &v223);
  if ( v223 || v39 & 0xFFFFFF00 )
    goto LABEL_22;
  v192 = v39 & 4;
  v187 = v39 & 4 ? sub_6F7727E0(v2, &v223) : sub_6F772860(v2, &v223);
  if ( v223 )
    goto LABEL_22;
  if ( v177 / 9 >= v187 )
  {
    *(_DWORD *)(v3 + 280) = v187;
    v19 = sub_6F773B30(v14, 12, 0, v187, 0, &v223);
    v18 = 0;
    if ( !v223 )
    {
      if ( v187 )
      {
        v40 = v19;
        if ( v192 )
        {
          v208 = v3;
          v43 = 0;
          v204 = v19;
          while ( 1 )
          {
            v223 = sub_6F7728E0(v2, (int)&unk_6FB58374, (int)v19);
            if ( v223 )
              break;
            ++v43;
            v19 += 12;
            if ( v187 == v43 )
            {
              v19 = v204;
              v3 = v208;
              v44 = v187 & 3;
              if ( !(v187 & 3) )
                goto LABEL_85;
LABEL_82:
              if ( !sub_6F772040(v2, 4 - v44) )
              {
                v223 = 0;
                goto LABEL_84;
              }
              v223 = 83;
              v18 = 0;
              goto LABEL_23;
            }
          }
        }
        else
        {
          v204 = v19;
          v208 = v3;
          v41 = 0;
          v42 = (int)v40;
          while ( 1 )
          {
            v223 = sub_6F7728E0(v2, (int)&unk_6FB58388, v42);
            if ( v223 )
              break;
            ++v41;
            v42 += 12;
            if ( v41 == v187 )
            {
              v19 = v204;
              v3 = v208;
              v44 = v187 & 3;
              if ( v187 & 3 )
                goto LABEL_82;
              goto LABEL_90;
            }
          }
        }
        v19 = v204;
        v18 = 0;
        v3 = v208;
      }
      else
      {
LABEL_84:
        if ( v192 )
LABEL_85:
          v193 = sub_6F7727E0(v2, &v223);
        else
LABEL_90:
          v193 = sub_6F772860(v2, &v223);
        v18 = 0;
        if ( !v223 )
        {
          if ( v177 - 9 * v187 >= v193 )
          {
            v18 = sub_6F773B30(v14, 1, 0, v193 + 1, 0, &v223);
            if ( !v223 )
            {
              v178 = v18;
              v223 = sub_6F7720B0(v2, v18, v193);
              v18 = v178;
              if ( !v223 )
              {
                v45 = sub_6F773B30(v14, 12, 0, v187, 0, &v223);
                v18 = v178;
                if ( !v223 )
                {
                  v46 = (int)(v19 + 8);
                  *(_DWORD *)(v3 + 284) = v45;
                  v179 = v19;
                  v200 = v2;
                  v47 = v14;
                  v205 = v3;
                  v209 = 0;
                  v48 = (_DWORD *)v46;
                  v49 = (size_t *)(v45 + 8);
                  v50 = v18;
                  while ( 1 )
                  {
                    if ( v187 == v209 )
                    {
                      v14 = v47;
                      v18 = v50;
                      v19 = v179;
                      v2 = v200;
                      v3 = v205;
                      v223 = 0;
                      goto LABEL_23;
                    }
                    v52 = *(v48 - 2);
                    if ( (v52 & 0x80000000) != 0 || v193 < v52 )
                    {
LABEL_318:
                      v14 = v47;
                      v18 = v50;
                      v19 = v179;
                      v2 = v200;
                      v3 = v205;
                      v223 = 9;
                      goto LABEL_23;
                    }
                    v53 = sub_6F773E40(v47, &v50[v52], &v223);
                    v107 = v223 == 0;
                    *(v49 - 2) = (size_t)v53;
                    if ( !v107 )
                      break;
                    *((_BYTE *)v49 - 4) = *((_BYTE *)v48 - 4);
                    v54 = *v48;
                    if ( *((_BYTE *)v48 - 4) )
                    {
                      if ( (v54 & 0x80000000) != 0 || v193 < v54 )
                        goto LABEL_318;
                      v51 = sub_6F773E40(v47, &v50[v54], &v223);
                      v107 = v223 == 0;
                      *v49 = (size_t)v51;
                      if ( !v107 )
                        break;
                    }
                    else
                    {
                      *v49 = v54;
                    }
                    ++v209;
                    v49 += 3;
                    v48 += 3;
                  }
                  v14 = v47;
                  v18 = v50;
                  v19 = v179;
                  v2 = v200;
                  v3 = v205;
                }
              }
            }
          }
          else
          {
            v223 = 8;
          }
        }
      }
    }
  }
  else
  {
    v223 = 8;
    v18 = 0;
    v19 = 0;
  }
LABEL_23:
  v20 = (int)v18;
  sub_6F773D90(v14, (int)v19);
  sub_6F773D90(v14, v20);
  v217 = v223;
  if ( v223 )
    return 3;
  v21 = *(_DWORD *)(v3 + 188);
  v22 = *(_DWORD *)(v3 + 192);
  if ( !v21 )
    goto LABEL_29;
  v23 = *(_DWORD *)v22;
  v24 = 0;
  v25 = v22 + 16;
  if ( *(_DWORD *)v22 != 256 )
  {
    while ( v21 != ++v24 )
    {
      v25 += 16;
      if ( *(_DWORD *)(v25 - 16) == 256 )
        goto LABEL_56;
    }
LABEL_29:
    v217 = sub_6F78BC30(v2, v3, 2);
    if ( v217 )
      return 3;
    v21 = *(_DWORD *)(v3 + 188);
    v22 = *(_DWORD *)(v3 + 192);
    v176 = *(_DWORD *)(v3 + 100);
    if ( !v21 )
      return 3;
    v23 = *(_DWORD *)v22;
    v186 = 0;
    goto LABEL_32;
  }
LABEL_56:
  v186 = 1;
  v176 = *(_DWORD *)(v3 + 100);
LABEL_32:
  v26 = 0;
  v27 = v22 + 16;
  if ( v23 != 4 )
  {
    while ( v21 > ++v26 )
    {
      v22 = v27;
      v27 += 16;
      if ( *(_DWORD *)(v27 - 16) == 4 )
        goto LABEL_35;
    }
    return 3;
  }
LABEL_35:
  v28 = *(_DWORD *)(v2 + 8);
  v29 = *(_DWORD *)(v22 + 12);
  if ( v28 > v29 )
    return 3;
  if ( sub_6F772040(v2, v29 - v28) )
    return 3;
  v30 = *(_DWORD *)(v22 + 8);
  v223 = 0;
  v31 = sub_6F772860(v2, &v223);
  if ( v223 || v31 & 0xFFFFFE00 )
    return 3;
  if ( v31 & 0xFFFFFF00 )
    v191 = v31 & 4 ? (unsigned __int16)sub_6F772620(v2, &v223) : (unsigned __int16)sub_6F7726B0(v2, &v223);
  else
    v191 = v31 & 4 ? sub_6F7727E0(v2, &v223) : sub_6F772860(v2, &v223);
  if ( v223 )
    return 3;
  *(_DWORD *)(v3 + 288) = v191;
  if ( !v191 )
    return 3;
  v32 = 12;
  if ( v31 & 0xFFFFFF00 )
    v32 = 5;
  if ( v191 > v30 / v32 )
    return 3;
  v33 = sub_6F773B30(v176, 16, 0, v191, 0, &v223);
  v107 = v223 == 0;
  v34 = (int)v33;
  *(_DWORD *)(v3 + 292) = v33;
  if ( !v107 )
    return 3;
  v199 = 0;
  while ( 1 )
  {
    v35 = sub_6F78BA10(v2, v31, v34);
    v223 = v35;
    *(_DWORD *)(v34 + 12) = 0;
    if ( v35 )
      break;
    if ( *(_WORD *)(v34 + 2) < *(_WORD *)v34 || *(_WORD *)(v34 + 8) + (signed int)*(_WORD *)(v34 + 6) < 0 )
    {
      *(_WORD *)(v34 + 4) = 0;
      *(_WORD *)v34 = 0;
      *(_WORD *)(v34 + 2) = 0;
      *(_WORD *)(v34 + 6) = 0;
      *(_WORD *)(v34 + 8) = 0;
    }
    ++v199;
    v34 += 16;
    if ( v191 == v199 )
    {
      v217 = v223;
      goto LABEL_126;
    }
  }
  sub_6F773D90(v176, *(_DWORD *)(v3 + 292));
  v74 = v223;
  *(_DWORD *)(v3 + 292) = 0;
  v217 = v74;
  if ( v74 )
    return 3;
LABEL_126:
  v75 = *(_DWORD *)(v3 + 188);
  v76 = *(_DWORD *)(v3 + 192);
  if ( !v75 )
    return 3;
  v77 = 0;
  v78 = v76 + 16;
  if ( *(_DWORD *)v76 != 8 )
  {
    while ( v75 != ++v77 )
    {
      v76 = v78;
      v78 += 16;
      if ( *(_DWORD *)(v78 - 16) == 8 )
        goto LABEL_130;
    }
    return 3;
  }
LABEL_130:
  v79 = *(_DWORD *)(v2 + 8);
  v80 = *(_DWORD *)(v76 + 12);
  if ( v79 > v80 )
    return 3;
  v195 = *(_DWORD *)(v3 + 100);
  if ( sub_6F772040(v2, v80 - v79) )
    return 3;
  v81 = *(_DWORD *)(v76 + 8);
  v223 = 0;
  v182 = v81;
  v223 = sub_6F772380(v2, 8u);
  if ( v223 )
    return 3;
  v202 = sub_6F772580(v2);
  v82 = v202 & 4 ? sub_6F772560(v2) : sub_6F772580(v2);
  sub_6F772460(v2);
  if ( v202 & 0xFFFFFF00 )
    return 3;
  v211 = *(_DWORD *)(v3 + 288);
  if ( *(_DWORD *)(v3 + 288) != v82 )
    return 3;
  v83 = 0;
  v84 = sub_6F773B30(v195, 4, 0, v82, 0, &v223);
  if ( v223 )
    return 3;
  while ( v211 != v83 )
  {
    if ( v202 & 4 )
      *(_DWORD *)&v84[4 * v83] = sub_6F7727E0(v2, &v223);
    else
      *(_DWORD *)&v84[4 * v83] = sub_6F772860(v2, &v223);
    ++v83;
  }
  if ( !v223 )
  {
    v85 = 4;
    while ( 1 )
    {
      if ( v202 & 4 )
        sub_6F7727E0(v2, &v223);
      else
        sub_6F772860(v2, &v223);
      if ( v223 )
        break;
      if ( !--v85 )
      {
        for ( i = 0; v211 != i; ++i )
        {
          v87 = *(_DWORD *)&v84[4 * i];
          if ( (v87 & 0x80000000) == 0 && v87 <= v182 )
            *(_DWORD *)(*(_DWORD *)(v3 + 292) + 16 * i + 12) = *(_DWORD *)(v2 + 8) + v87;
        }
        *(_DWORD *)(v3 + 308) = v202;
        break;
      }
    }
  }
  sub_6F773D90(v195, (int)v84);
  v217 = v223;
  if ( v223 )
    return 3;
  v88 = *(_DWORD *)(v3 + 188);
  v89 = *(_DWORD *)(v3 + 192);
  if ( !v88 )
    return 3;
  v90 = 0;
  v91 = v89 + 16;
  if ( *(_DWORD *)v89 != 32 )
  {
    while ( v88 != ++v90 )
    {
      v89 = v91;
      v91 += 16;
      if ( *(_DWORD *)(v91 - 16) == 32 )
        goto LABEL_163;
    }
    return 3;
  }
LABEL_163:
  v92 = *(_DWORD *)(v2 + 8);
  v93 = *(_DWORD *)(v89 + 12);
  if ( v92 > v93 )
    return 3;
  v212 = *(_DWORD *)(v3 + 100);
  if ( sub_6F772040(v2, v93 - v92) )
    return 3;
  v223 = 0;
  v223 = sub_6F772380(v2, 0xEu);
  if ( v223 )
    return 3;
  v94 = sub_6F772580(v2);
  v215 = v94 & 4;
  if ( v94 & 4 )
  {
    v183 = (signed __int16)sub_6F7724C0(v2);
    v196 = (signed __int16)sub_6F7724C0(v2);
    v95 = (signed __int16)sub_6F7724C0(v2);
    v203 = (signed __int16)sub_6F7724C0(v2);
    *(_WORD *)(v3 + 304) = sub_6F7724C0(v2);
  }
  else
  {
    v183 = (signed __int16)sub_6F7724F0(v2);
    v196 = (signed __int16)sub_6F7724F0(v2);
    v95 = (signed __int16)sub_6F7724F0(v2);
    v203 = (signed __int16)sub_6F7724F0(v2);
    *(_WORD *)(v3 + 304) = sub_6F7724F0(v2);
  }
  sub_6F772460(v2);
  if ( v94 & 0xFFFFFF00 )
    return 3;
  if ( v183 >> 31 )
    return 3;
  if ( (signed int)v183 > v196 )
    return 3;
  if ( v196 > 255 )
    return 3;
  if ( (unsigned int)v95 >> 31 )
    return 3;
  if ( v95 > v203 )
    return 3;
  if ( v203 > 255 )
    return 3;
  v213 = (v203 - v95 + 1) * (v196 - v183 + 1);
  v96 = sub_6F773B30(v212, 8, 0, v213, 0, &v223);
  if ( v223 )
    return 3;
  v223 = sub_6F772380(v2, 2 * v213);
  if ( v223 )
    goto LABEL_324;
  v207 = 0;
  v216 = v3;
  v214 = v95 << 8;
  while ( v203 >= v95 )
  {
    for ( j = v183; v196 >= j; ++j )
    {
      if ( v215 )
        v98 = (signed __int16)sub_6F7724C0(v2);
      else
        v98 = (signed __int16)sub_6F7724F0(v2);
      if ( v98 >= 0 )
      {
        v99 = v207++;
        v100 = (int)&v96[8 * v99];
        *(_WORD *)(v100 + 4) = v98;
        *(_DWORD *)v100 = j + v214;
      }
    }
    ++v95;
    v214 += 256;
  }
  v3 = v216;
  sub_6F772460(v2);
  v96 = sub_6F773B30(v212, 8, v213, v207, v96, &v223);
  if ( v223 )
  {
LABEL_324:
    sub_6F773D90(v212, (int)v96);
    v217 = v223;
    if ( v223 )
      return 3;
  }
  else
  {
    *(_DWORD *)(v216 + 300) = v96;
    v217 = 0;
    *(_DWORD *)(v216 + 296) = v207;
  }
  if ( v186 )
  {
    v217 = sub_6F78BC30(v2, v3, 256);
    if ( v217 )
      return 3;
  }
  v101 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(v3 + 4) = 0;
  v102 = v101;
  LOBYTE(v102) = v101 | 0x92;
  v107 = *(_BYTE *)(v3 + 199) == 0;
  *(_DWORD *)(v3 + 8) = v102;
  if ( !v107 )
  {
    LOBYTE(v101) = v101 | 0x96;
    *(_DWORD *)(v3 + 8) = v101;
  }
  v103 = *(_DWORD *)(v3 + 100);
  v104 = *(_DWORD *)(v3 + 280);
  v218 = 0;
  v219 = 0;
  v220 = 0;
  v221 = 0;
  v197 = v103;
  v105 = *(_BYTE ***)(v3 + 284);
  v222 = 0;
  *(_DWORD *)(v3 + 12) = 0;
  v189 = v105;
  if ( v104 > 0 )
  {
    v108 = 0;
    v106 = 0;
    v107 = 1;
    while ( 1 )
    {
      v109 = *v105;
      v110 = 6;
      v111 = "SLANT";
      do
      {
        if ( !v110 )
          break;
        v106 = *v109 < (const unsigned __int8)*v111;
        v107 = *v109++ == *v111++;
        --v110;
      }
      while ( v107 );
      ++v108;
      v112 = (!v106 && !v107) - v106;
      if ( v104 == v108 )
        break;
      v105 += 3;
      v106 = 0;
      v107 = v112 == 0;
      if ( !v112 )
        goto LABEL_205;
    }
    if ( (!v106 && !v107) != v106 )
      goto LABEL_209;
    v108 = v104;
LABEL_205:
    v113 = (int)&v189[3 * v108 - 3];
    if ( &v189[3 * v108] != (_BYTE **)12 )
    {
      if ( *(_BYTE *)(v113 + 4) )
      {
        v114 = **(_BYTE **)(v113 + 8) & 0xDF;
        if ( v114 == 73 || v114 == 79 )
        {
          *(_DWORD *)(v3 + 12) = 1;
          v107 = (**(_BYTE **)(v113 + 8) & 0xDF) == 79;
          v172 = "Italic";
          if ( v107 )
            v172 = "Oblique";
          v221 = v172;
        }
      }
    }
LABEL_209:
    v115 = v189;
    v118 = 0;
    v116 = 0;
    v117 = 1;
    while ( 1 )
    {
      v119 = *v115;
      v120 = 12;
      v121 = "WEIGHT_NAME";
      do
      {
        if ( !v120 )
          break;
        v116 = *v119 < (const unsigned __int8)*v121;
        v117 = *v119++ == *v121++;
        --v120;
      }
      while ( v117 );
      ++v118;
      v122 = (!v116 && !v117) - v116;
      if ( v104 == v118 )
        break;
      v115 += 3;
      v116 = 0;
      v117 = v122 == 0;
      if ( !v122 )
        goto LABEL_217;
    }
    if ( (!v116 && !v117) != v116 )
      goto LABEL_221;
    v118 = v104;
LABEL_217:
    v123 = (int)&v189[3 * v118 - 3];
    if ( &v189[3 * v118] != (_BYTE **)12 && *(_BYTE *)(v123 + 4) && (**(_BYTE **)(v123 + 8) & 0xDF) == 66 )
    {
      *(_DWORD *)(v3 + 12) |= 2u;
      v220 = "Bold";
    }
LABEL_221:
    v124 = v189;
    v127 = 0;
    v125 = 0;
    v126 = 1;
    while ( 1 )
    {
      v128 = *v124;
      v129 = 14;
      v130 = "SETWIDTH_NAME";
      do
      {
        if ( !v129 )
          break;
        v125 = *v128 < (const unsigned __int8)*v130;
        v126 = *v128++ == *v130++;
        --v129;
      }
      while ( v126 );
      ++v127;
      v131 = (!v125 && !v126) - v125;
      if ( v104 == v127 )
        break;
      v124 += 3;
      v125 = 0;
      v126 = v131 == 0;
      if ( !v131 )
        goto LABEL_229;
    }
    if ( (!v125 && !v126) != v125 )
      goto LABEL_234;
    v127 = v104;
LABEL_229:
    v132 = (int)&v189[3 * v127 - 3];
    if ( &v189[3 * v127] != (_BYTE **)12 )
    {
      if ( *(_BYTE *)(v132 + 4) )
      {
        v133 = *(_BYTE **)(v132 + 8);
        if ( *v133 )
        {
          if ( (*v133 & 0xDF) != 78 )
            v222 = *(const char **)(v132 + 8);
        }
      }
    }
LABEL_234:
    v134 = v189;
    v137 = 0;
    v135 = 0;
    v136 = 1;
    while ( 1 )
    {
      v138 = *v134;
      v139 = 15;
      v140 = "ADD_STYLE_NAME";
      do
      {
        if ( !v139 )
          break;
        v135 = *v138 < (const unsigned __int8)*v140;
        v136 = *v138++ == *v140++;
        --v139;
      }
      while ( v136 );
      ++v137;
      v141 = (!v135 && !v136) - v135;
      if ( v104 == v137 )
        break;
      v134 += 3;
      v135 = 0;
      v136 = v141 == 0;
      if ( !v141 )
        goto LABEL_241;
    }
    if ( (!v135 && !v136) != v135 )
      goto LABEL_246;
LABEL_241:
    v142 = (int)&v189[3 * v137 - 3];
    if ( &v189[3 * v137] != (_BYTE **)12 )
    {
      if ( *(_BYTE *)(v142 + 4) )
      {
        v143 = *(_BYTE **)(v142 + 8);
        if ( *v143 )
        {
          if ( (*v143 & 0xDF) != 78 )
            v219 = *(const char **)(v142 + 8);
        }
      }
    }
  }
LABEL_246:
  v223 = 0;
  if ( v219 )
  {
    v144 = strlen(v219);
    v145 = v144 + 1;
    v223 = v144;
  }
  else
  {
    v145 = 0;
  }
  v224 = 0;
  if ( v220 )
  {
    v146 = strlen(v220);
    v145 += v146 + 1;
    v224 = v146;
  }
  v225 = 0;
  if ( v221 )
  {
    v147 = strlen(v221);
    v145 += v147 + 1;
    v225 = v147;
  }
  v226 = 0;
  if ( v222 )
  {
    v148 = strlen(v222);
    v145 += v148 + 1;
    v226 = v148;
  }
  if ( !v145 )
  {
    v219 = "Regular";
    v223 = 7;
    v145 = 8;
  }
  v149 = sub_6F773A50(v197, v145, &v218);
  v150 = v218;
  *(_DWORD *)(v3 + 24) = v149;
  if ( v150 )
    return 3;
  v151 = 0;
  do
  {
    v152 = (&v219)[4 * v151];
    v153 = *(&v223 + v151);
    if ( v152 )
    {
      if ( *(_BYTE **)(v3 + 24) == v149 )
      {
        v154 = v149;
      }
      else
      {
        v154 = v149 + 1;
        *v149 = 32;
      }
      memcpy(v154, v152, v153);
      if ( v151 && v151 != 3 )
      {
        v154 += v153;
      }
      else if ( v153 )
      {
        v171 = v154;
        v154 += v153;
        do
        {
          if ( *v171 == 32 )
            *v171 = 45;
          ++v171;
        }
        while ( v154 != v171 );
      }
      v149 = v154;
    }
    ++v151;
  }
  while ( v151 != 4 );
  *v149 = 0;
  v217 = v218;
  if ( v218 )
    return 3;
  v155 = sub_6F78B9B0(*(_DWORD *)(v3 + 280), *(const char ***)(v3 + 284), "FAMILY_NAME");
  if ( v155 && *((_BYTE *)v155 + 4) )
  {
    v190 = &v217;
    v173 = sub_6F773E40(v175, v155[2], &v217);
    v107 = v217 == 0;
    *(_DWORD *)(v3 + 20) = v173;
    if ( !v107 )
      return 3;
  }
  else
  {
    *(_DWORD *)(v3 + 20) = 0;
    v190 = &v217;
  }
  v156 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 28) = 1;
  *(_DWORD *)(v3 + 16) = v156 + 1;
  v157 = sub_6F773B30(v175, 16, 0, 1, 0, v190);
  *(_DWORD *)(v3 + 32) = v157;
  if ( v217 )
    return 3;
  memset(v157, 0, 0x10u);
  v158 = *(_DWORD *)(v3 + 204) + *(_DWORD *)(v3 + 208);
  v159 = *(_DWORD *)(v3 + 280);
  v160 = *(const char ***)(v3 + 284);
  v184 = v158;
  *(_WORD *)v157 = v158;
  v161 = sub_6F78B9B0(v159, v160, "AVERAGE_WIDTH");
  if ( v161 )
    v162 = (signed int)(v161[2] + 5) / 10;
  else
    v162 = 2 * v184 / 3;
  *((_WORD *)v157 + 1) = v162;
  v163 = sub_6F78B9B0(v159, v160, "POINT_SIZE");
  if ( v163 )
    *((_DWORD *)v157 + 1) = (460800 * (signed int)v163[2] + 36135) / 72270;
  v164 = sub_6F78B9B0(v159, v160, "PIXEL_SIZE");
  if ( v164 )
    *((_DWORD *)v157 + 3) = *((_WORD *)v164 + 4) << 6;
  v165 = sub_6F78B9B0(v159, v160, "RESOLUTION_X");
  if ( v165 )
    v198 = *((_WORD *)v165 + 4);
  else
    v198 = 0;
  v166 = sub_6F78B9B0(v159, v160, "RESOLUTION_Y");
  if ( !v166 )
  {
    if ( !*((_DWORD *)v157 + 3) )
      *((_DWORD *)v157 + 3) = *((_DWORD *)v157 + 1);
    goto LABEL_311;
  }
  v185 = v166[2];
  if ( !*((_DWORD *)v157 + 3) )
  {
    v167 = *((_DWORD *)v157 + 1);
    if ( !(_WORD)v185 )
    {
      *((_DWORD *)v157 + 3) = v167;
LABEL_311:
      v168 = *((_DWORD *)v157 + 3);
      goto LABEL_286;
    }
    *((_DWORD *)v157 + 3) = (signed __int16)v185 * v167 / 72;
  }
  if ( !v198 || !(_WORD)v185 )
    goto LABEL_311;
  v168 = *((_DWORD *)v157 + 3) * (signed int)v198 / (signed __int16)v185;
LABEL_286:
  *((_DWORD *)v157 + 2) = v168;
  v169 = sub_6F78B9B0(v159, v160, "CHARSET_REGISTRY");
  v170 = sub_6F78B9B0(v159, v160, "CHARSET_ENCODING");
  if ( v169 && *((_BYTE *)v169 + 4) && v170 && *((_BYTE *)v170 + 4) )
  {
    v174 = sub_6F773E40(v175, v170[2], v190);
    v107 = v217 == 0;
    *(_DWORD *)(v3 + 176) = v174;
    if ( v107 )
    {
      *(_DWORD *)(v3 + 180) = sub_6F773E40(v175, v169[2], v190);
      goto LABEL_290;
    }
    return 3;
  }
LABEL_290:
  result = v217;
  if ( v217 )
    return 3;
  return result;
}
