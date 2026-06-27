int __usercall sub_6F744610@<eax>(signed int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // esi@1
  int v6; // eax@1
  int v7; // edx@1
  int v8; // edi@1
  int v9; // ecx@1
  int v10; // edx@1
  int v11; // esi@1
  int v12; // eax@1
  int v13; // ebp@1
  int v14; // ebx@1
  int v15; // edx@2
  int v16; // eax@2
  int v17; // esi@2
  int v18; // eax@2
  int v19; // eax@4
  int v20; // edx@5
  int v21; // eax@5
  int v22; // eax@5
  int v23; // ecx@5
  int v24; // esi@6
  char v25; // di@8
  int v26; // edx@8
  int v27; // eax@8
  int v28; // edx@10
  int v29; // eax@10
  int v30; // edx@12
  int v31; // eax@12
  int v32; // ecx@14
  char v33; // si@14
  int v34; // edi@14
  signed int v35; // edx@14
  int v36; // eax@14
  int v37; // ebp@15
  int v38; // eax@16
  int v39; // edi@16
  int v40; // edx@16
  int v41; // eax@16
  int v42; // edx@19
  int v43; // eax@19
  int v44; // edx@22
  int v45; // eax@22
  int v46; // edx@26
  int v47; // eax@26
  int result; // eax@31
  int v49; // ebx@35
  char v50; // di@39
  int v51; // ebx@42
  int v52; // eax@42
  int v53; // ebx@42
  int v54; // ebp@42
  int v55; // esi@42
  signed __int64 v56; // rax@42
  signed __int64 v57; // rax@44
  signed __int64 v58; // rax@46
  char v59; // cl@46
  signed int v60; // esi@48
  int v61; // eax@48
  int v62; // ebx@52
  int v63; // eax@57
  int v64; // ebx@57
  int v65; // edx@57
  int v66; // eax@57
  int v67; // edx@59
  int v68; // eax@59
  int v69; // edx@62
  int v70; // eax@62
  int v71; // edx@66
  int v72; // eax@66
  int v73; // edx@70
  int v74; // eax@70
  int v75; // eax@75
  int v76; // edx@75
  int v77; // eax@75
  char v78; // cl@76
  signed int v79; // eax@76
  signed int v80; // edi@76
  signed int v81; // esi@76
  signed int v82; // eax@77
  signed int v83; // eax@81
  signed int v84; // eax@85
  signed int v85; // ebx@88
  signed int v86; // edx@90
  signed int v87; // edx@94
  signed int v88; // edx@98
  int v89; // edx@102
  signed int v90; // edi@102
  signed int v91; // ecx@104
  signed int v92; // ecx@108
  signed int v93; // ecx@112
  signed int v94; // edx@112
  int v95; // ebx@116
  int v96; // edx@117
  int v97; // eax@117
  int v98; // edx@121
  int v99; // eax@121
  int v100; // edx@125
  int v101; // eax@125
  int v102; // eax@129
  int v103; // eax@130
  int v104; // edx@130
  int v105; // eax@130
  int v106; // ecx@130
  int v107; // [sp+8h] [bp-154h]@77
  int v108; // [sp+8h] [bp-154h]@104
  signed int v109; // [sp+14h] [bp-148h]@85
  signed int v110; // [sp+14h] [bp-148h]@98
  signed int v111; // [sp+14h] [bp-148h]@112
  signed int v112; // [sp+18h] [bp-144h]@81
  signed int v113; // [sp+18h] [bp-144h]@94
  signed int v114; // [sp+18h] [bp-144h]@108
  int v115; // [sp+38h] [bp-124h]@1
  __int64 v116; // [sp+38h] [bp-124h]@6
  signed int v117; // [sp+38h] [bp-124h]@14
  int v118; // [sp+44h] [bp-118h]@1
  int v119; // [sp+44h] [bp-118h]@15
  int v120; // [sp+48h] [bp-114h]@1
  int v121; // [sp+48h] [bp-114h]@19
  int v122; // [sp+4Ch] [bp-110h]@1
  int v123; // [sp+4Ch] [bp-110h]@19
  int v124; // [sp+50h] [bp-10Ch]@1
  __int64 v125; // [sp+50h] [bp-10Ch]@6
  int v126; // [sp+50h] [bp-10Ch]@19
  __int64 v127; // [sp+58h] [bp-104h]@6
  int v128; // [sp+58h] [bp-104h]@19
  int v129; // [sp+60h] [bp-FCh]@10
  int v130; // [sp+64h] [bp-F8h]@12
  int v131; // [sp+68h] [bp-F4h]@14
  int v132; // [sp+6Ch] [bp-F0h]@1
  int v133; // [sp+6Ch] [bp-F0h]@16
  int v134; // [sp+6Ch] [bp-F0h]@44
  signed int v135; // [sp+6Ch] [bp-F0h]@48
  signed int v136; // [sp+6Ch] [bp-F0h]@102
  int v137; // [sp+70h] [bp-ECh]@18
  int v138; // [sp+70h] [bp-ECh]@46
  signed int v139; // [sp+70h] [bp-ECh]@48
  int v140; // [sp+70h] [bp-ECh]@59
  signed int v141; // [sp+70h] [bp-ECh]@77
  signed int v142; // [sp+70h] [bp-ECh]@90
  int v143; // [sp+78h] [bp-E4h]@6
  int v144; // [sp+80h] [bp-DCh]@1
  int v145; // [sp+84h] [bp-D8h]@1
  int v146; // [sp+9Ch] [bp-C0h]@39
  int v147; // [sp+A0h] [bp-BCh]@1
  int v148; // [sp+A4h] [bp-B8h]@1
  int v149; // [sp+A8h] [bp-B4h]@1
  int v150; // [sp+ACh] [bp-B0h]@1
  int v151; // [sp+B0h] [bp-ACh]@1
  int v152; // [sp+B4h] [bp-A8h]@1
  int v153; // [sp+B8h] [bp-A4h]@0
  int v154; // [sp+C0h] [bp-9Ch]@6
  signed int v155; // [sp+C4h] [bp-98h]@14
  int v156; // [sp+C8h] [bp-94h]@0
  int v157; // [sp+D0h] [bp-8Ch]@0
  int v158; // [sp+D8h] [bp-84h]@0
  signed int v159; // [sp+E0h] [bp-7Ch]@14
  int v160; // [sp+E4h] [bp-78h]@1
  int v161; // [sp+E8h] [bp-74h]@1
  signed int v162; // [sp+ECh] [bp-70h]@1
  int v163; // [sp+F0h] [bp-6Ch]@1
  int v164; // [sp+F4h] [bp-68h]@6
  int v165; // [sp+F8h] [bp-64h]@6
  int v166; // [sp+FCh] [bp-60h]@6
  int v167; // [sp+100h] [bp-5Ch]@75
  int v168; // [sp+104h] [bp-58h]@75
  __int64 v169; // [sp+108h] [bp-54h]@14
  int v170; // [sp+110h] [bp-4Ch]@6
  int v171; // [sp+114h] [bp-48h]@6
  int v172; // [sp+118h] [bp-44h]@6
  int v173; // [sp+11Ch] [bp-40h]@75
  int v174; // [sp+128h] [bp-34h]@1
  int v175; // [sp+12Ch] [bp-30h]@1
  int v176; // [sp+130h] [bp-2Ch]@1
  int v177; // [sp+134h] [bp-28h]@1
  int v178; // [sp+138h] [bp-24h]@1
  int v179; // [sp+13Ch] [bp-20h]@1

  v5 = a3;
  v162 = a1;
  v163 = a2;
  v144 = dword_6FBB52F4 * dword_6FBBDB98;
  v145 = dword_6FBB52F4 * dword_6FBBDBA0;
  v160 = dword_6FBB52F8 * dword_6FBBDB9C;
  v161 = dword_6FBB52F8 * dword_6FBBDBA4;
  v6 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v177 = v6 * dword_6FBB52F4;
  v178 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v179 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v7 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v174 = v7 * dword_6FBB52F8;
  v175 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v176 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  sub_6F733480(v6, v7, &v177, &v174);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v178,
    &v175);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v179,
    &v176);
  v147 = (unsigned __int8)v5;
  v150 = BYTE1(v5);
  v8 = (unsigned __int8)a5;
  v148 = (unsigned __int8)a4;
  v152 = (unsigned __int8)(a4 >> 16);
  v149 = (unsigned __int8)(v5 >> 16);
  v151 = BYTE1(a4);
  v115 = BYTE1(a5);
  v9 = dword_6FBB52F4 * dword_6FBBDB90 + v178;
  v122 = dword_6FBB52F4 * dword_6FBBDB90 + v179;
  v10 = v174;
  v179 += dword_6FBB52F4 * dword_6FBBDB90;
  v11 = dword_6FBB52F4 * dword_6FBBDB90 + v177;
  v12 = v175;
  v124 = (unsigned __int8)(a5 >> 16);
  v132 = dword_6FBB52F4 * dword_6FBBDB90 + v177;
  v177 += dword_6FBB52F4 * dword_6FBBDB90;
  v120 = dword_6FBB52F4 * dword_6FBBDB90 + v178;
  v118 = dword_6FBB52F8 * dword_6FBBDB94 + v174;
  v174 += dword_6FBB52F8 * dword_6FBBDB94;
  v13 = dword_6FBB52F8 * dword_6FBBDB94 + v175;
  v14 = v176 + dword_6FBB52F8 * dword_6FBBDB94;
  v178 += dword_6FBB52F4 * dword_6FBBDB90;
  v175 += dword_6FBB52F8 * dword_6FBBDB94;
  v176 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v10 > v12 )
  {
    v15 = v118;
    v16 = v149;
    v174 = v13;
    v118 = v13;
    v175 = v15;
    v13 = v15;
    v177 = v9;
    v178 = v11;
    v120 = v11;
    v17 = v150;
    v132 = v9;
    v149 = (unsigned __int8)(a4 >> 16);
    v152 = v16;
    v18 = v147;
    v150 = BYTE1(a4);
    v151 = v17;
    v147 = (unsigned __int8)a4;
    v148 = v18;
  }
  if ( v14 < v13 )
  {
    v19 = v122;
    v175 = v14;
    v176 = v13;
    v178 = v122;
    v179 = v120;
    if ( v14 >= v118 )
    {
      v103 = v120;
      v104 = v14;
      v14 = v13;
      v13 = v104;
      v120 = v122;
      v122 = v103;
      v105 = v151;
      v124 = v152;
      v106 = v148;
      v152 = (unsigned __int8)(a5 >> 16);
      v148 = (unsigned __int8)a5;
      v8 = v106;
      v151 = BYTE1(a5);
      v115 = v105;
    }
    else
    {
      v177 = v122;
      v174 = v14;
      v178 = v132;
      v175 = v118;
      v122 = v120;
      v20 = v149;
      v120 = v132;
      v132 = v19;
      v21 = v14;
      v14 = v13;
      v13 = v118;
      v118 = v21;
      v124 = v152;
      v22 = v150;
      v23 = v147;
      v149 = (unsigned __int8)(a5 >> 16);
      v152 = v20;
      v147 = (unsigned __int8)a5;
      v115 = v151;
      v8 = v148;
      v150 = BYTE1(a5);
      v151 = v22;
      v148 = v23;
    }
  }
  v164 = v8 - v148;
  v170 = v8 - v147;
  v154 = (v14 - v118) * (v122 - v120) - (v14 - v13) * (v122 - v132);
  v143 = (v14 - v118) * (v122 - v120) - (v14 - v13) * (v122 - v132);
  v127 = (v14 - v118) * (v8 - v148) - (v14 - v13) * (v8 - v147);
  v171 = v115 - v150;
  v165 = v115 - v151;
  v116 = (v14 - v118) * (v115 - v151) - (v14 - v13) * (v115 - v150);
  v166 = v124 - v152;
  v172 = v124 - v149;
  v125 = (v124 - v152) * (v14 - v118) - (v124 - v149) * (v14 - v13);
  v24 = (v14 - v118) * (v122 - v120) - (v14 - v13) * (v122 - v132);
  if ( (((unsigned __int64)v143 >> 32) & 0x80000000) != 0i64 )
  {
    v143 = -v143;
    v24 = v143;
    v127 = -v127;
    v116 = -v116;
    v125 = -v125;
  }
  v25 = dword_6FD4098C;
  v26 = (unsigned __int64)(v127 << dword_6FD4098C) >> 32;
  v27 = (_DWORD)v127 << dword_6FD4098C;
  if ( dword_6FD4098C & 0x20 )
  {
    v26 = (_DWORD)v127 << dword_6FD4098C;
    v27 = 0;
  }
  v129 = sub_6F737040(v27, v26, v24);
  v28 = (unsigned __int64)(v116 << v25) >> 32;
  v29 = (_DWORD)v116 << v25;
  if ( v25 & 0x20 )
  {
    v28 = (_DWORD)v116 << v25;
    v29 = 0;
  }
  v130 = sub_6F737040(v29, v28, v24);
  v30 = (unsigned __int64)(v125 << v25) >> 32;
  v31 = (_DWORD)v125 << v25;
  if ( v25 & 0x20 )
  {
    v30 = (_DWORD)v125 << v25;
    v31 = 0;
  }
  v32 = v24;
  v33 = v25;
  v155 = 2;
  v131 = sub_6F737040(v31, v30, v32);
  v34 = v118;
  v159 = 0;
  v117 = v13;
  v169 = v148 - v147;
  v35 = 2;
  v36 = v122;
  while ( 1 )
  {
    v119 = v132 << v33;
    v37 = v117 - v34;
    if ( v35 == 2 )
    {
      v63 = v36 - v132;
      v64 = v14 - v34;
      v123 = v147 << v33;
      v126 = v150 << v33;
      v128 = v149 << v33;
      v65 = (unsigned __int64)((signed __int64)v63 << v33) >> 32;
      v66 = v63 << v33;
      if ( v33 & 0x20 )
      {
        v65 = v66;
        v66 = 0;
      }
      v140 = sub_6F737040(v66, v65, v64);
      v67 = (unsigned __int64)((signed __int64)(v120 - v132) << v33) >> 32;
      v68 = (v120 - v132) << v33;
      if ( v33 & 0x20 )
      {
        v67 = (v120 - v132) << v33;
        v68 = 0;
      }
      v153 = sub_6F737040(v68, v67, v37);
      v143 = v140;
      if ( v154 < 0 )
      {
        v96 = (unsigned __int64)((signed __int64)v170 << v33) >> 32;
        v97 = v170 << v33;
        if ( v33 & 0x20 )
          v96 = v170 << v33;
        if ( v33 & 0x20 )
          v97 = 0;
        v156 = sub_6F737040(v97, v96, v64);
        v98 = (unsigned __int64)((signed __int64)v171 << v33) >> 32;
        v99 = v171 << v33;
        if ( v33 & 0x20 )
          v98 = v171 << v33;
        if ( v33 & 0x20 )
          v99 = 0;
        v157 = sub_6F737040(v99, v98, v64);
        v100 = (unsigned __int64)((signed __int64)v172 << v33) >> 32;
        v101 = v172 << v33;
        if ( v33 & 0x20 )
          v100 = v172 << v33;
        if ( v33 & 0x20 )
          v101 = 0;
        v158 = sub_6F737040(v101, v100, v64);
        v102 = v153;
        v14 = v117;
        v153 = v140;
        v143 = v102;
        v121 = v132 << v33;
        v117 = v34;
      }
      else
      {
        v69 = (unsigned __int64)(v169 << v33) >> 32;
        v70 = (_DWORD)v169 << v33;
        if ( v33 & 0x20 )
          v69 = (_DWORD)v169 << v33;
        if ( v33 & 0x20 )
          v70 = 0;
        v156 = sub_6F737040(v70, v69, v37);
        v71 = (unsigned __int64)((signed __int64)(v151 - v150) << v33) >> 32;
        v72 = (v151 - v150) << v33;
        if ( v33 & 0x20 )
          v71 = (v151 - v150) << v33;
        if ( v33 & 0x20 )
          v72 = 0;
        v157 = sub_6F737040(v72, v71, v37);
        v73 = (unsigned __int64)((signed __int64)(v152 - v149) << v33) >> 32;
        v74 = (v152 - v149) << v33;
        if ( v33 & 0x20 )
          v73 = (v152 - v149) << v33;
        if ( v33 & 0x20 )
          v74 = 0;
        v14 = v117;
        v117 = v34;
        v158 = sub_6F737040(v74, v73, v37);
        v121 = v132 << v33;
      }
    }
    else
    {
      v38 = v36 - v120;
      v133 = v132 << v33;
      v39 = v14 - v117;
      v40 = (unsigned __int64)((signed __int64)v38 << v33) >> 32;
      v41 = v38 << v33;
      if ( v33 & 0x20 )
      {
        v40 = v41;
        v41 = 0;
      }
      v137 = sub_6F737040(v41, v40, v14 - v117);
      v119 = v120 << v33;
      if ( v154 < 0 )
      {
        v123 = v37 * v156 + (v147 << v33);
        v126 = v37 * v157 + (v150 << v33);
        v143 = v137;
        v128 = (v149 << v33) + v158 * v37;
        v121 = v120 << v33;
        v119 = v133 + v37 * v153;
      }
      else
      {
        v121 = v133 + v143 * v37;
        v123 = v148 << v33;
        v126 = v151 << v33;
        v128 = v152 << v33;
        v42 = (unsigned __int64)((signed __int64)v164 << v33) >> 32;
        v43 = v164 << v33;
        if ( v33 & 0x20 )
        {
          v42 = v164 << v33;
          if ( v33 & 0x20 )
            v43 = 0;
        }
        v156 = sub_6F737040(v43, v42, v39);
        v44 = (unsigned __int64)((signed __int64)v165 << v33) >> 32;
        v45 = v165 << v33;
        if ( v33 & 0x20 )
          v44 = v165 << v33;
        if ( v33 & 0x20 )
          v45 = 0;
        v157 = sub_6F737040(v45, v44, v39);
        v46 = (unsigned __int64)((signed __int64)v166 << v33) >> 32;
        v47 = v166 << v33;
        if ( v33 & 0x20 )
          v46 = v166 << v33;
        if ( v33 & 0x20 )
          v47 = 0;
        v158 = sub_6F737040(v47, v46, v39);
        v153 = v137;
      }
    }
    result = v160 - v117;
    if ( v160 - v117 > 0 )
    {
      v117 = v160;
      v119 += result * v153;
      v121 += result * v143;
      v123 += result * v156;
      v126 += result * v157;
      result *= v158;
      v128 += result;
    }
    if ( v14 > v161 )
      v14 = v161;
    v49 = v14 - v117;
    if ( v49 > 0 )
    {
      v50 = v33;
      v146 = v117 + v49;
      while ( 1 )
      {
        v51 = (1 << v50) - 1;
        v52 = (v119 + v51) >> v50;
        v53 = (v121 + v51) >> v50;
        v54 = v52;
        v55 = (v52 << v50) - v119;
        v56 = v55 * (signed __int64)v129 >> (v50 & 0x1F);
        if ( v50 & 0x20 )
          LODWORD(v56) = (unsigned __int64)(v55 * (signed __int64)v129 >> (v50 & 0x1F)) >> 32;
        v134 = v123 + v56;
        v57 = v55 * (signed __int64)v130 >> (v50 & 0x1F);
        if ( v50 & 0x20 )
          LODWORD(v57) = (unsigned __int64)(v55 * (signed __int64)v130 >> (v50 & 0x1F)) >> 32;
        v138 = v126 + v57;
        v58 = v131 * (signed __int64)v55 >> (v50 & 0x1F);
        v59 = v50 - 1;
        if ( v50 & 0x20 )
          LODWORD(v58) = (unsigned __int64)(v131 * (signed __int64)v55 >> (v50 & 0x1F)) >> 32;
        v135 = (1 << v59) + v134;
        v60 = v128 + v58 + (1 << v59);
        v139 = (1 << v59) + v138;
        v61 = v144 - v54;
        if ( v144 - v54 > 0 )
        {
          v135 += v61 * v129;
          v54 = v144;
          v139 += v61 * v130;
          v60 += v131 * v61;
        }
        if ( v145 <= v53 )
          v53 = v145;
        v62 = v53 - v54;
        if ( v62 > 0 && sub_6F71F0C0(v117) )
        {
          if ( v159 % v162 == v163 )
          {
            v173 = v62 + v54;
            v75 = v54 + dword_6FBB52F4 * (v117 << 10);
            v167 = dword_6FBB505C + 4 * v75 - 4 * v54;
            v76 = dword_6FBB5068 + 2 * v75;
            v77 = 2 * v54;
            v168 = v76 - 2 * v54;
            if ( ((_BYTE)v62 + (_BYTE)v54 + ~(_BYTE)v54) & 1 )
            {
              v108 = v54;
              v91 = v60 >> v50;
              if ( v60 >> v50 > 255 )
                v91 = 255;
              if ( v91 < 0 )
                v91 = 0;
              v114 = v91;
              v92 = v139 >> v50;
              if ( v139 >> v50 > 255 )
                v92 = 255;
              if ( v92 < 0 )
                v92 = 0;
              v111 = v92;
              v93 = v135 >> v50;
              v94 = 0;
              if ( v135 >> v50 > 255 )
                v93 = 255;
              if ( v93 >= 0 )
                v94 = v93;
              v95 = v167 + 4 * v54++;
              dword_6FBB5058(v168 + v77, v95, v108, v117, v94, v111, v114, 0, 0);
              v78 = dword_6FD4098C;
              v79 = v131 + v60;
              v80 = v130 + v139;
              v81 = v129 + v135;
            }
            else
            {
              v78 = v50;
              v79 = v60;
              v80 = v139;
              v81 = v135;
            }
            while ( 1 )
            {
              v142 = v79;
              v86 = v79 >> v78;
              if ( v79 >> v78 > 255 )
                v86 = 255;
              v85 = 0;
              if ( v86 < 0 )
                v86 = 0;
              v113 = v86;
              v87 = v80 >> v78;
              if ( v80 >> v78 > 255 )
                v87 = 255;
              if ( v87 < 0 )
                v87 = 0;
              v110 = v87;
              v88 = v81 >> v78;
              if ( v81 >> v78 > 255 )
                v88 = 255;
              if ( v88 < 0 )
                v88 = 0;
              dword_6FBB5058(v168 + 2 * v54, v167 + 4 * v54, v54, v117, v88, v110, v113, 0, 0);
              v89 = v54 + 1;
              v136 = v129 + v81;
              v90 = v130 + v80;
              if ( v54 + 1 == v173 )
                break;
              v141 = v142 + v131;
              v107 = v54 + 1;
              v82 = v141 >> dword_6FD4098C;
              if ( v141 >> dword_6FD4098C > 255 )
                v82 = 255;
              if ( v82 < 0 )
                v82 = 0;
              v112 = v82;
              v83 = v90 >> dword_6FD4098C;
              if ( v90 >> dword_6FD4098C > 255 )
                v83 = 255;
              if ( v83 < 0 )
                v83 = 0;
              v109 = v83;
              v84 = v136 >> dword_6FD4098C;
              if ( v136 >> dword_6FD4098C > 255 )
                v84 = 255;
              if ( v84 >= 0 )
                v85 = v84;
              v54 += 2;
              dword_6FBB5058(v168 + 2 * v89, v167 + 4 * v89, v107, v117, v85, v109, v112, 0, 0);
              v78 = dword_6FD4098C;
              v81 = v129 + v136;
              v80 = v130 + v90;
              v79 = v131 + v141;
            }
          }
          ++v159;
        }
        ++v117;
        result = v156;
        v119 += v153;
        v121 += v143;
        v123 += v156;
        v126 += v157;
        v128 += v158;
        if ( v117 == v146 )
          break;
        v50 = dword_6FD4098C;
      }
    }
    if ( v155 == 1 )
      break;
    v35 = 1;
    v155 = 1;
    v34 = v174;
    v132 = v177;
    v36 = v179;
    v117 = v175;
    v33 = dword_6FD4098C;
    v120 = v178;
    v14 = v176;
  }
  return result;
}
