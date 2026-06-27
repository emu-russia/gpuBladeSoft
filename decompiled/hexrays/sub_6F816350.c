signed int __cdecl sub_6F816350(int a1, int a2, unsigned int a3)
{
  int v3; // ebp@1
  unsigned int v4; // edx@2
  unsigned int v5; // eax@3
  unsigned int v6; // ecx@5
  int v7; // edx@6
  int v8; // esi@6
  int v9; // esi@11
  int v10; // edi@11
  int v11; // esi@11
  int v12; // ebx@11
  int v13; // esi@11
  int v14; // edi@11
  int v15; // edx@11
  signed int v16; // ebx@11
  signed int v17; // ecx@11
  unsigned int v18; // ecx@11
  unsigned int v19; // esi@11
  void *v20; // eax@16
  void *v21; // ST30_4@16
  void *v22; // eax@16
  void *v23; // ST28_4@16
  char *v24; // eax@16
  char *v25; // esi@16
  char *v26; // eax@16
  char *v27; // edi@16
  void *v28; // eax@16
  void *v29; // ST1C_4@16
  void *v30; // eax@16
  void *v31; // ST20_4@16
  void *v32; // eax@16
  int v33; // ebx@19
  int v34; // edi@22
  int v35; // ecx@22
  int v36; // ebx@22
  int v37; // esi@22
  int v38; // ebp@23
  unsigned __int8 *v39; // edx@28
  int v40; // ebp@28
  signed int v41; // edi@50
  int v43; // edx@56
  int v44; // esi@57
  signed int v45; // edi@60
  int v46; // ebx@60
  int v47; // edx@61
  int v48; // esi@61
  int v49; // eax@61
  int v50; // ecx@61
  unsigned int v51; // eax@69
  signed int v52; // edx@69
  signed int v53; // ecx@69
  int v54; // esi@69
  int v55; // ebx@69
  int v56; // esi@69
  int v57; // ebx@69
  int v58; // edx@71
  int v59; // eax@75
  unsigned int v60; // edx@76
  int v61; // ebx@76
  signed int v62; // ecx@79
  signed int v63; // esi@94
  char v64; // di@94
  int v65; // ebx@94
  unsigned int v66; // edi@94
  void *v67; // edi@97
  unsigned int v68; // edx@99
  unsigned int v69; // ST40_4@99
  _DWORD *v70; // edx@99
  signed int v71; // edi@99
  int v72; // ecx@99
  int v73; // ecx@99
  _DWORD *v74; // eax@99
  int v75; // edi@103
  int v76; // edx@103
  int v77; // ecx@103
  char *v78; // esi@103
  int v79; // ST28_4@104
  int v80; // ST20_4@104
  int v81; // ecx@104
  int v82; // ST04_4@104
  int v83; // ST00_4@104
  int v84; // ebx@105
  int v85; // edx@105
  int v86; // ebx@105
  int v87; // ebp@105
  int v88; // edi@106
  int v89; // ebp@109
  int v90; // esi@109
  int v91; // eax@109
  int v92; // edx@109
  unsigned int v93; // ecx@109
  int v94; // esi@118
  int v95; // ecx@119
  int v96; // esi@120
  int v97; // ecx@121
  int v98; // esi@122
  int v99; // ecx@123
  int v100; // esi@124
  int v101; // ecx@124
  bool v102; // cf@129
  bool v103; // zf@129
  bool v104; // al@131
  unsigned int v105; // ebp@137
  int v106; // ebx@137
  unsigned int v107; // edx@137
  int v108; // eax@141
  unsigned int v109; // edi@141
  unsigned int v110; // edi@142
  unsigned int v111; // edi@143
  unsigned int v112; // edi@144
  unsigned int v113; // edi@145
  unsigned int v114; // edi@146
  unsigned int v115; // edi@147
  unsigned int v116; // edi@148
  int v117; // edi@150
  signed int v118; // eax@151
  int v119; // esi@183
  signed int v120; // [sp+1Ch] [bp-90h]@11
  int v121; // [sp+1Ch] [bp-90h]@19
  int v122; // [sp+1Ch] [bp-90h]@58
  unsigned int v123; // [sp+1Ch] [bp-90h]@94
  int *v124; // [sp+1Ch] [bp-90h]@105
  signed int v125; // [sp+1Ch] [bp-90h]@137
  unsigned int v126; // [sp+20h] [bp-8Ch]@11
  signed int v127; // [sp+20h] [bp-8Ch]@22
  int v128; // [sp+20h] [bp-8Ch]@57
  int v129; // [sp+20h] [bp-8Ch]@70
  void *v130; // [sp+20h] [bp-8Ch]@97
  int v131; // [sp+20h] [bp-8Ch]@106
  unsigned int v132; // [sp+24h] [bp-88h]@11
  int v133; // [sp+24h] [bp-88h]@19
  signed int i; // [sp+24h] [bp-88h]@59
  int v135; // [sp+24h] [bp-88h]@70
  unsigned int v136; // [sp+24h] [bp-88h]@94
  int v137; // [sp+24h] [bp-88h]@106
  int v138; // [sp+28h] [bp-84h]@11
  int v139; // [sp+28h] [bp-84h]@22
  int v140; // [sp+28h] [bp-84h]@57
  unsigned int v141; // [sp+28h] [bp-84h]@69
  unsigned int v142; // [sp+28h] [bp-84h]@94
  int v143; // [sp+28h] [bp-84h]@108
  signed int v144; // [sp+2Ch] [bp-80h]@11
  int v145; // [sp+2Ch] [bp-80h]@94
  int v146; // [sp+2Ch] [bp-80h]@105
  int v147; // [sp+2Ch] [bp-80h]@137
  signed int v148; // [sp+30h] [bp-7Ch]@11
  int v149; // [sp+30h] [bp-7Ch]@22
  int v150; // [sp+30h] [bp-7Ch]@56
  int v151; // [sp+30h] [bp-7Ch]@70
  unsigned int v152; // [sp+30h] [bp-7Ch]@94
  int v153; // [sp+30h] [bp-7Ch]@107
  int v154; // [sp+34h] [bp-78h]@11
  int v155; // [sp+34h] [bp-78h]@22
  int v156; // [sp+34h] [bp-78h]@56
  signed int v157; // [sp+34h] [bp-78h]@70
  int v158; // [sp+34h] [bp-78h]@94
  int v159; // [sp+34h] [bp-78h]@107
  int v160; // [sp+38h] [bp-74h]@11
  int v161; // [sp+38h] [bp-74h]@22
  int (__cdecl *v162)(int, int, int, int); // [sp+38h] [bp-74h]@56
  unsigned int v163; // [sp+38h] [bp-74h]@69
  void *v164; // [sp+38h] [bp-74h]@97
  int v165; // [sp+3Ch] [bp-70h]@11
  int v166; // [sp+3Ch] [bp-70h]@22
  signed int v167; // [sp+3Ch] [bp-70h]@78
  char v168; // [sp+3Ch] [bp-70h]@94
  int v169; // [sp+40h] [bp-6Ch]@11
  signed int v170; // [sp+40h] [bp-6Ch]@20
  int v171; // [sp+40h] [bp-6Ch]@60
  _DWORD *v172; // [sp+40h] [bp-6Ch]@69
  int v173; // [sp+40h] [bp-6Ch]@94
  char *v174; // [sp+44h] [bp-68h]@18
  int v175; // [sp+44h] [bp-68h]@76
  unsigned int v176; // [sp+44h] [bp-68h]@94
  size_t v177; // [sp+48h] [bp-64h]@11
  int v178; // [sp+48h] [bp-64h]@19
  bool v179; // [sp+48h] [bp-64h]@137
  signed int v180; // [sp+4Ch] [bp-60h]@69
  bool v181; // [sp+50h] [bp-5Ch]@137
  int v182; // [sp+54h] [bp-58h]@18
  signed int v183; // [sp+54h] [bp-58h]@78
  signed int v184; // [sp+58h] [bp-54h]@19
  signed int v185; // [sp+58h] [bp-54h]@78
  int v186; // [sp+5Ch] [bp-50h]@19
  signed int v187; // [sp+5Ch] [bp-50h]@78
  char *v188; // [sp+60h] [bp-4Ch]@18
  signed int v189; // [sp+60h] [bp-4Ch]@78
  signed int v190; // [sp+64h] [bp-48h]@19
  bool v191; // [sp+64h] [bp-48h]@137
  bool v192; // [sp+68h] [bp-44h]@137
  int v193; // [sp+6Ch] [bp-40h]@19
  bool v194; // [sp+6Ch] [bp-40h]@137
  int v195; // [sp+70h] [bp-3Ch]@19
  bool v196; // [sp+70h] [bp-3Ch]@137
  signed int v197; // [sp+74h] [bp-38h]@78
  int v198; // [sp+78h] [bp-34h]@19
  signed int v199; // [sp+78h] [bp-34h]@78
  int v200; // [sp+7Ch] [bp-30h]@19
  int v201; // [sp+7Ch] [bp-30h]@79
  int v202; // [sp+80h] [bp-2Ch]@78
  int v203; // [sp+84h] [bp-28h]@76
  unsigned int v204; // [sp+88h] [bp-24h]@77
  char v205; // [sp+8Fh] [bp-1Dh]@78
  int v206; // [sp+B0h] [bp+4h]@105
  int v207; // [sp+B0h] [bp+4h]@137

  v3 = a1;
  if ( !a2 )
    return -1;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 & 0xF )
    return -10;
  v5 = *(_DWORD *)(a2 + 8);
  if ( v4 - 1 > 0xFFFFE || (v5 & 0xF) != 0 )
    return -10;
  if ( v5 - 1 > 0xFFFFE )
    return -10;
  v6 = *(_DWORD *)(a2 + 20);
  if ( v4 < v6 + *(_DWORD *)(a2 + 12) )
    return -10;
  v7 = *(_DWORD *)(a2 + 24);
  v8 = *(_DWORD *)(a2 + 16);
  if ( v6 > 0xFF || v5 < v8 + v7 || v5 - v8 - v7 > 0xFF || *(_DWORD *)(a2 + 44) > 2u || *(_DWORD *)(a2 + 48) > 3u )
    return -10;
  memset((void *)a1, 0, 0xC960u);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  v9 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 792) = -1;
  *(_DWORD *)(a1 + 24) = v9;
  sub_6F818F90(a1);
  v10 = *(_DWORD *)(a1 + 4) >> 3;
  v11 = *(_DWORD *)(a1 + 8) >> 3;
  v138 = v11;
  v12 = (v10 + (*(_DWORD *)(a1 + 48) & 1 ^ 1)) >> (*(_DWORD *)(a1 + 48) & 1 ^ 1);
  v154 = v12;
  v160 = (v11 + (((unsigned __int8)(*(_DWORD *)(a1 + 48) >> 1) ^ 1) & 1)) >> (((*(_DWORD *)(a1 + 48) >> 1) ^ 1) & 1);
  v148 = *(_DWORD *)(a1 + 4) >> 3;
  v13 = v11 * v10;
  v14 = v160 * v12;
  v120 = v13;
  v15 = 2 * v160 * v12;
  v16 = v13 + v15;
  v17 = (*(_DWORD *)(a1 + 8) >> 3) + 3;
  v126 = (v148 + 3) >> 2;
  v144 = v17 >> 2;
  v165 = (v154 + 3) >> 2;
  v169 = (v160 + 3) >> 2;
  v18 = (v17 >> 2) * v126;
  v19 = v169 * v165;
  v177 = v18 + 2 * v169 * v165;
  v132 = 4 * v18;
  if ( v138 != v120 / v148
    || v14 > v15
    || v120 > v16
    || v19 > 2 * v19
    || v144 != v18 / v126
    || v18 > v177
    || v18 != v132 >> 2 )
  {
    goto LABEL_239;
  }
  *(_DWORD *)(a1 + 184) = v14;
  *(_DWORD *)(a1 + 152) = v14;
  *(_DWORD *)(a1 + 136) = v18;
  *(_DWORD *)(a1 + 164) = v18;
  *(_DWORD *)(a1 + 200) = v19;
  *(_DWORD *)(a1 + 108) = v148;
  *(_DWORD *)(a1 + 196) = v177 - v19;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 112) = v138;
  *(_DWORD *)(a1 + 120) = v120;
  *(_DWORD *)(a1 + 124) = v126;
  *(_DWORD *)(a1 + 128) = v144;
  *(_DWORD *)(a1 + 172) = v154;
  *(_DWORD *)(a1 + 140) = v154;
  *(_DWORD *)(a1 + 176) = v160;
  *(_DWORD *)(a1 + 144) = v160;
  *(_DWORD *)(a1 + 148) = v120;
  *(_DWORD *)(a1 + 180) = v16 - v14;
  *(_DWORD *)(a1 + 188) = v165;
  *(_DWORD *)(a1 + 156) = v165;
  *(_DWORD *)(a1 + 192) = v169;
  *(_DWORD *)(a1 + 160) = v169;
  *(_DWORD *)(a1 + 168) = v19;
  *(_DWORD *)(a1 + 216) = v16;
  v20 = calloc(v16, 4u);
  *(_DWORD *)(a1 + 204) = v20;
  v21 = v20;
  v22 = malloc(2 * v16);
  *(_DWORD *)(a1 + 228) = v177;
  *(_DWORD *)(a1 + 212) = v22;
  v23 = v22;
  v24 = (char *)malloc(v177 << 6);
  *(_DWORD *)(a1 + 220) = v24;
  v25 = v24;
  v26 = (char *)calloc(v177, 1u);
  *(_DWORD *)(a1 + 224) = v26;
  v27 = v26;
  *(_DWORD *)(a1 + 240) = 2 * v126;
  *(_DWORD *)(a1 + 244) = 2 * v144;
  *(_DWORD *)(a1 + 248) = v132;
  v28 = calloc(v132, 0x30u);
  *(_DWORD *)(a1 + 232) = v28;
  v29 = v28;
  v30 = calloc(v132, 1u);
  *(_DWORD *)(a1 + 236) = v30;
  v31 = v30;
  v32 = malloc(4 * v16);
  *(_DWORD *)(a1 + 252) = v32;
  if ( v31 == 0 || v27 == 0 || v25 == 0 || v21 == 0 || v23 == 0 || v29 == 0 || !v32 )
  {
    v41 = -1;
LABEL_51:
    free(v32);
    free(*(void **)(v3 + 236));
    free(*(void **)(v3 + 232));
    free(*(void **)(v3 + 224));
    free(*(void **)(v3 + 220));
    free(*(void **)(v3 + 212));
    free(*(void **)(v3 + 204));
    return v41;
  }
  v188 = v25;
  v174 = v27;
  v182 = a1 + 112;
  while ( 2 )
  {
    v133 = 0;
    v33 = *(_DWORD *)(v182 - 4);
    v121 = *(_DWORD *)(v182 + 4);
    v186 = v33 + v121;
    v190 = *(_DWORD *)(v182 - 4);
    v178 = *(_DWORD *)(v182 + 20);
    v195 = 4 * v33;
    v184 = *(_DWORD *)v182;
    v193 = 2 * v33;
    v198 = v33 + 1;
    v200 = v33 + 2;
LABEL_20:
    v170 = v184;
    if ( v184 > 4 )
    {
      v170 = 4;
LABEL_22:
      v139 = v186;
      v34 = v193 + v186;
      v35 = v121 + v193;
      v155 = v121 + 1;
      v149 = v121 + v198;
      v161 = v121 + 2;
      v36 = (int)(&v188[64 * v178] + 64 * v133);
      v166 = v200 + v121;
      v127 = v190;
      v37 = 0;
      while ( v127 <= 4 )
      {
        if ( v127 <= 0 )
        {
          v184 -= 4;
          v121 += v195;
          v186 += v195;
          goto LABEL_20;
        }
        *(_DWORD *)v36 = -1;
        *(_DWORD *)(v36 + 4) = -1;
        *(_DWORD *)(v36 + 8) = -1;
        *(_DWORD *)(v36 + 12) = -1;
        *(_DWORD *)(v36 + 16) = -1;
        v38 = v37 + v121;
        *(_DWORD *)(v36 + 20) = -1;
        *(_DWORD *)(v36 + 24) = -1;
        *(_DWORD *)(v36 + 28) = -1;
        *(_DWORD *)(v36 + 32) = -1;
        *(_DWORD *)(v36 + 36) = -1;
        *(_DWORD *)(v36 + 40) = -1;
        *(_DWORD *)(v36 + 44) = -1;
        *(_DWORD *)(v36 + 48) = -1;
        *(_DWORD *)(v36 + 52) = -1;
        *(_DWORD *)(v36 + 56) = -1;
        *(_DWORD *)(v36 + 60) = -1;
        if ( v127 == 1 )
        {
          *(_DWORD *)v36 = v38;
          if ( v170 != 1 )
          {
            *(_DWORD *)(v36 + 12) = v139;
            if ( v170 != 2 )
            {
              *(_DWORD *)(v36 + 16) = v35;
              if ( v170 == 4 )
                *(_DWORD *)(v36 + 20) = v34;
            }
          }
        }
        else
        {
          if ( v127 != 2 )
          {
            if ( v127 != 4 )
            {
              *(_DWORD *)v36 = v38;
              *(_DWORD *)(v36 + 4) = v155;
              *(_DWORD *)(v36 + 56) = v161;
              if ( v170 != 1 )
              {
                *(_DWORD *)(v36 + 12) = v139;
                *(_DWORD *)(v36 + 8) = v149;
                *(_DWORD *)(v36 + 52) = v166;
                if ( v170 != 2 )
                {
                  *(_DWORD *)(v36 + 16) = v35;
                  *(_DWORD *)(v36 + 28) = v35 + 1;
                  *(_DWORD *)(v36 + 32) = v35 + 2;
                  if ( v170 == 4 )
                  {
                    *(_DWORD *)(v36 + 20) = v34;
                    *(_DWORD *)(v36 + 24) = v34 + 1;
                    *(_DWORD *)(v36 + 36) = v34 + 2;
                  }
                }
              }
              goto LABEL_28;
            }
            goto LABEL_24;
          }
          *(_DWORD *)v36 = v38;
          *(_DWORD *)(v36 + 4) = v155;
          if ( v170 != 1 )
          {
            *(_DWORD *)(v36 + 12) = v139;
            *(_DWORD *)(v36 + 8) = v149;
            if ( v170 != 2 )
            {
              *(_DWORD *)(v36 + 16) = v35;
              *(_DWORD *)(v36 + 28) = v35 + 1;
              if ( v170 == 4 )
              {
                *(_DWORD *)(v36 + 20) = v34;
                *(_DWORD *)(v36 + 24) = v34 + 1;
              }
            }
          }
        }
LABEL_28:
        v37 += 4;
        v39 = (unsigned __int8 *)(&v174[v178] + v133);
        v40 = *(_DWORD *)v36;
        v34 += 4;
        ++v133;
        v127 -= 4;
        v36 += 64;
        v35 += 4;
        v139 += 4;
        v155 += 4;
        v149 += 4;
        v161 += 4;
        v166 += 4;
        *v39 = *v39 & 0xC3 | 4
                           * (((unsigned int)~v40 >> 31) | (*v39 >> 2) & 0xF | 2
                                                                             * ((unsigned int)~*(_DWORD *)(v36 - 48) >> 31) | 4 * ((unsigned int)~*(_DWORD *)(v36 - 32) >> 31) | 8 * ((unsigned int)~*(_DWORD *)(v36 - 8) >> 31));
      }
      *(_DWORD *)v36 = -1;
      *(_DWORD *)(v36 + 4) = -1;
      *(_DWORD *)(v36 + 8) = -1;
      *(_DWORD *)(v36 + 12) = -1;
      *(_DWORD *)(v36 + 16) = -1;
      *(_DWORD *)(v36 + 20) = -1;
      *(_DWORD *)(v36 + 24) = -1;
      v38 = v37 + v121;
      *(_DWORD *)(v36 + 28) = -1;
      *(_DWORD *)(v36 + 32) = -1;
      *(_DWORD *)(v36 + 36) = -1;
      *(_DWORD *)(v36 + 40) = -1;
      *(_DWORD *)(v36 + 44) = -1;
      *(_DWORD *)(v36 + 48) = -1;
      *(_DWORD *)(v36 + 52) = -1;
      *(_DWORD *)(v36 + 56) = -1;
      *(_DWORD *)(v36 + 60) = -1;
LABEL_24:
      *(_DWORD *)v36 = v38;
      *(_DWORD *)(v36 + 56) = v161;
      *(_DWORD *)(v36 + 4) = v155;
      *(_DWORD *)(v36 + 60) = v37 + v121 + 3;
      if ( v170 != 1 )
      {
        *(_DWORD *)(v36 + 8) = v149;
        *(_DWORD *)(v36 + 12) = v139;
        *(_DWORD *)(v36 + 52) = v166;
        *(_DWORD *)(v36 + 48) = v37 + v186 + 3;
        if ( v170 != 2 )
        {
          *(_DWORD *)(v36 + 16) = v35;
          *(_DWORD *)(v36 + 28) = v35 + 1;
          *(_DWORD *)(v36 + 32) = v35 + 2;
          *(_DWORD *)(v36 + 44) = v35 + 3;
          if ( v170 == 4 )
          {
            *(_DWORD *)(v36 + 20) = v34;
            *(_DWORD *)(v36 + 24) = v34 + 1;
            *(_DWORD *)(v36 + 36) = v34 + 2;
            *(_DWORD *)(v36 + 40) = v34 + 3;
          }
        }
      }
      goto LABEL_28;
    }
    if ( v184 > 0 )
      goto LABEL_22;
    v182 += 32;
    if ( v182 != a1 + 208 )
    {
      v174 = *(char **)(a1 + 224);
      v188 = *(char **)(a1 + 220);
      continue;
    }
    break;
  }
  v3 = a1;
  v150 = *(_DWORD *)(a1 + 236);
  v43 = *(_DWORD *)(a1 + 112);
  v156 = *(_DWORD *)(a1 + 232);
  v162 = off_6FB8EAC0[*(_DWORD *)(a1 + 48)];
  if ( v43 > 0 )
  {
    v44 = *(_DWORD *)(a1 + 108);
    v128 = 0;
    v140 = 0;
    do
    {
      v122 = 0;
      if ( v44 > 0 )
      {
        do
        {
          for ( i = 0; ; i = 1 )
          {
            v45 = 0;
            v46 = v128 | 2 * i;
            v171 = v46 + 1;
            while ( 1 )
            {
              v47 = v122 | 2 * v45;
              v48 = 4 * v140 | (unsigned __int8)*(&byte_6FB8E8B0[2 * i] + v45);
              v49 = v156 + 48 * v48;
              *(_DWORD *)v49 = -1;
              *(_DWORD *)(v49 + 4) = -1;
              *(_DWORD *)(v49 + 8) = -1;
              *(_DWORD *)(v49 + 12) = -1;
              *(_DWORD *)(v49 + 16) = -1;
              *(_DWORD *)(v49 + 20) = -1;
              *(_DWORD *)(v49 + 24) = -1;
              *(_DWORD *)(v49 + 28) = -1;
              *(_DWORD *)(v49 + 32) = -1;
              *(_DWORD *)(v49 + 36) = -1;
              *(_DWORD *)(v49 + 40) = -1;
              *(_DWORD *)(v49 + 44) = -1;
              v50 = *(_DWORD *)(a1 + 108);
              if ( v47 >= v50 || *(_DWORD *)(a1 + 112) <= v46 )
              {
                *(_BYTE *)(v150 + v48) = -1;
              }
              else
              {
                *(_DWORD *)v49 = v47 + v46 * v50;
                *(_DWORD *)(v49 + 4) = v47 + v46 * *(_DWORD *)(a1 + 108) + 1;
                *(_DWORD *)(v49 + 8) = v47 + v171 * *(_DWORD *)(a1 + 108);
                *(_DWORD *)(v49 + 12) = v47 + v171 * *(_DWORD *)(a1 + 108) + 1;
                v162(v49, a1 + 108, v47, v46);
              }
              if ( v45 == 1 )
                break;
              v45 = 1;
            }
            if ( i == 1 )
              break;
          }
          v122 += 4;
          v44 = *(_DWORD *)(a1 + 108);
          ++v140;
        }
        while ( v122 < v44 );
        v43 = *(_DWORD *)(a1 + 112);
      }
      v128 += 4;
    }
    while ( v128 < v43 );
  }
  v51 = *(_DWORD *)(a1 + 204);
  v52 = *(_DWORD *)(a1 + 20);
  v53 = *(_DWORD *)(a1 + 24);
  v54 = *(_DWORD *)(a1 + 12);
  v172 = (_DWORD *)(a1 + 120);
  v55 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 508) = 0;
  v163 = v51;
  v141 = v51;
  v180 = 1;
  v56 = v52 + v54;
  v57 = v53 + v55;
  while ( 1 )
  {
    v157 = v52;
    v151 = v56;
    v129 = v53;
    v135 = v57;
    if ( v180 != 1 )
      break;
    v163 += 4 * *v172;
    v59 = v163;
    if ( v163 > v141 )
      goto LABEL_76;
LABEL_89:
    ++v180;
    v172 += 8;
  }
  v58 = *(_DWORD *)(v3 + 48);
  if ( !(v58 & 1) )
  {
    v157 >>= 1;
    v151 = (v56 + 1) >> 1;
  }
  if ( !(v58 & 2) )
  {
    v129 = v53 >> 1;
    v135 = (v57 + 1) >> 1;
  }
  v163 += 4 * *v172;
  v59 = v163;
  if ( v163 > v141 )
  {
LABEL_76:
    v60 = (unsigned int)v172;
    v175 = 0;
    v61 = v3;
    v203 = 4 * *(v172 - 3);
    while ( 1 )
    {
      v204 = v141 + v203;
      if ( v141 + v203 <= v141 )
        goto LABEL_85;
      v199 = 6;
      v197 = 5;
      v183 = 4;
      v185 = 3;
      v187 = 2;
      v189 = 1;
      v167 = 7;
      LOBYTE(v59) = v157 >= v151;
      LOBYTE(v60) = v175 >= v135;
      v59 |= v60 | (v141 + v203);
      v202 = v175 + 7;
      v205 = v59;
      do
      {
        v62 = v167;
        v201 = v167 - 7;
        if ( v167 < v157 || (v59 = v151, v167 - 7 >= v151) || v129 > v202 || v205 )
        {
          *(_BYTE *)v141 |= 2u;
          goto LABEL_84;
        }
        LOBYTE(v62) = v135 <= v202;
        LOBYTE(v59) = v175 < v129;
        v59 |= v62;
        if ( !((v151 <= v167) | (unsigned __int8)v59) && v157 <= v201 )
        {
          *(_BYTE *)(v141 + 1) |= 0xF8u;
          goto LABEL_84;
        }
        v207 = v61;
        v147 = 0;
        v125 = 0;
        v181 = v151 > v189 && v157 <= v189;
        v191 = v151 > v187 && v157 <= v187;
        v192 = v151 > v185 && v157 <= v185;
        v194 = v151 > v183 && v157 <= v183;
        v196 = v151 > v197 && v157 <= v197;
        v105 = 0;
        v106 = v175;
        v179 = v151 > v199 && v157 <= v199;
        v107 = 0;
        do
        {
          if ( v157 > v201 )
          {
            if ( v181 )
            {
              if ( v106 < v129 || v135 <= v106 )
                goto LABEL_229;
              v108 = 8 * v125;
LABEL_142:
              ++v147;
              v110 = ((v108 | 1u) >> 5) & 1;
              v105 |= v110 << (v108 | 1);
              v107 |= (v110 ^ 1) << (v108 | 1);
              if ( v191 )
                goto LABEL_143;
              goto LABEL_229;
            }
          }
          else if ( v106 >= v129 && v135 > v106 )
          {
            ++v147;
            v108 = 8 * v125;
            v109 = ((unsigned int)(8 * v125) >> 5) & 1;
            v105 |= v109 << 8 * v125;
            v107 |= (v109 ^ 1) << 8 * v125;
            if ( v181 )
              goto LABEL_142;
          }
          if ( v191 )
          {
            if ( v106 < v129 || v135 <= v106 )
              goto LABEL_225;
            v108 = 8 * v125;
LABEL_143:
            ++v147;
            v111 = ((v108 | 2u) >> 5) & 1;
            v105 |= v111 << (v108 | 2);
            v107 |= (v111 ^ 1) << (v108 | 2);
            if ( v192 )
              goto LABEL_144;
            goto LABEL_225;
          }
LABEL_229:
          if ( v192 )
          {
            if ( v106 < v129 || v135 <= v106 )
              goto LABEL_233;
            v108 = 8 * v125;
LABEL_144:
            ++v147;
            v112 = ((v108 | 3u) >> 5) & 1;
            v105 |= v112 << (v108 | 3);
            v107 |= (v112 ^ 1) << (v108 | 3);
            if ( v194 )
              goto LABEL_145;
            goto LABEL_233;
          }
LABEL_225:
          if ( v194 )
          {
            if ( v129 > v106 || v135 <= v106 )
            {
              if ( v179 )
                goto LABEL_149;
              goto LABEL_186;
            }
            v108 = 8 * v125;
LABEL_145:
            ++v147;
            v113 = ((v108 | 4u) >> 5) & 1;
            v105 |= v113 << (v108 | 4);
            v107 |= (v113 ^ 1) << (v108 | 4);
            if ( v196 )
              goto LABEL_146;
            goto LABEL_209;
          }
LABEL_233:
          if ( v196 )
          {
            if ( v129 > v106 || v135 <= v106 )
              goto LABEL_149;
            v108 = 8 * v125;
LABEL_146:
            ++v147;
            v114 = ((v108 | 5u) >> 5) & 1;
            v105 |= v114 << (v108 | 5);
            v107 |= (v114 ^ 1) << (v108 | 5);
            if ( v179 )
              goto LABEL_147;
LABEL_186:
            if ( v151 > v167 && v129 <= v106 && v135 > v106 )
            {
              v108 = 8 * v125;
              goto LABEL_148;
            }
            goto LABEL_149;
          }
LABEL_209:
          if ( !v179 )
            goto LABEL_186;
          if ( v106 >= v129 && v135 > v106 )
          {
            v108 = 8 * v125;
LABEL_147:
            ++v147;
            v115 = ((v108 | 6u) >> 5) & 1;
            v105 |= v115 << (v108 | 6);
            v107 |= (v115 ^ 1) << (v108 | 6);
            if ( v151 <= v167 )
              goto LABEL_149;
LABEL_148:
            ++v147;
            v116 = ((v108 | 7u) >> 5) & 1;
            v105 |= v116 << (v108 | 7);
            v107 |= (v116 ^ 1) << (v108 | 7);
          }
LABEL_149:
          ++v125;
          ++v106;
        }
        while ( v125 != 8 );
        v61 = v207;
        v117 = *(_DWORD *)(v207 + 508);
        if ( v117 <= 0 )
        {
          v118 = 0;
          v125 = 0;
LABEL_183:
          *(_DWORD *)(v207 + 508) = v117 + 1;
          v119 = v207 + 16 * v125;
          *(_DWORD *)(v119 + 512) = v107;
          *(_DWORD *)(v119 + 516) = v105;
          *(_DWORD *)(v119 + 520) = v147;
          goto LABEL_184;
        }
        v118 = 0;
        if ( *(_QWORD *)(v207 + 512) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 1 )
        {
          v118 = 1;
          v125 = 1;
          goto LABEL_183;
        }
        v118 = 1;
        if ( *(_QWORD *)(v207 + 528) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 2 )
        {
          v118 = 2;
          v125 = 2;
          goto LABEL_183;
        }
        v118 = 2;
        if ( *(_QWORD *)(v207 + 544) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 3 )
        {
          v118 = 3;
          v125 = 3;
          goto LABEL_183;
        }
        v118 = 3;
        if ( *(_QWORD *)(v207 + 560) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 4 )
        {
          v118 = 4;
          v125 = 4;
          goto LABEL_183;
        }
        v118 = 4;
        if ( *(_QWORD *)(v207 + 576) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 5 )
        {
          v118 = 5;
          v125 = 5;
          goto LABEL_183;
        }
        v118 = 5;
        if ( *(_QWORD *)(v207 + 592) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 6 )
        {
          v118 = 6;
          v125 = 6;
          goto LABEL_183;
        }
        v118 = 6;
        if ( *(_QWORD *)(v207 + 608) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 7 )
        {
          v118 = 7;
          v125 = 7;
          goto LABEL_183;
        }
        v118 = 7;
        if ( *(_QWORD *)(v207 + 624) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 8 )
        {
          v118 = 8;
          goto LABEL_183;
        }
        v118 = 8;
        if ( *(_QWORD *)(v207 + 640) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 9 )
        {
          v118 = 9;
          v125 = 9;
          goto LABEL_183;
        }
        v118 = 9;
        if ( *(_QWORD *)(v207 + 656) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 10 )
        {
          v118 = 10;
          v125 = 10;
          goto LABEL_183;
        }
        v118 = 10;
        if ( *(_QWORD *)(v207 + 672) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 11 )
        {
          v118 = 11;
          v125 = 11;
          goto LABEL_183;
        }
        v118 = 11;
        if ( *(_QWORD *)(v207 + 688) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 12 )
        {
          v118 = 12;
          v125 = 12;
          goto LABEL_183;
        }
        v118 = 12;
        if ( *(_QWORD *)(v207 + 704) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 13 )
        {
          v118 = 13;
          v125 = 13;
          goto LABEL_183;
        }
        v118 = 13;
        if ( *(_QWORD *)(v207 + 720) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 14 )
        {
          v118 = 14;
          v125 = 14;
          goto LABEL_183;
        }
        v118 = 14;
        if ( *(_QWORD *)(v207 + 736) == __PAIR__(v105, v107) )
          goto LABEL_184;
        if ( v117 == 15 )
        {
          v118 = 15;
          v125 = 15;
          goto LABEL_183;
        }
        v118 = 15;
        if ( *(_QWORD *)(v207 + 752) != __PAIR__(v105, v107) )
        {
          v118 = -16;
          v125 = 16;
          goto LABEL_183;
        }
LABEL_184:
        v59 = 8 * v118 | *(_BYTE *)(v141 + 1) & 7;
        *(_BYTE *)(v141 + 1) = v59;
LABEL_84:
        v141 += 4;
        v60 = v141;
        v167 += 8;
        v189 += 8;
        v187 += 8;
        v185 += 8;
        v183 += 8;
        v197 += 8;
        v199 += 8;
      }
      while ( v204 > v141 );
LABEL_85:
      v175 += 8;
      if ( v163 <= v141 )
      {
        v3 = v61;
        break;
      }
    }
  }
  if ( v180 != 3 )
  {
    v52 = *(_DWORD *)(v3 + 20);
    v53 = *(_DWORD *)(v3 + 24);
    v56 = v52 + *(_DWORD *)(v3 + 12);
    v57 = v53 + *(_DWORD *)(v3 + 16);
    goto LABEL_89;
  }
  if ( a3 - 3 > 1 )
  {
    v32 = *(void **)(v3 + 252);
    v41 = -10;
    goto LABEL_51;
  }
  v63 = *(_DWORD *)(v3 + 8);
  v123 = *(_DWORD *)(v3 + 4);
  v176 = v63;
  v63 += 32;
  v136 = v123 + 32;
  v64 = ((*(_DWORD *)(v3 + 48) >> 1) ^ 1) & 1;
  v173 = *(_DWORD *)(v3 + 48) & 1 ^ 1;
  v65 = (signed int)(v123 + 32) >> v173;
  v168 = v64;
  v142 = v63 * (v123 + 32);
  v152 = v65 * (v63 >> v64);
  v158 = (16 >> v173) + v65 * (16 >> v64);
  v66 = 2 * v152 + v63 * (v123 + 32);
  v145 = 2 * v152 + v63 * (v123 + 32);
  if ( v63 != v63 * v136 / v136 || v152 > 2 * v152 || v142 > v66 || v145 != a3 * v66 / a3 )
  {
LABEL_239:
    v32 = *(void **)(v3 + 252);
    v41 = -23;
    goto LABEL_51;
  }
  v67 = malloc(a3 * v66);
  v130 = v67;
  v164 = malloc(4 * *(_DWORD *)(v3 + 216));
  *(_DWORD *)(v3 + 208) = v164;
  if ( !v164 || !v67 )
  {
    free(v164);
    v41 = -1;
    free(v130);
    v32 = *(void **)(v3 + 252);
    goto LABEL_51;
  }
  *(_DWORD *)(v3 + 328) = v65;
  *(_DWORD *)(v3 + 312) = v65;
  *(_DWORD *)(v3 + 288) = v123;
  *(_DWORD *)(v3 + 296) = v136;
  v68 = v123 >> v173;
  v69 = v68;
  *(_DWORD *)(v3 + 320) = v68;
  *(_DWORD *)(v3 + 304) = v68;
  v70 = (_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 292) = v176;
  *(_DWORD *)(v3 + 340) = v176;
  *(_DWORD *)(v3 + 324) = v176 >> v168;
  *(_DWORD *)(v3 + 308) = v176 >> v168;
  *(_DWORD *)(v3 + 344) = v136;
  v71 = 2;
  *(_DWORD *)(v3 + 336) = v123;
  v72 = *(_DWORD *)(v3 + 300);
  *(_DWORD *)(v3 + 352) = v69;
  *(_DWORD *)(v3 + 356) = v176 >> v168;
  *(_DWORD *)(v3 + 360) = v65;
  *(_DWORD *)(v3 + 348) = v72;
  v73 = *(_DWORD *)(v3 + 316);
  *(_DWORD *)(v3 + 368) = v69;
  *(_DWORD *)(v3 + 372) = v176 >> v168;
  *(_DWORD *)(v3 + 376) = v65;
  *(_DWORD *)(v3 + 364) = v73;
  *(_DWORD *)(v3 + 380) = *(_DWORD *)(v3 + 332);
  v74 = (_DWORD *)(v3 + 384);
  if ( 2 != a3 )
  {
    if ( !(a3 & 1)
      || (*v74 = *v70,
          *(_DWORD *)(v3 + 388) = *(_DWORD *)(v3 + 292),
          *(_DWORD *)(v3 + 392) = *(_DWORD *)(v3 + 296),
          *(_DWORD *)(v3 + 396) = *(_DWORD *)(v3 + 300),
          *(_DWORD *)(v3 + 400) = *(_DWORD *)(v3 + 304),
          *(_DWORD *)(v3 + 404) = *(_DWORD *)(v3 + 308),
          *(_DWORD *)(v3 + 408) = *(_DWORD *)(v3 + 312),
          *(_DWORD *)(v3 + 412) = *(_DWORD *)(v3 + 316),
          *(_DWORD *)(v3 + 416) = *(_DWORD *)(v3 + 320),
          *(_DWORD *)(v3 + 420) = *(_DWORD *)(v3 + 324),
          v71 = 3,
          *(_DWORD *)(v3 + 424) = *(_DWORD *)(v3 + 328),
          *(_DWORD *)(v3 + 428) = *(_DWORD *)(v3 + 332),
          v74 = (_DWORD *)(v3 + 432),
          3 != a3) )
    {
      do
      {
        v71 += 2;
        v74 += 24;
        *(v74 - 24) = *v70;
        *(v74 - 23) = *(_DWORD *)(v3 + 292);
        *(v74 - 22) = *(_DWORD *)(v3 + 296);
        *(v74 - 21) = *(_DWORD *)(v3 + 300);
        *(v74 - 20) = *(_DWORD *)(v3 + 304);
        *(v74 - 19) = *(_DWORD *)(v3 + 308);
        *(v74 - 18) = *(_DWORD *)(v3 + 312);
        *(v74 - 17) = *(_DWORD *)(v3 + 316);
        *(v74 - 16) = *(_DWORD *)(v3 + 320);
        *(v74 - 15) = *(_DWORD *)(v3 + 324);
        *(v74 - 14) = *(_DWORD *)(v3 + 328);
        *(v74 - 13) = *(_DWORD *)(v3 + 332);
        *(v74 - 12) = *v70;
        *(v74 - 11) = *(_DWORD *)(v3 + 292);
        *(v74 - 10) = *(_DWORD *)(v3 + 296);
        *(v74 - 9) = *(_DWORD *)(v3 + 300);
        *(v74 - 8) = *(_DWORD *)(v3 + 304);
        *(v74 - 7) = *(_DWORD *)(v3 + 308);
        *(v74 - 6) = *(_DWORD *)(v3 + 312);
        *(v74 - 5) = *(_DWORD *)(v3 + 316);
        *(v74 - 4) = *(_DWORD *)(v3 + 320);
        *(v74 - 3) = *(_DWORD *)(v3 + 324);
        *(v74 - 2) = *(_DWORD *)(v3 + 328);
        *(v74 - 1) = *(_DWORD *)(v3 + 332);
      }
      while ( v71 != a3 );
    }
  }
  v75 = v3 + 288;
  v76 = 0;
  v77 = v142 + v158;
  v78 = (char *)v130;
  do
  {
    *(_DWORD *)(v3 + 4 * v76 + 480) = v78;
    v79 = v76;
    v80 = v77;
    *(_DWORD *)(v75 + 28) = &v78[v77];
    v81 = (int)(&v78[v145 - v152] + v158);
    *(_DWORD *)(v75 + 12) = &v78[16 * (v123 + 33)];
    v78 += v145;
    *(_DWORD *)(v75 + 44) = v81;
    v82 = v75;
    v83 = v75;
    v75 += 48;
    sub_6F815230(v83, v82);
    v77 = v80;
    v76 = v79 + 1;
  }
  while ( v79 + 1 != a3 );
  v84 = -v65;
  v206 = v3;
  *(_DWORD *)(v3 + 504) = v84;
  *(_DWORD *)(v3 + 500) = v84;
  v85 = 0;
  v86 = *(_DWORD *)(v3 + 480);
  v124 = (int *)(v3 + 300);
  *(_DWORD *)(v3 + 496) = -v136;
  v146 = v3 + 212;
  v87 = v3 + 116;
  do
  {
    v137 = *(_DWORD *)(v87 - 8);
    v88 = *v124;
    v131 = *(_DWORD *)v87 + *(_DWORD *)(v87 + 4);
    if ( v131 > v85 )
    {
      v159 = v87;
      v153 = 8 * *(v124 - 1);
      do
      {
        v143 = v85 + v137;
        if ( v85 < v85 + v137 )
        {
          v89 = (int)v164 + 4 * (v85 + v137);
          v90 = (int)v164 + 4 * v85;
          v91 = v90 + 4;
          *(_DWORD *)v90 = v88 - v86;
          v92 = v88 + 8;
          v93 = ((unsigned int)(v89 - v90 - 4) >> 2) & 7;
          if ( v90 + 4 != v89 )
          {
            if ( !v93 )
              goto LABEL_240;
            if ( v93 != 1 )
            {
              if ( v93 != 2 )
              {
                if ( v93 != 3 )
                {
                  if ( v93 != 4 )
                  {
                    if ( v93 != 5 )
                    {
                      if ( v93 != 6 )
                      {
                        v91 = v90 + 8;
                        *(_DWORD *)(v90 + 4) = v92 - v86;
                        v92 = v88 + 16;
                      }
                      v94 = v92;
                      v91 += 4;
                      v92 += 8;
                      *(_DWORD *)(v91 - 4) = v94 - v86;
                    }
                    v95 = v92;
                    v91 += 4;
                    v92 += 8;
                    *(_DWORD *)(v91 - 4) = v95 - v86;
                  }
                  v96 = v92;
                  v91 += 4;
                  v92 += 8;
                  *(_DWORD *)(v91 - 4) = v96 - v86;
                }
                v97 = v92;
                v91 += 4;
                v92 += 8;
                *(_DWORD *)(v91 - 4) = v97 - v86;
              }
              v98 = v92;
              v91 += 4;
              v92 += 8;
              *(_DWORD *)(v91 - 4) = v98 - v86;
            }
            v99 = v92;
            v91 += 4;
            v92 += 8;
            *(_DWORD *)(v91 - 4) = v99 - v86;
            if ( v91 != v89 )
            {
LABEL_240:
              do
              {
                v91 += 32;
                *(_DWORD *)(v91 - 32) = v92 - v86;
                *(_DWORD *)(v91 - 28) = v92 + 8 - v86;
                *(_DWORD *)(v91 - 24) = v92 + 16 - v86;
                *(_DWORD *)(v91 - 20) = v92 + 24 - v86;
                *(_DWORD *)(v91 - 16) = v92 + 32 - v86;
                v100 = v92 + 48;
                *(_DWORD *)(v91 - 12) = v92 + 40 - v86;
                v101 = v92 + 56;
                v92 += 64;
                *(_DWORD *)(v91 - 8) = v100 - v86;
                *(_DWORD *)(v91 - 4) = v101 - v86;
              }
              while ( v91 != v89 );
            }
          }
          v85 = v143;
        }
        v88 += v153;
      }
      while ( v131 > v85 );
      v87 = v159;
    }
    v124 += 4;
    v87 += 32;
  }
  while ( v87 != v146 );
  v102 = *(_DWORD *)(a2 + 60) < 0x1Fu;
  v103 = *(_DWORD *)(a2 + 60) == 31;
  *(_DWORD *)(v206 + 280) = -1;
  *(_DWORD *)(v206 + 276) = -1;
  *(_DWORD *)(v206 + 272) = -1;
  *(_DWORD *)(v206 + 284) = 4 * (a3 == 4) - 1;
  if ( !v102 && !v103 )
    *(_DWORD *)(v206 + 60) = 31;
  *(_DWORD *)(v206 + 768) = 0;
  v104 = 1;
  *(_DWORD *)(v206 + 772) = 0;
  *(_DWORD *)(v206 + 776) = -1;
  *(_DWORD *)(v206 + 780) = -1;
  if ( *(_BYTE *)a2 <= 3u )
  {
    v104 = 0;
    if ( *(_BYTE *)a2 == 3 )
    {
      v104 = 1;
      if ( *(_BYTE *)(a2 + 1) <= 2u )
      {
        v104 = 0;
        if ( *(_BYTE *)(a2 + 1) == 2 )
          v104 = *(_BYTE *)(a2 + 2) != 0;
      }
    }
  }
  *(_BYTE *)(v206 + 793) = v104;
  return 0;
}
