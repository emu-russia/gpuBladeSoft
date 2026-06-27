int __usercall sub_6F73C0E0@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  _DWORD *v4; // ebp@1
  int v5; // edi@1
  int v6; // edx@1
  int v7; // ebx@1
  int v8; // eax@1
  int v9; // esi@1
  int v10; // ebp@1
  int v11; // ecx@2
  int v12; // edx@2
  int v13; // eax@2
  int v14; // eax@2
  int v15; // edx@2
  int v16; // eax@2
  int v17; // edx@3
  int v18; // ecx@4
  int v19; // ebx@4
  int v20; // eax@4
  int v21; // eax@4
  int v22; // ecx@4
  int v23; // ecx@6
  int v24; // edx@6
  int v25; // eax@6
  int v26; // ecx@6
  int v27; // eax@6
  int v28; // ecx@6
  int v29; // eax@6
  int v30; // ebx@7
  char v31; // di@9
  int v32; // edx@9
  int v33; // eax@9
  int v34; // edx@11
  int v35; // eax@11
  int v36; // edx@13
  int v37; // eax@13
  int v38; // edx@15
  int v39; // eax@15
  int v40; // eax@17
  int v41; // edx@17
  int v42; // eax@17
  int v43; // eax@19
  signed int v44; // ecx@19
  signed int v45; // edx@19
  int v46; // eax@19
  int v47; // ebx@20
  int v48; // eax@21
  int v49; // esi@21
  int v50; // edx@21
  int v51; // eax@21
  int v52; // eax@23
  int v53; // edx@23
  int v54; // edx@24
  int v55; // eax@24
  int v56; // edx@27
  int v57; // eax@27
  int v58; // edx@31
  int v59; // eax@31
  int v60; // edx@35
  int v61; // eax@35
  int v62; // edx@39
  int v63; // eax@39
  int result; // eax@44
  int v65; // ebp@48
  __int64 v66; // rcx@52
  __int64 v67; // rax@52
  unsigned __int64 v68; // rcx@52
  bool v69; // sf@52
  unsigned __int8 v70; // of@52
  __int64 v71; // rcx@56
  __int64 v72; // rax@56
  unsigned __int64 v73; // rcx@56
  bool v74; // sf@56
  unsigned __int8 v75; // of@56
  char i; // bp@60
  __int64 v77; // ST98_8@78
  int v78; // eax@63
  int v79; // ebx@63
  signed __int64 v80; // rax@63
  signed __int64 v81; // rax@65
  signed __int64 v82; // rax@67
  int v83; // edi@69
  signed __int64 v84; // rax@69
  signed __int64 v85; // rax@71
  signed int v86; // ecx@73
  int v87; // esi@73
  int v88; // edi@75
  int v89; // eax@76
  signed int v90; // STB0_4@78
  int v91; // eax@78
  int v92; // edi@80
  int v93; // edi@82
  int v94; // edi@84
  int v95; // eax@89
  int v96; // ebp@89
  int v97; // edx@89
  int v98; // eax@89
  int v99; // edx@91
  int v100; // eax@91
  int v101; // edx@94
  int v102; // eax@94
  int v103; // edx@98
  int v104; // eax@98
  int v105; // edx@102
  int v106; // eax@102
  int v107; // edx@106
  int v108; // eax@106
  int v109; // edx@110
  int v110; // eax@110
  int v111; // ebx@115
  char v112; // cl@116
  int v113; // ebp@116
  int v114; // eax@117
  signed int v115; // esi@121
  signed int v116; // eax@125
  signed int v117; // edx@130
  signed int v118; // esi@134
  signed int v119; // ecx@138
  int v120; // ebp@142
  signed int v121; // eax@144
  signed int v122; // eax@148
  signed int v123; // eax@152
  int v124; // edx@157
  int v125; // eax@157
  int v126; // edx@161
  int v127; // eax@161
  int v128; // edx@165
  int v129; // eax@165
  int v130; // edx@169
  int v131; // eax@169
  int v132; // edx@173
  int v133; // eax@173
  int v134; // eax@177
  signed int v135; // [sp+14h] [bp-1DCh]@152
  int v136; // [sp+18h] [bp-1D8h]@123
  signed int v137; // [sp+18h] [bp-1D8h]@148
  signed int v138; // [sp+34h] [bp-1BCh]@1
  int v139; // [sp+38h] [bp-1B8h]@1
  int v140; // [sp+38h] [bp-1B8h]@23
  int v141; // [sp+38h] [bp-1B8h]@63
  int v142; // [sp+40h] [bp-1B0h]@1
  int v143; // [sp+40h] [bp-1B0h]@20
  int v144; // [sp+44h] [bp-1ACh]@1
  int v145; // [sp+44h] [bp-1ACh]@21
  int v146; // [sp+44h] [bp-1ACh]@65
  int v147; // [sp+44h] [bp-1ACh]@73
  int v148; // [sp+48h] [bp-1A8h]@1
  __int64 v149; // [sp+48h] [bp-1A8h]@7
  int v150; // [sp+48h] [bp-1A8h]@24
  int v151; // [sp+48h] [bp-1A8h]@91
  int v152; // [sp+50h] [bp-1A0h]@1
  __int64 v153; // [sp+50h] [bp-1A0h]@7
  int v154; // [sp+50h] [bp-1A0h]@24
  int v155; // [sp+58h] [bp-198h]@1
  __int64 v156; // [sp+58h] [bp-198h]@7
  int v157; // [sp+58h] [bp-198h]@24
  int v158; // [sp+60h] [bp-190h]@1
  __int64 v159; // [sp+60h] [bp-190h]@7
  int v160; // [sp+60h] [bp-190h]@24
  __int64 v161; // [sp+68h] [bp-188h]@7
  int v162; // [sp+68h] [bp-188h]@24
  int v163; // [sp+70h] [bp-180h]@24
  int v164; // [sp+74h] [bp-17Ch]@67
  int v165; // [sp+74h] [bp-17Ch]@73
  signed int v166; // [sp+74h] [bp-17Ch]@142
  int v167; // [sp+78h] [bp-178h]@11
  int v168; // [sp+7Ch] [bp-174h]@13
  int v169; // [sp+80h] [bp-170h]@15
  int v170; // [sp+84h] [bp-16Ch]@17
  int v171; // [sp+88h] [bp-168h]@19
  signed int v172; // [sp+8Ch] [bp-164h]@73
  signed int v173; // [sp+8Ch] [bp-164h]@142
  signed int v174; // [sp+90h] [bp-160h]@73
  signed int v175; // [sp+94h] [bp-15Ch]@73
  int v176; // [sp+A0h] [bp-150h]@63
  int v177; // [sp+A0h] [bp-150h]@115
  int v178; // [sp+A4h] [bp-14Ch]@71
  int v179; // [sp+A4h] [bp-14Ch]@75
  int v180; // [sp+A4h] [bp-14Ch]@115
  int v181; // [sp+ACh] [bp-144h]@115
  signed int v182; // [sp+B8h] [bp-138h]@73
  unsigned int v183; // [sp+BCh] [bp-134h]@56
  int v184; // [sp+C0h] [bp-130h]@7
  unsigned int v185; // [sp+C8h] [bp-128h]@56
  int v186; // [sp+CCh] [bp-124h]@1
  int v187; // [sp+D0h] [bp-120h]@1
  int v188; // [sp+F0h] [bp-100h]@60
  int v189; // [sp+F4h] [bp-FCh]@1
  int v190; // [sp+F8h] [bp-F8h]@1
  int v191; // [sp+FCh] [bp-F4h]@1
  int v192; // [sp+100h] [bp-F0h]@1
  int v193; // [sp+104h] [bp-ECh]@1
  int v194; // [sp+108h] [bp-E8h]@1
  int v195; // [sp+10Ch] [bp-E4h]@1
  int v196; // [sp+110h] [bp-E0h]@1
  int v197; // [sp+114h] [bp-DCh]@1
  __int64 v198; // [sp+118h] [bp-D8h]@0
  __int64 v199; // [sp+120h] [bp-D0h]@0
  int v200; // [sp+130h] [bp-C0h]@1
  unsigned int v201; // [sp+134h] [bp-BCh]@60
  __int64 v202; // [sp+138h] [bp-B8h]@17
  __int64 v203; // [sp+140h] [bp-B0h]@19
  int v204; // [sp+148h] [bp-A8h]@0
  unsigned int v205; // [sp+150h] [bp-A0h]@60
  int v206; // [sp+154h] [bp-9Ch]@7
  int v207; // [sp+158h] [bp-98h]@0
  int v208; // [sp+160h] [bp-90h]@0
  int v209; // [sp+168h] [bp-88h]@0
  signed int v210; // [sp+170h] [bp-80h]@19
  signed int v211; // [sp+174h] [bp-7Ch]@19
  int v212; // [sp+178h] [bp-78h]@1
  int v213; // [sp+17Ch] [bp-74h]@1
  signed int v214; // [sp+180h] [bp-70h]@1
  int v215; // [sp+184h] [bp-6Ch]@1
  int v216; // [sp+1A8h] [bp-48h]@7
  int v217; // [sp+1ACh] [bp-44h]@7
  int v218; // [sp+1B0h] [bp-40h]@7
  int v219; // [sp+1B4h] [bp-3Ch]@7
  __int64 v220; // [sp+1B8h] [bp-38h]@52
  __int64 v221; // [sp+1C0h] [bp-30h]@19
  int v222; // [sp+1C8h] [bp-28h]@7
  int v223; // [sp+1CCh] [bp-24h]@7
  int v224; // [sp+1D0h] [bp-20h]@7
  int v225; // [sp+1D4h] [bp-1Ch]@7
  int v226; // [sp+1D8h] [bp-18h]@7
  int v227; // [sp+1DCh] [bp-14h]@7
  int v228; // [sp+1E8h] [bp-8h]@1
  int v229; // [sp+1ECh] [bp-4h]@1
  int v230; // [sp+1F0h] [bp+0h]@1
  int v231; // [sp+1F4h] [bp+4h]@1
  int v232; // [sp+1F8h] [bp+8h]@1
  int v233; // [sp+1FCh] [bp+Ch]@1

  v214 = a1;
  v215 = a2;
  v186 = dword_6FBB52F4 * dword_6FBBDB98;
  v213 = dword_6FBB52F8 * dword_6FBBDBA4;
  v187 = dword_6FBB52F4 * dword_6FBBDBA0;
  v212 = dword_6FBB52F8 * dword_6FBBDB9C;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v231 = v2 * dword_6FBB52F4;
  v232 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v233 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v4 = (_DWORD *)(dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5));
  v229 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v228 = v3 * dword_6FBB52F8;
  v230 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  sub_6F733480(v2, v3, &v231, &v228);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v232,
    &v229);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v233,
    v4);
  v148 = (unsigned __int8)dword_70041E78;
  v194 = (unsigned __int8)dword_70041E70;
  v152 = BYTE1(dword_70041E78);
  v189 = (unsigned __int8)dword_70041E74;
  v195 = BYTE1(dword_70041E70);
  v190 = BYTE1(dword_70041E74);
  v196 = BYTE2(dword_70041E70);
  v5 = (unsigned __int8)byte_6FBB5052;
  v191 = BYTE2(dword_70041E74);
  v193 = (unsigned __int8)byte_6FBB5055;
  v155 = BYTE2(dword_70041E78);
  v158 = (unsigned __int8)byte_6FBB5056;
  v192 = (unsigned __int8)byte_6FBB5051;
  v200 = (unsigned __int8)byte_6FBB5054;
  v197 = (unsigned __int8)byte_6FBB5050;
  nullsub_3();
  v6 = v228;
  v7 = dword_6FBB52F4 * dword_6FBBDB90 + v231;
  v139 = dword_6FBB52F4 * dword_6FBBDB90 + v232;
  v8 = v229;
  v232 += dword_6FBB52F4 * dword_6FBBDB90;
  v142 = dword_6FBB52F4 * dword_6FBBDB90 + v233;
  v233 += dword_6FBB52F4 * dword_6FBBDB90;
  v144 = dword_6FBB52F4 * dword_6FBBDB90 + v231;
  v9 = dword_6FBB52F8 * dword_6FBBDB94 + v228;
  v231 += dword_6FBB52F4 * dword_6FBBDB90;
  v138 = dword_6FBB52F8 * dword_6FBBDB94 + v229;
  v229 += dword_6FBB52F8 * dword_6FBBDB94;
  v228 += dword_6FBB52F8 * dword_6FBBDB94;
  v10 = dword_6FBB52F8 * dword_6FBBDB94 + v230;
  v230 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v6 > v8 )
  {
    v11 = v138;
    v229 = v9;
    v138 = v9;
    v12 = v197;
    v231 = v139;
    v9 = v11;
    v228 = v11;
    v144 = v139;
    v13 = v200;
    v232 = v7;
    v139 = v7;
    v200 = v193;
    v193 = v13;
    v14 = v196;
    v197 = v192;
    v192 = v12;
    v15 = v195;
    v196 = v191;
    v191 = v14;
    v16 = v194;
    v195 = v190;
    v190 = v15;
    v194 = v189;
    v189 = v16;
  }
  v17 = v138;
  if ( v10 < v138 )
  {
    v138 = v10;
    v229 = v10;
    v10 = v17;
    v18 = v191;
    v230 = v17;
    v232 = v142;
    v233 = v139;
    v142 = v139;
    v19 = v192;
    v139 = v232;
    v20 = v158;
    v158 = v193;
    v193 = v20;
    v21 = v190;
    v192 = v5;
    v5 = v19;
    v191 = v155;
    v155 = v18;
    v22 = v189;
    v190 = v152;
    v152 = v21;
    v189 = v148;
    v148 = v22;
  }
  if ( v9 > v138 )
  {
    v23 = v144;
    v24 = v9;
    v228 = v138;
    v229 = v9;
    v9 = v138;
    v231 = v139;
    v144 = v139;
    v25 = v200;
    v232 = v23;
    v139 = v23;
    v26 = v197;
    v138 = v24;
    v200 = v193;
    v193 = v25;
    v27 = v196;
    v197 = v192;
    v192 = v26;
    v28 = v195;
    v196 = v191;
    v191 = v27;
    v29 = v194;
    v195 = v190;
    v190 = v28;
    v194 = v189;
    v189 = v29;
  }
  v206 = (v10 - v9) * (v142 - v139) - (v10 - v138) * (v142 - v144);
  v184 = (v10 - v9) * (v142 - v139) - (v10 - v138) * (v142 - v144);
  v216 = v148 - v189;
  v223 = v148 - v194;
  v149 = (v10 - v9) * (v148 - v189) - (v10 - v138) * (v148 - v194);
  v224 = v152 - v195;
  v217 = v152 - v190;
  v153 = (v10 - v9) * (v152 - v190) - (v10 - v138) * (v152 - v195);
  v225 = v155 - v196;
  v218 = v155 - v191;
  v156 = (v10 - v9) * (v155 - v191) - (v10 - v138) * (v155 - v196);
  v226 = v5 - v197;
  v219 = v5 - v192;
  v161 = (v10 - v9) * (v5 - v192) - (v10 - v138) * (v5 - v197);
  v222 = v158 - v193;
  v30 = (v10 - v9) * (v142 - v139) - (v10 - v138) * (v142 - v144);
  v227 = v158 - v200;
  v159 = (v158 - v193) * (v10 - v9) - (v158 - v200) * (v10 - v138);
  if ( (((unsigned __int64)v184 >> 32) & 0x80000000) != 0i64 )
  {
    v184 = -v184;
    v30 = v184;
    v149 = -v149;
    v153 = -v153;
    v156 = -v156;
    v161 = -v161;
    v159 = -v159;
  }
  v31 = dword_6FD4098C;
  v32 = (unsigned __int64)(v149 << dword_6FD4098C) >> 32;
  v33 = (_DWORD)v149 << dword_6FD4098C;
  if ( dword_6FD4098C & 0x20 )
  {
    v32 = (_DWORD)v149 << dword_6FD4098C;
    v33 = 0;
  }
  v167 = sub_6F737040(v33, v32, v30);
  v34 = (unsigned __int64)(v153 << v31) >> 32;
  v35 = (_DWORD)v153 << v31;
  if ( v31 & 0x20 )
  {
    v34 = (_DWORD)v153 << v31;
    v35 = 0;
  }
  v168 = sub_6F737040(v35, v34, v30);
  v36 = (unsigned __int64)(v156 << v31) >> 32;
  v37 = (_DWORD)v156 << v31;
  if ( v31 & 0x20 )
  {
    v36 = (_DWORD)v156 << v31;
    v37 = 0;
  }
  v169 = sub_6F737040(v37, v36, v30);
  v38 = (unsigned __int64)(v161 << v31) >> 32;
  v39 = (_DWORD)v161 << v31;
  if ( v31 & 0x20 )
  {
    v38 = (_DWORD)v161 << v31;
    v39 = 0;
  }
  v40 = sub_6F737040(v39, v38, v30);
  v170 = v40;
  v202 = v40;
  v41 = (unsigned __int64)(v159 << v31) >> 32;
  v42 = (_DWORD)v159 << v31;
  if ( v31 & 0x20 )
  {
    v41 = (_DWORD)v159 << v31;
    v42 = 0;
  }
  v43 = sub_6F737040(v42, v41, v30);
  v210 = 2;
  v171 = v43;
  v203 = v43;
  v44 = v43 >> 31;
  v211 = 0;
  v45 = 2;
  v46 = v142;
  LODWORD(v221) = v44 >> 31;
  HIDWORD(v221) = v44 >> 31;
  while ( 1 )
  {
    v143 = v144 << v31;
    v47 = v138 - v9;
    if ( v45 == 2 )
    {
      v95 = v46 - v144;
      v96 = v10 - v9;
      v154 = v194 << v31;
      v157 = v195 << v31;
      v160 = v196 << v31;
      v162 = v197 << v31;
      v163 = v200 << v31;
      v97 = (unsigned __int64)((signed __int64)v95 << v31) >> 32;
      v98 = v95 << v31;
      if ( v31 & 0x20 )
      {
        v97 = v98;
        v98 = 0;
      }
      v151 = sub_6F737040(v98, v97, v96);
      v99 = (unsigned __int64)((signed __int64)(v139 - v144) << v31) >> 32;
      v100 = (v139 - v144) << v31;
      if ( v31 & 0x20 )
      {
        v99 = (v139 - v144) << v31;
        v100 = 0;
      }
      v204 = sub_6F737040(v100, v99, v47);
      v184 = v151;
      if ( v206 < 0 )
      {
        v124 = (unsigned __int64)((signed __int64)v223 << v31) >> 32;
        v125 = v223 << v31;
        if ( v31 & 0x20 )
          v124 = v223 << v31;
        if ( v31 & 0x20 )
          v125 = 0;
        v207 = sub_6F737040(v125, v124, v96);
        v126 = (unsigned __int64)((signed __int64)v224 << v31) >> 32;
        v127 = v224 << v31;
        if ( v31 & 0x20 )
          v126 = v224 << v31;
        if ( v31 & 0x20 )
          v127 = 0;
        v208 = sub_6F737040(v127, v126, v96);
        v128 = (unsigned __int64)((signed __int64)v225 << v31) >> 32;
        v129 = v225 << v31;
        if ( v31 & 0x20 )
          v128 = v225 << v31;
        if ( v31 & 0x20 )
          v129 = 0;
        v209 = sub_6F737040(v129, v128, v96);
        v130 = (unsigned __int64)((signed __int64)v226 << v31) >> 32;
        v131 = v226 << v31;
        if ( v31 & 0x20 )
          v130 = v226 << v31;
        if ( v31 & 0x20 )
          v131 = 0;
        v198 = sub_6F737040(v131, v130, v96);
        v132 = (unsigned __int64)((signed __int64)v227 << v31) >> 32;
        v133 = v227 << v31;
        if ( v31 & 0x20 )
          v132 = v227 << v31;
        if ( v31 & 0x20 )
          v133 = 0;
        v199 = sub_6F737040(v133, v132, v96);
        v134 = v204;
        v204 = v151;
        v10 = v138;
        v184 = v134;
        v150 = v144 << v31;
        v138 = v9;
      }
      else
      {
        v101 = (unsigned __int64)((signed __int64)(v189 - v194) << v31) >> 32;
        v102 = (v189 - v194) << v31;
        if ( v31 & 0x20 )
          v101 = (v189 - v194) << v31;
        if ( v31 & 0x20 )
          v102 = 0;
        v207 = sub_6F737040(v102, v101, v47);
        v103 = (unsigned __int64)((signed __int64)(v190 - v195) << v31) >> 32;
        v104 = (v190 - v195) << v31;
        if ( v31 & 0x20 )
          v103 = (v190 - v195) << v31;
        if ( v31 & 0x20 )
          v104 = 0;
        v208 = sub_6F737040(v104, v103, v47);
        v105 = (unsigned __int64)((signed __int64)(v191 - v196) << v31) >> 32;
        v106 = (v191 - v196) << v31;
        if ( v31 & 0x20 )
          v105 = (v191 - v196) << v31;
        if ( v31 & 0x20 )
          v106 = 0;
        v209 = sub_6F737040(v106, v105, v47);
        v107 = (unsigned __int64)((signed __int64)(v192 - v197) << v31) >> 32;
        v108 = (v192 - v197) << v31;
        if ( v31 & 0x20 )
          v107 = (v192 - v197) << v31;
        if ( v31 & 0x20 )
          v108 = 0;
        v198 = sub_6F737040(v108, v107, v47);
        v109 = (unsigned __int64)((signed __int64)(v193 - v200) << v31) >> 32;
        v110 = (v193 - v200) << v31;
        if ( v31 & 0x20 )
          v109 = (v193 - v200) << v31;
        if ( v31 & 0x20 )
          v110 = 0;
        v10 = v138;
        v138 = v9;
        v199 = sub_6F737040(v110, v109, v47);
        v150 = v144 << v31;
      }
    }
    else
    {
      v48 = v46 - v139;
      v145 = v144 << v31;
      v49 = v10 - v138;
      v50 = (unsigned __int64)((signed __int64)v48 << v31) >> 32;
      v51 = v48 << v31;
      if ( v31 & 0x20 )
      {
        v50 = v51;
        v51 = 0;
      }
      v52 = sub_6F737040(v51, v50, v10 - v138);
      v53 = v139;
      v140 = v52;
      v143 = v53 << v31;
      if ( v206 < 0 )
      {
        v154 = v47 * v207 + (v194 << v31);
        v157 = v47 * v208 + (v195 << v31);
        v160 = v47 * v209 + (v196 << v31);
        v162 = v47 * v198 + (v197 << v31);
        v184 = v52;
        v163 = (v200 << v31) + v199 * v47;
        v150 = v53 << v31;
        v143 = v145 + v47 * v204;
      }
      else
      {
        v150 = v145 + v184 * v47;
        v154 = v189 << v31;
        v157 = v190 << v31;
        v160 = v191 << v31;
        v162 = v192 << v31;
        v163 = v193 << v31;
        v54 = (unsigned __int64)((signed __int64)v216 << v31) >> 32;
        v55 = v216 << v31;
        if ( v31 & 0x20 )
        {
          v54 = v216 << v31;
          if ( v31 & 0x20 )
            v55 = 0;
        }
        v207 = sub_6F737040(v55, v54, v49);
        v56 = (unsigned __int64)((signed __int64)v217 << v31) >> 32;
        v57 = v217 << v31;
        if ( v31 & 0x20 )
          v56 = v217 << v31;
        if ( v31 & 0x20 )
          v57 = 0;
        v208 = sub_6F737040(v57, v56, v49);
        v58 = (unsigned __int64)((signed __int64)v218 << v31) >> 32;
        v59 = v218 << v31;
        if ( v31 & 0x20 )
          v58 = v218 << v31;
        if ( v31 & 0x20 )
          v59 = 0;
        v209 = sub_6F737040(v59, v58, v49);
        v60 = (unsigned __int64)((signed __int64)v219 << v31) >> 32;
        v61 = v219 << v31;
        if ( v31 & 0x20 )
          v60 = v219 << v31;
        if ( v31 & 0x20 )
          v61 = 0;
        v198 = sub_6F737040(v61, v60, v49);
        v62 = (unsigned __int64)((signed __int64)v222 << v31) >> 32;
        v63 = v222 << v31;
        if ( v31 & 0x20 )
          v62 = v222 << v31;
        if ( v31 & 0x20 )
          v63 = 0;
        v199 = sub_6F737040(v63, v62, v49);
        v204 = v140;
      }
    }
    result = v212 - v138;
    if ( v212 - v138 > 0 )
    {
      v138 = v212;
      v143 += result * v204;
      v150 += result * v184;
      v154 += result * v207;
      v157 += result * v208;
      v160 += result * v209;
      v162 += result * v198;
      result *= (_DWORD)v199;
      v163 += result;
    }
    if ( v10 > v213 )
      v10 = v213;
    v65 = v10 - v138;
    if ( v65 > 0 )
    {
      LODWORD(v66) = (SHIDWORD(v198) >> 31) ^ v198;
      HIDWORD(v66) = (SHIDWORD(v198) >> 31) ^ HIDWORD(v198);
      HIDWORD(v220) = SHIDWORD(v202) >> 31;
      LODWORD(v220) = SHIDWORD(v202) >> 31;
      v67 = (v202 ^ v220) - v220;
      v68 = v66 - __PAIR__(SHIDWORD(v198) >> 31, SHIDWORD(v198) >> 31);
      v70 = __OFSUB__(HIDWORD(v68), ((unsigned int)v68 < (unsigned int)v67) + HIDWORD(v67));
      v69 = (((v68 - v67) >> 32) & 0x80000000) != 0i64;
      if ( SHIDWORD(v68) < ((unsigned int)v68 < (unsigned int)v67) + HIDWORD(v67) )
        LODWORD(v68) = (v202 ^ v220) - v220;
      if ( !(v69 ^ v70) )
        HIDWORD(v67) = HIDWORD(v68);
      v183 = v68;
      v185 = HIDWORD(v67);
      LODWORD(v71) = (SHIDWORD(v199) >> 31) ^ v199;
      HIDWORD(v71) = (SHIDWORD(v199) >> 31) ^ HIDWORD(v199);
      v72 = (v203 ^ v221) - v221;
      v73 = v71 - __PAIR__(SHIDWORD(v199) >> 31, SHIDWORD(v199) >> 31);
      v75 = __OFSUB__(HIDWORD(v73), ((unsigned int)v73 < (unsigned int)v72) + HIDWORD(v72));
      v74 = (((v73 - v72) >> 32) & 0x80000000) != 0i64;
      if ( SHIDWORD(v73) < ((unsigned int)v73 < (unsigned int)v72) + HIDWORD(v72) )
        LODWORD(v73) = (v203 ^ v221) - v221;
      if ( !(v74 ^ v75) )
        HIDWORD(v72) = HIDWORD(v73);
      v205 = HIDWORD(v72);
      v201 = v73;
      v188 = v138 + v65;
      for ( i = v31; ; i = dword_6FD4098C )
      {
        v78 = (1 << i) - 1;
        v176 = (v150 + v78) >> i;
        v141 = (v78 + v143) >> i;
        v79 = (v141 << i) - v143;
        v80 = v79 * (signed __int64)v167 >> (i & 0x1F);
        if ( i & 0x20 )
          LODWORD(v80) = (unsigned __int64)(v79 * (signed __int64)v167 >> (i & 0x1F)) >> 32;
        v146 = v154 + v80;
        v81 = v79 * (signed __int64)v168 >> (i & 0x1F);
        if ( i & 0x20 )
          LODWORD(v81) = (unsigned __int64)(v79 * (signed __int64)v168 >> (i & 0x1F)) >> 32;
        v164 = v81 + v157;
        v82 = v79 * (signed __int64)v169 >> (i & 0x1F);
        if ( i & 0x20 )
          LODWORD(v82) = (unsigned __int64)(v79 * (signed __int64)v169 >> (i & 0x1F)) >> 32;
        v83 = v160 + v82;
        v84 = v79 * (signed __int64)v170 >> (i & 0x1F);
        if ( i & 0x20 )
          LODWORD(v84) = (unsigned __int64)(v79 * (signed __int64)v170 >> (i & 0x1F)) >> 32;
        v178 = v84 + v162;
        v85 = v171 * (signed __int64)v79 >> (i & 0x1F);
        if ( i & 0x20 )
          LODWORD(v85) = (unsigned __int64)(v171 * (signed __int64)v79 >> (i & 0x1F)) >> 32;
        v86 = 1 << (i - 1);
        v174 = v86 + v146;
        v147 = v86 + v163 + v85;
        v172 = v86 + v164;
        v175 = v86 + v83;
        v87 = dword_6FBB52F8;
        v165 = v86 + v178;
        v182 = dword_6FBB52F4;
        if ( dword_6FBB52F4 > 1 || dword_6FBB52F8 > 1 )
        {
          v179 = -(v203 + v199);
          v88 = -(v202 + v198);
          if ( v183 | v185 )
          {
            v89 = sub_6F8A13E0(dword_6FBB52F8, -(v202 + v198), __PAIR__(v185, v183));
            v86 = 1 << (i - 1);
            v88 = v89;
          }
          if ( v201 | v205 )
          {
            v90 = v86;
            HIDWORD(v77) = (unsigned __int64)-(v203 + v199) >> 32;
            LODWORD(v77) = -(v203 + v199);
            v91 = sub_6F8A13E0(v87, v77, __PAIR__(v205, v201));
            v86 = v90;
            v179 = v91;
          }
          v165 += v88 * (v182 - 1) * (v86 / v182);
          v147 += v179 * (v87 - 1) * (v86 / v87);
        }
        v92 = v186 - v141;
        if ( v186 - v141 > 0 )
        {
          v141 = v186;
          v174 += v92 * v167;
          v172 += v92 * v168;
          v175 += v92 * v169;
          v165 += v92 * v170;
          v147 += v171 * v92;
        }
        v93 = v176;
        if ( v187 <= v176 )
          v93 = v187;
        v94 = v93 - v141;
        if ( v94 > 0 && sub_6F71F0C0(v138) )
        {
          if ( v211 % v214 == v215 )
          {
            v181 = v141 + v94;
            v111 = v141 + v182 * (v138 << 10);
            v177 = dword_6FBB505C + 4 * v111 - 4 * v141;
            v180 = dword_6FBB5068 + 2 * v111 - 2 * v141;
            if ( ((_BYTE)v141 + (_BYTE)v94 + ~(_BYTE)v141) & 1 )
            {
              v121 = v175 >> i;
              if ( v175 >> i > 255 )
                v121 = 255;
              if ( v121 < 0 )
                v121 = 0;
              v137 = v121;
              v122 = v172 >> i;
              if ( v172 >> i > 255 )
                v122 = 255;
              if ( v122 < 0 )
                v122 = 0;
              v135 = v122;
              v123 = v174 >> i;
              if ( v174 >> i > 255 )
                v123 = 255;
              if ( v123 < 0 )
                v123 = 0;
              dword_6FBB5058(
                dword_6FBB5068 + 2 * v111,
                dword_6FBB505C + 4 * v111,
                v141++,
                v138,
                v123,
                v135,
                v137,
                v165,
                v147);
              v172 += v168;
              v174 += v167;
              v175 += v169;
              v113 = v170 + v165;
              v147 += v171;
              v112 = dword_6FD4098C;
            }
            else
            {
              v112 = i;
              v113 = v165;
            }
            while ( 1 )
            {
              v117 = v175 >> v112;
              if ( v175 >> v112 > 255 )
                v117 = 255;
              if ( v117 < 0 )
                v117 = 0;
              v118 = v172 >> v112;
              if ( v172 >> v112 > 255 )
                v118 = 255;
              if ( v118 < 0 )
                v118 = 0;
              v119 = v174 >> v112;
              if ( v119 > 255 )
                v119 = 255;
              if ( v119 < 0 )
                v119 = 0;
              dword_6FBB5058(v180 + 2 * v141, v177 + 4 * v141, v141, v138, v119, v118, v117, v113, v147);
              v120 = v170 + v113;
              v166 = v167 + v174;
              v173 = v168 + v172;
              if ( v141 + 1 == v181 )
                break;
              v114 = (v169 + v175) >> dword_6FD4098C;
              if ( v114 > 255 )
                v114 = 255;
              if ( v114 < 0 )
                v114 = 0;
              v115 = v173 >> dword_6FD4098C;
              if ( v173 >> dword_6FD4098C > 255 )
                v115 = 255;
              v136 = v114;
              if ( v115 < 0 )
                v115 = 0;
              v116 = v166 >> dword_6FD4098C;
              if ( v166 >> dword_6FD4098C > 255 )
                v116 = 255;
              if ( v116 < 0 )
                v116 = 0;
              dword_6FBB5058(
                v180 + 2 * (v141 + 1),
                v177 + 4 * (v141 + 1),
                v141 + 1,
                v138,
                v116,
                v115,
                v136,
                v120,
                v171 + v147);
              v141 += 2;
              v174 = v167 + v166;
              v172 = v168 + v173;
              v147 += v171 + v171;
              v113 = v170 + v120;
              v175 += v169 + v169;
              v112 = dword_6FD4098C;
            }
          }
          ++v211;
        }
        ++v138;
        v143 += v204;
        result = v198;
        v154 += v207;
        v157 += v208;
        v160 += v209;
        v162 += v198;
        v163 += v199;
        v150 += v184;
        if ( v138 == v188 )
          break;
      }
    }
    if ( v210 == 1 )
      break;
    v45 = 1;
    v210 = 1;
    v9 = v228;
    v139 = v232;
    v31 = dword_6FD4098C;
    v144 = v231;
    v46 = v233;
    v138 = v229;
    v10 = v230;
  }
  return result;
}
