signed int __cdecl sub_6F8A7F20(_BYTE *a1, _DWORD *a2, int a3, int *a4, int a5)
{
  const char **v5; // eax@1
  const char *v6; // edi@1
  size_t v7; // eax@1
  _BYTE *v8; // edx@1
  char v9; // al@1
  _BYTE *v10; // esi@1
  signed int result; // eax@3
  signed int v12; // edx@10
  int v13; // ebp@11
  signed int v14; // ebx@11
  int v15; // ecx@13
  char v16; // al@20
  _BYTE *v17; // edx@21
  int *v18; // eax@24
  int v19; // ebp@27
  signed int v20; // edi@27
  _BYTE *v21; // eax@51
  _BYTE *v22; // ecx@54
  _BYTE *v23; // eax@55
  int v24; // ecx@55
  _BYTE *v25; // eax@55
  _BYTE *v26; // ebp@56
  int v27; // eax@57
  int v28; // eax@59
  int v29; // eax@65
  signed int v30; // ebp@68
  double v31; // st7@68
  int v35; // eax@83
  char v36; // al@84
  int v37; // ecx@86
  char *v38; // edi@86
  char v39; // al@88
  _BYTE *v40; // ebp@88
  _BYTE *v41; // eax@89
  int v42; // edi@91
  signed int v43; // edi@96
  double v44; // st7@100
  int *v45; // eax@101
  int v46; // edx@101
  int v47; // edi@101
  int v48; // ebp@101
  int v49; // ecx@103
  int v50; // eax@104
  signed int v51; // ebp@105
  int v52; // eax@108
  int *v53; // eax@109
  int v54; // edx@109
  int *v55; // ebx@109
  int v56; // eax@109
  int *v57; // ebp@114
  int v58; // esi@114
  int v59; // edi@114
  int v60; // ebx@114
  int v61; // eax@115
  signed int v62; // ebx@115
  int v63; // esi@116
  int v64; // edx@116
  int v65; // esi@118
  signed int v66; // edi@118
  bool v67; // zf@118
  bool v68; // sf@118
  unsigned __int8 v69; // of@118
  int v70; // eax@118
  int *v71; // ST50_4@125
  int *v72; // eax@135
  int *v73; // edi@135
  unsigned int v74; // ebx@137
  int v75; // eax@137
  unsigned int v76; // eax@139
  signed int v77; // eax@142
  int *v78; // edx@142
  unsigned int *v79; // esi@148
  int *v82; // esi@155
  int *v83; // ebx@158
  int *v84; // eax@159
  int v85; // edx@160
  int v86; // ecx@160
  int v87; // edx@161
  double v88; // st7@167
  int v89; // edi@176
  signed int v90; // edi@179
  signed int v91; // ebp@179
  signed int v92; // edx@180
  int v93; // edi@180
  int v94; // ecx@181
  int v95; // ecx@181
  int v96; // edx@183
  char v97; // dl@184
  int v98; // eax@184
  double v99; // st6@184
  signed int v100; // edi@191
  signed int v101; // edx@191
  signed int v102; // ecx@192
  int v103; // ebp@192
  int v104; // edi@193
  int v105; // edi@193
  int v106; // ecx@195
  double v107; // st6@196
  char v108; // cl@196
  int v109; // eax@196
  int v110; // ecx@204
  int *v111; // eax@212
  double v112; // st7@218
  int *v113; // eax@221
  int v114; // edx@221
  int v115; // ecx@221
  int v116; // edx@222
  double v117; // st6@230
  double v118; // st6@231
  int v119; // eax@239
  int v120; // eax@241
  signed int v121; // ecx@244
  unsigned int v122; // edx@244
  unsigned int j; // eax@244
  int v124; // ecx@246
  int v125; // edx@251
  unsigned int v126; // ecx@251
  int v127; // ebx@154
  int *v128; // eax@154
  int v129; // eax@266
  int v130; // edx@285
  int *v131; // esi@292
  _DWORD *v132; // eax@292
  unsigned int v133; // edx@292
  int v134; // ebp@311
  signed int v135; // eax@311
  int v136; // esi@311
  int v137; // ebx@311
  int v138; // edx@312
  int *v139; // edx@330
  _DWORD *v140; // eax@340
  unsigned int v141; // ecx@340
  signed int v143; // eax@354
  int v144; // eax@358
  int v145; // ecx@358
  double v146; // [sp+0h] [bp-DCh]@81
  int v147; // [sp+8h] [bp-D4h]@81
  int v148; // [sp+Ch] [bp-D0h]@81
  int *v149; // [sp+10h] [bp-CCh]@81
  signed int v150; // [sp+28h] [bp-B4h]@9
  double v151; // [sp+28h] [bp-B4h]@72
  int *v152; // [sp+28h] [bp-B4h]@114
  int v153; // [sp+30h] [bp-ACh]@11
  int v154; // [sp+30h] [bp-ACh]@80
  int *v155; // [sp+30h] [bp-ACh]@114
  signed int v156; // [sp+34h] [bp-A8h]@1
  signed int v157; // [sp+38h] [bp-A4h]@48
  _BYTE *v158; // [sp+38h] [bp-A4h]@92
  signed int v159; // [sp+38h] [bp-A4h]@108
  int v160; // [sp+40h] [bp-9Ch]@1
  int v161; // [sp+40h] [bp-9Ch]@114
  double v162; // [sp+40h] [bp-9Ch]@151
  signed int v163; // [sp+48h] [bp-94h]@27
  int v164; // [sp+48h] [bp-94h]@109
  _BYTE *v165; // [sp+48h] [bp-94h]@311
  int v166; // [sp+4Ch] [bp-90h]@29
  int v167; // [sp+4Ch] [bp-90h]@54
  int v168; // [sp+4Ch] [bp-90h]@92
  signed int v169; // [sp+4Ch] [bp-90h]@113
  int v170; // [sp+50h] [bp-8Ch]@25
  signed int v171; // [sp+50h] [bp-8Ch]@151
  int i; // [sp+54h] [bp-88h]@27
  signed int v173; // [sp+54h] [bp-88h]@151
  double v174; // [sp+58h] [bp-84h]@151
  int v175; // [sp+60h] [bp-7Ch]@54
  int v176; // [sp+60h] [bp-7Ch]@152
  signed int v177; // [sp+60h] [bp-7Ch]@311
  int v178; // [sp+64h] [bp-78h]@55
  int v179; // [sp+64h] [bp-78h]@104
  int v180; // [sp+68h] [bp-74h]@65
  signed int v181; // [sp+6Ch] [bp-70h]@113
  int v182; // [sp+70h] [bp-6Ch]@65
  int v183; // [sp+74h] [bp-68h]@7
  int *v184; // [sp+78h] [bp-64h]@109
  int v185; // [sp+7Ch] [bp-60h]@113
  const void *v186; // [sp+80h] [bp-5Ch]@113
  signed int v187; // [sp+84h] [bp-58h]@151
  signed int v188; // [sp+88h] [bp-54h]@10
  int v189; // [sp+8Ch] [bp-50h]@103
  int v190; // [sp+A4h] [bp-38h]@155
  char v191; // [sp+A8h] [bp-34h]@155
  int v192; // [sp+ACh] [bp-30h]@1
  int v193; // [sp+B0h] [bp-2Ch]@101
  int v194; // [sp+B4h] [bp-28h]@101
  _BYTE *v195; // [sp+B8h] [bp-24h]@1
  int *v196; // [sp+BCh] [bp-20h]@1

  v5 = (const char **)localeconv();
  v6 = *v5;
  v7 = strlen(*v5);
  v192 = 0;
  v160 = v7;
  v196 = 0;
  v156 = *(_DWORD *)a3;
  v8 = a1;
  v195 = a1;
  v9 = *a1;
  v10 = a1;
  while ( 2 )
  {
    switch ( v9 )
    {
      case 0:
        goto LABEL_3;
      case 45:
        v183 = 1;
        goto LABEL_8;
      case 43:
        v183 = 0;
LABEL_8:
        v10 = v8 + 1;
        v195 = v8 + 1;
        v9 = v8[1];
        if ( v9 )
        {
          v150 = 0;
          if ( v9 == 48 )
          {
LABEL_20:
            v16 = v10[1];
            if ( v16 == 88 || (v17 = v10 + 1, v16 == 120) )
            {
              v192 = sub_6F8AF6A0((int)&v195, a3, a4, (int *)&v196, v183);
              if ( v192 != 6 )
                goto LABEL_211;
              v195 = a1;
              v18 = v196;
              if ( a2 )
                *a2 = a1;
              goto LABEL_43;
            }
            do
            {
              v10 = v17;
              v195 = v17++;
              v9 = *(v17 - 1);
            }
            while ( v9 == 48 );
            v150 = 1;
            if ( !v9 )
              goto LABEL_24;
          }
LABEL_10:
          v12 = v9;
          v188 = *(_DWORD *)(a3 + 16);
          if ( (unsigned int)(v9 - 48) > 9 )
          {
            v15 = (int)v10;
            v153 = 0;
            v14 = 0;
            v170 = 0;
          }
          else
          {
            v153 = 0;
            v13 = 0;
            v14 = 0;
            do
            {
              if ( v14 <= 8 )
              {
                v13 = v12 + 10 * v13 - 48;
              }
              else if ( v14 <= 15 )
              {
                v153 = v12 + 10 * v153 - 48;
              }
              v15 = (int)&v10[++v14];
              v195 = &v10[v14];
              v12 = v10[v14];
              v9 = v10[v14];
            }
            while ( (unsigned int)(v12 - 48) <= 9 );
            v170 = v13;
          }
          if ( *v6 != v9 )
            goto LABEL_27;
          v36 = v6[1];
          if ( v36 )
          {
            if ( v36 != *(_BYTE *)(v15 + 1) )
            {
LABEL_27:
              v163 = v14;
              v19 = 0;
              v20 = 0;
              i = 0;
              goto LABEL_28;
            }
            v37 = v15 + 2;
            v38 = (char *)(v6 + 2);
            while ( 1 )
            {
              v39 = *v38;
              v40 = (_BYTE *)v37;
              if ( !*v38 )
                break;
              ++v37;
              ++v38;
              if ( *v40 != v39 )
                goto LABEL_27;
            }
            v41 = (_BYTE *)v37;
          }
          else
          {
            v41 = (_BYTE *)(v15 + 1);
          }
          v195 = v41;
          v12 = *v41;
          if ( v14 )
          {
            v42 = v12 - 48;
            v163 = v14;
            v19 = 0;
            for ( i = 0; (unsigned int)(v12 - 48) <= 9; v42 = v12 - 48 )
            {
              ++v19;
              v168 = v42;
              v158 = v195;
              if ( v42 )
              {
                i += v19;
                if ( v19 == 1 )
                {
                  v138 = v163++;
                }
                else
                {
                  v134 = v163 + v19;
                  v135 = v163;
                  v165 = v10;
                  v136 = v170;
                  v177 = v14;
                  v137 = v153;
                  do
                  {
                    if ( v135 <= 8 )
                    {
                      v138 = v135 + 1;
                      v136 *= 10;
                    }
                    else
                    {
                      v138 = v135 + 1;
                      if ( v135 + 1 <= 16 )
                        v137 *= 10;
                    }
                    v135 = v138;
                  }
                  while ( v138 != v134 - 1 );
                  v170 = v136;
                  v10 = v165;
                  v163 = v134;
                  v153 = v137;
                  v14 = v177;
                }
                if ( v138 <= 8 )
                {
LABEL_208:
                  v19 = 0;
                  v170 = v168 + 10 * v170;
                }
                else
                {
                  v19 = 0;
                  if ( v163 <= 16 )
                    v153 = v42 + 10 * v153;
                }
              }
              v195 = v158 + 1;
              v12 = v158[1];
            }
          }
          else
          {
            if ( v12 == 48 )
            {
              v110 = 1 - (_DWORD)v41;
              do
              {
                v19 = (int)&(v41++)[v110];
                v195 = v41;
                v12 = *v41;
              }
              while ( v12 == 48 );
            }
            else
            {
              v19 = 0;
            }
            if ( (unsigned int)(v12 - 49) <= 8 )
            {
              v10 = v195;
              v163 = 1;
              v168 = v12 - 48;
              i = v19 + 1;
              v158 = v195;
              goto LABEL_208;
            }
            i = 0;
            v163 = 0;
          }
          v20 = 1;
LABEL_28:
          if ( (v12 & 0xFFFFFFDF) != 69 )
          {
            v166 = 0;
            goto LABEL_30;
          }
          if ( !(v150 | v19 | v163) )
          {
            v192 = 6;
            v195 = a1;
            v18 = 0;
            goto LABEL_39;
          }
          a1 = v195++;
          v12 = a1[1];
          if ( (_BYTE)v12 == 43 )
          {
            v157 = 0;
          }
          else
          {
            if ( (_BYTE)v12 != 45 )
            {
              v157 = 0;
              goto LABEL_49;
            }
            v157 = 1;
          }
          v195 = a1 + 2;
          v12 = a1[2];
LABEL_49:
          if ( (unsigned int)(v12 - 48) > 9 )
          {
            v166 = 0;
            v195 = a1;
          }
          else
          {
            if ( v12 == 48 )
            {
              v21 = v195 + 1;
              do
              {
                v195 = v21;
                v12 = *v21++;
              }
              while ( v12 == 48 );
            }
            v166 = 0;
            if ( (unsigned int)(v12 - 49) <= 8 )
            {
              v167 = v12 - 48;
              v22 = v195;
              v175 = (int)v195++;
              v12 = *(_BYTE *)(v175 + 1);
              if ( (unsigned int)(v12 - 48) <= 9 )
              {
                v23 = v22;
                v24 = v167;
                v178 = v19;
                v25 = v23 + 2;
                do
                {
                  v195 = v25;
                  v26 = v25++;
                  v24 = v12 + 10 * v24 - 48;
                  v12 = *(v25 - 1);
                }
                while ( (unsigned int)(v12 - 48) <= 9 );
                v27 = (int)&v26[-v175];
                v167 = v24;
                v19 = v178;
                if ( v27 > 8 || v24 > 19999 )
                  v167 = 19999;
              }
              v28 = -v167;
              if ( !v157 )
                v28 = v167;
              v166 = v28;
            }
          }
LABEL_30:
          if ( !v163 )
          {
            if ( !(v19 | v150) )
            {
              if ( v20 )
              {
LABEL_37:
                v18 = 0;
LABEL_38:
                v192 = 6;
                v195 = a1;
                goto LABEL_39;
              }
              if ( v12 != 78 )
              {
                if ( v12 <= 78 )
                {
                  if ( v12 != 73 )
                    goto LABEL_37;
                }
                else if ( v12 != 105 )
                {
                  if ( v12 != 110 )
                    goto LABEL_37;
                  goto LABEL_209;
                }
                if ( sub_6F8B1380(&v195, (int)&unk_6FBA6940) )
                {
                  --v195;
                  if ( !sub_6F8B1380(&v195, (int)"inity") )
                    ++v195;
                  v192 = 3;
LABEL_329:
                  *a4 = *(_DWORD *)(a3 + 8) + 1;
                  v18 = v196;
                  goto LABEL_39;
                }
LABEL_64:
                v18 = v196;
                goto LABEL_38;
              }
LABEL_209:
              if ( sub_6F8B1380(&v195, (int)"an") )
              {
                v192 = 4;
                *a4 = *(_DWORD *)(a3 + 8) + 1;
                if ( *v195 != 40 )
                  goto LABEL_211;
                v192 = sub_6F8B0230((int *)&v195, (signed int *)a3, (int *)a5);
                goto LABEL_329;
              }
              goto LABEL_64;
            }
LABEL_24:
            v18 = 0;
            goto LABEL_39;
          }
          v192 = 1;
          v182 = v166 - i;
          v29 = *(_DWORD *)(a3 + 12) & 3;
          v180 = v29 - v183;
          if ( v29 != 2 )
          {
            v180 = v183 + 1;
            if ( v29 != 3 )
              v180 = v29 == 0;
          }
          v30 = 16;
          v31 = (double)(unsigned int)v170;
          if ( !v14 )
            v14 = v163;
          if ( v163 <= 16 )
            v30 = v163;
          v151 = v31;
          if ( v163 > 9 )
            v151 = v31 * dbl_6FBA6CD8[v30] + (double)(unsigned int)v153;
          if ( v156 > 53 || v163 > 15 )
          {
            v35 = v166 - i;
            goto LABEL_96;
          }
          if ( v166 == i )
          {
            v147 = 1;
            v149 = &v192;
            v146 = v151;
            v148 = v180;
          }
          else
          {
            if ( v182 <= 0 )
            {
              v35 = v166 - i;
              if ( v182 < -22 )
                goto LABEL_96;
              v146 = v151 / dbl_6FBA6D20[i - v166];
            }
            else
            {
              if ( v182 <= 22 )
              {
                _EDX = LODWORD(v151);
                if ( LODWORD(v151) )
                {
                  __asm { tzcnt   ecx, edx }
                  v154 = 53 - _ECX;
                }
                else
                {
                  _ECX = HIDWORD(v151) | 0x100000;
                  __asm { tzcnt   ecx, ecx }
                  v154 = 21 - _ECX;
                }
                v148 = v180;
                v147 = v154 + dword_6FBA6A20[v182] <= 53;
                v146 = v151 * dbl_6FBA6D20[v182];
                v151 = v146;
                v149 = &v192;
                goto LABEL_82;
              }
              v43 = v182 + v163 - v30;
              if ( 37 - v163 < v182 )
                goto LABEL_97;
              v146 = v151 * dbl_6FBA6D20[15 - v163] * dbl_6FBA6D20[v182 - (15 - v163)];
            }
            v147 = 0;
            v151 = v146;
            v149 = &v192;
            v148 = v180;
          }
LABEL_82:
          if ( sub_6F8A7A70(a3, a4, a5, v146, v147, v148, (int)v149) )
            goto LABEL_211;
          v35 = 0;
LABEL_96:
          v43 = v35 + v163 - v30;
          if ( v43 <= 0 )
          {
            if ( v43 )
            {
              v89 = -v43;
              if ( v89 & 0xF )
                v151 = v151 / dbl_6FBA6D20[v89 & 0xF];
              v43 = v89 & 0xFFFFFFF0;
              if ( v43 )
              {
                v90 = v43 >> 4;
                v91 = v90;
                if ( v90 <= 15 )
                {
                  v95 = 0;
                }
                else
                {
                  v92 = v90;
                  v93 = 0;
                  do
                  {
                    v92 -= 16;
                    v94 = HIDWORD(v151) >> 20;
                    HIDWORD(v151) = HIDWORD(v151) & 0x800FFFFF | 0x3FF00000;
                    v95 = v93 + (v94 & 0x7FF) - 1023;
                    v93 = v95;
                    v151 = v151 * 1.0e-256;
                  }
                  while ( v92 > 15 );
                  v91 &= 0xFu;
                }
                v96 = (HIDWORD(v151) >> 20) & 0x7FF;
                HIDWORD(v151) = HIDWORD(v151) & 0x800FFFFF | 0x3FF00000;
                v43 = v95 + v96 - 1023;
                if ( v91 )
                {
                  v97 = 0;
                  v98 = 0;
                  v99 = v151;
                  do
                  {
                    if ( v91 & 1 )
                    {
                      v99 = v99 * dbl_6FBA6DE0[v98];
                      v97 = 1;
                    }
                    ++v98;
                    v91 >>= 1;
                  }
                  while ( v91 );
                  if ( !v97 )
                    v99 = v151;
                  v44 = v99;
                  goto LABEL_101;
                }
              }
            }
            goto LABEL_100;
          }
LABEL_97:
          if ( v43 & 0xF )
            v151 = v151 * dbl_6FBA6D20[v43 & 0xF];
          v43 &= 0xFFFFFFF0;
          if ( v43 )
          {
            v100 = v43 >> 4;
            v101 = v100;
            if ( v100 <= 15 )
            {
              v105 = 0;
            }
            else
            {
              v102 = v100;
              v103 = 0;
              do
              {
                v102 -= 16;
                v104 = HIDWORD(v151) >> 20;
                HIDWORD(v151) = HIDWORD(v151) & 0x800FFFFF | 0x3FF00000;
                v105 = v103 + (v104 & 0x7FF) - 1023;
                v103 = v105;
                v151 = v151 * 1.0e256;
              }
              while ( v102 > 15 );
              v101 &= 0xFu;
            }
            v106 = (HIDWORD(v151) >> 20) & 0x7FF;
            HIDWORD(v151) = HIDWORD(v151) & 0x800FFFFF | 0x3FF00000;
            v44 = v151;
            v43 = v105 + v106 - 1023;
            if ( v101 )
            {
              v107 = v151;
              v108 = 0;
              v109 = 0;
              do
              {
                if ( v101 & 1 )
                {
                  v107 = v107 * dbl_6FBA6E20[v109];
                  v108 = 1;
                }
                ++v109;
                v101 >>= 1;
              }
              while ( v101 );
              if ( !v108 )
                v107 = v151;
              v44 = v107;
            }
            goto LABEL_101;
          }
LABEL_100:
          v44 = v151;
LABEL_101:
          v45 = sub_6F8B10C0(v44, (int)&v194, (int)&v193);
          v46 = v193;
          v47 = v194 + v43;
          v196 = v45;
          v48 = v193 - v156;
          v194 = v47;
          if ( v193 - v156 > 0 )
          {
            sub_6F8B0060((int)v45, v193 - v156);
            v46 = v156;
            v47 = v48 + v194;
            v193 = v156;
            v194 += v48;
          }
          v49 = v47 + v46 - v156;
          v189 = v47 + v46 - v156;
          if ( *(_DWORD *)(a3 + 8) + 1 < v49 )
          {
            v159 = 0;
            goto LABEL_261;
          }
          v50 = *(_DWORD *)(a3 + 4);
          v179 = v50;
          if ( v49 >= v50 )
          {
            v159 = 0;
          }
          else
          {
            v51 = v47 - v50;
            if ( v47 - v50 > 0 )
            {
              v111 = sub_6F8B0C60((int)v196, v51);
              v193 += v51;
              v196 = v111;
            }
            else if ( v47 != v50 )
            {
              v130 = v51 + v46;
              v18 = v196;
              v193 = v130;
              if ( v130 > 0 )
              {
                sub_6F8B0060((int)v196, v179 - v47);
              }
              else
              {
                if ( v130 < -1 )
                {
                  v196[4] = 0;
                  v18[5] = 0;
                  *a4 = v179;
                  if ( !v188 )
                  {
                    v126 = 80;
                    goto LABEL_254;
                  }
                  goto LABEL_257;
                }
                v193 = 1;
                v196[4] = 1;
                v18[5] = 1;
              }
            }
            v194 = v179;
            if ( v188 )
            {
              v52 = v189;
              v159 = 1;
              v189 = v179;
              if ( v52 + 1 < v179 )
              {
                v18 = v196;
                v196[4] = 0;
                v18[5] = 0;
                *a4 = v179;
                goto LABEL_257;
              }
            }
            else
            {
              v159 = 1;
              v189 = v179;
            }
          }
          v53 = sub_6F8B11E0((int)v10, v14, v163, v170, v160);
          v54 = 0;
          v164 = 0;
          v55 = v53;
          v184 = v53;
          v56 = i - v166;
          if ( v182 >= 0 )
            v56 = 0;
          if ( v182 >= 0 )
            v54 = v166 - i;
          v169 = v56;
          v186 = v55 + 3;
          v181 = v54;
          v185 = v156 + 1;
          while ( 1 )
          {
            v155 = sub_6F8B0700(v184[1]);
            memcpy(v155 + 3, v186, 4 * v184[4] + 8);
            v57 = sub_6F8B0700(v196[1]);
            memcpy(v57 + 3, v196 + 3, 4 * v196[4] + 8);
            v58 = v193;
            v59 = v194;
            v60 = v194 + v164;
            v161 = v193 - v164;
            v152 = sub_6F8B0930(1);
            if ( v60 < 0 )
            {
              v61 = v181 - v60;
              v62 = v169;
            }
            else
            {
              v61 = v181;
              v62 = v169 + v60;
            }
            v63 = v59 + v58 - v156;
            v64 = v185 - v161;
            if ( v179 > v63 )
              v64 = v185 - v161 + v63 - v179;
            v65 = v62 + v64;
            v66 = v61 + v64;
            v69 = __OFSUB__(v62 + v64, v61 + v64);
            v67 = v62 + v64 == v61 + v64;
            v68 = v62 + v64 - (v61 + v64) < 0;
            v70 = v61 + v64;
            if ( (unsigned __int8)(v68 ^ v69) | v67 )
              v70 = v62 + v64;
            if ( v62 <= v70 )
              v70 = v62;
            if ( v70 > 0 )
            {
              v65 -= v70;
              v66 -= v70;
              v62 -= v70;
            }
            if ( v169 > 0 )
            {
              v152 = (int *)sub_6F8B0AE0((int)v152, v169);
              v71 = sub_6F8B0960((int)v152, (int)v57);
              sub_6F8B07F0(v57);
              v57 = v71;
            }
            if ( v65 - v164 > 0 )
            {
              v57 = sub_6F8B0C60((int)v57, v65 - v164);
            }
            else if ( v65 != v164 )
            {
              sub_6F8B0060((int)v57, v164 - v65);
            }
            if ( v182 > 0 )
              v155 = (int *)sub_6F8B0AE0((int)v155, v181);
            if ( v66 > 0 )
              v155 = sub_6F8B0C60((int)v155, v66);
            if ( v62 > 0 )
              v152 = sub_6F8B0C60((int)v152, v62);
            v72 = sub_6F8B0DC0((int)v57, (int)v155);
            v73 = v72;
            if ( v72[4] <= 1 && !v72[5] )
              goto LABEL_238;
            v74 = v72[3];
            v72[3] = 0;
            v75 = sub_6F8B0D70((int)v72, (int)v152);
            if ( v180 && v75 <= 0 )
            {
              v76 = v180 & 1;
              v164 = v74 ^ v76;
              if ( v76 == v74 )
              {
                v192 = v76 < 1 ? 33 : 17;
                goto LABEL_238;
              }
              if ( v74 )
              {
                v192 = 33;
                v162 = 1.0;
                v173 = 0;
                v174 = 1.0;
                v187 = 32;
                v171 = 0;
                goto LABEL_152;
              }
              v192 = 17;
              if ( v189 == v179 )
                goto LABEL_149;
              v77 = v156;
              v78 = v196;
              if ( v156 <= 31 )
              {
                v77 = v156;
                goto LABEL_147;
              }
              if ( !v196[5] )
              {
                do
                {
                  v77 -= 32;
                  ++v74;
                  if ( v77 <= 31 )
                    break;
                }
                while ( !v196[v74 + 5] );
LABEL_147:
                if ( v77 <= 1 )
                  goto LABEL_364;
                v79 = (unsigned int *)&v196[v74 + 5];
                _EBX = *v79;
                __asm { tzcnt   ecx, ebx }
                *v79 >>= _ECX;
                if ( v77 - 1 <= _ECX )
                {
LABEL_364:
                  v194 = v189 - 1;
                  v193 = v156;
                  v196 = sub_6F8A7E80((int)v78, v156);
                  goto LABEL_238;
                }
                goto LABEL_149;
              }
            }
            else
            {
              if ( v75 < 0 )
              {
                if ( v74 )
                  goto LABEL_344;
                v192 = 33;
                if ( v161 > 1 || v189 == v179 || v159 & 1 )
                  goto LABEL_238;
                v73 = sub_6F8B0C60((int)v73, 1);
                if ( sub_6F8B0D70((int)v73, (int)v152) <= 0 )
                  goto LABEL_266;
                v192 = 17;
                v159 = 0;
                goto LABEL_305;
              }
              if ( !v75 )
              {
                if ( v74 )
                {
                  if ( !v159 )
                    goto LABEL_350;
                  v131 = v196;
                  v132 = v196 + 5;
                  v133 = (unsigned int)&v196[(v193 >> 5) + 5];
                  if ( (unsigned int)(v196 + 5) < v133 )
                  {
                    v132 = v196 + 6;
                    if ( v196[5] != -1 )
                      goto LABEL_350;
                    while ( v133 > (unsigned int)v132 )
                    {
                      ++v132;
                      if ( *(v132 - 1) != -1 )
                        goto LABEL_350;
                    }
                  }
                  if ( v193 & 0x1F && (*v132 | (-1 << (v193 & 0x1F))) != -1 )
                  {
LABEL_350:
                    v192 = 17;
                    goto LABEL_335;
                  }
                  v196[4] = 1;
                  v131[5] = 1;
                  v193 = 1;
                  v194 = v156 + v179 - 1;
                  v129 = v159;
                  v192 = 33;
LABEL_267:
                  v159 = v156 - v129;
                  if ( v156 != v129 )
                  {
                    if ( v156 - v129 <= 0 )
                      sub_6F8B0060((int)v196, v129 - v156);
                    else
                      v196 = sub_6F8B0C60((int)v196, v159);
                    v119 = v194 - v159;
                    v159 = 0;
                    v194 = v119;
LABEL_240:
                    *a4 = v119;
                    sub_6F8B07F0(v57);
                    sub_6F8B07F0(v155);
                    sub_6F8B07F0(v152);
                    sub_6F8B07F0(v184);
                    sub_6F8B07F0(v73);
                    if ( *(_DWORD *)(a3 + 8) >= v194 )
                      goto LABEL_262;
                    v120 = *(_DWORD *)(a3 + 12) & 3;
                    if ( v120 == 2 )
                    {
                      if ( !v183 )
                        goto LABEL_261;
                    }
                    else
                    {
                      if ( v120 != 3 )
                      {
                        if ( v120 != 1 )
                          goto LABEL_244;
LABEL_261:
                        v192 = 163;
                        v196[4] = 0;
                        *errno() = 34;
                        *a4 = *(_DWORD *)(a3 + 8) + 1;
LABEL_262:
                        v18 = v196;
LABEL_249:
                        if ( !v159 )
                          goto LABEL_39;
                        if ( !v188 )
                        {
                          v125 = v192 & 0x30;
                          v126 = v192 & 0xFFFFFFF8;
                          if ( v18[4] > 0 )
                            v126 |= 2u;
                          v192 = v126;
                          if ( v125 )
                          {
LABEL_254:
                            v192 = v126 | 0x40;
                            *errno() = 34;
                          }
LABEL_211:
                          v18 = v196;
LABEL_39:
                          if ( a2 )
                            *a2 = v195;
                          if ( v183 )
                            v192 |= 8u;
LABEL_43:
                          if ( v18 )
                          {
                            sub_6F8B13D0((_DWORD *)a5, v156, (int)v18);
                            sub_6F8B07F0(v196);
                          }
                          return v192;
                        }
LABEL_257:
                        v18[4] = 0;
                        v192 = 80;
                        *errno() = 34;
                        v18 = v196;
                        goto LABEL_39;
                      }
                      if ( v183 )
                        goto LABEL_261;
                    }
LABEL_244:
                    sub_6F8B07F0(v196);
                    v196 = 0;
                    v192 = 17;
                    *a4 = *(_DWORD *)(a3 + 8);
                    v121 = *(_DWORD *)a3;
                    v122 = a5 + 4 * ((*(_DWORD *)a3 + 31) >> 5);
                    for ( j = a5; v122 > j; *(_DWORD *)(j - 4) = -1 )
                      j += 4;
                    v124 = v121 & 0x1F;
                    if ( v124 )
                      *(_DWORD *)(v122 - 4) >>= 32 - v124;
                    v18 = 0;
                    goto LABEL_249;
                  }
LABEL_239:
                  v119 = v194;
                  goto LABEL_240;
                }
                if ( v161 != 1 )
                {
                  v192 = 33;
LABEL_335:
                  if ( v156 <= v161 || v159 & 1 )
                  {
                    v139 = v196;
                    if ( !(*((_BYTE *)v196 + 20) & 1) )
                      goto LABEL_238;
                    if ( !v74 )
                    {
                      if ( v161 == 1 )
                        goto LABEL_331;
                      v140 = v196 + 5;
                      v141 = (unsigned int)&v196[v196[4] + 5];
                      while ( !*v140 )
                      {
                        ++v140;
                        *(v140 - 1) = -1;
                        if ( v141 <= (unsigned int)v140 )
                          goto LABEL_344;
                      }
                      --*v140;
LABEL_344:
                      v192 = 17;
                      goto LABEL_238;
                    }
                    v144 = sub_6F8A79D0((int)v196);
                    v145 = *(_DWORD *)(v144 + 16);
                    v196 = (int *)v144;
                    _BitScanReverse((unsigned int *)&v144, *(_DWORD *)(v144 + 4 * v145 + 16));
                    if ( (-v193 & 0x1F) != (v144 ^ 0x1F) )
                      ++v193;
                    v192 = 33;
LABEL_238:
                    if ( v159 )
                      goto LABEL_239;
                  }
LABEL_266:
                  v129 = v193;
                  goto LABEL_267;
                }
                v192 = 1;
                if ( v189 == v179 )
                {
                  v192 = 33;
                  if ( v196[4] == 1 )
                  {
                    v143 = 1;
                    if ( v196[5] != 1 )
                      v143 = v188;
                    v188 = v143;
                  }
                  goto LABEL_238;
                }
LABEL_305:
                v194 -= v156;
                v193 = v156;
                v196 = sub_6F8A7E80((int)v196, v156);
                goto LABEL_238;
              }
              v112 = sub_6F8B12C0((int)v73, (int)v152);
              if ( v112 > 2.0 )
              {
                v117 = v112 * 0.5;
                v187 = v74 < 1 ? 32 : 16;
                v171 = v74 < 1;
                v174 = v117;
                if ( v117 >= 2147483647.0 )
                {
                  v173 = 0;
                  v162 = v117;
                  goto LABEL_234;
                }
                v173 = (signed int)v117;
                v162 = (double)(signed int)v117;
                v118 = v117 - v162;
                v174 = v118;
                if ( v180 == 1 )
                {
                  if ( v74 >= 1 )
                    goto LABEL_234;
                }
                else
                {
                  if ( v180 != 2 )
                  {
                    if ( v118 < 0.5 )
                    {
LABEL_234:
                      v164 = 0;
                      goto LABEL_152;
                    }
LABEL_277:
                    ++v173;
                    v187 = 48 - v187;
                    v162 = (double)v173;
                    goto LABEL_234;
                  }
                  if ( v74 < 1 )
                    goto LABEL_234;
                }
                if ( v118 <= 0.0 )
                  goto LABEL_234;
                goto LABEL_277;
              }
              if ( v74 )
              {
                v173 = 0;
                v162 = 1.0;
                v187 = 32;
                v174 = 1.0;
                v164 = 0;
                v171 = 0;
                goto LABEL_152;
              }
              v164 = 0;
            }
LABEL_149:
            if ( v161 <= 1 && v159 & 1 )
            {
              v159 = 1;
              v139 = v196;
LABEL_331:
              v139[4] = 0;
              v192 = 80;
              v194 = v179;
              goto LABEL_238;
            }
            v173 = 0;
            v162 = 1.0;
            v187 = 16;
            v174 = 1.0;
            v171 = 1;
LABEL_152:
            v176 = v193 + v194;
            if ( v193 < v156 && !(v159 & 1) )
            {
              v127 = v156 - v193;
              v128 = sub_6F8B0C60((int)v196, v156 - v193);
              v194 -= v127;
              v196 = v128;
              v193 = v156;
            }
            v82 = sub_6F8B10C0(v162, (int)&v190, (int)&v191);
            if ( v190 < 0 )
            {
              sub_6F8B0060((int)v82, -v190);
            }
            else if ( v190 )
            {
              v82 = sub_6F8B0C60((int)v82, v190);
            }
            v83 = v196;
            if ( v171 )
            {
              v84 = sub_6F8B0DC0((int)v196, (int)v82);
              v196 = v84;
              if ( !v159 )
              {
                v85 = v83[4];
                v86 = v85 - 1;
                if ( v84[4] <= v85 - 1
                  || (v87 = v85 + 3,
                      _BitScanReverse((unsigned int *)&v86, v84[v87 + 1]),
                      _BitScanReverse((unsigned int *)&v87, v83[v87 + 1]),
                      (v87 ^ 0x1F) < (v86 ^ 0x1F)) )
                {
                  if ( v189 != v179 )
                  {
                    v196 = sub_6F8B0C60((int)v84, 1);
                    --v194;
                    --v189;
                    sub_6F8B07F0(v82);
                    sub_6F8B07F0(v83);
LABEL_228:
                    v159 = 0;
                    v164 = sub_6F8B0170((int)v196);
                    goto LABEL_170;
                  }
                  --v193;
                  v159 = v171;
                }
              }
            }
            else
            {
              v113 = sub_6F8A9BB0((int)v196, (int)v82);
              v114 = v113[4];
              v196 = v113;
              v115 = v114 - 1;
              if ( v83[4] <= v114 - 1
                || (v116 = v114 + 3,
                    _BitScanReverse((unsigned int *)&v115, v113[v116 + 1]),
                    _BitScanReverse((unsigned int *)&v116, v83[v116 + 1]),
                    (v116 ^ 0x1F) > (v115 ^ 0x1F)) )
              {
                if ( v159 )
                {
                  v67 = v193++ + 1 == v156;
                  v159 = !v67;
                }
                else
                {
                  sub_6F8B0060((int)v113, 1);
                  ++v194;
                  ++v189;
                  v173 = 0;
                }
              }
            }
            sub_6F8B07F0(v82);
            sub_6F8B07F0(v83);
            if ( v164 )
              goto LABEL_238;
            if ( v194 + v193 == v176 && v173 )
            {
              v88 = v162 * 5.0e-16;
              if ( -(v162 * 5.0e-16) <= v174 - 0.5 )
              {
                if ( v174 - 0.5 > v88 && 1.0 - v88 > v174 )
                {
LABEL_237:
                  v192 |= v187;
                  goto LABEL_238;
                }
              }
              else if ( v174 > v88 )
              {
                goto LABEL_237;
              }
            }
            if ( !v159 )
              goto LABEL_228;
LABEL_170:
            sub_6F8B07F0(v57);
            sub_6F8B07F0(v155);
            sub_6F8B07F0(v152);
            sub_6F8B07F0(v73);
          }
        }
LABEL_3:
        result = 6;
        v192 = 6;
        if ( !a2 )
          return result;
        *a2 = a1;
        return v192;
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 32:
        v195 = ++v8;
        v9 = *v8;
        v10 = v8;
        if ( *v8 <= 0x2Du )
          continue;
        goto LABEL_19;
      default:
LABEL_19:
        v183 = 0;
        v150 = 0;
        if ( v9 == 48 )
          goto LABEL_20;
        goto LABEL_10;
    }
  }
}
