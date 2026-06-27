signed int __cdecl sub_6F778AE0(_DWORD a1, int a2, _DWORD a3, _DWORD *a4, _DWORD a5)
{
  _DWORD v5; // ebx@1
  bool v6; // cf@1
  bool v7; // zf@1
  _BYTE *v8; // esi@3
  signed int v9; // ecx@3
  const char *v10; // edi@3
  signed int v11; // ebp@6
  _BYTE v12; // al@7
  _DWORD v13; // eax@9
  bool v14; // cf@9
  bool v15; // zf@9
  _BYTE *v16; // esi@10
  signed int v17; // ecx@10
  const char *v18; // edi@10
  _BYTE v19; // al@14
  const void *v21; // esi@19
  size_t v22; // edi@19
  int v23; // edx@21
  unsigned int v24; // eax@21
  char *v25; // eax@21
  char *v26; // ebp@22
  int v27; // ebp@22
  _BYTE *v28; // esi@23
  const char *v29; // edi@23
  signed int v30; // ecx@23
  _BYTE v31; // bp@27
  _BYTE *v32; // esi@29
  const char *v33; // edi@29
  signed int v34; // ecx@29
  _BYTE *v35; // esi@33
  const char *v36; // edi@33
  signed int v37; // ecx@33
  _BYTE v38; // bp@37
  _DWORD v39; // ecx@41
  _DWORD v40; // edx@42
  int v41; // eax@42
  char *v42; // edi@43
  signed int v43; // esi@43
  _DWORD v44; // ebx@44
  signed int v45; // ebp@45
  _DWORD v46; // esi@46
  _DWORD v47; // ecx@48
  _DWORD v48; // edx@49
  int v49; // eax@49
  char *v50; // edi@50
  signed int v51; // esi@50
  _DWORD v52; // ebx@51
  signed int v53; // ebp@52
  _DWORD v54; // esi@53
  _DWORD v55; // ecx@55
  _DWORD v56; // edx@56
  int v57; // eax@56
  char *v58; // edi@57
  signed int v59; // esi@57
  _DWORD v60; // ebx@58
  signed int v61; // ebp@59
  _DWORD v62; // esi@60
  _BYTE *v63; // esi@65
  const char *v64; // edi@65
  signed int v65; // ecx@65
  _BYTE v66; // bp@69
  _DWORD v67; // ecx@73
  _DWORD v68; // edx@74
  int v69; // eax@74
  signed int v70; // esi@75
  char *v71; // edi@75
  _DWORD v72; // ebx@76
  signed int v73; // ebp@77
  _DWORD v74; // esi@78
  _DWORD v75; // ecx@80
  _DWORD v76; // eax@81
  signed int v77; // esi@82
  char *v78; // edi@82
  _DWORD v79; // ebx@83
  int v80; // edx@84
  signed int v81; // ebp@84
  _DWORD v82; // esi@85
  _DWORD v83; // ecx@87
  _DWORD v84; // eax@88
  int v85; // edx@88
  signed int v86; // esi@91
  char *v87; // edi@91
  _DWORD v88; // ebx@92
  signed int v89; // ebp@93
  _DWORD v90; // esi@94
  _DWORD v91; // ecx@98
  _DWORD v92; // eax@99
  signed int v93; // esi@102
  char *v94; // edi@102
  _DWORD v95; // ebx@103
  int v96; // edx@103
  signed int v97; // ebp@104
  _DWORD v98; // esi@105
  int v99; // eax@107
  int v100; // ecx@108
  int v101; // esi@110
  _DWORD *v102; // eax@110
  _DWORD *v103; // edi@110
  char *v104; // eax@111
  int v105; // ebx@112
  int v106; // edi@112
  int v107; // eax@114
  _DWORD v108; // ecx@119
  _DWORD v109; // eax@120
  char *v110; // edi@121
  signed int v111; // ebp@121
  _DWORD v112; // ebx@122
  signed int v113; // edx@122
  _DWORD v114; // esi@123
  signed int v115; // eax@124
  char *v116; // eax@125
  _BYTE v117; // bp@127
  _BYTE *v118; // esi@129
  const char *v119; // edi@129
  signed int v120; // ecx@129
  _BYTE v121; // di@133
  unsigned int v122; // edi@137
  _DWORD v123; // edx@138
  signed int v124; // eax@138
  _DWORD v125; // ecx@139
  _DWORD v126; // ebx@139
  unsigned int v127; // edi@140
  _DWORD v128; // ebp@140
  unsigned int v129; // esi@140
  const void **v130; // edx@140
  char *v131; // ebx@140
  char *v132; // edx@141
  char v133; // al@141
  int v134; // edx@142
  char **v135; // esi@148
  size_t v136; // edi@148
  char *v137; // eax@148
  _DWORD v138; // ebx@149
  const char *v139; // edx@150
  _DWORD v140; // eax@156
  _DWORD v141; // edx@157
  _DWORD v142; // eax@157
  _DWORD v143; // ebx@161
  void *v144; // eax@161
  _DWORD v145; // ebx@162
  char *v146; // eax@162
  _DWORD v147; // eax@163
  _DWORD v148; // edx@163
  unsigned __int16 v149; // ax@182
  unsigned __int16 v150; // dx@183
  _WORD v151; // bx@183
  _WORD v152; // cx@183
  signed int v153; // edx@187
  _DWORD v154; // ST2C_4@202
  _DWORD v155; // eax@202
  unsigned int v156; // edi@202
  signed int v157; // eax@203
  signed int v158; // esi@203
  int v159; // edx@205
  int v160; // ecx@206
  _BYTE v161; // dl@209
  int v162; // [sp+2Ch] [bp-150h]@2
  _DWORD v163; // [sp+2Ch] [bp-150h]@41
  _DWORD v164; // [sp+2Ch] [bp-150h]@73
  _DWORD v165; // [sp+30h] [bp-14Ch]@41
  _DWORD v166; // [sp+30h] [bp-14Ch]@73
  signed __int16 v167; // [sp+30h] [bp-14Ch]@100
  _DWORD v168; // [sp+30h] [bp-14Ch]@119
  signed int v169; // [sp+34h] [bp-148h]@52
  signed int v170; // [sp+34h] [bp-148h]@59
  _WORD v171; // [sp+34h] [bp-148h]@81
  signed int v172; // [sp+34h] [bp-148h]@84
  signed __int16 v173; // [sp+38h] [bp-144h]@89
  signed int v174; // [sp+38h] [bp-144h]@104
  signed int v175; // [sp+3Ch] [bp-140h]@93
  int v176; // [sp+4Ch] [bp-130h]@1
  int v177; // [sp+50h] [bp-12Ch]@202
  int v178; // [sp+58h] [bp-124h]@204
  int v179; // [sp+5Ch] [bp-120h]@202
  int v180; // [sp+60h] [bp-11Ch]@21

  v176 = 0;
  v5 = *(_DWORD *)(a5 + 32);
  v6 = 0;
  v7 = v5 == 0;
  if ( v5 )
    v162 = *(_DWORD *)(v5 + 278664);
  else
    v162 = 0;
  v8 = (_BYTE *)a1;
  v9 = 7;
  v10 = "COMMENT";
  do
  {
    if ( !v9 )
      break;
    v6 = *v8 < (const unsigned __int8)*v10;
    v7 = *v8++ == *v10++;
    --v9;
  }
  while ( v7 );
  v11 = (char)((!v6 && !v7) - v6);
  if ( (!v6 && !v7) != v6
    || (v12 = *(_BYTE *)(a1 + 7), v12 != 13 && (v12 & 0xDF) != 0) && (unsigned __int8)(v12 - 9) > 1u )
  {
    v13 = *(_DWORD *)a5;
    v14 = 0;
    v15 = (*(_DWORD *)a5 & 1) == 0;
    if ( !(*(_DWORD *)a5 & 1) )
    {
      v16 = (_BYTE *)a1;
      v17 = 9;
      v18 = "STARTFONT";
      v11 = 176;
      do
      {
        if ( !v17 )
          break;
        v14 = *v16 < (const unsigned __int8)*v18;
        v15 = *v16++ == *v18++;
        --v17;
      }
      while ( v15 );
      if ( (!v14 && !v15) == v14 )
      {
        v19 = *(_BYTE *)(a1 + 9);
        if ( v19 == 13 || (v19 & 0xDF) == 0 || (unsigned __int8)(v19 - 9) <= 1u )
        {
          v101 = *(_DWORD *)(a5 + 139320);
          *(_DWORD *)a5 = 1;
          *(_DWORD *)(a5 + 32) = 0;
          v102 = sub_6F773A50(v101, 278692, &v176);
          v11 = v176;
          v103 = v102;
          if ( !v176 )
          {
            *(_DWORD *)(a5 + 32) = v102;
            v102[69666] = *(_DWORD *)(a5 + 139320);
            v180 = 0;
            *(_DWORD *)(a5 + 139320) = 0;
            v102[69670] = 241;
            v102[69669] = 80;
            v102[69671] = 0;
            v104 = sub_6F773B30(v101, 4, 0, 241, 0, &v180);
            v11 = v180;
            v103[69672] = v104;
            v176 = v11;
            if ( !v11 )
            {
              v105 = 0;
              v106 = (int)(v103 + 69669);
              do
              {
                v107 = sub_6F7752C0(*(_BYTE **)&off_6FB56020[16 * v105], v105, v106, v101);
                v176 = v107;
                if ( v107 )
                  return v107;
                ++v105;
              }
              while ( v105 != 83 );
              v143 = *(_DWORD *)(a5 + 32);
              v144 = sub_6F773A50(v101, 16, &v176);
              v11 = v176;
              *(_DWORD *)(v143 + 128) = v144;
              if ( !v11 )
              {
                v145 = *(_DWORD *)(*(_DWORD *)(a5 + 32) + 128);
                v180 = 0;
                *(_DWORD *)(v145 + 4) = 241;
                *(_DWORD *)v145 = 80;
                *(_DWORD *)(v145 + 8) = 0;
                v146 = sub_6F773B30(v101, 4, 0, 241, 0, &v180);
                v11 = v180;
                *(_DWORD *)(v145 + 12) = v146;
                v176 = v11;
                if ( !v11 )
                {
                  v147 = *(_DWORD *)(a5 + 32);
                  v148 = *(_DWORD *)(*(_DWORD *)(a5 + 36) + 12);
                  *(_DWORD *)(v147 + 36) = -1;
                  *(_DWORD *)(v147 + 28) = v148;
                }
              }
            }
          }
        }
      }
      return v11;
    }
    v28 = (_BYTE *)a1;
    v29 = "STARTPROPERTIES";
    v30 = 15;
    do
    {
      if ( !v30 )
        break;
      v15 = *v28++ == *v29++;
      --v30;
    }
    while ( v15 );
    if ( v15 )
    {
      v31 = *(_BYTE *)(a1 + 15);
      if ( *(_BYTE *)(a1 + 15) == 13 || (v31 & 0xDF) == 0 || (v15 = v31 == 10, (unsigned __int8)(v31 - 9) <= 1u) )
      {
        v11 = 179;
        if ( v13 & 8 )
        {
          v11 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
          v176 = v11;
          if ( !v11 )
          {
            v168 = *(_DWORD *)(a5 + 32);
            v108 = *(_DWORD *)(*(_DWORD *)(a5 + 139304) + 4);
            if ( v108 && (v109 = *(_BYTE *)v108, (_BYTE)v109) )
            {
              v110 = (char *)&unk_6FB55B80;
              v111 = 10;
              if ( (_BYTE)v109 == 48 && (*(_BYTE *)(v108 + 1) & 0xDF) == 88 )
              {
                v109 = *(_BYTE *)(v108 + 2);
                v110 = byte_6FB55B60;
                v108 += 2;
                v111 = 16;
              }
              v112 = (unsigned __int8)v110[(unsigned __int8)v109 >> 3];
              v113 = 0;
              if ( _bittest(&v112, v109 & 7) )
              {
                do
                {
                  ++v108;
                  v113 = (unsigned __int8)byte_6FB55BA0[v109] + v111 * v113;
                  v109 = *(_BYTE *)v108;
                  v114 = (unsigned __int8)v110[(unsigned __int8)(*(_BYTE *)v108 >> 3)];
                }
                while ( _bittest(&v114, *(_BYTE *)v108 & 7) );
                v115 = v113;
              }
              else
              {
                v115 = 0;
              }
            }
            else
            {
              v113 = 0;
              v115 = 0;
            }
            *(_DWORD *)(v168 + 72) = v115;
            *(_DWORD *)(a5 + 4) = v115;
            v116 = sub_6F773B30(v162, 16, 0, v113, 0, &v176);
            v11 = v176;
            *(_DWORD *)(v168 + 80) = v116;
            if ( v11 )
            {
              *(_DWORD *)(*(_DWORD *)(a5 + 32) + 72) = 0;
            }
            else
            {
              *(_DWORD *)a5 |= 0x10u;
              *a4 = sub_6F7783E0;
            }
          }
        }
        return v11;
      }
LABEL_29:
      v32 = (_BYTE *)a1;
      v33 = "FONT";
      v34 = 4;
      do
      {
        if ( !v34 )
          break;
        v15 = *v32++ == *v33++;
        --v34;
      }
      while ( v15 );
      if ( !v15 )
      {
        v35 = (_BYTE *)a1;
        v36 = "SIZE";
        v37 = 4;
        do
        {
          if ( !v37 )
            break;
          v15 = *v35++ == *v36++;
          --v37;
        }
        while ( v15 );
        if ( v15 )
        {
          v38 = *(_BYTE *)(a1 + 4);
          if ( *(_BYTE *)(a1 + 4) == 13 || (v38 & 0xDF) == 0 || (v15 = v38 == 10, (unsigned __int8)(v38 - 9) <= 1u) )
          {
            v11 = 177;
            if ( !(v13 & 2) )
              return v11;
            v11 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
            v176 = v11;
            if ( v11 )
              return v11;
            v163 = *(_DWORD *)(a5 + 32);
            v39 = *(_DWORD *)(*(_DWORD *)(a5 + 139304) + 4);
            v165 = *(_DWORD *)(a5 + 139304);
            if ( v39 )
            {
              v40 = *(_BYTE *)v39;
              v41 = 0;
              if ( (_BYTE)v40 )
              {
                v42 = (char *)&unk_6FB55B80;
                v43 = 10;
                if ( (_BYTE)v40 == 48 && (*(_BYTE *)(v39 + 1) & 0xDF) == 88 )
                {
                  v40 = *(_BYTE *)(v39 + 2);
                  v42 = byte_6FB55B60;
                  v39 += 2;
                  v43 = 16;
                }
                v44 = (unsigned __int8)v42[(unsigned __int8)v40 >> 3];
                v41 = 0;
                if ( _bittest(&v44, v40 & 7) )
                {
                  v45 = v43;
                  do
                  {
                    ++v39;
                    v41 = (unsigned __int8)byte_6FB55BA0[v40] + v45 * v41;
                    v40 = *(_BYTE *)v39;
                    v46 = (unsigned __int8)v42[(unsigned __int8)(*(_BYTE *)v39 >> 3)];
                  }
                  while ( _bittest(&v46, *(_BYTE *)v39 & 7) );
                  v11 = 0;
                }
              }
            }
            else
            {
              v41 = 0;
            }
            *(_DWORD *)(v163 + 16) = v41;
            v47 = *(_DWORD *)(v165 + 8);
            if ( v47 )
            {
              v48 = *(_BYTE *)v47;
              v49 = 0;
              if ( (_BYTE)v48 )
              {
                v50 = (char *)&unk_6FB55B80;
                v51 = 10;
                if ( (_BYTE)v48 == 48 && (*(_BYTE *)(v47 + 1) & 0xDF) == 88 )
                {
                  v48 = *(_BYTE *)(v47 + 2);
                  v50 = byte_6FB55B60;
                  v47 += 2;
                  v51 = 16;
                }
                v52 = (unsigned __int8)v50[(unsigned __int8)v48 >> 3];
                v49 = 0;
                if ( _bittest(&v52, v48 & 7) )
                {
                  v169 = v11;
                  v53 = v51;
                  do
                  {
                    ++v47;
                    v49 = (unsigned __int8)byte_6FB55BA0[v48] + v53 * v49;
                    v48 = *(_BYTE *)v47;
                    v54 = (unsigned __int8)v50[(unsigned __int8)(*(_BYTE *)v47 >> 3)];
                  }
                  while ( _bittest(&v54, *(_BYTE *)v47 & 7) );
                  v11 = v169;
                }
              }
            }
            else
            {
              v49 = 0;
            }
            *(_DWORD *)(v163 + 20) = v49;
            v55 = *(_DWORD *)(v165 + 12);
            if ( v55 )
            {
              v56 = *(_BYTE *)v55;
              v57 = 0;
              if ( (_BYTE)v56 )
              {
                v58 = (char *)&unk_6FB55B80;
                v59 = 10;
                if ( (_BYTE)v56 == 48 && (*(_BYTE *)(v55 + 1) & 0xDF) == 88 )
                {
                  v56 = *(_BYTE *)(v55 + 2);
                  v58 = byte_6FB55B60;
                  v55 += 2;
                  v59 = 16;
                }
                v60 = (unsigned __int8)v58[(unsigned __int8)v56 >> 3];
                v57 = 0;
                if ( _bittest(&v60, v56 & 7) )
                {
                  v170 = v11;
                  v61 = v59;
                  do
                  {
                    ++v55;
                    v57 = (unsigned __int8)byte_6FB55BA0[v56] + v61 * v57;
                    v56 = *(_BYTE *)v55;
                    v62 = (unsigned __int8)v58[(unsigned __int8)(*(_BYTE *)v55 >> 3)];
                  }
                  while ( _bittest(&v62, *(_BYTE *)v55 & 7) );
                  v11 = v170;
                }
              }
            }
            else
            {
              v57 = 0;
            }
            *(_DWORD *)(v163 + 24) = v57;
            if ( *(_DWORD *)(a5 + 139312) != 5 )
            {
              *(_WORD *)(v163 + 278662) = 1;
LABEL_64:
              *(_DWORD *)a5 |= 4u;
              return v11;
            }
            v149 = sub_6F7744C0(*(unsigned __int8 **)(v165 + 16));
            if ( v149 )
            {
              v150 = v149;
              v151 = 0;
              v152 = 0;
              do
              {
                if ( v150 & 1 )
                  v152 = v151;
                ++v151;
                v150 >>= 1;
              }
              while ( v150 );
              LOWORD(v153) = 8;
              if ( v152 > 3u )
                goto LABEL_188;
            }
            else
            {
              LOBYTE(v152) = 0;
            }
            v153 = 1 << v152;
LABEL_188:
            if ( (_WORD)v153 != v149 )
              LOWORD(v153) = 2 * v153;
            *(_WORD *)(v163 + 278662) = v153;
            goto LABEL_64;
          }
        }
        goto LABEL_129;
      }
      v117 = *(_BYTE *)(a1 + 4);
      if ( *(_BYTE *)(a1 + 4) != 13 && (v117 & 0xDF) != 0 )
      {
        v15 = v117 == 10;
        if ( (unsigned __int8)(v117 - 9) > 1u )
        {
LABEL_129:
          v118 = (_BYTE *)a1;
          v119 = "CHARS";
          v120 = 5;
          do
          {
            if ( !v120 )
              break;
            v15 = *v118++ == *v119++;
            --v120;
          }
          while ( v15 );
          if ( v15 )
          {
            v121 = *(_BYTE *)(a1 + 5);
            if ( *(_BYTE *)(a1 + 5) == 13 || (v121 & 0xDF) == 0 || (unsigned __int8)(v121 - 9) <= 1u )
            {
              v11 = 179;
              if ( v13 & 8 )
              {
                v140 = *(_WORD *)(v5 + 12);
                *(_DWORD *)(v5 + 40) = v140;
                sprintf((char *)&v180, "%hd", v140);
                v11 = sub_6F777890(*(_DWORD *)(a5 + 32), "FONT_ASCENT", (int)&v180);
                v176 = v11;
                if ( !v11 )
                {
                  v141 = *(_DWORD *)(a5 + 32);
                  v142 = *(_WORD *)(v141 + 14);
                  *(_DWORD *)(v141 + 44) = v142;
                  sprintf((char *)&v180, "%hd", v142);
                  v11 = sub_6F777890(*(_DWORD *)(a5 + 32), "FONT_DESCENT", (int)&v180);
                  if ( !v11 )
                  {
                    v11 = -1;
                    *(_WORD *)(*(_DWORD *)(a5 + 32) + 278660) = 1;
                    *a4 = sub_6F776980;
                  }
                }
              }
              return v11;
            }
          }
          return 3;
        }
      }
      v11 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
      v176 = v11;
      if ( v11 )
        return v11;
      v122 = *(_DWORD *)(a5 + 139312);
      if ( !v122 )
        return 3;
      v123 = 0;
      v124 = 1;
      if ( v122 <= 1 )
      {
        *(_DWORD *)(a5 + 139312) = 0;
      }
      else
      {
        do
        {
          v125 = *(_DWORD *)(a5 + 139304);
          v126 = *(_DWORD *)(v125 + 4 * v124++);
          *(_DWORD *)(v125 + v123) = v126;
          v123 += 4;
        }
        while ( v122 != v124 );
        v127 = v122 - 1;
        v128 = 0;
        v129 = 0;
        v130 = *(const void ***)(a5 + 139304);
        *(_DWORD *)(a5 + 139312) = v127;
        v131 = (char *)*v130;
        while ( 1 )
        {
          v132 = (char *)v130[v129];
          v133 = *v132;
          if ( *v132 )
          {
            v134 = (int)&v132[-v128];
            do
            {
              v131[++v128 - 1] = v133;
              v133 = *(_BYTE *)(v134 + v128);
            }
            while ( v133 );
            v127 = *(_DWORD *)(a5 + 139312);
          }
          if ( ++v129 >= v127 )
            break;
          v131[v128] = 32;
          v127 = *(_DWORD *)(a5 + 139312);
          ++v128;
          if ( v129 >= v127 )
            break;
          v130 = *(const void ***)(a5 + 139304);
        }
        if ( (_UNKNOWN *)v131 == &unk_6FB55C20 )
        {
          v131 = (char *)&unk_6FB55C20;
LABEL_148:
          sub_6F773D90(v162, **(_DWORD **)(a5 + 32));
          v135 = *(char ***)(a5 + 32);
          v136 = v128 + 1;
          *v135 = 0;
          v137 = sub_6F773B30(v162, 1, 0, v128 + 1, 0, &v176);
          v11 = v176;
          *v135 = v137;
          if ( v11 )
            return v11;
          memcpy(**(void ***)(a5 + 32), v131, v136);
          v138 = *(_DWORD *)(a5 + 32);
          if ( !v138 )
            return 6;
          v139 = *(const char **)v138;
          if ( !*(_DWORD *)v138 )
            return 6;
          if ( !*v139 )
            return 6;
          v154 = *(_DWORD *)(a5 + 36);
          memset(&v177, 0, 0x10u);
          v155 = *(_DWORD *)(v154 + 12);
          v179 = *(_DWORD *)(v138 + 278664);
          *(_DWORD *)(v138 + 28) = v155;
          v156 = strlen(v139) + 1;
          if ( v156 > 0xFF )
            return 6;
          memcpy(&v180, v139, v156);
          v157 = sub_6F774CA0((int)&v177, (int)"-", &v180, v156);
          v158 = v157;
          if ( v157 )
          {
            v159 = v179;
            if ( !v179 )
              return v157;
LABEL_206:
            v160 = v177;
LABEL_207:
            v11 = v157;
            sub_6F773D90(v159, v160);
            if ( v158 )
              return v11;
LABEL_208:
            v11 = 0;
            *(_DWORD *)a5 |= 2u;
            return v11;
          }
          if ( v178 != 15 )
          {
LABEL_205:
            v159 = v179;
            if ( !v179 )
              goto LABEL_208;
            goto LABEL_206;
          }
          v160 = v177;
          v161 = **(_BYTE **)(v177 + 44);
          if ( v161 == 80 )
            goto LABEL_222;
          if ( v161 <= 80 )
          {
            if ( v161 == 67 )
              goto LABEL_218;
            if ( v161 != 77 )
            {
LABEL_214:
              v159 = v179;
              if ( !v179 )
                goto LABEL_208;
              goto LABEL_207;
            }
          }
          else if ( v161 != 109 )
          {
            if ( v161 != 112 )
            {
              if ( v161 != 99 )
                goto LABEL_214;
LABEL_218:
              *(_DWORD *)(v138 + 28) = 32;
              goto LABEL_205;
            }
LABEL_222:
            *(_DWORD *)(v138 + 28) = 8;
            goto LABEL_205;
          }
          *(_DWORD *)(v138 + 28) = 16;
          goto LABEL_205;
        }
        v131[v128] = 0;
        if ( v131 )
          goto LABEL_148;
      }
      return 3;
    }
    v63 = (_BYTE *)a1;
    v64 = "FONTBOUNDINGBOX";
    v65 = 15;
    do
    {
      if ( !v65 )
        break;
      v15 = *v63++ == *v64++;
      --v65;
    }
    while ( v15 );
    if ( !v15 )
      goto LABEL_29;
    v66 = *(_BYTE *)(a1 + 15);
    if ( *(_BYTE *)(a1 + 15) != 13 && (v66 & 0xDF) != 0 )
    {
      v15 = v66 == 10;
      if ( (unsigned __int8)(v66 - 9) > 1u )
        goto LABEL_29;
    }
    v11 = 178;
    if ( !(v13 & 4) )
      return v11;
    v11 = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
    v176 = v11;
    if ( v11 )
      return v11;
    v164 = *(_DWORD *)(a5 + 32);
    v67 = *(_DWORD *)(*(_DWORD *)(a5 + 139304) + 4);
    v166 = *(_DWORD *)(a5 + 139304);
    if ( v67 )
    {
      v68 = *(_BYTE *)v67;
      LOWORD(v69) = 0;
      if ( (_BYTE)v68 )
      {
        v70 = 10;
        v71 = (char *)&unk_6FB55B80;
        if ( (_BYTE)v68 == 48 && (*(_BYTE *)(v67 + 1) & 0xDF) == 88 )
        {
          v68 = *(_BYTE *)(v67 + 2);
          v70 = 16;
          v67 += 2;
          v71 = byte_6FB55B60;
        }
        v72 = (unsigned __int8)v71[(unsigned __int8)v68 >> 3];
        v69 = 0;
        if ( _bittest(&v72, v68 & 7) )
        {
          v73 = v70;
          do
          {
            ++v67;
            v69 = (unsigned __int8)byte_6FB55BA0[v68] + v73 * v69;
            v68 = *(_BYTE *)v67;
            v74 = (unsigned __int8)v71[(unsigned __int8)(*(_BYTE *)v67 >> 3)];
          }
          while ( _bittest(&v74, *(_BYTE *)v67 & 7) );
          v11 = 0;
        }
      }
    }
    else
    {
      LOWORD(v69) = 0;
    }
    *(_WORD *)(v164 + 4) = v69;
    v75 = *(_DWORD *)(v166 + 8);
    if ( v75 )
    {
      v76 = *(_BYTE *)v75;
      v171 = 0;
      if ( !(_BYTE)v76 )
      {
LABEL_87:
        *(_WORD *)(v164 + 6) = v171;
        v83 = *(_DWORD *)(v166 + 12);
        if ( v83 )
        {
          v84 = *(_BYTE *)v83;
          LOWORD(v85) = 0;
          if ( (_BYTE)v84 )
          {
            v173 = 0;
            if ( (_BYTE)v84 == 45 )
            {
              v84 = *(_BYTE *)(v83++ + 1);
              v173 = 1;
            }
            v86 = 10;
            v87 = (char *)&unk_6FB55B80;
            if ( (_BYTE)v84 == 48 && (*(_BYTE *)(v83 + 1) & 0xDF) == 88 )
            {
              v84 = *(_BYTE *)(v83 + 2);
              v86 = 16;
              v83 += 2;
              v87 = byte_6FB55B60;
            }
            v88 = (unsigned __int8)v87[(unsigned __int8)v84 >> 3];
            v85 = 0;
            if ( _bittest(&v88, v84 & 7) )
            {
              v175 = v11;
              v89 = v86;
              do
              {
                ++v83;
                v85 = (unsigned __int8)byte_6FB55BA0[v84] + v89 * v85;
                v84 = *(_BYTE *)v83;
                v90 = (unsigned __int8)v87[(unsigned __int8)(*(_BYTE *)v83 >> 3)];
              }
              while ( _bittest(&v90, *(_BYTE *)v83 & 7) );
              v11 = v175;
            }
            if ( v173 )
              v85 = -v85;
          }
        }
        else
        {
          LOWORD(v85) = 0;
        }
        *(_WORD *)(v164 + 8) = v85;
        v91 = *(_DWORD *)(v166 + 16);
        if ( v91 && (v92 = *(_BYTE *)v91, (_BYTE)v92) )
        {
          v167 = 0;
          if ( (_BYTE)v92 == 45 )
          {
            v92 = *(_BYTE *)(v91++ + 1);
            v167 = 1;
          }
          v93 = 10;
          v94 = (char *)&unk_6FB55B80;
          if ( (_BYTE)v92 == 48 && (*(_BYTE *)(v91 + 1) & 0xDF) == 88 )
          {
            v92 = *(_BYTE *)(v91 + 2);
            v93 = 16;
            v91 += 2;
            v94 = byte_6FB55B60;
          }
          v95 = (unsigned __int8)v94[(unsigned __int8)v92 >> 3];
          v96 = 0;
          if ( _bittest(&v95, v92 & 7) )
          {
            v174 = v11;
            v97 = v93;
            do
            {
              ++v91;
              v96 = (unsigned __int8)byte_6FB55BA0[v92] + v97 * v96;
              v92 = *(_BYTE *)v91;
              v98 = (unsigned __int8)v94[(unsigned __int8)(*(_BYTE *)v91 >> 3)];
            }
            while ( _bittest(&v98, *(_BYTE *)v91 & 7) );
            v11 = v174;
          }
          LOWORD(v99) = v96;
          if ( v167 )
          {
            v99 = -v96;
            v100 = -v96;
          }
          else
          {
            v96 = -v96;
            LOWORD(v100) = v99;
          }
        }
        else
        {
          LOWORD(v96) = 0;
          LOWORD(v99) = 0;
          LOWORD(v100) = 0;
        }
        *(_WORD *)(v164 + 10) = v100;
        *(_WORD *)(v164 + 14) = v96;
        *(_WORD *)(v164 + 12) = v171 + v99;
        *(_DWORD *)a5 |= 8u;
        return v11;
      }
      v77 = 10;
      v78 = (char *)&unk_6FB55B80;
      if ( (_BYTE)v76 == 48 && (*(_BYTE *)(v75 + 1) & 0xDF) == 88 )
      {
        v76 = *(_BYTE *)(v75 + 2);
        v77 = 16;
        v75 += 2;
        v78 = byte_6FB55B60;
      }
      v79 = (unsigned __int8)v78[(unsigned __int8)v76 >> 3];
      if ( _bittest(&v79, v76 & 7) )
      {
        v172 = v11;
        v80 = 0;
        v81 = v77;
        do
        {
          ++v75;
          v80 = (unsigned __int8)byte_6FB55BA0[v76] + v81 * v80;
          v76 = *(_BYTE *)v75;
          v82 = (unsigned __int8)v78[(unsigned __int8)(*(_BYTE *)v75 >> 3)];
        }
        while ( _bittest(&v82, *(_BYTE *)v75 & 7) );
        v11 = v172;
        v171 = v80;
        goto LABEL_87;
      }
    }
    v171 = 0;
    goto LABEL_87;
  }
  if ( !*(_DWORD *)(*(_DWORD *)(a5 + 36) + 8) || !v5 )
    return v11;
  v21 = (const void *)(a1 + 8);
  v22 = a2 - 8;
  if ( !v12 )
  {
    v22 = a2 - 7;
    v21 = (const void *)(a1 + 7);
  }
  v23 = *(_DWORD *)(v5 + 278664);
  v24 = *(_DWORD *)(v5 + 88);
  v180 = 0;
  v25 = sub_6F773B30(v23, 1, v24, v22 + v24 + 1, *(char **)(v5 + 84), &v180);
  v11 = v180;
  *(_DWORD *)(v5 + 84) = v25;
  if ( v11 )
    return v11;
  v26 = &v25[*(_DWORD *)(v5 + 88)];
  memcpy(v26, v21, v22);
  v26[v22] = 10;
  v27 = v180;
  *(_DWORD *)(v5 + 88) += v22 + 1;
  return v27;
}
