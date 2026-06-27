int __usercall sub_6F7498F0@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // ST34_4@1
  int v3; // edx@1
  _DWORD *v4; // ebp@1
  int v5; // ecx@7
  int v6; // edx@7
  int v7; // edi@7
  int v8; // ebp@7
  int v9; // ecx@8
  int v10; // esi@8
  int v11; // ecx@10
  int v12; // ecx@10
  int v13; // ecx@10
  int v14; // eax@10
  int v15; // ebx@11
  int v16; // eax@12
  int v17; // eax@12
  int v18; // eax@12
  int v19; // eax@12
  int v20; // esi@13
  signed int v21; // eax@13
  char v22; // bp@14
  int v23; // edi@14
  int v24; // edx@15
  int v25; // eax@15
  int v26; // ebx@15
  int v27; // edx@19
  int v28; // eax@19
  int v29; // edx@23
  int v30; // eax@23
  int v31; // edx@27
  int v32; // eax@27
  int v33; // esi@31
  int v34; // edx@31
  int v35; // eax@31
  int v36; // eax@33
  int v37; // esi@34
  int v38; // ecx@34
  int v39; // eax@35
  int v40; // eax@37
  int result; // eax@39
  char v42; // di@43
  int v43; // eax@46
  signed int v44; // ebx@46
  int v45; // edx@46
  int v46; // eax@46
  int v47; // edx@50
  int v48; // eax@50
  int v49; // edx@54
  int v50; // eax@54
  int v51; // edx@58
  int v52; // eax@58
  signed int v53; // ebx@62
  int v54; // ebp@62
  unsigned __int64 v55; // kr00_8@62
  int v56; // ebx@62
  int v57; // ebx@64
  signed __int64 v58; // rax@64
  signed __int64 v59; // rax@66
  signed int v60; // esi@68
  signed __int64 v61; // rax@68
  int v62; // ebp@70
  signed int v63; // eax@70
  int v64; // edx@70
  signed int v65; // edi@71
  signed int v66; // ebp@71
  int v67; // ebx@72
  int v68; // ebx@74
  int v69; // edx@80
  int v70; // eax@80
  int v71; // edx@84
  int v72; // eax@84
  int v73; // edx@88
  int v74; // eax@88
  int v75; // edx@92
  int v76; // eax@92
  int v77; // edx@96
  int v78; // eax@96
  int v79; // ebx@100
  int v80; // esi@100
  int v81; // edx@100
  int v82; // esi@100
  int v83; // edx@104
  int v84; // esi@104
  int v85; // edx@108
  int v86; // esi@108
  int v87; // edi@112
  int v88; // edx@112
  int v89; // eax@112
  int v90; // edx@116
  int v91; // eax@116
  int v92; // esi@120
  int v93; // eax@122
  int v94; // eax@122
  int v95; // ebx@124
  signed int v96; // ebp@125
  signed int v97; // esi@125
  int v98; // ecx@125
  signed int v99; // edi@125
  int v100; // edi@127
  int v101; // [sp+34h] [bp-16Ch]@7
  signed int v102; // [sp+34h] [bp-16Ch]@13
  int v103; // [sp+38h] [bp-168h]@7
  int v104; // [sp+38h] [bp-168h]@34
  int v105; // [sp+38h] [bp-168h]@62
  int v106; // [sp+38h] [bp-168h]@84
  int v107; // [sp+40h] [bp-160h]@14
  int v108; // [sp+44h] [bp-15Ch]@14
  int v109; // [sp+48h] [bp-158h]@14
  int v110; // [sp+4Ch] [bp-154h]@14
  int v111; // [sp+50h] [bp-150h]@7
  int v112; // [sp+50h] [bp-150h]@19
  int v113; // [sp+50h] [bp-150h]@50
  int v114; // [sp+58h] [bp-148h]@13
  int v115; // [sp+58h] [bp-148h]@54
  int v116; // [sp+58h] [bp-148h]@104
  int v117; // [sp+60h] [bp-140h]@14
  int v118; // [sp+64h] [bp-13Ch]@7
  int v119; // [sp+64h] [bp-13Ch]@23
  int v120; // [sp+64h] [bp-13Ch]@34
  int v121; // [sp+64h] [bp-13Ch]@58
  int v122; // [sp+64h] [bp-13Ch]@108
  int v123; // [sp+68h] [bp-138h]@27
  int v124; // [sp+68h] [bp-138h]@62
  int v125; // [sp+68h] [bp-138h]@88
  int v126; // [sp+70h] [bp-130h]@34
  int v127; // [sp+70h] [bp-130h]@92
  int v128; // [sp+74h] [bp-12Ch]@15
  int v129; // [sp+74h] [bp-12Ch]@43
  int v130; // [sp+74h] [bp-12Ch]@96
  int v131; // [sp+78h] [bp-128h]@15
  int v132; // [sp+78h] [bp-128h]@43
  int v133; // [sp+78h] [bp-128h]@100
  int v134; // [sp+7Ch] [bp-124h]@15
  int v135; // [sp+7Ch] [bp-124h]@43
  int v136; // [sp+7Ch] [bp-124h]@116
  int v137; // [sp+80h] [bp-120h]@15
  int v138; // [sp+80h] [bp-120h]@43
  int v139; // [sp+84h] [bp-11Ch]@15
  int v140; // [sp+84h] [bp-11Ch]@43
  int v141; // [sp+88h] [bp-118h]@33
  signed int v142; // [sp+88h] [bp-118h]@46
  signed int v143; // [sp+88h] [bp-118h]@71
  int v144; // [sp+90h] [bp-110h]@33
  signed int v145; // [sp+90h] [bp-110h]@66
  int v146; // [sp+90h] [bp-110h]@122
  int v147; // [sp+98h] [bp-108h]@1
  int v148; // [sp+9Ch] [bp-104h]@7
  int v149; // [sp+A0h] [bp-100h]@7
  int v150; // [sp+A4h] [bp-FCh]@7
  int v151; // [sp+A8h] [bp-F8h]@7
  int v152; // [sp+BCh] [bp-E4h]@1
  int v153; // [sp+C0h] [bp-E0h]@7
  int v154; // [sp+C4h] [bp-DCh]@43
  int v155; // [sp+E4h] [bp-BCh]@7
  int v156; // [sp+E8h] [bp-B8h]@7
  int v157; // [sp+ECh] [bp-B4h]@7
  int v158; // [sp+F0h] [bp-B0h]@0
  int v159; // [sp+F8h] [bp-A8h]@0
  int v160; // [sp+100h] [bp-A0h]@0
  int v161; // [sp+108h] [bp-98h]@0
  int v162; // [sp+110h] [bp-90h]@0
  int v163; // [sp+118h] [bp-88h]@0
  int v164; // [sp+120h] [bp-80h]@0
  int v165; // [sp+128h] [bp-78h]@0
  int v166; // [sp+130h] [bp-70h]@0
  int v167; // [sp+138h] [bp-68h]@0
  int v168; // [sp+140h] [bp-60h]@7
  int v169; // [sp+144h] [bp-5Ch]@7
  int v170; // [sp+148h] [bp-58h]@7
  signed int v171; // [sp+14Ch] [bp-54h]@13
  signed int v172; // [sp+150h] [bp-50h]@13
  int v173; // [sp+154h] [bp-4Ch]@1
  int v174; // [sp+158h] [bp-48h]@1
  int v175; // [sp+15Ch] [bp-44h]@13
  __int64 v176; // [sp+160h] [bp-40h]@13
  int v177; // [sp+168h] [bp-38h]@7
  signed int v178; // [sp+16Ch] [bp-34h]@1
  int v179; // [sp+170h] [bp-30h]@1
  int v180; // [sp+174h] [bp-2Ch]@122
  int v181; // [sp+178h] [bp-28h]@122
  int v182; // [sp+18Ch] [bp-14h]@1
  int v183; // [sp+190h] [bp-10h]@1
  int v184; // [sp+194h] [bp-Ch]@1
  int v185; // [sp+198h] [bp-8h]@1
  int v186; // [sp+19Ch] [bp-4h]@1
  int v187; // [sp+1A0h] [bp+0h]@1
  int v188; // [sp+1A4h] [bp+4h]@1
  int v189; // [sp+1A8h] [bp+8h]@1
  int v190; // [sp+1ACh] [bp+Ch]@1

  v178 = a1;
  v179 = a2;
  v173 = dword_6FBB52F8 * dword_6FBBDB9C;
  v147 = dword_6FBB52F4 * dword_6FBBDB98;
  v152 = dword_6FBB52F4 * dword_6FBBDBA0;
  v174 = dword_6FBB52F8 * dword_6FBBDBA4;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v189 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5) * dword_6FBB52F4;
  v188 = dword_6FBB52F4 * v2;
  v190 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5) * dword_6FBB52F4;
  v186 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5) * dword_6FBB52F8;
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v185 = v3 * dword_6FBB52F8;
  v4 = (_DWORD *)(32 * (unsigned __int16)word_70041E8A);
  LOWORD(v4) = (signed __int16)v4 >> 5;
  v187 = (signed __int16)v4 * dword_6FBB52F8;
  sub_6F732840(
    v2,
    v3,
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (__int16)v4,
    &v188,
    &v185,
    &v182,
    &v189,
    &v186,
    &v183,
    &v190,
    v4,
    &v184);
  if ( !v182 )
    v182 = 1;
  if ( !v183 )
    v183 = 1;
  if ( !v184 )
    v184 = 1;
  v148 = 0xFFFF / v182;
  v157 = 0xFFFF / v182 * (unsigned __int8)dword_70041E70;
  v153 = 0xFFFF / v183;
  v151 = 0xFFFF / v183 * (unsigned __int8)dword_70041E74;
  v156 = 0xFFFF / v182 * BYTE1(dword_70041E70);
  v177 = 0xFFFF / v184;
  v168 = 0xFFFF / v184 * (unsigned __int8)dword_70041E78;
  v150 = 0xFFFF / v183 * BYTE1(dword_70041E74);
  v169 = 0xFFFF / v184 * BYTE1(dword_70041E78);
  v155 = 0xFFFF / v182 * BYTE2(dword_70041E70);
  v170 = 0xFFFF / v184 * BYTE2(dword_70041E78);
  v149 = 0xFFFF / v183 * BYTE2(dword_70041E74);
  v101 = dword_6FBB52F4 * dword_6FBBDB90 + v188;
  v188 += dword_6FBB52F4 * dword_6FBBDB90;
  v5 = v185;
  v118 = dword_6FBB52F4 * dword_6FBBDB90 + v190;
  v6 = v186;
  v190 += dword_6FBB52F4 * dword_6FBBDB90;
  v103 = dword_6FBB52F4 * dword_6FBBDB90 + v189;
  v189 += dword_6FBB52F4 * dword_6FBBDB90;
  v7 = dword_6FBB52F8 * dword_6FBBDB94 + v187;
  v111 = dword_6FBB52F8 * dword_6FBBDB94 + v185;
  v185 += dword_6FBB52F8 * dword_6FBBDB94;
  v8 = dword_6FBB52F8 * dword_6FBBDB94 + v186;
  v186 += dword_6FBB52F8 * dword_6FBBDB94;
  v187 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v5 > v6 )
  {
    v185 = v8;
    v9 = v103;
    v189 = v101;
    v103 = v101;
    v186 = v111;
    v148 = 0xFFFF / v183;
    v153 = 0xFFFF / v182;
    v188 = v9;
    v101 = v9;
    v151 = 0xFFFF / v182 * (unsigned __int8)dword_70041E70;
    v157 = 0xFFFF / v183 * (unsigned __int8)dword_70041E74;
    v156 = 0xFFFF / v183 * BYTE1(dword_70041E74);
    v10 = v8;
    v8 = v111;
    v150 = 0xFFFF / v182 * BYTE1(dword_70041E70);
    v149 = 0xFFFF / v182 * BYTE2(dword_70041E70);
    v155 = 0xFFFF / v183 * BYTE2(dword_70041E74);
    v111 = v10;
  }
  if ( v7 < v8 )
  {
    v186 = v7;
    v11 = v149;
    v187 = v8;
    v189 = v118;
    v149 = 0xFFFF / v184 * BYTE2(dword_70041E78);
    v170 = v11;
    v12 = v150;
    v150 = 0xFFFF / v184 * BYTE1(dword_70041E78);
    v169 = v12;
    v13 = v151;
    v151 = 0xFFFF / v184 * (unsigned __int8)dword_70041E78;
    v190 = v103;
    v168 = v13;
    v177 = v153;
    v118 = v103;
    v103 = v189;
    v153 = 0xFFFF / v184;
    v14 = v8;
    v8 = v7;
    v7 = v14;
  }
  v15 = v111;
  if ( v111 > v8 )
  {
    v16 = v149;
    v111 = v8;
    v186 = v15;
    v149 = v155;
    v155 = v16;
    v17 = v150;
    v150 = v156;
    v156 = v17;
    v18 = v151;
    v151 = v157;
    v157 = v18;
    v19 = v153;
    v188 = v103;
    v189 = v101;
    v153 = v148;
    v148 = v19;
    v103 = v101;
    v101 = v188;
    v185 = v8;
    v8 = v15;
  }
  v20 = v101;
  v102 = v8;
  v114 = v7;
  v171 = 2;
  v172 = 0;
  v21 = 2;
  v175 = (v7 - v111) * (v118 - v103) - (v7 - v8) * (v118 - v20);
  v176 = v177 - v153;
  while ( 1 )
  {
    v22 = dword_6FD4098C;
    v107 = v20 << dword_6FD4098C;
    v108 = v148 << dword_6FD4098C;
    v109 = v157 << dword_6FD4098C;
    v110 = v156 << dword_6FD4098C;
    v117 = v155 << dword_6FD4098C;
    v23 = v102 - v111;
    if ( v21 == 2 )
    {
      v69 = (unsigned __int64)((signed __int64)(v103 - v20) << dword_6FD4098C) >> 32;
      v70 = (v103 - v20) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v69 = (v103 - v20) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v70 = 0;
      v106 = sub_6F737040(v70, v69, v102 - v111);
      v71 = (unsigned __int64)((signed __int64)(v153 - v148) << v22) >> 32;
      v72 = (v153 - v148) << v22;
      if ( v22 & 0x20 )
        v71 = (v153 - v148) << v22;
      if ( v22 & 0x20 )
        v72 = 0;
      v125 = sub_6F737040(v72, v71, v23);
      v73 = (unsigned __int64)((signed __int64)(v151 - v157) << v22) >> 32;
      v74 = (v151 - v157) << v22;
      if ( v22 & 0x20 )
        v73 = (v151 - v157) << v22;
      if ( v22 & 0x20 )
        v74 = 0;
      v127 = sub_6F737040(v74, v73, v23);
      v75 = (unsigned __int64)((signed __int64)(v150 - v156) << v22) >> 32;
      v76 = (v150 - v156) << v22;
      if ( v22 & 0x20 )
        v75 = (v150 - v156) << v22;
      if ( v22 & 0x20 )
        v76 = 0;
      v130 = sub_6F737040(v76, v75, v23);
      v77 = (unsigned __int64)((signed __int64)(v149 - v155) << v22) >> 32;
      v78 = (v149 - v155) << v22;
      if ( v22 & 0x20 )
        v77 = (v149 - v155) << v22;
      if ( v22 & 0x20 )
        v78 = 0;
      v79 = v114 - v111;
      v133 = sub_6F737040(v78, v77, v23);
      v80 = v118 - v20;
      v81 = (unsigned __int64)((signed __int64)v80 << v22) >> 32;
      v82 = v80 << v22;
      if ( v22 & 0x20 )
        v81 = v82;
      if ( v22 & 0x20 )
        v82 = 0;
      v116 = sub_6F737040(v82, v81, v114 - v111);
      v83 = (v177 - v148) << v22;
      v84 = (unsigned __int64)((signed __int64)(v177 - v148) << v22) >> 32;
      if ( v22 & 0x20 )
        v84 = (v177 - v148) << v22;
      if ( v22 & 0x20 )
        v83 = 0;
      v122 = sub_6F737040(v83, v84, v79);
      v85 = (v168 - v157) << v22;
      v86 = (unsigned __int64)((signed __int64)(v168 - v157) << v22) >> 32;
      if ( v22 & 0x20 )
        v86 = (v168 - v157) << v22;
      if ( v22 & 0x20 )
        v85 = 0;
      v87 = sub_6F737040(v85, v86, v79);
      v88 = (unsigned __int64)((signed __int64)(v169 - v156) << v22) >> 32;
      v89 = (v169 - v156) << v22;
      if ( v22 & 0x20 )
        v88 = (v169 - v156) << v22;
      if ( v22 & 0x20 )
        v89 = 0;
      v136 = sub_6F737040(v89, v88, v79);
      v90 = (unsigned __int64)((signed __int64)(v170 - v155) << v22) >> 32;
      v91 = (v170 - v155) << v22;
      if ( v22 & 0x20 )
        v90 = (v170 - v155) << v22;
      if ( v22 & 0x20 )
        v91 = 0;
      v158 = v106;
      v163 = v87;
      v160 = v125;
      v162 = v127;
      v159 = v116;
      v161 = v122;
      v164 = v130;
      v92 = sub_6F737040(v91, v90, v79);
      v165 = v136;
      v167 = v92;
      v166 = v133;
      if ( v175 < 0 )
      {
        v167 = v133;
        v166 = v92;
        v165 = v130;
        v164 = v136;
        v120 = v110;
        v163 = v127;
        v162 = v87;
        v38 = v117;
        v37 = v109;
        v160 = v161;
        v161 = v125;
        v100 = v106;
        v104 = v108;
        v158 = v116;
        v159 = v100;
        v126 = v107;
        v114 = v102;
        v102 = v111;
      }
      else
      {
        v38 = v117;
        v37 = v109;
        v120 = v110;
        v104 = v108;
        v126 = v107;
        v114 = v102;
        v102 = v111;
      }
    }
    else
    {
      v139 = v155 << dword_6FD4098C;
      v134 = v157 << dword_6FD4098C;
      v131 = v148 << dword_6FD4098C;
      v128 = v20 << dword_6FD4098C;
      v24 = (unsigned __int64)((signed __int64)(v118 - v103) << dword_6FD4098C) >> 32;
      v137 = v156 << dword_6FD4098C;
      v25 = (v118 - v103) << dword_6FD4098C;
      v26 = v114 - v102;
      if ( dword_6FD4098C & 0x20 )
        v24 = (v118 - v103) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v25 = 0;
      v112 = sub_6F737040(v25, v24, v114 - v102);
      v27 = (unsigned __int64)(v176 << v22) >> 32;
      v28 = (_DWORD)v176 << v22;
      if ( v22 & 0x20 )
        v27 = (_DWORD)v176 << v22;
      if ( v22 & 0x20 )
        v28 = 0;
      v119 = sub_6F737040(v28, v27, v26);
      v29 = (unsigned __int64)((signed __int64)(v168 - v151) << v22) >> 32;
      v30 = (v168 - v151) << v22;
      if ( v22 & 0x20 )
        v29 = (v168 - v151) << v22;
      if ( v22 & 0x20 )
        v30 = 0;
      v123 = sub_6F737040(v30, v29, v26);
      v31 = (unsigned __int64)((signed __int64)(v169 - v150) << v22) >> 32;
      v32 = (v169 - v150) << v22;
      if ( v22 & 0x20 )
        v31 = (v169 - v150) << v22;
      if ( v22 & 0x20 )
        v32 = 0;
      v33 = sub_6F737040(v32, v31, v26);
      v34 = (unsigned __int64)((signed __int64)(v170 - v149) << v22) >> 32;
      v35 = (v170 - v149) << v22;
      if ( v22 & 0x20 )
      {
        v34 = (v170 - v149) << v22;
        v35 = 0;
      }
      v144 = v33;
      v107 = v103 << v22;
      v108 = v153 << v22;
      v109 = v151 << v22;
      v110 = v150 << v22;
      v117 = v149 << v22;
      v141 = v119;
      v36 = sub_6F737040(v35, v34, v26);
      if ( v175 < 0 )
      {
        v167 = v36;
        v38 = v149 << v22;
        v117 = v139 + v166 * v23;
        v120 = v150 << v22;
        v165 = v33;
        v110 = v23 * v164 + v137;
        v163 = v123;
        v37 = v151 << v22;
        v161 = v141;
        v109 = v23 * v162 + v134;
        v104 = v153 << v22;
        v159 = v112;
        v108 = v23 * v160 + v131;
        v126 = v107;
        v107 = v23 * v158 + v128;
      }
      else
      {
        v166 = v36;
        v126 = v128 + v23 * v159;
        v104 = v23 * v161 + v131;
        v120 = v137 + v23 * v165;
        v37 = v23 * v163 + v134;
        v38 = v167 * v23 + v139;
        v162 = v123;
        v164 = v144;
        v158 = v112;
        v160 = v141;
      }
    }
    v39 = v173 - v102;
    if ( v173 - v102 > 0 )
    {
      v102 = v173;
      v107 += v39 * v158;
      v108 += v39 * v160;
      v109 += v39 * v162;
      v110 += v39 * v164;
      v117 += v39 * v166;
      v126 += v39 * v159;
      v104 += v39 * v161;
      v120 += v39 * v165;
      v37 += v39 * v163;
      v38 += v167 * v39;
    }
    v40 = v114;
    if ( v114 > v174 )
      v40 = v174;
    result = v40 - v102;
    if ( result > 0 )
    {
      v138 = v104 - v108;
      v135 = v37 - v109;
      v132 = v120 - v110;
      v140 = v126 - v107;
      v42 = v22;
      v129 = v38 - v117;
      v154 = v102 + result;
      while ( 1 )
      {
        v43 = (1 << v42) - 1;
        v44 = v43 + v107;
        v142 = v126 + v43;
        v45 = (unsigned __int64)((signed __int64)v138 << v42) >> 32;
        v46 = v138 << v42;
        if ( v42 & 0x20 )
          v45 = v138 << v42;
        if ( v42 & 0x20 )
          v46 = 0;
        v113 = sub_6F737040(v46, v45, v140);
        v47 = (unsigned __int64)((signed __int64)v135 << v42) >> 32;
        v48 = v135 << v42;
        if ( v42 & 0x20 )
          v47 = v135 << v42;
        if ( v42 & 0x20 )
          v48 = 0;
        v115 = sub_6F737040(v48, v47, v140);
        v49 = (unsigned __int64)((signed __int64)v132 << v42) >> 32;
        v50 = v132 << v42;
        if ( v42 & 0x20 )
          v49 = v132 << v42;
        if ( v42 & 0x20 )
          v50 = 0;
        v121 = sub_6F737040(v50, v49, v140);
        v51 = (unsigned __int64)((signed __int64)v129 << v42) >> 32;
        v52 = v129 << v42;
        if ( v42 & 0x20 )
          v51 = v129 << v42;
        if ( v42 & 0x20 )
          v52 = 0;
        v53 = v44 >> v42;
        v124 = sub_6F737040(v52, v51, v140);
        v105 = v53;
        v54 = (v53 << v42) - v107;
        v55 = v54 * (signed __int64)v113;
        v56 = v55 >> v42;
        if ( v42 & 0x20 )
          v56 = SHIDWORD(v55) >> v42;
        v57 = v108 + v56;
        v58 = v54 * (signed __int64)v115 >> (v42 & 0x1F);
        if ( v42 & 0x20 )
          LODWORD(v58) = (unsigned __int64)(v54 * (signed __int64)v115 >> (v42 & 0x1F)) >> 32;
        v145 = v58 + v109;
        v59 = v54 * (signed __int64)v121 >> (v42 & 0x1F);
        if ( v42 & 0x20 )
          LODWORD(v59) = (unsigned __int64)(v54 * (signed __int64)v121 >> (v42 & 0x1F)) >> 32;
        v60 = v59 + v110;
        v61 = v124 * (signed __int64)v54 >> (v42 & 0x1F);
        if ( v42 & 0x20 )
          LODWORD(v61) = (unsigned __int64)(v124 * (signed __int64)v54 >> (v42 & 0x1F)) >> 32;
        v62 = v147 - v105;
        v63 = v117 + v61;
        v64 = v142 >> v42;
        if ( v147 - v105 <= 0 )
        {
          v143 = v57;
          v65 = v145;
          v66 = v63;
        }
        else
        {
          v143 = v62 * v113 + v57;
          v60 += v62 * v121;
          v65 = v62 * v115 + v145;
          v66 = v63 + v124 * v62;
          v105 = v147;
        }
        v67 = v64;
        if ( v152 <= v64 )
          v67 = v152;
        v68 = v67 - v105;
        if ( v68 > 0 && sub_6F71F0C0(v102) )
        {
          if ( v172 % v178 == v179 )
          {
            v93 = v105 + dword_6FBB52F4 * (v102 << 10);
            v146 = dword_6FBB505C + 4 * v93 - 4 * v105;
            v180 = dword_6FBB5068 + 2 * v93 - 2 * v105;
            v94 = v105;
            v181 = v68 + v105;
            if ( !(v68 & 1)
              || (dword_6FBB5058(
                    2 * v105 + v180,
                    v146 + 4 * v105,
                    v105,
                    v102,
                    (unsigned __int8)(v65 / v143),
                    (unsigned __int8)(v60 / v143),
                    (unsigned __int8)(v66 / v143),
                    0,
                    0),
                  v65 += v115,
                  v94 = v105 + 1,
                  v60 += v121,
                  v66 += v124,
                  v143 += v113,
                  v105 + 1 != v181) )
            {
              v95 = v94;
              do
              {
                dword_6FBB5058(
                  v180 + 2 * v95,
                  v146 + 4 * v95,
                  v95,
                  v102,
                  (unsigned __int8)(v65 / v143),
                  (unsigned __int8)(v60 / v143),
                  (unsigned __int8)(v66 / v143),
                  0,
                  0);
                v96 = v124 + v66;
                v97 = v121 + v60;
                v98 = v95 + 1;
                v95 += 2;
                v99 = v115 + v65;
                dword_6FBB5058(
                  v180 + 2 * v98,
                  v146 + 4 * v98,
                  v98,
                  v102,
                  (unsigned __int8)(v99 / (v113 + v143)),
                  (unsigned __int8)(v97 / (v113 + v143)),
                  (unsigned __int8)(v96 / (v113 + v143)),
                  0,
                  0);
                v65 = v115 + v99;
                v60 = v121 + v97;
                v143 += v113 + v113;
                v66 = v124 + v96;
              }
              while ( v95 != v181 );
            }
          }
          ++v172;
        }
        ++v102;
        v107 += v158;
        v108 += v160;
        v109 += v162;
        v110 += v164;
        v117 += v166;
        v126 += v159;
        result = v165 - v164;
        v138 += v161 - v160;
        v140 += v159 - v158;
        v135 += v163 - v162;
        v132 += v165 - v164;
        v129 += v167 - v166;
        if ( v102 == v154 )
          break;
        v42 = dword_6FD4098C;
      }
    }
    if ( v171 == 1 )
      break;
    v171 = 1;
    v114 = v187;
    v21 = 1;
    v103 = v189;
    v20 = v188;
    v111 = v185;
    v118 = v190;
    v102 = v186;
  }
  return result;
}
