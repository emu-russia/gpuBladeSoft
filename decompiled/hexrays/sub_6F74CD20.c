int __usercall sub_6F74CD20@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // ST3C_4@1
  int v3; // edx@1
  _DWORD *v4; // ebp@1
  int v5; // ebx@7
  int v6; // edi@7
  int v7; // ecx@7
  int v8; // eax@7
  int v9; // edx@7
  int v10; // ebp@7
  int v11; // edx@8
  int v12; // ecx@8
  int v13; // eax@8
  int v14; // ecx@10
  int v15; // ecx@10
  int v16; // eax@10
  int v17; // ebx@10
  int v18; // esi@11
  int v19; // eax@12
  int v20; // eax@12
  int v21; // ebx@12
  int v22; // ebx@13
  int v23; // edi@13
  int v24; // esi@13
  signed int v25; // eax@13
  char v26; // bp@14
  __int64 v27; // rax@15
  int v28; // edx@15
  int v29; // eax@15
  int v30; // ebx@15
  int v31; // edx@19
  int v32; // eax@19
  int v33; // edi@23
  int v34; // edx@23
  int v35; // eax@23
  int v36; // esi@27
  int v37; // edx@27
  int v38; // eax@27
  int v39; // eax@29
  int v40; // ebx@30
  int v41; // ecx@30
  int v42; // esi@30
  int v43; // ecx@30
  int v44; // eax@31
  int v45; // ebx@33
  int result; // eax@33
  int v47; // ebx@35
  char v48; // di@39
  int v49; // ebx@42
  signed int v50; // ebp@42
  signed int v51; // ebx@42
  int v52; // edx@42
  int v53; // eax@42
  int v54; // edx@46
  int v55; // eax@46
  int v56; // edx@48
  int v57; // eax@48
  signed int v58; // ebp@50
  int v59; // esi@50
  signed __int64 v60; // rax@50
  signed __int64 v61; // rax@52
  signed __int64 v62; // rax@54
  int v63; // esi@56
  signed int v64; // eax@56
  int v65; // ebx@56
  signed int v66; // esi@57
  int v67; // ebx@60
  int v68; // ebx@65
  int v69; // ST9C_4@65
  int v70; // esi@65
  int v71; // edi@65
  int v72; // edx@66
  int v73; // eax@66
  int v74; // ebx@70
  int v75; // edx@70
  int v76; // eax@70
  int v77; // edx@72
  int v78; // eax@72
  int v79; // edx@74
  int v80; // eax@74
  int v81; // eax@76
  int v82; // esi@76
  int v83; // edi@76
  int v84; // esi@76
  int v85; // ebx@76
  int v86; // esi@80
  int v87; // eax@80
  int v88; // edi@84
  int v89; // edx@84
  int v90; // eax@84
  int v91; // edx@88
  int v92; // eax@88
  int v93; // esi@92
  int v94; // eax@95
  char v95; // cl@96
  signed int v96; // edi@96
  int v97; // ebx@98
  signed int v98; // edi@98
  signed int v99; // esi@98
  signed int v100; // ST08_4@100
  int v101; // ST50_4@101
  int v102; // [sp+3Ch] [bp-134h]@7
  signed int v103; // [sp+3Ch] [bp-134h]@13
  int v104; // [sp+40h] [bp-130h]@7
  int v105; // [sp+40h] [bp-130h]@14
  int v106; // [sp+44h] [bp-12Ch]@7
  int v107; // [sp+44h] [bp-12Ch]@14
  int v108; // [sp+48h] [bp-128h]@7
  int v109; // [sp+48h] [bp-128h]@14
  int v110; // [sp+4Ch] [bp-124h]@14
  int v111; // [sp+50h] [bp-120h]@7
  int v112; // [sp+50h] [bp-120h]@48
  int v113; // [sp+50h] [bp-120h]@80
  int v114; // [sp+58h] [bp-118h]@13
  int v115; // [sp+58h] [bp-118h]@19
  int v116; // [sp+58h] [bp-118h]@50
  int v117; // [sp+60h] [bp-110h]@7
  int v118; // [sp+60h] [bp-110h]@30
  int v119; // [sp+60h] [bp-110h]@46
  int v120; // [sp+60h] [bp-110h]@70
  int v121; // [sp+64h] [bp-10Ch]@14
  int v122; // [sp+64h] [bp-10Ch]@30
  int v123; // [sp+64h] [bp-10Ch]@72
  int v124; // [sp+68h] [bp-108h]@15
  int v125; // [sp+68h] [bp-108h]@39
  int v126; // [sp+68h] [bp-108h]@74
  int v127; // [sp+6Ch] [bp-104h]@15
  int v128; // [sp+6Ch] [bp-104h]@39
  int v129; // [sp+6Ch] [bp-104h]@76
  int v130; // [sp+70h] [bp-100h]@15
  int v131; // [sp+70h] [bp-100h]@39
  int v132; // [sp+70h] [bp-100h]@88
  int v133; // [sp+74h] [bp-FCh]@15
  int v134; // [sp+74h] [bp-FCh]@39
  int v135; // [sp+78h] [bp-F8h]@29
  signed int v136; // [sp+78h] [bp-F8h]@52
  int v137; // [sp+80h] [bp-F0h]@29
  signed int v138; // [sp+80h] [bp-F0h]@54
  int v139; // [sp+88h] [bp-E8h]@1
  int v140; // [sp+8Ch] [bp-E4h]@7
  int v141; // [sp+90h] [bp-E0h]@7
  int v142; // [sp+94h] [bp-DCh]@7
  int v143; // [sp+98h] [bp-D8h]@7
  int v144; // [sp+A8h] [bp-C8h]@1
  int v145; // [sp+ACh] [bp-C4h]@39
  int v146; // [sp+C8h] [bp-A8h]@7
  int v147; // [sp+CCh] [bp-A4h]@7
  int v148; // [sp+D0h] [bp-A0h]@0
  int v149; // [sp+D8h] [bp-98h]@0
  int v150; // [sp+E0h] [bp-90h]@0
  int v151; // [sp+E8h] [bp-88h]@0
  int v152; // [sp+F0h] [bp-80h]@0
  int v153; // [sp+F8h] [bp-78h]@0
  int v154; // [sp+100h] [bp-70h]@0
  int v155; // [sp+108h] [bp-68h]@0
  int v156; // [sp+110h] [bp-60h]@7
  int v157; // [sp+114h] [bp-5Ch]@7
  signed int v158; // [sp+118h] [bp-58h]@13
  signed int v159; // [sp+11Ch] [bp-54h]@13
  int v160; // [sp+120h] [bp-50h]@1
  int v161; // [sp+124h] [bp-4Ch]@1
  int v162; // [sp+128h] [bp-48h]@13
  int v163; // [sp+12Ch] [bp-44h]@7
  __int64 v164; // [sp+130h] [bp-40h]@13
  signed int v165; // [sp+138h] [bp-38h]@1
  int v166; // [sp+13Ch] [bp-34h]@1
  int v167; // [sp+140h] [bp-30h]@95
  int v168; // [sp+144h] [bp-2Ch]@95
  int v169; // [sp+148h] [bp-28h]@95
  int v170; // [sp+14Ch] [bp-24h]@95
  int v171; // [sp+15Ch] [bp-14h]@1
  int v172; // [sp+160h] [bp-10h]@1
  int v173; // [sp+164h] [bp-Ch]@1
  int v174; // [sp+168h] [bp-8h]@1
  int v175; // [sp+16Ch] [bp-4h]@1
  int v176; // [sp+170h] [bp+0h]@1
  int v177; // [sp+174h] [bp+4h]@1
  int v178; // [sp+178h] [bp+8h]@1
  int v179; // [sp+17Ch] [bp+Ch]@1

  v165 = a1;
  v166 = a2;
  v160 = dword_6FBB52F8 * dword_6FBBDB9C;
  v139 = dword_6FBB52F4 * dword_6FBBDB98;
  v144 = dword_6FBB52F4 * dword_6FBBDBA0;
  v161 = dword_6FBB52F8 * dword_6FBBDBA4;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v178 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5) * dword_6FBB52F4;
  v177 = dword_6FBB52F4 * v2;
  v179 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5) * dword_6FBB52F4;
  v175 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5) * dword_6FBB52F8;
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v174 = v3 * dword_6FBB52F8;
  v4 = (_DWORD *)(32 * (unsigned __int16)word_70041E8A);
  LOWORD(v4) = (signed __int16)v4 >> 5;
  v176 = (signed __int16)v4 * dword_6FBB52F8;
  sub_6F732840(
    v2,
    v3,
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (__int16)v4,
    &v177,
    &v174,
    &v171,
    &v178,
    &v175,
    &v172,
    &v179,
    v4,
    &v173);
  if ( !v171 )
    v171 = 1;
  if ( !v172 )
    v172 = 1;
  if ( !v173 )
    v173 = 1;
  v141 = 0xFFFF / v171;
  v140 = 0xFFFF / v172;
  v108 = 0xFFFF / v172;
  v5 = 0xFFFF / v173;
  v163 = 0xFFFF / v173;
  v147 = (unsigned __int8)byte_6FBB5050 * (0xFFFF / v171);
  v143 = (unsigned __int8)byte_6FBB5051 * (0xFFFF / v172);
  v156 = 0xFFFF / v173 * (unsigned __int8)byte_6FBB5052;
  v146 = (unsigned __int8)byte_6FBB5054 * (0xFFFF / v171);
  v142 = (unsigned __int8)byte_6FBB5055 * (0xFFFF / v172);
  v157 = 0xFFFF / v173 * (unsigned __int8)byte_6FBB5056;
  nullsub_3();
  v106 = dword_6FBB52F4 * dword_6FBBDB90 + v179;
  v6 = dword_6FBB52F4 * dword_6FBBDB90 + v178;
  v7 = dword_6FBB52F4 * dword_6FBBDB90 + v177;
  v8 = v175;
  v179 += dword_6FBB52F4 * dword_6FBBDB90;
  v117 = dword_6FBB52F4 * dword_6FBBDB90 + v178;
  v178 += dword_6FBB52F4 * dword_6FBBDB90;
  v9 = v174;
  v104 = dword_6FBB52F4 * dword_6FBBDB90 + v177;
  v177 += dword_6FBB52F4 * dword_6FBBDB90;
  v102 = dword_6FBB52F8 * dword_6FBBDB94 + v174;
  v174 += dword_6FBB52F8 * dword_6FBBDB94;
  v10 = dword_6FBB52F8 * dword_6FBBDB94 + v175;
  v175 += dword_6FBB52F8 * dword_6FBBDB94;
  v111 = v176 + dword_6FBB52F8 * dword_6FBBDB94;
  v176 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v9 > v8 )
  {
    v117 = v7;
    v178 = v7;
    v177 = v6;
    v175 = v102;
    v11 = v143;
    v104 = v6;
    v140 = v141;
    v12 = v142;
    v141 = v108;
    v13 = v10;
    v174 = v10;
    v10 = v102;
    v143 = v147;
    v147 = v11;
    v142 = v146;
    v146 = v12;
    v102 = v13;
  }
  if ( v111 < v10 )
  {
    v175 = v111;
    v14 = v142;
    v176 = v10;
    v178 = v106;
    v142 = v157;
    v157 = v14;
    v15 = v143;
    v143 = v156;
    v16 = v140;
    v140 = v5;
    v17 = v10;
    v10 = v111;
    v179 = v117;
    v156 = v15;
    v163 = v16;
    v106 = v117;
    v117 = v178;
    v111 = v17;
  }
  v18 = v102;
  if ( v102 > v10 )
  {
    v19 = v142;
    v175 = v102;
    v102 = v10;
    v142 = v146;
    v146 = v19;
    v20 = v147;
    v147 = v143;
    v21 = v140;
    v177 = v117;
    v178 = v104;
    v143 = v20;
    v140 = v141;
    v141 = v21;
    v117 = v104;
    v104 = v177;
    v174 = v10;
    v10 = v18;
  }
  v22 = v102;
  v103 = v10;
  v23 = v106;
  v24 = v104;
  v158 = 2;
  v114 = v22;
  v159 = 0;
  v25 = 2;
  v162 = (v111 - v22) * (v106 - v117) - (v111 - v10) * (v106 - v104);
  v164 = v163 - v140;
  while ( 1 )
  {
    v26 = dword_6FD4098C;
    v105 = v24 << dword_6FD4098C;
    v107 = v141 << dword_6FD4098C;
    v109 = v147 << dword_6FD4098C;
    v110 = v146 << dword_6FD4098C;
    v121 = v103 - v114;
    if ( v25 == 2 )
    {
      v72 = (unsigned __int64)((signed __int64)(v117 - v24) << dword_6FD4098C) >> 32;
      v73 = (v117 - v24) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v72 = (v117 - v24) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v73 = 0;
      v74 = v103 - v114;
      v120 = sub_6F737040(v73, v72, v121);
      v75 = (unsigned __int64)((signed __int64)(v140 - v141) << v26) >> 32;
      v76 = (v140 - v141) << v26;
      if ( v26 & 0x20 )
      {
        v75 = (v140 - v141) << v26;
        v76 = 0;
      }
      v123 = sub_6F737040(v76, v75, v121);
      v77 = (unsigned __int64)((signed __int64)(v143 - v147) << v26) >> 32;
      v78 = (v143 - v147) << v26;
      if ( v26 & 0x20 )
      {
        v77 = (v143 - v147) << v26;
        v78 = 0;
      }
      v126 = sub_6F737040(v78, v77, v74);
      v79 = (unsigned __int64)((signed __int64)(v142 - v146) << v26) >> 32;
      v80 = (v142 - v146) << v26;
      if ( v26 & 0x20 )
      {
        v79 = (v142 - v146) << v26;
        v80 = 0;
      }
      v81 = sub_6F737040(v80, v79, v74);
      v82 = v23 - v24;
      v83 = (unsigned __int64)((signed __int64)v82 << v26) >> 32;
      v84 = v82 << v26;
      v85 = v111 - v114;
      v129 = v81;
      if ( v26 & 0x20 )
        v83 = v84;
      if ( v26 & 0x20 )
        v84 = 0;
      v113 = sub_6F737040(v84, v83, v111 - v114);
      v86 = (unsigned __int64)((signed __int64)(v163 - v141) << v26) >> 32;
      v87 = (v163 - v141) << v26;
      if ( v26 & 0x20 )
        v86 = (v163 - v141) << v26;
      if ( v26 & 0x20 )
        v87 = 0;
      v88 = sub_6F737040(v87, v86, v85);
      v89 = (unsigned __int64)((signed __int64)(v156 - v147) << v26) >> 32;
      v90 = (v156 - v147) << v26;
      if ( v26 & 0x20 )
        v89 = (v156 - v147) << v26;
      if ( v26 & 0x20 )
        v90 = 0;
      v132 = sub_6F737040(v90, v89, v85);
      v91 = (unsigned __int64)((signed __int64)(v157 - v146) << v26) >> 32;
      v92 = (v157 - v146) << v26;
      if ( v26 & 0x20 )
        v91 = (v157 - v146) << v26;
      if ( v26 & 0x20 )
        v92 = 0;
      v151 = v88;
      v148 = v120;
      v150 = v123;
      v152 = v126;
      v149 = v113;
      v93 = sub_6F737040(v92, v91, v85);
      v153 = v132;
      v154 = v129;
      v155 = v93;
      if ( v162 < 0 )
      {
        v155 = v129;
        v154 = v93;
        v153 = v126;
        v152 = v132;
        v118 = v109;
        v150 = v88;
        v151 = v123;
        v43 = v110;
        v42 = v107;
        v101 = v148;
        v148 = v149;
        v149 = v101;
      }
      else
      {
        v43 = v110;
        v42 = v107;
        v118 = v109;
      }
      v122 = v105;
      v111 = v103;
      v103 = v114;
    }
    else
    {
      v127 = v141 << dword_6FD4098C;
      v133 = v146 << dword_6FD4098C;
      v27 = v23 - v117;
      v28 = (unsigned __int64)(v27 << dword_6FD4098C) >> 32;
      v130 = v147 << dword_6FD4098C;
      v29 = (_DWORD)v27 << dword_6FD4098C;
      v30 = v111 - v103;
      v124 = v24 << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v28 = v29;
      if ( dword_6FD4098C & 0x20 )
        v29 = 0;
      v115 = sub_6F737040(v29, v28, v111 - v103);
      v31 = (unsigned __int64)(v164 << v26) >> 32;
      v32 = (_DWORD)v164 << v26;
      if ( v26 & 0x20 )
        v31 = (_DWORD)v164 << v26;
      if ( v26 & 0x20 )
        v32 = 0;
      v33 = sub_6F737040(v32, v31, v30);
      v34 = (unsigned __int64)((signed __int64)(v156 - v143) << v26) >> 32;
      v35 = (v156 - v143) << v26;
      if ( v26 & 0x20 )
        v34 = (v156 - v143) << v26;
      if ( v26 & 0x20 )
        v35 = 0;
      v36 = sub_6F737040(v35, v34, v30);
      v37 = (unsigned __int64)((signed __int64)(v157 - v142) << v26) >> 32;
      v38 = (v157 - v142) << v26;
      if ( v26 & 0x20 )
      {
        v37 = (v157 - v142) << v26;
        v38 = 0;
      }
      v39 = sub_6F737040(v38, v37, v30);
      v135 = v33;
      v137 = v36;
      v105 = v117 << v26;
      v107 = v140 << v26;
      v109 = v143 << v26;
      v110 = v142 << v26;
      if ( v162 < 0 )
      {
        v155 = v39;
        v43 = v142 << v26;
        v68 = v121 * v150;
        v69 = v121 * v148;
        v70 = v121 * v152;
        v71 = v154 * v121;
        v122 = v117 << v26;
        v110 = v133 + v71;
        v118 = v143 << v26;
        v153 = v137;
        v151 = v135;
        v109 = v70 + v130;
        v42 = v140 << v26;
        v107 = v68 + v127;
        v149 = v115;
        v105 = v124 + v69;
      }
      else
      {
        v40 = v121;
        v154 = v39;
        v41 = v121 * v151;
        v122 = v124 + v121 * v149;
        v152 = v36;
        v118 = v130 + v40 * v153;
        v42 = v41 + v127;
        v148 = v115;
        v43 = v155 * v40 + v133;
        v150 = v33;
      }
    }
    v44 = v160 - v103;
    if ( v160 - v103 > 0 )
    {
      v103 = v160;
      v105 += v44 * v148;
      v107 += v44 * v150;
      v109 += v44 * v152;
      v110 += v44 * v154;
      v122 += v44 * v149;
      v118 += v44 * v153;
      v42 += v44 * v151;
      v43 += v155 * v44;
    }
    v45 = v111;
    result = v161;
    if ( v111 > v161 )
      v45 = v161;
    v47 = v45 - v103;
    if ( v47 > 0 )
    {
      v131 = v42 - v107;
      v125 = v43 - v110;
      v128 = v118 - v109;
      v48 = v26;
      v145 = v103 + v47;
      v134 = v122 - v105;
      while ( 1 )
      {
        v49 = (1 << v48) - 1;
        v50 = v105 + v49;
        v51 = v122 + v49;
        v52 = (unsigned __int64)((signed __int64)v131 << v48) >> 32;
        v53 = v131 << v48;
        if ( v48 & 0x20 )
          v52 = v131 << v48;
        if ( v48 & 0x20 )
          v53 = 0;
        v119 = sub_6F737040(v53, v52, v134);
        v54 = (unsigned __int64)((signed __int64)v128 << v48) >> 32;
        v55 = v128 << v48;
        if ( v48 & 0x20 )
        {
          v54 = v128 << v48;
          v55 = 0;
        }
        v112 = sub_6F737040(v55, v54, v134);
        v56 = (unsigned __int64)((signed __int64)v125 << v48) >> 32;
        v57 = v125 << v48;
        if ( v48 & 0x20 )
        {
          v56 = v125 << v48;
          v57 = 0;
        }
        v58 = v50 >> v48;
        v116 = sub_6F737040(v57, v56, v134);
        v59 = (v58 << v48) - v105;
        v60 = v59 * (signed __int64)v119 >> (v48 & 0x1F);
        if ( v48 & 0x20 )
          LODWORD(v60) = (unsigned __int64)(v59 * (signed __int64)v119 >> (v48 & 0x1F)) >> 32;
        v136 = v60 + v107;
        v61 = v59 * (signed __int64)v112 >> (v48 & 0x1F);
        if ( v48 & 0x20 )
          LODWORD(v61) = (unsigned __int64)(v59 * (signed __int64)v112 >> (v48 & 0x1F)) >> 32;
        v138 = v61 + v109;
        v62 = v116 * (signed __int64)((v58 << v48) - v105) >> (v48 & 0x1F);
        if ( v48 & 0x20 )
          LODWORD(v62) = (unsigned __int64)(v116 * (signed __int64)((v58 << v48) - v105) >> (v48 & 0x1F)) >> 32;
        v63 = v139 - v58;
        v64 = v110 + v62;
        v65 = v51 >> v48;
        if ( v139 - v58 <= 0 )
        {
          v66 = v64;
        }
        else
        {
          v136 += v63 * v119;
          v138 += v63 * v112;
          v58 = v139;
          v66 = v64 + v116 * v63;
        }
        if ( v144 <= v65 )
          v65 = v144;
        v67 = v65 - v58;
        if ( v67 > 0 && sub_6F71F0C0(v103) )
        {
          if ( v159 % v165 == v166 )
          {
            v169 = v67 + v58;
            v94 = v58 + dword_6FBB52F4 * (v103 << 10);
            v170 = 4 * v58;
            v167 = dword_6FBB505C + 4 * v94 - 4 * v58;
            v168 = dword_6FBB5068 + 2 * v94 - 2 * v58;
            if ( ((_BYTE)v67 + (_BYTE)v58 + ~(_BYTE)v58) & 1 )
            {
              v100 = v58++;
              dword_6FBB5058(
                dword_6FBB5068 + 2 * v94,
                v167 + v170,
                v100,
                v103,
                (unsigned __int8)dword_70041E70,
                BYTE1(dword_70041E70),
                BYTE2(dword_70041E70),
                v138 / v136 << v48,
                v66 / v136 << v48);
              v66 += v116;
              v136 += v119;
              v95 = dword_6FD4098C;
              v96 = v112 + v138;
            }
            else
            {
              v95 = v48;
              v96 = v138;
            }
            while ( 1 )
            {
              v97 = v58 + 1;
              dword_6FBB5058(
                v168 + 2 * v58,
                v167 + 4 * v58,
                v58,
                v103,
                (unsigned __int8)dword_70041E70,
                BYTE1(dword_70041E70),
                BYTE2(dword_70041E70),
                v96 / v136 << v95,
                v66 / v136 << v95);
              v98 = v112 + v96;
              v99 = v116 + v66;
              if ( v58 + 1 == v169 )
                break;
              v58 += 2;
              dword_6FBB5058(
                v168 + 2 * v97,
                v167 + 4 * v97,
                v97,
                v103,
                (unsigned __int8)dword_70041E70,
                BYTE1(dword_70041E70),
                BYTE2(dword_70041E70),
                v98 / (v119 + v136) << dword_6FD4098C,
                v99 / (v119 + v136) << dword_6FD4098C);
              v95 = dword_6FD4098C;
              v96 = v112 + v98;
              v136 += v119 + v119;
              v66 = v116 + v99;
            }
          }
          ++v159;
        }
        ++v103;
        v105 += v148;
        result = v154;
        v107 += v150;
        v109 += v152;
        v110 += v154;
        v122 += v149;
        v131 += v151 - v150;
        v134 += v149 - v148;
        v128 += v153 - v152;
        v125 += v155 - v154;
        if ( v103 == v145 )
          break;
        v48 = dword_6FD4098C;
      }
    }
    if ( v158 == 1 )
      break;
    v158 = 1;
    v114 = v174;
    v24 = v177;
    v25 = 1;
    v117 = v178;
    v23 = v179;
    v103 = v175;
    v111 = v176;
  }
  return result;
}
