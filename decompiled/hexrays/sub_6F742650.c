int __usercall sub_6F742650@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  int result; // eax@1
  int v5; // ebp@3
  int v6; // ebx@3
  int v7; // edi@3
  int v8; // edi@7
  int v9; // edx@8
  int v10; // ebx@8
  int v11; // edi@12
  int v12; // eax@13
  int v13; // eax@15
  char v14; // di@22
  int v15; // ebx@22
  signed int v16; // ebp@22
  signed int v17; // ebx@22
  int v18; // edx@22
  int v19; // eax@22
  int v20; // edx@26
  int v21; // eax@26
  int v22; // edx@28
  int v23; // eax@28
  signed int v24; // ebp@30
  int v25; // esi@30
  signed __int64 v26; // rax@30
  signed __int64 v27; // rax@32
  signed __int64 v28; // rax@34
  char v29; // cl@34
  signed int v30; // esi@36
  int v31; // ebx@36
  int v32; // eax@36
  int v33; // ebx@40
  int v34; // eax@44
  char v35; // si@44
  int v36; // edi@44
  int v37; // edi@44
  int v38; // edi@44
  int v39; // edi@44
  int v40; // eax@44
  int v41; // edx@44
  int v42; // eax@44
  __int64 v43; // rax@46
  int v44; // edx@46
  int v45; // eax@46
  __int64 v46; // rax@48
  int v47; // edx@48
  int v48; // eax@48
  int v49; // eax@50
  int v50; // edx@50
  int v51; // eax@50
  int v52; // eax@54
  char v53; // si@54
  int v54; // edi@54
  int v55; // edi@54
  int v56; // edi@54
  int v57; // edi@54
  int v58; // eax@54
  int v59; // edx@54
  int v60; // eax@54
  __int64 v61; // rax@56
  int v62; // edx@56
  int v63; // eax@56
  __int64 v64; // rax@58
  int v65; // edx@58
  int v66; // eax@58
  int v67; // eax@60
  int v68; // edx@60
  int v69; // eax@60
  int v70; // eax@65
  int v71; // ebx@65
  signed int v72; // ST08_4@66
  int v73; // edx@66
  char v74; // cl@66
  signed int v75; // edi@66
  signed int v76; // ebx@66
  int v77; // ST08_4@67
  int v78; // eax@68
  signed int v79; // edi@68
  signed int v80; // ebx@68
  signed int v81; // esi@68
  int v82; // [sp+30h] [bp-23Ch]@3
  signed int v83; // [sp+30h] [bp-23Ch]@20
  int v84; // [sp+34h] [bp-238h]@0
  int v85; // [sp+38h] [bp-234h]@26
  int v86; // [sp+38h] [bp-234h]@54
  int v87; // [sp+3Ch] [bp-230h]@28
  int v88; // [sp+3Ch] [bp-230h]@44
  int v89; // [sp+3Ch] [bp-230h]@54
  int v90; // [sp+40h] [bp-22Ch]@1
  int v91; // [sp+40h] [bp-22Ch]@30
  int v92; // [sp+44h] [bp-228h]@0
  int v93; // [sp+48h] [bp-224h]@0
  int v94; // [sp+4Ch] [bp-220h]@0
  int v95; // [sp+50h] [bp-21Ch]@0
  int v96; // [sp+54h] [bp-218h]@20
  int v97; // [sp+54h] [bp-218h]@44
  int v98; // [sp+54h] [bp-218h]@54
  int v99; // [sp+58h] [bp-214h]@20
  int v100; // [sp+58h] [bp-214h]@44
  int v101; // [sp+58h] [bp-214h]@54
  int v102; // [sp+5Ch] [bp-210h]@20
  int v103; // [sp+5Ch] [bp-210h]@44
  int v104; // [sp+60h] [bp-20Ch]@20
  int v105; // [sp+64h] [bp-208h]@32
  signed int v106; // [sp+64h] [bp-208h]@36
  int v107; // [sp+64h] [bp-208h]@66
  int v108; // [sp+68h] [bp-204h]@34
  signed int v109; // [sp+68h] [bp-204h]@36
  int v110; // [sp+80h] [bp-1ECh]@2
  int v111; // [sp+84h] [bp-1E8h]@20
  int v112; // [sp+98h] [bp-1D4h]@1
  int v113; // [sp+9Ch] [bp-1D0h]@1
  int v114; // [sp+A0h] [bp-1CCh]@2
  int v115; // [sp+A4h] [bp-1C8h]@2
  int v116; // [sp+A8h] [bp-1C4h]@2
  int v117; // [sp+ACh] [bp-1C0h]@2
  int v118; // [sp+B0h] [bp-1BCh]@0
  int v119; // [sp+B4h] [bp-1B8h]@0
  int v120; // [sp+B8h] [bp-1B4h]@0
  int v121; // [sp+C0h] [bp-1ACh]@0
  int v122; // [sp+C8h] [bp-1A4h]@0
  int v123; // [sp+D0h] [bp-19Ch]@0
  int v124; // [sp+D8h] [bp-194h]@0
  int v125; // [sp+E0h] [bp-18Ch]@0
  int v126; // [sp+E8h] [bp-184h]@0
  int v127; // [sp+F0h] [bp-17Ch]@0
  int v128; // [sp+F8h] [bp-174h]@0
  int v129; // [sp+FCh] [bp-170h]@17
  signed int v130; // [sp+100h] [bp-16Ch]@2
  int v131; // [sp+104h] [bp-168h]@1
  int v132; // [sp+108h] [bp-164h]@1
  int v133; // [sp+10Ch] [bp-160h]@65
  signed int v134; // [sp+110h] [bp-15Ch]@1
  int v135; // [sp+114h] [bp-158h]@1
  int v136; // [sp+118h] [bp-154h]@20
  int v137; // [sp+11Ch] [bp-150h]@20
  int v138; // [sp+120h] [bp-14Ch]@20
  int v139; // [sp+124h] [bp-148h]@20
  int v140; // [sp+128h] [bp-144h]@20
  int v141; // [sp+138h] [bp-134h]@65
  int v142; // [sp+13Ch] [bp-130h]@65
  int v143; // [sp+14Ch] [bp-120h]@1
  int v144; // [sp+150h] [bp-11Ch]@1
  int v145; // [sp+154h] [bp-118h]@1
  int v146; // [sp+158h] [bp-114h]@1
  int v147; // [sp+15Ch] [bp-110h]@1
  int v148; // [sp+160h] [bp-10Ch]@1
  int v149; // [sp+164h] [bp-108h]@1
  int v150; // [sp+168h] [bp-104h]@1
  int v151; // [sp+16Ch] [bp-100h]@1
  int v152; // [sp+170h] [bp-FCh]@1
  int v153; // [sp+174h] [bp-F8h]@1
  int v154; // [sp+178h] [bp-F4h]@1
  int v155; // [sp+17Ch] [bp-F0h]@1
  int v156; // [sp+180h] [bp-ECh]@1
  int v157; // [sp+184h] [bp-E8h]@1
  int v158; // [sp+188h] [bp-E4h]@1
  int v159; // [sp+18Ch] [bp-E0h]@1
  int v160; // [sp+190h] [bp-DCh]@1
  int v161; // [sp+194h] [bp-D8h]@1
  int v162; // [sp+198h] [bp-D4h]@1
  int v163; // [sp+19Ch] [bp-D0h]@1
  int v164; // [sp+1A0h] [bp-CCh]@1
  int v165; // [sp+1A4h] [bp-C8h]@3
  int v166[7]; // [sp+1A8h] [bp-C4h]@8
  int v167[4]; // [sp+1C4h] [bp-A8h]@3
  int v168; // [sp+1D4h] [bp-98h]@1
  int v169; // [sp+1D8h] [bp-94h]@1
  int v170; // [sp+1DCh] [bp-90h]@1
  int v171; // [sp+1E0h] [bp-8Ch]@1
  int v172; // [sp+1E4h] [bp-88h]@1
  int v173; // [sp+1E8h] [bp-84h]@12
  int v174[7]; // [sp+1ECh] [bp-80h]@44
  int v175[4]; // [sp+208h] [bp-64h]@8
  int v176; // [sp+218h] [bp-54h]@1
  int v177; // [sp+21Ch] [bp-50h]@1
  int v178; // [sp+220h] [bp-4Ch]@1
  int v179; // [sp+224h] [bp-48h]@1
  int v180; // [sp+228h] [bp-44h]@1
  int v181[4]; // [sp+22Ch] [bp-40h]@3
  int v182; // [sp+23Ch] [bp-30h]@1

  v134 = a1;
  v135 = a2;
  v112 = dword_6FBB52F4 * dword_6FBBDB98;
  v113 = dword_6FBB52F4 * dword_6FBBDBA0;
  v132 = dword_6FBB52F8 * dword_6FBBDBA4;
  v131 = dword_6FBB52F8 * dword_6FBBDB9C;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v159 = v2 * dword_6FBB52F4;
  v160 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v162 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v161 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v155 = v3 * dword_6FBB52F8;
  v156 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v158 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  v157 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
  sub_6F733480(v2, v3, &v159, &v155);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v160,
    &v156);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v162,
    &v158);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5),
    (signed __int16)(32 * word_70041E8E) >> 5,
    &v161,
    &v157);
  v151 = (unsigned __int8)dword_70041E70;
  v152 = (unsigned __int8)dword_70041E74;
  v154 = (unsigned __int8)dword_70041E78;
  v153 = (unsigned __int8)dword_70041E7C;
  v147 = BYTE1(dword_70041E70);
  v148 = BYTE1(dword_70041E74);
  v150 = BYTE1(dword_70041E78);
  v149 = BYTE1(dword_70041E7C);
  v143 = BYTE2(dword_70041E70);
  v159 += dword_6FBB52F4 * dword_6FBBDB90;
  v160 += dword_6FBB52F4 * dword_6FBBDB90;
  v161 += dword_6FBB52F4 * dword_6FBBDB90;
  v144 = BYTE2(dword_70041E74);
  v146 = BYTE2(dword_70041E78);
  v145 = BYTE2(dword_70041E7C);
  v162 += dword_6FBB52F4 * dword_6FBBDB90;
  v155 += dword_6FBB52F8 * dword_6FBBDB94;
  v156 += dword_6FBB52F8 * dword_6FBBDB94;
  v157 += dword_6FBB52F8 * dword_6FBBDB94;
  v158 += dword_6FBB52F8 * dword_6FBBDB94;
  v163 = 0;
  v164 = 0;
  v172 = 0;
  v180 = 0;
  v168 = 0;
  v176 = 0;
  v169 = 0;
  v177 = 0;
  v170 = 0;
  v178 = 0;
  v171 = 0;
  v179 = 0;
  result = sub_6F7368C0((int)&v159, (int)&v155, (int)&v163);
  v90 = v182;
  if ( v182 > 0 )
  {
    v115 = 0;
    v114 = 0;
    v130 = 0;
    v110 = 0;
    v116 = 12;
    v117 = 28;
    do
    {
      v5 = v181[v110];
      v6 = *(&v165 + v116);
      v7 = v181[v110++ + 1];
      v82 = v7;
      if ( v6 >= v167[v114] )
      {
        v116 = ++v114 + 12;
        v6 = *(&v165 + v114 + 12);
      }
      if ( v6 )
      {
        if ( v167[v114] > v6 )
        {
          v8 = *(&v165 + 2 * v114);
          v84 = (*(&v159 + v8) << dword_6FD4098C) + v6 * v120;
          v95 = (*(&v151 + v8) << dword_6FD4098C) + v6 * v122;
          v92 = (*(&v147 + v8) << dword_6FD4098C) + v6 * v124;
          v94 = v6 * v126 + (*(&v143 + v8) << dword_6FD4098C);
        }
      }
      else
      {
        v52 = *(&v165 + 2 * v114);
        v53 = dword_6FD4098C;
        v84 = *(&v159 + v52) << dword_6FD4098C;
        v54 = *(&v151 + v52);
        v89 = v54;
        v95 = v54 << dword_6FD4098C;
        v55 = *(&v147 + v52);
        v98 = v55;
        v92 = v55 << dword_6FD4098C;
        v56 = *(&v143 + v52);
        v101 = v56;
        v94 = v56 << dword_6FD4098C;
        v57 = v166[2 * v114];
        v86 = *(&v155 + v57) - *(&v155 + v52);
        v58 = *(&v159 + v57) - *(&v159 + v52);
        v59 = (unsigned __int64)((signed __int64)v58 << dword_6FD4098C) >> 32;
        v60 = v58 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v59 = v60;
          v60 = 0;
        }
        v120 = sub_6F737040(v60, v59, v86);
        v61 = *(&v151 + v57) - v89;
        v62 = (unsigned __int64)(v61 << v53) >> 32;
        v63 = (_DWORD)v61 << v53;
        if ( v53 & 0x20 )
        {
          v62 = v63;
          v63 = 0;
        }
        v122 = sub_6F737040(v63, v62, v86);
        v64 = *(&v147 + v57) - v98;
        v65 = (unsigned __int64)(v64 << v53) >> 32;
        v66 = (_DWORD)v64 << v53;
        if ( v53 & 0x20 )
        {
          v65 = v66;
          v66 = 0;
        }
        v124 = sub_6F737040(v66, v65, v86);
        v67 = *(&v143 + v57) - v101;
        v68 = (unsigned __int64)((signed __int64)v67 << v53) >> 32;
        v69 = v67 << v53;
        if ( v53 & 0x20 )
        {
          v68 = v69;
          if ( v53 & 0x20 )
            v69 = 0;
        }
        v126 = sub_6F737040(v69, v68, v86);
      }
      v9 = v115;
      *(&v165 + v116) = v82 - v5 + v6;
      v10 = v166[v117];
      if ( v10 >= v175[v115] )
      {
        ++v115;
        v117 = v9 + 29;
        v10 = v166[v9 + 29];
      }
      if ( v10 )
      {
        if ( v175[v115] > v10 )
        {
          v11 = *(&v173 + 2 * v115);
          v93 = (*(&v159 + v11) << dword_6FD4098C) + v10 * v121;
          v119 = (*(&v151 + v11) << dword_6FD4098C) + v10 * v123;
          v128 = (*(&v147 + v11) << dword_6FD4098C) + v10 * v125;
          v118 = v10 * v127 + (*(&v143 + v11) << dword_6FD4098C);
        }
      }
      else
      {
        v34 = *(&v173 + 2 * v115);
        v35 = dword_6FD4098C;
        v93 = *(&v159 + v34) << dword_6FD4098C;
        v36 = *(&v151 + v34);
        v97 = v36;
        v119 = v36 << dword_6FD4098C;
        v37 = *(&v147 + v34);
        v100 = v37;
        v128 = v37 << dword_6FD4098C;
        v38 = *(&v143 + v34);
        v103 = v38;
        v118 = v38 << dword_6FD4098C;
        v39 = v174[2 * v115];
        v88 = *(&v155 + v39) - *(&v155 + v34);
        v40 = *(&v159 + v39) - *(&v159 + v34);
        v41 = (unsigned __int64)((signed __int64)v40 << dword_6FD4098C) >> 32;
        v42 = v40 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v41 = v42;
          v42 = 0;
        }
        v121 = sub_6F737040(v42, v41, v88);
        v43 = *(&v151 + v39) - v97;
        v44 = (unsigned __int64)(v43 << v35) >> 32;
        v45 = (_DWORD)v43 << v35;
        if ( v35 & 0x20 )
        {
          v44 = v45;
          v45 = 0;
        }
        v123 = sub_6F737040(v45, v44, v88);
        v46 = *(&v147 + v39) - v100;
        v47 = (unsigned __int64)(v46 << v35) >> 32;
        v48 = (_DWORD)v46 << v35;
        if ( v35 & 0x20 )
        {
          v47 = v48;
          v48 = 0;
        }
        v125 = sub_6F737040(v48, v47, v88);
        v49 = *(&v143 + v39) - v103;
        v50 = (unsigned __int64)((signed __int64)v49 << v35) >> 32;
        v51 = v49 << v35;
        if ( v35 & 0x20 )
        {
          v50 = v51;
          if ( v35 & 0x20 )
            v51 = 0;
        }
        v127 = sub_6F737040(v51, v50, v88);
      }
      v166[v117] = v82 - v5 + v10;
      v12 = v131 - v5;
      if ( v131 - v5 > 0 )
      {
        v84 += v12 * v120;
        v95 += v12 * v122;
        v92 += v12 * v124;
        v119 += v12 * v123;
        v5 = v131;
        v94 += v12 * v126;
        v93 += v12 * v121;
        v128 += v12 * v125;
        v118 += v127 * v12;
      }
      v13 = v82;
      if ( v132 <= v82 )
        v13 = v132;
      result = v13 - v5;
      v129 = result;
      if ( result > 0 )
      {
        v140 = v95;
        v139 = v93;
        v104 = v119 - v95;
        v102 = v93 - v84;
        v138 = v84;
        v137 = v92;
        v99 = v128 - v92;
        v83 = v5;
        v136 = v94;
        v96 = v118 - v94;
        v111 = v5 + result;
        do
        {
          v14 = dword_6FD4098C;
          v15 = (1 << dword_6FD4098C) - 1;
          v16 = v84 + v15;
          v17 = v93 + v15;
          v18 = (unsigned __int64)((signed __int64)v104 << dword_6FD4098C) >> 32;
          v19 = v104 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v18 = v104 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v19 = 0;
          v85 = sub_6F737040(v19, v18, v102);
          v20 = (unsigned __int64)((signed __int64)v99 << v14) >> 32;
          v21 = v99 << v14;
          if ( v14 & 0x20 )
          {
            v20 = v99 << v14;
            v21 = 0;
          }
          v87 = sub_6F737040(v21, v20, v102);
          v22 = (unsigned __int64)((signed __int64)v96 << v14) >> 32;
          v23 = v96 << v14;
          if ( v14 & 0x20 )
          {
            v22 = v96 << v14;
            v23 = 0;
          }
          v24 = v16 >> v14;
          v91 = sub_6F737040(v23, v22, v102);
          v25 = (v24 << v14) - v84;
          v26 = v25 * (signed __int64)v85 >> (v14 & 0x1F);
          if ( v14 & 0x20 )
            LODWORD(v26) = (unsigned __int64)(v25 * (signed __int64)v85 >> (v14 & 0x1F)) >> 32;
          v105 = v26 + v95;
          v27 = v25 * (signed __int64)v87 >> (v14 & 0x1F);
          if ( v14 & 0x20 )
            LODWORD(v27) = (unsigned __int64)(v25 * (signed __int64)v87 >> (v14 & 0x1F)) >> 32;
          v108 = v92 + v27;
          v28 = v91 * (signed __int64)v25 >> (v14 & 0x1F);
          v29 = v14 - 1;
          if ( v14 & 0x20 )
            LODWORD(v28) = (unsigned __int64)(v91 * (signed __int64)v25 >> (v14 & 0x1F)) >> 32;
          v106 = (1 << v29) + v105;
          v30 = v94 + v28 + (1 << v29);
          v109 = (1 << v29) + v108;
          v31 = v17 >> v14;
          v32 = v112 - v24;
          if ( v112 - v24 > 0 )
          {
            v106 += v32 * v85;
            v24 = v112;
            v109 += v32 * v87;
            v30 += v91 * v32;
          }
          if ( v113 <= v31 )
            v31 = v113;
          v33 = v31 - v24;
          if ( v33 > 0 && sub_6F71F0C0(v83) )
          {
            if ( v130 % v134 == v135 )
            {
              v141 = v24 + v33;
              v142 = 4 * v24;
              v70 = v24 + dword_6FBB52F4 * (v83 << 10);
              v71 = dword_6FBB505C + 4 * v70 - 4 * v24;
              v133 = dword_6FBB5068 + 2 * v70 - 2 * v24;
              if ( ((_BYTE)v141 + ~(_BYTE)v24) & 1 )
              {
                v72 = v24++;
                dword_6FBB5058(
                  dword_6FBB5068 + 2 * v70,
                  v71 + v142,
                  v72,
                  v83,
                  (unsigned __int8)(v106 >> v14),
                  (unsigned __int8)(v109 >> v14),
                  (unsigned __int8)(v30 >> v14),
                  0,
                  0);
                v73 = v85 + v106;
                v30 += v91;
                v74 = dword_6FD4098C;
                v107 = v71;
                v75 = v73;
                v76 = v87 + v109;
              }
              else
              {
                v74 = v14;
                v75 = v106;
                v107 = dword_6FBB505C + 4 * v70 - 4 * v24;
                v76 = v109;
              }
              while ( 1 )
              {
                dword_6FBB5058(
                  v133 + 2 * v24,
                  v107 + 4 * v24,
                  v24,
                  v83,
                  (unsigned __int8)(v75 >> v74),
                  (unsigned __int8)(v76 >> v74),
                  (unsigned __int8)(v30 >> v74),
                  0,
                  0);
                v78 = v24 + 1;
                v79 = v85 + v75;
                v80 = v87 + v76;
                v81 = v91 + v30;
                if ( v24 + 1 == v141 )
                  break;
                v77 = v24 + 1;
                v24 += 2;
                dword_6FBB5058(
                  v133 + 2 * v78,
                  v107 + 4 * v78,
                  v77,
                  v83,
                  (unsigned __int8)(v79 >> dword_6FD4098C),
                  (unsigned __int8)(v80 >> dword_6FD4098C),
                  (unsigned __int8)(v81 >> dword_6FD4098C),
                  0,
                  0);
                v74 = dword_6FD4098C;
                v75 = v85 + v79;
                v76 = v87 + v80;
                v30 = v91 + v81;
              }
            }
            ++v130;
          }
          ++v83;
          v84 += v120;
          v93 += v121;
          v95 += v122;
          v104 += v123 - v122;
          v102 += v121 - v120;
          v99 += v125 - v124;
          v96 += v127 - v126;
          v92 += v124;
          v94 += v126;
        }
        while ( v83 != v111 );
        v84 = (v129 - 1) * v120 + v120 + v138;
        v95 = (v129 - 1) * v122 + v122 + v140;
        v92 = (v129 - 1) * v124 + v124 + v137;
        v94 = (v129 - 1) * v126 + v126 + v136;
        v93 = (v129 - 1) * v121 + v121 + v139;
        result = (v129 - 1) * v125;
        v119 += (v129 - 1) * v123 + v123;
        v128 += result + v125;
        v118 += v127 + v127 * (v129 - 1);
        v90 = v182;
      }
    }
    while ( v110 < v90 );
  }
  return result;
}
