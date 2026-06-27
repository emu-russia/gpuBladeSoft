int __usercall sub_6F748550@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // ST3C_4@1
  _DWORD *v3; // ebp@1
  int result; // eax@9
  int v5; // edx@11
  int v6; // ebx@11
  int v7; // ebp@11
  int v8; // eax@15
  int v9; // edx@16
  int v10; // ebx@16
  int v11; // edi@20
  char v12; // di@30
  int v13; // eax@30
  signed int v14; // ebx@30
  int v15; // edx@30
  int v16; // eax@30
  int v17; // edx@34
  int v18; // eax@34
  int v19; // edx@38
  int v20; // eax@38
  int v21; // edx@42
  int v22; // eax@42
  signed int v23; // ebx@46
  int v24; // ebp@46
  unsigned __int64 v25; // rax@46
  int v26; // ebx@46
  int v27; // ebx@48
  signed __int64 v28; // rax@48
  signed __int64 v29; // rax@50
  signed int v30; // esi@52
  signed __int64 v31; // rax@52
  int v32; // ebp@54
  signed int v33; // eax@54
  int v34; // edx@54
  signed int v35; // edi@55
  signed int v36; // ebp@55
  int v37; // ebx@56
  int v38; // ebx@58
  int v39; // eax@63
  char v40; // si@63
  int v41; // edi@63
  int v42; // edi@63
  int v43; // edi@63
  int v44; // edi@63
  int v45; // edi@63
  int v46; // eax@63
  int v47; // edx@63
  int v48; // eax@63
  __int64 v49; // rax@65
  int v50; // edx@65
  int v51; // eax@65
  __int64 v52; // rax@67
  int v53; // edx@67
  int v54; // eax@67
  __int64 v55; // rax@69
  int v56; // edx@69
  int v57; // eax@69
  int v58; // eax@71
  int v59; // edx@71
  int v60; // eax@71
  int v61; // eax@75
  char v62; // si@75
  int v63; // edi@75
  int v64; // edi@75
  int v65; // edi@75
  int v66; // edi@75
  int v67; // edi@75
  int v68; // eax@75
  int v69; // edx@75
  int v70; // eax@75
  __int64 v71; // rax@77
  int v72; // edx@77
  int v73; // eax@77
  __int64 v74; // rax@79
  int v75; // edx@79
  int v76; // eax@79
  __int64 v77; // rax@81
  int v78; // edx@81
  int v79; // eax@81
  int v80; // eax@83
  int v81; // edx@83
  int v82; // eax@83
  int v83; // eax@88
  int v84; // eax@88
  int v85; // ebx@89
  signed int v86; // ebp@90
  signed int v87; // esi@90
  int v88; // ecx@90
  signed int v89; // edi@90
  signed int v90; // [sp+3Ch] [bp-1BCh]@11
  int v91; // [sp+40h] [bp-1B8h]@46
  int v92; // [sp+40h] [bp-1B8h]@75
  int v93; // [sp+44h] [bp-1B4h]@0
  int v94; // [sp+48h] [bp-1B0h]@34
  int v95; // [sp+48h] [bp-1B0h]@63
  int v96; // [sp+48h] [bp-1B0h]@75
  int v97; // [sp+4Ch] [bp-1ACh]@9
  int v98; // [sp+4Ch] [bp-1ACh]@38
  int v99; // [sp+50h] [bp-1A8h]@42
  int v100; // [sp+50h] [bp-1A8h]@63
  int v101; // [sp+50h] [bp-1A8h]@75
  int v102; // [sp+54h] [bp-1A4h]@46
  int v103; // [sp+54h] [bp-1A4h]@63
  int v104; // [sp+54h] [bp-1A4h]@75
  int v105; // [sp+58h] [bp-1A0h]@0
  int v106; // [sp+5Ch] [bp-19Ch]@0
  int v107; // [sp+60h] [bp-198h]@0
  int v108; // [sp+64h] [bp-194h]@0
  int v109; // [sp+68h] [bp-190h]@0
  int v110; // [sp+6Ch] [bp-18Ch]@28
  int v111; // [sp+6Ch] [bp-18Ch]@63
  int v112; // [sp+6Ch] [bp-18Ch]@75
  int v113; // [sp+70h] [bp-188h]@28
  int v114; // [sp+70h] [bp-188h]@63
  int v115; // [sp+74h] [bp-184h]@28
  int v116; // [sp+78h] [bp-180h]@28
  int v117; // [sp+7Ch] [bp-17Ch]@28
  signed int v118; // [sp+80h] [bp-178h]@30
  signed int v119; // [sp+80h] [bp-178h]@55
  signed int v120; // [sp+84h] [bp-174h]@50
  int v121; // [sp+84h] [bp-174h]@88
  int v122; // [sp+88h] [bp-170h]@1
  int v123; // [sp+A4h] [bp-154h]@10
  int v124; // [sp+B4h] [bp-144h]@28
  int v125; // [sp+C0h] [bp-138h]@1
  int v126; // [sp+C4h] [bp-134h]@10
  int v127; // [sp+C8h] [bp-130h]@10
  int v128; // [sp+CCh] [bp-12Ch]@10
  int v129; // [sp+D0h] [bp-128h]@10
  int v130; // [sp+D4h] [bp-124h]@0
  int v131; // [sp+D8h] [bp-120h]@0
  int v132; // [sp+DCh] [bp-11Ch]@0
  int v133; // [sp+E0h] [bp-118h]@0
  int v134; // [sp+E8h] [bp-110h]@0
  int v135; // [sp+F0h] [bp-108h]@0
  int v136; // [sp+F8h] [bp-100h]@0
  int v137; // [sp+100h] [bp-F8h]@0
  int v138; // [sp+108h] [bp-F0h]@0
  int v139; // [sp+110h] [bp-E8h]@0
  int v140; // [sp+118h] [bp-E0h]@0
  int v141; // [sp+120h] [bp-D8h]@0
  int v142; // [sp+128h] [bp-D0h]@0
  int v143; // [sp+130h] [bp-C8h]@0
  int v144; // [sp+134h] [bp-C4h]@25
  signed int v145; // [sp+138h] [bp-C0h]@10
  int v146; // [sp+13Ch] [bp-BCh]@1
  int v147; // [sp+140h] [bp-B8h]@1
  signed int v148; // [sp+144h] [bp-B4h]@1
  int v149; // [sp+148h] [bp-B0h]@1
  int v150; // [sp+14Ch] [bp-ACh]@88
  int v151; // [sp+150h] [bp-A8h]@28
  int v152; // [sp+154h] [bp-A4h]@28
  int v153; // [sp+158h] [bp-A0h]@28
  int v154; // [sp+15Ch] [bp-9Ch]@28
  int v155; // [sp+170h] [bp-88h]@28
  int v156; // [sp+174h] [bp-84h]@28
  int v157; // [sp+178h] [bp-80h]@88
  int v158; // [sp+18Ch] [bp-6Ch]@9
  int v159; // [sp+190h] [bp-68h]@9
  int v160; // [sp+194h] [bp-64h]@9
  int v161; // [sp+198h] [bp-60h]@9
  int v162; // [sp+19Ch] [bp-5Ch]@9
  int v163; // [sp+1A0h] [bp-58h]@9
  int v164; // [sp+1A4h] [bp-54h]@9
  int v165; // [sp+1A8h] [bp-50h]@9
  int v166; // [sp+1ACh] [bp-4Ch]@9
  int v167; // [sp+1B0h] [bp-48h]@9
  int v168; // [sp+1B4h] [bp-44h]@9
  int v169; // [sp+1B8h] [bp-40h]@9
  int v170; // [sp+1BCh] [bp-3Ch]@9
  int v171; // [sp+1C0h] [bp-38h]@9
  int v172; // [sp+1C4h] [bp-34h]@9
  int v173; // [sp+1C8h] [bp-30h]@9
  int v174; // [sp+1CCh] [bp-2Ch]@1
  int v175; // [sp+1D0h] [bp-28h]@1
  int v176; // [sp+1D4h] [bp-24h]@1
  int v177; // [sp+1D8h] [bp-20h]@1
  int v178; // [sp+1DCh] [bp-1Ch]@1
  int v179; // [sp+1E0h] [bp-18h]@1
  int v180; // [sp+1E4h] [bp-14h]@1
  int v181; // [sp+1E8h] [bp-10h]@1
  int v182; // [sp+1ECh] [bp-Ch]@1
  int v183; // [sp+1F0h] [bp-8h]@1
  int v184; // [sp+1F4h] [bp-4h]@1
  int v185; // [sp+1F8h] [bp+0h]@1
  int v186; // [sp+1FCh] [bp+4h]@9
  int v187; // [sp+200h] [bp+8h]@9
  int v188; // [sp+204h] [bp+Ch]@11
  int v189[7]; // [sp+208h] [bp+10h]@16
  int v190[4]; // [sp+224h] [bp+2Ch]@11
  int v191; // [sp+234h] [bp+3Ch]@9
  int v192; // [sp+238h] [bp+40h]@9
  int v193; // [sp+23Ch] [bp+44h]@9
  int v194; // [sp+240h] [bp+48h]@9
  int v195; // [sp+244h] [bp+4Ch]@9
  int v196; // [sp+248h] [bp+50h]@20
  int v197[7]; // [sp+24Ch] [bp+54h]@63
  int v198[4]; // [sp+268h] [bp+70h]@16
  int v199; // [sp+278h] [bp+80h]@9
  int v200; // [sp+27Ch] [bp+84h]@9
  int v201; // [sp+280h] [bp+88h]@9
  int v202; // [sp+284h] [bp+8Ch]@9
  int v203; // [sp+288h] [bp+90h]@9
  int v204[4]; // [sp+28Ch] [bp+94h]@11
  int v205; // [sp+29Ch] [bp+A4h]@9

  v148 = a1;
  v149 = a2;
  v146 = dword_6FBB52F8 * dword_6FBBDB9C;
  v122 = dword_6FBB52F4 * dword_6FBBDB98;
  v147 = dword_6FBB52F8 * dword_6FBBDBA4;
  v125 = dword_6FBB52F4 * dword_6FBBDBA0;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v183 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v182 = dword_6FBB52F4 * v2;
  v185 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v184 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v178 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v3 = (_DWORD *)((signed __int16)((signed __int16)(32 * word_70041E8A) >> 5) * dword_6FBB52F8);
  v179 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5) * dword_6FBB52F8;
  v181 = (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5) * dword_6FBB52F8;
  v180 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
  sub_6F732840(
    v2,
    (signed __int16)(32 * word_70041E82) >> 5,
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v182,
    &v178,
    &v174,
    &v183,
    &v179,
    &v175,
    v3,
    &v181,
    &v177);
  sub_6F732840(
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (signed __int16)(32 * word_70041E8A) >> 5,
    (signed __int16)(32 * word_70041E8C) >> 5,
    (signed __int16)(32 * word_70041E8E) >> 5,
    &v183,
    &v179,
    &v175,
    v3,
    &v181,
    &v177,
    &v184,
    &v180,
    &v176);
  if ( !v174 )
    v174 = 1;
  if ( !v175 )
    v175 = 1;
  if ( !v176 )
    v176 = 1;
  if ( !v177 )
    v177 = 1;
  v170 = 0xFFFF / v174;
  v171 = 0xFFFF / v175;
  v172 = 0xFFFF / v176;
  v173 = 0xFFFF / v177;
  v168 = 0xFFFF / v176 * (unsigned __int8)dword_70041E7C;
  v167 = 0xFFFF / v175 * (unsigned __int8)dword_70041E74;
  v166 = 0xFFFF / v174 * (unsigned __int8)dword_70041E70;
  v162 = 0xFFFF / v174 * BYTE1(dword_70041E70);
  v169 = 0xFFFF / v177 * (unsigned __int8)dword_70041E78;
  v163 = 0xFFFF / v175 * BYTE1(dword_70041E74);
  v164 = 0xFFFF / v176 * BYTE1(dword_70041E7C);
  v160 = BYTE2(dword_70041E7C) * (0xFFFF / v176);
  v158 = BYTE2(dword_70041E70) * (0xFFFF / v174);
  v165 = 0xFFFF / v177 * BYTE1(dword_70041E78);
  v161 = BYTE2(dword_70041E78) * (0xFFFF / v177);
  v159 = BYTE2(dword_70041E74) * (0xFFFF / v175);
  v182 += dword_6FBB52F4 * dword_6FBBDB90;
  v183 += dword_6FBB52F4 * dword_6FBBDB90;
  v184 += dword_6FBB52F4 * dword_6FBBDB90;
  v185 += dword_6FBB52F4 * dword_6FBBDB90;
  v186 = 0;
  v187 = 0;
  v178 += dword_6FBB52F8 * dword_6FBBDB94;
  v179 += dword_6FBB52F8 * dword_6FBBDB94;
  v180 += dword_6FBB52F8 * dword_6FBBDB94;
  v181 += dword_6FBB52F8 * dword_6FBBDB94;
  v195 = 0;
  v203 = 0;
  v191 = 0;
  v199 = 0;
  v192 = 0;
  v200 = 0;
  v193 = 0;
  v201 = 0;
  v194 = 0;
  v202 = 0;
  result = sub_6F7368C0((int)&v182, (int)&v178, (int)&v186);
  v97 = v205;
  if ( v205 > 0 )
  {
    v127 = 0;
    v126 = 0;
    v145 = 0;
    v123 = 0;
    v128 = 12;
    v129 = 28;
    do
    {
      v5 = v204[v123];
      v6 = *(&v188 + v128);
      v7 = v204[++v123];
      v90 = v5;
      if ( v6 >= v190[v126] )
      {
        v128 = ++v126 + 12;
        v6 = *(&v188 + v126 + 12);
      }
      if ( v6 )
      {
        if ( v190[v126] > v6 )
        {
          v8 = *(&v188 + 2 * v126);
          v93 = (*(&v182 + v8) << dword_6FD4098C) + v6 * v133;
          v107 = (*(&v170 + v8) << dword_6FD4098C) + v6 * v135;
          v105 = (*(&v166 + v8) << dword_6FD4098C) + v6 * v137;
          v109 = (*(&v162 + v8) << dword_6FD4098C) + v6 * v139;
          v106 = v6 * v141 + (*(&v158 + v8) << dword_6FD4098C);
        }
      }
      else
      {
        v61 = *(&v188 + 2 * v126);
        v62 = dword_6FD4098C;
        v93 = *(&v182 + v61) << dword_6FD4098C;
        v63 = *(&v170 + v61);
        v96 = v63;
        v107 = v63 << dword_6FD4098C;
        v64 = *(&v166 + v61);
        v101 = v64;
        v105 = v64 << dword_6FD4098C;
        v65 = *(&v162 + v61);
        v104 = v65;
        v109 = v65 << dword_6FD4098C;
        v66 = *(&v158 + v61);
        v112 = v66;
        v106 = v66 << dword_6FD4098C;
        v67 = v189[2 * v126];
        v92 = *(&v178 + v67) - *(&v178 + v61);
        v68 = *(&v182 + v67) - *(&v182 + v61);
        v69 = (unsigned __int64)((signed __int64)v68 << dword_6FD4098C) >> 32;
        v70 = v68 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v69 = v70;
          v70 = 0;
        }
        v133 = sub_6F737040(v70, v69, v92);
        v71 = *(&v170 + v67) - v96;
        v72 = (unsigned __int64)(v71 << v62) >> 32;
        v73 = (_DWORD)v71 << v62;
        if ( v62 & 0x20 )
        {
          v72 = v73;
          v73 = 0;
        }
        v135 = sub_6F737040(v73, v72, v92);
        v74 = *(&v166 + v67) - v101;
        v75 = (unsigned __int64)(v74 << v62) >> 32;
        v76 = (_DWORD)v74 << v62;
        if ( v62 & 0x20 )
        {
          v75 = v76;
          v76 = 0;
        }
        v137 = sub_6F737040(v76, v75, v92);
        v77 = *(&v162 + v67) - v104;
        v78 = (unsigned __int64)(v77 << v62) >> 32;
        v79 = (_DWORD)v77 << v62;
        if ( v62 & 0x20 )
        {
          v78 = v79;
          v79 = 0;
        }
        v139 = sub_6F737040(v79, v78, v92);
        v80 = *(&v158 + v67) - v112;
        v81 = (unsigned __int64)((signed __int64)v80 << v62) >> 32;
        v82 = v80 << v62;
        if ( v62 & 0x20 )
        {
          v81 = v82;
          if ( v62 & 0x20 )
            v82 = 0;
        }
        v141 = sub_6F737040(v82, v81, v92);
      }
      v9 = v127;
      *(&v188 + v128) = v7 - v90 + v6;
      v10 = v189[v129];
      if ( v10 >= v198[v127] )
      {
        ++v127;
        v129 = v9 + 29;
        v10 = v189[v9 + 29];
      }
      if ( v10 )
      {
        if ( v198[v127] > v10 )
        {
          v11 = *(&v196 + 2 * v127);
          v108 = (*(&v182 + v11) << dword_6FD4098C) + v10 * v134;
          v131 = (*(&v170 + v11) << dword_6FD4098C) + v10 * v136;
          v130 = (*(&v166 + v11) << dword_6FD4098C) + v10 * v138;
          v143 = (*(&v162 + v11) << dword_6FD4098C) + v10 * v140;
          v132 = v10 * v142 + (*(&v158 + v11) << dword_6FD4098C);
        }
      }
      else
      {
        v39 = *(&v196 + 2 * v127);
        v40 = dword_6FD4098C;
        v108 = *(&v182 + v39) << dword_6FD4098C;
        v41 = *(&v170 + v39);
        v100 = v41;
        v131 = v41 << dword_6FD4098C;
        v42 = *(&v166 + v39);
        v103 = v42;
        v130 = v42 << dword_6FD4098C;
        v43 = *(&v162 + v39);
        v111 = v43;
        v143 = v43 << dword_6FD4098C;
        v44 = *(&v158 + v39);
        v114 = v44;
        v132 = v44 << dword_6FD4098C;
        v45 = v197[2 * v127];
        v95 = *(&v178 + v45) - *(&v178 + v39);
        v46 = *(&v182 + v45) - *(&v182 + v39);
        v47 = (unsigned __int64)((signed __int64)v46 << dword_6FD4098C) >> 32;
        v48 = v46 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v47 = v48;
          v48 = 0;
        }
        v134 = sub_6F737040(v48, v47, v95);
        v49 = *(&v170 + v45) - v100;
        v50 = (unsigned __int64)(v49 << v40) >> 32;
        v51 = (_DWORD)v49 << v40;
        if ( v40 & 0x20 )
        {
          v50 = v51;
          v51 = 0;
        }
        v136 = sub_6F737040(v51, v50, v95);
        v52 = *(&v166 + v45) - v103;
        v53 = (unsigned __int64)(v52 << v40) >> 32;
        v54 = (_DWORD)v52 << v40;
        if ( v40 & 0x20 )
        {
          v53 = v54;
          v54 = 0;
        }
        v138 = sub_6F737040(v54, v53, v95);
        v55 = *(&v162 + v45) - v111;
        v56 = (unsigned __int64)(v55 << v40) >> 32;
        v57 = (_DWORD)v55 << v40;
        if ( v40 & 0x20 )
        {
          v56 = v57;
          v57 = 0;
        }
        v140 = sub_6F737040(v57, v56, v95);
        v58 = *(&v158 + v45) - v114;
        v59 = (unsigned __int64)((signed __int64)v58 << v40) >> 32;
        v60 = v58 << v40;
        if ( v40 & 0x20 )
        {
          v59 = v60;
          if ( v40 & 0x20 )
            v60 = 0;
        }
        v142 = sub_6F737040(v60, v59, v95);
      }
      v189[v129] = v7 - v90 + v10;
      result = v146 - v90;
      if ( v146 - v90 > 0 )
      {
        v90 = v146;
        v93 += result * v133;
        v107 += result * v135;
        v105 += result * v137;
        v109 += result * v139;
        v106 += result * v141;
        v108 += result * v134;
        v131 += result * v136;
        v130 += result * v138;
        v143 += result * v140;
        result *= v142;
        v132 += result;
      }
      if ( v147 <= v7 )
        v7 = v147;
      v144 = v7 - v90;
      if ( v7 - v90 > 0 )
      {
        v154 = v107;
        v115 = v131 - v107;
        v156 = v108;
        v155 = v93;
        v117 = v108 - v93;
        v152 = v105;
        v113 = v130 - v105;
        v153 = v109;
        v116 = v143 - v109;
        v151 = v106;
        v110 = v132 - v106;
        v124 = v7;
        do
        {
          v12 = dword_6FD4098C;
          v13 = (1 << dword_6FD4098C) - 1;
          v14 = v13 + v93;
          v118 = v108 + v13;
          v15 = (unsigned __int64)((signed __int64)v115 << dword_6FD4098C) >> 32;
          v16 = v115 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v15 = v115 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v16 = 0;
          v94 = sub_6F737040(v16, v15, v117);
          v17 = (unsigned __int64)((signed __int64)v113 << v12) >> 32;
          v18 = v113 << v12;
          if ( v12 & 0x20 )
            v17 = v113 << v12;
          if ( v12 & 0x20 )
            v18 = 0;
          v98 = sub_6F737040(v18, v17, v117);
          v19 = (unsigned __int64)((signed __int64)v116 << v12) >> 32;
          v20 = v116 << v12;
          if ( v12 & 0x20 )
            v19 = v116 << v12;
          if ( v12 & 0x20 )
            v20 = 0;
          v99 = sub_6F737040(v20, v19, v117);
          v21 = (unsigned __int64)((signed __int64)v110 << v12) >> 32;
          v22 = v110 << v12;
          if ( v12 & 0x20 )
            v21 = v110 << v12;
          if ( v12 & 0x20 )
            v22 = 0;
          v23 = v14 >> v12;
          v102 = sub_6F737040(v22, v21, v117);
          v91 = v23;
          v24 = (v23 << v12) - v93;
          v25 = v24 * (signed __int64)v94;
          v26 = v25 >> v12;
          if ( v12 & 0x20 )
            v26 = SHIDWORD(v25) >> v12;
          v27 = v26 + v107;
          v28 = v24 * (signed __int64)v98 >> (v12 & 0x1F);
          if ( v12 & 0x20 )
            LODWORD(v28) = (unsigned __int64)(v24 * (signed __int64)v98 >> (v12 & 0x1F)) >> 32;
          v120 = v28 + v105;
          v29 = v24 * (signed __int64)v99 >> (v12 & 0x1F);
          if ( v12 & 0x20 )
            LODWORD(v29) = (unsigned __int64)(v24 * (signed __int64)v99 >> (v12 & 0x1F)) >> 32;
          v30 = v29 + v109;
          v31 = v102 * (signed __int64)v24 >> (v12 & 0x1F);
          if ( v12 & 0x20 )
            LODWORD(v31) = (unsigned __int64)(v102 * (signed __int64)v24 >> (v12 & 0x1F)) >> 32;
          v32 = v122 - v91;
          v33 = v106 + v31;
          v34 = v118 >> v12;
          if ( v122 - v91 <= 0 )
          {
            v119 = v27;
            v35 = v120;
            v36 = v33;
          }
          else
          {
            v119 = v32 * v94 + v27;
            v30 += v32 * v99;
            v35 = v32 * v98 + v120;
            v36 = v33 + v102 * v32;
            v91 = v122;
          }
          v37 = v34;
          if ( v125 <= v34 )
            v37 = v125;
          v38 = v37 - v91;
          if ( v38 > 0 && sub_6F71F0C0(v90) )
          {
            if ( v145 % v148 == v149 )
            {
              v83 = v91 + dword_6FBB52F4 * (v90 << 10);
              v121 = dword_6FBB505C + 4 * v83 - 4 * v91;
              v150 = dword_6FBB5068 + 2 * v83 - 2 * v91;
              v84 = v91;
              v157 = v38 + v91;
              if ( !(v38 & 1)
                || (dword_6FBB5058(
                      2 * v91 + v150,
                      v121 + 4 * v91,
                      v91,
                      v90,
                      (unsigned __int8)(v35 / v119),
                      (unsigned __int8)(v30 / v119),
                      (unsigned __int8)(v36 / v119),
                      0,
                      0),
                    v35 += v98,
                    v84 = v91 + 1,
                    v30 += v99,
                    v36 += v102,
                    v119 += v94,
                    v91 + 1 != v157) )
              {
                v85 = v84;
                do
                {
                  dword_6FBB5058(
                    v150 + 2 * v85,
                    v121 + 4 * v85,
                    v85,
                    v90,
                    (unsigned __int8)(v35 / v119),
                    (unsigned __int8)(v30 / v119),
                    (unsigned __int8)(v36 / v119),
                    0,
                    0);
                  v86 = v102 + v36;
                  v87 = v99 + v30;
                  v88 = v85 + 1;
                  v85 += 2;
                  v89 = v98 + v35;
                  dword_6FBB5058(
                    v150 + 2 * v88,
                    v121 + 4 * v88,
                    v88,
                    v90,
                    (unsigned __int8)(v89 / (v94 + v119)),
                    (unsigned __int8)(v87 / (v94 + v119)),
                    (unsigned __int8)(v86 / (v94 + v119)),
                    0,
                    0);
                  v35 = v98 + v89;
                  v30 = v99 + v87;
                  v119 += v94 + v94;
                  v36 = v102 + v86;
                }
                while ( v85 != v157 );
              }
            }
            ++v145;
          }
          ++v90;
          v93 += v133;
          v108 += v134;
          v115 += v136 - v135;
          v117 += v134 - v133;
          v107 += v135;
          v113 += v138 - v137;
          v116 += v140 - v139;
          v110 += v142 - v141;
          v105 += v137;
          v109 += v139;
          v106 += v141;
        }
        while ( v90 != v124 );
        v93 = (v144 - 1) * v133 + v155 + v133;
        v107 = (v144 - 1) * v135 + v135 + v154;
        v105 = (v144 - 1) * v137 + v137 + v152;
        v109 = (v144 - 1) * v139 + v139 + v153;
        v106 = (v144 - 1) * v141 + v141 + v151;
        v108 = (v144 - 1) * v134 + v156 + v134;
        v131 += v136 + (v144 - 1) * v136;
        v130 += v138 + (v144 - 1) * v138;
        result = v142 * (v144 - 1) + v142 + v132;
        v143 += v140 + (v144 - 1) * v140;
        v132 += v142 * (v144 - 1) + v142;
        v97 = v205;
      }
    }
    while ( v123 < v97 );
  }
  return result;
}
