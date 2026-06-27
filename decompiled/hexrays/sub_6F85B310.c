int __cdecl sub_6F85B310(int a1, int a2)
{
  int v2; // eax@5
  int v3; // eax@39
  int v4; // eax@45
  _BYTE *v5; // eax@77
  char *v6; // edx@77
  char v7; // bl@77
  _BYTE *v8; // edx@77
  int v9; // eax@78
  _BYTE *v10; // eax@96
  char *v11; // edx@96
  char v12; // bl@96
  unsigned __int8 *v13; // edx@96
  _BYTE *v14; // eax@99
  char *v15; // edx@99
  char v16; // bl@99
  _BYTE *v17; // edx@99
  int v18; // esi@99
  _BYTE *v19; // edx@99
  _BYTE *v20; // eax@113
  char *v21; // edx@113
  char v22; // bl@113
  unsigned __int8 *v23; // edx@113
  int v24; // eax@114
  _BYTE *v25; // eax@119
  char *v26; // edx@119
  char v27; // bl@119
  _BYTE *v28; // edx@119
  int v29; // esi@119
  _BYTE *v30; // edx@119
  int v31; // eax@120
  _BYTE *v32; // eax@138
  char *v33; // edx@138
  char v34; // bl@138
  _BYTE *v35; // edx@138
  _BYTE *v36; // eax@141
  _BYTE *v37; // eax@141
  char *v38; // eax@141
  int v39; // ST40_4@141
  char v40; // al@144
  char v41; // ST3C_1@148
  _BYTE *v42; // eax@148
  _BYTE *v43; // edx@148
  _BYTE *v44; // eax@162
  char *v45; // edx@162
  char v46; // bl@162
  _BYTE *v47; // edx@162
  int v48; // eax@163
  _BYTE *v49; // eax@168
  _BYTE *v50; // eax@168
  char *v51; // eax@168
  int v52; // ST20_4@168
  char v53; // al@171
  char v54; // ST1C_1@175
  _BYTE *v55; // eax@175
  _BYTE *v56; // edx@175
  int v57; // eax@176
  int result; // eax@192
  int v59; // [sp+10h] [bp-1A8h]@168
  int v60; // [sp+18h] [bp-1A0h]@168
  int v61; // [sp+24h] [bp-194h]@168
  int v62; // [sp+28h] [bp-190h]@168
  signed int v63; // [sp+2Ch] [bp-18Ch]@162
  signed int v64; // [sp+2Ch] [bp-18Ch]@175
  int v65; // [sp+30h] [bp-188h]@141
  int v66; // [sp+38h] [bp-180h]@141
  int v67; // [sp+44h] [bp-174h]@141
  int v68; // [sp+48h] [bp-170h]@141
  signed int v69; // [sp+4Ch] [bp-16Ch]@113
  signed int v70; // [sp+4Ch] [bp-16Ch]@119
  signed int v71; // [sp+50h] [bp-168h]@77
  signed int v72; // [sp+54h] [bp-164h]@38
  signed int v73; // [sp+54h] [bp-164h]@44
  signed int v74; // [sp+58h] [bp-160h]@4
  int v75; // [sp+5Ch] [bp-15Ch]@1
  int v76; // [sp+60h] [bp-158h]@1
  unsigned int v77; // [sp+64h] [bp-154h]@1
  signed int v78; // [sp+68h] [bp-150h]@1
  unsigned int v79; // [sp+6Ch] [bp-14Ch]@1
  char v80; // [sp+73h] [bp-145h]@1
  signed int ll; // [sp+74h] [bp-144h]@193
  unsigned int v82; // [sp+78h] [bp-140h]@182
  unsigned int v83; // [sp+78h] [bp-140h]@187
  unsigned int v84; // [sp+7Ch] [bp-13Ch]@182
  unsigned int v85; // [sp+7Ch] [bp-13Ch]@187
  signed int kk; // [sp+80h] [bp-138h]@182
  unsigned int v87; // [sp+84h] [bp-134h]@153
  unsigned int v88; // [sp+84h] [bp-134h]@158
  unsigned int v89; // [sp+88h] [bp-130h]@153
  unsigned int v90; // [sp+88h] [bp-130h]@158
  signed int jj; // [sp+8Ch] [bp-12Ch]@153
  unsigned int v92; // [sp+90h] [bp-128h]@161
  unsigned int v93; // [sp+94h] [bp-124h]@152
  unsigned int v94; // [sp+98h] [bp-120h]@152
  int v95; // [sp+9Ch] [bp-11Ch]@167
  int v96; // [sp+A0h] [bp-118h]@167
  int v97; // [sp+A4h] [bp-114h]@161
  int v98; // [sp+A8h] [bp-110h]@161
  int v99; // [sp+ACh] [bp-10Ch]@161
  unsigned int v100; // [sp+B0h] [bp-108h]@137
  int v101; // [sp+B4h] [bp-104h]@140
  int v102; // [sp+B8h] [bp-100h]@140
  int v103; // [sp+BCh] [bp-FCh]@137
  int v104; // [sp+C0h] [bp-F8h]@137
  int v105; // [sp+C4h] [bp-F4h]@137
  unsigned int v106; // [sp+C8h] [bp-F0h]@126
  unsigned int v107; // [sp+C8h] [bp-F0h]@131
  unsigned int v108; // [sp+CCh] [bp-ECh]@126
  unsigned int v109; // [sp+CCh] [bp-ECh]@131
  signed int ii; // [sp+D0h] [bp-E8h]@126
  unsigned int v111; // [sp+D4h] [bp-E4h]@104
  unsigned int v112; // [sp+D4h] [bp-E4h]@109
  unsigned int v113; // [sp+D8h] [bp-E0h]@104
  unsigned int v114; // [sp+D8h] [bp-E0h]@109
  signed int n; // [sp+DCh] [bp-DCh]@104
  unsigned int v116; // [sp+E0h] [bp-D8h]@112
  unsigned int v117; // [sp+E4h] [bp-D4h]@103
  unsigned int v118; // [sp+E8h] [bp-D0h]@103
  int v119; // [sp+ECh] [bp-CCh]@118
  int v120; // [sp+F0h] [bp-C8h]@112
  int v121; // [sp+F4h] [bp-C4h]@112
  int v122; // [sp+F8h] [bp-C0h]@112
  unsigned int v123; // [sp+FCh] [bp-BCh]@95
  int v124; // [sp+100h] [bp-B8h]@98
  int v125; // [sp+104h] [bp-B4h]@95
  int v126; // [sp+108h] [bp-B0h]@95
  int v127; // [sp+10Ch] [bp-ACh]@95
  unsigned int v128; // [sp+110h] [bp-A8h]@84
  unsigned int v129; // [sp+110h] [bp-A8h]@89
  unsigned int v130; // [sp+114h] [bp-A4h]@84
  unsigned int v131; // [sp+114h] [bp-A4h]@89
  signed int m; // [sp+118h] [bp-A0h]@84
  unsigned int v133; // [sp+11Ch] [bp-9Ch]@68
  unsigned int v134; // [sp+11Ch] [bp-9Ch]@73
  unsigned int v135; // [sp+120h] [bp-98h]@68
  unsigned int v136; // [sp+120h] [bp-98h]@73
  signed int l; // [sp+124h] [bp-94h]@68
  unsigned int v138; // [sp+128h] [bp-90h]@76
  unsigned int v139; // [sp+12Ch] [bp-8Ch]@67
  unsigned int v140; // [sp+130h] [bp-88h]@67
  int v141; // [sp+134h] [bp-84h]@76
  int v142; // [sp+138h] [bp-80h]@76
  int v143; // [sp+13Ch] [bp-7Ch]@76
  unsigned int v144; // [sp+140h] [bp-78h]@62
  _BYTE *v145; // [sp+144h] [bp-74h]@62
  _BYTE *v146; // [sp+148h] [bp-70h]@62
  _BYTE *v147; // [sp+14Ch] [bp-6Ch]@62
  unsigned int v148; // [sp+150h] [bp-68h]@51
  unsigned int v149; // [sp+150h] [bp-68h]@56
  unsigned int v150; // [sp+154h] [bp-64h]@51
  unsigned int v151; // [sp+154h] [bp-64h]@56
  signed int k; // [sp+158h] [bp-60h]@51
  unsigned int v153; // [sp+15Ch] [bp-5Ch]@29
  unsigned int v154; // [sp+15Ch] [bp-5Ch]@34
  unsigned int v155; // [sp+160h] [bp-58h]@29
  unsigned int v156; // [sp+160h] [bp-58h]@34
  signed int j; // [sp+164h] [bp-54h]@29
  unsigned int v158; // [sp+168h] [bp-50h]@37
  unsigned int v159; // [sp+16Ch] [bp-4Ch]@28
  unsigned int v160; // [sp+170h] [bp-48h]@28
  _BYTE *v161; // [sp+174h] [bp-44h]@43
  _BYTE *v162; // [sp+178h] [bp-40h]@37
  _BYTE *v163; // [sp+17Ch] [bp-3Ch]@37
  unsigned int v164; // [sp+180h] [bp-38h]@20
  _BYTE *v165; // [sp+184h] [bp-34h]@20
  _BYTE *v166; // [sp+188h] [bp-30h]@23
  _BYTE *v167; // [sp+18Ch] [bp-2Ch]@20
  signed int i; // [sp+190h] [bp-28h]@10
  unsigned int v169; // [sp+194h] [bp-24h]@10
  unsigned int v170; // [sp+194h] [bp-24h]@15
  unsigned int v171; // [sp+198h] [bp-20h]@10
  unsigned int v172; // [sp+198h] [bp-20h]@15
  unsigned int v173; // [sp+19Ch] [bp-1Ch]@3
  unsigned int v174; // [sp+1A0h] [bp-18h]@3
  _BYTE *v175; // [sp+1A4h] [bp-14h]@3
  unsigned int v176; // [sp+1A8h] [bp-10h]@1
  _BYTE *v177; // [sp+1ACh] [bp-Ch]@1

  v80 = *(_BYTE *)(a1 + 342);
  v79 = *(_DWORD *)(a2 + 4);
  v78 = *(_BYTE *)(a1 + 529);
  v77 = (*(_BYTE *)(a2 + 11) + 7) >> 3;
  v76 = *(_DWORD *)(a1 + 288);
  v177 = *(_BYTE **)(a1 + 292);
  v75 = *(_DWORD *)(a1 + 292);
  v176 = 0x7FFFFFFF;
  if ( v80 & 8 && v80 != 8 )
  {
    v174 = 0;
    v173 = 0;
    v175 = (_BYTE *)(v75 + 1);
    while ( v173 < v79 )
    {
      v74 = *v175;
      if ( v74 > 127 )
        v2 = 256 - v74;
      else
        v2 = *v175;
      v174 += v2;
      ++v173;
      ++v175;
    }
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v169 = (unsigned __int16)v174;
      v171 = (v174 >> 10) & 0x3FFFC0;
      for ( i = 0; i < v78; ++i )
      {
        if ( !*(_BYTE *)(*(_DWORD *)(a1 + 532) + i) )
        {
          v169 = v169 * *(_WORD *)(2 * i + *(_DWORD *)(a1 + 536)) >> 8;
          v171 = v171 * *(_WORD *)(2 * i + *(_DWORD *)(a1 + 536)) >> 8;
        }
      }
      v170 = v169 * **(_WORD **)(a1 + 544) >> 3;
      v172 = v171 * **(_WORD **)(a1 + 544) >> 3;
      if ( v172 <= 0x3FFFC0 )
        v174 = (v172 << 10) + v170;
      else
        v174 = 0x7FFFFFFF;
    }
    v176 = v174;
  }
  if ( v80 == 16 )
  {
    v164 = 0;
    v167 = (_BYTE *)(v75 + 1);
    v165 = (_BYTE *)(*(_DWORD *)(a1 + 296) + 1);
    while ( v164 < v77 )
    {
      *v165 = *v167;
      ++v164;
      ++v167;
      ++v165;
    }
    v166 = (_BYTE *)(v75 + 1);
    while ( v164 < v79 )
    {
      *v165 = *v167 - *v166;
      ++v164;
      ++v167;
      ++v166;
      ++v165;
    }
    v177 = *(_BYTE **)(a1 + 296);
  }
  else if ( v80 & 0x10 )
  {
    v160 = 0;
    v159 = v176;
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v153 = (unsigned __int16)v176;
      v155 = (v176 >> 10) & 0x3FFFC0;
      for ( j = 0; j < v78; ++j )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 532) + j) == 1 )
        {
          v153 = v153 * *(_WORD *)(2 * j + *(_DWORD *)(a1 + 540)) >> 8;
          v155 = v155 * *(_WORD *)(2 * j + *(_DWORD *)(a1 + 540)) >> 8;
        }
      }
      v154 = v153 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 2) >> 3;
      v156 = v155 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 2) >> 3;
      if ( v156 <= 0x3FFFC0 )
        v159 = (v156 << 10) + v154;
      else
        v159 = 0x7FFFFFFF;
    }
    v158 = 0;
    v163 = (_BYTE *)(v75 + 1);
    v162 = (_BYTE *)(*(_DWORD *)(a1 + 296) + 1);
    while ( v158 < v77 )
    {
      *v162 = *v163;
      v72 = *v162;
      if ( v72 > 127 )
        v3 = 256 - v72;
      else
        v3 = *v162;
      v160 += v3;
      ++v158;
      ++v163;
      ++v162;
    }
    v161 = (_BYTE *)(v75 + 1);
    while ( v158 < v79 )
    {
      *v162 = *v163 - *v161;
      v73 = *v162;
      v4 = v73 > 127 ? 256 - v73 : *v162;
      v160 += v4;
      if ( v160 > v159 )
        break;
      ++v158;
      ++v163;
      ++v161;
      ++v162;
    }
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v148 = (unsigned __int16)v160;
      v150 = (v160 >> 10) & 0x3FFFC0;
      for ( k = 0; k < v78; ++k )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 532) + k) == 1 )
        {
          v148 = v148 * *(_WORD *)(2 * k + *(_DWORD *)(a1 + 540)) >> 8;
          v150 = v150 * *(_WORD *)(2 * k + *(_DWORD *)(a1 + 540)) >> 8;
        }
      }
      v149 = v148 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 2) >> 3;
      v151 = v150 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 2) >> 3;
      if ( v151 <= 0x3FFFC0 )
        v160 = (v151 << 10) + v149;
      else
        v160 = 0x7FFFFFFF;
    }
    if ( v160 < v176 )
    {
      v176 = v160;
      v177 = *(_BYTE **)(a1 + 296);
    }
  }
  if ( v80 == 32 )
  {
    v144 = 0;
    v147 = (_BYTE *)(v75 + 1);
    v146 = (_BYTE *)(*(_DWORD *)(a1 + 300) + 1);
    v145 = (_BYTE *)(v76 + 1);
    while ( v144 < v79 )
    {
      *v146 = *v147 - *v145;
      ++v144;
      ++v147;
      ++v145;
      ++v146;
    }
    v177 = *(_BYTE **)(a1 + 300);
  }
  else if ( v80 & 0x20 )
  {
    v140 = 0;
    v139 = v176;
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v133 = (unsigned __int16)v176;
      v135 = (v176 >> 10) & 0x3FFFC0;
      for ( l = 0; l < v78; ++l )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 532) + l) == 2 )
        {
          v133 = v133 * *(_WORD *)(2 * l + *(_DWORD *)(a1 + 540)) >> 8;
          v135 = v135 * *(_WORD *)(2 * l + *(_DWORD *)(a1 + 540)) >> 8;
        }
      }
      v134 = v133 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 4) >> 3;
      v136 = v135 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 4) >> 3;
      if ( v136 <= 0x3FFFC0 )
        v139 = (v136 << 10) + v134;
      else
        v139 = 0x7FFFFFFF;
    }
    v138 = 0;
    v143 = v75 + 1;
    v142 = *(_DWORD *)(a1 + 300) + 1;
    v141 = v76 + 1;
    while ( v138 < v79 )
    {
      v5 = (_BYTE *)v142++;
      v6 = (char *)v143++;
      v7 = *v6;
      v8 = (_BYTE *)v141++;
      *v5 = v7 - *v8;
      v71 = *v5;
      v9 = v71 > 127 ? 256 - v71 : *v5;
      v140 += v9;
      if ( v140 > v139 )
        break;
      ++v138;
    }
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v128 = (unsigned __int16)v140;
      v130 = (v140 >> 10) & 0x3FFFC0;
      for ( m = 0; m < v78; ++m )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 532) + m) == 2 )
        {
          v128 = v128 * *(_WORD *)(2 * m + *(_DWORD *)(a1 + 536)) >> 8;
          v130 = v130 * *(_WORD *)(2 * m + *(_DWORD *)(a1 + 536)) >> 8;
        }
      }
      v129 = v128 * *(_WORD *)(*(_DWORD *)(a1 + 544) + 4) >> 3;
      v131 = v130 * *(_WORD *)(*(_DWORD *)(a1 + 544) + 4) >> 3;
      if ( v131 <= 0x3FFFC0 )
        v140 = (v131 << 10) + v129;
      else
        v140 = 0x7FFFFFFF;
    }
    if ( v140 < v176 )
    {
      v176 = v140;
      v177 = *(_BYTE **)(a1 + 300);
    }
  }
  if ( v80 == 64 )
  {
    v123 = 0;
    v127 = v75 + 1;
    v126 = *(_DWORD *)(a1 + 304) + 1;
    v125 = v76 + 1;
    while ( v123 < v77 )
    {
      v10 = (_BYTE *)v126++;
      v11 = (char *)v127++;
      v12 = *v11;
      v13 = (unsigned __int8 *)v125++;
      *v10 = v12 - (*v13 >> 1);
      ++v123;
    }
    v124 = v75 + 1;
    while ( v123 < v79 )
    {
      v14 = (_BYTE *)v126++;
      v15 = (char *)v127++;
      v16 = *v15;
      v17 = (_BYTE *)v125++;
      v18 = *v17;
      v19 = (_BYTE *)v124++;
      *v14 = v16 - (v18 + *v19) / 2;
      ++v123;
    }
    v177 = *(_BYTE **)(a1 + 304);
  }
  else if ( v80 & 0x40 )
  {
    v118 = 0;
    v117 = v176;
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v111 = (unsigned __int16)v176;
      v113 = (v176 >> 10) & 0x3FFFC0;
      for ( n = 0; n < v78; ++n )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 532) + n) == 3 )
        {
          v111 = v111 * *(_WORD *)(2 * n + *(_DWORD *)(a1 + 540)) >> 8;
          v113 = v113 * *(_WORD *)(2 * n + *(_DWORD *)(a1 + 540)) >> 8;
        }
      }
      v112 = v111 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 6) >> 3;
      v114 = v113 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 6) >> 3;
      if ( v114 <= 0x3FFFC0 )
        v117 = (v114 << 10) + v112;
      else
        v117 = 0x7FFFFFFF;
    }
    v116 = 0;
    v122 = v75 + 1;
    v121 = *(_DWORD *)(a1 + 304) + 1;
    v120 = v76 + 1;
    while ( v116 < v77 )
    {
      v20 = (_BYTE *)v121++;
      v21 = (char *)v122++;
      v22 = *v21;
      v23 = (unsigned __int8 *)v120++;
      *v20 = v22 - (*v23 >> 1);
      v69 = *v20;
      if ( v69 > 127 )
        v24 = 256 - v69;
      else
        v24 = *v20;
      v118 += v24;
      ++v116;
    }
    v119 = v75 + 1;
    while ( v116 < v79 )
    {
      v25 = (_BYTE *)v121++;
      v26 = (char *)v122++;
      v27 = *v26;
      v28 = (_BYTE *)v120++;
      v29 = *v28;
      v30 = (_BYTE *)v119++;
      *v25 = v27 - (v29 + *v30) / 2;
      v70 = *v25;
      v31 = v70 > 127 ? 256 - v70 : *v25;
      v118 += v31;
      if ( v118 > v117 )
        break;
      ++v116;
    }
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v106 = (unsigned __int16)v118;
      v108 = (v118 >> 10) & 0x3FFFC0;
      for ( ii = 0; ii < v78; ++ii )
      {
        if ( !*(_BYTE *)(*(_DWORD *)(a1 + 532) + ii) )
        {
          v106 = v106 * *(_WORD *)(2 * ii + *(_DWORD *)(a1 + 536)) >> 8;
          v108 = v108 * *(_WORD *)(2 * ii + *(_DWORD *)(a1 + 536)) >> 8;
        }
      }
      v107 = v106 * *(_WORD *)(*(_DWORD *)(a1 + 544) + 6) >> 3;
      v109 = v108 * *(_WORD *)(*(_DWORD *)(a1 + 544) + 6) >> 3;
      if ( v109 <= 0x3FFFC0 )
        v118 = (v109 << 10) + v107;
      else
        v118 = 0x7FFFFFFF;
    }
    if ( v118 < v176 )
    {
      v176 = v118;
      v177 = *(_BYTE **)(a1 + 304);
    }
  }
  if ( v80 == -128 )
  {
    v100 = 0;
    v105 = v75 + 1;
    v104 = *(_DWORD *)(a1 + 308) + 1;
    v103 = v76 + 1;
    while ( v100 < v77 )
    {
      v32 = (_BYTE *)v104++;
      v33 = (char *)v105++;
      v34 = *v33;
      v35 = (_BYTE *)v103++;
      *v32 = v34 - *v35;
      ++v100;
    }
    v101 = v75 + 1;
    v102 = v76 + 1;
    while ( v100 < v79 )
    {
      v36 = (_BYTE *)v103++;
      v68 = *v36;
      v37 = (_BYTE *)v102++;
      v67 = *v37;
      v38 = (char *)v101++;
      v39 = (unsigned __int8)*v38;
      v65 = ((v39 - v67) ^ ((v39 - v67) >> 31)) - ((v39 - v67) >> 31);
      v66 = (((v39 - v67 + v68 - v67) >> 31) ^ (v39 - v67 + v68 - v67)) - ((v39 - v67 + v68 - v67) >> 31);
      if ( ((v68 - v67) ^ ((v68 - v67) >> 31)) - ((v68 - v67) >> 31) <= v65
        && ((v68 - v67) ^ ((v68 - v67) >> 31)) - ((v68 - v67) >> 31) <= v66 )
      {
        v40 = *v38;
      }
      else if ( v65 > v66 )
      {
        v40 = v67;
      }
      else
      {
        v40 = v68;
      }
      v41 = v40;
      v42 = (_BYTE *)v104++;
      v43 = (_BYTE *)v105++;
      *v42 = *v43 - v41;
      ++v100;
    }
    v177 = *(_BYTE **)(a1 + 308);
  }
  else if ( v80 < 0 )
  {
    v94 = 0;
    v93 = v176;
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v87 = (unsigned __int16)v176;
      v89 = (v176 >> 10) & 0x3FFFC0;
      for ( jj = 0; jj < v78; ++jj )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 532) + jj) == 4 )
        {
          v87 = v87 * *(_WORD *)(2 * jj + *(_DWORD *)(a1 + 540)) >> 8;
          v89 = v89 * *(_WORD *)(2 * jj + *(_DWORD *)(a1 + 540)) >> 8;
        }
      }
      v88 = v87 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 8) >> 3;
      v90 = v89 * *(_WORD *)(*(_DWORD *)(a1 + 548) + 8) >> 3;
      if ( v90 <= 0x3FFFC0 )
        v93 = (v90 << 10) + v88;
      else
        v93 = 0x7FFFFFFF;
    }
    v92 = 0;
    v99 = v75 + 1;
    v98 = *(_DWORD *)(a1 + 308) + 1;
    v97 = v76 + 1;
    while ( v92 < v77 )
    {
      v44 = (_BYTE *)v98++;
      v45 = (char *)v99++;
      v46 = *v45;
      v47 = (_BYTE *)v97++;
      *v44 = v46 - *v47;
      v63 = *v44;
      if ( v63 > 127 )
        v48 = 256 - v63;
      else
        v48 = *v44;
      v94 += v48;
      ++v92;
    }
    v95 = v75 + 1;
    v96 = v76 + 1;
    while ( v92 < v79 )
    {
      v49 = (_BYTE *)v97++;
      v62 = *v49;
      v50 = (_BYTE *)v96++;
      v61 = *v50;
      v51 = (char *)v95++;
      v52 = (unsigned __int8)*v51;
      v59 = ((v52 - v61) ^ ((v52 - v61) >> 31)) - ((v52 - v61) >> 31);
      v60 = (((v52 - v61 + v62 - v61) >> 31) ^ (v52 - v61 + v62 - v61)) - ((v52 - v61 + v62 - v61) >> 31);
      if ( ((v62 - v61) ^ ((v62 - v61) >> 31)) - ((v62 - v61) >> 31) <= v59
        && ((v62 - v61) ^ ((v62 - v61) >> 31)) - ((v62 - v61) >> 31) <= v60 )
      {
        v53 = *v51;
      }
      else
      {
        v53 = v59 > v60 ? (_BYTE)v61 : (_BYTE)v62;
      }
      v54 = v53;
      v55 = (_BYTE *)v98++;
      v56 = (_BYTE *)v99++;
      *v55 = *v56 - v54;
      v64 = *v55;
      v57 = v64 > 127 ? 256 - v64 : *v55;
      v94 += v57;
      if ( v94 > v93 )
        break;
      ++v92;
    }
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      v82 = (unsigned __int16)v94;
      v84 = (v94 >> 10) & 0x3FFFC0;
      for ( kk = 0; kk < v78; ++kk )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 532) + kk) == 4 )
        {
          v82 = v82 * *(_WORD *)(2 * kk + *(_DWORD *)(a1 + 536)) >> 8;
          v84 = v84 * *(_WORD *)(2 * kk + *(_DWORD *)(a1 + 536)) >> 8;
        }
      }
      v83 = v82 * *(_WORD *)(*(_DWORD *)(a1 + 544) + 8) >> 3;
      v85 = v84 * *(_WORD *)(*(_DWORD *)(a1 + 544) + 8) >> 3;
      if ( v85 <= 0x3FFFC0 )
        v94 = (v85 << 10) + v83;
      else
        v94 = 0x7FFFFFFF;
    }
    if ( v94 < v176 )
      v177 = *(_BYTE **)(a1 + 308);
  }
  sub_6F85C9B3(a1, (int)v177, *(_DWORD *)(a2 + 4) + 1);
  result = *(_BYTE *)(a1 + 529);
  if ( (_BYTE)result )
  {
    for ( ll = 1; ll < v78; ++ll )
      *(_BYTE *)(ll + *(_DWORD *)(a1 + 532)) = *(_BYTE *)(ll - 1 + *(_DWORD *)(a1 + 532));
    result = *v177;
    *(_BYTE *)(ll + *(_DWORD *)(a1 + 532)) = result;
  }
  return result;
}
