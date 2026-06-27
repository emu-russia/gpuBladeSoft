int __usercall sub_6F741670@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  int result; // eax@1
  int v5; // ebx@3
  int v6; // ebp@3
  int v7; // ebx@3
  int v8; // eax@7
  int v9; // edx@8
  int v10; // ebx@8
  int v11; // eax@12
  int v12; // eax@13
  __int64 v13; // ST108_8@34
  char v14; // bp@22
  int v15; // eax@22
  signed int v16; // ebx@22
  int v17; // edx@22
  int v18; // eax@22
  int v19; // eax@26
  int v20; // edi@26
  int v21; // edx@26
  int v22; // eax@26
  int v23; // eax@28
  signed int v24; // ebx@28
  int v25; // esi@28
  signed __int64 v26; // rax@28
  int v27; // ebx@30
  signed __int64 v28; // rax@30
  char v29; // cl@30
  unsigned int v30; // ecx@34
  __int64 v31; // rdi@34
  __int64 v32; // rax@34
  bool v33; // cf@34
  unsigned __int8 v34; // of@34
  int v35; // edi@34
  unsigned __int64 v36; // rax@38
  unsigned int v37; // ebx@38
  unsigned int v38; // esi@38
  int v39; // esi@42
  int v40; // esi@47
  int v41; // ebx@47
  int v42; // ebx@51
  int v43; // eax@55
  char v44; // si@55
  int v45; // edi@55
  int v46; // edi@55
  int v47; // edi@55
  int v48; // eax@55
  int v49; // edx@55
  int v50; // eax@55
  __int64 v51; // rax@57
  int v52; // edx@57
  int v53; // eax@57
  int v54; // eax@59
  int v55; // edx@59
  int v56; // eax@59
  int v57; // eax@63
  char v58; // si@63
  int v59; // edi@63
  int v60; // edi@63
  int v61; // edi@63
  int v62; // eax@63
  int v63; // edx@63
  int v64; // eax@63
  __int64 v65; // rax@65
  int v66; // edx@65
  int v67; // eax@65
  int v68; // eax@67
  int v69; // edx@67
  int v70; // eax@67
  int v71; // ecx@72
  int v72; // edi@72
  int v73; // eax@72
  int v74; // ebp@72
  int v75; // esi@73
  int v76; // ebx@73
  int v77; // ebp@73
  int v78; // eax@74
  int v79; // edx@74
  int v80; // esi@74
  int v81; // ebp@74
  signed int v82; // [sp+3Ch] [bp-250h]@3
  __int64 v83; // [sp+40h] [bp-24Ch]@0
  int v84; // [sp+40h] [bp-24Ch]@63
  __int64 v85; // [sp+48h] [bp-244h]@26
  __int64 v86; // [sp+48h] [bp-244h]@42
  int v87; // [sp+48h] [bp-244h]@63
  int v88; // [sp+48h] [bp-244h]@73
  __int64 v89; // [sp+50h] [bp-23Ch]@0
  int v90; // [sp+50h] [bp-23Ch]@63
  int v91; // [sp+58h] [bp-234h]@0
  int v92; // [sp+5Ch] [bp-230h]@1
  int v93; // [sp+5Ch] [bp-230h]@28
  __int64 v94; // [sp+60h] [bp-22Ch]@28
  int v95; // [sp+60h] [bp-22Ch]@55
  int v96; // [sp+60h] [bp-22Ch]@72
  int v97; // [sp+68h] [bp-224h]@28
  int v98; // [sp+68h] [bp-224h]@55
  int v99; // [sp+6Ch] [bp-220h]@0
  int v100; // [sp+70h] [bp-21Ch]@0
  int v101; // [sp+74h] [bp-218h]@0
  int v102; // [sp+78h] [bp-214h]@26
  int v103; // [sp+78h] [bp-214h]@55
  signed int v104; // [sp+7Ch] [bp-210h]@32
  int v105; // [sp+80h] [bp-20Ch]@32
  int v106; // [sp+84h] [bp-208h]@32
  unsigned __int64 v107; // [sp+A0h] [bp-1ECh]@38
  unsigned int v108; // [sp+A0h] [bp-1ECh]@42
  int v109; // [sp+B0h] [bp-1DCh]@20
  int v110; // [sp+B4h] [bp-1D8h]@20
  int v111; // [sp+B8h] [bp-1D4h]@20
  signed int v112; // [sp+BCh] [bp-1D0h]@22
  signed int v113; // [sp+C0h] [bp-1CCh]@32
  signed int v114; // [sp+C4h] [bp-1C8h]@28
  unsigned int v115; // [sp+C8h] [bp-1C4h]@38
  int v116; // [sp+DCh] [bp-1B0h]@2
  int v117; // [sp+E0h] [bp-1ACh]@20
  int v118; // [sp+F0h] [bp-19Ch]@1
  int v119; // [sp+F4h] [bp-198h]@1
  int v120; // [sp+F8h] [bp-194h]@2
  int v121; // [sp+FCh] [bp-190h]@2
  int v122; // [sp+100h] [bp-18Ch]@2
  int v123; // [sp+104h] [bp-188h]@2
  unsigned __int64 v124; // [sp+110h] [bp-17Ch]@38
  int v125; // [sp+118h] [bp-174h]@0
  int v126; // [sp+11Ch] [bp-170h]@0
  int v127; // [sp+120h] [bp-16Ch]@0
  int v128; // [sp+128h] [bp-164h]@0
  int v129; // [sp+130h] [bp-15Ch]@0
  int v130; // [sp+138h] [bp-154h]@0
  int v131; // [sp+140h] [bp-14Ch]@17
  signed int v132; // [sp+144h] [bp-148h]@2
  int v133; // [sp+148h] [bp-144h]@1
  int v134; // [sp+14Ch] [bp-140h]@1
  signed int v135; // [sp+150h] [bp-13Ch]@1
  int v136; // [sp+154h] [bp-138h]@1
  int v137; // [sp+158h] [bp-134h]@20
  int v138; // [sp+15Ch] [bp-130h]@20
  int v139; // [sp+160h] [bp-12Ch]@20
  int v140; // [sp+164h] [bp-128h]@20
  int v141; // [sp+17Ch] [bp-110h]@1
  int v142; // [sp+180h] [bp-10Ch]@1
  int v143; // [sp+184h] [bp-108h]@1
  int v144; // [sp+188h] [bp-104h]@1
  int v145; // [sp+18Ch] [bp-100h]@1
  int v146; // [sp+190h] [bp-FCh]@1
  int v147; // [sp+194h] [bp-F8h]@1
  int v148; // [sp+198h] [bp-F4h]@1
  int v149; // [sp+19Ch] [bp-F0h]@1
  int v150; // [sp+1A0h] [bp-ECh]@1
  int v151; // [sp+1A4h] [bp-E8h]@1
  int v152; // [sp+1A8h] [bp-E4h]@1
  int v153; // [sp+1ACh] [bp-E0h]@1
  int v154; // [sp+1B0h] [bp-DCh]@1
  int v155; // [sp+1B4h] [bp-D8h]@1
  int v156; // [sp+1B8h] [bp-D4h]@1
  int v157; // [sp+1BCh] [bp-D0h]@1
  int v158; // [sp+1C0h] [bp-CCh]@1
  int v159; // [sp+1C4h] [bp-C8h]@3
  int v160[7]; // [sp+1C8h] [bp-C4h]@8
  int v161[4]; // [sp+1E4h] [bp-A8h]@3
  int v162; // [sp+1F4h] [bp-98h]@1
  int v163; // [sp+1F8h] [bp-94h]@1
  int v164; // [sp+1FCh] [bp-90h]@1
  int v165; // [sp+200h] [bp-8Ch]@1
  int v166; // [sp+204h] [bp-88h]@1
  int v167; // [sp+208h] [bp-84h]@12
  int v168[7]; // [sp+20Ch] [bp-80h]@55
  int v169[4]; // [sp+228h] [bp-64h]@8
  int v170; // [sp+238h] [bp-54h]@1
  int v171; // [sp+23Ch] [bp-50h]@1
  int v172; // [sp+240h] [bp-4Ch]@1
  int v173; // [sp+244h] [bp-48h]@1
  int v174; // [sp+248h] [bp-44h]@1
  int v175[4]; // [sp+24Ch] [bp-40h]@3
  int v176; // [sp+25Ch] [bp-30h]@1

  v135 = a1;
  v136 = a2;
  v118 = dword_6FBB52F4 * dword_6FBBDB98;
  v119 = dword_6FBB52F4 * dword_6FBBDBA0;
  v134 = dword_6FBB52F8 * dword_6FBBDBA4;
  v133 = dword_6FBB52F8 * dword_6FBBDB9C;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v153 = v2 * dword_6FBB52F4;
  v154 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v156 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v155 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v149 = v3 * dword_6FBB52F8;
  v150 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v152 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  v151 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
  sub_6F733480(v2, v3, &v153, &v149);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v154,
    &v150);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v156,
    &v152);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5),
    (signed __int16)(32 * word_70041E8E) >> 5,
    &v155,
    &v151);
  v142 = (unsigned __int8)byte_6FBB5055;
  v145 = (unsigned __int8)byte_6FBB5050;
  v146 = (unsigned __int8)byte_6FBB5051;
  v141 = (unsigned __int8)byte_6FBB5054;
  v148 = (unsigned __int8)byte_6FBB5052;
  v147 = (unsigned __int8)byte_6FBB5053;
  v144 = (unsigned __int8)byte_6FBB5056;
  v143 = (unsigned __int8)byte_6FBB5057;
  nullsub_2();
  v153 += dword_6FBB52F4 * dword_6FBBDB90;
  v154 += dword_6FBB52F4 * dword_6FBBDB90;
  v155 += dword_6FBB52F4 * dword_6FBBDB90;
  v156 += dword_6FBB52F4 * dword_6FBBDB90;
  v149 += dword_6FBB52F8 * dword_6FBBDB94;
  v150 += dword_6FBB52F8 * dword_6FBBDB94;
  v151 += dword_6FBB52F8 * dword_6FBBDB94;
  v152 += dword_6FBB52F8 * dword_6FBBDB94;
  v157 = 0;
  v158 = 0;
  v166 = 0;
  v174 = 0;
  v162 = 0;
  v170 = 0;
  v163 = 0;
  v171 = 0;
  v164 = 0;
  v172 = 0;
  v165 = 0;
  v173 = 0;
  result = sub_6F7368C0((int)&v153, (int)&v149, (int)&v157);
  v92 = v176;
  if ( v176 > 0 )
  {
    v121 = 0;
    v120 = 0;
    v132 = 0;
    v116 = 0;
    v122 = 12;
    v123 = 28;
    do
    {
      v5 = v175[v116++];
      v6 = v175[v116];
      v82 = v5;
      v7 = *(&v159 + v122);
      if ( v7 >= v161[v120] )
      {
        v122 = ++v120 + 12;
        v7 = *(&v159 + v120 + 12);
      }
      if ( v7 )
      {
        if ( v161[v120] > v7 )
        {
          v8 = *(&v159 + 2 * v120);
          v91 = (*(&v153 + v8) << dword_6FD4098C) + v7 * v127;
          v101 = (*(&v145 + v8) << dword_6FD4098C) + v7 * v83;
          v100 = v7 * v89 + (*(&v141 + v8) << dword_6FD4098C);
        }
      }
      else
      {
        v57 = *(&v159 + 2 * v120);
        v58 = dword_6FD4098C;
        v91 = *(&v153 + v57) << dword_6FD4098C;
        v59 = *(&v145 + v57);
        v84 = v59;
        v101 = v59 << dword_6FD4098C;
        v60 = *(&v141 + v57);
        v90 = v60;
        v100 = v60 << dword_6FD4098C;
        v61 = v160[2 * v120];
        v87 = *(&v149 + v61) - *(&v149 + v57);
        v62 = *(&v153 + v61) - *(&v153 + v57);
        v63 = (unsigned __int64)((signed __int64)v62 << dword_6FD4098C) >> 32;
        v64 = v62 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v63 = v64;
          v64 = 0;
        }
        v127 = sub_6F737040(v64, v63, v87);
        v65 = *(&v145 + v61) - v84;
        v66 = (unsigned __int64)(v65 << v58) >> 32;
        v67 = (_DWORD)v65 << v58;
        if ( v58 & 0x20 )
        {
          v66 = v67;
          v67 = 0;
        }
        v83 = sub_6F737040(v67, v66, v87);
        v68 = *(&v141 + v61) - v90;
        v69 = (unsigned __int64)((signed __int64)v68 << v58) >> 32;
        v70 = v68 << v58;
        if ( v58 & 0x20 )
        {
          v69 = v70;
          if ( v58 & 0x20 )
            v70 = 0;
        }
        v89 = sub_6F737040(v70, v69, v87);
      }
      v9 = v121;
      *(&v159 + v122) = v6 - v82 + v7;
      v10 = v160[v123];
      if ( v10 >= v169[v121] )
      {
        ++v121;
        v123 = v9 + 29;
        v10 = v160[v9 + 29];
      }
      if ( v10 )
      {
        if ( v169[v121] > v10 )
        {
          v11 = *(&v167 + 2 * v121);
          v99 = (*(&v153 + v11) << dword_6FD4098C) + v10 * v128;
          v126 = (*(&v145 + v11) << dword_6FD4098C) + v10 * v129;
          v125 = v10 * v130 + (*(&v141 + v11) << dword_6FD4098C);
        }
      }
      else
      {
        v43 = *(&v167 + 2 * v121);
        v44 = dword_6FD4098C;
        v99 = *(&v153 + v43) << dword_6FD4098C;
        v45 = *(&v145 + v43);
        v95 = v45;
        v126 = v45 << dword_6FD4098C;
        v46 = *(&v141 + v43);
        v103 = v46;
        v125 = v46 << dword_6FD4098C;
        v47 = v168[2 * v121];
        v98 = *(&v149 + v47) - *(&v149 + v43);
        v48 = *(&v153 + v47) - *(&v153 + v43);
        v49 = (unsigned __int64)((signed __int64)v48 << dword_6FD4098C) >> 32;
        v50 = v48 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v49 = v50;
          v50 = 0;
        }
        v128 = sub_6F737040(v50, v49, v98);
        v51 = *(&v145 + v47) - v95;
        v52 = (unsigned __int64)(v51 << v44) >> 32;
        v53 = (_DWORD)v51 << v44;
        if ( v44 & 0x20 )
        {
          v52 = v53;
          v53 = 0;
        }
        v129 = sub_6F737040(v53, v52, v98);
        v54 = *(&v141 + v47) - v103;
        v55 = (unsigned __int64)((signed __int64)v54 << v44) >> 32;
        v56 = v54 << v44;
        if ( v44 & 0x20 )
        {
          v55 = v56;
          if ( v44 & 0x20 )
            v56 = 0;
        }
        v130 = sub_6F737040(v56, v55, v98);
      }
      v160[v123] = v6 - v82 + v10;
      v12 = v133 - v82;
      if ( v133 - v82 > 0 )
      {
        v82 = v133;
        v91 += v12 * v127;
        v101 += v12 * v83;
        v100 += v12 * v89;
        v99 += v12 * v128;
        v126 += v12 * v129;
        v125 += v130 * v12;
      }
      if ( v134 <= v6 )
        v6 = v134;
      v131 = v6 - v82;
      if ( v6 - v82 > 0 )
      {
        v140 = v101;
        v111 = v126 - v101;
        v139 = v99;
        v138 = v91;
        v110 = v99 - v91;
        v137 = v100;
        v109 = v125 - v100;
        v117 = v6;
        do
        {
          v14 = dword_6FD4098C;
          v15 = (1 << dword_6FD4098C) - 1;
          v16 = v15 + v91;
          v112 = v99 + v15;
          v17 = (unsigned __int64)((signed __int64)v111 << dword_6FD4098C) >> 32;
          v18 = v111 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v17 = v111 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v18 = 0;
          v19 = sub_6F737040(v18, v17, v110);
          v20 = v19;
          v102 = v19;
          v85 = v19;
          v21 = (unsigned __int64)((signed __int64)v109 << v14) >> 32;
          v22 = v109 << v14;
          if ( v14 & 0x20 )
          {
            v21 = v109 << v14;
            v22 = 0;
          }
          v23 = sub_6F737040(v22, v21, v110);
          v24 = v16 >> v14;
          v97 = v23;
          v94 = v23;
          v25 = (v24 << v14) - v91;
          v93 = v24;
          v26 = v25 * (signed __int64)v20 >> (v14 & 0x1F);
          v114 = dword_6FBB52F8;
          if ( v14 & 0x20 )
            LODWORD(v26) = (unsigned __int64)(v25 * (signed __int64)v20 >> (v14 & 0x1F)) >> 32;
          v27 = v26 + v101;
          v28 = v97 * (signed __int64)v25 >> (v14 & 0x1F);
          v29 = v14 - 1;
          if ( v14 & 0x20 )
            LODWORD(v28) = (unsigned __int64)(v97 * (signed __int64)v25 >> (v14 & 0x1F)) >> 32;
          v104 = 1 << v29;
          v105 = (1 << v29) + v27;
          v106 = (1 << v29) + v28 + v100;
          v113 = dword_6FBB52F4;
          if ( dword_6FBB52F4 > 1 || dword_6FBB52F8 > 1 )
          {
            v30 = ((SHIDWORD(v85) >> 31) ^ v102) - (SHIDWORD(v85) >> 31);
            HIDWORD(v13) = SHIDWORD(v83) >> 31;
            LODWORD(v13) = SHIDWORD(v83) >> 31;
            v31 = (v83 ^ v13) - v13;
            v32 = v31;
            v33 = v30 < (unsigned int)v31;
            LODWORD(v31) = (__PAIR__((SHIDWORD(v85) >> 31) ^ HIDWORD(v85), (SHIDWORD(v85) >> 31) ^ (unsigned int)v102)
                          - __PAIR__(SHIDWORD(v85) >> 31, SHIDWORD(v85) >> 31)) >> 32;
            v34 = __OFSUB__((_DWORD)v31, v33 + HIDWORD(v32));
            v35 = v31 - (v33 + HIDWORD(v32));
            if ( !((v35 < 0) ^ v34) )
              HIDWORD(v32) = (__PAIR__((SHIDWORD(v85) >> 31) ^ HIDWORD(v85), (SHIDWORD(v85) >> 31) ^ (unsigned int)v102)
                            - __PAIR__(SHIDWORD(v85) >> 31, SHIDWORD(v85) >> 31)) >> 32;
            if ( (v35 < 0) ^ v34 )
              v30 = v32;
            v115 = HIDWORD(v32);
            v107 = __PAIR__((SHIDWORD(v94) >> 31) ^ HIDWORD(v94), (SHIDWORD(v94) >> 31) ^ (unsigned int)v97)
                 - __PAIR__(SHIDWORD(v94) >> 31, SHIDWORD(v94) >> 31);
            v37 = (__PAIR__((SHIDWORD(v94) >> 31) ^ HIDWORD(v94), (SHIDWORD(v94) >> 31) ^ (unsigned int)v97)
                 - __PAIR__(SHIDWORD(v94) >> 31, SHIDWORD(v94) >> 31)) >> 32;
            HIDWORD(v124) = SHIDWORD(v89) >> 31;
            LODWORD(v124) = SHIDWORD(v89) >> 31;
            v36 = (v89 ^ v124) - v124;
            v38 = v107;
            if ( SHIDWORD(v107) < ((unsigned int)v107 < (unsigned int)v36) + HIDWORD(v36) )
              v38 = (v89 ^ v124) - v124;
            if ( SHIDWORD(v107) < ((unsigned int)v107 < (unsigned int)v36) + HIDWORD(v36) )
              v37 = ((v89 ^ v124) - v124) >> 32;
            v108 = v38;
            v86 = -(v83 + v85);
            v39 = -(v89 + v94);
            if ( v30 | v115 )
              LODWORD(v86) = sub_6F8A13E0(v39, v86, __PAIR__(v115, v30));
            if ( __PAIR__(v37, v108) )
              v39 = sub_6F8A13E0(-(v89 + v94), -(v89 + v94), __PAIR__(v37, v108));
            v105 += v86 * (v113 - 1) * (v104 / v113);
            v106 += v39 * (v114 - 1) * (v104 / v114);
          }
          v40 = v118 - v93;
          v41 = v112 >> v14;
          if ( v118 - v93 > 0 )
          {
            v93 = v118;
            v105 += v40 * v102;
            v106 += v97 * v40;
          }
          if ( v119 <= v41 )
            v41 = v119;
          v42 = v41 - v93;
          if ( v42 > 0 && sub_6F71F0C0(v82) )
          {
            if ( v132 % v135 == v136 )
            {
              v71 = v93 + v113 * (v82 << 10);
              v72 = dword_6FBB5068 + 2 * v71;
              v73 = v93;
              v74 = dword_6FBB505C + 4 * v71 - 4 * v93;
              v96 = v42 + v93;
              if ( !(v42 & 1)
                || (v72 += 2,
                    dword_6FBB5058(
                      dword_6FBB5068 + 2 * v71,
                      dword_6FBB505C + 4 * v71,
                      v93,
                      v82,
                      (unsigned __int8)dword_70041E70,
                      BYTE1(dword_70041E70),
                      BYTE2(dword_70041E70),
                      v105,
                      v106),
                    v73 = v93 + 1,
                    v105 += v102,
                    v106 += v97,
                    v93 + 1 != v96) )
              {
                v88 = v74;
                v75 = v105;
                v76 = v73;
                v77 = v106;
                do
                {
                  dword_6FBB5058(
                    v72,
                    v88 + 4 * v76,
                    v76,
                    v82,
                    (unsigned __int8)dword_70041E70,
                    BYTE1(dword_70041E70),
                    BYTE2(dword_70041E70),
                    v75,
                    v77);
                  v78 = v76 + 1;
                  v79 = v72 + 2;
                  v80 = v102 + v75;
                  v81 = v97 + v77;
                  v72 += 4;
                  v76 += 2;
                  dword_6FBB5058(
                    v79,
                    v88 + 4 * v78,
                    v78,
                    v82,
                    (unsigned __int8)dword_70041E70,
                    BYTE1(dword_70041E70),
                    BYTE2(dword_70041E70),
                    v80,
                    v81);
                  v75 = v102 + v80;
                  v77 = v97 + v81;
                }
                while ( v76 != v96 );
              }
            }
            ++v132;
          }
          ++v82;
          v91 += v127;
          v99 += v128;
          v111 += v129 - v83;
          v110 += v128 - v127;
          v109 += v130 - v89;
          v101 += v83;
          v100 += v89;
        }
        while ( v82 != v117 );
        v91 = (v131 - 1) * v127 + v127 + v138;
        v101 = (v131 - 1) * v83 + v83 + v140;
        v100 = (v131 - 1) * v89 + v89 + v137;
        v99 = (v131 - 1) * v128 + v128 + v139;
        v126 += (v131 - 1) * v129 + v129;
        v125 += v130 + v130 * (v131 - 1);
        v92 = v176;
      }
      result = v92;
    }
    while ( v116 < v92 );
  }
  return result;
}
