int __usercall sub_6F747420@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // ST3C_4@1
  _DWORD *v3; // ebp@1
  int result; // eax@9
  int v5; // ebp@11
  int v6; // ebx@11
  int v7; // edi@11
  int v8; // eax@15
  int v9; // edx@16
  int v10; // ebx@16
  int v11; // eax@20
  int v12; // eax@21
  int v13; // eax@23
  char v14; // bp@30
  int v15; // ebx@30
  signed int v16; // edi@30
  signed int v17; // ebx@30
  int v18; // edx@30
  int v19; // eax@30
  int v20; // edx@34
  int v21; // eax@34
  int v22; // edx@36
  int v23; // eax@36
  signed int v24; // edi@38
  int v25; // esi@38
  signed __int64 v26; // rax@38
  signed __int64 v27; // rax@40
  signed __int64 v28; // rax@42
  int v29; // esi@44
  signed int v30; // eax@44
  int v31; // ebx@44
  signed int v32; // esi@45
  int v33; // ebx@48
  int v34; // eax@53
  char v35; // si@53
  int v36; // edi@53
  int v37; // edi@53
  int v38; // edi@53
  int v39; // edi@53
  int v40; // eax@53
  int v41; // edx@53
  int v42; // eax@53
  __int64 v43; // rax@55
  int v44; // edx@55
  int v45; // eax@55
  __int64 v46; // rax@57
  int v47; // edx@57
  int v48; // eax@57
  int v49; // eax@59
  int v50; // edx@59
  int v51; // eax@59
  int v52; // eax@63
  char v53; // si@63
  int v54; // edi@63
  int v55; // edi@63
  int v56; // edi@63
  int v57; // edi@63
  int v58; // eax@63
  int v59; // edx@63
  int v60; // eax@63
  __int64 v61; // rax@65
  int v62; // edx@65
  int v63; // eax@65
  __int64 v64; // rax@67
  int v65; // edx@67
  int v66; // eax@67
  int v67; // eax@69
  int v68; // edx@69
  int v69; // eax@69
  int v70; // eax@74
  signed int v71; // ST08_4@75
  char v72; // cl@75
  signed int v73; // ebp@75
  int v74; // ebx@77
  signed int v75; // ebp@77
  signed int v76; // esi@77
  int v77; // [sp+3Ch] [bp-17Ch]@11
  signed int v78; // [sp+3Ch] [bp-17Ch]@28
  int v79; // [sp+40h] [bp-178h]@0
  int v80; // [sp+44h] [bp-174h]@34
  int v81; // [sp+44h] [bp-174h]@63
  int v82; // [sp+48h] [bp-170h]@36
  int v83; // [sp+48h] [bp-170h]@53
  int v84; // [sp+48h] [bp-170h]@63
  int v85; // [sp+4Ch] [bp-16Ch]@9
  int v86; // [sp+4Ch] [bp-16Ch]@38
  int v87; // [sp+50h] [bp-168h]@0
  int v88; // [sp+54h] [bp-164h]@0
  int v89; // [sp+58h] [bp-160h]@0
  int v90; // [sp+5Ch] [bp-15Ch]@0
  int v91; // [sp+60h] [bp-158h]@28
  int v92; // [sp+60h] [bp-158h]@53
  int v93; // [sp+60h] [bp-158h]@63
  int v94; // [sp+64h] [bp-154h]@28
  int v95; // [sp+64h] [bp-154h]@53
  int v96; // [sp+64h] [bp-154h]@63
  int v97; // [sp+68h] [bp-150h]@28
  int v98; // [sp+68h] [bp-150h]@53
  int v99; // [sp+6Ch] [bp-14Ch]@28
  signed int v100; // [sp+70h] [bp-148h]@40
  signed int v101; // [sp+74h] [bp-144h]@42
  int v102; // [sp+78h] [bp-140h]@1
  int v103; // [sp+90h] [bp-128h]@10
  int v104; // [sp+94h] [bp-124h]@28
  int v105; // [sp+A8h] [bp-110h]@1
  int v106; // [sp+ACh] [bp-10Ch]@10
  int v107; // [sp+B0h] [bp-108h]@10
  int v108; // [sp+B4h] [bp-104h]@10
  int v109; // [sp+B8h] [bp-100h]@10
  int v110; // [sp+BCh] [bp-FCh]@0
  int v111; // [sp+C0h] [bp-F8h]@0
  int v112; // [sp+C4h] [bp-F4h]@0
  int v113; // [sp+C8h] [bp-F0h]@0
  int v114; // [sp+D0h] [bp-E8h]@0
  int v115; // [sp+D8h] [bp-E0h]@0
  int v116; // [sp+E0h] [bp-D8h]@0
  int v117; // [sp+E8h] [bp-D0h]@0
  int v118; // [sp+F0h] [bp-C8h]@0
  int v119; // [sp+F8h] [bp-C0h]@0
  int v120; // [sp+100h] [bp-B8h]@0
  int v121; // [sp+108h] [bp-B0h]@25
  signed int v122; // [sp+10Ch] [bp-ACh]@10
  int v123; // [sp+110h] [bp-A8h]@1
  int v124; // [sp+114h] [bp-A4h]@1
  int v125; // [sp+118h] [bp-A0h]@74
  int v126; // [sp+11Ch] [bp-9Ch]@74
  signed int v127; // [sp+120h] [bp-98h]@1
  int v128; // [sp+124h] [bp-94h]@1
  int v129; // [sp+128h] [bp-90h]@28
  int v130; // [sp+12Ch] [bp-8Ch]@28
  int v131; // [sp+130h] [bp-88h]@28
  int v132; // [sp+134h] [bp-84h]@28
  int v133; // [sp+138h] [bp-80h]@28
  int v134; // [sp+148h] [bp-70h]@74
  int v135; // [sp+14Ch] [bp-6Ch]@74
  int v136; // [sp+15Ch] [bp-5Ch]@9
  int v137; // [sp+160h] [bp-58h]@9
  int v138; // [sp+164h] [bp-54h]@9
  int v139; // [sp+168h] [bp-50h]@9
  int v140; // [sp+16Ch] [bp-4Ch]@9
  int v141; // [sp+170h] [bp-48h]@9
  int v142; // [sp+174h] [bp-44h]@9
  int v143; // [sp+178h] [bp-40h]@9
  int v144; // [sp+17Ch] [bp-3Ch]@9
  int v145; // [sp+180h] [bp-38h]@9
  int v146; // [sp+184h] [bp-34h]@9
  int v147; // [sp+188h] [bp-30h]@9
  int v148; // [sp+18Ch] [bp-2Ch]@1
  int v149; // [sp+190h] [bp-28h]@1
  int v150; // [sp+194h] [bp-24h]@1
  int v151; // [sp+198h] [bp-20h]@1
  int v152; // [sp+19Ch] [bp-1Ch]@1
  int v153; // [sp+1A0h] [bp-18h]@1
  int v154; // [sp+1A4h] [bp-14h]@1
  int v155; // [sp+1A8h] [bp-10h]@1
  int v156; // [sp+1ACh] [bp-Ch]@1
  int v157; // [sp+1B0h] [bp-8h]@1
  int v158; // [sp+1B4h] [bp-4h]@1
  int v159; // [sp+1B8h] [bp+0h]@1
  int v160; // [sp+1BCh] [bp+4h]@9
  int v161; // [sp+1C0h] [bp+8h]@9
  int v162; // [sp+1C4h] [bp+Ch]@11
  int v163[7]; // [sp+1C8h] [bp+10h]@16
  int v164[4]; // [sp+1E4h] [bp+2Ch]@11
  int v165; // [sp+1F4h] [bp+3Ch]@9
  int v166; // [sp+1F8h] [bp+40h]@9
  int v167; // [sp+1FCh] [bp+44h]@9
  int v168; // [sp+200h] [bp+48h]@9
  int v169; // [sp+204h] [bp+4Ch]@9
  int v170; // [sp+208h] [bp+50h]@20
  int v171[7]; // [sp+20Ch] [bp+54h]@53
  int v172[4]; // [sp+228h] [bp+70h]@16
  int v173; // [sp+238h] [bp+80h]@9
  int v174; // [sp+23Ch] [bp+84h]@9
  int v175; // [sp+240h] [bp+88h]@9
  int v176; // [sp+244h] [bp+8Ch]@9
  int v177; // [sp+248h] [bp+90h]@9
  int v178[4]; // [sp+24Ch] [bp+94h]@11
  int v179; // [sp+25Ch] [bp+A4h]@9

  v127 = a1;
  v128 = a2;
  v123 = dword_6FBB52F8 * dword_6FBBDB9C;
  v102 = dword_6FBB52F4 * dword_6FBBDB98;
  v124 = dword_6FBB52F8 * dword_6FBBDBA4;
  v105 = dword_6FBB52F4 * dword_6FBBDBA0;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v157 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v156 = dword_6FBB52F4 * v2;
  v159 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v158 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v152 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v3 = (_DWORD *)((signed __int16)((signed __int16)(32 * word_70041E8A) >> 5) * dword_6FBB52F8);
  v153 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5) * dword_6FBB52F8;
  v155 = (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5) * dword_6FBB52F8;
  v154 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
  sub_6F732840(
    v2,
    (signed __int16)(32 * word_70041E82) >> 5,
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v156,
    &v152,
    &v148,
    &v157,
    &v153,
    &v149,
    v3,
    &v155,
    &v151);
  sub_6F732840(
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (signed __int16)(32 * word_70041E8A) >> 5,
    (signed __int16)(32 * word_70041E8C) >> 5,
    (signed __int16)(32 * word_70041E8E) >> 5,
    &v157,
    &v153,
    &v149,
    v3,
    &v155,
    &v151,
    &v158,
    &v154,
    &v150);
  if ( !v148 )
    v148 = 1;
  if ( !v149 )
    v149 = 1;
  if ( !v150 )
    v150 = 1;
  if ( !v151 )
    v151 = 1;
  v144 = 0xFFFF / v148;
  v145 = 0xFFFF / v149;
  v146 = 0xFFFF / v150;
  v140 = 0xFFFF / v148 * (unsigned __int8)byte_6FBB5050;
  v141 = 0xFFFF / v149 * (unsigned __int8)byte_6FBB5051;
  v142 = 0xFFFF / v150 * (unsigned __int8)byte_6FBB5053;
  v147 = 0xFFFF / v151;
  v143 = 0xFFFF / v151 * (unsigned __int8)byte_6FBB5052;
  v138 = (unsigned __int8)byte_6FBB5057 * (0xFFFF / v150);
  v139 = (unsigned __int8)byte_6FBB5056 * (0xFFFF / v151);
  v136 = (unsigned __int8)byte_6FBB5054 * (0xFFFF / v148);
  v137 = (unsigned __int8)byte_6FBB5055 * (0xFFFF / v149);
  nullsub_2();
  v160 = 0;
  v161 = 0;
  v156 += dword_6FBB52F4 * dword_6FBBDB90;
  v157 += dword_6FBB52F4 * dword_6FBBDB90;
  v158 += dword_6FBB52F4 * dword_6FBBDB90;
  v159 += dword_6FBB52F4 * dword_6FBBDB90;
  v152 += dword_6FBB52F8 * dword_6FBBDB94;
  v153 += dword_6FBB52F8 * dword_6FBBDB94;
  v154 += dword_6FBB52F8 * dword_6FBBDB94;
  v155 += dword_6FBB52F8 * dword_6FBBDB94;
  v169 = 0;
  v177 = 0;
  v165 = 0;
  v173 = 0;
  v166 = 0;
  v174 = 0;
  v167 = 0;
  v175 = 0;
  v168 = 0;
  v176 = 0;
  result = sub_6F7368C0((int)&v156, (int)&v152, (int)&v160);
  v85 = v179;
  if ( v179 > 0 )
  {
    v107 = 0;
    v106 = 0;
    v122 = 0;
    v103 = 0;
    v108 = 12;
    v109 = 28;
    do
    {
      v5 = v178[v103];
      v6 = *(&v162 + v108);
      v7 = v178[v103++ + 1];
      v77 = v7;
      if ( v6 >= v164[v106] )
      {
        v108 = ++v106 + 12;
        v6 = *(&v162 + v106 + 12);
      }
      if ( v6 )
      {
        if ( v164[v106] > v6 )
        {
          v8 = *(&v162 + 2 * v106);
          v79 = (*(&v156 + v8) << dword_6FD4098C) + v6 * v113;
          v90 = (*(&v144 + v8) << dword_6FD4098C) + v6 * v115;
          v88 = (*(&v140 + v8) << dword_6FD4098C) + v6 * v117;
          v87 = v6 * v119 + (*(&v136 + v8) << dword_6FD4098C);
        }
      }
      else
      {
        v52 = *(&v162 + 2 * v106);
        v53 = dword_6FD4098C;
        v79 = *(&v156 + v52) << dword_6FD4098C;
        v54 = *(&v144 + v52);
        v84 = v54;
        v90 = v54 << dword_6FD4098C;
        v55 = *(&v140 + v52);
        v93 = v55;
        v88 = v55 << dword_6FD4098C;
        v56 = *(&v136 + v52);
        v96 = v56;
        v87 = v56 << dword_6FD4098C;
        v57 = v163[2 * v106];
        v81 = *(&v152 + v57) - *(&v152 + v52);
        v58 = *(&v156 + v57) - *(&v156 + v52);
        v59 = (unsigned __int64)((signed __int64)v58 << dword_6FD4098C) >> 32;
        v60 = v58 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v59 = v60;
          v60 = 0;
        }
        v113 = sub_6F737040(v60, v59, v81);
        v61 = *(&v144 + v57) - v84;
        v62 = (unsigned __int64)(v61 << v53) >> 32;
        v63 = (_DWORD)v61 << v53;
        if ( v53 & 0x20 )
        {
          v62 = v63;
          v63 = 0;
        }
        v115 = sub_6F737040(v63, v62, v81);
        v64 = *(&v140 + v57) - v93;
        v65 = (unsigned __int64)(v64 << v53) >> 32;
        v66 = (_DWORD)v64 << v53;
        if ( v53 & 0x20 )
        {
          v65 = v66;
          v66 = 0;
        }
        v117 = sub_6F737040(v66, v65, v81);
        v67 = *(&v136 + v57) - v96;
        v68 = (unsigned __int64)((signed __int64)v67 << v53) >> 32;
        v69 = v67 << v53;
        if ( v53 & 0x20 )
        {
          v68 = v69;
          if ( v53 & 0x20 )
            v69 = 0;
        }
        v119 = sub_6F737040(v69, v68, v81);
      }
      v9 = v107;
      *(&v162 + v108) = v77 - v5 + v6;
      v10 = v163[v109];
      if ( v10 >= v172[v107] )
      {
        ++v107;
        v109 = v9 + 29;
        v10 = v163[v9 + 29];
      }
      if ( v10 )
      {
        if ( v172[v107] > v10 )
        {
          v11 = *(&v170 + 2 * v107);
          v89 = (*(&v156 + v11) << dword_6FD4098C) + v10 * v114;
          v111 = (*(&v144 + v11) << dword_6FD4098C) + v10 * v116;
          v112 = (*(&v140 + v11) << dword_6FD4098C) + v10 * v118;
          v110 = v10 * v120 + (*(&v136 + v11) << dword_6FD4098C);
        }
      }
      else
      {
        v34 = *(&v170 + 2 * v107);
        v35 = dword_6FD4098C;
        v89 = *(&v156 + v34) << dword_6FD4098C;
        v36 = *(&v144 + v34);
        v92 = v36;
        v111 = v36 << dword_6FD4098C;
        v37 = *(&v140 + v34);
        v95 = v37;
        v112 = v37 << dword_6FD4098C;
        v38 = *(&v136 + v34);
        v98 = v38;
        v110 = v38 << dword_6FD4098C;
        v39 = v171[2 * v107];
        v83 = *(&v152 + v39) - *(&v152 + v34);
        v40 = *(&v156 + v39) - *(&v156 + v34);
        v41 = (unsigned __int64)((signed __int64)v40 << dword_6FD4098C) >> 32;
        v42 = v40 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v41 = v42;
          v42 = 0;
        }
        v114 = sub_6F737040(v42, v41, v83);
        v43 = *(&v144 + v39) - v92;
        v44 = (unsigned __int64)(v43 << v35) >> 32;
        v45 = (_DWORD)v43 << v35;
        if ( v35 & 0x20 )
        {
          v44 = v45;
          v45 = 0;
        }
        v116 = sub_6F737040(v45, v44, v83);
        v46 = *(&v140 + v39) - v95;
        v47 = (unsigned __int64)(v46 << v35) >> 32;
        v48 = (_DWORD)v46 << v35;
        if ( v35 & 0x20 )
        {
          v47 = v48;
          v48 = 0;
        }
        v118 = sub_6F737040(v48, v47, v83);
        v49 = *(&v136 + v39) - v98;
        v50 = (unsigned __int64)((signed __int64)v49 << v35) >> 32;
        v51 = v49 << v35;
        if ( v35 & 0x20 )
        {
          v50 = v51;
          if ( v35 & 0x20 )
            v51 = 0;
        }
        v120 = sub_6F737040(v51, v50, v83);
      }
      v163[v109] = v77 - v5 + v10;
      v12 = v123 - v5;
      if ( v123 - v5 > 0 )
      {
        v79 += v12 * v113;
        v90 += v12 * v115;
        v88 += v12 * v117;
        v111 += v12 * v116;
        v5 = v123;
        v87 += v12 * v119;
        v89 += v12 * v114;
        v112 += v12 * v118;
        v110 += v120 * v12;
      }
      v13 = v77;
      if ( v124 <= v77 )
        v13 = v124;
      result = v13 - v5;
      v121 = result;
      if ( result > 0 )
      {
        v130 = v90;
        v132 = v89;
        v99 = v111 - v90;
        v94 = v89 - v79;
        v133 = v79;
        v129 = v88;
        v97 = v112 - v88;
        v78 = v5;
        v131 = v87;
        v91 = v110 - v87;
        v104 = v5 + result;
        do
        {
          v14 = dword_6FD4098C;
          v15 = (1 << dword_6FD4098C) - 1;
          v16 = v15 + v79;
          v17 = v89 + v15;
          v18 = (unsigned __int64)((signed __int64)v99 << dword_6FD4098C) >> 32;
          v19 = v99 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v18 = v99 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v19 = 0;
          v80 = sub_6F737040(v19, v18, v94);
          v20 = (unsigned __int64)((signed __int64)v97 << v14) >> 32;
          v21 = v97 << v14;
          if ( v14 & 0x20 )
          {
            v20 = v97 << v14;
            v21 = 0;
          }
          v82 = sub_6F737040(v21, v20, v94);
          v22 = (unsigned __int64)((signed __int64)v91 << v14) >> 32;
          v23 = v91 << v14;
          if ( v14 & 0x20 )
          {
            v22 = v91 << v14;
            v23 = 0;
          }
          v24 = v16 >> v14;
          v86 = sub_6F737040(v23, v22, v94);
          v25 = (v24 << v14) - v79;
          v26 = v25 * (signed __int64)v80 >> (v14 & 0x1F);
          if ( v14 & 0x20 )
            LODWORD(v26) = (unsigned __int64)(v25 * (signed __int64)v80 >> (v14 & 0x1F)) >> 32;
          v100 = v26 + v90;
          v27 = v25 * (signed __int64)v82 >> (v14 & 0x1F);
          if ( v14 & 0x20 )
            LODWORD(v27) = (unsigned __int64)(v25 * (signed __int64)v82 >> (v14 & 0x1F)) >> 32;
          v101 = v27 + v88;
          v28 = v86 * (signed __int64)((v24 << v14) - v79) >> (v14 & 0x1F);
          if ( v14 & 0x20 )
            LODWORD(v28) = (unsigned __int64)(v86 * (signed __int64)((v24 << v14) - v79) >> (v14 & 0x1F)) >> 32;
          v29 = v102 - v24;
          v30 = v87 + v28;
          v31 = v17 >> v14;
          if ( v102 - v24 <= 0 )
          {
            v32 = v30;
          }
          else
          {
            v100 += v29 * v80;
            v24 = v102;
            v101 += v29 * v82;
            v32 = v30 + v86 * v29;
          }
          if ( v105 <= v31 )
            v31 = v105;
          v33 = v31 - v24;
          if ( v33 > 0 && sub_6F71F0C0(v78) )
          {
            if ( v122 % v127 == v128 )
            {
              v134 = v33 + v24;
              v70 = v24 + dword_6FBB52F4 * (v78 << 10);
              v135 = 4 * v24;
              v125 = dword_6FBB505C + 4 * v70 - 4 * v24;
              v126 = dword_6FBB5068 + 2 * v70 - 2 * v24;
              if ( ((_BYTE)v33 + (_BYTE)v24 + ~(_BYTE)v24) & 1 )
              {
                v71 = v24++;
                dword_6FBB5058(
                  dword_6FBB5068 + 2 * v70,
                  v125 + v135,
                  v71,
                  v78,
                  (unsigned __int8)dword_70041E70,
                  BYTE1(dword_70041E70),
                  BYTE2(dword_70041E70),
                  v101 / v100 << v14,
                  v32 / v100 << v14);
                v32 += v86;
                v100 += v80;
                v72 = dword_6FD4098C;
                v73 = v82 + v101;
              }
              else
              {
                v72 = v14;
                v73 = v101;
              }
              while ( 1 )
              {
                v74 = v24 + 1;
                dword_6FBB5058(
                  v126 + 2 * v24,
                  v125 + 4 * v24,
                  v24,
                  v78,
                  (unsigned __int8)dword_70041E70,
                  BYTE1(dword_70041E70),
                  BYTE2(dword_70041E70),
                  v73 / v100 << v72,
                  v32 / v100 << v72);
                v75 = v82 + v73;
                v76 = v86 + v32;
                if ( v24 + 1 == v134 )
                  break;
                v24 += 2;
                dword_6FBB5058(
                  v126 + 2 * v74,
                  v125 + 4 * v74,
                  v74,
                  v78,
                  (unsigned __int8)dword_70041E70,
                  BYTE1(dword_70041E70),
                  BYTE2(dword_70041E70),
                  v75 / (v80 + v100) << dword_6FD4098C,
                  v76 / (v80 + v100) << dword_6FD4098C);
                v72 = dword_6FD4098C;
                v73 = v82 + v75;
                v100 += v80 + v80;
                v32 = v86 + v76;
              }
            }
            ++v122;
          }
          ++v78;
          v79 += v113;
          v89 += v114;
          v88 += v117;
          v99 += v116 - v115;
          v94 += v114 - v113;
          v97 += v118 - v117;
          v91 += v120 - v119;
          v90 += v115;
          v87 += v119;
        }
        while ( v78 != v104 );
        v79 = (v121 - 1) * v113 + v113 + v133;
        v90 = (v121 - 1) * v115 + v115 + v130;
        v88 = (v121 - 1) * v117 + v117 + v129;
        v87 = (v121 - 1) * v119 + v119 + v131;
        v89 = (v121 - 1) * v114 + v114 + v132;
        result = (v121 - 1) * v118;
        v111 += (v121 - 1) * v116 + v116;
        v112 += result + v118;
        v110 += v120 + v120 * (v121 - 1);
        v85 = v179;
      }
    }
    while ( v103 < v85 );
  }
  return result;
}
