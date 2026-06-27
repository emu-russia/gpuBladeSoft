unsigned int __cdecl sub_6F7816A0(int a1, int a2, signed int a3, int a4, int a5)
{
  int v5; // ebx@1
  int v6; // eax@1
  int v7; // esi@2
  unsigned int result; // eax@2
  void *v9; // ebp@10
  int v10; // esi@11
  int v11; // edx@16
  int v12; // ebx@17
  signed int v13; // eax@24
  int v14; // eax@27
  signed int v15; // ebx@27
  signed int v16; // eax@28
  int v17; // esi@29
  signed int v18; // eax@31
  int v19; // ebx@33
  unsigned int v20; // edx@35
  int v21; // edi@35
  unsigned int v22; // ecx@36
  int v23; // eax@41
  signed int v24; // edi@41
  int v25; // edx@43
  int v26; // eax@43
  int v27; // eax@54
  int v28; // ebx@55
  int v29; // eax@55
  signed int v30; // ecx@55
  int v31; // eax@55
  signed int v32; // ecx@55
  unsigned int v33; // edx@55
  int v34; // edx@56
  _BYTE *v35; // eax@57
  unsigned int v36; // eax@58
  unsigned int v37; // eax@60
  const char *v38; // edi@60
  int v39; // ebx@62
  signed int v40; // eax@62
  unsigned int v41; // edx@65
  signed int *v42; // eax@67
  signed int v43; // eax@69
  int v44; // ecx@69
  unsigned int v45; // eax@71
  int v46; // ebx@71
  unsigned int v47; // eax@73
  int v48; // eax@74
  bool v49; // zf@75
  const char *v50; // edi@76
  signed int v51; // ecx@76
  _BYTE *v52; // esi@76
  const char *v53; // edi@80
  signed int v54; // ecx@80
  _BYTE *v55; // esi@80
  const char *v56; // eax@84
  bool v57; // zf@84
  const char *v58; // edi@85
  signed int v59; // ecx@85
  _BYTE *v60; // esi@85
  signed int v61; // esi@91
  int v62; // eax@91
  unsigned int v63; // ebx@92
  int v64; // ecx@93
  int v65; // eax@95
  int v66; // edx@96
  char v67; // al@104
  char v68; // dl@106
  const char *v69; // esi@112
  int v70; // ebx@112
  int v71; // eax@112
  int v72; // edx@112
  char v73; // cl@114
  int i; // eax@116
  char v75; // dl@117
  bool v76; // dl@122
  int v77; // esi@131
  int v78; // eax@136
  signed int v79; // eax@141
  int v80; // eax@145
  unsigned int v81; // eax@154
  int v82; // edx@165
  int v83; // edx@168
  int v84; // eax@174
  const char *v85; // eax@178
  signed int v86; // eax@183
  int v87; // eax@184
  int v88; // ebx@185
  char *v89; // eax@191
  unsigned int v90; // ecx@192
  int v91; // edx@192
  unsigned int j; // esi@201
  int v93; // ebx@207
  unsigned int v94; // ebx@211
  unsigned int v95; // eax@212
  int v96; // eax@217
  unsigned int v97; // edx@220
  unsigned int v98; // eax@220
  int v99; // edx@220
  bool v100; // zf@222
  unsigned int v101; // eax@223
  char v102; // al@226
  int v103; // eax@229
  unsigned int v104; // edi@238
  int v105; // ebx@240
  unsigned __int8 v106; // al@241
  unsigned int v107; // edx@242
  int v108; // esi@244
  int v109; // ecx@244
  unsigned int v110; // eax@244
  int v111; // ebx@244
  int v112; // edx@248
  int v113; // ebx@257
  unsigned int l; // eax@257
  int v115; // ecx@260
  int v116; // edx@260
  char *v117; // eax@263
  unsigned int v118; // ecx@264
  int *v119; // esi@272
  char *v120; // edi@272
  int v121; // eax@272
  char *v122; // eax@275
  char *v123; // eax@278
  unsigned int v124; // eax@283
  char *v125; // eax@285
  unsigned int v126; // eax@286
  unsigned int v127; // edi@288
  int v128; // ebx@290
  unsigned int v129; // eax@292
  int v130; // esi@293
  unsigned int v131; // edx@293
  signed int v132; // edi@302
  _WORD *v133; // esi@304
  int v134; // eax@306
  int *v135; // esi@307
  char *v136; // edi@307
  int v137; // eax@307
  signed int v138; // eax@309
  unsigned int v139; // edx@310
  __int16 v140; // dx@312
  unsigned int v141; // esi@316
  unsigned int v142; // edi@316
  int v143; // ebx@318
  __int16 v144; // ax@319
  int v145; // ecx@320
  int v146; // edx@320
  int v147; // [sp+28h] [bp-94h]@2
  int v148; // [sp+28h] [bp-94h]@30
  signed int v149; // [sp+28h] [bp-94h]@112
  int v150; // [sp+2Ch] [bp-90h]@2
  int v151; // [sp+30h] [bp-8Ch]@10
  int v152; // [sp+38h] [bp-84h]@13
  unsigned int v153; // [sp+38h] [bp-84h]@235
  int v154; // [sp+3Ch] [bp-80h]@212
  unsigned int v155; // [sp+3Ch] [bp-80h]@220
  signed int v156; // [sp+40h] [bp-7Ch]@154
  unsigned int k; // [sp+44h] [bp-78h]@238
  unsigned int v158; // [sp+44h] [bp-78h]@288
  int v159; // [sp+48h] [bp-74h]@212
  char v160; // [sp+4Ch] [bp-70h]@9
  char v161; // [sp+4Dh] [bp-6Fh]@9
  char v162; // [sp+4Eh] [bp-6Eh]@9
  char v163; // [sp+4Fh] [bp-6Dh]@212
  int v164; // [sp+54h] [bp-68h]@2
  int v165; // [sp+58h] [bp-64h]@13
  int v166; // [sp+5Ch] [bp-60h]@207
  int v167; // [sp+60h] [bp-5Ch]@12
  int v168; // [sp+68h] [bp-54h]@153
  int v169; // [sp+78h] [bp-44h]@19
  int v170; // [sp+7Ch] [bp-40h]@17
  int v171; // [sp+80h] [bp-3Ch]@67
  int v172; // [sp+84h] [bp-38h]@137
  unsigned int v173; // [sp+88h] [bp-34h]@136
  int v174; // [sp+98h] [bp-24h]@187
  int v175; // [sp+9Ch] [bp-20h]@185

  v5 = *(_DWORD *)(*(_DWORD *)(a2 + 96) + 4);
  v6 = sub_6F76F0A0(*(_DWORD *)(*(_DWORD *)(a2 + 96) + 4), "sfnt");
  if ( !v6 )
    return 11;
  v7 = v6;
  v147 = sub_6F76F110(*(_DWORD *)(a2 + 96), (int)"postscript-cmaps");
  v150 = sub_6F76F0A0(v5, "pshinter");
  result = sub_6F771FF0(a1, 0);
  v164 = result;
  if ( result )
    return result;
  result = (*(int (__cdecl **)(int, int, signed int, int, int))(v7 + 4))(a1, a2, a3, a4, a5);
  v164 = result;
  if ( result )
  {
    result = sub_6F771FF0(a1, 0);
    v164 = result;
    if ( result )
      return result;
    v161 = 1;
    v162 = 0;
    v160 = 1;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a2 + 148) != 1330926671 )
    return 2;
  if ( a3 >= 0 )
  {
    v164 = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a2 + 508))(a2, 1751474532, a1, 0);
    if ( v164 )
    {
      result = (*(int (__cdecl **)(int, int))(v7 + 32))(a2, a1);
      v164 = result;
      if ( result )
        return result;
      v161 = 1;
      v160 = 1;
    }
    else
    {
      result = (*(int (__cdecl **)(int, int, signed int, int, int))(v7 + 8))(a1, a2, a3, a4, a5);
      v164 = result;
      if ( result )
        return result;
      v161 = 0;
      v160 = 0;
    }
    result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a2 + 508))(a2, 1128678944, a1, 0);
    v164 = result;
    if ( result )
      return result;
    v162 = 1;
LABEL_10:
    v151 = *(_DWORD *)(a2 + 100);
    v9 = sub_6F773A50(*(_DWORD *)(a2 + 100), 2980, &v164);
    result = v164;
    if ( v164 )
      return result;
    v10 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a2 + 656) = v9;
    *(_DWORD *)v9 = 0;
    *((_DWORD *)v9 + 744) = 0;
    memset32(
      (void *)(((unsigned int)v9 + 4) & 0xFFFFFFFC),
      result,
      ((unsigned int)v9 + -(((unsigned int)v9 + 4) & 0xFFFFFFFC) + 2980) >> 2);
    do
    {
      *(int *)((char *)&v167 + result) = 0;
      result += 4;
    }
    while ( result < 0x20 );
    *((_DWORD *)v9 + 1) = v10;
    *(_DWORD *)v9 = a1;
    v152 = sub_6F7720A0(a1);
    result = sub_6F7728E0(a1, (int)&unk_6FB56680, (int)v9);
    v165 = result;
    if ( result )
      goto LABEL_16;
    if ( *((_BYTE *)v9 + 16) != 1 || (v80 = *((_BYTE *)v9 + 18), (unsigned __int8)v80 <= 3u) || *((_BYTE *)v9 + 19) > 4u )
    {
      v165 = 2;
      result = 2;
      goto LABEL_16;
    }
    result = sub_6F772040(a1, v80 - 4);
    v165 = result;
    if ( result )
      goto LABEL_16;
    result = sub_6F77AD30((int)v9 + 20, a1, 0);
    v165 = result;
    if ( result )
      goto LABEL_16;
    result = sub_6F77AD30((int)v9 + 1208, a1, 0);
    v165 = result;
    if ( result )
      goto LABEL_16;
    result = sub_6F77AD30((int)&v167, a1, 1);
    v165 = result;
    if ( result )
      goto LABEL_16;
    result = sub_6F77AD30((int)v9 + 84, a1, 1);
    v165 = result;
    if ( result )
      goto LABEL_16;
    result = sub_6F967718(&v167, (char **)v9 + 329, (char **)v9 + 330);
    v165 = result;
    if ( result )
      goto LABEL_16;
    *((_DWORD *)v9 + 328) = v168;
    if ( v160 )
    {
      v156 = a3;
      v81 = *((_DWORD *)v9 + 7);
      if ( a3 >= v81 )
      {
        v165 = 6;
        result = 6;
        goto LABEL_16;
      }
      *((_DWORD *)v9 + 2) = v81;
    }
    else
    {
      if ( *((_DWORD *)v9 + 7) > 1u )
        goto LABEL_190;
      v156 = 0;
    }
    if ( a3 < 0 )
    {
      v11 = v167;
      if ( !v167 )
      {
        v164 = 0;
        goto LABEL_21;
      }
      goto LABEL_17;
    }
    result = sub_6F967BF7((int)v9 + 1324, (int)v9 + 1208, v156, a1, v152, v5);
    v165 = result;
    if ( result
      || (result = sub_6F771FF0(a1, *((_DWORD *)v9 + 359) + v152), (v165 = result) != 0)
      || (result = sub_6F77AD30((int)v9 + 1176, a1, 0), (v165 = result) != 0) )
    {
LABEL_16:
      v11 = v167;
      if ( !v167 )
        return result;
LABEL_17:
      v12 = *(_DWORD *)(v11 + 28);
      if ( v170 )
        sub_6F772340(v11, &v170);
      sub_6F773D90(v12, v169);
LABEL_20:
      result = v165;
      v164 = v165;
      if ( v165 )
        return result;
LABEL_21:
      v49 = *((_DWORD *)v9 + 364) == 0xFFFF;
      *((_DWORD *)v9 + 738) = v150;
      *((_DWORD *)v9 + 739) = v147;
      *(_DWORD *)(a2 + 4) = a3;
      *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 3);
      if ( !v49 || v147 )
      {
        if ( !*((_BYTE *)v9 + 1388) )
        {
          v13 = 1000;
          if ( !v160 )
            v13 = *(_WORD *)(a2 + 68);
          *((_DWORD *)v9 + 348) = v13;
        }
        v14 = *((_DWORD *)v9 + 346) >> 31;
        v15 = (v14 ^ *((_DWORD *)v9 + 346)) - v14;
        if ( v15 == 0x10000 )
        {
          v16 = *((_DWORD *)v9 + 350);
        }
        else
        {
          *((_DWORD *)v9 + 348) = sub_6F7C9760(*((_DWORD *)v9 + 348), (v14 ^ *((_DWORD *)v9 + 346)) - v14);
          *((_DWORD *)v9 + 343) = sub_6F7C9760(*((_DWORD *)v9 + 343), v15);
          *((_DWORD *)v9 + 345) = sub_6F7C9760(*((_DWORD *)v9 + 345), v15);
          *((_DWORD *)v9 + 344) = sub_6F7C9760(*((_DWORD *)v9 + 344), v15);
          *((_DWORD *)v9 + 346) = sub_6F7C9760(*((_DWORD *)v9 + 346), v15);
          *((_DWORD *)v9 + 349) = sub_6F7C9760(*((_DWORD *)v9 + 349), v15);
          v16 = sub_6F7C9760(*((_DWORD *)v9 + 350), v15);
        }
        v17 = *((_DWORD *)v9 + 474);
        *((_DWORD *)v9 + 349) >>= 16;
        *((_DWORD *)v9 + 350) = v16 >> 16;
        if ( v17 )
        {
          v148 = (int)v9 + 1372;
          do
          {
            v19 = *((_DWORD *)v9 + --v17 + 475);
            if ( *(_BYTE *)(v19 + 64) )
            {
              if ( *((_BYTE *)v9 + 1388) )
              {
                v20 = *((_DWORD *)v9 + 348);
                v21 = 1;
                if ( v20 > 1 )
                {
                  v22 = *(_DWORD *)(v19 + 68);
                  if ( v22 > 1 )
                  {
                    if ( v20 <= v22 )
                      v22 = *((_DWORD *)v9 + 348);
                    v21 = v22;
                  }
                }
                sub_6F7C9D30(v148, v19 + 48, v21);
                sub_6F7C9F20(v19 + 72, v148, v21);
                *(_DWORD *)(v19 + 68) = sub_6F7C9420(*(_DWORD *)(v19 + 68), *((_DWORD *)v9 + 348), v21);
              }
            }
            else
            {
              v25 = *((_DWORD *)v9 + 350);
              *(_DWORD *)(v19 + 48) = *((_DWORD *)v9 + 343);
              *(_DWORD *)(v19 + 52) = *((_DWORD *)v9 + 344);
              *(_DWORD *)(v19 + 56) = *((_DWORD *)v9 + 345);
              *(_DWORD *)(v19 + 60) = *((_DWORD *)v9 + 346);
              v26 = *((_DWORD *)v9 + 349);
              *(_DWORD *)(v19 + 76) = v25;
              *(_DWORD *)(v19 + 72) = v26;
              *(_DWORD *)(v19 + 68) = *((_DWORD *)v9 + 348);
            }
            v23 = *(_DWORD *)(v19 + 60) >> 31;
            v24 = (v23 ^ *(_DWORD *)(v19 + 60)) - v23;
            if ( v24 == 0x10000 )
            {
              v18 = *(_DWORD *)(v19 + 76);
            }
            else
            {
              *(_DWORD *)(v19 + 68) = sub_6F7C9760(*(_DWORD *)(v19 + 68), (v23 ^ *(_DWORD *)(v19 + 60)) - v23);
              *(_DWORD *)(v19 + 48) = sub_6F7C9760(*(_DWORD *)(v19 + 48), v24);
              *(_DWORD *)(v19 + 56) = sub_6F7C9760(*(_DWORD *)(v19 + 56), v24);
              *(_DWORD *)(v19 + 52) = sub_6F7C9760(*(_DWORD *)(v19 + 52), v24);
              *(_DWORD *)(v19 + 60) = sub_6F7C9760(*(_DWORD *)(v19 + 60), v24);
              *(_DWORD *)(v19 + 72) = sub_6F7C9760(*(_DWORD *)(v19 + 72), v24);
              v18 = sub_6F7C9760(*(_DWORD *)(v19 + 76), v24);
            }
            *(_DWORD *)(v19 + 72) >>= 16;
            *(_DWORD *)(v19 + 76) = v18 >> 16;
          }
          while ( v17 );
        }
        if ( !v160 )
        {
          v61 = *((_DWORD *)v9 + 364);
          if ( v61 != 0xFFFF )
            goto LABEL_140;
          goto LABEL_164;
        }
        v49 = *((_DWORD *)v9 + 364) == 0xFFFF;
        *(_DWORD *)a2 = *((_DWORD *)v9 + 2);
        if ( v49 )
          v27 = *((_DWORD *)v9 + 296);
        else
          v27 = *((_DWORD *)v9 + 292) + 1;
        *(_DWORD *)(a2 + 16) = v27;
        v28 = *((_WORD *)v9 + 707);
        *(_DWORD *)(a2 + 52) = *((_WORD *)v9 + 705);
        v29 = *((_DWORD *)v9 + 354);
        *(_DWORD *)(a2 + 56) = v28;
        *(_DWORD *)(a2 + 60) = (v29 + 0xFFFF) >> 16;
        v30 = *((_DWORD *)v9 + 355) + 0xFFFF;
        v31 = *((_DWORD *)v9 + 348);
        *(_WORD *)(a2 + 72) = v28;
        v32 = v30 >> 16;
        *(_WORD *)(a2 + 68) = v31;
        *(_DWORD *)(a2 + 64) = v32;
        *(_WORD *)(a2 + 70) = v32;
        v33 = (unsigned int)((unsigned __int64)(20615843028i64 * (unsigned __int16)v31) >> 32) >> 2;
        if ( (signed __int16)v33 < v32 - v28 )
        {
          *(_WORD *)(a2 + 74) = v32 - v28;
          v34 = a2;
        }
        else
        {
          *(_WORD *)(a2 + 74) = v33;
          v34 = a2;
        }
        *(_WORD *)(v34 + 80) = *((_WORD *)v9 + 679);
        *(_WORD *)(v34 + 82) = *((_WORD *)v9 + 681);
        v35 = sub_6F77F290((int)v9, a3);
        *(_DWORD *)(a2 + 20) = v35;
        if ( !v35 )
        {
          v85 = (const char *)sub_6F77AC50((int)v9, *((_DWORD *)v9 + 374));
          if ( v85 )
          {
            *(_DWORD *)(a2 + 20) = sub_6F773E40(v151, v85, &v171);
            v42 = &v171;
            goto LABEL_68;
          }
LABEL_67:
          v42 = &v171;
LABEL_68:
          *(_DWORD *)(a2 + 24) = sub_6F773E40(v151, "Regular", v42);
LABEL_69:
          v43 = (unsigned __int8)v162 < 1u ? 2069 : 2077;
          v44 = *((_DWORD *)v9 + 338);
          if ( !*((_BYTE *)v9 + 1348) )
            v43 = (unsigned __int8)v162 < 1u ? 2065 : 2073;
          *(_DWORD *)(a2 + 8) |= v43;
          v45 = *((_DWORD *)v9 + 336);
          v46 = v44 != 0;
          if ( v45 != 0xFFFF )
          {
            if ( v45 <= 0x186 )
            {
              v82 = *((_DWORD *)v9 + 739);
              if ( v82 )
              {
                v48 = (*(int (__cdecl **)(_DWORD))(v82 + 20))(*((_DWORD *)v9 + 336));
                goto LABEL_75;
              }
            }
            else
            {
              v47 = v45 - 391;
              if ( v47 < *((_DWORD *)v9 + 328) )
              {
                v48 = *(_DWORD *)(*((_DWORD *)v9 + 329) + 4 * v47);
LABEL_75:
                v49 = v48 == 0;
                if ( v48 )
                {
                  v50 = "Bold";
                  v51 = 5;
                  v52 = (_BYTE *)v48;
                  do
                  {
                    if ( !v51 )
                      break;
                    v49 = *v52++ == *v50++;
                    --v51;
                  }
                  while ( v49 );
                  if ( v49 )
                    goto LABEL_90;
                  v53 = "Black";
                  v54 = 6;
                  v55 = (_BYTE *)v48;
                  do
                  {
                    if ( !v54 )
                      break;
                    v49 = *v55++ == *v53++;
                    --v54;
                  }
                  while ( v49 );
                  if ( v49 )
                    goto LABEL_90;
                }
                goto LABEL_84;
              }
            }
          }
LABEL_84:
          v56 = *(const char **)(a2 + 24);
          v57 = v56 == 0;
          if ( !v56 )
            goto LABEL_91;
          v58 = "Bold";
          v59 = 4;
          v60 = *(_BYTE **)(a2 + 24);
          do
          {
            if ( !v59 )
              break;
            v57 = *v60++ == *v58++;
            --v59;
          }
          while ( v57 );
          if ( !v57 && strncmp(v56, "Black", 5u) )
          {
LABEL_91:
            v61 = *((_DWORD *)v9 + 364);
            v62 = a2;
            *(_DWORD *)(a2 + 12) = v46;
            if ( v61 != 0xFFFF )
            {
              v63 = *(_DWORD *)(a2 + 36);
              *(_DWORD *)(a2 + 8) |= 0x1000u;
              if ( !v63 )
                return v164;
LABEL_93:
              v64 = *(_DWORD *)(v62 + 40);
              if ( *(_DWORD *)(*(_DWORD *)v64 + 8) == 65539 || !*(_WORD *)(*(_DWORD *)v64 + 8) )
                goto LABEL_135;
              v65 = 0;
              while ( ++v65 < v63 )
              {
                v66 = *(_DWORD *)(v64 + 4 * v65);
                if ( *(_DWORD *)(v66 + 8) == 65539 || !*(_WORD *)(v66 + 8) )
                  goto LABEL_135;
              }
              if ( v61 != 0xFFFF && v161 )
                return v164;
LABEL_141:
              v173 = 65539;
              v171 = a2;
              v172 = 1970170211;
              v79 = sub_6F76D420((int)&unk_6FB566E0, 0, (int)&v171, 0);
              if ( v79 && (_BYTE)v79 != -93 )
                return v79;
              v164 = 0;
              if ( !*(_DWORD *)(a2 + 92) && *(_DWORD *)(a2 + 36) != v63 )
                *(_DWORD *)(a2 + 92) = *(_DWORD *)(*(_DWORD *)(a2 + 40) + 4 * v63);
LABEL_135:
              if ( *((_DWORD *)v9 + 31) )
              {
                v171 = a2;
                LOWORD(v173) = 7;
                v78 = *((_DWORD *)v9 + 30);
                if ( v78 )
                {
                  if ( v78 == 1 )
                  {
                    HIWORD(v173) = 1;
                    v172 = 1094992453;
                  }
                  else
                  {
                    HIWORD(v173) = 2;
                    v172 = 1094992451;
                  }
                }
                else
                {
                  HIWORD(v173) = 0;
                  v172 = 1094995778;
                }
                return sub_6F76D420((int)&unk_6FB56720, 0, (int)&v171, 0);
              }
              return v164;
            }
LABEL_164:
            v61 = 0xFFFF;
            *(_DWORD *)(a2 + 8) |= 0x200u;
LABEL_140:
            v62 = a2;
            v63 = *(_DWORD *)(a2 + 36);
            if ( !v63 )
              goto LABEL_141;
            goto LABEL_93;
          }
LABEL_90:
          v46 |= 2u;
          goto LABEL_91;
        }
        v36 = *((_DWORD *)v9 + 334);
        if ( v36 != 0xFFFF )
        {
          if ( v36 > 0x186 )
          {
            v37 = v36 - 391;
            v38 = 0;
            if ( v37 < *((_DWORD *)v9 + 328) )
              v38 = *(const char **)(*((_DWORD *)v9 + 329) + 4 * v37);
LABEL_62:
            v39 = *(_DWORD *)(a2 + 20);
            v40 = strlen(*(const char **)(a2 + 20)) + 1;
            while ( v40 > 6 && *(_BYTE *)(v39 + 6) == 43 )
            {
              v76 = 0;
              if ( (unsigned __int8)(*(_BYTE *)(v39 + 1) - 65) <= 0x19u )
                v76 = (unsigned __int8)(*(_BYTE *)v39 - 65) <= 0x19u;
              if ( (unsigned __int8)(*(_BYTE *)(v39 + 2) - 65) >= 0x1Au )
                v76 = 0;
              if ( (unsigned __int8)(*(_BYTE *)(v39 + 3) - 65) > 0x19u
                || (unsigned __int8)(*(_BYTE *)(v39 + 4) - 65) > 0x19u
                || (unsigned __int8)(*(_BYTE *)(v39 + 5) - 65) > 0x19u
                || !v76 )
              {
                break;
              }
              if ( v40 == 7 )
              {
                v40 = 0;
              }
              else
              {
                v77 = v40 - 7;
                memmove((void *)v39, (const void *)(v39 + 7), v40 - 7);
                v40 = v77;
              }
            }
            v41 = *((_DWORD *)v9 + 335);
            if ( v41 )
            {
              v84 = sub_6F77AC50((int)v9, v41);
              if ( v84 )
                v39 = v84;
            }
            if ( v38 )
            {
LABEL_104:
              v67 = *v38;
              while ( v67 )
              {
                v68 = *(_BYTE *)v39;
                if ( v67 == *(_BYTE *)v39 )
                {
                  ++v39;
LABEL_103:
                  ++v38;
                  goto LABEL_104;
                }
                if ( v67 == 32 || v67 == 45 )
                  goto LABEL_103;
                if ( v68 != 32 && v68 != 45 )
                {
                  if ( v68 )
                    goto LABEL_67;
                  v69 = (const char *)sub_6F773E40(v151, v38, &v171);
                  v70 = *(_DWORD *)(a2 + 20);
                  v149 = strlen(*(const char **)(a2 + 20));
                  v71 = strlen(v69);
                  v72 = 0;
                  if ( v149 > v71 )
                  {
                    while ( v71 >= 1 - v72 )
                    {
                      v73 = *(_BYTE *)(v70 + v149 + v72-- - 1);
                      if ( v73 != *(&v69[v71] + v72) )
                        goto LABEL_121;
                    }
                    for ( i = v149 - v71 - 1; i > 0; --i )
                    {
                      v75 = *(_BYTE *)(v70 + i);
                      if ( (v75 - 43) & 0xFD && v75 != 32 && v75 != 95 )
                      {
                        *(_BYTE *)(v70 + i + 1) = 0;
                        break;
                      }
                    }
                  }
LABEL_121:
                  *(_DWORD *)(a2 + 24) = v69;
                  goto LABEL_69;
                }
                ++v39;
              }
            }
            goto LABEL_67;
          }
          v83 = *((_DWORD *)v9 + 739);
          if ( v83 )
          {
            v38 = (const char *)(*(int (__cdecl **)(_DWORD))(v83 + 20))(*((_DWORD *)v9 + 334));
            goto LABEL_62;
          }
        }
        v38 = 0;
        goto LABEL_62;
      }
      return 11;
    }
    if ( *((_DWORD *)v9 + 364) == 0xFFFF )
    {
      *((_DWORD *)v9 + 474) = 0;
      goto LABEL_189;
    }
    v165 = sub_6F771FF0(a1, *((_DWORD *)v9 + 372) + v152);
    if ( !v165 )
    {
      v165 = sub_6F77AD30((int)&v171, a1, 0);
      if ( !v165 )
      {
        v86 = v173;
        if ( v173 > 0x100 )
        {
          v87 = v171;
          if ( !v171 )
            goto LABEL_189;
          goto LABEL_185;
        }
        *((_DWORD *)v9 + 474) = v173;
        v89 = sub_6F773B30(v10, 572, 0, v86, 0, &v165);
        if ( !v165 )
        {
          v90 = v173;
          v91 = 0;
          while ( v91 != v90 )
          {
            *((_DWORD *)v9 + v91++ + 475) = v89;
            v89 += 572;
          }
          for ( j = 0; j < v173; ++j )
          {
            v165 = sub_6F967BF7(*((_DWORD *)v9 + j + 475), (int)&v171, j, a1, v152, v5);
            if ( v165 )
              goto LABEL_205;
          }
          v93 = *((_DWORD *)v9 + 296);
          v166 = sub_6F771FF0(a1, *((_DWORD *)v9 + 373) + v152);
          if ( !v166 )
          {
            v102 = sub_6F7725A0(a1, &v166);
            if ( !v166 )
            {
              *((_BYTE *)v9 + 2924) = v102;
              *((_DWORD *)v9 + 736) = 0;
              if ( !v102 )
              {
                *((_DWORD *)v9 + 734) = v93;
                goto LABEL_232;
              }
              if ( v102 == 3 )
              {
                v103 = (unsigned __int16)sub_6F772620(a1, &v166);
                if ( v166 )
                  goto LABEL_208;
                if ( v103 )
                {
                  *((_DWORD *)v9 + 734) = 3 * v103 + 2;
LABEL_232:
                  v166 = sub_6F772240(a1, *((_DWORD *)v9 + 734), (int *)v9 + 733);
                  goto LABEL_208;
                }
              }
              v166 = 3;
            }
          }
LABEL_208:
          v165 = v166;
          v87 = v171;
          if ( !v171 )
            goto LABEL_188;
          goto LABEL_185;
        }
LABEL_205:
        v87 = v171;
        if ( v171 )
        {
LABEL_185:
          v88 = *(_DWORD *)(v87 + 28);
          if ( v175 )
            sub_6F772340(v87, &v175);
          sub_6F773D90(v88, v174);
          memset(&v171, 0, 0x20u);
LABEL_188:
          if ( v165 )
            goto LABEL_162;
LABEL_189:
          if ( !*((_DWORD *)v9 + 359) )
          {
LABEL_190:
            v165 = 3;
            result = 3;
            goto LABEL_16;
          }
          *((_DWORD *)v9 + 3) = *((_DWORD *)v9 + 296);
          result = sub_6F967718((int *)v9 + 21, (char **)v9 + 327, 0);
          v165 = result;
          if ( result )
            goto LABEL_16;
          v94 = *((_DWORD *)v9 + 3);
          if ( !v94 )
          {
LABEL_219:
            *((_DWORD *)v9 + 326) = sub_6F77F290((int)v9, v156);
            goto LABEL_162;
          }
          v159 = (int)v9 + 1152;
          v154 = *(_DWORD *)(a1 + 28);
          v163 = v161 & (*((_DWORD *)v9 + 364) != 0xFFFF);
          v95 = *((_DWORD *)v9 + 357);
          v171 = 0;
          if ( v95 > 2 )
          {
            v124 = v152 + v95;
            *((_DWORD *)v9 + 289) = v124;
            v171 = sub_6F771FF0(a1, v124);
            if ( v171 )
              goto LABEL_217;
            *((_DWORD *)v9 + 288) = (unsigned __int8)sub_6F7725A0(a1, &v171);
            if ( v171 )
              goto LABEL_217;
            v125 = sub_6F773B30(v154, 2, 0, v94, 0, &v171);
            v49 = v171 == 0;
            *((_DWORD *)v9 + 290) = v125;
            if ( !v49 )
              goto LABEL_217;
            *(_WORD *)v125 = 0;
            v126 = *((_DWORD *)v9 + 288);
            if ( v126 )
            {
              if ( v126 > 2 )
                goto LABEL_216;
              v127 = 1;
              v158 = v94;
              while ( v158 > v127 )
              {
                v128 = sub_6F772620(a1, &v171);
                if ( v171 )
                  goto LABEL_217;
                if ( *((_DWORD *)v9 + 288) == 2 )
                {
                  v129 = (unsigned __int16)sub_6F772620(a1, &v171);
                  if ( v171 )
                    goto LABEL_217;
                }
                else
                {
                  v129 = (unsigned __int8)sub_6F7725A0(a1, &v171);
                  if ( v171 )
                    goto LABEL_217;
                }
                v130 = *((_DWORD *)v9 + 290);
                v131 = v127;
                if ( (unsigned __int16)v128 > 0xFFFF - v129 )
                  v129 = 0xFFFF - (unsigned __int16)v128;
                do
                  *(_WORD *)(v130 + 2 * v131++) = v128++;
                while ( v129 >= v131 - v127 && v158 > v131 );
                v127 = v131;
              }
              v94 = v158;
            }
            else
            {
              v132 = 1;
              v171 = sub_6F772380(a1, 2 * v94 - 2);
              if ( v171 )
                goto LABEL_217;
              while ( v94 != v132 )
              {
                v133 = (_WORD *)(*((_DWORD *)v9 + 290) + 2 * v132++);
                *v133 = sub_6F7724C0(a1);
              }
              sub_6F772460(a1);
            }
            goto LABEL_268;
          }
          *((_DWORD *)v9 + 289) = v95;
          if ( v95 == 1 )
          {
            if ( v94 > 0xA6 )
              goto LABEL_216;
            v123 = sub_6F773B30(v154, 2, 0, v94, 0, &v171);
            v49 = v171 == 0;
            *((_DWORD *)v9 + 290) = v123;
            if ( v49 )
            {
              v118 = 2 * v94;
              if ( 2 * v94 < 4 )
              {
                if ( v118 )
                {
                  *v123 = dword_6FB56C20;
                  if ( v118 & 2 )
                    *(_WORD *)&v123[v118 - 2] = word_6FB56C1E[v118 / 2];
                }
LABEL_268:
                if ( v163 )
                  v171 = sub_6F967680(v159, v94, v154);
                if ( !v171 )
                {
                  v165 = 0;
                  goto LABEL_218;
                }
                goto LABEL_217;
              }
              v119 = &dword_6FB56C20;
              v120 = (char *)((unsigned int)(v123 + 4) & 0xFFFFFFFC);
              *(_DWORD *)v123 = 0x10000;
              *(_DWORD *)&v123[v118 - 4] = *(_DWORD *)((char *)&unk_6FB56C1C + v118);
              v121 = v123 - v120;
LABEL_273:
              qmemcpy(v120, (char *)v119 - v121, 4 * ((v118 + v121) >> 2));
              goto LABEL_268;
            }
          }
          else if ( v95 == 2 )
          {
            if ( v94 > 0x57 )
              goto LABEL_216;
            v122 = sub_6F773B30(v154, 2, 0, v94, 0, &v171);
            v49 = v171 == 0;
            *((_DWORD *)v9 + 290) = v122;
            if ( v49 )
            {
              qmemcpy(v122, &unk_6FB56B60, 2 * v94);
              goto LABEL_268;
            }
          }
          else
          {
            if ( v94 > 0xE5 )
            {
LABEL_216:
              v171 = 3;
              goto LABEL_217;
            }
            v117 = sub_6F773B30(v154, 2, 0, v94, 0, &v171);
            v49 = v171 == 0;
            *((_DWORD *)v9 + 290) = v117;
            if ( v49 )
            {
              v118 = 2 * v94;
              if ( 2 * v94 < 4 )
              {
                if ( v118 )
                {
                  *v117 = dword_6FB56D80;
                  if ( v118 & 2 )
                    *(_WORD *)&v117[v118 - 2] = word_6FB56D7E[v118 / 2];
                }
                goto LABEL_268;
              }
              v119 = &dword_6FB56D80;
              v120 = (char *)((unsigned int)(v117 + 4) & 0xFFFFFFFC);
              *(_DWORD *)v117 = 0x10000;
              *(_DWORD *)&v117[v118 - 4] = *(_DWORD *)((char *)&unk_6FB56D7C + v118);
              v121 = v117 - v120;
              goto LABEL_273;
            }
          }
LABEL_217:
          sub_6F773D90(v154, *((_DWORD *)v9 + 290));
          v96 = *((_DWORD *)v9 + 291);
          *((_DWORD *)v9 + 290) = 0;
          sub_6F773D90(v154, v96);
          *((_DWORD *)v9 + 288) = 0;
          result = v171;
          *((_DWORD *)v9 + 291) = 0;
          *((_DWORD *)v9 + 289) = 0;
          *((_DWORD *)v9 + 290) = 0;
          v165 = result;
          if ( result )
            goto LABEL_16;
LABEL_218:
          if ( *((_DWORD *)v9 + 364) != 0xFFFF )
            goto LABEL_219;
          v97 = *((_DWORD *)v9 + 3);
          v98 = *((_DWORD *)v9 + 358);
          v171 = 0;
          v155 = v97;
          v99 = 0;
          if ( *((_DWORD *)v9 + 290) )
          {
            do
            {
              *((_WORD *)v9 + v99 + 64) = 0;
              *((_WORD *)v9 + v99++ + 320) = 0;
            }
            while ( v99 != 256 );
            v100 = v98 == 1;
            if ( v98 <= 1 )
            {
              v134 = (int)v9 + 128;
              if ( v100 )
              {
                v135 = &dword_6FB56760;
                v136 = (char *)(((unsigned int)v9 + 132) & 0xFFFFFFFC);
                *((_DWORD *)v9 + 32) = 0;
                v137 = v134 - (_DWORD)v136;
                *((_DWORD *)v9 + 159) = 24772985;
              }
              else
              {
                v135 = (int *)dword_6FB56960;
                v136 = (char *)(((unsigned int)v9 + 132) & 0xFFFFFFFC);
                *((_DWORD *)v9 + 32) = 0;
                v137 = v134 - (_DWORD)v136;
                *((_DWORD *)v9 + 159) = 0;
              }
              qmemcpy(v136, (char *)v135 - v137, 4 * ((unsigned int)(v137 + 512) >> 2));
              *((_DWORD *)v9 + 31) = 0;
              v171 = sub_6F967680(v159, v155, *(_DWORD *)(a1 + 28));
              if ( !v171 )
              {
                v138 = 1;
                do
                {
                  v139 = *((_WORD *)v9 + v138 + 63);
                  if ( *((_WORD *)v9 + v138 + 63)
                    && v139 <= *((_DWORD *)v9 + 292)
                    && (v140 = *(_WORD *)(*((_DWORD *)v9 + 291) + 2 * v139)) != 0 )
                  {
                    *((_DWORD *)v9 + 31) = v138;
                  }
                  else
                  {
                    *((_WORD *)v9 + v138 + 63) = 0;
                    v140 = 0;
                  }
                  *((_WORD *)v9 + v138++ + 319) = v140;
                }
                while ( v138 != 257 );
                v165 = 0;
                goto LABEL_219;
              }
              goto LABEL_224;
            }
            v101 = v152 + v98;
            *((_DWORD *)v9 + 30) = v101;
            v171 = sub_6F771FF0(a1, v101);
            if ( !v171 )
            {
              *((_DWORD *)v9 + 29) = (unsigned __int8)sub_6F7725A0(a1, &v171);
              if ( !v171 )
              {
                v153 = (unsigned __int8)sub_6F7725A0(a1, &v171);
                if ( !v171 )
                {
                  if ( *((_DWORD *)v9 + 29) & 0x7F )
                  {
                    if ( (*((_DWORD *)v9 + 29) & 0x7F) == 1 )
                    {
                      *((_DWORD *)v9 + 31) = 0;
                      v104 = 1;
                      for ( k = 0; v153 > k; ++k )
                      {
                        v105 = (unsigned __int8)sub_6F7725A0(a1, &v171);
                        if ( v171 )
                          goto LABEL_224;
                        v106 = sub_6F7725A0(a1, &v171);
                        if ( v171 )
                          goto LABEL_224;
                        v107 = v106 + 1;
                        if ( v107 > *((_DWORD *)v9 + 31) )
                          *((_DWORD *)v9 + 31) = v107;
                        v108 = (int)v9 + 2 * v105;
                        v109 = 2 * v104 - (_DWORD)v9 - 2 * v105;
                        v110 = v104;
                        v104 += v107;
                        v111 = v105 - v110;
                        while ( v110 < v104 )
                        {
                          if ( v110 + v111 <= 0xFF && v155 > v110 )
                          {
                            v112 = *((_DWORD *)v9 + 290);
                            *(_WORD *)(v108 + 640) = v110;
                            *(_WORD *)(v108 + 128) = *(_WORD *)(v109 + v112 + v108);
                          }
                          ++v110;
                          v108 += 2;
                        }
                      }
                      if ( *((_DWORD *)v9 + 31) > 0x100u )
                        *((_DWORD *)v9 + 31) = 256;
                      goto LABEL_253;
                    }
                    goto LABEL_233;
                  }
                  *((_DWORD *)v9 + 31) = v153 + 1;
                  v171 = sub_6F772380(a1, v153);
                  if ( !v171 )
                  {
                    v113 = *(_DWORD *)(a1 + 32);
                    for ( l = 1; v153 >= l; ++l )
                    {
                      if ( v155 > l )
                      {
                        v115 = *((_DWORD *)v9 + 290);
                        v116 = (int)v9 + 2 * *(_BYTE *)(v113 + l - 1);
                        *(_WORD *)(v116 + 640) = l;
                        *(_WORD *)(v116 + 128) = *(_WORD *)(v115 + 2 * l);
                      }
                    }
                    sub_6F772460(a1);
LABEL_253:
                    if ( !(*((_BYTE *)v9 + 116) & 0x80) )
                      goto LABEL_254;
                    v141 = 0;
                    v142 = (unsigned __int8)sub_6F7725A0(a1, &v171);
                    if ( !v171 )
                    {
                      while ( v142 > v141 )
                      {
                        v143 = (unsigned __int8)sub_6F7725A0(a1, &v171);
                        if ( v171 )
                          goto LABEL_224;
                        v144 = sub_6F772620(a1, &v171);
                        if ( v171 )
                          goto LABEL_224;
                        v145 = (int)v9 + 2 * v143;
                        v146 = 0;
                        *(_WORD *)(v145 + 128) = v144;
                        while ( v155 != v146 )
                        {
                          if ( v144 == *(_WORD *)(*((_DWORD *)v9 + 290) + 2 * v146) )
                          {
                            *(_WORD *)(v145 + 640) = v146;
                            break;
                          }
                          ++v146;
                        }
                        ++v141;
                      }
LABEL_254:
                      result = v171;
                      v165 = v171;
                      if ( !v171 )
                        goto LABEL_219;
                      goto LABEL_16;
                    }
                    goto LABEL_224;
                  }
                }
              }
            }
LABEL_224:
            v165 = v171;
            goto LABEL_162;
          }
LABEL_233:
          v171 = 3;
          goto LABEL_224;
        }
      }
    }
LABEL_162:
    v11 = v167;
    if ( !v167 )
      goto LABEL_20;
    goto LABEL_17;
  }
  return result;
}
