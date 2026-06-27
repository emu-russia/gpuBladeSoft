int __usercall sub_6F73E990@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  _DWORD *v4; // ebp@1
  int v5; // edx@1
  int v6; // esi@1
  int v7; // ecx@1
  int v8; // edi@1
  int v9; // eax@1
  int v10; // ebp@1
  int v11; // ebx@1
  int v12; // edx@2
  int v13; // eax@4
  int v14; // edx@5
  int v15; // ecx@5
  int v16; // eax@5
  int v17; // eax@5
  int v18; // edx@5
  int v19; // esi@6
  char v20; // di@8
  int v21; // edx@8
  int v22; // eax@8
  int v23; // edx@10
  int v24; // eax@10
  int v25; // edx@12
  int v26; // eax@12
  int v27; // ecx@14
  char v28; // si@14
  int v29; // edi@14
  signed int v30; // edx@14
  int v31; // eax@14
  int v32; // ebp@15
  int v33; // eax@16
  int v34; // edi@16
  int v35; // edx@16
  int v36; // eax@16
  int v37; // edx@19
  int v38; // eax@19
  int v39; // edx@22
  int v40; // eax@22
  int v41; // edx@26
  int v42; // eax@26
  int result; // eax@31
  int v44; // ebx@35
  char v45; // di@39
  int v46; // ebx@42
  int v47; // eax@42
  int v48; // ebx@42
  int v49; // ebp@42
  int v50; // esi@42
  signed __int64 v51; // rax@42
  signed __int64 v52; // rax@44
  signed __int64 v53; // rax@46
  char v54; // cl@46
  signed int v55; // esi@48
  int v56; // eax@48
  int v57; // ebx@52
  int v58; // eax@57
  int v59; // ebx@57
  int v60; // edx@57
  int v61; // eax@57
  int v62; // edx@59
  int v63; // eax@59
  int v64; // edx@62
  int v65; // eax@62
  int v66; // edx@66
  int v67; // eax@66
  int v68; // edx@70
  int v69; // eax@70
  int v70; // eax@75
  int v71; // edx@75
  int v72; // eax@75
  char v73; // cl@76
  signed int v74; // eax@76
  signed int v75; // edi@76
  signed int v76; // esi@76
  signed int v77; // eax@77
  signed int v78; // eax@81
  signed int v79; // eax@85
  signed int v80; // ebx@88
  signed int v81; // edx@90
  signed int v82; // edx@94
  signed int v83; // edx@98
  int v84; // edx@102
  signed int v85; // edi@102
  signed int v86; // ecx@104
  signed int v87; // ecx@108
  signed int v88; // ecx@112
  signed int v89; // edx@112
  int v90; // ebx@116
  int v91; // edx@117
  int v92; // eax@117
  int v93; // edx@121
  int v94; // eax@121
  int v95; // edx@125
  int v96; // eax@125
  int v97; // eax@129
  int v98; // ecx@130
  int v99; // edx@130
  int v100; // esi@130
  int v101; // ecx@130
  int v102; // [sp+8h] [bp-128h]@77
  int v103; // [sp+8h] [bp-128h]@104
  signed int v104; // [sp+14h] [bp-11Ch]@85
  signed int v105; // [sp+14h] [bp-11Ch]@98
  signed int v106; // [sp+14h] [bp-11Ch]@112
  signed int v107; // [sp+18h] [bp-118h]@81
  signed int v108; // [sp+18h] [bp-118h]@94
  signed int v109; // [sp+18h] [bp-118h]@108
  int v110; // [sp+38h] [bp-F8h]@1
  __int64 v111; // [sp+38h] [bp-F8h]@6
  signed int v112; // [sp+38h] [bp-F8h]@14
  int v113; // [sp+44h] [bp-ECh]@1
  int v114; // [sp+44h] [bp-ECh]@15
  int v115; // [sp+48h] [bp-E8h]@1
  int v116; // [sp+48h] [bp-E8h]@19
  int v117; // [sp+4Ch] [bp-E4h]@1
  int v118; // [sp+4Ch] [bp-E4h]@19
  int v119; // [sp+50h] [bp-E0h]@1
  __int64 v120; // [sp+50h] [bp-E0h]@6
  int v121; // [sp+50h] [bp-E0h]@19
  __int64 v122; // [sp+58h] [bp-D8h]@6
  int v123; // [sp+58h] [bp-D8h]@19
  int v124; // [sp+60h] [bp-D0h]@10
  int v125; // [sp+64h] [bp-CCh]@12
  int v126; // [sp+68h] [bp-C8h]@14
  int v127; // [sp+6Ch] [bp-C4h]@1
  int v128; // [sp+6Ch] [bp-C4h]@16
  int v129; // [sp+6Ch] [bp-C4h]@44
  signed int v130; // [sp+6Ch] [bp-C4h]@48
  signed int v131; // [sp+6Ch] [bp-C4h]@102
  int v132; // [sp+70h] [bp-C0h]@18
  int v133; // [sp+70h] [bp-C0h]@46
  signed int v134; // [sp+70h] [bp-C0h]@48
  int v135; // [sp+70h] [bp-C0h]@59
  signed int v136; // [sp+70h] [bp-C0h]@77
  signed int v137; // [sp+70h] [bp-C0h]@90
  int v138; // [sp+78h] [bp-B8h]@6
  int v139; // [sp+80h] [bp-B0h]@1
  int v140; // [sp+84h] [bp-ACh]@1
  int v141; // [sp+9Ch] [bp-94h]@39
  int v142; // [sp+A0h] [bp-90h]@1
  int v143; // [sp+A4h] [bp-8Ch]@1
  int v144; // [sp+A8h] [bp-88h]@1
  int v145; // [sp+ACh] [bp-84h]@1
  int v146; // [sp+B0h] [bp-80h]@1
  int v147; // [sp+B4h] [bp-7Ch]@1
  int v148; // [sp+B8h] [bp-78h]@0
  int v149; // [sp+C0h] [bp-70h]@6
  signed int v150; // [sp+C4h] [bp-6Ch]@14
  int v151; // [sp+C8h] [bp-68h]@0
  int v152; // [sp+D0h] [bp-60h]@0
  int v153; // [sp+D8h] [bp-58h]@0
  signed int v154; // [sp+E0h] [bp-50h]@14
  int v155; // [sp+E4h] [bp-4Ch]@1
  int v156; // [sp+E8h] [bp-48h]@1
  signed int v157; // [sp+ECh] [bp-44h]@1
  int v158; // [sp+F0h] [bp-40h]@1
  int v159; // [sp+F4h] [bp-3Ch]@6
  int v160; // [sp+F8h] [bp-38h]@6
  int v161; // [sp+FCh] [bp-34h]@6
  int v162; // [sp+100h] [bp-30h]@75
  int v163; // [sp+104h] [bp-2Ch]@75
  __int64 v164; // [sp+108h] [bp-28h]@14
  int v165; // [sp+110h] [bp-20h]@6
  int v166; // [sp+114h] [bp-1Ch]@6
  int v167; // [sp+118h] [bp-18h]@6
  int v168; // [sp+11Ch] [bp-14h]@75
  int v169; // [sp+128h] [bp-8h]@1
  int v170; // [sp+12Ch] [bp-4h]@1
  int v171; // [sp+130h] [bp+0h]@1
  int v172; // [sp+134h] [bp+4h]@1
  int v173; // [sp+138h] [bp+8h]@1
  int v174; // [sp+13Ch] [bp+Ch]@1

  v157 = a1;
  v158 = a2;
  v139 = dword_6FBB52F4 * dword_6FBBDB98;
  v156 = dword_6FBB52F8 * dword_6FBBDBA4;
  v140 = dword_6FBB52F4 * dword_6FBBDBA0;
  v155 = dword_6FBB52F8 * dword_6FBBDB9C;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v172 = v2 * dword_6FBB52F4;
  v173 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v174 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v4 = (_DWORD *)(dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5));
  v170 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v169 = v3 * dword_6FBB52F8;
  v171 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  sub_6F733480(v2, v3, &v172, &v169);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v173,
    &v170);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v174,
    v4);
  v145 = BYTE1(dword_70041E70);
  v110 = (unsigned __int8)dword_70041E78;
  v142 = (unsigned __int8)dword_70041E70;
  v143 = (unsigned __int8)dword_70041E74;
  v119 = BYTE1(dword_70041E78);
  v117 = dword_6FBB52F4 * dword_6FBBDB90 + v174;
  v5 = v169;
  v174 += dword_6FBB52F4 * dword_6FBBDB90;
  v6 = dword_6FBB52F4 * dword_6FBBDB90 + v172;
  v147 = BYTE2(dword_70041E74);
  v127 = dword_6FBB52F4 * dword_6FBBDB90 + v172;
  v144 = BYTE2(dword_70041E70);
  v7 = dword_6FBB52F4 * dword_6FBBDB90 + v173;
  v146 = BYTE1(dword_70041E74);
  v8 = BYTE2(dword_70041E78);
  v113 = dword_6FBB52F8 * dword_6FBBDB94 + v169;
  v172 += dword_6FBB52F4 * dword_6FBBDB90;
  v115 = dword_6FBB52F4 * dword_6FBBDB90 + v173;
  v173 += dword_6FBB52F4 * dword_6FBBDB90;
  v169 += dword_6FBB52F8 * dword_6FBBDB94;
  v9 = v170;
  v10 = dword_6FBB52F8 * dword_6FBBDB94 + v170;
  v11 = v171 + dword_6FBB52F8 * dword_6FBBDB94;
  v170 += dword_6FBB52F8 * dword_6FBBDB94;
  v171 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v5 > v9 )
  {
    v12 = v113;
    v169 = v10;
    v113 = v10;
    v170 = v12;
    v10 = v12;
    v172 = v7;
    v173 = v6;
    v115 = v6;
    v127 = v7;
    v144 = BYTE2(dword_70041E74);
    v147 = BYTE2(dword_70041E70);
    v145 = BYTE1(dword_70041E74);
    v146 = BYTE1(dword_70041E70);
    v142 = (unsigned __int8)dword_70041E74;
    v143 = (unsigned __int8)dword_70041E70;
  }
  if ( v11 < v10 )
  {
    v13 = v117;
    v170 = v11;
    v171 = v10;
    v173 = v117;
    v174 = v115;
    if ( v11 >= v113 )
    {
      v98 = v117;
      v99 = v11;
      v11 = v10;
      v100 = v147;
      v10 = v99;
      v147 = BYTE2(dword_70041E78);
      v117 = v115;
      v115 = v98;
      v8 = v100;
      v101 = v146;
      v110 = v143;
      v146 = BYTE1(dword_70041E78);
      v119 = v101;
      v143 = (unsigned __int8)dword_70041E78;
    }
    else
    {
      v172 = v117;
      v169 = v11;
      v173 = v127;
      v170 = v113;
      v117 = v115;
      v14 = v144;
      v115 = v127;
      v15 = v145;
      v127 = v13;
      v16 = v11;
      v11 = v10;
      v10 = v113;
      v113 = v16;
      v144 = BYTE2(dword_70041E78);
      v17 = v146;
      v8 = v147;
      v145 = BYTE1(dword_70041E78);
      v147 = v14;
      v18 = v142;
      v146 = v15;
      v119 = v17;
      v110 = v143;
      v142 = (unsigned __int8)dword_70041E78;
      v143 = v18;
    }
  }
  v149 = (v11 - v113) * (v117 - v115) - (v11 - v10) * (v117 - v127);
  v138 = (v11 - v113) * (v117 - v115) - (v11 - v10) * (v117 - v127);
  v159 = v110 - v143;
  v165 = v110 - v142;
  v111 = (v11 - v113) * (v110 - v143) - (v11 - v10) * (v110 - v142);
  v166 = v119 - v145;
  v160 = v119 - v146;
  v120 = (v11 - v113) * (v119 - v146) - (v11 - v10) * (v119 - v145);
  v167 = v8 - v144;
  v161 = v8 - v147;
  v122 = (v8 - v147) * (v11 - v113) - (v8 - v144) * (v11 - v10);
  v19 = (v11 - v113) * (v117 - v115) - (v11 - v10) * (v117 - v127);
  if ( (((unsigned __int64)v138 >> 32) & 0x80000000) != 0i64 )
  {
    v138 = -v138;
    v19 = v138;
    v111 = -v111;
    v120 = -v120;
    v122 = -v122;
  }
  v20 = dword_6FD4098C;
  v21 = (unsigned __int64)(v111 << dword_6FD4098C) >> 32;
  v22 = (_DWORD)v111 << dword_6FD4098C;
  if ( dword_6FD4098C & 0x20 )
  {
    v21 = (_DWORD)v111 << dword_6FD4098C;
    v22 = 0;
  }
  v124 = sub_6F737040(v22, v21, v19);
  v23 = (unsigned __int64)(v120 << v20) >> 32;
  v24 = (_DWORD)v120 << v20;
  if ( v20 & 0x20 )
  {
    v23 = (_DWORD)v120 << v20;
    v24 = 0;
  }
  v125 = sub_6F737040(v24, v23, v19);
  v25 = (unsigned __int64)(v122 << v20) >> 32;
  v26 = (_DWORD)v122 << v20;
  if ( v20 & 0x20 )
  {
    v25 = (_DWORD)v122 << v20;
    v26 = 0;
  }
  v27 = v19;
  v28 = v20;
  v150 = 2;
  v126 = sub_6F737040(v26, v25, v27);
  v29 = v113;
  v154 = 0;
  v112 = v10;
  v164 = v143 - v142;
  v30 = 2;
  v31 = v117;
  while ( 1 )
  {
    v114 = v127 << v28;
    v32 = v112 - v29;
    if ( v30 == 2 )
    {
      v58 = v31 - v127;
      v59 = v11 - v29;
      v118 = v142 << v28;
      v121 = v145 << v28;
      v123 = v144 << v28;
      v60 = (unsigned __int64)((signed __int64)v58 << v28) >> 32;
      v61 = v58 << v28;
      if ( v28 & 0x20 )
      {
        v60 = v61;
        v61 = 0;
      }
      v135 = sub_6F737040(v61, v60, v59);
      v62 = (unsigned __int64)((signed __int64)(v115 - v127) << v28) >> 32;
      v63 = (v115 - v127) << v28;
      if ( v28 & 0x20 )
      {
        v62 = (v115 - v127) << v28;
        v63 = 0;
      }
      v148 = sub_6F737040(v63, v62, v32);
      v138 = v135;
      if ( v149 < 0 )
      {
        v91 = (unsigned __int64)((signed __int64)v165 << v28) >> 32;
        v92 = v165 << v28;
        if ( v28 & 0x20 )
          v91 = v165 << v28;
        if ( v28 & 0x20 )
          v92 = 0;
        v151 = sub_6F737040(v92, v91, v59);
        v93 = (unsigned __int64)((signed __int64)v166 << v28) >> 32;
        v94 = v166 << v28;
        if ( v28 & 0x20 )
          v93 = v166 << v28;
        if ( v28 & 0x20 )
          v94 = 0;
        v152 = sub_6F737040(v94, v93, v59);
        v95 = (unsigned __int64)((signed __int64)v167 << v28) >> 32;
        v96 = v167 << v28;
        if ( v28 & 0x20 )
          v95 = v167 << v28;
        if ( v28 & 0x20 )
          v96 = 0;
        v153 = sub_6F737040(v96, v95, v59);
        v97 = v148;
        v11 = v112;
        v148 = v135;
        v138 = v97;
        v116 = v127 << v28;
        v112 = v29;
      }
      else
      {
        v64 = (unsigned __int64)(v164 << v28) >> 32;
        v65 = (_DWORD)v164 << v28;
        if ( v28 & 0x20 )
          v64 = (_DWORD)v164 << v28;
        if ( v28 & 0x20 )
          v65 = 0;
        v151 = sub_6F737040(v65, v64, v32);
        v66 = (unsigned __int64)((signed __int64)(v146 - v145) << v28) >> 32;
        v67 = (v146 - v145) << v28;
        if ( v28 & 0x20 )
          v66 = (v146 - v145) << v28;
        if ( v28 & 0x20 )
          v67 = 0;
        v152 = sub_6F737040(v67, v66, v32);
        v68 = (unsigned __int64)((signed __int64)(v147 - v144) << v28) >> 32;
        v69 = (v147 - v144) << v28;
        if ( v28 & 0x20 )
          v68 = (v147 - v144) << v28;
        if ( v28 & 0x20 )
          v69 = 0;
        v11 = v112;
        v112 = v29;
        v153 = sub_6F737040(v69, v68, v32);
        v116 = v127 << v28;
      }
    }
    else
    {
      v33 = v31 - v115;
      v128 = v127 << v28;
      v34 = v11 - v112;
      v35 = (unsigned __int64)((signed __int64)v33 << v28) >> 32;
      v36 = v33 << v28;
      if ( v28 & 0x20 )
      {
        v35 = v36;
        v36 = 0;
      }
      v132 = sub_6F737040(v36, v35, v11 - v112);
      v114 = v115 << v28;
      if ( v149 < 0 )
      {
        v118 = v32 * v151 + (v142 << v28);
        v121 = v32 * v152 + (v145 << v28);
        v138 = v132;
        v123 = (v144 << v28) + v153 * v32;
        v116 = v115 << v28;
        v114 = v128 + v32 * v148;
      }
      else
      {
        v116 = v128 + v138 * v32;
        v118 = v143 << v28;
        v121 = v146 << v28;
        v123 = v147 << v28;
        v37 = (unsigned __int64)((signed __int64)v159 << v28) >> 32;
        v38 = v159 << v28;
        if ( v28 & 0x20 )
        {
          v37 = v159 << v28;
          if ( v28 & 0x20 )
            v38 = 0;
        }
        v151 = sub_6F737040(v38, v37, v34);
        v39 = (unsigned __int64)((signed __int64)v160 << v28) >> 32;
        v40 = v160 << v28;
        if ( v28 & 0x20 )
          v39 = v160 << v28;
        if ( v28 & 0x20 )
          v40 = 0;
        v152 = sub_6F737040(v40, v39, v34);
        v41 = (unsigned __int64)((signed __int64)v161 << v28) >> 32;
        v42 = v161 << v28;
        if ( v28 & 0x20 )
          v41 = v161 << v28;
        if ( v28 & 0x20 )
          v42 = 0;
        v153 = sub_6F737040(v42, v41, v34);
        v148 = v132;
      }
    }
    result = v155 - v112;
    if ( v155 - v112 > 0 )
    {
      v112 = v155;
      v114 += result * v148;
      v116 += result * v138;
      v118 += result * v151;
      v121 += result * v152;
      result *= v153;
      v123 += result;
    }
    if ( v11 > v156 )
      v11 = v156;
    v44 = v11 - v112;
    if ( v44 > 0 )
    {
      v45 = v28;
      v141 = v112 + v44;
      while ( 1 )
      {
        v46 = (1 << v45) - 1;
        v47 = (v114 + v46) >> v45;
        v48 = (v116 + v46) >> v45;
        v49 = v47;
        v50 = (v47 << v45) - v114;
        v51 = v50 * (signed __int64)v124 >> (v45 & 0x1F);
        if ( v45 & 0x20 )
          LODWORD(v51) = (unsigned __int64)(v50 * (signed __int64)v124 >> (v45 & 0x1F)) >> 32;
        v129 = v118 + v51;
        v52 = v50 * (signed __int64)v125 >> (v45 & 0x1F);
        if ( v45 & 0x20 )
          LODWORD(v52) = (unsigned __int64)(v50 * (signed __int64)v125 >> (v45 & 0x1F)) >> 32;
        v133 = v121 + v52;
        v53 = v126 * (signed __int64)v50 >> (v45 & 0x1F);
        v54 = v45 - 1;
        if ( v45 & 0x20 )
          LODWORD(v53) = (unsigned __int64)(v126 * (signed __int64)v50 >> (v45 & 0x1F)) >> 32;
        v130 = (1 << v54) + v129;
        v55 = v123 + v53 + (1 << v54);
        v134 = (1 << v54) + v133;
        v56 = v139 - v49;
        if ( v139 - v49 > 0 )
        {
          v130 += v56 * v124;
          v49 = v139;
          v134 += v56 * v125;
          v55 += v126 * v56;
        }
        if ( v140 <= v48 )
          v48 = v140;
        v57 = v48 - v49;
        if ( v57 > 0 && sub_6F71F0C0(v112) )
        {
          if ( v154 % v157 == v158 )
          {
            v168 = v57 + v49;
            v70 = v49 + dword_6FBB52F4 * (v112 << 10);
            v162 = dword_6FBB505C + 4 * v70 - 4 * v49;
            v71 = dword_6FBB5068 + 2 * v70;
            v72 = 2 * v49;
            v163 = v71 - 2 * v49;
            if ( ((_BYTE)v57 + (_BYTE)v49 + ~(_BYTE)v49) & 1 )
            {
              v103 = v49;
              v86 = v55 >> v45;
              if ( v55 >> v45 > 255 )
                v86 = 255;
              if ( v86 < 0 )
                v86 = 0;
              v109 = v86;
              v87 = v134 >> v45;
              if ( v134 >> v45 > 255 )
                v87 = 255;
              if ( v87 < 0 )
                v87 = 0;
              v106 = v87;
              v88 = v130 >> v45;
              v89 = 0;
              if ( v130 >> v45 > 255 )
                v88 = 255;
              if ( v88 >= 0 )
                v89 = v88;
              v90 = v162 + 4 * v49++;
              dword_6FBB5058(v163 + v72, v90, v103, v112, v89, v106, v109, 0, 0);
              v73 = dword_6FD4098C;
              v74 = v126 + v55;
              v75 = v125 + v134;
              v76 = v124 + v130;
            }
            else
            {
              v73 = v45;
              v74 = v55;
              v75 = v134;
              v76 = v130;
            }
            while ( 1 )
            {
              v137 = v74;
              v81 = v74 >> v73;
              if ( v74 >> v73 > 255 )
                v81 = 255;
              v80 = 0;
              if ( v81 < 0 )
                v81 = 0;
              v108 = v81;
              v82 = v75 >> v73;
              if ( v75 >> v73 > 255 )
                v82 = 255;
              if ( v82 < 0 )
                v82 = 0;
              v105 = v82;
              v83 = v76 >> v73;
              if ( v76 >> v73 > 255 )
                v83 = 255;
              if ( v83 < 0 )
                v83 = 0;
              dword_6FBB5058(v163 + 2 * v49, v162 + 4 * v49, v49, v112, v83, v105, v108, 0, 0);
              v84 = v49 + 1;
              v131 = v124 + v76;
              v85 = v125 + v75;
              if ( v49 + 1 == v168 )
                break;
              v136 = v137 + v126;
              v102 = v49 + 1;
              v77 = v136 >> dword_6FD4098C;
              if ( v136 >> dword_6FD4098C > 255 )
                v77 = 255;
              if ( v77 < 0 )
                v77 = 0;
              v107 = v77;
              v78 = v85 >> dword_6FD4098C;
              if ( v85 >> dword_6FD4098C > 255 )
                v78 = 255;
              if ( v78 < 0 )
                v78 = 0;
              v104 = v78;
              v79 = v131 >> dword_6FD4098C;
              if ( v131 >> dword_6FD4098C > 255 )
                v79 = 255;
              if ( v79 >= 0 )
                v80 = v79;
              v49 += 2;
              dword_6FBB5058(v163 + 2 * v84, v162 + 4 * v84, v102, v112, v80, v104, v107, 0, 0);
              v73 = dword_6FD4098C;
              v76 = v124 + v131;
              v75 = v125 + v85;
              v74 = v126 + v136;
            }
          }
          ++v154;
        }
        ++v112;
        result = v151;
        v114 += v148;
        v116 += v138;
        v118 += v151;
        v121 += v152;
        v123 += v153;
        if ( v112 == v141 )
          break;
        v45 = dword_6FD4098C;
      }
    }
    if ( v150 == 1 )
      break;
    v30 = 1;
    v150 = 1;
    v29 = v169;
    v127 = v172;
    v31 = v174;
    v112 = v170;
    v28 = dword_6FD4098C;
    v115 = v173;
    v11 = v171;
  }
  return result;
}
