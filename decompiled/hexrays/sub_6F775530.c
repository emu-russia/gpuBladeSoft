signed int __cdecl sub_6F775530(int a1, int a2, int a3)
{
  int v3; // ebp@1
  signed int result; // eax@1
  char *v5; // eax@3
  char *v6; // ecx@3
  char *v7; // ecx@4
  int v8; // ebp@5
  signed int v9; // eax@5
  size_t v10; // esi@5
  char *v11; // edi@5
  int v12; // eax@6
  int v13; // ecx@6
  int v14; // ebx@11
  int v15; // ebx@20
  int v16; // eax@20
  int v17; // eax@20
  int v18; // eax@20
  int v19; // eax@20
  int v20; // eax@20
  int v21; // eax@20
  int v22; // eax@21
  char v23; // dl@21
  int v24; // ebx@24
  char *v25; // esi@27
  signed int v26; // eax@31
  int v27; // eax@34
  int v28; // eax@39
  unsigned int v29; // ecx@42
  unsigned int v30; // edx@42
  int v31; // ebx@46
  int v32; // edx@46
  __int16 v33; // bx@50
  __int16 v34; // dx@52
  int v35; // edx@56
  unsigned int v36; // edx@57
  char *v37; // eax@61
  int v38; // ebx@63
  int v39; // eax@63
  int v40; // eax@63
  int v41; // eax@63
  int v42; // eax@63
  int v43; // eax@63
  int v44; // eax@63
  int v45; // eax@67
  int v46; // eax@69
  char v47; // dl@69
  const char *v48; // esi@69
  unsigned int v49; // ecx@69
  unsigned int v50; // ebx@69
  unsigned int v51; // eax@69
  int v52; // edi@70
  int v53; // eax@70
  int v54; // ebp@71
  int *v55; // eax@71
  int v56; // edx@74
  _BYTE *v57; // esi@75
  bool v58; // cf@75
  bool v59; // zf@75
  signed int v60; // ecx@76
  const char *v61; // edi@76
  int v62; // ebp@80
  int v63; // eax@80
  char v64; // dl@82
  const char *v65; // esi@82
  unsigned int v66; // ecx@82
  unsigned int v67; // ebx@82
  unsigned int v68; // eax@82
  int v69; // edi@83
  int v70; // eax@83
  int v71; // ebp@84
  int *v72; // eax@84
  int v73; // edx@87
  _BYTE *v74; // esi@88
  bool v75; // cf@88
  bool v76; // zf@88
  signed int v77; // ecx@89
  const char *v78; // edi@89
  int v79; // eax@93
  const char *v80; // eax@94
  int v81; // eax@99
  size_t v82; // eax@102
  signed int v83; // ebx@102
  size_t v84; // eax@104
  size_t v85; // eax@106
  size_t v86; // eax@108
  char *v87; // eax@111
  char *v88; // edx@111
  int v89; // edi@112
  const char *v90; // eax@113
  size_t v91; // esi@113
  char *v92; // ebx@115
  int v93; // eax@122
  char *v94; // eax@122
  char *v95; // ebx@122
  int v96; // edx@123
  __int16 v97; // si@123
  signed int v98; // ecx@124
  signed int v99; // eax@124
  signed __int64 v100; // rt2@124
  int v101; // edi@124
  int v102; // esi@125
  int v103; // ebx@126
  char *v104; // eax@126
  char *v105; // edx@126
  int v106; // esi@127
  int *v107; // ecx@128
  int v108; // edi@128
  int v109; // eax@128
  int v110; // ebx@129
  int v111; // esi@134
  char *v112; // eax@138
  _BYTE *v113; // eax@144
  char v114; // al@145
  int v115; // eax@147
  int v116; // eax@150
  char v117; // dl@150
  const char *v118; // esi@150
  unsigned int v119; // ecx@150
  unsigned int v120; // ebx@150
  unsigned int v121; // eax@150
  int v122; // edi@151
  int v123; // eax@151
  int v124; // ebp@152
  int *v125; // eax@152
  int v126; // edx@155
  _BYTE *v127; // esi@156
  bool v128; // cf@156
  bool v129; // zf@156
  signed int v130; // ecx@157
  const char *v131; // edi@157
  int v132; // ebp@161
  int v133; // eax@161
  char v134; // dl@163
  const char *v135; // esi@163
  unsigned int v136; // ecx@163
  unsigned int v137; // ebx@163
  unsigned int v138; // eax@163
  int v139; // edi@164
  int v140; // eax@164
  int v141; // ebp@165
  int *v142; // eax@165
  int v143; // edx@168
  _BYTE *v144; // esi@169
  bool v145; // cf@169
  bool v146; // zf@169
  signed int v147; // ecx@170
  const char *v148; // edi@170
  int v149; // eax@174
  char v150; // dl@176
  const char *v151; // esi@176
  unsigned int v152; // ecx@176
  unsigned int v153; // ebx@176
  unsigned int v154; // eax@176
  int v155; // edi@177
  int v156; // eax@177
  int v157; // ebp@178
  int *v158; // eax@178
  int v159; // edx@181
  _BYTE *v160; // esi@182
  bool v161; // cf@182
  bool v162; // zf@182
  signed int v163; // ecx@183
  const char *v164; // edi@183
  int v165; // eax@187
  char v166; // dl@189
  const char *v167; // esi@189
  unsigned int v168; // ecx@189
  unsigned int v169; // ebx@189
  unsigned int v170; // eax@189
  int v171; // edi@190
  int v172; // eax@190
  int v173; // ebp@191
  int *v174; // eax@191
  int v175; // edx@194
  _BYTE *v176; // esi@195
  bool v177; // cf@195
  bool v178; // zf@195
  signed int v179; // ecx@196
  const char *v180; // edi@196
  int v181; // eax@200
  _BYTE *v182; // edx@202
  _BYTE *v183; // eax@206
  int v184; // eax@208
  _BYTE *v185; // edx@209
  _BYTE *v186; // edx@214
  char v187; // al@215
  const char *v188; // eax@217
  int v189; // eax@228
  int v190; // esi@229
  int v191; // eax@229
  int v192; // eax@231
  int v193; // eax@233
  int v194; // eax@235
  int v195; // ecx@236
  int v196; // ebx@242
  int v197; // eax@242
  const char *v198; // eax@247
  void *v199; // eax@249
  void *v200; // edx@249
  const char *v201; // ebx@253
  int v202; // [sp+20h] [bp-8Ch]@3
  __int16 v203; // [sp+20h] [bp-8Ch]@234
  int v204; // [sp+24h] [bp-88h]@1
  signed int v205; // [sp+28h] [bp-84h]@5
  int v206; // [sp+28h] [bp-84h]@14
  char v207; // [sp+28h] [bp-84h]@34
  int v208; // [sp+2Ch] [bp-80h]@21
  int v209; // [sp+2Ch] [bp-80h]@67
  int v210; // [sp+2Ch] [bp-80h]@96
  unsigned int v211; // [sp+30h] [bp-7Ch]@5
  int v212; // [sp+30h] [bp-7Ch]@69
  int v213; // [sp+30h] [bp-7Ch]@150
  char *v214; // [sp+34h] [bp-78h]@21
  int v215; // [sp+34h] [bp-78h]@99
  int v216; // [sp+38h] [bp-74h]@6
  int v217; // [sp+3Ch] [bp-70h]@4
  signed int v218; // [sp+44h] [bp-68h]@5
  int v219; // [sp+48h] [bp-64h]@4
  int v220; // [sp+4Ch] [bp-60h]@34
  int v221; // [sp+58h] [bp-54h]@1
  int v222; // [sp+5Ch] [bp-50h]@3
  int v223; // [sp+60h] [bp-4Ch]@3
  int v224; // [sp+64h] [bp-48h]@3
  int v225; // [sp+68h] [bp-44h]@3
  int v226; // [sp+6Ch] [bp-40h]@3
  const char *v227; // [sp+70h] [bp-3Ch]@5
  const char *v228; // [sp+74h] [bp-38h]@99
  const char *v229; // [sp+78h] [bp-34h]@99
  const char *v230; // [sp+7Ch] [bp-30h]@99
  int v231; // [sp+80h] [bp-2Ch]@4
  size_t v232; // [sp+84h] [bp-28h]@103
  size_t v233; // [sp+88h] [bp-24h]@105
  size_t v234; // [sp+8Ch] [bp-20h]@107
  int v235; // [sp+B4h] [bp+8h]@71
  int v236; // [sp+B4h] [bp+8h]@84
  int v237; // [sp+B4h] [bp+8h]@152
  int v238; // [sp+B4h] [bp+8h]@165
  int v239; // [sp+B4h] [bp+8h]@178
  int v240; // [sp+B4h] [bp+8h]@191

  v3 = a2;
  v221 = 0;
  v204 = *(_DWORD *)(a2 + 100);
  result = sub_6F771FF0(a1, 0);
  v221 = result;
  if ( result )
    return result;
  v223 = 1;
  v224 = 1;
  v225 = 0;
  v226 = 8;
  v222 = 0;
  v5 = (char *)sub_6F773A50(v204, 139324, &v222);
  v6 = v5;
  v202 = (int)v5;
  result = v222;
  if ( v222 )
  {
    if ( !v6 )
    {
      v221 = v222;
      if ( (_BYTE)v222 != -80 )
        return result;
      goto LABEL_63;
    }
    v206 = 0;
    v219 = (int)(v6 + 139304);
    goto LABEL_15;
  }
  *((_DWORD *)v6 + 34826) = 0;
  *((_DWORD *)v6 + 34827) = 0;
  *((_DWORD *)v6 + 34828) = 0;
  *((_DWORD *)v6 + 34830) = v204;
  *((_DWORD *)v6 + 9) = &v223;
  *((_WORD *)v6 + 6) = 0x7FFF;
  *((_DWORD *)v6 + 34829) = v204;
  v219 = (int)(v6 + 139304);
  v231 = 0;
  v217 = *(_DWORD *)(a1 + 28);
  v7 = sub_6F773B30(*(_DWORD *)(a1 + 28), 1, 0, 1024, 0, &v231);
  if ( !v231 )
  {
    v211 = 1024;
    v8 = 0;
    v9 = 1024;
    v227 = (const char *)sub_6F778AE0;
    v10 = 0;
    *v7 = 0;
    v205 = 256;
    v218 = 1;
    v11 = v7;
    while ( 2 )
    {
      v12 = sub_6F7721D0(a1, &v11[v10], v9 - v10);
      v13 = v10 + v12;
      v216 = v12;
      while ( v8 < v13 )
      {
        v214 = &v11[v8];
        v22 = v11[v8];
        v23 = v11[v8];
        v208 = v11[v8];
        if ( v22 == v205 )
        {
          ++v8;
          v205 = 256;
        }
        else
        {
          if ( (_BYTE)v22 != 10 && (_BYTE)v22 != 13 )
          {
            v24 = v8;
            while ( v13 != ++v24 )
            {
              v23 = v11[v24];
              v25 = &v11[v24];
              if ( v23 == 13 || v23 == 10 )
              {
                *v25 = 0;
                v208 = v23;
                if ( *v214 == 26 || *v214 == 35 || v8 >= v24 )
                  goto LABEL_30;
                v220 = v13;
                v207 = v23;
                v27 = ((int (__cdecl *)(char *, int, signed int, const char **, int))v227)(
                        v214,
                        v24 - v8,
                        v218,
                        &v227,
                        v202);
                v231 = v27;
                v23 = v207;
                v13 = v220;
                if ( v27 == -1 )
                {
                  v27 = ((int (__fastcall *)(int, _DWORD))v227)(v220, (unsigned __int8)v207);
                  v23 = v207;
                  v13 = v220;
                  v231 = v27;
                }
                if ( !v27 )
                  goto LABEL_30;
                goto LABEL_37;
              }
            }
            break;
          }
          v24 = v8;
          *v214 = 0;
          v25 = &v11[v8];
LABEL_30:
          ++v218;
          v8 = v24 + 1;
          *v25 = v23;
          v205 = 13;
          if ( v208 != 10 )
          {
            v26 = 256;
            if ( v208 == 13 )
              v26 = 10;
            v205 = v26;
          }
        }
      }
      if ( v216 )
      {
        if ( v8 )
        {
          v37 = &v11[v8];
          v10 = v13 - v8;
          v8 = 0;
          memmove(v11, v37, v10);
          v9 = v211;
          continue;
        }
        if ( v211 > 0xFFFF )
        {
          v7 = v11;
          v3 = a2;
          v231 = 6;
          break;
        }
        v14 = 2 * v211;
        v10 = v211;
        v11 = sub_6F773B30(v217, 1, v211, 2 * v211, v11, &v231);
        if ( !v231 )
        {
          v211 *= 2;
          v9 = v14;
          continue;
        }
      }
      break;
    }
LABEL_37:
    v3 = a2;
    v7 = v11;
  }
  sub_6F773D90(v217, (int)v7);
  v222 = v231;
  if ( v231 )
  {
LABEL_66:
    sub_6F7747D0(*(_DWORD *)(v202 + 32));
    sub_6F773D90(v204, *(_DWORD *)(v202 + 32));
    *(_DWORD *)(v202 + 32) = 0;
    v206 = 0;
    goto LABEL_15;
  }
  v28 = *(_DWORD *)(v202 + 32);
  if ( v28 )
  {
    if ( *(_DWORD *)(v28 + 28) != 8 )
      *(_WORD *)(v28 + 32) = *(_WORD *)(v28 + 4);
    v29 = *(_DWORD *)(v28 + 52);
    v30 = *(_DWORD *)(v28 + 64);
    if ( *(_DWORD *)(v202 + 4) != v29 + v30 )
      *(_WORD *)(v28 + 278660) = 1;
    if ( **(_DWORD **)(v202 + 36) && __PAIR__(v29, v30) )
    {
      v31 = *(_WORD *)(v202 + 16);
      v32 = *(_WORD *)(v202 + 12);
      if ( v31 - v32 != *(_WORD *)(v28 + 4) )
      {
        *(_WORD *)(v28 + 4) = v31 - v32;
        *(_WORD *)(v28 + 278660) = 1;
      }
      if ( (_WORD)v32 != *(_WORD *)(v28 + 8) )
      {
        *(_WORD *)(v28 + 8) = v32;
        *(_WORD *)(v28 + 278660) = 1;
      }
      v33 = *(_WORD *)(v202 + 18);
      if ( *(_WORD *)(v28 + 12) != v33 )
      {
        *(_WORD *)(v28 + 12) = v33;
        *(_WORD *)(v28 + 278660) = 1;
      }
      v34 = *(_WORD *)(v202 + 20);
      if ( *(_WORD *)(v28 + 14) != v34 )
      {
        *(_WORD *)(v28 + 14) = v34;
        *(_WORD *)(v28 + 10) = -v34;
        *(_WORD *)(v28 + 278660) = 1;
      }
      if ( v34 + v33 != *(_WORD *)(v28 + 6) )
        *(_WORD *)(v28 + 6) = v33 + v34;
    }
    v35 = *(_DWORD *)v202;
    if ( !(*(_DWORD *)v202 & 1) )
    {
      v36 = *(_DWORD *)(v28 + 88);
      v206 = v28;
      if ( !v36 )
        goto LABEL_15;
      *(_DWORD *)(v28 + 84) = sub_6F773B30(*(_DWORD *)(v28 + 278664), 1, v36, v36 + 1, *(char **)(v28 + 84), &v222);
      if ( !v222 )
      {
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v202 + 32) + 84) + *(_DWORD *)(*(_DWORD *)(v202 + 32) + 88)) = 0;
        v206 = *(_DWORD *)(v202 + 32);
        goto LABEL_15;
      }
      goto LABEL_66;
    }
  }
  else
  {
    v35 = *(_DWORD *)v202;
    if ( !(*(_DWORD *)v202 & 1) )
    {
      v222 = 3;
      v206 = 0;
      goto LABEL_15;
    }
  }
  if ( v35 & 0x20 )
  {
    v222 = 186;
    v206 = 0;
  }
  else
  {
    v222 = 185;
    v206 = 0;
  }
LABEL_15:
  if ( *(_DWORD *)(v202 + 139316) )
  {
    sub_6F773D90(*(_DWORD *)(v202 + 139316), *(_DWORD *)(v202 + 139304));
    *(_DWORD *)v219 = 0;
    *(_DWORD *)(v219 + 4) = 0;
    *(_DWORD *)(v219 + 8) = 0;
    *(_DWORD *)(v219 + 12) = 0;
  }
  sub_6F773D90(v204, v202);
  result = v222;
  v221 = v222;
  if ( (_BYTE)v222 == -80 )
  {
LABEL_63:
    v38 = *(_DWORD *)(v3 + 100);
    sub_6F7747D0(*(_DWORD *)(v3 + 140));
    sub_6F773D90(v38, *(_DWORD *)(v3 + 144));
    v39 = *(_DWORD *)(v3 + 132);
    *(_DWORD *)(v3 + 144) = 0;
    sub_6F773D90(v38, v39);
    v40 = *(_DWORD *)(v3 + 136);
    *(_DWORD *)(v3 + 132) = 0;
    sub_6F773D90(v38, v40);
    v41 = *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 136) = 0;
    sub_6F773D90(v38, v41);
    v42 = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 20) = 0;
    sub_6F773D90(v38, v42);
    v43 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 24) = 0;
    sub_6F773D90(v38, v43);
    v44 = *(_DWORD *)(v3 + 140);
    *(_DWORD *)(v3 + 32) = 0;
    sub_6F773D90(v38, v44);
    *(_DWORD *)(v3 + 140) = 0;
    return 2;
  }
  if ( v222 )
    return result;
  *(_DWORD *)(v3 + 140) = v206;
  if ( a3 > 0 )
  {
    v15 = *(_DWORD *)(v3 + 100);
    sub_6F7747D0(v206);
    sub_6F773D90(v15, *(_DWORD *)(v3 + 144));
    v16 = *(_DWORD *)(v3 + 132);
    *(_DWORD *)(v3 + 144) = 0;
    sub_6F773D90(v15, v16);
    v17 = *(_DWORD *)(v3 + 136);
    *(_DWORD *)(v3 + 132) = 0;
    sub_6F773D90(v15, v17);
    v18 = *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 136) = 0;
    sub_6F773D90(v15, v18);
    v19 = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 20) = 0;
    sub_6F773D90(v15, v19);
    v20 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 24) = 0;
    sub_6F773D90(v15, v20);
    v21 = *(_DWORD *)(v3 + 140);
    *(_DWORD *)(v3 + 32) = 0;
    sub_6F773D90(v15, v21);
    *(_DWORD *)(v3 + 140) = 0;
    return 6;
  }
  v45 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(v3 + 4) = 0;
  v209 = v45;
  LOBYTE(v45) = v45 | 0x92;
  *(_DWORD *)(v3 + 8) = v45;
  if ( !v206 || !*(_DWORD *)(v206 + 72) )
    goto LABEL_98;
  v46 = *(_DWORD *)(v206 + 128);
  v47 = 83;
  v48 = "SPACING";
  v212 = v46;
  v49 = *(_DWORD *)(v46 + 4);
  v50 = *(_DWORD *)(v46 + 12);
  v51 = 0;
  do
  {
    ++v48;
    v52 = 31 * v51;
    v53 = v47;
    v47 = *v48;
    v51 = v52 + v53;
  }
  while ( *v48 );
  v235 = v3;
  v54 = v50 + 4 * v49 - 4;
  v55 = (int *)(v50 + 4 * (v51 % v49));
  while ( 1 )
  {
    v56 = *v55;
    if ( !*v55 )
    {
      v62 = v235;
      goto LABEL_82;
    }
    v57 = *(_BYTE **)v56;
    v58 = **(_BYTE **)v56 < 0x53u;
    v59 = **(_BYTE **)v56 == 83;
    if ( **(_BYTE **)v56 == 83 )
    {
      v60 = 8;
      v61 = "SPACING";
      do
      {
        if ( !v60 )
          break;
        v58 = *v57 < (const unsigned __int8)*v61;
        v59 = *v57++ == *v61++;
        --v60;
      }
      while ( v59 );
      if ( (!v58 && !v59) == v58 )
        break;
    }
    --v55;
    if ( v50 > (unsigned int)v55 )
      v55 = (int *)v54;
  }
  v62 = v235;
  v63 = *(_DWORD *)(v206 + 80) + 16 * *(_DWORD *)(v56 + 4);
  if ( v63 )
  {
    if ( *(_DWORD *)(v63 + 4) == 1 )
    {
      v113 = *(_BYTE **)(v63 + 12);
      if ( v113 )
      {
        v114 = *v113 & 0xDF;
        if ( v114 == 77 || v114 == 67 )
        {
          v115 = v209;
          LOBYTE(v115) = v209 | 0x96;
          *(_DWORD *)(v235 + 8) = v115;
        }
      }
    }
  }
LABEL_82:
  v64 = 70;
  v65 = "FAMILY_NAME";
  v66 = *(_DWORD *)(v212 + 4);
  v67 = *(_DWORD *)(v212 + 12);
  v68 = 0;
  do
  {
    ++v65;
    v69 = 31 * v68;
    v70 = v64;
    v64 = *v65;
    v68 = v69 + v70;
  }
  while ( *v65 );
  v236 = v62;
  v71 = v67 + 4 * v66 - 4;
  v72 = (int *)(v67 + 4 * (v68 % v66));
  while ( 1 )
  {
    v73 = *v72;
    if ( !*v72 )
    {
      v3 = v236;
      goto LABEL_98;
    }
    v74 = *(_BYTE **)v73;
    v75 = **(_BYTE **)v73 < 0x46u;
    v76 = **(_BYTE **)v73 == 70;
    if ( **(_BYTE **)v73 == 70 )
    {
      v77 = 12;
      v78 = "FAMILY_NAME";
      do
      {
        if ( !v77 )
          break;
        v75 = *v74 < (const unsigned __int8)*v78;
        v76 = *v74++ == *v78++;
        --v77;
      }
      while ( v76 );
      if ( (!v75 && !v76) == v75 )
        break;
    }
    --v72;
    if ( v67 > (unsigned int)v72 )
      v72 = (int *)v71;
  }
  v3 = v236;
  v79 = *(_DWORD *)(v206 + 80) + 16 * *(_DWORD *)(v73 + 4);
  if ( v79 && (v80 = *(const char **)(v79 + 12)) != 0 )
  {
    *(_DWORD *)(v236 + 20) = sub_6F773E40(v204, v80, &v221);
    result = v221;
    if ( v221 )
      return result;
    v210 = *(_DWORD *)(v236 + 140);
  }
  else
  {
LABEL_98:
    *(_DWORD *)(v3 + 20) = 0;
    v210 = v206;
  }
  v81 = *(_DWORD *)(v3 + 100);
  v222 = 0;
  v227 = 0;
  v228 = 0;
  v229 = 0;
  v230 = 0;
  v215 = v81;
  *(_DWORD *)(v3 + 12) = 0;
  if ( v210 && *(_DWORD *)(v210 + 72) )
  {
    v116 = *(_DWORD *)(v210 + 128);
    v117 = 83;
    v118 = "SLANT";
    v213 = v116;
    v119 = *(_DWORD *)(v116 + 4);
    v120 = *(_DWORD *)(v116 + 12);
    v121 = 0;
    do
    {
      ++v118;
      v122 = 31 * v121;
      v123 = v117;
      v117 = *v118;
      v121 = v122 + v123;
    }
    while ( *v118 );
    v237 = v3;
    v124 = v120 + 4 * v119 - 4;
    v125 = (int *)(v120 + 4 * (v121 % v119));
    while ( 1 )
    {
      v126 = *v125;
      if ( !*v125 )
      {
        v132 = v237;
        goto LABEL_163;
      }
      v127 = *(_BYTE **)v126;
      v128 = **(_BYTE **)v126 < 0x53u;
      v129 = **(_BYTE **)v126 == 83;
      if ( **(_BYTE **)v126 == 83 )
      {
        v130 = 6;
        v131 = "SLANT";
        do
        {
          if ( !v130 )
            break;
          v128 = *v127 < (const unsigned __int8)*v131;
          v129 = *v127++ == *v131++;
          --v130;
        }
        while ( v129 );
        if ( (!v128 && !v129) == v128 )
          break;
      }
      --v125;
      if ( v120 > (unsigned int)v125 )
        v125 = (int *)v124;
    }
    v132 = v237;
    v133 = *(_DWORD *)(v210 + 80) + 16 * *(_DWORD *)(v126 + 4);
    if ( v133 )
    {
      if ( *(_DWORD *)(v133 + 4) == 1 )
      {
        v186 = *(_BYTE **)(v133 + 12);
        if ( v186 )
        {
          v187 = *v186 & 0xDF;
          if ( v187 == 79 || v187 == 73 )
          {
            *(_DWORD *)(v237 + 12) = 1;
            v188 = "Italic";
            if ( (*v186 & 0xDF) == 79 )
              v188 = "Oblique";
            v229 = v188;
            v213 = *(_DWORD *)(v210 + 128);
          }
        }
      }
    }
LABEL_163:
    v134 = 87;
    v135 = "WEIGHT_NAME";
    v136 = *(_DWORD *)(v213 + 4);
    v137 = *(_DWORD *)(v213 + 12);
    v138 = 0;
    do
    {
      ++v135;
      v139 = 31 * v138;
      v140 = v134;
      v134 = *v135;
      v138 = v139 + v140;
    }
    while ( *v135 );
    v238 = v132;
    v141 = v137 + 4 * v136 - 4;
    v142 = (int *)(v137 + 4 * (v138 % v136));
    while ( 1 )
    {
      v143 = *v142;
      if ( !*v142 )
        break;
      v144 = *(_BYTE **)v143;
      v145 = **(_BYTE **)v143 < 0x57u;
      v146 = **(_BYTE **)v143 == 87;
      if ( **(_BYTE **)v143 == 87 )
      {
        v147 = 12;
        v148 = "WEIGHT_NAME";
        do
        {
          if ( !v147 )
            break;
          v145 = *v144 < (const unsigned __int8)*v148;
          v146 = *v144++ == *v148++;
          --v147;
        }
        while ( v146 );
        if ( (!v145 && !v146) == v145 )
        {
          v3 = v238;
          v149 = *(_DWORD *)(v210 + 80) + 16 * *(_DWORD *)(v143 + 4);
          if ( v149 )
          {
            if ( *(_DWORD *)(v149 + 4) == 1 )
            {
              v183 = *(_BYTE **)(v149 + 12);
              if ( v183 )
              {
                if ( (*v183 & 0xDF) == 66 )
                {
                  v228 = "Bold";
                  v184 = *(_DWORD *)(v210 + 128);
                  *(_DWORD *)(v238 + 12) |= 2u;
                  v213 = v184;
                }
              }
            }
          }
          goto LABEL_176;
        }
      }
      --v142;
      if ( v137 > (unsigned int)v142 )
        v142 = (int *)v141;
    }
    v3 = v238;
    if ( !*(_DWORD *)(v210 + 72) )
      goto LABEL_101;
LABEL_176:
    v150 = 83;
    v151 = "SETWIDTH_NAME";
    v152 = *(_DWORD *)(v213 + 4);
    v153 = *(_DWORD *)(v213 + 12);
    v154 = 0;
    do
    {
      ++v151;
      v155 = 31 * v154;
      v156 = v150;
      v150 = *v151;
      v154 = v155 + v156;
    }
    while ( *v151 );
    v239 = v3;
    v157 = v153 + 4 * v152 - 4;
    v158 = (int *)(v153 + 4 * (v154 % v152));
    while ( 1 )
    {
      v159 = *v158;
      if ( !*v158 )
        break;
      v160 = *(_BYTE **)v159;
      v161 = **(_BYTE **)v159 < 0x53u;
      v162 = **(_BYTE **)v159 == 83;
      if ( **(_BYTE **)v159 == 83 )
      {
        v163 = 14;
        v164 = "SETWIDTH_NAME";
        do
        {
          if ( !v163 )
            break;
          v161 = *v160 < (const unsigned __int8)*v164;
          v162 = *v160++ == *v164++;
          --v163;
        }
        while ( v162 );
        if ( (!v161 && !v162) == v161 )
        {
          v3 = v239;
          v165 = *(_DWORD *)(v210 + 80) + 16 * *(_DWORD *)(v159 + 4);
          if ( v165 )
          {
            if ( *(_DWORD *)(v165 + 4) == 1 )
            {
              v185 = *(_BYTE **)(v165 + 12);
              if ( v185 )
              {
                if ( *v185 && (*v185 & 0xDF) != 78 )
                {
                  v230 = *(const char **)(v165 + 12);
                  v213 = *(_DWORD *)(v210 + 128);
                }
              }
            }
          }
          goto LABEL_189;
        }
      }
      --v158;
      if ( v153 > (unsigned int)v158 )
        v158 = (int *)v157;
    }
    v3 = v239;
    if ( !*(_DWORD *)(v210 + 72) )
      goto LABEL_101;
LABEL_189:
    v166 = 65;
    v167 = "ADD_STYLE_NAME";
    v168 = *(_DWORD *)(v213 + 4);
    v169 = *(_DWORD *)(v213 + 12);
    v170 = 0;
    do
    {
      ++v167;
      v171 = 31 * v170;
      v172 = v166;
      v166 = *v167;
      v170 = v171 + v172;
    }
    while ( *v167 );
    v240 = v3;
    v173 = v169 + 4 * v168 - 4;
    v174 = (int *)(v169 + 4 * (v170 % v168));
    while ( 1 )
    {
      v175 = *v174;
      if ( !*v174 )
      {
        v3 = v240;
        goto LABEL_101;
      }
      v176 = *(_BYTE **)v175;
      v177 = **(_BYTE **)v175 < 0x41u;
      v178 = **(_BYTE **)v175 == 65;
      if ( **(_BYTE **)v175 == 65 )
      {
        v179 = 15;
        v180 = "ADD_STYLE_NAME";
        do
        {
          if ( !v179 )
            break;
          v177 = *v176 < (const unsigned __int8)*v180;
          v178 = *v176++ == *v180++;
          --v179;
        }
        while ( v178 );
        if ( (!v177 && !v178) == v177 )
          break;
      }
      --v174;
      if ( v169 > (unsigned int)v174 )
        v174 = (int *)v173;
    }
    v3 = v240;
    v181 = *(_DWORD *)(v210 + 80) + 16 * *(_DWORD *)(v175 + 4);
    if ( v181 )
    {
      if ( *(_DWORD *)(v181 + 4) == 1 )
      {
        v182 = *(_BYTE **)(v181 + 12);
        if ( v182 )
        {
          if ( *v182 && (*v182 & 0xDF) != 78 )
            v227 = *(const char **)(v181 + 12);
        }
      }
    }
  }
LABEL_101:
  v231 = 0;
  if ( v227 )
  {
    v82 = strlen(v227);
    v83 = v82 + 1;
    v231 = v82;
  }
  else
  {
    v83 = 0;
  }
  v232 = 0;
  if ( v228 )
  {
    v84 = strlen(v228);
    v83 += v84 + 1;
    v232 = v84;
  }
  v233 = 0;
  if ( v229 )
  {
    v85 = strlen(v229);
    v83 += v85 + 1;
    v233 = v85;
  }
  v234 = 0;
  if ( v230 )
  {
    v86 = strlen(v230);
    v83 += v86 + 1;
    v234 = v86;
  }
  if ( !v83 )
  {
    v227 = "Regular";
    v231 = 7;
    v83 = 8;
  }
  v87 = (char *)sub_6F773A50(v215, v83, &v222);
  v88 = v87;
  *(_DWORD *)(v3 + 24) = v87;
  result = v222;
  if ( !v222 )
  {
    v89 = 0;
    do
    {
      v90 = (&v227)[4 * v89];
      v91 = *(&v231 + v89);
      if ( v90 )
      {
        if ( *(char **)(v3 + 24) == v88 )
        {
          v92 = v88;
        }
        else
        {
          v92 = v88 + 1;
          *v88 = 32;
        }
        memcpy(v92, v90, v91);
        if ( v89 && v89 != 3 )
        {
          v92 += v91;
        }
        else if ( v91 )
        {
          v112 = v92;
          v92 += v91;
          do
          {
            if ( *v112 == 32 )
              *v112 = 45;
            ++v112;
          }
          while ( v112 != v92 );
        }
        v88 = v92;
      }
      ++v89;
    }
    while ( v89 != 4 );
    *v88 = 0;
    result = v222;
    v221 = v222;
    if ( !v222 )
    {
      v93 = *(_DWORD *)(v206 + 48);
      *(_DWORD *)(v3 + 28) = 1;
      *(_DWORD *)(v3 + 16) = v93 + 1;
      v94 = sub_6F773B30(v204, 16, 0, 1, 0, &v221);
      v95 = v94;
      *(_DWORD *)(v3 + 32) = v94;
      result = v221;
      if ( !v221 )
      {
        *(_DWORD *)v95 = 0;
        *((_DWORD *)v95 + 1) = 0;
        *((_DWORD *)v95 + 2) = 0;
        *((_DWORD *)v95 + 3) = 0;
        v96 = *(_DWORD *)(v206 + 72);
        v97 = *(_WORD *)(v206 + 40) + *(_DWORD *)(v206 + 44);
        *(_WORD *)v95 = v97;
        if ( !v96 )
        {
          v98 = 2 * v97;
          v99 = v98;
          v98 >>= 31;
          v100 = 1431655766i64 * v99;
          *((_WORD *)v95 + 1) = WORD2(v100) - v98;
          v101 = (signed __int16)(WORD2(v100) - v98) << 6;
          *((_DWORD *)v95 + 1) = v101;
          goto LABEL_125;
        }
        v189 = sub_6F7750C0(v206, "AVERAGE_WIDTH");
        if ( v189 )
        {
          v190 = (*(_DWORD *)(v189 + 12) + 5) / 10;
          *((_WORD *)v95 + 1) = v190;
          v191 = sub_6F7750C0(v206, "POINT_SIZE");
          if ( v191 )
          {
LABEL_230:
            v101 = (460800 * *(_DWORD *)(v191 + 12) + 36135) / 72270;
            *((_DWORD *)v95 + 1) = v101;
LABEL_231:
            v192 = sub_6F7750C0(v206, "PIXEL_SIZE");
            if ( v192 )
            {
              v102 = *(_WORD *)(v192 + 12) << 6;
              *((_DWORD *)v95 + 3) = v102;
            }
            else
            {
              v102 = *((_DWORD *)v95 + 3);
            }
            v193 = sub_6F7750C0(v206, "RESOLUTION_X");
            if ( v193 )
              v203 = *(_WORD *)(v193 + 12);
            else
              v203 = 0;
            v194 = sub_6F7750C0(v206, "RESOLUTION_Y");
            if ( v194 )
            {
              v195 = *(_DWORD *)(v194 + 12);
              if ( !v102 )
              {
                if ( !(_WORD)v195 )
                  goto LABEL_125;
                v102 = (signed __int16)v195 * v101 / 72;
                *((_DWORD *)v95 + 3) = v102;
              }
              if ( v203 && (_WORD)v195 )
                v102 = v102 * v203 / (signed __int16)v195;
              goto LABEL_126;
            }
            if ( v102 )
            {
LABEL_126:
              *((_DWORD *)v95 + 2) = v102;
              v103 = *(_DWORD *)(v206 + 56);
              v104 = sub_6F773B30(v204, 8, 0, *(_DWORD *)(v206 + 48), 0, &v221);
              v105 = v104;
              *(_DWORD *)(v3 + 144) = v104;
              result = v221;
              if ( !v221 )
              {
                v106 = *(_DWORD *)(v206 + 48);
                *(_DWORD *)(v3 + 164) = 0;
                if ( v106 )
                {
                  v107 = (int *)(v103 + 4);
                  v108 = *(_DWORD *)(v206 + 36);
                  v109 = 0;
                  do
                  {
                    v110 = *v107;
                    *((_WORD *)v105 + 2) = v109;
                    *(_DWORD *)v105 = v110;
                    if ( v110 == v108 && v109 != -1 )
                      *(_DWORD *)(v3 + 164) = v109;
                    ++v109;
                    v107 += 9;
                    v105 += 8;
                  }
                  while ( v109 != v106 );
                }
                if ( *(_DWORD *)(v206 + 72)
                  && (v196 = sub_6F7750C0(v206, "CHARSET_REGISTRY"), v197 = sub_6F7750C0(v206, "CHARSET_ENCODING"), v196)
                  && v197
                  && *(_DWORD *)(v196 + 4) == 1
                  && *(_DWORD *)(v197 + 4) == 1
                  && *(_DWORD *)(v196 + 12)
                  && (v198 = *(const char **)(v197 + 12)) != 0 )
                {
                  *(_DWORD *)(v3 + 132) = sub_6F773E40(v204, v198, &v221);
                  result = v221;
                  if ( !v221 )
                  {
                    v199 = sub_6F773E40(v204, *(const char **)(v196 + 12), &v221);
                    v200 = v199;
                    *(_DWORD *)(v3 + 136) = v199;
                    result = v221;
                    if ( !v221 )
                    {
                      if ( (*(_BYTE *)v200 & 0xDF) == 73
                        && (*((_BYTE *)v200 + 1) & 0xDF) == 83
                        && (*((_BYTE *)v200 + 2) & 0xDF) == 79
                        && ((v201 = (char *)v200 + 3, !strcmp((const char *)v200 + 3, "10646"))
                         || !strcmp(v201, "8859") && !strcmp(*(const char **)(v3 + 132), "1")) )
                      {
                        v231 = v3;
                        v232 = 1970170211;
                        v233 = 65539;
                      }
                      else
                      {
                        v231 = v3;
                        v232 = 0;
                        v233 = 0;
                      }
                      result = sub_6F76D420((int)&unk_6FB55B20, 0, (int)&v231, 0);
                    }
                  }
                }
                else
                {
                  v231 = v3;
                  v232 = 1094995778;
                  v233 = 7;
                  result = sub_6F76D420((int)&unk_6FB55B20, 0, (int)&v231, 0);
                  v111 = *(_DWORD *)(v3 + 36);
                  v221 = result;
                  if ( v111 )
                    *(_DWORD *)(v3 + 92) = **(_DWORD **)(v3 + 40);
                }
              }
              return result;
            }
LABEL_125:
            *((_DWORD *)v95 + 3) = v101;
            v102 = v101;
            goto LABEL_126;
          }
        }
        else
        {
          *((_WORD *)v95 + 1) = 2 * v97 / 3;
          v190 = 2 * v97 / 3;
          v191 = sub_6F7750C0(v206, "POINT_SIZE");
          if ( v191 )
            goto LABEL_230;
        }
        v101 = (signed __int16)v190 << 6;
        *((_DWORD *)v95 + 1) = v101;
        goto LABEL_231;
      }
    }
  }
  return result;
}
