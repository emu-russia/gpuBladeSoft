_DWORD *__usercall sub_6F77E350@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, char a6)
{
  int v6; // esi@1
  int v7; // ebx@1
  int v8; // eax@2
  _DWORD *result; // eax@4
  unsigned int v10; // ebx@8
  int v11; // ebp@12
  unsigned int v12; // ebp@15
  int v13; // edi@16
  unsigned int v14; // ecx@16
  int v15; // edx@16
  int v16; // eax@16
  int v17; // eax@20
  unsigned int v18; // eax@21
  int *v19; // edi@21
  unsigned int v20; // edx@23
  unsigned int v21; // edi@23
  int v22; // ebp@26
  int v23; // edi@28
  int v24; // eax@29
  int v25; // ebp@29
  int v26; // eax@29
  int v27; // ecx@29
  int v28; // ebx@30
  int v29; // edx@30
  int v30; // eax@32
  int v31; // eax@33
  unsigned __int8 v32; // al@34
  int v33; // eax@37
  int v34; // eax@39
  unsigned int v35; // edi@40
  int v36; // ebp@40
  unsigned int v37; // ecx@40
  unsigned int v38; // esi@41
  int v39; // edx@44
  int v40; // ebx@44
  int v41; // eax@44
  int v42; // edx@46
  int v43; // ebx@50
  int v44; // edx@61
  int v45; // ebx@61
  int v46; // eax@61
  int v47; // ecx@61
  int v48; // ebp@65
  unsigned int v49; // edi@65
  int v50; // eax@66
  unsigned int v51; // ebp@66
  unsigned int i; // eax@66
  unsigned int v53; // edx@68
  _DWORD *v54; // eax@69
  int v55; // edx@72
  int v56; // eax@72
  int v57; // ecx@72
  int v58; // ebx@72
  unsigned int v59; // eax@77
  int v60; // edx@78
  unsigned int v61; // ecx@78
  int v62; // ebx@82
  unsigned int v63; // eax@83
  _DWORD *v64; // ebp@84
  int v65; // eax@87
  bool v66; // zf@87
  int v67; // ebx@87
  unsigned int v68; // eax@104
  unsigned int v69; // edx@105
  int v70; // ecx@107
  int v71; // edi@114
  signed __int64 v72; // rax@114
  int v73; // ecx@115
  _BYTE *v74; // edx@118
  int v75; // eax@118
  int v76; // edi@120
  signed int v77; // ebp@124
  unsigned int v78; // ebx@124
  int *v79; // edi@124
  signed int v80; // ecx@125
  signed int v81; // ecx@128
  int v82; // ecx@132
  unsigned int v83; // edx@132
  char *v84; // eax@133
  int v85; // ST28_4@134
  unsigned int v86; // edx@136
  _DWORD *v87; // ecx@136
  int v88; // ebx@141
  _BYTE *v89; // edx@141
  int v90; // edi@144
  int v91; // edx@150
  int v92; // ebx@150
  int v93; // eax@150
  int v94; // ecx@150
  int v95; // eax@164
  unsigned int v96; // ebx@165
  unsigned int v97; // ecx@165
  unsigned int v98; // edi@166
  unsigned int v99; // ecx@166
  unsigned int v100; // edi@166
  int v101; // edx@169
  int v102; // edx@178
  int v103; // eax@178
  int v104; // eax@179
  unsigned int v105; // edx@190
  _DWORD *v106; // eax@191
  _DWORD *v107; // eax@200
  int v108; // ecx@205
  int v109; // ecx@205
  int v110; // edx@209
  int v111; // eax@209
  int v112; // eax@215
  unsigned __int8 v113; // [sp+20h] [bp-9Ch]@8
  int v114; // [sp+20h] [bp-9Ch]@41
  int v115; // [sp+20h] [bp-9Ch]@66
  int v116; // [sp+24h] [bp-98h]@4
  int v117; // [sp+24h] [bp-98h]@72
  int *v118; // [sp+28h] [bp-94h]@8
  int v119; // [sp+28h] [bp-94h]@44
  int v120; // [sp+28h] [bp-94h]@72
  unsigned int v121; // [sp+28h] [bp-94h]@190
  int v122; // [sp+2Ch] [bp-90h]@1
  int v123; // [sp+2Ch] [bp-90h]@44
  int v124; // [sp+2Ch] [bp-90h]@66
  int v125; // [sp+2Ch] [bp-90h]@198
  int v126; // [sp+30h] [bp-8Ch]@1
  int *v127; // [sp+34h] [bp-88h]@14
  int v128; // [sp+34h] [bp-88h]@44
  signed int v129; // [sp+34h] [bp-88h]@198
  unsigned int v130; // [sp+38h] [bp-84h]@15
  bool v131; // [sp+3Ch] [bp-80h]@14
  int v132; // [sp+3Ch] [bp-80h]@115
  unsigned int v133; // [sp+44h] [bp-78h]@26
  unsigned int v134; // [sp+44h] [bp-78h]@141
  unsigned int v135; // [sp+48h] [bp-74h]@29
  int v136; // [sp+5Ch] [bp-60h]@12
  int v137; // [sp+60h] [bp-5Ch]@39
  int v138; // [sp+64h] [bp-58h]@39
  int v139; // [sp+68h] [bp-54h]@39
  int v140; // [sp+6Ch] [bp-50h]@39
  unsigned int v141; // [sp+70h] [bp-4Ch]@6
  int v142; // [sp+74h] [bp-48h]@6
  int v143; // [sp+78h] [bp-44h]@6
  int v144; // [sp+7Ch] [bp-40h]@6
  int v145; // [sp+80h] [bp-3Ch]@6
  _DWORD *v146; // [sp+84h] [bp-38h]@4
  int v147; // [sp+88h] [bp-34h]@4
  int v148; // [sp+8Ch] [bp-30h]@4
  int v149; // [sp+90h] [bp-2Ch]@4
  int v150; // [sp+94h] [bp-28h]@4
  int v151; // [sp+98h] [bp-24h]@4
  int v152; // [sp+9Ch] [bp-20h]@4

  v6 = a1;
  v7 = a3;
  v126 = a2;
  v122 = *(_DWORD *)a1;
  if ( !a6 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(v8 + 12) )
    {
      v86 = 0;
      v87 = *(_DWORD **)a4;
      do
      {
        (&v146)[v86] = 0;
        ++v86;
      }
      while ( v86 < 7 );
      v146 = v87;
      sub_6F77E350(v8, v126, v7, (int)&v146, a5, 1);
    }
  }
  if ( !*(_BYTE *)(a4 + 4) )
  {
    v68 = *(_DWORD *)(v126 + 20) + *(_DWORD *)(v7 + 20);
    if ( v68 > 0x60 )
    {
      result = *(_DWORD **)a4;
      if ( !*(_DWORD *)a4 )
        return result;
      if ( *result )
        return result;
      *result = 18;
      result = (_DWORD *)a4;
      if ( !*(_BYTE *)(a4 + 4) )
        return result;
    }
    else
    {
      v69 = (v68 + 7) >> 3;
      *(_DWORD *)(a4 + 8) = v68;
      *(_DWORD *)(a4 + 12) = v69;
      *(_BYTE *)(a4 + 4) = 1;
      *(_BYTE *)(a4 + 5) = 1;
      if ( v68 )
      {
        if ( v69 )
        {
          v70 = a4 + 16;
          if ( v69 >= 4 )
          {
            *(_DWORD *)(a4 + 16) = -1;
            *(_DWORD *)(v70 + v69 - 4) = -1;
            v96 = (a4 + 20) & 0xFFFFFFFC;
            v97 = (v69 + v70 - v96) & 0xFFFFFFFC;
            if ( v97 >= 4 )
            {
              v98 = v97;
              v99 = 0;
              v100 = v98 & 0xFFFFFFFC;
              do
              {
                *(_DWORD *)(v96 + v99) = -1;
                v99 += 4;
              }
              while ( v99 < v100 );
            }
          }
          else if ( v69 )
          {
            *(_BYTE *)(a4 + 16) = -1;
            if ( v69 & 2 )
              *(_WORD *)(v70 + v69 - 2) = -1;
          }
        }
        *(_BYTE *)(a4 + v69 + 15) &= -(char)(1 << (-(char)v68 & 7));
      }
    }
  }
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  v146 = *(_DWORD **)a4;
  v147 = *(_DWORD *)(a4 + 4);
  v148 = *(_DWORD *)(a4 + 8);
  v149 = *(_DWORD *)(a4 + 12);
  v150 = *(_DWORD *)(a4 + 16);
  v151 = *(_DWORD *)(a4 + 20);
  v152 = *(_DWORD *)(a4 + 24);
  result = *(_DWORD **)(v126 + 20);
  v116 = *(_DWORD *)(v126 + 20);
  if ( *(_DWORD *)(a4 + 8) < (unsigned int)result )
    return result;
  if ( *(_BYTE *)(v122 + 205) )
  {
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v145 = 0;
    sub_6F779FA0(v6, (_DWORD *)(v122 + 244), &v141);
    sub_6F779FA0(v6, &v141, (_DWORD *)(v122 + 224));
  }
  if ( v116 )
  {
    v113 = -128;
    v10 = 0;
    v118 = &v150;
    while ( 1 )
    {
      if ( !(v113 & *(_BYTE *)v118) )
        goto LABEL_9;
      sub_6F77A510((int)&v136, v126, v10, v122, a5, *(_DWORD *)(v6 + 16), 1);
      sub_6F77A510((int)&v141, v126, v10, v122, a5, *(_DWORD *)(v6 + 16), 0);
      v11 = v136;
      if ( v136 & 0x10 )
      {
LABEL_93:
        v127 = &v136;
        v131 = v141 != 0;
LABEL_15:
        v130 = *(_DWORD *)(v6 + 20);
        v12 = *(_DWORD *)(v6 + 20);
        if ( !*(_DWORD *)(v6 + 20) )
        {
          v17 = *(_DWORD *)(v6 + 4);
          v20 = 0;
          if ( *(_BYTE *)(v17 + 12) )
          {
            if ( !(*(_BYTE *)v127 & 0x10) )
            {
              v15 = v127[2];
              goto LABEL_113;
            }
LABEL_101:
            v130 = 0;
            v21 = 0;
            v20 = v12;
            if ( v12 > 0 )
              goto LABEL_24;
          }
          goto LABEL_102;
        }
        v13 = *(_DWORD *)(v6 + 36);
        v14 = 0;
        v15 = v127[2];
        v16 = v6 + 56;
        if ( v15 > v13 )
        {
          while ( ++v14 != v12 )
          {
            v16 += 20;
            v13 = *(_DWORD *)(v16 - 20);
            if ( v15 <= v13 )
              goto LABEL_94;
          }
          v17 = *(_DWORD *)(v6 + 4);
          if ( *(_BYTE *)(v17 + 12) )
          {
            v19 = v127;
            if ( !(*(_BYTE *)v127 & 0x10) )
            {
LABEL_113:
              if ( v131 )
              {
                v71 = sub_6F779E90(v17, (v143 + v15) / 2);
                v72 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v6 + 16)
                                                                    * (signed __int64)((v143 - v127[2]) / 2)) >> 32) >> 31)
                                   + 0x8000)
                    + *(_DWORD *)(v6 + 16) * (signed __int64)((v143 - v127[2]) / 2);
                LODWORD(v72) = (HIDWORD(v72) << 16) + ((unsigned int)v72 >> 16);
                v14 = v130;
                v127[3] = v71 - v72;
                v144 = v71 + v72;
              }
              else
              {
                v95 = sub_6F779E90(v17, v15);
                v14 = v130;
                v127[3] = v95;
              }
              goto LABEL_99;
            }
            v18 = *(_DWORD *)(v6 + 20);
          }
          else
          {
            v18 = *(_DWORD *)(v6 + 20);
            v19 = v127;
          }
          goto LABEL_22;
        }
        v14 = 0;
LABEL_94:
        if ( v15 != v13 && (!v131 || v143 < v13) && !(*(_BYTE *)(v6 + 20 * v14 + 28) & 8) )
        {
          v17 = *(_DWORD *)(v6 + 4);
          if ( *(_BYTE *)(v17 + 12) && !(*(_BYTE *)v127 & 0x10) )
          {
            v130 = v14;
            goto LABEL_113;
          }
LABEL_99:
          if ( !v14 )
          {
            v12 = *(_DWORD *)(v6 + 20);
            goto LABEL_101;
          }
          v130 = v14;
          v18 = v14;
          v19 = v127;
LABEL_22:
          if ( v19[3] < *(_DWORD *)(v6 + 4 * (5 * v18 - 5) + 40) )
            goto LABEL_34;
          v20 = *(_DWORD *)(v6 + 20);
          v21 = v130;
          if ( v130 < v20 )
          {
LABEL_24:
            if ( v131 )
            {
              if ( v144 > *(_DWORD *)(v6 + 20 * v21 + 40) )
                goto LABEL_34;
              v22 = v20 - 1;
              v133 = v20++;
            }
            else
            {
              if ( v127[3] > *(_DWORD *)(v6 + 20 * v21 + 40) )
                goto LABEL_34;
              v22 = v20 - 1;
              v133 = v20;
            }
            goto LABEL_27;
          }
LABEL_102:
          v22 = v20 - 1;
          v133 = v20;
          if ( v131 )
            ++v20;
LABEL_27:
          if ( v20 <= 0xBF )
          {
            v23 = v133 - v130 - 1;
            if ( v133 != v130 )
            {
              v24 = 5 * v22;
              v135 = v10;
              v25 = -20 * v22;
              v26 = v6 + 4 * v24 + 28;
              v27 = 20 * v20;
              do
              {
                v28 = *(_DWORD *)v26;
                v29 = v26 + v25;
                --v23;
                v26 -= 20;
                *(_DWORD *)(v29 + v27) = v28;
                *(_DWORD *)(v29 + v27 + 4) = *(_DWORD *)(v26 + 24);
                *(_DWORD *)(v29 + v27 + 8) = *(_DWORD *)(v26 + 28);
                *(_DWORD *)(v29 + v27 + 12) = *(_DWORD *)(v26 + 32);
                *(_DWORD *)(v29 + v27 + 16) = *(_DWORD *)(v26 + 36);
              }
              while ( v23 != -1 );
              v10 = v135;
            }
            v30 = v6 + 20 * v130 + 16;
            *(_DWORD *)(v30 + 12) = *v127;
            *(_DWORD *)(v30 + 16) = v127[1];
            *(_DWORD *)(v30 + 20) = v127[2];
            *(_DWORD *)(v30 + 24) = v127[3];
            *(_DWORD *)(v30 + 28) = v127[4];
            *(_DWORD *)(v6 + 20) = v133 + 1;
            if ( v131 )
            {
              v31 = v6 + 4 * (5 * v130 + 5) + 16;
              *(_DWORD *)(v31 + 12) = v141;
              *(_DWORD *)(v31 + 16) = v142;
              *(_DWORD *)(v31 + 20) = v143;
              *(_DWORD *)(v31 + 24) = v144;
              *(_DWORD *)(v31 + 28) = v145;
              *(_DWORD *)(v6 + 20) = v133 + 2;
            }
          }
        }
LABEL_34:
        v32 = v113;
        v113 >>= 1;
        *(_BYTE *)v118 &= ~v32;
        if ( (v10 & 7) == 7 )
          goto LABEL_35;
LABEL_10:
        if ( ++v10 == v116 )
          goto LABEL_36;
      }
      else
      {
        if ( v141 & 0x10 )
          goto LABEL_14;
        v73 = *(_DWORD *)(v122 + 200);
        v132 = *(_DWORD *)(v122 + 216);
        if ( v73 )
        {
          if ( v136 & 5 )
          {
            if ( v141 & 0xA )
            {
              v101 = v122 + 264;
              v75 = 0;
              while ( 1 )
              {
                if ( *(_BYTE *)(v101 + 16) )
                {
                  if ( *(_DWORD *)v101 - v132 <= v138 )
                  {
                    v90 = *(_DWORD *)(v101 + 4);
                    if ( v138 <= v132 + v90 )
                    {
                      v11 = v136;
                      goto LABEL_187;
                    }
                  }
                }
                else
                {
                  v76 = *(_DWORD *)v101;
                  if ( *(_DWORD *)v101 - v132 <= v143 && v143 <= v132 + *(_DWORD *)(v101 + 4) )
                  {
                    v11 = v136;
                    goto LABEL_177;
                  }
                }
                ++v75;
                v101 += 20;
                if ( v75 == v73 )
                  goto LABEL_9;
              }
            }
            v134 = v10;
            v88 = *(_DWORD *)(v122 + 216);
            v89 = (_BYTE *)(v122 + 280);
            v75 = 0;
            while ( 1 )
            {
              if ( *v89 )
              {
                if ( v138 >= *((_DWORD *)v89 - 4) - v88 )
                {
                  v90 = *((_DWORD *)v89 - 3);
                  if ( v138 <= v88 + v90 )
                    break;
                }
              }
              ++v75;
              v89 += 20;
              if ( v73 == v75 )
              {
                v10 = v134;
                goto LABEL_9;
              }
            }
            v10 = v134;
            v11 = v136;
LABEL_187:
            if ( *(_BYTE *)(v122 + 204) )
            {
              v104 = *(_DWORD *)(v122 + 20 * v75 + 276) - v139;
            }
            else if ( v90 - v138 < *(_DWORD *)(v122 + 212) )
            {
              v112 = v139 + 0x8000;
              LOWORD(v112) = 0;
              v104 = v112 - v139;
            }
            else
            {
              v110 = v139 + 0x8000;
              LOWORD(v110) = 0;
              v111 = *(_DWORD *)(v122 + 20 * v75 + 276) - 0x10000;
              if ( v111 > v110 )
                v111 = v110;
              v104 = v111 - v139;
            }
LABEL_189:
            v11 |= 0x10u;
            v139 += v104;
            v136 = v11;
LABEL_180:
            if ( v141 )
            {
              v144 += v104;
              v141 |= 0x10u;
            }
LABEL_14:
            v131 = 0;
            v127 = (int *)&v141;
            if ( !v11 )
              goto LABEL_15;
            goto LABEL_93;
          }
          if ( v141 & 0xA )
          {
            v74 = (_BYTE *)(v122 + 280);
            v75 = 0;
            while ( 1 )
            {
              if ( !*v74 )
              {
                v76 = *((_DWORD *)v74 - 4);
                if ( v143 >= *((_DWORD *)v74 - 4) - v132 && v143 <= v132 + *((_DWORD *)v74 - 3) )
                  break;
              }
              ++v75;
              v74 += 20;
              if ( v73 == v75 )
                goto LABEL_9;
            }
            v11 = v136;
LABEL_177:
            if ( *(_BYTE *)(v122 + 204) )
            {
              v102 = v144;
              v103 = *(_DWORD *)(v122 + 20 * v75 + 276);
            }
            else
            {
              v102 = v144;
              if ( v143 - v76 < *(_DWORD *)(v122 + 212) )
              {
                v103 = v144 + 0x8000;
                LOWORD(v103) = 0;
              }
              else
              {
                v108 = *(_DWORD *)(v122 + 20 * v75 + 276);
                v103 = v144 + 0x8000;
                LOWORD(v103) = 0;
                v109 = v108 + 0x10000;
                if ( v109 >= v103 )
                  v103 = v109;
              }
            }
            v104 = v103 - v102;
            if ( !v11 )
              goto LABEL_180;
            goto LABEL_189;
          }
        }
LABEL_9:
        v113 >>= 1;
        if ( (v10 & 7) != 7 )
          goto LABEL_10;
LABEL_35:
        v118 = (int *)((char *)v118 + 1);
        ++v10;
        v113 = -128;
        if ( v10 == v116 )
        {
LABEL_36:
          if ( a6 )
            goto LABEL_37;
          v77 = -128;
          v78 = 0;
          v79 = &v150;
          while ( 2 )
          {
            if ( (unsigned __int8)v77 & *(_BYTE *)v79 )
            {
              sub_6F77A510((int)&v136, v126, v78, v122, a5, *(_DWORD *)(v6 + 16), 1);
              sub_6F77A510((int)&v141, v126, v78, v122, a5, *(_DWORD *)(v6 + 16), 0);
              sub_6F779FA0(v6, &v136, &v141);
              v81 = v77;
              LOBYTE(v81) = (unsigned __int8)v77 >> 1;
              v77 = v81;
              if ( (v78 & 7) == 7 )
              {
LABEL_129:
                v79 = (int *)((char *)v79 + 1);
                v77 = -128;
              }
            }
            else
            {
              v80 = v77;
              LOBYTE(v80) = (unsigned __int8)v77 >> 1;
              v77 = v80;
              if ( (v78 & 7) == 7 )
                goto LABEL_129;
            }
            if ( ++v78 == v116 )
              goto LABEL_40;
            continue;
          }
        }
      }
    }
  }
  if ( a6 )
  {
LABEL_37:
    v33 = *(_DWORD *)(v6 + 20);
    if ( !v33 || *(_DWORD *)(v6 + 36) > 0 || *(_DWORD *)(v6 + 4 * (5 * v33 - 5) + 36) < 0 )
    {
      v34 = *(_DWORD *)(v6 + 16);
      v137 = 0;
      v138 = 0;
      v139 = 0;
      v136 = 49;
      v140 = v34;
      v141 = 0;
      v142 = 0;
      v143 = 0;
      v144 = 0;
      v145 = 0;
      sub_6F779FA0(v6, &v136, &v141);
    }
  }
LABEL_40:
  v35 = 0;
  v36 = v6;
  *(_DWORD *)(*(_DWORD *)(v6 + 8) + 20) = 0;
  v37 = *(_DWORD *)(v6 + 20);
  if ( !v37 )
    goto LABEL_161;
  do
  {
    v114 = *(_DWORD *)(v36 + 20 * v35 + 28) & 0xC;
    v38 = v35 + 1;
    if ( !v114 )
      v38 = v35;
    if ( *(_DWORD *)(v36 + 20 * v35 + 28) & 0x10 )
    {
      if ( !v35 )
        goto LABEL_152;
      goto LABEL_150;
    }
    v39 = (unsigned __int16)*(_DWORD *)(v36 + 20 * v35 + 40);
    v123 = *(_DWORD *)(v36 + 20 * v35 + 40);
    v40 = (unsigned __int16)*(_DWORD *)(v36 + 20 * v38 + 40);
    v119 = -v39;
    v128 = -v40;
    v41 = 0;
    if ( (unsigned __int16)*(_DWORD *)(v36 + 20 * v35 + 40) )
      v41 = 0x10000 - v39;
    v42 = 0;
    if ( (unsigned __int16)*(_DWORD *)(v36 + 20 * v38 + 40) )
      v42 = 0x10000 - v40;
    if ( v41 > v42 )
      v41 = v42;
    v43 = -v40;
    if ( v119 >= v128 )
      v43 = v119;
    if ( v38 < v37 - 1 && *(_DWORD *)(v36 + 20 * (v38 + 1) + 40) < *(_DWORD *)(v36 + 20 * v38 + 40) + v41 + 0x8000 )
    {
      if ( v35 && *(_DWORD *)(v36 + 4 * (5 * v35 - 5) + 40) > v43 + v123 - 0x8000 )
      {
        v43 = 0;
      }
      else if ( v41 >= -v43 )
      {
        goto LABEL_58;
      }
      if ( *(_BYTE *)(v36 + 20 * (v38 + 1) + 28) & 0x10 )
      {
LABEL_58:
        v41 = v43;
        goto LABEL_59;
      }
      v82 = *(_DWORD *)(v36 + 8);
      v141 = v38;
      v142 = v41 - v43;
      v83 = *(_DWORD *)(v82 + 20);
      if ( v83 == *(_DWORD *)(v82 + 12) )
      {
        v105 = *(_DWORD *)(v82 + 16) + v83;
        v136 = 0;
        v121 = v105;
        if ( v105 > 0x7FFFFFFFu / *(_DWORD *)(v82 + 8)
          || (v125 = v82,
              v129 = v105 * *(_DWORD *)(v82 + 8),
              v84 = sub_6F773B30(*(_DWORD *)v82, 1, *(_DWORD *)(v82 + 24), v129, *(char **)(v82 + 28), &v136),
              v82 = v125,
              v66 = v136 == 0,
              *(_DWORD *)(v125 + 28) = v84,
              !v66) )
        {
          v106 = *(_DWORD **)(v82 + 4);
          if ( v106 && !*v106 )
            *v106 = 64;
          goto LABEL_135;
        }
        *(_DWORD *)(v125 + 12) = v121;
        *(_DWORD *)(v125 + 24) = v129;
        v83 = *(_DWORD *)(v125 + 20);
        if ( v121 < v83 )
        {
          v107 = *(_DWORD **)(v125 + 4);
          if ( v107 && !*v107 )
            *v107 = 130;
          *(_DWORD *)(v125 + 20) = v121;
          goto LABEL_135;
        }
      }
      else
      {
        v84 = *(char **)(v82 + 28);
      }
      v85 = v82;
      memcpy(&v84[*(_DWORD *)(v82 + 8) * v83], &v141, *(_DWORD *)(v82 + 8));
      ++*(_DWORD *)(v85 + 20);
LABEL_135:
      v123 = *(_DWORD *)(v36 + 20 * v35 + 40);
      goto LABEL_58;
    }
    if ( (!v35 || *(_DWORD *)(v36 + 4 * (5 * v35 - 5) + 40) <= v43 + v123 - 0x8000) && v41 > -v43 )
      v41 = v43;
LABEL_59:
    *(_DWORD *)(v36 + 20 * v35 + 40) = v41 + v123;
    if ( v114 )
    {
      *(_DWORD *)(v36 + 20 * v38 + 40) += v41;
      if ( !v35 )
        goto LABEL_61;
    }
    else if ( !v35 )
    {
LABEL_153:
      ++v35;
      goto LABEL_64;
    }
LABEL_150:
    v91 = v36 + 20 * v35;
    v92 = v36 + 4 * (5 * v35 - 5);
    v93 = *(_DWORD *)(v91 + 36);
    v94 = *(_DWORD *)(v92 + 36);
    if ( v93 != v94 )
      *(_DWORD *)(v92 + 44) = sub_6F7C9760(*(_DWORD *)(v91 + 40) - *(_DWORD *)(v92 + 40), v93 - v94);
LABEL_152:
    if ( !v114 )
      goto LABEL_153;
LABEL_61:
    v44 = v36 + 20 * v38;
    v45 = v36 + 4 * (5 * v38 - 5);
    v46 = *(_DWORD *)(v44 + 36);
    v47 = *(_DWORD *)(v45 + 36);
    if ( v46 != v47 )
      *(_DWORD *)(v45 + 44) = sub_6F7C9760(*(_DWORD *)(v44 + 40) - *(_DWORD *)(v45 + 40), v46 - v47);
    v35 += 2;
LABEL_64:
    v37 = *(_DWORD *)(v36 + 20);
  }
  while ( v37 > v35 );
  v6 = v36;
  v48 = *(_DWORD *)(v36 + 8);
  v49 = *(_DWORD *)(v48 + 20);
  if ( v49 )
  {
    v50 = *(_DWORD *)(v48 + 28);
    v115 = v48;
    v51 = *(_DWORD *)(v48 + 20);
    v124 = v50;
    for ( i = v49; ; i = *(_DWORD *)(v115 + 20) )
    {
      v53 = --v51;
      if ( v51 >= i )
      {
        v53 = 0;
        v54 = *(_DWORD **)(v115 + 4);
        if ( v54 )
        {
          if ( !*v54 )
            *v54 = 130;
        }
      }
      v55 = v124 + *(_DWORD *)(v115 + 8) * v53;
      v56 = *(_DWORD *)v55;
      v120 = *(_DWORD *)(v55 + 4);
      v57 = v6 + 20 * *(_DWORD *)v55;
      v117 = 20 * *(_DWORD *)v55;
      v58 = *(_DWORD *)(v57 + 40) + v120;
      if ( v58 + 0x7FFF < *(_DWORD *)(v6 + 4 * (5 * *(_DWORD *)v55 + 5) + 40) )
      {
        *(_DWORD *)(v57 + 40) = v58;
        if ( *(_BYTE *)(v6 + v117 + 28) & 0xC )
          *(_DWORD *)(v6 + 4 * (5 * v56 - 5) + 40) += v120;
      }
      if ( !v51 )
        break;
    }
  }
  if ( !a6 )
  {
    v59 = *(_DWORD *)(v6 + 20);
    if ( v59 )
    {
      v60 = v6 + 28;
      v61 = 0;
      do
      {
        v62 = *(_DWORD *)v60;
        if ( !(*(_DWORD *)v60 & 0x20) )
        {
          v63 = *(_DWORD *)(v60 + 4);
          if ( v63 >= *(_DWORD *)(v126 + 20) )
          {
            v64 = *(_DWORD **)(v126 + 4);
            v63 = 0;
            if ( v64 )
            {
              if ( !*v64 )
              {
                *v64 = 130;
                v62 = *(_DWORD *)v60;
              }
            }
          }
          v65 = *(_DWORD *)(v126 + 28) + *(_DWORD *)(v126 + 8) * v63;
          v66 = (v62 & 0xA) == 0;
          v67 = *(_DWORD *)(v60 + 12);
          if ( v66 )
            *(_DWORD *)(v65 + 12) = v67;
          else
            *(_DWORD *)(v65 + 16) = v67;
          *(_BYTE *)v65 = 1;
          v59 = *(_DWORD *)(v6 + 20);
        }
        ++v61;
        v60 += 20;
      }
      while ( v61 < v59 );
    }
  }
LABEL_161:
  result = (_DWORD *)a4;
  *(_BYTE *)(v6 + 12) = 1;
  *(_BYTE *)(a4 + 5) = 0;
  return result;
}
