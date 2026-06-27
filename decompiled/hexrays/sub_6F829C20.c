int __cdecl sub_6F829C20(int a1, int a2, int a3, int a4)
{
  int v4; // edx@1
  int v5; // edi@1
  int v6; // esi@1
  int v7; // ebp@1
  int v8; // ebx@1
  int v9; // edx@1
  int v10; // eax@1
  int v11; // ebx@1
  int v12; // ecx@1
  int v13; // eax@1
  int v14; // ebx@1
  int v15; // eax@1
  int v16; // eax@1
  unsigned int v17; // ebx@1
  int v18; // esi@4
  int v19; // ebx@4
  unsigned int v20; // eax@4
  int v21; // edi@4
  unsigned int v22; // ebx@7
  unsigned int v23; // esi@8
  int v24; // ebx@9
  char *v25; // esi@10
  int v26; // edi@12
  int v27; // edx@12
  signed int v28; // eax@12
  int v29; // ebp@12
  int v30; // ebx@13
  int v31; // eax@13
  int v32; // ebp@13
  int v33; // edx@13
  int v34; // eax@13
  int v35; // ebp@13
  int v36; // eax@13
  int v37; // eax@13
  int v38; // ebp@13
  int v39; // eax@13
  int v40; // eax@13
  unsigned int v41; // eax@13
  int v42; // ebx@18
  int *v43; // edi@19
  int v44; // esi@21
  int v45; // edx@21
  signed int v46; // eax@21
  int v47; // ebp@21
  int v48; // ebx@22
  int v49; // eax@22
  int v50; // ebp@22
  int v51; // edx@22
  int v52; // eax@22
  int v53; // ebp@22
  int v54; // eax@22
  int v55; // eax@22
  int v56; // ebp@22
  int v57; // eax@22
  int v58; // eax@22
  unsigned int v59; // eax@22
  int v60; // ecx@27
  int v61; // edi@29
  int v62; // ebx@29
  int v63; // eax@29
  int v64; // ebx@29
  int v65; // ecx@29
  int v66; // ebx@29
  int v67; // eax@29
  int result; // eax@29
  int v69; // esi@30
  char v70; // di@30
  char v71; // bl@30
  char v72; // bl@30
  int v73; // edi@30
  int v74; // ebx@30
  int v75; // ecx@30
  int v76; // eax@30
  char v77; // dl@30
  int v78; // edi@30
  int v79; // esi@30
  int v80; // ebx@30
  int v81; // edx@30
  int v82; // eax@30
  char v83; // dl@30
  int v84; // esi@30
  int v85; // edi@30
  int v86; // eax@30
  int v87; // edx@34
  int v88; // ebp@35
  signed int v89; // esi@37
  int v90; // edx@37
  int v91; // edi@37
  signed int v92; // eax@37
  int v93; // ebx@37
  int v94; // ebx@38
  int v95; // eax@38
  int v96; // ST48_4@38
  int v97; // ecx@38
  int v98; // eax@38
  int v99; // ST48_4@38
  int v100; // eax@38
  int v101; // eax@38
  int v102; // ST48_4@38
  int v103; // ecx@38
  int v104; // eax@38
  unsigned int v105; // eax@38
  unsigned int v106; // esi@68
  signed int v107; // ecx@70
  int v108; // edx@71
  int v109; // ebx@72
  int v110; // eax@74
  int v111; // edi@74
  int v112; // edx@74
  signed int v113; // eax@74
  int v114; // esi@74
  int v115; // esi@75
  int v116; // eax@75
  int v117; // edx@75
  int v118; // ST54_4@75
  int v119; // eax@75
  int v120; // ST54_4@75
  int v121; // eax@75
  int v122; // eax@75
  int v123; // ST54_4@75
  int v124; // eax@75
  int v125; // eax@75
  unsigned int v126; // eax@75
  int v127; // [sp+28h] [bp-194h]@1
  int v128; // [sp+2Ch] [bp-190h]@1
  int v129; // [sp+30h] [bp-18Ch]@1
  int v130; // [sp+34h] [bp-188h]@1
  int v131; // [sp+38h] [bp-184h]@1
  int v132; // [sp+3Ch] [bp-180h]@1
  signed int v133; // [sp+3Ch] [bp-180h]@10
  int v134; // [sp+3Ch] [bp-180h]@34
  int v135; // [sp+3Ch] [bp-180h]@70
  signed int v136; // [sp+40h] [bp-17Ch]@1
  signed int v137; // [sp+40h] [bp-17Ch]@70
  int v138; // [sp+44h] [bp-178h]@13
  int v139; // [sp+44h] [bp-178h]@22
  int v140; // [sp+44h] [bp-178h]@35
  int v141; // [sp+44h] [bp-178h]@71
  int v142; // [sp+48h] [bp-174h]@72
  unsigned int v143; // [sp+4Ch] [bp-170h]@1
  signed int v144; // [sp+50h] [bp-16Ch]@1
  int v145; // [sp+54h] [bp-168h]@38
  signed int v146; // [sp+58h] [bp-164h]@35
  int v147; // [sp+58h] [bp-164h]@75
  int v148; // [sp+5Ch] [bp-160h]@4
  unsigned int v149; // [sp+60h] [bp-15Ch]@9
  int *v150; // [sp+60h] [bp-15Ch]@68
  signed int v151; // [sp+64h] [bp-158h]@68
  int *v152; // [sp+68h] [bp-154h]@68
  unsigned int v153; // [sp+6Ch] [bp-150h]@68
  unsigned int v154; // [sp+74h] [bp-148h]@2
  unsigned int v155; // [sp+78h] [bp-144h]@2
  unsigned int v156; // [sp+7Ch] [bp-140h]@2
  unsigned int v157; // [sp+80h] [bp-13Ch]@2
  unsigned int v158; // [sp+84h] [bp-138h]@1
  unsigned int v159; // [sp+88h] [bp-134h]@1
  unsigned int v160; // [sp+8Ch] [bp-130h]@1
  unsigned int v161; // [sp+90h] [bp-12Ch]@1
  int v162; // [sp+94h] [bp-128h]@2
  int v163; // [sp+98h] [bp-124h]@2
  int v164; // [sp+9Ch] [bp-120h]@2
  int v165; // [sp+A0h] [bp-11Ch]@2
  int v166; // [sp+A4h] [bp-118h]@2
  int v167; // [sp+A8h] [bp-114h]@2
  int v168; // [sp+ACh] [bp-110h]@2
  int v169; // [sp+B0h] [bp-10Ch]@2
  int v170; // [sp+B4h] [bp-108h]@1
  int v171; // [sp+B8h] [bp-104h]@1
  char v172; // [sp+BCh] [bp-100h]@10
  int v173; // [sp+11Ch] [bp-A0h]@9
  int v174; // [sp+120h] [bp-9Ch]@18
  int v175[15]; // [sp+124h] [bp-98h]@1
  int v176[23]; // [sp+160h] [bp-5Ch]@1

  v132 = *(_DWORD *)(a1 + 51572);
  sub_6F8289C0(v132, (int)&v170, a2, a3, a4);
  v4 = v170;
  v144 = v170;
  memset(v175, 0, 0x7Cu);
  v136 = v171;
  v176[v171] = 1 << (v170 + 15);
  v130 = *(_DWORD *)(a1 + 492);
  v128 = *(_DWORD *)(a1 + 208);
  v131 = *(_DWORD *)(a1 + 232) + 48 * a3;
  v129 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a4 + 272) + 480);
  v5 = *(_DWORD *)(a1 + 496);
  v127 = *(_DWORD *)(a1 + 496);
  v6 = v4 + v5 * v136;
  v7 = *(_DWORD *)(a1 + 492);
  v8 = sub_6F8274A0(
         a1,
         v130 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131),
         v129 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131) + v6,
         v5);
  v158 = v8;
  v9 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 4));
  v10 = sub_6F8274A0(a1, v7 + v9, v129 + v9 + v6, v5);
  v11 = v10 + v8;
  v159 = v10;
  v12 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 8));
  v13 = sub_6F8274A0(a1, v7 + v12, v129 + v12 + v6, v5);
  v14 = v13 + v11;
  v160 = v13;
  v15 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 12));
  v16 = sub_6F8274A0(a1, v7 + v15, v129 + v15 + v6, v5);
  v17 = v16 + v14;
  v161 = v16;
  v143 = v17;
  if ( a4 == 1 )
  {
    v154 = v158;
    v155 = v159;
    v156 = v160;
    v157 = v161;
    v162 = v144;
    v163 = v136;
    v164 = v144;
    v165 = v136;
    v166 = v144;
    v167 = v136;
    v168 = v144;
    v169 = v136;
  }
  if ( v17 <= 0x100 )
  {
    v60 = v132 + 96 * a3;
    v148 = v132 + 96 * a3;
  }
  else
  {
    v18 = a4 + 32;
    v19 = v132 + 96 * a3;
    v148 = v132 + 96 * a3;
    v20 = *(_WORD *)(v19 + 2 * (a4 + 32) + 4);
    v21 = *(_BYTE *)(v19 + 32) <= 2u ? *(_BYTE *)(v19 + 32) - 3 + 3 : 3;
    if ( v21 > 0 )
    {
      v20 -= ((*(_WORD *)(v19 + 2 * (a4 + 32) + 4)
             - (unsigned __int64)*(_WORD *)(v132 + 96 * *(_DWORD *)v19 + 2 * v18 + 4)) >> 32) & (v20
                                                                                               - *(_WORD *)(v132 + 96 * *(_DWORD *)v19 + 2 * v18 + 4));
      if ( v21 != 1 )
      {
        v20 -= ((v20 - (unsigned __int64)*(_WORD *)(v132 + 96 * *(_DWORD *)(v19 + 4) + 2 * v18 + 4)) >> 32) & (v20 - *(_WORD *)(v132 + 96 * *(_DWORD *)(v19 + 4) + 2 * v18 + 4));
        if ( v21 != 2 )
        {
          v22 = *(_WORD *)(v132 + 96 * *(_DWORD *)(v19 + 8) + 2 * v18 + 4);
          v20 -= v22 > v20 ? v20 - v22 : 0;
          if ( v21 != 3 )
          {
            v23 = *(_WORD *)(v132 + 96 * *(_DWORD *)(v148 + 12) + 2 * v18 + 4);
            v20 -= v23 > v20 ? v20 - v23 : 0;
          }
        }
      }
    }
    v24 = v173;
    v149 = v20 + (v20 >> 4) + 64;
    if ( v173 <= 1 )
    {
      v133 = 1;
    }
    else
    {
      v133 = 1;
      v25 = &v172;
      do
      {
        while ( 1 )
        {
          v26 = *(_DWORD *)v25;
          v27 = *((_DWORD *)v25 + 1);
          v28 = 1 << (*(_DWORD *)v25 + 15);
          v29 = v175[v27 + 15];
          if ( !(v28 & v29) )
            break;
          ++v133;
          v25 += 8;
          if ( v133 >= v24 )
            goto LABEL_17;
        }
        v138 = *((_DWORD *)v25 + 1);
        v175[v27 + 15] = v29 | v28;
        v30 = v26 + v27 * v127;
        v31 = sub_6F8274A0(
                a1,
                v130 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131),
                v129 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131) + v30,
                v127);
        v32 = v31;
        v158 = v31;
        v33 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 4));
        v34 = sub_6F8274A0(a1, v130 + v33, v129 + v33 + v30, v127);
        v35 = v34 + v32;
        v159 = v34;
        v36 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 8));
        v37 = sub_6F8274A0(a1, v130 + v36, v129 + v36 + v30, v127);
        v38 = v37 + v35;
        v160 = v37;
        v39 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 12));
        v40 = sub_6F8274A0(a1, v130 + v39, v129 + v39 + v30, v127);
        v161 = v40;
        v41 = v38 + v40;
        if ( v143 > v41 )
        {
          v136 = v138;
          v144 = v26;
          v143 = v41;
        }
        if ( a4 == 1 )
        {
          if ( v158 < v154 )
          {
            v154 = v158;
            v162 = v26;
            v163 = v138;
          }
          if ( v159 < v155 )
          {
            v155 = v159;
            v164 = v26;
            v165 = v138;
          }
          if ( v160 < v156 )
          {
            v156 = v160;
            v166 = v26;
            v167 = v138;
          }
          if ( v161 < v157 )
          {
            v157 = v161;
            v168 = v26;
            v169 = v138;
          }
        }
        ++v133;
        v24 = v173;
        v25 += 8;
      }
      while ( v133 < v173 );
    }
    if ( v149 >= v143 )
      goto LABEL_94;
LABEL_17:
    v42 = v174;
    if ( v174 <= v133 )
      goto LABEL_95;
    v43 = &v170 + 2 * v133;
    do
    {
      while ( 1 )
      {
        v44 = *v43;
        v45 = v43[1];
        v46 = 1 << (*v43 + 15);
        v47 = v175[v45 + 15];
        if ( !(v46 & v47) )
          break;
        ++v133;
        v43 += 2;
        if ( v133 >= v42 )
          goto LABEL_26;
      }
      v139 = v43[1];
      v175[v45 + 15] = v47 | v46;
      v48 = v44 + v45 * v127;
      v49 = sub_6F8274A0(
              a1,
              v130 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131),
              v129 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131) + v48,
              v127);
      v50 = v49;
      v158 = v49;
      v51 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 4));
      v52 = sub_6F8274A0(a1, v130 + v51, v129 + v51 + v48, v127);
      v53 = v52 + v50;
      v159 = v52;
      v54 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 8));
      v55 = sub_6F8274A0(a1, v130 + v54, v129 + v54 + v48, v127);
      v56 = v55 + v53;
      v160 = v55;
      v57 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 12));
      v58 = sub_6F8274A0(a1, v130 + v57, v129 + v57 + v48, v127);
      v161 = v58;
      v59 = v56 + v58;
      if ( v143 > v59 )
      {
        v136 = v139;
        v144 = v44;
        v143 = v59;
      }
      if ( a4 == 1 )
      {
        if ( v158 < v154 )
        {
          v154 = v158;
          v162 = v44;
          v163 = v139;
        }
        if ( v159 < v155 )
        {
          v155 = v159;
          v164 = v44;
          v165 = v139;
        }
        if ( v160 < v156 )
        {
          v156 = v160;
          v166 = v44;
          v167 = v139;
        }
        if ( v161 < v157 )
        {
          v157 = v161;
          v168 = v44;
          v169 = v139;
        }
      }
      ++v133;
      v42 = v174;
      v43 += 2;
    }
    while ( v133 < v174 );
LABEL_26:
    if ( v149 < v143 )
    {
LABEL_95:
      while ( 1 )
      {
        v87 = 4 * ((1 - v136) / 16) | 8 * ((v136 + (v136 < -1 ? 0xF : 0) + 1) >> 4) | (1 - v144) / 16 | 2 * ((v144 + (v144 < -1 ? 0xF : 0) + 1) >> 4);
        v134 = dword_6FB97DE0[v87];
        if ( dword_6FB97DE0[v87] <= 0 )
          break;
        v88 = 0;
        v146 = 4;
        v140 = 32 * v87;
        do
        {
          v89 = *(int *)((char *)&dword_6FB97C80[v88] + v140);
          v90 = dword_6FB97E60[v89] + v144;
          v91 = dword_6FB97E20[v89] + v136;
          v92 = 1 << (v90 + 15);
          v93 = v175[v91 + 15];
          if ( !(v92 & v93) )
          {
            v145 = dword_6FB97E60[v89] + v144;
            v175[v91 + 15] = v93 | v92;
            v94 = v90 + v91 * v127;
            v95 = sub_6F8274A0(
                    a1,
                    v130 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131),
                    v129 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131) + v94,
                    v127);
            v96 = v95;
            v158 = v95;
            v97 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 4));
            v98 = sub_6F8274A0(a1, v130 + v97, v129 + v97 + v94, v127);
            v159 = v98;
            v99 = v98 + v96;
            v100 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 8));
            v101 = sub_6F8274A0(a1, v130 + v100, v129 + v100 + v94, v127);
            v160 = v101;
            v102 = v101 + v99;
            v103 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 12));
            v104 = sub_6F8274A0(a1, v130 + v103, v129 + v103 + v94, v127);
            v161 = v104;
            v105 = v102 + v104;
            if ( v143 > v105 )
            {
              v146 = v89;
              v143 = v105;
            }
            if ( a4 == 1 )
            {
              if ( v158 < v154 )
              {
                v154 = v158;
                v162 = v145;
                v163 = v91;
              }
              if ( v159 < v155 )
              {
                v155 = v159;
                v164 = v145;
                v165 = v91;
              }
              if ( v160 < v156 )
              {
                v156 = v160;
                v166 = v145;
                v167 = v91;
              }
              if ( v161 < v157 )
              {
                v157 = v161;
                v168 = v145;
                v169 = v91;
              }
            }
          }
          ++v88;
        }
        while ( v88 != v134 );
        if ( v146 == 4 )
          break;
        v144 += dword_6FB97E60[v146];
        v136 += dword_6FB97E20[v146];
      }
      if ( a4 == 1 )
      {
        v152 = (int *)&v154;
        v106 = v149 >> 2;
        v150 = &v162;
        v151 = v136;
        v153 = v106;
        do
        {
          if ( v153 < *v152 )
          {
            v135 = *v150;
            v137 = v150[1];
            v107 = *v150;
            while ( 1 )
            {
              v108 = 4 * ((1 - v137) / 16) | 8 * ((v137 + (v137 < -1 ? 0xF : 0) + 1) >> 4) | (1 - v107) / 16 | 2 * ((v107 + (v107 < -1 ? 0xF : 0) + 1) >> 4);
              v141 = dword_6FB97DE0[v108];
              if ( dword_6FB97DE0[v108] <= 0 )
                break;
              v142 = 32 * v108;
              v109 = 0;
              do
              {
                while ( 1 )
                {
                  v110 = *(int *)((char *)&dword_6FB97C80[v109] + v142);
                  v111 = dword_6FB97E60[v110] + v135;
                  v112 = dword_6FB97E20[v110] + v137;
                  v113 = 1 << (v111 + 15);
                  v114 = v175[v112 + 15];
                  if ( !(v113 & v114) )
                  {
                    v147 = v112;
                    v175[v112 + 15] = v114 | v113;
                    v115 = v111 + v112 * v127;
                    v116 = sub_6F8274A0(
                             a1,
                             v130 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131),
                             v129 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131) + v115,
                             v127);
                    v117 = *(_DWORD *)(v131 + 4);
                    v118 = v116;
                    v158 = v116;
                    v119 = sub_6F8274A0(
                             a1,
                             v130 + *(_DWORD *)(v128 + 4 * v117),
                             v129 + *(_DWORD *)(v128 + 4 * v117) + v115,
                             v127);
                    v159 = v119;
                    v120 = v119 + v118;
                    v121 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 8));
                    v122 = sub_6F8274A0(a1, v130 + v121, v129 + v121 + v115, v127);
                    v160 = v122;
                    v123 = v122 + v120;
                    v124 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 12));
                    v125 = sub_6F8274A0(a1, v130 + v124, v129 + v124 + v115, v127);
                    v161 = v125;
                    v126 = v123 + v125;
                    if ( v143 > v126 )
                    {
                      v151 = v147;
                      v144 = v111;
                      v143 = v126;
                    }
                    if ( v158 < v154 )
                    {
                      v154 = v158;
                      v162 = v111;
                      v163 = v147;
                    }
                    if ( v159 < v155 )
                    {
                      v155 = v159;
                      v164 = v111;
                      v165 = v147;
                    }
                    if ( v160 < v156 )
                    {
                      v156 = v160;
                      v166 = v111;
                      v167 = v147;
                    }
                    if ( v161 < v157 )
                      break;
                  }
                  if ( ++v109 == v141 )
                    goto LABEL_85;
                }
                ++v109;
                v157 = v161;
                v168 = v111;
                v169 = v147;
              }
              while ( v109 != v141 );
LABEL_85:
              v107 = *v150;
              if ( *v150 == v135 )
              {
                if ( v150[1] == v137 )
                  break;
                v137 = v150[1];
              }
              else
              {
                v137 = v150[1];
              }
              v135 = *v150;
            }
          }
          v150 += 2;
          ++v152;
        }
        while ( v150 != &v170 );
        v60 = v148;
        v136 = v151;
        v6 = v144 + v151 * v127;
      }
      else
      {
        v60 = v148;
        v6 = v144 + v127 * v136;
      }
    }
    else
    {
LABEL_94:
      v60 = v148;
      v6 = v144 + v136 * v127;
    }
  }
  v61 = v60 + 2 * a4;
  *(_WORD *)(v61 + 68) = v143;
  v62 = sub_6F827990(
          a1,
          v130 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131),
          v129 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131) + v6,
          v127,
          -1);
  v63 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 4));
  v64 = sub_6F827990(a1, v130 + v63, v129 + v63 + v6, v127, -1) + v62;
  v65 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 8));
  v66 = sub_6F827990(a1, v130 + v65, v129 + v65 + v6, v127, -1) + v64;
  v67 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 12));
  *(_DWORD *)(v148 + 4 * a4 + 72) = sub_6F827990(a1, v130 + v67, v129 + v67 + v6, v127, -1) + v66;
  result = 2 * v136;
  *(_BYTE *)(v61 + 35) = 2 * v144;
  *(_BYTE *)(v148 + 2 * a4 + 36) = 2 * v136;
  if ( a4 == 1 )
  {
    v69 = v148 + 51;
    v70 = v163;
    v71 = 2 * v162;
    *(_DWORD *)(v148 + 80) = sub_6F827990(
                               a1,
                               v130 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131),
                               v129 + *(_DWORD *)(v128 + 4 * *(_DWORD *)v131) + v162 + v163 * v127,
                               v127,
                               -1);
    *(_BYTE *)v69 = v71;
    v72 = 2 * v70;
    v73 = v165;
    *(_BYTE *)(v69 + 1) = v72;
    v74 = v148 + 53;
    LOBYTE(v69) = v164;
    v75 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 4));
    v76 = sub_6F827990(a1, v130 + v75, v129 + v75 + v164 + v73 * v127, v127, -1);
    v77 = 2 * v73;
    v78 = v167;
    *(_DWORD *)(v148 + 84) = v76;
    LOBYTE(v76) = 2 * v69;
    *(_BYTE *)(v74 + 1) = v77;
    v79 = v166;
    *(_BYTE *)v74 = v76;
    v80 = v148 + 55;
    v81 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 8));
    v82 = sub_6F827990(a1, v130 + v81, v129 + v81 + v79 + v78 * v127, v127, -1);
    v83 = 2 * v79;
    v84 = v168;
    *(_DWORD *)(v148 + 88) = v82;
    LOBYTE(v82) = 2 * v78;
    *(_BYTE *)v80 = v83;
    v85 = v148 + 57;
    *(_BYTE *)(v80 + 1) = v82;
    v86 = *(_DWORD *)(v128 + 4 * *(_DWORD *)(v131 + 12));
    LOBYTE(v80) = 2 * v169;
    *(_DWORD *)(v148 + 92) = sub_6F827990(a1, v130 + v86, v129 + v86 + v84 + v169 * v127, v127, -1);
    result = 2 * v84;
    *(_BYTE *)(v85 + 1) = v80;
    *(_BYTE *)v85 = 2 * v84;
  }
  return result;
}
