signed int __cdecl sub_6F88F670(int a1, unsigned int a2)
{
  int v2; // ebp@2
  int v3; // eax@6
  unsigned int v4; // edx@10
  int v5; // edx@14
  int v6; // eax@17
  int v7; // eax@22
  int v8; // ebx@24
  int v9; // eax@24
  unsigned int v10; // ecx@24
  int v11; // eax@24
  int v12; // edx@24
  int v13; // ecx@24
  int v14; // eax@24
  int v15; // eax@24
  int v16; // ecx@24
  int v17; // eax@25
  signed int result; // eax@27
  int v19; // eax@33
  int v20; // eax@35
  unsigned int v21; // edx@35
  unsigned int v22; // ecx@35
  _WORD *v23; // eax@45
  int v24; // edx@45
  signed int v25; // eax@50
  int v26; // edx@51
  unsigned int v27; // ecx@51
  int v28; // ebx@51
  int v29; // eax@53
  unsigned int v30; // edx@53
  int v31; // eax@53
  int v32; // ecx@53
  int v33; // esi@54
  int v34; // eax@54
  unsigned int v35; // ecx@54
  int v36; // eax@54
  int v37; // edx@54
  int v38; // ebx@54
  int v39; // eax@54
  int v40; // eax@54
  int v41; // ecx@54
  int v42; // ecx@56
  int v43; // eax@56
  unsigned int v44; // edi@58
  unsigned int v45; // eax@59
  int v46; // esi@59
  int v47; // esi@60
  unsigned int v48; // ebx@60
  unsigned int v49; // eax@60
  int v50; // eax@75
  int v51; // ecx@75
  int v52; // edx@75
  int v53; // eax@78
  int v54; // eax@79
  int v55; // edx@79
  int v56; // edx@79
  int v57; // eax@79
  int v58; // ecx@79
  int v59; // ecx@79
  int v60; // eax@79
  int v61; // edx@79
  bool v62; // zf@79
  int v63; // edx@85
  int v64; // ecx@85
  unsigned int v65; // ebx@90
  unsigned int v66; // ecx@90
  int v67; // esi@91
  int v68; // eax@91
  int v69; // esi@91
  signed int v70; // edx@99
  int v71; // edx@107
  int v72; // ecx@107
  unsigned int v73; // ecx@109
  signed int v74; // esi@111
  int v75; // esi@120
  int v76; // edx@120
  int v77; // edx@122
  int v78; // eax@122
  int v79; // ecx@122
  int v80; // eax@122
  unsigned int v81; // eax@123
  int v82; // ebx@129
  unsigned int v83; // ebx@132
  unsigned int v84; // ecx@143
  int v85; // eax@145
  unsigned __int8 v86; // dl@145
  int v87; // ecx@145
  int v88; // eax@145
  int v89; // edx@145
  int v90; // eax@145
  int v91; // edx@146
  int v92; // ecx@146
  unsigned int v93; // ebx@154
  unsigned int v94; // ecx@154
  int v95; // esi@155
  int v96; // eax@155
  int v97; // esi@155
  signed int v98; // esi@163
  int v99; // ecx@174
  int v100; // edx@174
  int v101; // ecx@174
  unsigned int v102; // eax@174
  unsigned int v103; // eax@71
  int v104; // eax@185
  int v105; // ecx@185
  int v106; // edx@185
  int v107; // ecx@185
  int v108; // eax@185
  int v109; // edx@185
  int v110; // eax@185
  int v111; // edx@185
  int v112; // eax@185
  int v113; // ecx@185
  int v114; // edx@185
  int v115; // ecx@185
  int v116; // eax@185
  int v117; // edx@185
  int v118; // eax@185
  int v119; // edx@185
  unsigned int v120; // eax@186
  int v121; // edx@186
  int v122; // eax@186
  int v123; // eax@186
  int v124; // edx@186
  int v125; // eax@186
  int v126; // edx@186
  int v127; // eax@186
  int v128; // ebx@187
  int v129; // esi@187
  bool v130; // cl@187
  bool v131; // cf@187
  int v132; // eax@187
  int v133; // edx@187
  int v134; // edx@187
  int v135; // ecx@187
  int v136; // eax@187
  int v137; // edx@187
  int v138; // eax@187
  int v139; // edx@187
  int v140; // eax@187
  signed int v141; // edx@187
  char *v142; // ecx@187
  char v143; // al@187
  int v144; // eax@190
  int v145; // edx@190
  int v146; // eax@191
  int v147; // ebx@191
  int v148; // edx@191
  int v149; // ecx@191
  unsigned int v150; // eax@114
  unsigned int v151; // eax@166
  unsigned int v152; // eax@193
  int v153; // eax@206
  int v154; // edx@206
  int v155; // eax@206
  int v156; // edx@206
  int v157; // eax@206
  int v158; // edx@206
  int v159; // eax@206
  int v160; // edx@206
  int v161; // eax@206
  int v162; // edx@206
  int v163; // eax@206
  signed int v164; // edx@206
  char *v165; // ecx@206
  char v166; // al@206
  int v167; // eax@209
  int v168; // edx@209
  signed int v169; // [sp+14h] [bp-28h]@8
  int v170; // [sp+14h] [bp-28h]@121
  unsigned int v171; // [sp+14h] [bp-28h]@132
  int v172; // [sp+18h] [bp-24h]@129

  if ( !a1 )
    return -2;
  v2 = *(_DWORD *)(a1 + 28);
  if ( !v2 || a2 > 5 )
    return -2;
  if ( !*(_DWORD *)(a1 + 12)
    || !*(_DWORD *)a1 && *(_DWORD *)(a1 + 4)
    || (v3 = *(_DWORD *)(v2 + 4), v3 == 666) && a2 != 4 )
  {
    *(_DWORD *)(a1 + 24) = "stream error";
    return -2;
  }
  if ( !*(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 24) = "buffer error";
    return -5;
  }
  *(_DWORD *)v2 = a1;
  v169 = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v2 + 40) = a2;
  if ( v3 == 42 )
  {
    if ( *(_DWORD *)(v2 + 24) == 2 )
    {
      v120 = sub_6F88BF50(0, 0, 0);
      v121 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(a1 + 48) = v120;
      v122 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v2 + 20) = v122 + 1;
      *(_BYTE *)(v121 + v122) = 31;
      v123 = *(_DWORD *)(v2 + 20);
      v124 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v123 + 1;
      *(_BYTE *)(v124 + v123) = -117;
      v125 = *(_DWORD *)(v2 + 20);
      v126 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v125 + 1;
      *(_BYTE *)(v126 + v125) = 8;
      v127 = *(_DWORD *)(v2 + 28);
      if ( !v127 )
      {
        v153 = *(_DWORD *)(v2 + 20);
        v154 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v153 + 1;
        *(_BYTE *)(v154 + v153) = 0;
        v155 = *(_DWORD *)(v2 + 20);
        v156 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v155 + 1;
        *(_BYTE *)(v156 + v155) = 0;
        v157 = *(_DWORD *)(v2 + 20);
        v158 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v157 + 1;
        *(_BYTE *)(v158 + v157) = 0;
        v159 = *(_DWORD *)(v2 + 20);
        v160 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v159 + 1;
        *(_BYTE *)(v160 + v159) = 0;
        v161 = *(_DWORD *)(v2 + 20);
        v162 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v161 + 1;
        *(_BYTE *)(v162 + v161) = 0;
        v163 = *(_DWORD *)(v2 + 20);
        *(_DWORD *)(v2 + 20) = v163 + 1;
        v164 = *(_DWORD *)(v2 + 132);
        v165 = (char *)(*(_DWORD *)(v2 + 8) + v163);
        v166 = 2;
        if ( v164 != 9 )
        {
          if ( *(_DWORD *)(v2 + 136) > 1 || v164 <= 1 )
            v166 = 4;
          else
            v166 = 0;
        }
        *v165 = v166;
        v167 = *(_DWORD *)(v2 + 20);
        v168 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v167 + 1;
        *(_BYTE *)(v168 + v167) = 11;
        v4 = *(_DWORD *)(v2 + 20);
        *(_DWORD *)(v2 + 4) = 113;
        goto LABEL_13;
      }
      v128 = *(_DWORD *)(v2 + 20);
      v129 = *(_DWORD *)(v2 + 8);
      v130 = *(_DWORD *)v127 != 0;
      v131 = *(_DWORD *)(v127 + 44) < 1u;
      *(_DWORD *)(v2 + 20) = v128 + 1;
      *(_BYTE *)(v129 + v128) = (*(_DWORD *)(v127 + 16) >= 1u ? 4 : 0)
                              + (~-v131 & 2)
                              + v130
                              + (*(_DWORD *)(v127 + 28) >= 1u ? 8 : 0)
                              + (*(_DWORD *)(v127 + 36) >= 1u ? 0x10 : 0);
      v132 = *(_DWORD *)(v2 + 20);
      v133 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v132 + 1;
      *(_BYTE *)(v133 + v132) = *(_DWORD *)(*(_DWORD *)(v2 + 28) + 4);
      v134 = *(_DWORD *)(v2 + 20);
      v135 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v134 + 1;
      *(_BYTE *)(v135 + v134) = *(_WORD *)(*(_DWORD *)(v2 + 28) + 4) >> 8;
      v136 = *(_DWORD *)(v2 + 20);
      v137 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v136 + 1;
      *(_BYTE *)(v137 + v136) = *(_WORD *)(*(_DWORD *)(v2 + 28) + 6);
      v138 = *(_DWORD *)(v2 + 20);
      v139 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v138 + 1;
      *(_BYTE *)(v139 + v138) = *(_BYTE *)(*(_DWORD *)(v2 + 28) + 7);
      v140 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v2 + 20) = v140 + 1;
      v141 = *(_DWORD *)(v2 + 132);
      v142 = (char *)(*(_DWORD *)(v2 + 8) + v140);
      v143 = 2;
      if ( v141 != 9 )
      {
        if ( *(_DWORD *)(v2 + 136) > 1 || v141 <= 1 )
          v143 = 4;
        else
          v143 = 0;
      }
      *v142 = v143;
      v144 = *(_DWORD *)(v2 + 20);
      v145 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v144 + 1;
      *(_BYTE *)(v145 + v144) = *(_DWORD *)(*(_DWORD *)(v2 + 28) + 12);
      v42 = *(_DWORD *)(v2 + 28);
      if ( *(_DWORD *)(v42 + 16) )
      {
        v146 = *(_DWORD *)(v2 + 20);
        v147 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v146 + 1;
        *(_BYTE *)(v147 + v146) = *(_DWORD *)(v42 + 20);
        v148 = *(_DWORD *)(v2 + 20);
        v149 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 20) = v148 + 1;
        *(_BYTE *)(v149 + v148) = *(_WORD *)(*(_DWORD *)(v2 + 28) + 20) >> 8;
        v42 = *(_DWORD *)(v2 + 28);
        v43 = *(_DWORD *)(v2 + 28);
      }
      else
      {
        v43 = *(_DWORD *)(v2 + 28);
      }
      if ( *(_DWORD *)(v42 + 44) )
      {
        v152 = sub_6F88BF50(*(_DWORD *)(a1 + 48), *(_DWORD *)(v2 + 8), *(_DWORD *)(v2 + 20));
        v42 = *(_DWORD *)(v2 + 28);
        *(_DWORD *)(a1 + 48) = v152;
        v43 = v42;
      }
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)(v2 + 4) = 69;
      goto LABEL_57;
    }
    v25 = 0;
    if ( *(_DWORD *)(v2 + 136) <= 1 )
    {
      v70 = *(_DWORD *)(v2 + 132);
      if ( v70 > 1 )
      {
        LOBYTE(v25) = 64;
        if ( v70 > 5 )
        {
          LOBYTE(v25) = -128;
          if ( v70 != 6 )
            v25 = 192;
        }
      }
    }
    v26 = *(_DWORD *)(v2 + 108);
    v27 = v25 | ((*(_DWORD *)(v2 + 48) << 12) - 30720);
    v28 = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(v2 + 4) = 113;
    if ( v26 )
      v27 |= 0x20u;
    v29 = *(_DWORD *)(v2 + 20);
    v30 = 31 * (v27 / 0x1F) + 31;
    *(_DWORD *)(v2 + 20) = v29 + 1;
    *(_BYTE *)(v28 + v29) = BYTE1(v30);
    v31 = *(_DWORD *)(v2 + 20);
    v32 = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(v2 + 20) = v31 + 1;
    *(_BYTE *)(v32 + v31) = v30;
    if ( *(_DWORD *)(v2 + 108) )
    {
      v33 = *(_DWORD *)(v2 + 8);
      v34 = *(_DWORD *)(v2 + 20);
      v35 = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v2 + 20) = v34 + 1;
      *(_BYTE *)(v33 + v34) = BYTE3(v35);
      v36 = *(_DWORD *)(v2 + 20);
      v37 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v36 + 1;
      *(_BYTE *)(v37 + v36) = v35 >> 16;
      v38 = *(_DWORD *)(v2 + 8);
      LOWORD(v37) = *(_WORD *)(a1 + 48);
      v39 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v2 + 20) = v39 + 1;
      *(_BYTE *)(v38 + v39) = BYTE1(v37);
      v40 = *(_DWORD *)(v2 + 20);
      v41 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v40 + 1;
      *(_BYTE *)(v41 + v40) = v37;
    }
    *(_DWORD *)(a1 + 48) = sub_6F88BA20(0, 0, 0);
    v3 = *(_DWORD *)(v2 + 4);
    if ( v3 != 69 )
    {
LABEL_10:
      v4 = *(_DWORD *)(v2 + 20);
      if ( v3 != 73 )
        goto LABEL_11;
      goto LABEL_74;
    }
  }
  else if ( v3 != 69 )
  {
    goto LABEL_10;
  }
  v42 = *(_DWORD *)(v2 + 28);
  v43 = *(_DWORD *)(v2 + 28);
LABEL_57:
  if ( !*(_DWORD *)(v42 + 16) )
  {
    *(_DWORD *)(v2 + 4) = 73;
    v4 = *(_DWORD *)(v2 + 20);
    goto LABEL_89;
  }
  v4 = *(_DWORD *)(v2 + 20);
  v44 = *(_DWORD *)(v2 + 20);
  if ( (unsigned int)*(_WORD *)(v42 + 20) > *(_DWORD *)(v2 + 32) )
  {
    v45 = *(_DWORD *)(v2 + 20);
    v46 = v42;
    while ( 1 )
    {
      if ( *(_DWORD *)(v2 + 12) == v45 )
      {
        if ( *(_DWORD *)(v46 + 44) && v45 > v4 )
          *(_DWORD *)(a1 + 48) = sub_6F88BF50(*(_DWORD *)(a1 + 48), *(_DWORD *)(v2 + 8) + v4, v45 - v4);
        sub_6F88E5B0(a1);
        v4 = *(_DWORD *)(v2 + 20);
        v44 = *(_DWORD *)(v2 + 20);
        if ( v4 == *(_DWORD *)(v2 + 12) )
        {
          v43 = *(_DWORD *)(v2 + 28);
          break;
        }
        v45 = *(_DWORD *)(v2 + 20);
        v42 = *(_DWORD *)(v2 + 28);
      }
      v47 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v45 + 1;
      *(_BYTE *)(v47 + v45) = *(_BYTE *)(*(_DWORD *)(v42 + 16) + *(_DWORD *)(v2 + 32));
      v42 = *(_DWORD *)(v2 + 28);
      v48 = *(_WORD *)(v42 + 20);
      v46 = *(_DWORD *)(v2 + 28);
      v49 = *(_DWORD *)(v2 + 32) + 1;
      *(_DWORD *)(v2 + 32) = v49;
      if ( v48 <= v49 )
      {
        v4 = *(_DWORD *)(v2 + 20);
        v43 = v42;
        break;
      }
      v45 = *(_DWORD *)(v2 + 20);
    }
  }
  if ( *(_DWORD *)(v43 + 44) && v44 < v4 )
  {
    v103 = sub_6F88BF50(*(_DWORD *)(a1 + 48), *(_DWORD *)(v2 + 8) + v44, v4 - v44);
    v4 = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(a1 + 48) = v103;
    v43 = *(_DWORD *)(v2 + 28);
  }
  if ( *(_DWORD *)(v2 + 32) == *(_DWORD *)(v43 + 20) )
  {
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 4) = 73;
    goto LABEL_89;
  }
  v3 = *(_DWORD *)(v2 + 4);
  if ( v3 != 73 )
  {
LABEL_11:
    if ( v3 == 91 )
      goto LABEL_117;
    goto LABEL_12;
  }
LABEL_74:
  v43 = *(_DWORD *)(v2 + 28);
LABEL_89:
  if ( !*(_DWORD *)(v43 + 28) )
  {
    *(_DWORD *)(v2 + 4) = 91;
    goto LABEL_153;
  }
  v65 = v4;
  v66 = v4;
  while ( 1 )
  {
    if ( *(_DWORD *)(v2 + 12) != v66 )
      goto LABEL_91;
    if ( *(_DWORD *)(v43 + 44) && v4 < v66 )
      *(_DWORD *)(a1 + 48) = sub_6F88BF50(*(_DWORD *)(a1 + 48), *(_DWORD *)(v2 + 8) + v4, v66 - v4);
    sub_6F88E5B0(a1);
    v4 = *(_DWORD *)(v2 + 20);
    v65 = *(_DWORD *)(v2 + 20);
    if ( v4 == *(_DWORD *)(v2 + 12) )
      break;
    v43 = *(_DWORD *)(v2 + 28);
    v66 = *(_DWORD *)(v2 + 20);
LABEL_91:
    v67 = *(_DWORD *)(v43 + 28);
    v68 = *(_DWORD *)(v2 + 32);
    *(_DWORD *)(v2 + 32) = v68 + 1;
    LOBYTE(v68) = *(_BYTE *)(v67 + v68);
    v69 = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(v2 + 20) = v66 + 1;
    *(_BYTE *)(v69 + v66) = v68;
    if ( !(_BYTE)v68 )
    {
      v4 = *(_DWORD *)(v2 + 20);
      v74 = 0;
      goto LABEL_112;
    }
    v66 = *(_DWORD *)(v2 + 20);
    v43 = *(_DWORD *)(v2 + 28);
  }
  v74 = 1;
LABEL_112:
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 28) + 44) && v65 < v4 )
  {
    v150 = sub_6F88BF50(*(_DWORD *)(a1 + 48), *(_DWORD *)(v2 + 8) + v65, v4 - v65);
    v4 = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(a1 + 48) = v150;
  }
  if ( v74 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( v3 == 91 )
    {
LABEL_117:
      v43 = *(_DWORD *)(v2 + 28);
      goto LABEL_153;
    }
LABEL_12:
    if ( v3 == 103 )
      goto LABEL_169;
    goto LABEL_13;
  }
  v43 = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 4) = 91;
LABEL_153:
  if ( !*(_DWORD *)(v43 + 36) )
  {
    *(_DWORD *)(v2 + 4) = 103;
    goto LABEL_172;
  }
  v93 = v4;
  v94 = v4;
  while ( 1 )
  {
    if ( *(_DWORD *)(v2 + 12) != v94 )
      goto LABEL_155;
    if ( *(_DWORD *)(v43 + 44) && v4 < v94 )
      *(_DWORD *)(a1 + 48) = sub_6F88BF50(*(_DWORD *)(a1 + 48), *(_DWORD *)(v2 + 8) + v4, v94 - v4);
    sub_6F88E5B0(a1);
    v4 = *(_DWORD *)(v2 + 20);
    v93 = *(_DWORD *)(v2 + 20);
    if ( v4 == *(_DWORD *)(v2 + 12) )
      break;
    v43 = *(_DWORD *)(v2 + 28);
    v94 = *(_DWORD *)(v2 + 20);
LABEL_155:
    v95 = *(_DWORD *)(v43 + 36);
    v96 = *(_DWORD *)(v2 + 32);
    *(_DWORD *)(v2 + 32) = v96 + 1;
    LOBYTE(v96) = *(_BYTE *)(v95 + v96);
    v97 = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(v2 + 20) = v94 + 1;
    *(_BYTE *)(v97 + v94) = v96;
    if ( !(_BYTE)v96 )
    {
      v4 = *(_DWORD *)(v2 + 20);
      v98 = 0;
      goto LABEL_164;
    }
    v94 = *(_DWORD *)(v2 + 20);
    v43 = *(_DWORD *)(v2 + 28);
  }
  v98 = 1;
LABEL_164:
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 28) + 44) && v93 < v4 )
  {
    v151 = sub_6F88BF50(*(_DWORD *)(a1 + 48), *(_DWORD *)(v2 + 8) + v93, v4 - v93);
    v4 = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(a1 + 48) = v151;
  }
  if ( !v98 )
  {
    v43 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v2 + 4) = 103;
LABEL_172:
    if ( *(_DWORD *)(v43 + 44) )
      goto LABEL_173;
LABEL_170:
    *(_DWORD *)(v2 + 4) = 113;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v2 + 4) == 103 )
  {
LABEL_169:
    if ( !*(_DWORD *)(*(_DWORD *)(v2 + 28) + 44) )
      goto LABEL_170;
LABEL_173:
    if ( v4 + 2 <= *(_DWORD *)(v2 + 12) || (sub_6F88E5B0(a1), v4 = *(_DWORD *)(v2 + 20), v4 + 2 <= *(_DWORD *)(v2 + 12)) )
    {
      v99 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v4 + 1;
      *(_BYTE *)(v99 + v4) = *(_DWORD *)(a1 + 48);
      v100 = *(_DWORD *)(v2 + 20);
      v101 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 20) = v100 + 1;
      *(_BYTE *)(v101 + v100) = *(_WORD *)(a1 + 48) >> 8;
      v102 = sub_6F88BF50(0, 0, 0);
      v4 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(a1 + 48) = v102;
      *(_DWORD *)(v2 + 4) = 113;
    }
  }
LABEL_13:
  if ( v4 )
  {
    sub_6F88E5B0(a1);
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_48;
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)(v2 + 4);
    if ( v6 == 666 )
      goto LABEL_105;
    if ( !v5 )
    {
LABEL_18:
      if ( !*(_DWORD *)(v2 + 116) )
      {
        if ( !a2 )
          return 0;
        if ( v6 == 666 )
          goto LABEL_21;
      }
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v2 + 4);
    if ( v6 == 666 )
    {
LABEL_105:
      if ( v5 )
        goto LABEL_106;
      goto LABEL_18;
    }
LABEL_33:
    v19 = *(_DWORD *)(v2 + 136);
    if ( v19 == 2 )
    {
LABEL_78:
      v53 = *(_DWORD *)(v2 + 116);
      while ( 1 )
      {
        if ( !v53 )
        {
          sub_6F88E2C0(v2);
          if ( !*(_DWORD *)(v2 + 116) )
            break;
        }
        v54 = *(_DWORD *)(v2 + 108);
        v55 = *(_DWORD *)(v2 + 56);
        *(_DWORD *)(v2 + 96) = 0;
        v56 = *(_BYTE *)(v55 + v54);
        v57 = *(_DWORD *)(v2 + 5792);
        *(_WORD *)(*(_DWORD *)(v2 + 5796) + 2 * v57) = 0;
        v58 = *(_DWORD *)(v2 + 5784);
        *(_DWORD *)(v2 + 5792) = v57 + 1;
        *(_BYTE *)(v58 + v57) = v56;
        ++*(_WORD *)(v2 + 4 * v56 + 148);
        v59 = *(_DWORD *)(v2 + 5788) - 1;
        v60 = *(_DWORD *)(v2 + 116);
        v61 = *(_DWORD *)(v2 + 108) + 1;
        *(_DWORD *)(v2 + 108) = v61;
        v53 = v60 - 1;
        v62 = *(_DWORD *)(v2 + 5792) == v59;
        *(_DWORD *)(v2 + 116) = v53;
        if ( v62 )
        {
          v50 = *(_DWORD *)(v2 + 92);
          v51 = 0;
          v52 = v61 - v50;
          if ( v50 >= 0 )
            v51 = *(_DWORD *)(v2 + 56) + v50;
          sub_6F8923F0(v2, v51, v52, 0);
          *(_DWORD *)(v2 + 92) = *(_DWORD *)(v2 + 108);
          sub_6F88E5B0(*(_DWORD *)v2);
          if ( !*(_DWORD *)(*(_DWORD *)v2 + 16) )
            goto LABEL_38;
          goto LABEL_78;
        }
      }
      if ( !a2 )
        goto LABEL_38;
LABEL_83:
      *(_DWORD *)(v2 + 5812) = 0;
      if ( a2 == 4 )
      {
        v71 = *(_DWORD *)(v2 + 92);
        v72 = 0;
        if ( v71 >= 0 )
          v72 = *(_DWORD *)(v2 + 56) + v71;
        sub_6F8923F0(v2, v72, *(_DWORD *)(v2 + 108) - v71, 1);
        *(_DWORD *)(v2 + 92) = *(_DWORD *)(v2 + 108);
        sub_6F88E5B0(*(_DWORD *)v2);
        v73 = *(_DWORD *)(*(_DWORD *)v2 + 16);
        v21 = v73 >= 1;
        v20 = 3 - (v73 < 1);
        goto LABEL_110;
      }
      if ( !*(_DWORD *)(v2 + 5792) )
        goto LABEL_42;
      v63 = *(_DWORD *)(v2 + 92);
      v64 = 0;
      if ( v63 >= 0 )
        v64 = *(_DWORD *)(v2 + 56) + v63;
      sub_6F8923F0(v2, v64, *(_DWORD *)(v2 + 108) - v63, 0);
      *(_DWORD *)(v2 + 92) = *(_DWORD *)(v2 + 108);
      sub_6F88E5B0(*(_DWORD *)v2);
      v20 = *(_DWORD *)(*(_DWORD *)v2 + 16) != 0;
      v22 = v20 - 2;
      v21 = *(_DWORD *)(*(_DWORD *)v2 + 16) != 0;
LABEL_36:
      if ( v22 <= 1 )
LABEL_110:
        *(_DWORD *)(v2 + 4) = 666;
      if ( v21 )
      {
        if ( v20 != 1 )
          goto LABEL_21;
LABEL_42:
        if ( a2 == 1 )
        {
          sub_6F892300(v2);
        }
        else if ( a2 != 5 )
        {
          sub_6F8921D0(v2, 0, 0, 0);
          if ( a2 == 3 )
          {
            v23 = *(_WORD **)(v2 + 68);
            v24 = *(_DWORD *)(v2 + 76) + 0x7FFFFFFF;
            v23[v24] = 0;
            memset(v23, 0, 2 * v24);
            if ( !*(_DWORD *)(v2 + 116) )
            {
              *(_DWORD *)(v2 + 108) = 0;
              *(_DWORD *)(v2 + 92) = 0;
              *(_DWORD *)(v2 + 5812) = 0;
            }
          }
        }
        sub_6F88E5B0(a1);
        if ( *(_DWORD *)(a1 + 16) )
        {
LABEL_21:
          if ( a2 == 4 )
          {
            v7 = *(_DWORD *)(v2 + 24);
            if ( v7 <= 0 )
            {
              result = 1;
            }
            else
            {
              if ( v7 == 2 )
              {
                v104 = *(_DWORD *)(v2 + 20);
                v105 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v104 + 1;
                *(_BYTE *)(v105 + v104) = *(_DWORD *)(a1 + 48);
                v106 = *(_DWORD *)(v2 + 20);
                v107 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v106 + 1;
                *(_BYTE *)(v107 + v106) = *(_WORD *)(a1 + 48) >> 8;
                v108 = *(_DWORD *)(v2 + 20);
                v109 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v108 + 1;
                *(_BYTE *)(v109 + v108) = *(_WORD *)(a1 + 50);
                v110 = *(_DWORD *)(v2 + 20);
                v111 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v110 + 1;
                *(_BYTE *)(v111 + v110) = *(_BYTE *)(a1 + 51);
                v112 = *(_DWORD *)(v2 + 20);
                v113 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v112 + 1;
                *(_BYTE *)(v113 + v112) = *(_DWORD *)(a1 + 8);
                v114 = *(_DWORD *)(v2 + 20);
                v115 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v114 + 1;
                *(_BYTE *)(v115 + v114) = *(_WORD *)(a1 + 8) >> 8;
                v116 = *(_DWORD *)(v2 + 20);
                v117 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v116 + 1;
                *(_BYTE *)(v117 + v116) = *(_WORD *)(a1 + 10);
                v118 = *(_DWORD *)(v2 + 20);
                v119 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v118 + 1;
                *(_BYTE *)(v119 + v118) = *(_BYTE *)(a1 + 11);
              }
              else
              {
                v8 = *(_DWORD *)(v2 + 8);
                v9 = *(_DWORD *)(v2 + 20);
                v10 = *(_DWORD *)(a1 + 48);
                *(_DWORD *)(v2 + 20) = v9 + 1;
                *(_BYTE *)(v8 + v9) = BYTE3(v10);
                v11 = *(_DWORD *)(v2 + 20);
                v12 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v11 + 1;
                *(_BYTE *)(v12 + v11) = v10 >> 16;
                v13 = *(_DWORD *)(v2 + 8);
                LOWORD(v12) = *(_WORD *)(a1 + 48);
                v14 = *(_DWORD *)(v2 + 20);
                *(_DWORD *)(v2 + 20) = v14 + 1;
                *(_BYTE *)(v13 + v14) = BYTE1(v12);
                v15 = *(_DWORD *)(v2 + 20);
                v16 = *(_DWORD *)(v2 + 8);
                *(_DWORD *)(v2 + 20) = v15 + 1;
                *(_BYTE *)(v16 + v15) = v12;
              }
              sub_6F88E5B0(a1);
              v17 = *(_DWORD *)(v2 + 24);
              if ( v17 > 0 )
                *(_DWORD *)(v2 + 24) = -v17;
              result = *(_DWORD *)(v2 + 20) == 0;
            }
            return result;
          }
          return 0;
        }
      }
      else
      {
LABEL_38:
        if ( *(_DWORD *)(a1 + 16) )
          return 0;
      }
LABEL_48:
      *(_DWORD *)(v2 + 40) = -1;
      return 0;
    }
    if ( v19 != 3 )
    {
      v20 = (*(&off_6FBA11A8 + 3 * *(_DWORD *)(v2 + 132)))(v2, a2);
      v21 = v20 & 0xFFFFFFFD;
      v22 = v20 - 2;
      goto LABEL_36;
    }
    while ( 1 )
    {
      v81 = *(_DWORD *)(v2 + 116);
      if ( v81 > 0x102 || (sub_6F88E2C0(v2), v81 = *(_DWORD *)(v2 + 116), v81 > 0x102) )
      {
        *(_DWORD *)(v2 + 96) = 0;
      }
      else
      {
        if ( !a2 )
          goto LABEL_38;
        if ( !v81 )
          goto LABEL_83;
        *(_DWORD *)(v2 + 96) = 0;
        if ( v81 <= 2 )
        {
          v76 = *(_DWORD *)(v2 + 56);
          v170 = *(_DWORD *)(v2 + 108);
          goto LABEL_122;
        }
      }
      v75 = *(_DWORD *)(v2 + 108);
      v76 = *(_DWORD *)(v2 + 56);
      if ( v75 )
      {
        v82 = v76 + v75 - 1;
        v170 = *(_DWORD *)(v2 + 108);
        v172 = *(_BYTE *)v82;
        if ( *(_BYTE *)(v76 + v75) != *(_BYTE *)v82 || v172 != *(_BYTE *)(v82 + 2) || v172 != *(_BYTE *)(v82 + 3) )
          goto LABEL_122;
        v83 = v82 + 3;
        v171 = v76 + v75 + 258;
        while ( 1 )
        {
          if ( v172 != *(_BYTE *)(v83 + 1) )
          {
            ++v83;
            goto LABEL_143;
          }
          if ( v172 != *(_BYTE *)(v83 + 2) )
          {
            v83 += 2;
            goto LABEL_143;
          }
          if ( v172 != *(_BYTE *)(v83 + 3) )
            break;
          if ( v172 != *(_BYTE *)(v83 + 4) )
          {
            v83 += 4;
            goto LABEL_143;
          }
          if ( v172 != *(_BYTE *)(v83 + 5) )
          {
            v83 += 5;
            goto LABEL_143;
          }
          if ( v172 != *(_BYTE *)(v83 + 6) )
          {
            v83 += 6;
            goto LABEL_143;
          }
          if ( v172 != *(_BYTE *)(v83 + 7) )
          {
            v83 += 7;
            goto LABEL_143;
          }
          v83 += 8;
          if ( v172 != *(_BYTE *)v83 || v83 >= v171 )
            goto LABEL_143;
        }
        v83 += 3;
LABEL_143:
        v84 = v83 - v171 + 258;
        *(_DWORD *)(v2 + 96) = v84;
        if ( v84 <= v81 )
        {
          if ( v84 <= 2 )
          {
            v170 = v75;
            goto LABEL_122;
          }
        }
        else
        {
          *(_DWORD *)(v2 + 96) = v81;
          LOBYTE(v84) = v81;
        }
        v85 = *(_DWORD *)(v2 + 5792);
        v86 = v84 - 3;
        *(_WORD *)(*(_DWORD *)(v2 + 5796) + 2 * v85) = 1;
        v87 = *(_DWORD *)(v2 + 5784);
        *(_DWORD *)(v2 + 5792) = v85 + 1;
        *(_BYTE *)(v87 + v85) = v86;
        ++*(_WORD *)(v2 + 4 * (unsigned __int8)byte_6FBA1380[v86] + 1176);
        ++*(_WORD *)(v2 + 2440);
        v88 = *(_DWORD *)(v2 + 5788);
        v89 = *(_DWORD *)(v2 + 96);
        *(_DWORD *)(v2 + 96) = 0;
        v90 = *(_DWORD *)(v2 + 5792) == v88 - 1;
        *(_DWORD *)(v2 + 116) -= v89;
        *(_DWORD *)(v2 + 108) += v89;
        if ( v90 )
          goto LABEL_146;
      }
      else
      {
        v170 = 0;
LABEL_122:
        v77 = *(_BYTE *)(v76 + v170);
        v78 = *(_DWORD *)(v2 + 5792);
        *(_WORD *)(*(_DWORD *)(v2 + 5796) + 2 * v78) = 0;
        v79 = *(_DWORD *)(v2 + 5784);
        *(_DWORD *)(v2 + 5792) = v78 + 1;
        *(_BYTE *)(v79 + v78) = v77;
        ++*(_WORD *)(v2 + 4 * v77 + 148);
        v80 = *(_DWORD *)(v2 + 5792) == *(_DWORD *)(v2 + 5788) - 1;
        --*(_DWORD *)(v2 + 116);
        ++*(_DWORD *)(v2 + 108);
        if ( v80 )
        {
LABEL_146:
          v91 = *(_DWORD *)(v2 + 92);
          v92 = 0;
          if ( v91 >= 0 )
            v92 = *(_DWORD *)(v2 + 56) + v91;
          sub_6F8923F0(v2, v92, *(_DWORD *)(v2 + 108) - v91, 0);
          *(_DWORD *)(v2 + 92) = *(_DWORD *)(v2 + 108);
          sub_6F88E5B0(*(_DWORD *)v2);
          if ( !*(_DWORD *)(*(_DWORD *)v2 + 16) )
            goto LABEL_38;
        }
      }
    }
  }
  if ( (signed int)(2 * a2 - 9 * (a2 == 5)) > 2 * v169 - 9 * (v169 >= 5) || a2 == 4 )
  {
    v6 = *(_DWORD *)(v2 + 4);
    goto LABEL_18;
  }
LABEL_106:
  *(_DWORD *)(a1 + 24) = "buffer error";
  return -5;
}
