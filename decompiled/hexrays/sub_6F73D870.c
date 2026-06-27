int __usercall sub_6F73D870@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  _DWORD *v4; // ebp@1
  int v5; // ebx@1
  int v6; // esi@1
  int v7; // edx@1
  int v8; // edi@1
  int v9; // eax@1
  int v10; // ebp@1
  int v11; // eax@2
  int v12; // esi@2
  int v13; // eax@2
  int v14; // edi@4
  int v15; // esi@4
  int v16; // ebp@5
  int v17; // edx@5
  int v18; // edi@5
  int v19; // edi@6
  int v20; // ebx@6
  int v21; // edi@6
  int v22; // edi@6
  int v23; // ebx@6
  char v24; // si@8
  int v25; // edx@8
  int v26; // eax@8
  int v27; // eax@12
  int v28; // edx@12
  int v29; // eax@12
  int v30; // eax@16
  int v31; // ebp@16
  signed int v32; // edx@16
  int v33; // esi@16
  int v34; // eax@16
  int v35; // ebx@17
  int v36; // edi@18
  int v37; // esi@18
  int v38; // eax@18
  int v39; // edx@18
  int v40; // eax@18
  int v41; // edi@20
  int v42; // edx@21
  int v43; // eax@21
  int v44; // edx@24
  int v45; // eax@24
  int v46; // edi@28
  int v47; // eax@30
  int result; // eax@32
  __int64 v49; // rdi@36
  __int64 v50; // rcx@36
  unsigned __int64 v51; // rdi@36
  bool v52; // sf@36
  unsigned __int8 v53; // of@36
  __int64 v54; // rcx@40
  signed __int64 v55; // rdi@40
  bool v56; // sf@40
  unsigned __int8 v57; // of@40
  __int64 v58; // ST60_8@54
  char i; // cl@44
  __int64 v60; // ST78_8@56
  int v61; // eax@47
  int v62; // edx@47
  int v63; // ebp@47
  int v64; // esi@47
  signed __int64 v65; // rax@47
  signed __int64 v66; // rax@49
  signed int v67; // ebx@51
  int v68; // edi@51
  int v69; // ecx@58
  int v70; // ebx@60
  int v71; // ebx@62
  int v72; // ebp@67
  int v73; // edi@67
  int v74; // eax@67
  int v75; // edx@67
  int v76; // eax@67
  __int64 v77; // rax@69
  int v78; // edx@69
  int v79; // eax@69
  int v80; // edx@72
  int v81; // eax@72
  int v82; // eax@76
  int v83; // edx@76
  int v84; // eax@81
  int v85; // esi@81
  int v86; // ebx@81
  int v87; // ST08_4@85
  int v88; // eax@85
  int v89; // ST04_4@85
  int v90; // ST08_4@86
  int v91; // ecx@86
  int v92; // ST04_4@86
  int v93; // ebx@86
  int v94; // ebx@87
  int v95; // edi@87
  int v96; // ebx@87
  int v97; // edi@87
  int v98; // eax@87
  int v99; // ST04_4@87
  int v100; // ebx@87
  int v101; // edi@87
  int v102; // edx@89
  int v103; // eax@89
  int v104; // edx@93
  int v105; // eax@93
  int v106; // eax@96
  int v107; // ST08_4@84
  int v108; // edx@98
  int v109; // edi@98
  int v110; // esi@98
  int v111; // eax@98
  int v112; // [sp+30h] [bp-130h]@1
  signed __int64 v113; // [sp+30h] [bp-130h]@6
  int v114; // [sp+30h] [bp-130h]@17
  signed __int64 v115; // [sp+38h] [bp-128h]@6
  char v116; // [sp+38h] [bp-128h]@16
  int v117; // [sp+38h] [bp-128h]@49
  int v118; // [sp+38h] [bp-128h]@53
  int v119; // [sp+40h] [bp-120h]@1
  int v120; // [sp+44h] [bp-11Ch]@1
  int v121; // [sp+44h] [bp-11Ch]@21
  int v122; // [sp+44h] [bp-11Ch]@69
  int v123; // [sp+48h] [bp-118h]@1
  int v124; // [sp+48h] [bp-118h]@21
  int v125; // [sp+4Ch] [bp-114h]@1
  int v126; // [sp+4Ch] [bp-114h]@21
  int v127; // [sp+50h] [bp-110h]@1
  int v128; // [sp+50h] [bp-110h]@20
  int v129; // [sp+50h] [bp-110h]@51
  int v130; // [sp+58h] [bp-108h]@12
  int v131; // [sp+5Ch] [bp-104h]@16
  int v132; // [sp+60h] [bp-100h]@1
  int v133; // [sp+60h] [bp-100h]@18
  int v134; // [sp+68h] [bp-F8h]@47
  int v135; // [sp+6Ch] [bp-F4h]@53
  int v136; // [sp+70h] [bp-F0h]@81
  signed int v137; // [sp+74h] [bp-ECh]@51
  int v138; // [sp+74h] [bp-ECh]@81
  int v139; // [sp+80h] [bp-E0h]@6
  signed int v140; // [sp+88h] [bp-D8h]@51
  int v141; // [sp+8Ch] [bp-D4h]@1
  int v142; // [sp+90h] [bp-D0h]@1
  int v143; // [sp+A4h] [bp-BCh]@44
  __int64 v144; // [sp+A8h] [bp-B8h]@0
  __int64 v145; // [sp+B0h] [bp-B0h]@0
  int v146; // [sp+B8h] [bp-A8h]@1
  int v147; // [sp+BCh] [bp-A4h]@1
  int v148; // [sp+C0h] [bp-A0h]@1
  int v149; // [sp+C4h] [bp-9Ch]@1
  __int64 v150; // [sp+C8h] [bp-98h]@40
  __int64 v151; // [sp+D0h] [bp-90h]@44
  __int64 v152; // [sp+D8h] [bp-88h]@12
  __int64 v153; // [sp+E0h] [bp-80h]@16
  int v154; // [sp+E8h] [bp-78h]@0
  int v155; // [sp+F0h] [bp-70h]@6
  signed int v156; // [sp+F4h] [bp-6Ch]@16
  signed int v157; // [sp+F8h] [bp-68h]@16
  int v158; // [sp+FCh] [bp-64h]@1
  int v159; // [sp+100h] [bp-60h]@1
  signed int v160; // [sp+104h] [bp-5Ch]@1
  int v161; // [sp+128h] [bp-38h]@1
  int v162; // [sp+12Ch] [bp-34h]@6
  __int64 v163; // [sp+130h] [bp-30h]@36
  __int64 v164; // [sp+138h] [bp-28h]@16
  int v165; // [sp+140h] [bp-20h]@6
  __int16 v166; // [sp+145h] [bp-1Bh]@1
  unsigned __int8 v167; // [sp+147h] [bp-19h]@1
  int v168; // [sp+148h] [bp-18h]@6
  int v169; // [sp+14Ch] [bp-14h]@6
  int v170; // [sp+158h] [bp-8h]@1
  int v171; // [sp+15Ch] [bp-4h]@1
  int v172; // [sp+160h] [bp+0h]@1
  int v173; // [sp+164h] [bp+4h]@1
  int v174; // [sp+168h] [bp+8h]@1
  int v175; // [sp+16Ch] [bp+Ch]@1

  v160 = a1;
  v161 = a2;
  v141 = dword_6FBB52F4 * dword_6FBBDB98;
  v159 = dword_6FBB52F8 * dword_6FBBDBA4;
  v142 = dword_6FBB52F4 * dword_6FBBDBA0;
  v158 = dword_6FBB52F8 * dword_6FBBDB9C;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v173 = v2 * dword_6FBB52F4;
  v174 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v175 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v4 = (_DWORD *)(dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5));
  v171 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v170 = v3 * dword_6FBB52F8;
  v172 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  sub_6F733480(v2, v3, &v173, &v170);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v174,
    &v171);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v175,
    v4);
  v166 = dword_70041E70;
  v5 = (unsigned __int8)byte_6FBB5052;
  v167 = BYTE2(dword_70041E70);
  v149 = (unsigned __int8)byte_6FBB5055;
  v112 = (unsigned __int8)byte_6FBB5056;
  v148 = (unsigned __int8)byte_6FBB5051;
  v146 = (unsigned __int8)byte_6FBB5054;
  v147 = (unsigned __int8)byte_6FBB5050;
  nullsub_3();
  v6 = dword_6FBB52F4 * dword_6FBBDB90 + v173;
  v132 = v175 + dword_6FBB52F4 * dword_6FBBDB90;
  v175 += dword_6FBB52F4 * dword_6FBBDB90;
  v7 = v170;
  v127 = dword_6FBB52F4 * dword_6FBBDB90 + v174;
  v174 += dword_6FBB52F4 * dword_6FBBDB90;
  v8 = dword_6FBB52F8 * dword_6FBBDB94 + v170;
  v125 = dword_6FBB52F8 * dword_6FBBDB94 + v170;
  v170 += dword_6FBB52F8 * dword_6FBBDB94;
  v9 = v171;
  v120 = dword_6FBB52F4 * dword_6FBBDB90 + v173;
  v10 = dword_6FBB52F8 * dword_6FBBDB94 + v171;
  v173 += dword_6FBB52F4 * dword_6FBBDB90;
  v119 = dword_6FBB52F8 * dword_6FBBDB94 + v171;
  v171 += dword_6FBB52F8 * dword_6FBBDB94;
  v123 = v172 + dword_6FBB52F8 * dword_6FBBDB94;
  v172 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v7 > v9 )
  {
    v11 = v127;
    v127 = v6;
    v174 = v6;
    v12 = v146;
    v173 = v11;
    v170 = v10;
    v120 = v11;
    v13 = v147;
    v125 = v10;
    v171 = v8;
    v119 = v8;
    v146 = v149;
    v149 = v12;
    v147 = v148;
    v148 = v13;
  }
  if ( v123 < v119 )
  {
    v14 = v132;
    v172 = v119;
    v15 = v123;
    v174 = v132;
    v175 = v127;
    v171 = v123;
    if ( v123 >= v125 )
    {
      v108 = v127;
      v109 = v123;
      v110 = v149;
      v127 = v132;
      v111 = v148;
      v132 = v108;
      v148 = v5;
      v123 = v119;
      v5 = v111;
      v119 = v109;
      v149 = v112;
      v112 = v110;
    }
    else
    {
      v173 = v132;
      v171 = v125;
      v174 = v120;
      v132 = v127;
      v16 = v120;
      v123 = v119;
      v17 = v146;
      v120 = v14;
      v18 = v147;
      v119 = v125;
      v147 = v5;
      v5 = v148;
      v170 = v15;
      v127 = v16;
      v125 = v15;
      v146 = v112;
      v112 = v149;
      v149 = v17;
      v148 = v18;
    }
  }
  v19 = v5;
  v20 = v5 - v147;
  v21 = v19 - v148;
  v162 = v21;
  v168 = v20;
  v155 = (v123 - v125) * (v132 - v127) - (v123 - v119) * (v132 - v120);
  v22 = (v123 - v125) * v21 - (v123 - v119) * v20;
  v23 = (v123 - v125) * (v132 - v127) - (v123 - v119) * (v132 - v120);
  v139 = (v123 - v125) * (v132 - v127) - (v123 - v119) * (v132 - v120);
  v115 = v22;
  v165 = v112 - v149;
  v169 = v112 - v146;
  v113 = (v112 - v149) * (v123 - v125) - (v112 - v146) * (v123 - v119);
  if ( (((unsigned __int64)v139 >> 32) & 0x80000000) != 0i64 )
  {
    v139 = -v139;
    v23 = v139;
    v115 = -(signed __int64)v22;
    v113 = -(signed __int64)(signed int)v113;
  }
  v24 = dword_6FD4098C;
  v25 = (unsigned __int64)(v115 << dword_6FD4098C) >> 32;
  v26 = (_DWORD)v115 << dword_6FD4098C;
  if ( dword_6FD4098C & 0x20 )
    v25 = (_DWORD)v115 << dword_6FD4098C;
  if ( dword_6FD4098C & 0x20 )
    v26 = 0;
  v27 = sub_6F737040(v26, v25, v23);
  v130 = v27;
  v152 = v27;
  v28 = (unsigned __int64)(v113 << v24) >> 32;
  v29 = (_DWORD)v113 << v24;
  if ( v24 & 0x20 )
    v28 = (_DWORD)v113 << v24;
  if ( v24 & 0x20 )
    v29 = 0;
  v30 = sub_6F737040(v29, v28, v23);
  v116 = v24;
  v31 = v123;
  v32 = 2;
  v131 = v30;
  v33 = v125;
  v153 = v30;
  v156 = 2;
  v157 = 0;
  LODWORD(v164) = v30 >> 62;
  HIDWORD(v164) = v30 >> 62;
  v34 = v132;
  while ( 1 )
  {
    v114 = v120 << v116;
    v35 = v119 - v33;
    if ( v32 == 2 )
    {
      v72 = v31 - v33;
      v124 = v147 << v116;
      v73 = v120;
      v126 = v146 << v116;
      v74 = v34 - v120;
      v75 = (unsigned __int64)((signed __int64)v74 << v116) >> 32;
      v76 = v74 << v116;
      if ( v116 & 0x20 )
      {
        v75 = v76;
        v76 = 0;
      }
      v122 = sub_6F737040(v76, v75, v72);
      v77 = v127 - v73;
      v78 = (unsigned __int64)(v77 << v116) >> 32;
      v79 = (_DWORD)v77 << v116;
      if ( v116 & 0x20 )
      {
        v78 = v79;
        v79 = 0;
      }
      v154 = sub_6F737040(v79, v78, v35);
      v139 = v122;
      if ( v155 < 0 )
      {
        v102 = (unsigned __int64)((signed __int64)v168 << v116) >> 32;
        v103 = v168 << v116;
        if ( v116 & 0x20 )
          v102 = v168 << v116;
        if ( v116 & 0x20 )
          v103 = 0;
        v144 = sub_6F737040(v103, v102, v72);
        v104 = (unsigned __int64)((signed __int64)v169 << v116) >> 32;
        v105 = v169 << v116;
        if ( v116 & 0x20 )
        {
          v104 = v169 << v116;
          if ( v116 & 0x20 )
            v105 = 0;
        }
        v145 = sub_6F737040(v105, v104, v72);
        v106 = v154;
        v154 = v122;
        v31 = v119;
        v139 = v106;
        v121 = v114;
        v119 = v33;
      }
      else
      {
        v80 = (unsigned __int64)((signed __int64)(v148 - v147) << v116) >> 32;
        v81 = (v148 - v147) << v116;
        if ( v116 & 0x20 )
          v80 = (v148 - v147) << v116;
        if ( v116 & 0x20 )
          v81 = 0;
        v144 = sub_6F737040(v81, v80, v35);
        v82 = (v149 - v146) << v116;
        v83 = (unsigned __int64)((signed __int64)(v149 - v146) << v116) >> 32;
        if ( v116 & 0x20 )
          v83 = (v149 - v146) << v116;
        if ( v116 & 0x20 )
          v82 = 0;
        v31 = v119;
        v119 = v33;
        v145 = sub_6F737040(v82, v83, v35);
        v121 = v114;
      }
    }
    else
    {
      v133 = v120 << v116;
      v36 = v127;
      v37 = v31 - v119;
      v38 = v34 - v127;
      v39 = (unsigned __int64)((signed __int64)v38 << v116) >> 32;
      v40 = v38 << v116;
      if ( v116 & 0x20 )
      {
        v39 = v40;
        v40 = 0;
      }
      v128 = sub_6F737040(v40, v39, v31 - v119);
      v41 = v36 << v116;
      v114 = v41;
      if ( v155 < 0 )
      {
        v121 = v41;
        v124 = (v147 << v116) + v35 * v144;
        v139 = v128;
        v114 = v133 + v35 * v154;
        v126 = (v146 << v116) + v145 * v35;
      }
      else
      {
        v121 = v133 + v139 * v35;
        v126 = v149 << v116;
        v124 = v148 << v116;
        v42 = (unsigned __int64)((signed __int64)v162 << v116) >> 32;
        v43 = v162 << v116;
        if ( v116 & 0x20 )
        {
          v42 = v162 << v116;
          if ( v116 & 0x20 )
            v43 = 0;
        }
        v144 = sub_6F737040(v43, v42, v37);
        v44 = (unsigned __int64)((signed __int64)v165 << v116) >> 32;
        v45 = v165 << v116;
        if ( v116 & 0x20 )
        {
          v44 = v165 << v116;
          if ( v116 & 0x20 )
            v45 = 0;
        }
        v145 = sub_6F737040(v45, v44, v37);
        v154 = v128;
      }
    }
    v46 = v158 - v119;
    if ( v158 - v119 > 0 )
    {
      v119 = v158;
      v114 += v46 * v154;
      v121 += v46 * v139;
      v124 += v46 * v144;
      v126 += v145 * v46;
    }
    v47 = v31;
    if ( v31 > v159 )
      v47 = v159;
    result = v47 - v119;
    if ( result > 0 )
    {
      LODWORD(v49) = (SHIDWORD(v144) >> 31) ^ v144;
      HIDWORD(v49) = (SHIDWORD(v144) >> 31) ^ HIDWORD(v144);
      HIDWORD(v163) = SHIDWORD(v152) >> 31;
      LODWORD(v163) = SHIDWORD(v152) >> 31;
      v50 = (v152 ^ v163) - v163;
      v51 = v49 - __PAIR__(SHIDWORD(v144) >> 31, SHIDWORD(v144) >> 31);
      v53 = __OFSUB__(HIDWORD(v51), ((unsigned int)v51 < (unsigned int)v50) + HIDWORD(v50));
      v52 = (((v51 - v50) >> 32) & 0x80000000) != 0i64;
      if ( SHIDWORD(v51) < ((unsigned int)v51 < (unsigned int)v50) + HIDWORD(v50) )
        LODWORD(v51) = (v152 ^ v163) - v163;
      if ( !(v52 ^ v53) )
        HIDWORD(v50) = HIDWORD(v51);
      v150 = __PAIR__(HIDWORD(v50), (unsigned int)v51);
      v54 = (v153 ^ v164) - v164;
      v55 = __PAIR__((SHIDWORD(v145) >> 31) ^ HIDWORD(v145), (SHIDWORD(v145) >> 31) ^ (unsigned int)v145)
          - (SHIDWORD(v145) >> 31);
      v57 = __OFSUB__(HIDWORD(v55), ((unsigned int)v55 < (unsigned int)v54) + HIDWORD(v54));
      v56 = (((unsigned __int64)(v55 - v54) >> 32) & 0x80000000) != 0i64;
      if ( SHIDWORD(v55) < ((unsigned int)v55 < (unsigned int)v54) + HIDWORD(v54) )
        LODWORD(v55) = (v153 ^ v164) - v164;
      if ( !(v56 ^ v57) )
        HIDWORD(v54) = (__PAIR__(
                          (unsigned int)((SHIDWORD(v145) >> 31) ^ HIDWORD(v145)),
                          (SHIDWORD(v145) >> 31) ^ (unsigned int)v145)
                      - (SHIDWORD(v145) >> 31)) >> 32;
      v143 = v119 + result;
      v151 = __PAIR__(HIDWORD(v54), (unsigned int)v55);
      for ( i = v116; ; i = dword_6FD4098C )
      {
        v61 = (1 << i) - 1;
        v62 = (v61 + v114) >> i;
        v134 = (v121 + v61) >> i;
        v63 = v62;
        v64 = (v62 << i) - v114;
        v65 = v64 * (signed __int64)v130 >> (i & 0x1F);
        if ( i & 0x20 )
          LODWORD(v65) = (unsigned __int64)(v64 * (signed __int64)v130 >> (i & 0x1F)) >> 32;
        v117 = v124 + v65;
        v66 = v131 * (signed __int64)v64 >> (i & 0x1F);
        if ( i & 0x20 )
          LODWORD(v66) = (unsigned __int64)(v131 * (signed __int64)v64 >> (i & 0x1F)) >> 32;
        v67 = 1 << (i - 1);
        v68 = v67 + v126 + v66;
        v129 = v67 + v117;
        result = dword_6FBB52F4;
        v140 = dword_6FBB52F8;
        v137 = dword_6FBB52F4;
        if ( dword_6FBB52F4 > 1 || dword_6FBB52F8 > 1 )
        {
          v118 = -(v152 + v144);
          v135 = -(v153 + v145);
          if ( v150 )
          {
            HIDWORD(v58) = (unsigned __int64)-(v152 + v144) >> 32;
            LODWORD(v58) = -(v152 + v144);
            v118 = sub_6F8A13E0(SHIDWORD(v58), v58, v150);
          }
          if ( v151 )
          {
            HIDWORD(v60) = (unsigned __int64)-(v153 + v145) >> 32;
            LODWORD(v60) = -(v153 + v145);
            v135 = sub_6F8A13E0(v60, v60, v151);
          }
          v129 += v67 / v137 * (v137 - 1) * v118;
          result = v135 * (v140 - 1) * (v67 / v140);
          v68 += result;
        }
        v69 = v141 - v63;
        if ( v141 - v63 > 0 )
        {
          v129 += v69 * v130;
          v63 = v141;
          v68 += v131 * v69;
        }
        v70 = v134;
        if ( v142 <= v134 )
          v70 = v142;
        v71 = v70 - v63;
        if ( v71 > 0 )
        {
          result = sub_6F71F0C0(v119);
          if ( result )
            break;
        }
LABEL_45:
        ++v119;
        v114 += v154;
        v121 += v139;
        v124 += v144;
        v126 += v145;
        if ( v119 == v143 )
          goto LABEL_33;
      }
      result = v157 / v160;
      if ( v157 % v160 == v161 )
      {
        v84 = v63 + v137 * (v119 << 10);
        v85 = dword_6FBB505C + 4 * v84;
        v138 = v71 + v63;
        v136 = dword_6FBB5068 + 2 * v84 - 2 * v63;
        v86 = v71 & 3;
        if ( v86 )
        {
          if ( v86 != 1 )
          {
            if ( v86 != 2 )
            {
              v107 = v63++;
              v85 += 4;
              dword_6FBB5058(
                dword_6FBB5068 + 2 * v84,
                dword_6FBB505C + 4 * v84,
                v107,
                v119,
                (unsigned __int8)v166,
                HIBYTE(v166),
                v167,
                v129,
                v68);
              v68 += v131;
              v129 += v130;
            }
            v87 = v63;
            v88 = v136 + 2 * v63++;
            v89 = v85;
            v85 += 4;
            dword_6FBB5058(v88, v89, v87, v119, (unsigned __int8)v166, HIBYTE(v166), v167, v129, v68);
            v68 += v131;
            v129 += v130;
          }
          v90 = v63;
          v91 = v136 + 2 * v63++;
          v92 = v85;
          v85 += 4;
          result = dword_6FBB5058(v91, v92, v90, v119, (unsigned __int8)v166, HIBYTE(v166), v167, v129, v68);
          v68 += v131;
          v93 = v130 + v129;
          if ( v63 == v138 )
            goto LABEL_65;
        }
        else
        {
          v93 = v129;
        }
        do
        {
          dword_6FBB5058(v136 + 2 * v63, v85, v63, v119, (unsigned __int8)v166, HIBYTE(v166), v167, v93, v68);
          v94 = v130 + v93;
          v95 = v131 + v68;
          dword_6FBB5058(
            v136 + 2 * (v63 + 1),
            v85 + 4,
            v63 + 1,
            v119,
            (unsigned __int8)v166,
            HIBYTE(v166),
            v167,
            v94,
            v95);
          v96 = v130 + v94;
          v97 = v131 + v95;
          dword_6FBB5058(
            v136 + 2 * (v63 + 2),
            v85 + 8,
            v63 + 2,
            v119,
            (unsigned __int8)v166,
            HIBYTE(v166),
            v167,
            v96,
            v97);
          v98 = v63 + 3;
          v99 = v85 + 12;
          v85 += 16;
          v63 += 4;
          v100 = v130 + v96;
          v101 = v131 + v97;
          result = dword_6FBB5058(v136 + 2 * v98, v99, v98, v119, (unsigned __int8)v166, HIBYTE(v166), v167, v100, v101);
          v93 = v130 + v100;
          v68 = v131 + v101;
        }
        while ( v63 != v138 );
      }
LABEL_65:
      ++v157;
      goto LABEL_45;
    }
LABEL_33:
    if ( v156 == 1 )
      return result;
    v156 = 1;
    v120 = v173;
    v33 = v170;
    v32 = 1;
    v127 = v174;
    v34 = v175;
    v119 = v171;
    v31 = v172;
    v116 = dword_6FD4098C;
  }
}
