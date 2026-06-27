int __usercall sub_6F7435E0@<eax>(signed int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, unsigned int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // esi@1
  int v7; // eax@1
  int v8; // edx@1
  int result; // eax@1
  int v10; // ebp@3
  int v11; // ebx@3
  int v12; // eax@3
  int v13; // eax@7
  int v14; // edx@8
  int v15; // ebx@8
  int v16; // edi@12
  int v17; // eax@13
  int v18; // eax@15
  char v19; // di@22
  int v20; // ebx@22
  signed int v21; // ebp@22
  signed int v22; // ebx@22
  int v23; // edx@22
  int v24; // eax@22
  int v25; // edx@26
  int v26; // eax@26
  int v27; // edx@28
  int v28; // eax@28
  signed int v29; // ebp@30
  int v30; // esi@30
  signed __int64 v31; // rax@30
  signed __int64 v32; // rax@32
  signed __int64 v33; // rax@34
  char v34; // cl@34
  signed int v35; // esi@36
  int v36; // ebx@36
  int v37; // eax@36
  int v38; // ebx@40
  int v39; // eax@44
  char v40; // si@44
  int v41; // edi@44
  int v42; // edi@44
  int v43; // edi@44
  int v44; // edi@44
  int v45; // eax@44
  int v46; // edx@44
  int v47; // eax@44
  __int64 v48; // rax@46
  int v49; // edx@46
  int v50; // eax@46
  __int64 v51; // rax@48
  int v52; // edx@48
  int v53; // eax@48
  int v54; // eax@50
  int v55; // edx@50
  int v56; // eax@50
  int v57; // eax@54
  char v58; // si@54
  int v59; // edi@54
  int v60; // edi@54
  int v61; // edi@54
  int v62; // edi@54
  int v63; // eax@54
  int v64; // edx@54
  int v65; // eax@54
  __int64 v66; // rax@56
  int v67; // edx@56
  int v68; // eax@56
  __int64 v69; // rax@58
  int v70; // edx@58
  int v71; // eax@58
  int v72; // eax@60
  int v73; // edx@60
  int v74; // eax@60
  int v75; // ecx@64
  int v76; // eax@65
  int v77; // ebx@65
  signed int v78; // ST08_4@66
  int v79; // edx@66
  char v80; // cl@66
  signed int v81; // edi@66
  signed int v82; // ebx@66
  int v83; // ST08_4@67
  int v84; // eax@68
  signed int v85; // edi@68
  signed int v86; // ebx@68
  signed int v87; // esi@68
  int v88; // [sp+30h] [bp-23Ch]@3
  signed int v89; // [sp+30h] [bp-23Ch]@20
  int v90; // [sp+34h] [bp-238h]@0
  int v91; // [sp+38h] [bp-234h]@26
  int v92; // [sp+38h] [bp-234h]@54
  int v93; // [sp+3Ch] [bp-230h]@28
  int v94; // [sp+3Ch] [bp-230h]@44
  int v95; // [sp+3Ch] [bp-230h]@54
  int v96; // [sp+40h] [bp-22Ch]@1
  int v97; // [sp+40h] [bp-22Ch]@30
  int v98; // [sp+44h] [bp-228h]@0
  int v99; // [sp+48h] [bp-224h]@0
  int v100; // [sp+4Ch] [bp-220h]@0
  int v101; // [sp+50h] [bp-21Ch]@0
  int v102; // [sp+54h] [bp-218h]@20
  int v103; // [sp+54h] [bp-218h]@44
  int v104; // [sp+54h] [bp-218h]@54
  int v105; // [sp+58h] [bp-214h]@20
  int v106; // [sp+58h] [bp-214h]@44
  int v107; // [sp+58h] [bp-214h]@54
  int v108; // [sp+5Ch] [bp-210h]@20
  int v109; // [sp+5Ch] [bp-210h]@44
  int v110; // [sp+60h] [bp-20Ch]@20
  int v111; // [sp+64h] [bp-208h]@32
  signed int v112; // [sp+64h] [bp-208h]@36
  int v113; // [sp+64h] [bp-208h]@66
  int v114; // [sp+68h] [bp-204h]@34
  signed int v115; // [sp+68h] [bp-204h]@36
  int v116; // [sp+80h] [bp-1ECh]@2
  int v117; // [sp+84h] [bp-1E8h]@20
  int v118; // [sp+98h] [bp-1D4h]@1
  int v119; // [sp+9Ch] [bp-1D0h]@1
  int v120; // [sp+A0h] [bp-1CCh]@2
  int v121; // [sp+A4h] [bp-1C8h]@2
  int v122; // [sp+A8h] [bp-1C4h]@2
  int v123; // [sp+ACh] [bp-1C0h]@2
  int v124; // [sp+B0h] [bp-1BCh]@0
  int v125; // [sp+B4h] [bp-1B8h]@0
  int v126; // [sp+B8h] [bp-1B4h]@0
  int v127; // [sp+C0h] [bp-1ACh]@0
  int v128; // [sp+C8h] [bp-1A4h]@0
  int v129; // [sp+D0h] [bp-19Ch]@0
  int v130; // [sp+D8h] [bp-194h]@0
  int v131; // [sp+E0h] [bp-18Ch]@0
  int v132; // [sp+E8h] [bp-184h]@0
  int v133; // [sp+F0h] [bp-17Ch]@0
  int v134; // [sp+F8h] [bp-174h]@0
  int v135; // [sp+FCh] [bp-170h]@17
  signed int v136; // [sp+100h] [bp-16Ch]@2
  int v137; // [sp+104h] [bp-168h]@1
  int v138; // [sp+108h] [bp-164h]@1
  int v139; // [sp+10Ch] [bp-160h]@65
  signed int v140; // [sp+110h] [bp-15Ch]@1
  int v141; // [sp+114h] [bp-158h]@1
  int v142; // [sp+118h] [bp-154h]@20
  int v143; // [sp+11Ch] [bp-150h]@20
  int v144; // [sp+120h] [bp-14Ch]@20
  int v145; // [sp+124h] [bp-148h]@20
  int v146; // [sp+128h] [bp-144h]@20
  int v147; // [sp+138h] [bp-134h]@65
  int v148; // [sp+13Ch] [bp-130h]@65
  unsigned int v149; // [sp+14Ch] [bp-120h]@1
  unsigned int v150; // [sp+150h] [bp-11Ch]@1
  unsigned int v151; // [sp+154h] [bp-118h]@1
  unsigned int v152; // [sp+158h] [bp-114h]@1
  int v153; // [sp+15Ch] [bp-110h]@1
  int v154; // [sp+160h] [bp-10Ch]@1
  int v155; // [sp+164h] [bp-108h]@1
  int v156; // [sp+168h] [bp-104h]@1
  int v157; // [sp+16Ch] [bp-100h]@1
  int v158; // [sp+170h] [bp-FCh]@1
  int v159; // [sp+174h] [bp-F8h]@1
  int v160; // [sp+178h] [bp-F4h]@1
  int v161; // [sp+17Ch] [bp-F0h]@1
  int v162; // [sp+180h] [bp-ECh]@1
  int v163; // [sp+184h] [bp-E8h]@1
  int v164; // [sp+188h] [bp-E4h]@1
  int v165; // [sp+18Ch] [bp-E0h]@1
  int v166; // [sp+190h] [bp-DCh]@1
  int v167; // [sp+194h] [bp-D8h]@1
  int v168; // [sp+198h] [bp-D4h]@1
  int v169; // [sp+19Ch] [bp-D0h]@1
  int v170; // [sp+1A0h] [bp-CCh]@1
  int v171; // [sp+1A4h] [bp-C8h]@3
  int v172[7]; // [sp+1A8h] [bp-C4h]@8
  int v173[4]; // [sp+1C4h] [bp-A8h]@3
  int v174; // [sp+1D4h] [bp-98h]@1
  int v175; // [sp+1D8h] [bp-94h]@1
  int v176; // [sp+1DCh] [bp-90h]@1
  int v177; // [sp+1E0h] [bp-8Ch]@1
  int v178; // [sp+1E4h] [bp-88h]@1
  int v179; // [sp+1E8h] [bp-84h]@12
  int v180[7]; // [sp+1ECh] [bp-80h]@44
  int v181[4]; // [sp+208h] [bp-64h]@8
  int v182; // [sp+218h] [bp-54h]@1
  int v183; // [sp+21Ch] [bp-50h]@1
  int v184; // [sp+220h] [bp-4Ch]@1
  int v185; // [sp+224h] [bp-48h]@1
  int v186; // [sp+228h] [bp-44h]@1
  int v187[4]; // [sp+22Ch] [bp-40h]@3
  int v188; // [sp+23Ch] [bp-30h]@1

  v6 = a3;
  v140 = a1;
  v141 = a2;
  v118 = dword_6FBB52F4 * dword_6FBBDB98;
  v119 = dword_6FBB52F4 * dword_6FBBDBA0;
  v137 = dword_6FBB52F8 * dword_6FBBDB9C;
  v138 = dword_6FBB52F8 * dword_6FBBDBA4;
  v7 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v165 = v7 * dword_6FBB52F4;
  v166 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v168 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v167 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v8 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v161 = v8 * dword_6FBB52F8;
  v162 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v164 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  v163 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
  sub_6F733480(v7, v8, &v165, &v161);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v166,
    &v162);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v168,
    &v164);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5),
    (signed __int16)(32 * word_70041E8E) >> 5,
    &v167,
    &v163);
  v157 = (unsigned __int8)v6;
  v149 = (v6 >> 16) & 0xFF;
  v153 = BYTE1(v6);
  v150 = (a4 >> 16) & 0xFF;
  v154 = BYTE1(a4);
  v160 = (unsigned __int8)a5;
  v152 = (a5 >> 16) & 0xFF;
  v158 = (unsigned __int8)a4;
  v155 = BYTE1(a6);
  v165 += dword_6FBB52F4 * dword_6FBBDB90;
  v166 += dword_6FBB52F4 * dword_6FBBDB90;
  v167 += dword_6FBB52F4 * dword_6FBBDB90;
  v168 += dword_6FBB52F4 * dword_6FBBDB90;
  v156 = BYTE1(a5);
  v159 = (unsigned __int8)a6;
  v151 = (a6 >> 16) & 0xFF;
  v161 += dword_6FBB52F8 * dword_6FBBDB94;
  v162 += dword_6FBB52F8 * dword_6FBBDB94;
  v163 += dword_6FBB52F8 * dword_6FBBDB94;
  v164 += dword_6FBB52F8 * dword_6FBBDB94;
  v169 = 0;
  v170 = 0;
  v178 = 0;
  v186 = 0;
  v174 = 0;
  v182 = 0;
  v175 = 0;
  v183 = 0;
  v176 = 0;
  v184 = 0;
  v177 = 0;
  v185 = 0;
  result = sub_6F7368C0((int)&v165, (int)&v161, (int)&v169);
  v96 = v188;
  if ( v188 > 0 )
  {
    v121 = 0;
    v120 = 0;
    v136 = 0;
    v116 = 0;
    v122 = 12;
    v123 = 28;
    do
    {
      v10 = v187[v116];
      v11 = *(&v171 + v122);
      v12 = v187[v116++ + 1];
      v88 = v12;
      if ( v11 >= v173[v120] )
      {
        v122 = ++v120 + 12;
        v11 = *(&v171 + v120 + 12);
      }
      if ( v11 )
      {
        if ( v173[v120] > v11 )
        {
          v13 = *(&v171 + 2 * v120);
          v90 = (*(&v165 + v13) << dword_6FD4098C) + v11 * v126;
          v101 = (*(&v157 + v13) << dword_6FD4098C) + v11 * v128;
          v98 = (*(&v153 + v13) << dword_6FD4098C) + v11 * v130;
          v100 = v11 * v132 + (*(&v149 + v13) << dword_6FD4098C);
        }
      }
      else
      {
        v57 = *(&v171 + 2 * v120);
        v58 = dword_6FD4098C;
        v90 = *(&v165 + v57) << dword_6FD4098C;
        v59 = *(&v157 + v57);
        v95 = v59;
        v101 = v59 << dword_6FD4098C;
        v60 = *(&v153 + v57);
        v104 = v60;
        v98 = v60 << dword_6FD4098C;
        v61 = *(&v149 + v57);
        v107 = v61;
        v100 = v61 << dword_6FD4098C;
        v62 = v172[2 * v120];
        v92 = *(&v161 + v62) - *(&v161 + v57);
        v63 = *(&v165 + v62) - *(&v165 + v57);
        v64 = (unsigned __int64)((signed __int64)v63 << dword_6FD4098C) >> 32;
        v65 = v63 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v64 = v65;
          v65 = 0;
        }
        v126 = sub_6F737040(v65, v64, v92);
        v66 = *(&v157 + v62) - v95;
        v67 = (unsigned __int64)(v66 << v58) >> 32;
        v68 = (_DWORD)v66 << v58;
        if ( v58 & 0x20 )
        {
          v67 = v68;
          v68 = 0;
        }
        v128 = sub_6F737040(v68, v67, v92);
        v69 = *(&v153 + v62) - v104;
        v70 = (unsigned __int64)(v69 << v58) >> 32;
        v71 = (_DWORD)v69 << v58;
        if ( v58 & 0x20 )
        {
          v70 = v71;
          v71 = 0;
        }
        v130 = sub_6F737040(v71, v70, v92);
        v72 = *(&v149 + v62) - v107;
        v73 = (unsigned __int64)((signed __int64)v72 << v58) >> 32;
        v74 = v72 << v58;
        if ( v58 & 0x20 )
        {
          v73 = v74;
          if ( v58 & 0x20 )
            v74 = 0;
        }
        v132 = sub_6F737040(v74, v73, v92);
      }
      v14 = v121;
      *(&v171 + v122) = v88 - v10 + v11;
      v15 = v172[v123];
      if ( v15 >= v181[v121] )
      {
        ++v121;
        v123 = v14 + 29;
        v15 = v172[v14 + 29];
      }
      if ( v15 )
      {
        if ( v181[v121] > v15 )
        {
          v16 = *(&v179 + 2 * v121);
          v99 = (*(&v165 + v16) << dword_6FD4098C) + v15 * v127;
          v125 = (*(&v157 + v16) << dword_6FD4098C) + v15 * v129;
          v134 = (*(&v153 + v16) << dword_6FD4098C) + v15 * v131;
          v124 = v15 * v133 + (*(&v149 + v16) << dword_6FD4098C);
        }
      }
      else
      {
        v39 = *(&v179 + 2 * v121);
        v40 = dword_6FD4098C;
        v99 = *(&v165 + v39) << dword_6FD4098C;
        v41 = *(&v157 + v39);
        v103 = v41;
        v125 = v41 << dword_6FD4098C;
        v42 = *(&v153 + v39);
        v106 = v42;
        v134 = v42 << dword_6FD4098C;
        v43 = *(&v149 + v39);
        v109 = v43;
        v124 = v43 << dword_6FD4098C;
        v44 = v180[2 * v121];
        v94 = *(&v161 + v44) - *(&v161 + v39);
        v45 = *(&v165 + v44) - *(&v165 + v39);
        v46 = (unsigned __int64)((signed __int64)v45 << dword_6FD4098C) >> 32;
        v47 = v45 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v46 = v47;
          v47 = 0;
        }
        v127 = sub_6F737040(v47, v46, v94);
        v48 = *(&v157 + v44) - v103;
        v49 = (unsigned __int64)(v48 << v40) >> 32;
        v50 = (_DWORD)v48 << v40;
        if ( v40 & 0x20 )
        {
          v49 = v50;
          v50 = 0;
        }
        v129 = sub_6F737040(v50, v49, v94);
        v51 = *(&v153 + v44) - v106;
        v52 = (unsigned __int64)(v51 << v40) >> 32;
        v53 = (_DWORD)v51 << v40;
        if ( v40 & 0x20 )
        {
          v52 = v53;
          v53 = 0;
        }
        v131 = sub_6F737040(v53, v52, v94);
        v54 = *(&v149 + v44) - v109;
        v55 = (unsigned __int64)((signed __int64)v54 << v40) >> 32;
        v56 = v54 << v40;
        if ( v40 & 0x20 )
        {
          v55 = v56;
          if ( v40 & 0x20 )
            v56 = 0;
        }
        v133 = sub_6F737040(v56, v55, v94);
      }
      v172[v123] = v88 - v10 + v15;
      v17 = v137 - v10;
      if ( v137 - v10 > 0 )
      {
        v90 += v17 * v126;
        v101 += v17 * v128;
        v98 += v17 * v130;
        v125 += v17 * v129;
        v10 = v137;
        v100 += v17 * v132;
        v99 += v17 * v127;
        v134 += v17 * v131;
        v124 += v133 * v17;
      }
      v18 = v88;
      if ( v138 <= v88 )
        v18 = v138;
      result = v18 - v10;
      v135 = result;
      if ( result > 0 )
      {
        v146 = v101;
        v145 = v99;
        v110 = v125 - v101;
        v108 = v99 - v90;
        v144 = v90;
        v143 = v98;
        v105 = v134 - v98;
        v89 = v10;
        v142 = v100;
        v102 = v124 - v100;
        v117 = v10 + result;
        do
        {
          v19 = dword_6FD4098C;
          v20 = (1 << dword_6FD4098C) - 1;
          v21 = v90 + v20;
          v22 = v99 + v20;
          v23 = (unsigned __int64)((signed __int64)v110 << dword_6FD4098C) >> 32;
          v24 = v110 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v23 = v110 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v24 = 0;
          v91 = sub_6F737040(v24, v23, v108);
          v25 = (unsigned __int64)((signed __int64)v105 << v19) >> 32;
          v26 = v105 << v19;
          if ( v19 & 0x20 )
          {
            v25 = v105 << v19;
            v26 = 0;
          }
          v93 = sub_6F737040(v26, v25, v108);
          v27 = (unsigned __int64)((signed __int64)v102 << v19) >> 32;
          v28 = v102 << v19;
          if ( v19 & 0x20 )
          {
            v27 = v102 << v19;
            v28 = 0;
          }
          v29 = v21 >> v19;
          v97 = sub_6F737040(v28, v27, v108);
          v30 = (v29 << v19) - v90;
          v31 = v30 * (signed __int64)v91 >> (v19 & 0x1F);
          if ( v19 & 0x20 )
            LODWORD(v31) = (unsigned __int64)(v30 * (signed __int64)v91 >> (v19 & 0x1F)) >> 32;
          v111 = v31 + v101;
          v32 = v30 * (signed __int64)v93 >> (v19 & 0x1F);
          if ( v19 & 0x20 )
            LODWORD(v32) = (unsigned __int64)(v30 * (signed __int64)v93 >> (v19 & 0x1F)) >> 32;
          v114 = v98 + v32;
          v33 = v97 * (signed __int64)v30 >> (v19 & 0x1F);
          v34 = v19 - 1;
          if ( v19 & 0x20 )
            LODWORD(v33) = (unsigned __int64)(v97 * (signed __int64)v30 >> (v19 & 0x1F)) >> 32;
          v112 = (1 << v34) + v111;
          v35 = v100 + v33 + (1 << v34);
          v115 = (1 << v34) + v114;
          v36 = v22 >> v19;
          v37 = v118 - v29;
          if ( v118 - v29 > 0 )
          {
            v112 += v37 * v91;
            v29 = v118;
            v115 += v37 * v93;
            v35 += v97 * v37;
          }
          if ( v119 <= v36 )
            v36 = v119;
          v38 = v36 - v29;
          if ( v38 > 0 && sub_6F71F0C0(v89) )
          {
            if ( v136 % v140 == v141 )
            {
              v147 = v29 + v38;
              v148 = 4 * v29;
              v76 = v29 + dword_6FBB52F4 * (v89 << 10);
              v77 = dword_6FBB505C + 4 * v76 - 4 * v29;
              v139 = dword_6FBB5068 + 2 * v76 - 2 * v29;
              if ( ((_BYTE)v147 + ~(_BYTE)v29) & 1 )
              {
                v78 = v29++;
                dword_6FBB5058(
                  dword_6FBB5068 + 2 * v76,
                  v77 + v148,
                  v78,
                  v89,
                  (unsigned __int8)(v112 >> v19),
                  (unsigned __int8)(v115 >> v19),
                  (unsigned __int8)(v35 >> v19),
                  0,
                  0);
                v79 = v91 + v112;
                v35 += v97;
                v80 = dword_6FD4098C;
                v113 = v77;
                v81 = v79;
                v82 = v93 + v115;
              }
              else
              {
                v80 = v19;
                v81 = v112;
                v113 = dword_6FBB505C + 4 * v76 - 4 * v29;
                v82 = v115;
              }
              while ( 1 )
              {
                dword_6FBB5058(
                  v139 + 2 * v29,
                  v113 + 4 * v29,
                  v29,
                  v89,
                  (unsigned __int8)(v81 >> v80),
                  (unsigned __int8)(v82 >> v80),
                  (unsigned __int8)(v35 >> v80),
                  0,
                  0);
                v84 = v29 + 1;
                v85 = v91 + v81;
                v86 = v93 + v82;
                v87 = v97 + v35;
                if ( v29 + 1 == v147 )
                  break;
                v83 = v29 + 1;
                v29 += 2;
                dword_6FBB5058(
                  v139 + 2 * v84,
                  v113 + 4 * v84,
                  v83,
                  v89,
                  (unsigned __int8)(v85 >> dword_6FD4098C),
                  (unsigned __int8)(v86 >> dword_6FD4098C),
                  (unsigned __int8)(v87 >> dword_6FD4098C),
                  0,
                  0);
                v80 = dword_6FD4098C;
                v81 = v91 + v85;
                v82 = v93 + v86;
                v35 = v97 + v87;
              }
            }
            ++v136;
          }
          ++v89;
          v90 += v126;
          v99 += v127;
          v101 += v128;
          v110 += v129 - v128;
          v108 += v127 - v126;
          v105 += v131 - v130;
          v102 += v133 - v132;
          v98 += v130;
          v100 += v132;
        }
        while ( v89 != v117 );
        v90 = (v135 - 1) * v126 + v126 + v144;
        v101 = (v135 - 1) * v128 + v128 + v146;
        v98 = (v135 - 1) * v130 + v130 + v143;
        v100 = (v135 - 1) * v132 + v132 + v142;
        v99 = (v135 - 1) * v127 + v127 + v145;
        v75 = (v135 - 1) * v131;
        v125 += (v135 - 1) * v129 + v129;
        result = v75 + v131 + v134;
        v134 += v75 + v131;
        v124 += v133 + v133 * (v135 - 1);
        v96 = v188;
      }
    }
    while ( v116 < v96 );
  }
  return result;
}
