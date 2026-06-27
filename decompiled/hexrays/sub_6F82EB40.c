int __cdecl sub_6F82EB40(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx@1
  int result; // eax@1
  int v8; // ebx@1
  int v9; // edx@2
  unsigned int v10; // esi@2
  char *v11; // edi@2
  char *v12; // edx@2
  __int64 v13; // mm1@2
  int v14; // ebp@2
  __int64 v15; // mm2@2
  __int64 v16; // mm3@2
  char *v17; // edi@2
  char *v18; // edx@2
  __int64 v19; // mm1@2
  __int64 v20; // mm2@2
  __int64 v21; // mm3@2
  _DWORD *v22; // edx@2
  int v23; // edx@10
  char *v24; // esi@10
  char *v25; // edx@10
  __int64 v26; // mm1@10
  int v27; // edi@10
  __int64 v28; // mm2@10
  __int64 v29; // mm3@10
  char *v30; // esi@10
  char *v31; // edx@10
  __int64 v32; // mm1@10
  __int64 v33; // mm2@10
  __int64 v34; // mm3@10
  int v35; // esi@11
  char *v36; // edi@11
  char *v37; // esi@11
  __int64 v38; // mm1@11
  int v39; // ebp@11
  __int64 v40; // mm2@11
  __int64 v41; // mm3@11
  char *v42; // edi@11
  char *v43; // esi@11
  __int64 v44; // mm1@11
  __int64 v45; // mm2@11
  __int64 v46; // mm3@11
  int v47; // esi@12
  char *v48; // edi@12
  char *v49; // esi@12
  __int64 v50; // mm1@12
  int v51; // ebp@12
  __int64 v52; // mm2@12
  __int64 v53; // mm3@12
  char *v54; // edi@12
  char *v55; // esi@12
  __int64 v56; // mm1@12
  __int64 v57; // mm2@12
  __int64 v58; // mm3@12
  int v59; // esi@13
  char *v60; // edi@13
  char *v61; // esi@13
  __int64 v62; // mm1@13
  int v63; // ebp@13
  __int64 v64; // mm2@13
  __int64 v65; // mm3@13
  char *v66; // edi@13
  char *v67; // esi@13
  __int64 v68; // mm1@13
  __int64 v69; // mm2@13
  __int64 v70; // mm3@13
  int v71; // esi@14
  char *v72; // edi@14
  char *v73; // esi@14
  __int64 v74; // mm1@14
  int v75; // ebp@14
  __int64 v76; // mm2@14
  __int64 v77; // mm3@14
  char *v78; // edi@14
  char *v79; // esi@14
  __int64 v80; // mm1@14
  __int64 v81; // mm2@14
  __int64 v82; // mm3@14
  int v83; // esi@15
  char *v84; // edi@15
  char *v85; // esi@15
  __int64 v86; // mm1@15
  int v87; // ebp@15
  __int64 v88; // mm2@15
  __int64 v89; // mm3@15
  char *v90; // edi@15
  char *v91; // esi@15
  __int64 v92; // mm1@15
  __int64 v93; // mm2@15
  __int64 v94; // mm3@15
  int v95; // esi@16
  char *v96; // edi@16
  char *v97; // esi@16
  __int64 v98; // mm1@16
  int v99; // ebp@16
  __int64 v100; // mm2@16
  __int64 v101; // mm3@16
  char *v102; // edi@16
  char *v103; // esi@16
  __int64 v104; // mm1@16
  __int64 v105; // mm2@16
  __int64 v106; // mm3@16
  int v107; // esi@17
  char *v108; // edi@17
  char *v109; // esi@17
  __int64 v110; // mm1@17
  int v111; // ebp@17
  __int64 v112; // mm2@17
  __int64 v113; // mm3@17
  char *v114; // edi@17
  char *v115; // esi@17
  __int64 v116; // mm1@17
  __int64 v117; // mm2@17
  __int64 v118; // mm3@17
  int v119; // esi@17
  char *v120; // edi@17
  char *v121; // esi@17
  __int64 v122; // mm1@17
  int v123; // ebp@17
  __int64 v124; // mm2@17
  __int64 v125; // mm3@17
  char *v126; // edi@17
  char *v127; // esi@17
  __int64 v128; // mm1@17
  __int64 v129; // mm2@17
  __int64 v130; // mm3@17
  int v131; // esi@17
  char *v132; // edi@17
  char *v133; // esi@17
  __int64 v134; // mm1@17
  int v135; // ebp@17
  __int64 v136; // mm2@17
  __int64 v137; // mm3@17
  char *v138; // edi@17
  char *v139; // esi@17
  __int64 v140; // mm1@17
  __int64 v141; // mm2@17
  __int64 v142; // mm3@17
  int v143; // esi@17
  char *v144; // edi@17
  char *v145; // esi@17
  __int64 v146; // mm1@17
  int v147; // ebp@17
  __int64 v148; // mm2@17
  __int64 v149; // mm3@17
  char *v150; // edi@17
  char *v151; // esi@17
  __int64 v152; // mm1@17
  __int64 v153; // mm2@17
  __int64 v154; // mm3@17
  int v155; // esi@17
  char *v156; // edi@17
  char *v157; // esi@17
  __int64 v158; // mm1@17
  int v159; // ebp@17
  __int64 v160; // mm2@17
  __int64 v161; // mm3@17
  char *v162; // edi@17
  char *v163; // esi@17
  __int64 v164; // mm1@17
  __int64 v165; // mm2@17
  __int64 v166; // mm3@17
  int v167; // esi@17
  char *v168; // edi@17
  char *v169; // esi@17
  __int64 v170; // mm1@17
  int v171; // ebp@17
  __int64 v172; // mm2@17
  __int64 v173; // mm3@17
  char *v174; // edi@17
  char *v175; // esi@17
  __int64 v176; // mm1@17
  __int64 v177; // mm2@17
  __int64 v178; // mm3@17
  int v179; // esi@17
  char *v180; // edi@17
  char *v181; // esi@17
  __int64 v182; // mm1@17
  int v183; // ebp@17
  __int64 v184; // mm2@17
  __int64 v185; // mm3@17
  char *v186; // edi@17
  char *v187; // esi@17
  __int64 v188; // mm1@17
  __int64 v189; // mm2@17
  __int64 v190; // mm3@17
  int v191; // esi@17
  char *v192; // edi@17
  char *v193; // esi@17
  __int64 v194; // mm1@17
  int v195; // ebp@17
  __int64 v196; // mm2@17
  __int64 v197; // mm3@17
  char *v198; // edi@17
  char *v199; // esi@17
  __int64 v200; // mm1@17
  __int64 v201; // mm2@17
  __int64 v202; // mm3@17
  int v203; // [sp+0h] [bp-18h]@1
  _DWORD *v204; // [sp+4h] [bp-14h]@2

  v6 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a5 + 272) + 480);
  v203 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a4 + 272) + 480);
  result = *(_DWORD *)(a1 + 4 * a6 + 496);
  v8 = *(_DWORD *)(a1 + 208);
  if ( a3 > 0 )
  {
    v204 = &a2[a3];
    v9 = *(_DWORD *)(v8 + 4 * *a2);
    v10 = ((unsigned int)(4 * a3 - 4) >> 2) & 7;
    v11 = (char *)(v6 + v9);
    v12 = (char *)(*(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a4 + 272) + 480) + v9);
    v13 = *(_QWORD *)&v11[result];
    v14 = 3 * result;
    v15 = *(_QWORD *)&v11[2 * result];
    v16 = *(_QWORD *)&v11[3 * result];
    *(_QWORD *)v12 = *(_QWORD *)v11;
    *(_QWORD *)&v12[result] = v13;
    v17 = &v11[4 * result];
    *(_QWORD *)&v12[2 * result] = v15;
    *(_QWORD *)&v12[v14] = v16;
    v18 = &v12[4 * result];
    v19 = *(_QWORD *)&v17[result];
    v20 = *(_QWORD *)&v17[2 * result];
    v21 = *(_QWORD *)&v17[3 * result];
    *(_QWORD *)v18 = *(_QWORD *)v17;
    *(_QWORD *)&v18[result] = v19;
    *(_QWORD *)&v18[2 * result] = v20;
    *(_QWORD *)&v18[v14] = v21;
    v22 = a2 + 1;
    if ( a2 + 1 != v204 )
    {
      if ( !v10 )
        goto LABEL_20;
      if ( v10 != 1 )
      {
        if ( v10 != 2 )
        {
          if ( v10 != 3 )
          {
            if ( v10 != 4 )
            {
              if ( v10 != 5 )
              {
                if ( v10 != 6 )
                {
                  v23 = *(_DWORD *)(v8 + 4 * *v22);
                  v24 = (char *)(v6 + v23);
                  v25 = (char *)(v203 + v23);
                  v26 = *(_QWORD *)&v24[result];
                  v27 = 3 * result;
                  v28 = *(_QWORD *)&v24[2 * result];
                  v29 = *(_QWORD *)&v24[3 * result];
                  *(_QWORD *)v25 = *(_QWORD *)v24;
                  *(_QWORD *)&v25[result] = v26;
                  v30 = &v24[4 * result];
                  *(_QWORD *)&v25[2 * result] = v28;
                  *(_QWORD *)&v25[v27] = v29;
                  v31 = &v25[4 * result];
                  v32 = *(_QWORD *)&v30[result];
                  v33 = *(_QWORD *)&v30[2 * result];
                  v34 = *(_QWORD *)&v30[3 * result];
                  *(_QWORD *)v31 = *(_QWORD *)v30;
                  *(_QWORD *)&v31[result] = v32;
                  *(_QWORD *)&v31[2 * result] = v33;
                  *(_QWORD *)&v31[v27] = v34;
                  v22 = a2 + 2;
                }
                v35 = *(_DWORD *)(v8 + 4 * *v22);
                v36 = (char *)(v6 + v35);
                v37 = (char *)(v203 + v35);
                v38 = *(_QWORD *)&v36[result];
                v39 = 3 * result;
                v40 = *(_QWORD *)&v36[2 * result];
                v41 = *(_QWORD *)&v36[3 * result];
                *(_QWORD *)v37 = *(_QWORD *)v36;
                *(_QWORD *)&v37[result] = v38;
                v42 = &v36[4 * result];
                *(_QWORD *)&v37[2 * result] = v40;
                *(_QWORD *)&v37[v39] = v41;
                v43 = &v37[4 * result];
                v44 = *(_QWORD *)&v42[result];
                v45 = *(_QWORD *)&v42[2 * result];
                v46 = *(_QWORD *)&v42[3 * result];
                *(_QWORD *)v43 = *(_QWORD *)v42;
                *(_QWORD *)&v43[result] = v44;
                *(_QWORD *)&v43[2 * result] = v45;
                *(_QWORD *)&v43[v39] = v46;
                ++v22;
              }
              v47 = *(_DWORD *)(v8 + 4 * *v22);
              v48 = (char *)(v6 + v47);
              v49 = (char *)(v203 + v47);
              v50 = *(_QWORD *)&v48[result];
              v51 = 3 * result;
              v52 = *(_QWORD *)&v48[2 * result];
              v53 = *(_QWORD *)&v48[3 * result];
              *(_QWORD *)v49 = *(_QWORD *)v48;
              *(_QWORD *)&v49[result] = v50;
              v54 = &v48[4 * result];
              *(_QWORD *)&v49[2 * result] = v52;
              *(_QWORD *)&v49[v51] = v53;
              v55 = &v49[4 * result];
              v56 = *(_QWORD *)&v54[result];
              v57 = *(_QWORD *)&v54[2 * result];
              v58 = *(_QWORD *)&v54[3 * result];
              *(_QWORD *)v55 = *(_QWORD *)v54;
              *(_QWORD *)&v55[result] = v56;
              *(_QWORD *)&v55[2 * result] = v57;
              *(_QWORD *)&v55[v51] = v58;
              ++v22;
            }
            v59 = *(_DWORD *)(v8 + 4 * *v22);
            v60 = (char *)(v6 + v59);
            v61 = (char *)(v203 + v59);
            v62 = *(_QWORD *)&v60[result];
            v63 = 3 * result;
            v64 = *(_QWORD *)&v60[2 * result];
            v65 = *(_QWORD *)&v60[3 * result];
            *(_QWORD *)v61 = *(_QWORD *)v60;
            *(_QWORD *)&v61[result] = v62;
            v66 = &v60[4 * result];
            *(_QWORD *)&v61[2 * result] = v64;
            *(_QWORD *)&v61[v63] = v65;
            v67 = &v61[4 * result];
            v68 = *(_QWORD *)&v66[result];
            v69 = *(_QWORD *)&v66[2 * result];
            v70 = *(_QWORD *)&v66[3 * result];
            *(_QWORD *)v67 = *(_QWORD *)v66;
            *(_QWORD *)&v67[result] = v68;
            *(_QWORD *)&v67[2 * result] = v69;
            *(_QWORD *)&v67[v63] = v70;
            ++v22;
          }
          v71 = *(_DWORD *)(v8 + 4 * *v22);
          v72 = (char *)(v6 + v71);
          v73 = (char *)(v203 + v71);
          v74 = *(_QWORD *)&v72[result];
          v75 = 3 * result;
          v76 = *(_QWORD *)&v72[2 * result];
          v77 = *(_QWORD *)&v72[3 * result];
          *(_QWORD *)v73 = *(_QWORD *)v72;
          *(_QWORD *)&v73[result] = v74;
          v78 = &v72[4 * result];
          *(_QWORD *)&v73[2 * result] = v76;
          *(_QWORD *)&v73[v75] = v77;
          v79 = &v73[4 * result];
          v80 = *(_QWORD *)&v78[result];
          v81 = *(_QWORD *)&v78[2 * result];
          v82 = *(_QWORD *)&v78[3 * result];
          *(_QWORD *)v79 = *(_QWORD *)v78;
          *(_QWORD *)&v79[result] = v80;
          *(_QWORD *)&v79[2 * result] = v81;
          *(_QWORD *)&v79[v75] = v82;
          ++v22;
        }
        v83 = *(_DWORD *)(v8 + 4 * *v22);
        v84 = (char *)(v6 + v83);
        v85 = (char *)(v203 + v83);
        v86 = *(_QWORD *)&v84[result];
        v87 = 3 * result;
        v88 = *(_QWORD *)&v84[2 * result];
        v89 = *(_QWORD *)&v84[3 * result];
        *(_QWORD *)v85 = *(_QWORD *)v84;
        *(_QWORD *)&v85[result] = v86;
        v90 = &v84[4 * result];
        *(_QWORD *)&v85[2 * result] = v88;
        *(_QWORD *)&v85[v87] = v89;
        v91 = &v85[4 * result];
        v92 = *(_QWORD *)&v90[result];
        v93 = *(_QWORD *)&v90[2 * result];
        v94 = *(_QWORD *)&v90[3 * result];
        *(_QWORD *)v91 = *(_QWORD *)v90;
        *(_QWORD *)&v91[result] = v92;
        *(_QWORD *)&v91[2 * result] = v93;
        *(_QWORD *)&v91[v87] = v94;
        ++v22;
      }
      v95 = *(_DWORD *)(v8 + 4 * *v22);
      v96 = (char *)(v6 + v95);
      v97 = (char *)(v203 + v95);
      v98 = *(_QWORD *)&v96[result];
      v99 = 3 * result;
      v100 = *(_QWORD *)&v96[2 * result];
      v101 = *(_QWORD *)&v96[3 * result];
      *(_QWORD *)v97 = *(_QWORD *)v96;
      *(_QWORD *)&v97[result] = v98;
      v102 = &v96[4 * result];
      *(_QWORD *)&v97[2 * result] = v100;
      *(_QWORD *)&v97[v99] = v101;
      v103 = &v97[4 * result];
      v104 = *(_QWORD *)&v102[result];
      v105 = *(_QWORD *)&v102[2 * result];
      v106 = *(_QWORD *)&v102[3 * result];
      *(_QWORD *)v103 = *(_QWORD *)v102;
      *(_QWORD *)&v103[result] = v104;
      *(_QWORD *)&v103[2 * result] = v105;
      *(_QWORD *)&v103[v99] = v106;
      ++v22;
      if ( v22 != v204 )
      {
LABEL_20:
        do
        {
          v107 = *(_DWORD *)(v8 + 4 * *v22);
          v108 = (char *)(v6 + v107);
          v109 = (char *)(v203 + v107);
          v110 = *(_QWORD *)&v108[result];
          v111 = 3 * result;
          v112 = *(_QWORD *)&v108[2 * result];
          v113 = *(_QWORD *)&v108[3 * result];
          *(_QWORD *)v109 = *(_QWORD *)v108;
          *(_QWORD *)&v109[result] = v110;
          v114 = &v108[4 * result];
          *(_QWORD *)&v109[2 * result] = v112;
          *(_QWORD *)&v109[v111] = v113;
          v115 = &v109[4 * result];
          v116 = *(_QWORD *)&v114[result];
          v117 = *(_QWORD *)&v114[2 * result];
          v118 = *(_QWORD *)&v114[3 * result];
          *(_QWORD *)v115 = *(_QWORD *)v114;
          *(_QWORD *)&v115[result] = v116;
          *(_QWORD *)&v115[2 * result] = v117;
          *(_QWORD *)&v115[v111] = v118;
          v119 = *(_DWORD *)(v8 + 4 * v22[1]);
          v120 = (char *)(v6 + v119);
          v121 = (char *)(v203 + v119);
          v122 = *(_QWORD *)&v120[result];
          v123 = 3 * result;
          v124 = *(_QWORD *)&v120[2 * result];
          v125 = *(_QWORD *)&v120[3 * result];
          *(_QWORD *)v121 = *(_QWORD *)v120;
          *(_QWORD *)&v121[result] = v122;
          v126 = &v120[4 * result];
          *(_QWORD *)&v121[2 * result] = v124;
          *(_QWORD *)&v121[v123] = v125;
          v127 = &v121[4 * result];
          v128 = *(_QWORD *)&v126[result];
          v129 = *(_QWORD *)&v126[2 * result];
          v130 = *(_QWORD *)&v126[3 * result];
          *(_QWORD *)v127 = *(_QWORD *)v126;
          *(_QWORD *)&v127[result] = v128;
          *(_QWORD *)&v127[2 * result] = v129;
          *(_QWORD *)&v127[v123] = v130;
          v131 = *(_DWORD *)(v8 + 4 * v22[2]);
          v132 = (char *)(v6 + v131);
          v133 = (char *)(v203 + v131);
          v134 = *(_QWORD *)&v132[result];
          v135 = 3 * result;
          v136 = *(_QWORD *)&v132[2 * result];
          v137 = *(_QWORD *)&v132[3 * result];
          *(_QWORD *)v133 = *(_QWORD *)v132;
          *(_QWORD *)&v133[result] = v134;
          v138 = &v132[4 * result];
          *(_QWORD *)&v133[2 * result] = v136;
          *(_QWORD *)&v133[v135] = v137;
          v139 = &v133[4 * result];
          v140 = *(_QWORD *)&v138[result];
          v141 = *(_QWORD *)&v138[2 * result];
          v142 = *(_QWORD *)&v138[3 * result];
          *(_QWORD *)v139 = *(_QWORD *)v138;
          *(_QWORD *)&v139[result] = v140;
          *(_QWORD *)&v139[2 * result] = v141;
          *(_QWORD *)&v139[v135] = v142;
          v143 = *(_DWORD *)(v8 + 4 * v22[3]);
          v144 = (char *)(v6 + v143);
          v145 = (char *)(v203 + v143);
          v146 = *(_QWORD *)&v144[result];
          v147 = 3 * result;
          v148 = *(_QWORD *)&v144[2 * result];
          v149 = *(_QWORD *)&v144[3 * result];
          *(_QWORD *)v145 = *(_QWORD *)v144;
          *(_QWORD *)&v145[result] = v146;
          v150 = &v144[4 * result];
          *(_QWORD *)&v145[2 * result] = v148;
          *(_QWORD *)&v145[v147] = v149;
          v151 = &v145[4 * result];
          v152 = *(_QWORD *)&v150[result];
          v153 = *(_QWORD *)&v150[2 * result];
          v154 = *(_QWORD *)&v150[3 * result];
          *(_QWORD *)v151 = *(_QWORD *)v150;
          *(_QWORD *)&v151[result] = v152;
          *(_QWORD *)&v151[2 * result] = v153;
          *(_QWORD *)&v151[v147] = v154;
          v155 = *(_DWORD *)(v8 + 4 * v22[4]);
          v156 = (char *)(v6 + v155);
          v157 = (char *)(v203 + v155);
          v158 = *(_QWORD *)&v156[result];
          v159 = 3 * result;
          v160 = *(_QWORD *)&v156[2 * result];
          v161 = *(_QWORD *)&v156[3 * result];
          *(_QWORD *)v157 = *(_QWORD *)v156;
          *(_QWORD *)&v157[result] = v158;
          v162 = &v156[4 * result];
          *(_QWORD *)&v157[2 * result] = v160;
          *(_QWORD *)&v157[v159] = v161;
          v163 = &v157[4 * result];
          v164 = *(_QWORD *)&v162[result];
          v165 = *(_QWORD *)&v162[2 * result];
          v166 = *(_QWORD *)&v162[3 * result];
          *(_QWORD *)v163 = *(_QWORD *)v162;
          *(_QWORD *)&v163[result] = v164;
          *(_QWORD *)&v163[2 * result] = v165;
          *(_QWORD *)&v163[v159] = v166;
          v167 = *(_DWORD *)(v8 + 4 * v22[5]);
          v168 = (char *)(v6 + v167);
          v169 = (char *)(v203 + v167);
          v170 = *(_QWORD *)&v168[result];
          v171 = 3 * result;
          v172 = *(_QWORD *)&v168[2 * result];
          v173 = *(_QWORD *)&v168[3 * result];
          *(_QWORD *)v169 = *(_QWORD *)v168;
          *(_QWORD *)&v169[result] = v170;
          v174 = &v168[4 * result];
          *(_QWORD *)&v169[2 * result] = v172;
          *(_QWORD *)&v169[v171] = v173;
          v175 = &v169[4 * result];
          v176 = *(_QWORD *)&v174[result];
          v177 = *(_QWORD *)&v174[2 * result];
          v178 = *(_QWORD *)&v174[3 * result];
          *(_QWORD *)v175 = *(_QWORD *)v174;
          *(_QWORD *)&v175[result] = v176;
          *(_QWORD *)&v175[2 * result] = v177;
          *(_QWORD *)&v175[v171] = v178;
          v179 = *(_DWORD *)(v8 + 4 * v22[6]);
          v180 = (char *)(v6 + v179);
          v181 = (char *)(v203 + v179);
          v182 = *(_QWORD *)&v180[result];
          v183 = 3 * result;
          v184 = *(_QWORD *)&v180[2 * result];
          v185 = *(_QWORD *)&v180[3 * result];
          *(_QWORD *)v181 = *(_QWORD *)v180;
          *(_QWORD *)&v181[result] = v182;
          v186 = &v180[4 * result];
          *(_QWORD *)&v181[2 * result] = v184;
          *(_QWORD *)&v181[v183] = v185;
          v187 = &v181[4 * result];
          v188 = *(_QWORD *)&v186[result];
          v189 = *(_QWORD *)&v186[2 * result];
          v190 = *(_QWORD *)&v186[3 * result];
          *(_QWORD *)v187 = *(_QWORD *)v186;
          *(_QWORD *)&v187[result] = v188;
          *(_QWORD *)&v187[2 * result] = v189;
          *(_QWORD *)&v187[v183] = v190;
          v191 = *(_DWORD *)(v8 + 4 * v22[7]);
          v192 = (char *)(v6 + v191);
          v193 = (char *)(v203 + v191);
          v194 = *(_QWORD *)&v192[result];
          v195 = 3 * result;
          v196 = *(_QWORD *)&v192[2 * result];
          v197 = *(_QWORD *)&v192[3 * result];
          *(_QWORD *)v193 = *(_QWORD *)v192;
          *(_QWORD *)&v193[result] = v194;
          v198 = &v192[4 * result];
          *(_QWORD *)&v193[2 * result] = v196;
          *(_QWORD *)&v193[v195] = v197;
          v199 = &v193[4 * result];
          v200 = *(_QWORD *)&v198[result];
          v201 = *(_QWORD *)&v198[2 * result];
          v202 = *(_QWORD *)&v198[3 * result];
          *(_QWORD *)v199 = *(_QWORD *)v198;
          *(_QWORD *)&v199[result] = v200;
          *(_QWORD *)&v199[2 * result] = v201;
          *(_QWORD *)&v199[v195] = v202;
          v22 += 8;
        }
        while ( v22 != v204 );
      }
    }
  }
  return result;
}
