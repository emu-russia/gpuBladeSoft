int __cdecl sub_6F7D0290(int a1, unsigned int a2, int a3, size_t a4)
{
  int v4; // edi@1
  unsigned int v5; // eax@1
  int v6; // edx@2
  int v7; // ebx@5
  const void *v8; // eax@5
  int v9; // esi@5
  unsigned int v10; // ebx@6
  bool v11; // zf@8
  unsigned int v12; // eax@9
  int v14; // ecx@16
  unsigned int v15; // ebx@16
  unsigned int v16; // edx@16
  signed int v17; // eax@20
  unsigned int v18; // eax@22
  int v19; // eax@26
  unsigned int v20; // edx@26
  unsigned int v21; // ecx@29
  unsigned int v22; // ebx@30
  signed int v23; // ebp@37
  int v24; // ecx@37
  int v25; // eax@39
  unsigned int v26; // ecx@40
  unsigned int v27; // ebx@42
  char v28; // al@42
  unsigned int v29; // ecx@42
  unsigned int v30; // eax@45
  int v31; // ebp@45
  int v32; // edi@45
  int v33; // ebx@45
  int v34; // ecx@46
  unsigned int v35; // edx@46
  signed int v36; // eax@46
  size_t v37; // edx@53
  bool v38; // cf@55
  int v39; // ebx@56
  unsigned int v40; // eax@60
  unsigned int v41; // ebx@60
  char v42; // cl@62
  int v43; // edi@70
  char v44; // al@74
  unsigned int v45; // esi@74
  unsigned int v46; // ebx@74
  unsigned int v47; // ecx@74
  unsigned int v48; // eax@77
  int v49; // ebp@77
  int v50; // ebx@77
  int v51; // ecx@78
  unsigned int v52; // edx@78
  signed int v53; // eax@78
  size_t v54; // edx@85
  int v55; // ecx@88
  unsigned int v56; // eax@92
  char v57; // cl@94
  signed int v58; // eax@96
  unsigned __int8 v59; // bl@105
  int v60; // edx@105
  int v61; // eax@106
  unsigned int v62; // eax@108
  unsigned int v63; // ebx@111
  unsigned __int8 v64; // bl@114
  int v65; // edx@114
  int v66; // eax@115
  unsigned int v67; // eax@117
  unsigned int v68; // edi@119
  unsigned int v69; // edx@121
  unsigned int v70; // eax@121
  char *v71; // eax@122
  char *v72; // eax@128
  int v73; // eax@129
  unsigned int v74; // ecx@131
  unsigned int v75; // eax@131
  int v76; // ecx@132
  unsigned int v77; // ebx@132
  char *v78; // edx@132
  signed int v79; // ebp@135
  int v80; // ecx@136
  unsigned int v81; // ebx@138
  unsigned int v82; // edx@140
  unsigned int v83; // eax@140
  char *v84; // eax@141
  char *v85; // eax@146
  int v86; // eax@147
  unsigned int v87; // ecx@149
  unsigned int v88; // eax@149
  int v89; // ecx@150
  unsigned int v90; // esi@150
  char *v91; // edx@150
  signed int v92; // ebp@153
  int v93; // ebp@154
  unsigned int v94; // ecx@158
  unsigned int v95; // eax@158
  char *v96; // eax@159
  int v97; // edi@164
  signed int v98; // edx@164
  char *v99; // eax@165
  int v100; // ecx@165
  unsigned int v101; // ecx@168
  unsigned int v102; // eax@168
  char *v103; // eax@169
  char *v104; // ecx@175
  unsigned int v105; // ebx@175
  signed int v106; // edx@178
  int v107; // edx@179
  int v108; // esi@184
  signed int v109; // edx@184
  char *v110; // eax@185
  int v111; // edx@185
  unsigned int v112; // esi@190
  char *v113; // edx@190
  signed int v114; // ecx@191
  int v115; // ecx@194
  unsigned int v116; // ebx@199
  char *v117; // edi@199
  signed int v118; // edx@200
  unsigned int v119; // ecx@200
  int v120; // edi@203
  char *v121; // esi@208
  int v122; // ebp@208
  unsigned int v123; // ebx@208
  signed int v124; // edx@209
  unsigned int v125; // ecx@209
  int v126; // edx@212
  size_t v127; // [sp+20h] [bp-5Ch]@42
  int v128; // [sp+20h] [bp-5Ch]@77
  unsigned int v129; // [sp+20h] [bp-5Ch]@135
  unsigned int v130; // [sp+20h] [bp-5Ch]@153
  int v131; // [sp+20h] [bp-5Ch]@175
  int v132; // [sp+20h] [bp-5Ch]@190
  int v133; // [sp+20h] [bp-5Ch]@199
  int v134; // [sp+24h] [bp-58h]@46
  size_t v135; // [sp+24h] [bp-58h]@60
  int v136; // [sp+24h] [bp-58h]@78
  size_t v137; // [sp+24h] [bp-58h]@92
  unsigned int v138; // [sp+24h] [bp-58h]@178
  _BYTE *v139; // [sp+28h] [bp-54h]@47
  _BYTE *v140; // [sp+28h] [bp-54h]@79
  signed int v141; // [sp+28h] [bp-54h]@127
  unsigned int v142; // [sp+2Ch] [bp-50h]@9
  unsigned int v143; // [sp+2Ch] [bp-50h]@19
  unsigned int v144; // [sp+30h] [bp-4Ch]@9
  unsigned int v145; // [sp+30h] [bp-4Ch]@19
  int v146; // [sp+34h] [bp-48h]@5
  unsigned int v147; // [sp+34h] [bp-48h]@22
  void *v148; // [sp+38h] [bp-44h]@5
  unsigned int v149; // [sp+38h] [bp-44h]@18
  signed int v150; // [sp+3Ch] [bp-40h]@9
  signed int v151; // [sp+3Ch] [bp-40h]@19
  int v152; // [sp+40h] [bp-3Ch]@5
  unsigned int v153; // [sp+44h] [bp-38h]@25
  signed int v154; // [sp+44h] [bp-38h]@42
  int v155; // [sp+48h] [bp-34h]@19
  int v156; // [sp+4Ch] [bp-30h]@19
  int v157; // [sp+5Ch] [bp-20h]@104

  v4 = *(_DWORD *)(a1 + 12);
  v5 = *(_DWORD *)(v4 + 4280);
  if ( a2 >= v5 )
  {
LABEL_15:
    if ( a2 <= v5 )
      goto LABEL_4;
    v14 = *(_DWORD *)(v4 + 4284);
    v15 = a2 - v5;
    v16 = *(_DWORD *)(v4 + 4288) - v14;
    if ( a2 - v5 <= v16 )
      v16 = a2 - v5;
    *(_DWORD *)(v4 + 4284) = v16 + v14;
    *(_DWORD *)(v4 + 4280) = v16 + v5;
    v149 = v15 - v16;
    if ( v15 == v16 )
      goto LABEL_4;
    v155 = v4 + 12;
    v151 = *(_DWORD *)(v4 + 84);
    v143 = *(_DWORD *)(v4 + 76);
    v145 = *(_DWORD *)(v4 + 80);
    v156 = v4 + 112;
    while ( 1 )
    {
      v17 = 4096;
      if ( v149 < 0x1000 )
        v17 = v149;
      v147 = v17;
      v18 = *(_DWORD *)(v4 + 12);
      if ( v18 == 1 )
      {
        v21 = *(_DWORD *)(v4 + 68);
        v153 = 0;
        goto LABEL_74;
      }
      if ( v18 >= 1 )
      {
        if ( v18 == 2 )
        {
          v153 = 0;
          goto LABEL_26;
        }
        return 0;
      }
      if ( sub_6F771FF0(*(_DWORD *)(v4 + 176), 2u) )
        goto LABEL_34;
      if ( sub_6F7721D0(*(_DWORD *)(v4 + 176), &v157, 1u) != 1 )
        goto LABEL_34;
      v59 = v157 & 0x1F;
      v60 = v157 & 0x80;
      *(_DWORD *)(v4 + 56) = v60;
      *(_DWORD *)(v4 + 52) = v59;
      *(_DWORD *)(v4 + 60) = (1 << v59) - 256;
      if ( v59 > 0x10u )
        goto LABEL_34;
      *(_DWORD *)(v4 + 64) = 9;
      *(_DWORD *)(v4 + 68) = v60 != 0;
      v61 = (1 << v59) - 255;
      if ( v59 > 9u )
        v61 = 256;
      *(_DWORD *)(v4 + 72) = v61;
      v62 = sub_6F7D0010(v155);
      if ( v62 > 0xFF )
      {
        v151 = 0;
LABEL_34:
        *(_DWORD *)(v4 + 12) = 3;
        *(_DWORD *)(v4 + 76) = v143;
        *(_DWORD *)(v4 + 80) = v145;
        *(_DWORD *)(v4 + 84) = v151;
        return 0;
      }
      if ( v147 != 1 )
        break;
      *(_DWORD *)(v4 + 76) = v62;
      *(_DWORD *)(v4 + 80) = v62;
      v143 = v62;
      v145 = v62;
      v58 = 0;
      *(_DWORD *)(v4 + 84) = 0;
LABEL_97:
      *(_DWORD *)(v4 + 4280) += v147;
      v11 = v149 == v147;
      v149 -= v147;
      v151 = v58;
      if ( v11 )
        goto LABEL_4;
    }
    *(_DWORD *)(v4 + 12) = 1;
    v21 = *(_DWORD *)(v4 + 68);
    v143 = v62;
    v145 = v62;
    v151 = 0;
    v153 = 1;
LABEL_74:
    v44 = *(_BYTE *)(v4 + 44);
    v45 = *(_DWORD *)(v4 + 64);
    v46 = v21;
    v47 = *(_DWORD *)(v4 + 36);
    while ( 1 )
    {
      v54 = v45;
      if ( v44 )
        break;
      if ( *(_DWORD *)(v4 + 40) > v47 )
      {
        if ( *(_DWORD *)(v4 + 72) > v46 )
        {
          v48 = v47 >> 3;
          v49 = v155 + (v47 >> 3) + 8;
          v128 = v47 & 7;
          v50 = 8 - v128;
          goto LABEL_78;
        }
        goto LABEL_87;
      }
      if ( *(_DWORD *)(v4 + 72) <= v46 )
        goto LABEL_87;
LABEL_91:
      if ( *(_DWORD *)(v4 + 16) )
        goto LABEL_96;
      v49 = v4 + 20;
      v137 = v54;
      v56 = sub_6F7721D0(*(_DWORD *)(v4 + 176), (void *)(v4 + 20), v54);
      v45 = *(_DWORD *)(v4 + 64);
      *(_DWORD *)(v4 + 48) += v56;
      *(_DWORD *)(v4 + 36) = 0;
      *(_DWORD *)(v4 + 16) = v56 < v45;
      *(_DWORD *)(v4 + 40) = 1 - v45 + 8 * v56;
      if ( !v56 )
        goto LABEL_96;
      v50 = 8;
      LOBYTE(v128) = 0;
      v48 = 0;
      v47 = 0;
      v54 = v137;
LABEL_78:
      v51 = v54 + v47;
      v52 = v54 - v50;
      *(_DWORD *)(v4 + 36) = v51;
      v136 = v51;
      v53 = (signed int)*(_BYTE *)(v4 + v48 + 20) >> v128;
      if ( v52 > 7 )
      {
        v52 -= 8;
        v140 = (_BYTE *)(v49 + 2);
        v57 = v50;
        LOBYTE(v50) = 16 - v128;
        v53 |= *(_BYTE *)(v49 + 1) << v57;
      }
      else
      {
        v140 = (_BYTE *)(v49 + 1);
      }
      if ( v52 )
        v53 |= (*v140 & ((1 << v52) - 1)) << v50;
      if ( v53 != 256 )
      {
        v81 = v53;
        if ( v53 <= 255 )
        {
          v151 = v53;
          goto LABEL_140;
        }
        if ( *(_DWORD *)(v4 + 68) > (unsigned int)(v53 - 256) )
        {
          v151 = v53;
          goto LABEL_144;
        }
        v151 = v53;
        if ( *(_DWORD *)(v4 + 68) < (unsigned int)(v53 - 256) )
          goto LABEL_96;
LABEL_158:
        v94 = *(_DWORD *)(v4 + 104);
        v95 = *(_DWORD *)(v4 + 108);
        if ( v94 < v95 )
        {
          v96 = *(char **)(v4 + 100);
          goto LABEL_160;
        }
        v121 = *(char **)(v4 + 100);
        v122 = *(_DWORD *)(v4 + 180);
        v123 = v95 + (v95 >> 1) + 4;
        if ( v121 == (char *)v156 )
        {
          *(_DWORD *)(v4 + 100) = 0;
          if ( v123 > 0x10000 )
            v123 = 0x10000;
          v125 = 0;
          v121 = 0;
          v124 = v123;
        }
        else
        {
          v124 = v95 + (v95 >> 1) + 4;
          v125 = *(_DWORD *)(v4 + 108);
          if ( v123 > 0x10000 )
          {
            if ( v95 == 0x10000 )
              goto LABEL_96;
            v125 = *(_DWORD *)(v4 + 108);
            v124 = 0x10000;
            v123 = 0x10000;
          }
        }
        v96 = sub_6F773B30(v122, 1, v125, v124, v121, &v157);
        v126 = v157;
        *(_DWORD *)(v4 + 100) = v96;
        if ( v126 )
        {
LABEL_96:
          *(_DWORD *)(v4 + 12) = 3;
          *(_DWORD *)(v4 + 76) = v143;
          *(_DWORD *)(v4 + 80) = v145;
          v58 = v151;
          *(_DWORD *)(v4 + 84) = v151;
          if ( v147 <= v153 )
            goto LABEL_97;
          return 0;
        }
        *(_DWORD *)(v4 + 108) = v123;
        v94 = *(_DWORD *)(v4 + 104);
LABEL_160:
        *(_DWORD *)(v4 + 104) = v94 + 1;
        v96[v94] = v145;
        v81 = v143;
        if ( v143 > 0xFF )
          goto LABEL_144;
LABEL_140:
        v82 = *(_DWORD *)(v4 + 104);
        v83 = *(_DWORD *)(v4 + 108);
        if ( v82 < v83 )
        {
          v84 = *(char **)(v4 + 100);
          goto LABEL_142;
        }
        v132 = *(_DWORD *)(v4 + 180);
        v112 = v83 + (v83 >> 1) + 4;
        v113 = *(char **)(v4 + 100);
        if ( v113 != (char *)v156 )
        {
          v114 = v83 + (v83 >> 1) + 4;
          if ( v112 <= 0x10000 )
            goto LABEL_194;
          if ( v83 != 0x10000 )
          {
            v114 = 0x10000;
            v112 = 0x10000;
            goto LABEL_194;
          }
          goto LABEL_225;
        }
        *(_DWORD *)(v4 + 100) = 0;
        if ( v112 > 0x10000 )
          v112 = 0x10000;
        v83 = 0;
        v113 = 0;
        v114 = v112;
LABEL_194:
        v84 = sub_6F773B30(v132, 1, v83, v114, v113, &v157);
        v115 = v157;
        *(_DWORD *)(v4 + 100) = v84;
        if ( v115 )
        {
LABEL_225:
          v145 = v81;
          goto LABEL_96;
        }
        *(_DWORD *)(v4 + 108) = v112;
        v82 = *(_DWORD *)(v4 + 104);
LABEL_142:
        v145 = v81;
        *(_DWORD *)(v4 + 104) = v82 + 1;
        v84[v82] = v81;
        *(_DWORD *)(v4 + 12) = 2;
LABEL_26:
        v19 = *(_DWORD *)(v4 + 104);
        v20 = v153;
        while ( v19 )
        {
          ++v20;
          *(_DWORD *)(v4 + 104) = --v19;
          if ( v147 == v20 )
          {
            *(_DWORD *)(v4 + 76) = v143;
            *(_DWORD *)(v4 + 80) = v145;
            v58 = v151;
            *(_DWORD *)(v4 + 84) = v151;
            goto LABEL_97;
          }
        }
        v21 = *(_DWORD *)(v4 + 68);
        v153 = v20;
        if ( v21 < *(_DWORD *)(v4 + 60) )
        {
          v22 = *(_DWORD *)(v4 + 96);
          if ( v21 >= v22 )
          {
            if ( v22 )
            {
              v108 = v22 + (v22 >> 2);
              v109 = v22 + (v22 >> 2);
            }
            else
            {
              v109 = 512;
              v108 = 512;
            }
            v110 = sub_6F773B30(*(_DWORD *)(v4 + 180), 3, v22, v109, *(char **)(v4 + 88), &v157);
            v111 = v157;
            *(_DWORD *)(v4 + 88) = v110;
            if ( v111 )
              goto LABEL_96;
            *(_DWORD *)(v4 + 92) = &v110[2 * v108];
            memmove(&v110[2 * v108], &v110[2 * v22], v22);
            *(_DWORD *)(v4 + 96) = v108;
            v21 = *(_DWORD *)(v4 + 68);
          }
          *(_WORD *)(*(_DWORD *)(v4 + 88) + 2 * v21) = v143;
          *(_BYTE *)(*(_DWORD *)(v4 + 92) + v21) = v145;
          v21 = *(_DWORD *)(v4 + 68) + 1;
          *(_DWORD *)(v4 + 68) = v21;
        }
        *(_DWORD *)(v4 + 12) = 1;
        v143 = v151;
        goto LABEL_74;
      }
      if ( !*(_DWORD *)(v4 + 56) )
      {
        v81 = 256;
        v151 = 256;
        if ( !*(_DWORD *)(v4 + 68) )
          goto LABEL_158;
LABEL_144:
        if ( *(_DWORD *)(v4 + 88) )
        {
          while ( 1 )
          {
            v87 = *(_DWORD *)(v4 + 104);
            v88 = *(_DWORD *)(v4 + 108);
            if ( v87 < v88 )
            {
              v85 = *(char **)(v4 + 100);
            }
            else
            {
              v89 = *(_DWORD *)(v4 + 180);
              v90 = v88 + (v88 >> 1) + 4;
              v91 = *(char **)(v4 + 100);
              if ( v91 == (char *)v156 )
              {
                *(_DWORD *)(v4 + 100) = 0;
                if ( v90 > 0x10000 )
                  v90 = 0x10000;
                v130 = 0;
                v91 = 0;
                v92 = v90;
              }
              else if ( v90 <= 0x10000 )
              {
                v92 = v88 + (v88 >> 1) + 4;
                v130 = *(_DWORD *)(v4 + 108);
              }
              else
              {
                if ( v88 == 0x10000 )
                  goto LABEL_96;
                v130 = *(_DWORD *)(v4 + 108);
                v92 = 0x10000;
                v90 = 0x10000;
              }
              v85 = sub_6F773B30(v89, 1, v130, v92, v91, &v157);
              v93 = v157;
              *(_DWORD *)(v4 + 100) = v85;
              if ( v93 )
                goto LABEL_96;
              *(_DWORD *)(v4 + 108) = v90;
              v87 = *(_DWORD *)(v4 + 104);
            }
            *(_DWORD *)(v4 + 104) = v87 + 1;
            v85[v87] = *(_BYTE *)(*(_DWORD *)(v4 + 92) + v81 - 256);
            v86 = *(_DWORD *)(v4 + 88);
            v81 = *(_WORD *)(v86 + 2 * v81 - 512);
            if ( v81 <= 0xFF )
              goto LABEL_140;
            if ( !v86 )
              goto LABEL_96;
          }
        }
        goto LABEL_96;
      }
      v47 = v136;
      *(_DWORD *)(v4 + 68) = 0;
      v44 = 1;
      *(_BYTE *)(v4 + 44) = 1;
      v145 = 0;
      v46 = 0;
      v143 = 0;
    }
    if ( *(_DWORD *)(v4 + 72) <= v46 )
    {
LABEL_87:
      v54 = v45 + 1;
      v38 = v45 + 1 < *(_DWORD *)(v4 + 52);
      *(_DWORD *)(v4 + 64) = v45 + 1;
      if ( v38 )
        v55 = (1 << v54) - 256;
      else
        v55 = *(_DWORD *)(v4 + 60) + 1;
      *(_DWORD *)(v4 + 72) = v55;
      if ( !v44 )
        goto LABEL_91;
    }
    *(_DWORD *)(v4 + 64) = 9;
    *(_DWORD *)(v4 + 72) = 256;
    v54 = 9;
    *(_BYTE *)(v4 + 44) = 0;
    goto LABEL_91;
  }
  v6 = *(_DWORD *)(v4 + 4284);
  if ( v5 - a2 > *(_DWORD *)(v4 + 4284) - (v4 + 184) )
  {
    if ( sub_6F771FF0(*(_DWORD *)v4, 0) )
      return 0;
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    *(_BYTE *)(v4 + 44) = 0;
    *(_DWORD *)(v4 + 4288) = v4 + 4280;
    *(_DWORD *)(v4 + 4284) = v4 + 4280;
    v5 = 0;
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 104) = 0;
    *(_DWORD *)(v4 + 64) = 9;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 4280) = 0;
    goto LABEL_15;
  }
  *(_DWORD *)(v4 + 4280) = a2;
  *(_DWORD *)(v4 + 4284) = a2 - v5 + v6;
LABEL_4:
  if ( !a4 )
    return 0;
  v7 = *(_DWORD *)(v4 + 4288);
  v8 = *(const void **)(v4 + 4284);
  v146 = 0;
  v152 = v4 + 184;
  v148 = (void *)(v4 + 20);
  v9 = v4;
LABEL_6:
  v10 = v7 - (_DWORD)v8;
  if ( v10 > a4 )
    v10 = a4;
  memcpy((void *)(v146 + a3), v8, v10);
  *(_DWORD *)(v9 + 4284) += v10;
  *(_DWORD *)(v9 + 4280) += v10;
  v11 = a4 == v10;
  a4 -= v10;
  v146 += v10;
  if ( v11 )
    return v146;
  *(_DWORD *)(v9 + 4284) = v152;
  v144 = *(_DWORD *)(v9 + 80);
  v142 = *(_DWORD *)(v9 + 76);
  v150 = *(_DWORD *)(v9 + 84);
  v12 = *(_DWORD *)(v9 + 12);
  if ( v12 == 1 )
  {
    v26 = *(_DWORD *)(v9 + 68);
    v23 = 0;
LABEL_42:
    v27 = v26;
    v28 = *(_BYTE *)(v9 + 44);
    v154 = v23;
    v127 = *(_DWORD *)(v9 + 64);
    v29 = *(_DWORD *)(v9 + 36);
    while ( 1 )
    {
      v37 = v127;
      if ( v28 )
      {
        if ( v27 < *(_DWORD *)(v9 + 72) )
          goto LABEL_58;
      }
      else if ( *(_DWORD *)(v9 + 40) <= v29 )
      {
        if ( *(_DWORD *)(v9 + 72) > v27 )
        {
          if ( *(_DWORD *)(v9 + 16) )
          {
LABEL_65:
            v23 = v154;
            goto LABEL_66;
          }
          goto LABEL_60;
        }
      }
      else if ( *(_DWORD *)(v9 + 72) > v27 )
      {
        v30 = v29 >> 3;
        v31 = v9 + 12 + (v29 >> 3) + 8;
        v32 = v29 & 7;
        v33 = 8 - v32;
        goto LABEL_46;
      }
      v37 = v127 + 1;
      v38 = v127 + 1 < *(_DWORD *)(v9 + 52);
      *(_DWORD *)(v9 + 64) = v127 + 1;
      if ( v38 )
        v39 = (1 << v37) - 256;
      else
        v39 = *(_DWORD *)(v9 + 60) + 1;
      *(_DWORD *)(v9 + 72) = v39;
      if ( v28 )
      {
LABEL_58:
        *(_DWORD *)(v9 + 64) = 9;
        *(_DWORD *)(v9 + 72) = 256;
        v37 = 9;
        *(_BYTE *)(v9 + 44) = 0;
      }
      if ( *(_DWORD *)(v9 + 16) )
        goto LABEL_65;
LABEL_60:
      v31 = (int)v148;
      v135 = v37;
      v40 = sub_6F7721D0(*(_DWORD *)(v9 + 176), v148, v37);
      v41 = *(_DWORD *)(v9 + 64);
      *(_DWORD *)(v9 + 48) += v40;
      *(_DWORD *)(v9 + 36) = 0;
      v127 = v41;
      *(_DWORD *)(v9 + 16) = v40 < v41;
      *(_DWORD *)(v9 + 40) = 1 - v41 + 8 * v40;
      if ( !v40 )
        goto LABEL_65;
      v33 = 8;
      LOBYTE(v32) = 0;
      v30 = 0;
      v29 = 0;
      v37 = v135;
LABEL_46:
      v34 = v37 + v29;
      v35 = v37 - v33;
      *(_DWORD *)(v9 + 36) = v34;
      v134 = v34;
      v36 = (signed int)*(_BYTE *)(v9 + v30 + 20) >> v32;
      if ( v35 > 7 )
      {
        v35 -= 8;
        v139 = (_BYTE *)(v31 + 2);
        v42 = v33;
        LOBYTE(v33) = 16 - v32;
        v36 |= *(_BYTE *)(v31 + 1) << v42;
      }
      else
      {
        v139 = (_BYTE *)(v31 + 1);
      }
      if ( v35 )
        v36 |= (*v139 & ((1 << v35) - 1)) << v33;
      if ( v36 != 256 )
      {
        v23 = v154;
        v68 = v36;
        if ( v36 <= 255 )
        {
          v150 = v36;
          goto LABEL_121;
        }
        if ( (unsigned int)(v36 - 256) < *(_DWORD *)(v9 + 68) )
        {
          v150 = v36;
LABEL_126:
          if ( *(_DWORD *)(v9 + 88) )
          {
            v141 = v23;
            while ( 1 )
            {
              v74 = *(_DWORD *)(v9 + 104);
              v75 = *(_DWORD *)(v9 + 108);
              if ( v74 < v75 )
              {
                v72 = *(char **)(v9 + 100);
              }
              else
              {
                v76 = *(_DWORD *)(v9 + 180);
                v77 = v75 + (v75 >> 1) + 4;
                v78 = *(char **)(v9 + 100);
                if ( v78 == (char *)(v9 + 112) )
                {
                  *(_DWORD *)(v9 + 100) = 0;
                  if ( v77 > 0x10000 )
                    v77 = 0x10000;
                  v129 = 0;
                  v78 = 0;
                  v79 = v77;
                }
                else if ( v77 <= 0x10000 )
                {
                  v79 = v75 + (v75 >> 1) + 4;
                  v129 = *(_DWORD *)(v9 + 108);
                }
                else
                {
                  if ( v75 == 0x10000 )
                    goto LABEL_157;
                  v129 = *(_DWORD *)(v9 + 108);
                  v79 = 0x10000;
                  v77 = 0x10000;
                }
                v72 = sub_6F773B30(v76, 1, v129, v79, v78, &v157);
                v80 = v157;
                *(_DWORD *)(v9 + 100) = v72;
                if ( v80 )
                {
LABEL_157:
                  v23 = v141;
                  goto LABEL_66;
                }
                *(_DWORD *)(v9 + 108) = v77;
                v74 = *(_DWORD *)(v9 + 104);
              }
              *(_DWORD *)(v9 + 104) = v74 + 1;
              v72[v74] = *(_BYTE *)(*(_DWORD *)(v9 + 92) + v68 - 256);
              v73 = *(_DWORD *)(v9 + 88);
              v68 = *(_WORD *)(v73 + 2 * v68 - 512);
              if ( v68 <= 0xFF )
                break;
              if ( !v73 )
                goto LABEL_157;
            }
            v23 = v141;
            goto LABEL_121;
          }
          goto LABEL_66;
        }
        v150 = v36;
        if ( (unsigned int)(v36 - 256) > *(_DWORD *)(v9 + 68) )
          goto LABEL_66;
LABEL_168:
        v101 = *(_DWORD *)(v9 + 104);
        v102 = *(_DWORD *)(v9 + 108);
        if ( v101 < v102 )
        {
          v103 = *(char **)(v9 + 100);
          goto LABEL_170;
        }
        v116 = v102 + (v102 >> 1) + 4;
        v133 = *(_DWORD *)(v9 + 180);
        v117 = *(char **)(v9 + 100);
        if ( v117 == (char *)(v9 + 112) )
        {
          *(_DWORD *)(v9 + 100) = 0;
          if ( v116 > 0x10000 )
            v116 = 0x10000;
          v119 = 0;
          v117 = 0;
          v118 = v116;
        }
        else
        {
          v118 = v102 + (v102 >> 1) + 4;
          v119 = *(_DWORD *)(v9 + 108);
          if ( v116 > 0x10000 )
          {
            if ( v102 == 0x10000 )
              goto LABEL_66;
            v119 = *(_DWORD *)(v9 + 108);
            v118 = 0x10000;
            v116 = 0x10000;
          }
        }
        v103 = sub_6F773B30(v133, 1, v119, v118, v117, &v157);
        v120 = v157;
        *(_DWORD *)(v9 + 100) = v103;
        if ( !v120 )
        {
          *(_DWORD *)(v9 + 108) = v116;
          v101 = *(_DWORD *)(v9 + 104);
LABEL_170:
          *(_DWORD *)(v9 + 104) = v101 + 1;
          v103[v101] = v144;
          v68 = v142;
          if ( v142 > 0xFF )
            goto LABEL_126;
LABEL_121:
          v69 = *(_DWORD *)(v9 + 104);
          v70 = *(_DWORD *)(v9 + 108);
          if ( v70 > v69 )
          {
            v71 = *(char **)(v9 + 100);
LABEL_123:
            v144 = v68;
            *(_DWORD *)(v9 + 104) = v69 + 1;
            v71[v69] = v68;
            v24 = v152;
            *(_DWORD *)(v9 + 12) = 2;
            goto LABEL_39;
          }
          v104 = *(char **)(v9 + 100);
          v131 = *(_DWORD *)(v9 + 180);
          v105 = v70 + (v70 >> 1) + 4;
          if ( v104 == (char *)(v9 + 112) )
          {
            *(_DWORD *)(v9 + 100) = 0;
            if ( v105 > 0x10000 )
              v105 = 0x10000;
            v138 = 0;
            v104 = 0;
            v106 = v105;
            goto LABEL_179;
          }
          if ( v105 > 0x10000 )
          {
            if ( v70 != 0x10000 )
            {
              v138 = *(_DWORD *)(v9 + 108);
              v106 = 0x10000;
              v105 = 0x10000;
LABEL_179:
              v71 = sub_6F773B30(v131, 1, v138, v106, v104, &v157);
              v107 = v157;
              *(_DWORD *)(v9 + 100) = v71;
              if ( !v107 )
              {
                *(_DWORD *)(v9 + 108) = v105;
                v69 = *(_DWORD *)(v9 + 104);
                goto LABEL_123;
              }
            }
            v144 = v68;
            goto LABEL_66;
          }
          v106 = v70 + (v70 >> 1) + 4;
          v138 = *(_DWORD *)(v9 + 108);
          goto LABEL_179;
        }
LABEL_66:
        *(_DWORD *)(v9 + 12) = 3;
        *(_DWORD *)(v9 + 76) = v142;
        *(_DWORD *)(v9 + 80) = v144;
        *(_DWORD *)(v9 + 84) = v150;
        v8 = *(const void **)(v9 + 4284);
        v7 = (int)v8 + v23;
        *(_DWORD *)(v9 + 4288) = (char *)v8 + v23;
        if ( !v23 )
          return v146;
        goto LABEL_6;
      }
      if ( !*(_DWORD *)(v9 + 56) )
      {
        v23 = v154;
        v68 = 256;
        v150 = 256;
        if ( *(_DWORD *)(v9 + 68) )
          goto LABEL_126;
        goto LABEL_168;
      }
      v29 = v134;
      *(_DWORD *)(v9 + 68) = 0;
      v28 = 1;
      *(_BYTE *)(v9 + 44) = 1;
      v144 = 0;
      v27 = 0;
      v142 = 0;
    }
  }
  if ( v12 >= 1 )
  {
    if ( v12 != 2 )
    {
      *(_DWORD *)(v9 + 4288) = v152;
      return v146;
    }
    v23 = 0;
    v24 = v152;
LABEL_39:
    while ( 1 )
    {
      v25 = *(_DWORD *)(v9 + 104);
      if ( !v25 )
        break;
      *(_DWORD *)(v9 + 104) = v25 - 1;
      *(_BYTE *)(v24 + v23++) = *(_BYTE *)(*(_DWORD *)(v9 + 100) + v25 - 1);
      if ( v23 == 4096 )
      {
        *(_DWORD *)(v9 + 76) = v142;
        *(_DWORD *)(v9 + 80) = v144;
        *(_DWORD *)(v9 + 84) = v150;
        v8 = *(const void **)(v9 + 4284);
        v7 = (int)v8 + 4096;
        *(_DWORD *)(v9 + 4288) = (char *)v8 + 4096;
        goto LABEL_6;
      }
    }
    v26 = *(_DWORD *)(v9 + 68);
    if ( v26 < *(_DWORD *)(v9 + 60) )
    {
      v63 = *(_DWORD *)(v9 + 96);
      if ( v26 >= v63 )
      {
        if ( v63 )
        {
          v97 = (v63 >> 2) + v63;
          v98 = (v63 >> 2) + v63;
        }
        else
        {
          v98 = 512;
          v97 = 512;
        }
        v99 = sub_6F773B30(*(_DWORD *)(v9 + 180), 3, v63, v98, *(char **)(v9 + 88), &v157);
        v100 = v157;
        *(_DWORD *)(v9 + 88) = v99;
        if ( v100 )
          goto LABEL_66;
        *(_DWORD *)(v9 + 92) = &v99[2 * v97];
        memmove(&v99[2 * v97], &v99[2 * v63], v63);
        *(_DWORD *)(v9 + 96) = v97;
        v26 = *(_DWORD *)(v9 + 68);
      }
      *(_WORD *)(*(_DWORD *)(v9 + 88) + 2 * v26) = v142;
      *(_BYTE *)(*(_DWORD *)(v9 + 92) + v26) = v144;
      v26 = *(_DWORD *)(v9 + 68) + 1;
      *(_DWORD *)(v9 + 68) = v26;
    }
    *(_DWORD *)(v9 + 12) = 1;
    v142 = v150;
    goto LABEL_42;
  }
  if ( sub_6F771FF0(*(_DWORD *)(v9 + 176), 2u)
    || sub_6F7721D0(*(_DWORD *)(v9 + 176), &v157, 1u) != 1
    || (v64 = v157 & 0x1F,
        v65 = v157 & 0x80,
        *(_DWORD *)(v9 + 56) = v65,
        *(_DWORD *)(v9 + 52) = v64,
        *(_DWORD *)(v9 + 60) = (1 << v64) - 256,
        v64 > 0x10u) )
  {
    v43 = v9;
    goto LABEL_71;
  }
  *(_DWORD *)(v9 + 64) = 9;
  *(_DWORD *)(v9 + 68) = v65 != 0;
  v66 = (1 << v64) - 255;
  if ( v64 > 9u )
    v66 = 256;
  *(_DWORD *)(v9 + 72) = v66;
  v67 = sub_6F7D0010(v9 + 12);
  if ( v67 <= 0xFF )
  {
    *(_BYTE *)(v9 + 184) = v67;
    *(_DWORD *)(v9 + 12) = 1;
    v23 = 1;
    v26 = *(_DWORD *)(v9 + 68);
    v142 = v67;
    v144 = v67;
    v150 = 0;
    goto LABEL_42;
  }
  v43 = v9;
  v150 = 0;
LABEL_71:
  *(_DWORD *)(v43 + 12) = 3;
  *(_DWORD *)(v43 + 76) = v142;
  *(_DWORD *)(v43 + 80) = v144;
  *(_DWORD *)(v43 + 84) = v150;
  *(_DWORD *)(v43 + 4288) = *(_DWORD *)(v43 + 4284);
  return v146;
}
