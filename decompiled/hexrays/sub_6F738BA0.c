int __usercall sub_6F738BA0@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  int result; // eax@1
  int v5; // edi@2
  int v6; // ecx@2
  int v7; // edx@4
  int v8; // esi@6
  int v9; // eax@13
  int v10; // edi@14
  unsigned int v11; // esi@16
  unsigned int v12; // ebp@16
  double v13; // st7@17
  int v14; // edx@21
  int v15; // ST64_4@26
  unsigned int v16; // ebx@28
  int v17; // ecx@28
  unsigned int v18; // esi@31
  unsigned int v19; // ebx@31
  int v20; // edi@31
  unsigned int v21; // ebp@31
  int v22; // ST54_4@38
  unsigned int v23; // eax@40
  unsigned int v24; // esi@40
  unsigned int v25; // edx@40
  unsigned int v26; // ebp@40
  double v27; // st7@41
  double v28; // st6@41
  double v29; // st4@41
  double v30; // st7@44
  int v31; // esi@45
  signed int v32; // edi@45
  int v33; // ebx@46
  int v34; // eax@51
  unsigned int v35; // ebp@56
  int v36; // ecx@56
  int v37; // edx@56
  int v38; // esi@57
  signed int v39; // edi@58
  unsigned int v40; // ebp@58
  int v41; // edx@58
  int v42; // ecx@58
  unsigned int v43; // esi@76
  int v44; // edi@76
  int v45; // ebp@76
  double v46; // st7@77
  int v47; // edx@77
  signed int v48; // ebx@91
  int v49; // edx@92
  unsigned int v50; // ebp@92
  int v51; // edx@97
  unsigned int v52; // esi@97
  unsigned int v53; // ebp@97
  signed int v54; // ebx@97
  int v55; // edx@101
  unsigned int v56; // esi@101
  unsigned int v57; // ebp@101
  int v58; // edx@105
  unsigned int v59; // esi@105
  unsigned int v60; // ebp@105
  int v61; // ST54_4@116
  int v62; // esi@124
  int v63; // ebx@124
  signed int v64; // edi@133
  unsigned int v65; // ebp@133
  int v66; // edx@133
  int v67; // ecx@133
  int v68; // esi@134
  int v69; // ebx@135
  unsigned int v70; // ebp@135
  int v71; // edx@135
  int v72; // ecx@135
  double v73; // st7@154
  signed int v74; // edi@155
  int v75; // esi@155
  int v76; // ebx@156
  int v77; // eax@161
  int v78; // ecx@166
  unsigned int v79; // ebp@166
  int v80; // edx@166
  int v81; // esi@174
  signed int v82; // edi@175
  unsigned int v83; // ebp@175
  int v84; // edx@175
  int v85; // ecx@175
  int v86; // esi@188
  int v87; // ebx@188
  signed int v88; // edi@197
  unsigned int v89; // ebp@197
  int v90; // edx@197
  int v91; // ecx@197
  int v92; // esi@198
  int v93; // ebx@199
  unsigned int v94; // ebp@199
  int v95; // edx@199
  int v96; // ecx@199
  int v97; // eax@224
  int v98; // eax@227
  int v99; // eax@231
  int v100; // eax@233
  int v101; // eax@235
  int v102; // [sp+3Ch] [bp-A0h]@1
  int v103; // [sp+40h] [bp-9Ch]@8
  int v104; // [sp+40h] [bp-9Ch]@13
  int v105; // [sp+40h] [bp-9Ch]@56
  int v106; // [sp+40h] [bp-9Ch]@92
  int v107; // [sp+40h] [bp-9Ch]@224
  int v108; // [sp+40h] [bp-9Ch]@227
  int v109; // [sp+40h] [bp-9Ch]@231
  int v110; // [sp+44h] [bp-98h]@13
  int v111; // [sp+44h] [bp-98h]@21
  unsigned int v112; // [sp+44h] [bp-98h]@62
  unsigned int v113; // [sp+44h] [bp-98h]@71
  unsigned int v114; // [sp+44h] [bp-98h]@139
  unsigned int v115; // [sp+44h] [bp-98h]@148
  unsigned int v116; // [sp+44h] [bp-98h]@171
  unsigned int v117; // [sp+44h] [bp-98h]@179
  unsigned int v118; // [sp+44h] [bp-98h]@203
  unsigned int v119; // [sp+44h] [bp-98h]@212
  int v120; // [sp+48h] [bp-94h]@13
  int v121; // [sp+48h] [bp-94h]@16
  int v122; // [sp+48h] [bp-94h]@45
  int v123; // [sp+48h] [bp-94h]@80
  int v124; // [sp+48h] [bp-94h]@124
  int v125; // [sp+48h] [bp-94h]@155
  int v126; // [sp+48h] [bp-94h]@188
  int v127; // [sp+4Ch] [bp-90h]@16
  int v128; // [sp+4Ch] [bp-90h]@41
  int v129; // [sp+4Ch] [bp-90h]@76
  int v130; // [sp+50h] [bp-8Ch]@1
  unsigned int v131; // [sp+54h] [bp-88h]@13
  int v132; // [sp+54h] [bp-88h]@41
  int v133; // [sp+54h] [bp-88h]@91
  unsigned int v134; // [sp+54h] [bp-88h]@95
  unsigned int v135; // [sp+54h] [bp-88h]@99
  unsigned int v136; // [sp+54h] [bp-88h]@103
  unsigned int v137; // [sp+54h] [bp-88h]@107
  int v138; // [sp+58h] [bp-84h]@13
  int v139; // [sp+58h] [bp-84h]@21
  int v140; // [sp+58h] [bp-84h]@46
  unsigned int v141; // [sp+58h] [bp-84h]@76
  int v142; // [sp+58h] [bp-84h]@91
  int v143; // [sp+58h] [bp-84h]@92
  int v144; // [sp+58h] [bp-84h]@125
  int v145; // [sp+58h] [bp-84h]@156
  int v146; // [sp+58h] [bp-84h]@189
  int v147; // [sp+5Ch] [bp-80h]@16
  int v148; // [sp+5Ch] [bp-80h]@41
  int v149; // [sp+60h] [bp-7Ch]@1
  signed int v150; // [sp+64h] [bp-78h]@13
  int v151; // [sp+64h] [bp-78h]@28
  unsigned int v152; // [sp+64h] [bp-78h]@51
  unsigned int v153; // [sp+64h] [bp-78h]@62
  unsigned int v154; // [sp+64h] [bp-78h]@71
  int v155; // [sp+64h] [bp-78h]@124
  unsigned int v156; // [sp+64h] [bp-78h]@161
  unsigned int v157; // [sp+64h] [bp-78h]@171
  unsigned int v158; // [sp+64h] [bp-78h]@179
  int v159; // [sp+64h] [bp-78h]@188
  signed int v160; // [sp+68h] [bp-74h]@1
  int v161; // [sp+6Ch] [bp-70h]@1
  int v162; // [sp+70h] [bp-6Ch]@1
  int v163; // [sp+74h] [bp-68h]@1
  int v164; // [sp+78h] [bp-64h]@1
  int v165; // [sp+7Ch] [bp-60h]@1
  int v166; // [sp+80h] [bp-5Ch]@1
  unsigned int v167; // [sp+84h] [bp-58h]@40
  unsigned int v168; // [sp+84h] [bp-58h]@139
  unsigned int v169; // [sp+84h] [bp-58h]@148
  unsigned int v170; // [sp+84h] [bp-58h]@203
  unsigned int v171; // [sp+84h] [bp-58h]@212
  unsigned int v172; // [sp+88h] [bp-54h]@1
  unsigned int v173; // [sp+8Ch] [bp-50h]@1
  int v174; // [sp+90h] [bp-4Ch]@1
  int v175; // [sp+94h] [bp-48h]@45
  int v176; // [sp+94h] [bp-48h]@155
  unsigned int v177; // [sp+94h] [bp-48h]@233
  unsigned int v178; // [sp+94h] [bp-48h]@235
  int v179; // [sp+98h] [bp-44h]@1
  int v180; // [sp+A4h] [bp-38h]@51
  int v181; // [sp+A4h] [bp-38h]@161
  int v182; // [sp+A4h] [bp-38h]@233
  int v183; // [sp+A4h] [bp-38h]@235
  int v184; // [sp+B0h] [bp-2Ch]@1
  int v185; // [sp+B4h] [bp-28h]@1
  int v186; // [sp+B8h] [bp-24h]@1
  int v187; // [sp+BCh] [bp-20h]@1

  v160 = a1;
  v161 = a2;
  v130 = dword_6FBB52F4 * dword_6FBBDB98;
  v149 = dword_6FBB52F4 * dword_6FBBDBA0;
  v162 = dword_6FBB52F8 * dword_6FBBDB9C;
  v163 = dword_6FBB52F8 * dword_6FBBDBA4;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v187 = v2 * dword_6FBB52F4;
  v186 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v185 = v3 * dword_6FBB52F8;
  v184 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  sub_6F733480(v2, v3, &v187, &v185);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v186,
    &v184);
  result = dword_6FBB52F8;
  v185 += dword_6FBB52F8 * dword_6FBBDB94;
  v164 = dword_70041E74;
  v187 += dword_6FBB52F4 * dword_6FBBDB90;
  v186 += dword_6FBB52F4 * dword_6FBBDB90;
  v184 += dword_6FBB52F8 * dword_6FBBDB94;
  v172 = (dword_70041E70 << 16) & 0xFF0000;
  v174 = dword_70041E70 & 0x20FF0000;
  v173 = (dword_70041E70 << 8) & 0xFF0000;
  v165 = (dword_70041E74 << 16) & 0xFF0000;
  v166 = (dword_70041E74 << 8) & 0xFF0000;
  v179 = (unsigned __int8)((dword_70041E70 & 0x20FF0000u) >> 16);
  v102 = dword_6FBB52F8 - 1;
  if ( dword_6FBB52F8 )
  {
    while ( 1 )
    {
      v5 = dword_6FBB52F4;
      v6 = dword_6FBB52F4 - 1;
      if ( dword_6FBB52F4 )
        break;
LABEL_111:
      if ( --v102 == -1 )
        return result;
    }
    while ( 1 )
    {
      result = (v6 + v5 * v102) / v160;
      if ( (v6 + v5 * v102) % v160 != v161 )
        goto LABEL_10;
      v9 = v187;
      v110 = v187 + v6;
      v104 = v185 + v102;
      v131 = v164 & 0x20FF0000;
      v150 = v184 + v102;
      v120 = v184 - v185;
      v138 = v186 - v187;
      if ( v186 != v187 )
      {
        v10 = v6 + v186;
        if ( v184 != v185 )
        {
          if ( v138 < 0 )
          {
            v24 = v172;
            v120 = v185 - v184;
            v131 = v174;
            v138 = v187 - v186;
            v26 = v166;
            v167 = v164 & 0x20FF0000;
            v23 = v173;
            v104 = v184 + v102;
            v25 = v165;
            v150 = v185 + v102;
            v110 = v6 + v186;
            v10 = v187 + v6;
          }
          else
          {
            v23 = v166;
            v24 = v165;
            v25 = v172;
            v167 = v174;
            v26 = v173;
          }
          v148 = v23 - v26;
          v27 = (double)v120;
          v28 = (double)v138;
          v128 = v24 - v25;
          v132 = v131 - v167;
          v29 = v27 / v28;
          if ( v29 < 0.0 )
          {
            result = v104 - v150;
            if ( -1.0 > v29 )
            {
              if ( result > 0 )
              {
                v73 = 1.0 / (double)result;
                v128 = (signed int)((double)v128 * v73);
                v148 = (signed int)((double)v148 * v73);
                v132 = (signed int)(v73 * (double)v132);
              }
              v74 = v104;
              v176 = 2 * v138;
              v75 = 2 * v138 - result;
              v125 = 2 * (v138 - result);
              if ( v104 < v150 )
                goto LABEL_10;
              v145 = v150 - 1;
              v76 = v110;
              if ( ((_BYTE)v104 - ((_BYTE)v150 - 1)) & 1 )
              {
                if ( v130 <= v110 && v149 > v110 && v162 <= v104 && v163 > v104 )
                {
                  v181 = v6;
                  v156 = v25;
                  v77 = sub_6F71F0C0(v104);
                  v25 = v156;
                  v6 = v181;
                  if ( v77 )
                  {
                    dword_6FBB5058(
                      dword_6FBB5068 + 2 * (dword_6FBB52F4 * (v104 << 10) + v110),
                      dword_6FBB505C + 4 * (dword_6FBB52F4 * (v104 << 10) + v110),
                      v110,
                      v104,
                      (unsigned __int8)(v156 >> 16),
                      (unsigned __int8)(v26 >> 16),
                      (unsigned __int8)(v167 >> 16),
                      0,
                      0);
                    v6 = v181;
                    v25 = v156;
                  }
                }
                if ( v75 <= 0 )
                {
                  v75 += v176;
                }
                else
                {
                  ++v110;
                  v75 += v125;
                }
                result = v104 - 1;
                v25 += v128;
                v167 += v132;
                v26 += v148;
                v74 = v104 - 1;
                v76 = v110;
                if ( v104 - 1 == v145 )
                  goto LABEL_10;
              }
              result = v26;
              v105 = v6;
              v78 = v167;
              v79 = v25;
              v80 = result;
              do
              {
                if ( v130 <= v76 && v149 > v76 && v162 <= v74 && v163 > v74 )
                {
                  v157 = v80;
                  v116 = v78;
                  result = sub_6F71F0C0(v74);
                  v78 = v116;
                  v80 = v157;
                  if ( result )
                  {
                    result = dword_6FBB5058(
                               dword_6FBB5068 + 2 * (v76 + dword_6FBB52F4 * (v74 << 10)),
                               dword_6FBB505C + 4 * (v76 + dword_6FBB52F4 * (v74 << 10)),
                               v76,
                               v74,
                               (unsigned __int8)(v79 >> 16),
                               (unsigned __int8)(v157 >> 16),
                               (unsigned __int8)(v116 >> 16),
                               0,
                               0);
                    v78 = v116;
                    v80 = v157;
                  }
                }
                if ( v75 <= 0 )
                {
                  v81 = v176 + v75;
                }
                else
                {
                  v81 = v125 + v75;
                  ++v76;
                }
                v82 = v74 - 1;
                v83 = v128 + v79;
                v84 = v148 + v80;
                v85 = v132 + v78;
                if ( v130 <= v76 && v149 > v76 && v162 <= v82 && v163 > v82 )
                {
                  v158 = v85;
                  v117 = v84;
                  result = sub_6F71F0C0(v82);
                  v84 = v117;
                  v85 = v158;
                  if ( result )
                  {
                    result = dword_6FBB5058(
                               dword_6FBB5068 + 2 * (v76 + dword_6FBB52F4 * (v82 << 10)),
                               dword_6FBB505C + 4 * (v76 + dword_6FBB52F4 * (v82 << 10)),
                               v76,
                               v82,
                               (unsigned __int8)(v83 >> 16),
                               (unsigned __int8)(v117 >> 16),
                               (unsigned __int8)(v158 >> 16),
                               0,
                               0);
                    v85 = v158;
                    v84 = v117;
                  }
                }
                if ( v81 <= 0 )
                {
                  v75 = v176 + v81;
                }
                else
                {
                  v75 = v125 + v81;
                  ++v76;
                }
                v74 = v82 - 1;
                v79 = v128 + v83;
                v80 = v148 + v84;
                v78 = v132 + v85;
              }
              while ( v74 != v145 );
            }
            else
            {
              if ( v138 > 0 )
              {
                v128 = (signed int)((double)v128 * (1.0 / v28));
                v148 = (signed int)(1.0 / v28 * (double)v148);
                v132 = (signed int)(1.0 / v28 * (double)v132);
              }
              v155 = 2 * result;
              v62 = 2 * result - v138;
              v63 = v110;
              result = 2 * (result - v138);
              v124 = result;
              if ( v110 > v10 )
                goto LABEL_10;
              v144 = v10 + 1;
              if ( !(((_BYTE)v10 - (_BYTE)v110) & 1) )
              {
                if ( v130 <= v110 && v149 > v110 && v162 <= v104 && v163 > v104 )
                {
                  v182 = v6;
                  v177 = v25;
                  v100 = sub_6F71F0C0(v104);
                  v25 = v177;
                  v6 = v182;
                  if ( v100 )
                  {
                    dword_6FBB5058(
                      dword_6FBB5068 + 2 * (dword_6FBB52F4 * (v104 << 10) + v110),
                      dword_6FBB505C + 4 * (dword_6FBB52F4 * (v104 << 10) + v110),
                      v110,
                      v104,
                      (unsigned __int8)(v177 >> 16),
                      (unsigned __int8)(v26 >> 16),
                      (unsigned __int8)(v167 >> 16),
                      0,
                      0);
                    v6 = v182;
                    v25 = v177;
                  }
                }
                if ( v62 < 0 )
                {
                  v62 += v155;
                }
                else
                {
                  --v104;
                  v62 += v124;
                }
                result = v110 + 1;
                v25 += v128;
                v167 += v132;
                v26 += v148;
                v63 = v110 + 1;
                if ( v110 + 1 == v144 )
                  goto LABEL_10;
              }
              result = v26;
              v64 = v104;
              v65 = v25;
              v105 = v6;
              v66 = result;
              v67 = v167;
              do
              {
                if ( v130 <= v63 && v149 > v63 && v162 <= v64 && v163 > v64 )
                {
                  v169 = v66;
                  v115 = v67;
                  result = sub_6F71F0C0(v64);
                  v67 = v115;
                  v66 = v169;
                  if ( result )
                  {
                    result = dword_6FBB5058(
                               dword_6FBB5068 + 2 * (v63 + dword_6FBB52F4 * (v64 << 10)),
                               dword_6FBB505C + 4 * (v63 + dword_6FBB52F4 * (v64 << 10)),
                               v63,
                               v64,
                               (unsigned __int8)(v65 >> 16),
                               (unsigned __int8)(v169 >> 16),
                               (unsigned __int8)(v115 >> 16),
                               0,
                               0);
                    v67 = v115;
                    v66 = v169;
                  }
                }
                if ( v62 >= 0 )
                {
                  v68 = v124 + v62;
                  --v64;
                }
                else
                {
                  v68 = v155 + v62;
                }
                v69 = v63 + 1;
                v70 = v128 + v65;
                v71 = v148 + v66;
                v72 = v132 + v67;
                if ( v130 <= v69 && v149 > v69 && v162 <= v64 && v163 > v64 )
                {
                  v168 = v72;
                  v114 = v71;
                  result = sub_6F71F0C0(v64);
                  v71 = v114;
                  v72 = v168;
                  if ( result )
                  {
                    result = dword_6FBB5058(
                               dword_6FBB5068 + 2 * (v69 + dword_6FBB52F4 * (v64 << 10)),
                               dword_6FBB505C + 4 * (v69 + dword_6FBB52F4 * (v64 << 10)),
                               v69,
                               v64,
                               (unsigned __int8)(v70 >> 16),
                               (unsigned __int8)(v114 >> 16),
                               (unsigned __int8)(v168 >> 16),
                               0,
                               0);
                    v72 = v168;
                    v71 = v114;
                  }
                }
                if ( v68 < 0 )
                {
                  v62 = v155 + v68;
                }
                else
                {
                  v62 = v124 + v68;
                  --v64;
                }
                v63 = v69 + 1;
                v65 = v128 + v70;
                v66 = v148 + v71;
                v67 = v132 + v72;
              }
              while ( v63 != v144 );
            }
          }
          else if ( v29 <= 1.0 )
          {
            if ( v138 > 0 )
            {
              v128 = (signed int)((double)v128 * (1.0 / v28));
              v148 = (signed int)((double)v148 * (1.0 / v28));
              v132 = (signed int)(1.0 / v28 * (double)v132);
            }
            v159 = 2 * v120;
            v86 = 2 * v120 - v138;
            v87 = v110;
            result = 2 * (v120 - v138);
            v126 = 2 * (v120 - v138);
            if ( v110 > v10 )
              goto LABEL_10;
            v146 = v10 + 1;
            if ( !(((_BYTE)v10 - (_BYTE)v110) & 1) )
            {
              if ( v130 <= v110 && v149 > v110 && v162 <= v104 && v163 > v104 )
              {
                v183 = v6;
                v178 = v25;
                v101 = sub_6F71F0C0(v104);
                v25 = v178;
                v6 = v183;
                if ( v101 )
                {
                  dword_6FBB5058(
                    dword_6FBB5068 + 2 * (dword_6FBB52F4 * (v104 << 10) + v110),
                    dword_6FBB505C + 4 * (dword_6FBB52F4 * (v104 << 10) + v110),
                    v110,
                    v104,
                    (unsigned __int8)(v178 >> 16),
                    (unsigned __int8)(v26 >> 16),
                    (unsigned __int8)(v167 >> 16),
                    0,
                    0);
                  v6 = v183;
                  v25 = v178;
                }
              }
              if ( v86 < 0 )
              {
                v86 += v159;
              }
              else
              {
                ++v104;
                v86 += v126;
              }
              result = v110 + 1;
              v25 += v128;
              v167 += v132;
              v26 += v148;
              v87 = v110 + 1;
              if ( v110 + 1 == v146 )
                goto LABEL_10;
            }
            result = v26;
            v88 = v104;
            v89 = v25;
            v105 = v6;
            v90 = result;
            v91 = v167;
            do
            {
              if ( v130 <= v87 && v149 > v87 && v162 <= v88 && v163 > v88 )
              {
                v171 = v90;
                v119 = v91;
                result = sub_6F71F0C0(v88);
                v91 = v119;
                v90 = v171;
                if ( result )
                {
                  result = dword_6FBB5058(
                             dword_6FBB5068 + 2 * (v87 + dword_6FBB52F4 * (v88 << 10)),
                             dword_6FBB505C + 4 * (v87 + dword_6FBB52F4 * (v88 << 10)),
                             v87,
                             v88,
                             (unsigned __int8)(v89 >> 16),
                             (unsigned __int8)(v171 >> 16),
                             (unsigned __int8)(v119 >> 16),
                             0,
                             0);
                  v91 = v119;
                  v90 = v171;
                }
              }
              if ( v86 >= 0 )
              {
                v92 = v126 + v86;
                ++v88;
              }
              else
              {
                v92 = v159 + v86;
              }
              v93 = v87 + 1;
              v94 = v128 + v89;
              v95 = v148 + v90;
              v96 = v132 + v91;
              if ( v130 <= v93 && v149 > v93 && v162 <= v88 && v163 > v88 )
              {
                v170 = v96;
                v118 = v95;
                result = sub_6F71F0C0(v88);
                v95 = v118;
                v96 = v170;
                if ( result )
                {
                  result = dword_6FBB5058(
                             dword_6FBB5068 + 2 * (v93 + dword_6FBB52F4 * (v88 << 10)),
                             dword_6FBB505C + 4 * (v93 + dword_6FBB52F4 * (v88 << 10)),
                             v93,
                             v88,
                             (unsigned __int8)(v94 >> 16),
                             (unsigned __int8)(v118 >> 16),
                             (unsigned __int8)(v170 >> 16),
                             0,
                             0);
                  v96 = v170;
                  v95 = v118;
                }
              }
              if ( v92 < 0 )
              {
                v86 = v159 + v92;
              }
              else
              {
                v86 = v126 + v92;
                ++v88;
              }
              v87 = v93 + 1;
              v89 = v128 + v94;
              v90 = v148 + v95;
              v91 = v132 + v96;
            }
            while ( v87 != v146 );
          }
          else
          {
            if ( v120 > 0 )
            {
              v30 = 1.0 / v27;
              v128 = (signed int)((double)v128 * v30);
              v148 = (signed int)((double)v148 * v30);
              v132 = (signed int)(v30 * (double)v132);
            }
            v175 = 2 * v138;
            v31 = 2 * v138 - v120;
            v32 = v104;
            v122 = 2 * (v138 - v120);
            result = v150;
            if ( v104 > v150 )
              goto LABEL_10;
            v140 = v150 + 1;
            v33 = v110;
            if ( !(((_BYTE)v150 - (_BYTE)v104) & 1) )
            {
              if ( v130 <= v110 && v149 > v110 && v162 <= v104 && v163 > v104 )
              {
                v180 = v6;
                v152 = v25;
                v34 = sub_6F71F0C0(v104);
                v25 = v152;
                v6 = v180;
                if ( v34 )
                {
                  dword_6FBB5058(
                    dword_6FBB5068 + 2 * (dword_6FBB52F4 * (v104 << 10) + v110),
                    dword_6FBB505C + 4 * (dword_6FBB52F4 * (v104 << 10) + v110),
                    v110,
                    v104,
                    (unsigned __int8)(v152 >> 16),
                    (unsigned __int8)(v26 >> 16),
                    (unsigned __int8)(v167 >> 16),
                    0,
                    0);
                  v6 = v180;
                  v25 = v152;
                }
              }
              if ( v31 <= 0 )
              {
                v31 += v175;
              }
              else
              {
                ++v110;
                v31 += v122;
              }
              result = v104 + 1;
              v25 += v128;
              v167 += v132;
              v26 += v148;
              v32 = v104 + 1;
              v33 = v110;
              if ( v104 + 1 == v140 )
                goto LABEL_10;
            }
            result = v26;
            v105 = v6;
            v35 = v25;
            v36 = v167;
            v37 = result;
            do
            {
              if ( v130 <= v33 && v149 > v33 && v162 <= v32 && v163 > v32 )
              {
                v154 = v37;
                v113 = v36;
                result = sub_6F71F0C0(v32);
                v36 = v113;
                v37 = v154;
                if ( result )
                {
                  result = dword_6FBB5058(
                             dword_6FBB5068 + 2 * (v33 + dword_6FBB52F4 * (v32 << 10)),
                             dword_6FBB505C + 4 * (v33 + dword_6FBB52F4 * (v32 << 10)),
                             v33,
                             v32,
                             (unsigned __int8)(v35 >> 16),
                             (unsigned __int8)(v154 >> 16),
                             (unsigned __int8)(v113 >> 16),
                             0,
                             0);
                  v36 = v113;
                  v37 = v154;
                }
              }
              if ( v31 > 0 )
              {
                v38 = v122 + v31;
                ++v33;
              }
              else
              {
                v38 = v175 + v31;
              }
              v39 = v32 + 1;
              v40 = v128 + v35;
              v41 = v148 + v37;
              v42 = v132 + v36;
              if ( v130 <= v33 && v149 > v33 && v162 <= v39 && v163 > v39 )
              {
                v153 = v42;
                v112 = v41;
                result = sub_6F71F0C0(v39);
                v41 = v112;
                v42 = v153;
                if ( result )
                {
                  result = dword_6FBB5058(
                             dword_6FBB5068 + 2 * (v33 + dword_6FBB52F4 * (v39 << 10)),
                             dword_6FBB505C + 4 * (v33 + dword_6FBB52F4 * (v39 << 10)),
                             v33,
                             v39,
                             (unsigned __int8)(v40 >> 16),
                             (unsigned __int8)(v112 >> 16),
                             (unsigned __int8)(v153 >> 16),
                             0,
                             0);
                  v42 = v153;
                  v41 = v112;
                }
              }
              if ( v38 <= 0 )
              {
                v31 = v175 + v38;
              }
              else
              {
                v31 = v122 + v38;
                ++v33;
              }
              v32 = v39 + 1;
              v35 = v128 + v40;
              v37 = v148 + v41;
              v36 = v132 + v42;
            }
            while ( v32 != v140 );
          }
          v6 = v105;
          goto LABEL_10;
        }
        if ( v138 > 0 )
        {
          v11 = v172;
          v12 = v173;
          v121 = v165 - v172;
          v127 = v166 - v173;
          v147 = v131 - v174;
          v131 = v174;
          goto LABEL_17;
        }
        result = v187 - v186;
        v138 = v187 - v186;
        v121 = v172 - v165;
        v11 = v165;
        v127 = v173 - v166;
        v147 = v174 - v131;
        v12 = v166;
        if ( v187 - v186 > 0 )
        {
          v110 = v6 + v186;
          v10 = v187 + v6;
LABEL_17:
          v13 = 1.0 / (double)v138;
          result = v10;
          v10 = v110;
          v110 = result;
          v121 = (signed int)((double)v121 * v13);
          v127 = (signed int)((double)v127 * v13);
          v147 = (signed int)(v13 * (double)v147);
        }
        if ( v104 >= v162 )
        {
          result = v163;
          if ( v104 < v163 && v110 >= v10 )
          {
            v139 = v104 << 10;
            v14 = ((_BYTE)v110 - (_BYTE)v10) & 1;
            v111 = v110 + 1;
            if ( v14 )
              goto LABEL_239;
            result = dword_6FBB5304;
            if ( dword_6FBB5304
              || (*(_DWORD *)&word_6FBB979C & 0x80400) != 0x80000
              || (result = v104 / dword_6FBB52F8 & 1, result != (unsigned __int8)byte_6FBB979F >> 7) )
            {
              if ( v130 <= v10 && v149 > v10 )
              {
                v15 = v6;
                result = dword_6FBB5058(
                           dword_6FBB5068 + 2 * (v10 + dword_6FBB52F4 * v139),
                           dword_6FBB505C + 4 * (v10 + dword_6FBB52F4 * v139),
                           v10,
                           v104,
                           (unsigned __int8)(v11 >> 16),
                           (unsigned __int8)(v12 >> 16),
                           (unsigned __int8)(v131 >> 16),
                           0,
                           0);
                v6 = v15;
              }
            }
            v11 += v121;
            ++v10;
            v12 += v127;
            v131 += v147;
            if ( v10 != v111 )
            {
LABEL_239:
              v151 = v6;
              v16 = v131;
              v17 = v147;
              do
              {
                if ( dword_6FBB5304
                  || (result = *(_DWORD *)&word_6FBB979C & 0x80400, (*(_DWORD *)&word_6FBB979C & 0x80400) != 0x80000)
                  || (result = v104 / dword_6FBB52F8 & 1, result != (unsigned __int8)byte_6FBB979F >> 7) )
                {
                  if ( v130 <= v10 && v149 > v10 )
                  {
                    v22 = v17;
                    result = dword_6FBB5058(
                               dword_6FBB5068 + 2 * (v10 + dword_6FBB52F4 * v139),
                               dword_6FBB505C + 4 * (v10 + dword_6FBB52F4 * v139),
                               v10,
                               v104,
                               (unsigned __int8)(v11 >> 16),
                               (unsigned __int8)(v12 >> 16),
                               (unsigned __int8)(v16 >> 16),
                               0,
                               0);
                    v17 = v22;
                  }
                }
                v18 = v121 + v11;
                v19 = v17 + v16;
                v20 = v10 + 1;
                v21 = v127 + v12;
                if ( dword_6FBB5304
                  || (result = *(_DWORD *)&word_6FBB979C & 0x80400, (*(_DWORD *)&word_6FBB979C & 0x80400) != 0x80000)
                  || (result = v104 / dword_6FBB52F8 & 1, result != (unsigned __int8)byte_6FBB979F >> 7) )
                {
                  if ( v130 <= v20 && v149 > v20 )
                  {
                    v61 = v17;
                    result = dword_6FBB5058(
                               dword_6FBB5068 + 2 * (v20 + dword_6FBB52F4 * v139),
                               dword_6FBB505C + 4 * (v20 + dword_6FBB52F4 * v139),
                               v20,
                               v104,
                               (unsigned __int8)(v18 >> 16),
                               (unsigned __int8)(v21 >> 16),
                               (unsigned __int8)(v19 >> 16),
                               0,
                               0);
                    v17 = v61;
                  }
                }
                v11 = v121 + v18;
                v12 = v127 + v21;
                v16 = v17 + v19;
                v10 = v20 + 1;
              }
              while ( v10 != v111 );
              v6 = v151;
            }
          }
        }
        goto LABEL_10;
      }
      v7 = v149;
      LOBYTE(v9) = v110 >= v130;
      LOBYTE(v7) = v110 < v149;
      result = v7 & v9;
      if ( v184 == v185 )
      {
        if ( (_BYTE)result )
        {
          v8 = v185 + v102;
          if ( v104 >= v162 )
          {
            result = v163;
            if ( v104 < v163 )
            {
              v103 = v6;
              result = sub_6F71F0C0(v185 + v102);
              v6 = v103;
              if ( result )
              {
                result = dword_6FBB5058(
                           dword_6FBB5068 + 2 * ((v8 << 10) * v5 + v110),
                           dword_6FBB505C + 4 * ((v8 << 10) * v5 + v110),
                           v110,
                           v8,
                           v172 >> 16,
                           v173 >> 16,
                           v179,
                           0,
                           0);
                v6 = v103;
              }
            }
          }
        }
LABEL_10:
        if ( --v6 == -1 )
          goto LABEL_111;
        goto LABEL_11;
      }
      if ( v120 <= 0 )
      {
        v45 = v173 - v166;
        v120 = v185 - v184;
        v44 = v174 - v131;
        v129 = v172 - v165;
        v141 = v165;
        v43 = v166;
        if ( v185 - v184 <= 0 )
          goto LABEL_78;
        v150 = v185 + v102;
        v104 = v184 + v102;
      }
      else
      {
        v43 = v173;
        v141 = v172;
        v129 = v165 - v172;
        v44 = v131 - v174;
        v131 = v174;
        v45 = v166 - v173;
      }
      v46 = 1.0 / (double)v120;
      v47 = v150;
      v150 = v104;
      v104 = v47;
      v129 = (signed int)((double)v129 * v46);
      v45 = (signed int)((double)v45 * v46);
      v44 = (signed int)(v46 * (double)v44);
LABEL_78:
      if ( !(_BYTE)result )
        goto LABEL_10;
      result = v104;
      if ( v104 < v150 )
        goto LABEL_10;
      v123 = v104 + 1;
      result = ((_BYTE)v104 - (_BYTE)v150 + 1) & 3;
      if ( ((_BYTE)v104 - (_BYTE)v150 + 1) & 3 )
      {
        if ( result != 1 )
        {
          if ( result != 2 )
          {
            if ( v162 <= v150 && v163 > v150 )
            {
              v109 = v6;
              v99 = sub_6F71F0C0(v150);
              v6 = v109;
              if ( v99 )
              {
                dword_6FBB5058(
                  dword_6FBB5068 + 2 * (v110 + dword_6FBB52F4 * (v150 << 10)),
                  dword_6FBB505C + 4 * (v110 + dword_6FBB52F4 * (v150 << 10)),
                  v110,
                  v150,
                  (unsigned __int8)(v141 >> 16),
                  (unsigned __int8)(v43 >> 16),
                  (unsigned __int8)(v131 >> 16),
                  0,
                  0);
                v6 = v109;
              }
            }
            v131 += v44;
            v43 += v45;
            v141 += v129;
            ++v150;
          }
          if ( v162 <= v150 && v163 > v150 )
          {
            v107 = v6;
            v97 = sub_6F71F0C0(v150);
            v6 = v107;
            if ( v97 )
            {
              dword_6FBB5058(
                dword_6FBB5068 + 2 * (v110 + dword_6FBB52F4 * (v150 << 10)),
                dword_6FBB505C + 4 * (v110 + dword_6FBB52F4 * (v150 << 10)),
                v110,
                v150,
                (unsigned __int8)(v141 >> 16),
                (unsigned __int8)(v43 >> 16),
                (unsigned __int8)(v131 >> 16),
                0,
                0);
              v6 = v107;
            }
          }
          v131 += v44;
          v43 += v45;
          v141 += v129;
          ++v150;
        }
        if ( v162 <= v150 && v163 > v150 )
        {
          v108 = v6;
          v98 = sub_6F71F0C0(v150);
          v6 = v108;
          if ( v98 )
          {
            dword_6FBB5058(
              dword_6FBB5068 + 2 * (v110 + dword_6FBB52F4 * (v150 << 10)),
              dword_6FBB505C + 4 * (v110 + dword_6FBB52F4 * (v150 << 10)),
              v110,
              v150,
              (unsigned __int8)(v141 >> 16),
              (unsigned __int8)(v43 >> 16),
              (unsigned __int8)(v131 >> 16),
              0,
              0);
            v6 = v108;
          }
        }
        result = v129;
        v43 += v45;
        v142 = v129 + v141;
        v48 = v150 + 1;
        v133 = v44 + v131;
        if ( v150 + 1 == v123 )
          goto LABEL_10;
        v49 = v142;
        v143 = v6;
        v106 = v45;
        v50 = v133;
      }
      else
      {
        v48 = v150;
        v106 = v45;
        v49 = v141;
        v50 = v131;
        v143 = v6;
      }
      do
      {
        if ( v162 <= v48 && v163 > v48 )
        {
          v134 = v49;
          result = sub_6F71F0C0(v48);
          v49 = v134;
          if ( result )
          {
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v110 + dword_6FBB52F4 * (v48 << 10)),
                       dword_6FBB505C + 4 * (v110 + dword_6FBB52F4 * (v48 << 10)),
                       v110,
                       v48,
                       (unsigned __int8)(v134 >> 16),
                       (unsigned __int8)(v43 >> 16),
                       (unsigned __int8)(v50 >> 16),
                       0,
                       0);
            v49 = v134;
          }
        }
        v51 = v129 + v49;
        v52 = v106 + v43;
        v53 = v44 + v50;
        v54 = v48 + 1;
        if ( v162 <= v54 && v163 > v54 )
        {
          v135 = v51;
          result = sub_6F71F0C0(v54);
          v51 = v135;
          if ( result )
          {
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v110 + dword_6FBB52F4 * (v54 << 10)),
                       dword_6FBB505C + 4 * (v110 + dword_6FBB52F4 * (v54 << 10)),
                       v110,
                       v54,
                       (unsigned __int8)(v135 >> 16),
                       (unsigned __int8)(v52 >> 16),
                       (unsigned __int8)(v53 >> 16),
                       0,
                       0);
            v51 = v135;
          }
        }
        v55 = v129 + v51;
        v56 = v106 + v52;
        v57 = v44 + v53;
        if ( v162 <= v54 + 1 && v163 > v54 + 1 )
        {
          v136 = v55;
          result = sub_6F71F0C0(v54 + 1);
          v55 = v136;
          if ( result )
          {
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v110 + dword_6FBB52F4 * ((v54 + 1) << 10)),
                       dword_6FBB505C + 4 * (v110 + dword_6FBB52F4 * ((v54 + 1) << 10)),
                       v110,
                       v54 + 1,
                       (unsigned __int8)(v136 >> 16),
                       (unsigned __int8)(v56 >> 16),
                       (unsigned __int8)(v57 >> 16),
                       0,
                       0);
            v55 = v136;
          }
        }
        v58 = v129 + v55;
        v59 = v106 + v56;
        v60 = v44 + v57;
        if ( v162 <= v54 + 2 && v163 > v54 + 2 )
        {
          v137 = v58;
          result = sub_6F71F0C0(v54 + 2);
          v58 = v137;
          if ( result )
          {
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v110 + dword_6FBB52F4 * ((v54 + 2) << 10)),
                       dword_6FBB505C + 4 * (v110 + dword_6FBB52F4 * ((v54 + 2) << 10)),
                       v110,
                       v54 + 2,
                       (unsigned __int8)(v137 >> 16),
                       (unsigned __int8)(v59 >> 16),
                       (unsigned __int8)(v60 >> 16),
                       0,
                       0);
            v58 = v137;
          }
        }
        v49 = v129 + v58;
        v43 = v106 + v59;
        v50 = v44 + v60;
        v48 = v54 + 3;
      }
      while ( v48 != v123 );
      v6 = v143 - 1;
      if ( !v143 )
        goto LABEL_111;
LABEL_11:
      v5 = dword_6FBB52F4;
    }
  }
  return result;
}
