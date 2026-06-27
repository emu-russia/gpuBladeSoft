int __usercall sub_6F73F910@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  int result; // eax@1
  int v5; // ebx@3
  int v6; // ebp@3
  int v7; // ebx@3
  int v8; // edi@7
  int v9; // edx@8
  int v10; // ebx@8
  int v11; // edi@12
  __int64 v12; // ST150_8@54
  int v13; // eax@22
  signed int v14; // ebx@22
  int v15; // edx@22
  int v16; // eax@22
  int v17; // edi@26
  int v18; // ebp@26
  int v19; // ebp@30
  int v20; // edi@30
  int v21; // ebp@34
  int v22; // edi@34
  int v23; // ebp@38
  int v24; // edi@38
  signed int v25; // ebx@42
  int v26; // ebx@42
  unsigned __int64 v27; // kr00_8@42
  int v28; // edi@42
  unsigned __int64 v29; // rax@44
  int v30; // edi@44
  signed __int64 v31; // rax@46
  int v32; // edi@48
  signed __int64 v33; // rax@48
  signed __int64 v34; // rax@50
  char v35; // cl@50
  signed int v36; // ebp@52
  int v37; // esi@52
  __int64 v38; // rcx@54
  signed __int64 v39; // rcx@54
  __int64 v40; // kr08_8@54
  unsigned int v41; // edx@54
  unsigned int v42; // ecx@54
  unsigned __int64 v43; // kr20_8@54
  unsigned int v44; // eax@54
  unsigned __int8 v45; // of@54
  int v46; // ebx@54
  __int64 v47; // rcx@58
  unsigned __int64 v48; // rax@58
  unsigned int v49; // ebx@58
  unsigned int v50; // edi@58
  int v51; // esi@67
  int v52; // ebx@67
  int v53; // ebx@71
  int v54; // eax@75
  char v55; // si@75
  int v56; // edi@75
  int v57; // edi@75
  int v58; // edi@75
  int v59; // edi@75
  int v60; // edi@75
  int v61; // edi@75
  int v62; // eax@75
  int v63; // edx@75
  int v64; // eax@75
  __int64 v65; // rax@77
  int v66; // edx@77
  int v67; // eax@77
  __int64 v68; // rax@79
  int v69; // edx@79
  int v70; // eax@79
  __int64 v71; // rax@81
  int v72; // edx@81
  int v73; // eax@81
  __int64 v74; // rax@83
  int v75; // edx@83
  int v76; // eax@83
  int v77; // eax@85
  int v78; // edx@85
  int v79; // eax@85
  int v80; // eax@89
  char v81; // si@89
  int v82; // edi@89
  int v83; // edi@89
  int v84; // edi@89
  int v85; // edi@89
  int v86; // edi@89
  int v87; // edi@89
  int v88; // eax@89
  int v89; // edx@89
  int v90; // eax@89
  __int64 v91; // rax@91
  int v92; // edx@91
  int v93; // eax@91
  __int64 v94; // rax@93
  int v95; // edx@93
  int v96; // eax@93
  __int64 v97; // rax@95
  int v98; // edx@95
  int v99; // eax@95
  __int64 v100; // rax@97
  int v101; // edx@97
  int v102; // eax@97
  int v103; // eax@99
  int v104; // edx@99
  int v105; // eax@99
  int v106; // ecx@104
  signed int v107; // edx@105
  int v108; // edi@105
  signed int v109; // ebp@105
  char v110; // cl@105
  int v111; // esi@105
  int v112; // ebx@105
  int v113; // eax@107
  signed int v114; // ebp@107
  int v115; // esi@107
  int v116; // ebx@107
  char v117; // [sp+3Ch] [bp-320h]@22
  int v118; // [sp+3Ch] [bp-320h]@75
  int v119; // [sp+3Ch] [bp-320h]@89
  signed int v120; // [sp+3Ch] [bp-320h]@107
  __int64 v121; // [sp+40h] [bp-31Ch]@0
  int v122; // [sp+40h] [bp-31Ch]@89
  signed int v123; // [sp+48h] [bp-314h]@3
  int v124; // [sp+4Ch] [bp-310h]@42
  int v125; // [sp+4Ch] [bp-310h]@89
  signed int v126; // [sp+4Ch] [bp-310h]@107
  int v127; // [sp+50h] [bp-30Ch]@0
  int v128; // [sp+54h] [bp-308h]@1
  int v129; // [sp+54h] [bp-308h]@38
  __int64 v130; // [sp+58h] [bp-304h]@62
  int v131; // [sp+58h] [bp-304h]@75
  int v132; // [sp+58h] [bp-304h]@89
  int v133; // [sp+58h] [bp-304h]@104
  int v134; // [sp+60h] [bp-2FCh]@75
  int v135; // [sp+60h] [bp-2FCh]@89
  int v136; // [sp+60h] [bp-2FCh]@104
  __int64 v137; // [sp+68h] [bp-2F4h]@0
  int v138; // [sp+70h] [bp-2ECh]@26
  int v139; // [sp+70h] [bp-2ECh]@75
  int v140; // [sp+70h] [bp-2ECh]@89
  int v141; // [sp+74h] [bp-2E8h]@30
  int v142; // [sp+74h] [bp-2E8h]@75
  int v143; // [sp+78h] [bp-2E4h]@34
  int v144; // [sp+78h] [bp-2E4h]@75
  int v145; // [sp+7Ch] [bp-2E0h]@0
  int v146; // [sp+80h] [bp-2DCh]@0
  int v147; // [sp+84h] [bp-2D8h]@0
  int v148; // [sp+88h] [bp-2D4h]@0
  int v149; // [sp+8Ch] [bp-2D0h]@0
  int v150; // [sp+90h] [bp-2CCh]@0
  int v151; // [sp+94h] [bp-2C8h]@42
  int v152; // [sp+98h] [bp-2C4h]@44
  int v153; // [sp+98h] [bp-2C4h]@52
  int v154; // [sp+9Ch] [bp-2C0h]@46
  int v155; // [sp+9Ch] [bp-2C0h]@52
  int v156; // [sp+A0h] [bp-2BCh]@50
  signed __int64 v157; // [sp+A0h] [bp-2BCh]@58
  __int64 v158; // [sp+A0h] [bp-2BCh]@62
  int v159; // [sp+A0h] [bp-2BCh]@104
  int v160; // [sp+C8h] [bp-294h]@20
  int v161; // [sp+CCh] [bp-290h]@20
  int v162; // [sp+D0h] [bp-28Ch]@20
  int v163; // [sp+D4h] [bp-288h]@20
  int v164; // [sp+D8h] [bp-284h]@20
  int v165; // [sp+DCh] [bp-280h]@20
  signed int v166; // [sp+E0h] [bp-27Ch]@52
  signed int v167; // [sp+E4h] [bp-278h]@22
  signed int v168; // [sp+E8h] [bp-274h]@52
  signed int v169; // [sp+ECh] [bp-270h]@52
  signed int v170; // [sp+F0h] [bp-26Ch]@52
  signed int v171; // [sp+F4h] [bp-268h]@52
  unsigned __int64 v172; // [sp+F8h] [bp-264h]@58
  int v173; // [sp+11Ch] [bp-240h]@2
  int v174; // [sp+120h] [bp-23Ch]@20
  int v175; // [sp+13Ch] [bp-220h]@1
  int v176; // [sp+140h] [bp-21Ch]@1
  int v177; // [sp+144h] [bp-218h]@2
  int v178; // [sp+148h] [bp-214h]@2
  int v179; // [sp+14Ch] [bp-210h]@2
  unsigned __int64 v180; // [sp+158h] [bp-204h]@58
  int v181; // [sp+160h] [bp-1FCh]@2
  int v182; // [sp+164h] [bp-1F8h]@0
  int v183; // [sp+168h] [bp-1F4h]@0
  int v184; // [sp+16Ch] [bp-1F0h]@0
  int v185; // [sp+170h] [bp-1ECh]@0
  int v186; // [sp+174h] [bp-1E8h]@0
  int v187; // [sp+178h] [bp-1E4h]@0
  int v188; // [sp+180h] [bp-1DCh]@0
  int v189; // [sp+188h] [bp-1D4h]@0
  int v190; // [sp+190h] [bp-1CCh]@0
  int v191; // [sp+198h] [bp-1C4h]@0
  int v192; // [sp+1A0h] [bp-1BCh]@0
  int v193; // [sp+1A8h] [bp-1B4h]@0
  int v194; // [sp+1B0h] [bp-1ACh]@0
  int v195; // [sp+1B8h] [bp-1A4h]@0
  int v196; // [sp+1C0h] [bp-19Ch]@0
  int v197; // [sp+1C8h] [bp-194h]@17
  signed int v198; // [sp+1CCh] [bp-190h]@2
  int v199; // [sp+1D0h] [bp-18Ch]@1
  int v200; // [sp+1D4h] [bp-188h]@1
  signed int v201; // [sp+1DCh] [bp-180h]@1
  int v202; // [sp+1E0h] [bp-17Ch]@1
  int v203; // [sp+1E4h] [bp-178h]@20
  int v204; // [sp+1E8h] [bp-174h]@20
  int v205; // [sp+1ECh] [bp-170h]@20
  int v206; // [sp+1F0h] [bp-16Ch]@20
  int v207; // [sp+1F4h] [bp-168h]@20
  int v208; // [sp+1F8h] [bp-164h]@20
  int v209; // [sp+1FCh] [bp-160h]@20
  int v210; // [sp+21Ch] [bp-140h]@1
  int v211; // [sp+220h] [bp-13Ch]@1
  int v212; // [sp+224h] [bp-138h]@1
  int v213; // [sp+228h] [bp-134h]@1
  int v214; // [sp+22Ch] [bp-130h]@1
  int v215; // [sp+230h] [bp-12Ch]@1
  int v216; // [sp+234h] [bp-128h]@1
  int v217; // [sp+238h] [bp-124h]@1
  int v218; // [sp+23Ch] [bp-120h]@1
  int v219; // [sp+240h] [bp-11Ch]@1
  int v220; // [sp+244h] [bp-118h]@1
  int v221; // [sp+248h] [bp-114h]@1
  int v222; // [sp+24Ch] [bp-110h]@1
  int v223; // [sp+250h] [bp-10Ch]@1
  int v224; // [sp+254h] [bp-108h]@1
  int v225; // [sp+258h] [bp-104h]@1
  int v226; // [sp+25Ch] [bp-100h]@1
  int v227; // [sp+260h] [bp-FCh]@1
  int v228; // [sp+264h] [bp-F8h]@1
  int v229; // [sp+268h] [bp-F4h]@1
  int v230; // [sp+26Ch] [bp-F0h]@1
  int v231; // [sp+270h] [bp-ECh]@1
  int v232; // [sp+274h] [bp-E8h]@1
  int v233; // [sp+278h] [bp-E4h]@1
  int v234; // [sp+27Ch] [bp-E0h]@1
  int v235; // [sp+280h] [bp-DCh]@1
  int v236; // [sp+284h] [bp-D8h]@1
  int v237; // [sp+288h] [bp-D4h]@1
  int v238; // [sp+28Ch] [bp-D0h]@1
  int v239; // [sp+290h] [bp-CCh]@1
  int v240; // [sp+294h] [bp-C8h]@3
  int v241[7]; // [sp+298h] [bp-C4h]@8
  int v242[4]; // [sp+2B4h] [bp-A8h]@3
  int v243; // [sp+2C4h] [bp-98h]@1
  int v244; // [sp+2C8h] [bp-94h]@1
  int v245; // [sp+2CCh] [bp-90h]@1
  int v246; // [sp+2D0h] [bp-8Ch]@1
  int v247; // [sp+2D4h] [bp-88h]@1
  int v248; // [sp+2D8h] [bp-84h]@12
  int v249[7]; // [sp+2DCh] [bp-80h]@75
  int v250[4]; // [sp+2F8h] [bp-64h]@8
  int v251; // [sp+308h] [bp-54h]@1
  int v252; // [sp+30Ch] [bp-50h]@1
  int v253; // [sp+310h] [bp-4Ch]@1
  int v254; // [sp+314h] [bp-48h]@1
  int v255; // [sp+318h] [bp-44h]@1
  int v256[4]; // [sp+31Ch] [bp-40h]@3
  int v257; // [sp+32Ch] [bp-30h]@1

  v201 = a1;
  v202 = a2;
  v175 = dword_6FBB52F4 * dword_6FBBDB98;
  v176 = dword_6FBB52F4 * dword_6FBBDBA0;
  v200 = dword_6FBB52F8 * dword_6FBBDBA4;
  v199 = dword_6FBB52F8 * dword_6FBBDB9C;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v234 = v2 * dword_6FBB52F4;
  v235 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v237 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v236 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v230 = v3 * dword_6FBB52F8;
  v231 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v233 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  v232 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
  sub_6F733480(v2, v3, &v234, &v230);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
    (signed __int16)(32 * word_70041E86) >> 5,
    &v235,
    &v231);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v237,
    &v233);
  sub_6F733480(
    (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5),
    (signed __int16)(32 * word_70041E8E) >> 5,
    &v236,
    &v232);
  v226 = (unsigned __int8)dword_70041E70;
  v227 = (unsigned __int8)dword_70041E74;
  v229 = (unsigned __int8)dword_70041E78;
  v222 = BYTE1(dword_70041E70);
  v228 = (unsigned __int8)dword_70041E7C;
  v224 = BYTE1(dword_70041E7C);
  v218 = BYTE2(dword_70041E70);
  v219 = BYTE2(dword_70041E74);
  v220 = BYTE2(dword_70041E7C);
  v214 = (unsigned __int8)byte_6FBB5050;
  v215 = (unsigned __int8)byte_6FBB5051;
  v223 = BYTE1(dword_70041E74);
  v225 = BYTE1(dword_70041E78);
  v221 = BYTE2(dword_70041E78);
  v217 = (unsigned __int8)byte_6FBB5052;
  v216 = (unsigned __int8)byte_6FBB5053;
  v211 = (unsigned __int8)byte_6FBB5055;
  v210 = (unsigned __int8)byte_6FBB5054;
  v213 = (unsigned __int8)byte_6FBB5056;
  v212 = (unsigned __int8)byte_6FBB5057;
  nullsub_2();
  v234 += dword_6FBB52F4 * dword_6FBBDB90;
  v235 += dword_6FBB52F4 * dword_6FBBDB90;
  v236 += dword_6FBB52F4 * dword_6FBBDB90;
  v237 += dword_6FBB52F4 * dword_6FBBDB90;
  v230 += dword_6FBB52F8 * dword_6FBBDB94;
  v231 += dword_6FBB52F8 * dword_6FBBDB94;
  v232 += dword_6FBB52F8 * dword_6FBBDB94;
  v233 += dword_6FBB52F8 * dword_6FBBDB94;
  v238 = 0;
  v239 = 0;
  v247 = 0;
  v255 = 0;
  v243 = 0;
  v251 = 0;
  v244 = 0;
  v252 = 0;
  v245 = 0;
  v253 = 0;
  v246 = 0;
  v254 = 0;
  result = sub_6F7368C0((int)&v234, (int)&v230, (int)&v238);
  v128 = v257;
  if ( v257 > 0 )
  {
    v178 = 0;
    v177 = 0;
    v198 = 0;
    v173 = 0;
    v179 = 12;
    v181 = 28;
    do
    {
      v5 = v256[v173++];
      v6 = v256[v173];
      v123 = v5;
      v7 = *(&v240 + v179);
      if ( v7 >= v242[v177] )
      {
        v179 = ++v177 + 12;
        v7 = *(&v240 + v177 + 12);
      }
      if ( v7 )
      {
        if ( v242[v177] > v7 )
        {
          v8 = *(&v240 + 2 * v177);
          v127 = (*(&v234 + v8) << dword_6FD4098C) + v7 * v187;
          v150 = (*(&v226 + v8) << dword_6FD4098C) + v7 * v189;
          v149 = (*(&v222 + v8) << dword_6FD4098C) + v7 * v191;
          v145 = (*(&v218 + v8) << dword_6FD4098C) + v7 * v193;
          v147 = (*(&v214 + v8) << dword_6FD4098C) + v7 * v137;
          v148 = v7 * v121 + (*(&v210 + v8) << dword_6FD4098C);
        }
      }
      else
      {
        v80 = *(&v240 + 2 * v177);
        v81 = dword_6FD4098C;
        v127 = *(&v234 + v80) << dword_6FD4098C;
        v82 = *(&v226 + v80);
        v122 = v82;
        v150 = v82 << dword_6FD4098C;
        v83 = *(&v222 + v80);
        v125 = v83;
        v149 = v83 << dword_6FD4098C;
        v84 = *(&v218 + v80);
        v132 = v84;
        v145 = v84 << dword_6FD4098C;
        v85 = *(&v214 + v80);
        v135 = v85;
        v147 = v85 << dword_6FD4098C;
        v86 = *(&v210 + v80);
        v140 = v86;
        v148 = v86 << dword_6FD4098C;
        v87 = v241[2 * v177];
        v119 = *(&v230 + v87) - *(&v230 + v80);
        v88 = *(&v234 + v87) - *(&v234 + v80);
        v89 = (unsigned __int64)((signed __int64)v88 << dword_6FD4098C) >> 32;
        v90 = v88 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v89 = v90;
          v90 = 0;
        }
        v187 = sub_6F737040(v90, v89, v119);
        v91 = *(&v226 + v87) - v122;
        v92 = (unsigned __int64)(v91 << v81) >> 32;
        v93 = (_DWORD)v91 << v81;
        if ( v81 & 0x20 )
        {
          v92 = v93;
          v93 = 0;
        }
        v189 = sub_6F737040(v93, v92, v119);
        v94 = *(&v222 + v87) - v125;
        v95 = (unsigned __int64)(v94 << v81) >> 32;
        v96 = (_DWORD)v94 << v81;
        if ( v81 & 0x20 )
        {
          v95 = v96;
          v96 = 0;
        }
        v191 = sub_6F737040(v96, v95, v119);
        v97 = *(&v218 + v87) - v132;
        v98 = (unsigned __int64)(v97 << v81) >> 32;
        v99 = (_DWORD)v97 << v81;
        if ( v81 & 0x20 )
        {
          v98 = v99;
          v99 = 0;
        }
        v193 = sub_6F737040(v99, v98, v119);
        v100 = *(&v214 + v87) - v135;
        v101 = (unsigned __int64)(v100 << v81) >> 32;
        v102 = (_DWORD)v100 << v81;
        if ( v81 & 0x20 )
        {
          v101 = v102;
          v102 = 0;
        }
        v137 = sub_6F737040(v102, v101, v119);
        v103 = *(&v210 + v87) - v140;
        v104 = (unsigned __int64)((signed __int64)v103 << v81) >> 32;
        v105 = v103 << v81;
        if ( v81 & 0x20 )
        {
          v104 = v105;
          if ( v81 & 0x20 )
            v105 = 0;
        }
        v121 = sub_6F737040(v105, v104, v119);
      }
      v9 = v178;
      *(&v240 + v179) = v6 - v123 + v7;
      v10 = v241[v181];
      if ( v10 >= v250[v178] )
      {
        ++v178;
        v181 = v9 + 29;
        v10 = v241[v9 + 29];
      }
      if ( v10 )
      {
        if ( v250[v178] > v10 )
        {
          v11 = *(&v248 + 2 * v178);
          v146 = (*(&v234 + v11) << dword_6FD4098C) + v10 * v188;
          v186 = (*(&v226 + v11) << dword_6FD4098C) + v10 * v190;
          v184 = (*(&v222 + v11) << dword_6FD4098C) + v10 * v192;
          v185 = (*(&v218 + v11) << dword_6FD4098C) + v10 * v194;
          v183 = (*(&v214 + v11) << dword_6FD4098C) + v10 * v195;
          v182 = v10 * v196 + (*(&v210 + v11) << dword_6FD4098C);
        }
      }
      else
      {
        v54 = *(&v248 + 2 * v178);
        v55 = dword_6FD4098C;
        v146 = *(&v234 + v54) << dword_6FD4098C;
        v56 = *(&v226 + v54);
        v131 = v56;
        v186 = v56 << dword_6FD4098C;
        v57 = *(&v222 + v54);
        v134 = v57;
        v184 = v57 << dword_6FD4098C;
        v58 = *(&v218 + v54);
        v139 = v58;
        v185 = v58 << dword_6FD4098C;
        v59 = *(&v214 + v54);
        v142 = v59;
        v183 = v59 << dword_6FD4098C;
        v60 = *(&v210 + v54);
        v144 = v60;
        v182 = v60 << dword_6FD4098C;
        v61 = v249[2 * v178];
        v118 = *(&v230 + v61) - *(&v230 + v54);
        v62 = *(&v234 + v61) - *(&v234 + v54);
        v63 = (unsigned __int64)((signed __int64)v62 << dword_6FD4098C) >> 32;
        v64 = v62 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v63 = v64;
          v64 = 0;
        }
        v188 = sub_6F737040(v64, v63, v118);
        v65 = *(&v226 + v61) - v131;
        v66 = (unsigned __int64)(v65 << v55) >> 32;
        v67 = (_DWORD)v65 << v55;
        if ( v55 & 0x20 )
        {
          v66 = v67;
          v67 = 0;
        }
        v190 = sub_6F737040(v67, v66, v118);
        v68 = *(&v222 + v61) - v134;
        v69 = (unsigned __int64)(v68 << v55) >> 32;
        v70 = (_DWORD)v68 << v55;
        if ( v55 & 0x20 )
        {
          v69 = v70;
          v70 = 0;
        }
        v192 = sub_6F737040(v70, v69, v118);
        v71 = *(&v218 + v61) - v139;
        v72 = (unsigned __int64)(v71 << v55) >> 32;
        v73 = (_DWORD)v71 << v55;
        if ( v55 & 0x20 )
        {
          v72 = v73;
          v73 = 0;
        }
        v194 = sub_6F737040(v73, v72, v118);
        v74 = *(&v214 + v61) - v142;
        v75 = (unsigned __int64)(v74 << v55) >> 32;
        v76 = (_DWORD)v74 << v55;
        if ( v55 & 0x20 )
        {
          v75 = v76;
          v76 = 0;
        }
        v195 = sub_6F737040(v76, v75, v118);
        v77 = *(&v210 + v61) - v144;
        v78 = (unsigned __int64)((signed __int64)v77 << v55) >> 32;
        v79 = v77 << v55;
        if ( v55 & 0x20 )
        {
          v78 = v79;
          if ( v55 & 0x20 )
            v79 = 0;
        }
        v196 = sub_6F737040(v79, v78, v118);
      }
      v241[v181] = v6 - v123 + v10;
      result = v199 - v123;
      if ( v199 - v123 > 0 )
      {
        v127 += result * v187;
        v150 += result * v189;
        v149 += result * v191;
        v145 += result * v193;
        v147 += result * v137;
        v148 += result * v121;
        v146 += result * v188;
        v186 += result * v190;
        v184 += result * v192;
        v185 += result * v194;
        v183 += result * v195;
        result *= v196;
        v182 += result;
        v123 = v199;
      }
      if ( v200 <= v6 )
        v6 = v200;
      v197 = v6 - v123;
      if ( v6 - v123 > 0 )
      {
        v209 = v150;
        v165 = v186 - v150;
        v208 = v146;
        v207 = v127;
        v164 = v146 - v127;
        v206 = v149;
        v163 = v184 - v149;
        v205 = v145;
        v162 = v185 - v145;
        v204 = v147;
        v161 = v183 - v147;
        v203 = v148;
        v160 = v182 - v148;
        v174 = v6;
        do
        {
          v117 = dword_6FD4098C;
          v13 = (1 << dword_6FD4098C) - 1;
          v14 = v127 + v13;
          v167 = v146 + v13;
          v15 = (unsigned __int64)((signed __int64)v165 << dword_6FD4098C) >> 32;
          v16 = v165 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v15 = v165 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v16 = 0;
          v138 = sub_6F737040(v16, v15, v164);
          v17 = v163 << v117;
          v18 = (unsigned __int64)((signed __int64)v163 << v117) >> 32;
          if ( v117 & 0x20 )
            v18 = v163 << v117;
          if ( v117 & 0x20 )
            v17 = 0;
          v141 = sub_6F737040(v17, v18, v164);
          v19 = (unsigned __int64)((signed __int64)v162 << v117) >> 32;
          v20 = v162 << v117;
          if ( v117 & 0x20 )
            v19 = v162 << v117;
          if ( v117 & 0x20 )
            v20 = 0;
          v143 = sub_6F737040(v20, v19, v164);
          v21 = (unsigned __int64)((signed __int64)v161 << v117) >> 32;
          v22 = v161 << v117;
          if ( v117 & 0x20 )
            v21 = v161 << v117;
          if ( v117 & 0x20 )
            v22 = 0;
          v129 = sub_6F737040(v22, v21, v164);
          v23 = (unsigned __int64)((signed __int64)v160 << v117) >> 32;
          v24 = v160 << v117;
          if ( v117 & 0x20 )
            v23 = v160 << v117;
          if ( v117 & 0x20 )
            v24 = 0;
          v151 = sub_6F737040(v24, v23, v164);
          v25 = v14 >> v117;
          v124 = v25;
          v26 = (v25 << v117) - v127;
          v27 = v26 * (signed __int64)v138;
          v28 = v27 >> v117;
          if ( v117 & 0x20 )
            v28 = SHIDWORD(v27) >> v117;
          v152 = v28 + v150;
          v29 = v26 * (signed __int64)v141;
          v30 = v29 >> v117;
          if ( v117 & 0x20 )
            v30 = SHIDWORD(v29) >> v117;
          v154 = v30 + v149;
          v31 = v26 * (signed __int64)v143 >> (v117 & 0x1F);
          if ( v117 & 0x20 )
            LODWORD(v31) = (unsigned __int64)(v26 * (signed __int64)v143 >> (v117 & 0x1F)) >> 32;
          v32 = v145 + v31;
          v33 = v26 * (signed __int64)v129 >> (v117 & 0x1F);
          if ( v117 & 0x20 )
            LODWORD(v33) = (unsigned __int64)(v26 * (signed __int64)v129 >> (v117 & 0x1F)) >> 32;
          v156 = v147 + v33;
          v34 = v151 * (signed __int64)v26 >> (v117 & 0x1F);
          v35 = v117 - 1;
          if ( v117 & 0x20 )
            LODWORD(v34) = (unsigned __int64)(v151 * (signed __int64)v26 >> (v117 & 0x1F)) >> 32;
          v36 = 1 << v35;
          v170 = (1 << v35) + v152;
          v37 = (1 << v35) + v154;
          v171 = (1 << v35) + v32;
          v155 = (1 << v35) + v148 + v34;
          v166 = v37;
          v153 = (1 << v35) + v156;
          v168 = dword_6FBB52F4;
          v169 = dword_6FBB52F8;
          if ( dword_6FBB52F4 > 1 || dword_6FBB52F8 > 1 )
          {
            LODWORD(v38) = ((signed int)((unsigned __int64)v129 >> 32) >> 31) ^ v129;
            HIDWORD(v38) = ((signed int)((unsigned __int64)v129 >> 32) >> 31) ^ ((unsigned __int64)v129 >> 32);
            v39 = v38
                - __PAIR__(
                    (signed int)((unsigned __int64)v129 >> 32) >> 31,
                    (signed int)((unsigned __int64)v129 >> 32) >> 31);
            HIDWORD(v12) = SHIDWORD(v137) >> 31;
            LODWORD(v12) = SHIDWORD(v137) >> 31;
            v40 = (v12 ^ v137) - v12;
            v43 = v39;
            v42 = v43 >> 32;
            v41 = v43;
            v44 = HIDWORD(v40);
            v45 = __OFSUB__(HIDWORD(v39), (v41 < (unsigned int)v40) + HIDWORD(v40));
            v46 = (__PAIR__(HIDWORD(v39), v41) - v40) >> 32;
            if ( (v46 < 0) ^ v45 )
              v41 = v40;
            if ( !((v46 < 0) ^ v45) )
              v44 = v42;
            v172 = __PAIR__(v44, v41);
            LODWORD(v47) = ((signed int)((unsigned __int64)v151 >> 32) >> 31) ^ v151;
            HIDWORD(v47) = ((signed int)((unsigned __int64)v151 >> 32) >> 31) ^ ((unsigned __int64)v151 >> 32);
            v157 = v47
                 - __PAIR__(
                     (signed int)((unsigned __int64)v151 >> 32) >> 31,
                     (signed int)((unsigned __int64)v151 >> 32) >> 31);
            HIDWORD(v180) = SHIDWORD(v121) >> 31;
            LODWORD(v180) = SHIDWORD(v121) >> 31;
            v48 = (v121 ^ v180) - v180;
            v49 = (v47
                 - __PAIR__(
                     (unsigned int)((signed int)((unsigned __int64)v151 >> 32) >> 31),
                     (signed int)((unsigned __int64)v151 >> 32) >> 31)) >> 32;
            v50 = v157;
            if ( SHIDWORD(v157) < ((unsigned int)v157 < (unsigned int)v48) + HIDWORD(v48) )
              v50 = (v121 ^ v180) - v180;
            if ( SHIDWORD(v157) < ((unsigned int)v157 < (unsigned int)v48) + HIDWORD(v48) )
              v49 = ((v121 ^ v180) - v180) >> 32;
            LODWORD(v158) = -(v137 + v129);
            LODWORD(v130) = -(v121 + v151);
            if ( v172 )
            {
              HIDWORD(v158) = (unsigned __int64)-(v137 + v129) >> 32;
              LODWORD(v158) = sub_6F8A13E0(v172, v158, v172);
            }
            if ( v50 | v49 )
            {
              HIDWORD(v130) = (unsigned __int64)-(v121 + v151) >> 32;
              LODWORD(v130) = sub_6F8A13E0(v172, v130, __PAIR__(v49, v50));
            }
            v153 += v158 * (v168 - 1) * (v36 / v168);
            v155 += v130 * (v169 - 1) * (v36 / v169);
          }
          v51 = v175 - v124;
          v52 = v167 >> v117;
          if ( v175 - v124 > 0 )
          {
            v124 = v175;
            v170 += v51 * v138;
            v166 += v51 * v141;
            v171 += v51 * v143;
            v153 += v51 * v129;
            v155 += v151 * v51;
          }
          if ( v176 <= v52 )
            v52 = v176;
          v53 = v52 - v124;
          if ( v53 > 0 && sub_6F71F0C0(v123) )
          {
            if ( v198 % v201 == v202 )
            {
              v106 = v124 + v168 * (v123 << 10);
              v136 = dword_6FBB505C + 4 * v106 - 4 * v124;
              v133 = dword_6FBB5068 + 2 * v106 - 2 * v124;
              v159 = v53 + v124;
              if ( v53 & 1 )
              {
                v108 = v124;
                v107 = v171;
                v110 = v117;
                v109 = v170;
                v112 = v155;
                v111 = v153;
              }
              else
              {
                dword_6FBB5058(
                  dword_6FBB5068 + 2 * v106,
                  dword_6FBB505C + 4 * v106,
                  v124,
                  v123,
                  (unsigned __int8)(v170 >> v117),
                  (unsigned __int8)(v166 >> v117),
                  (unsigned __int8)(v171 >> v117),
                  v153,
                  v155);
                v107 = v143 + v171;
                v108 = v124 + 1;
                v166 += v141;
                v109 = v138 + v170;
                v110 = dword_6FD4098C;
                v111 = v129 + v153;
                v112 = v151 + v155;
              }
              while ( 1 )
              {
                v126 = v107;
                dword_6FBB5058(
                  v133 + 2 * v108,
                  v136 + 4 * v108,
                  v108,
                  v123,
                  (unsigned __int8)(v109 >> v110),
                  (unsigned __int8)(v166 >> v110),
                  (unsigned __int8)(v107 >> v110),
                  v111,
                  v112);
                v113 = v108 + 1;
                v114 = v138 + v109;
                v115 = v129 + v111;
                v120 = v141 + v166;
                v116 = v151 + v112;
                if ( v159 == v108 + 1 )
                  break;
                v108 += 2;
                dword_6FBB5058(
                  v133 + 2 * v113,
                  v136 + 4 * v113,
                  v113,
                  v123,
                  (unsigned __int8)(v114 >> dword_6FD4098C),
                  (unsigned __int8)(v120 >> dword_6FD4098C),
                  (unsigned __int8)((v143 + v126) >> dword_6FD4098C),
                  v115,
                  v116);
                v110 = dword_6FD4098C;
                v109 = v138 + v114;
                v166 = v141 + v120;
                v111 = v129 + v115;
                v112 = v151 + v116;
                v107 = v143 + v143 + v126;
              }
            }
            ++v198;
          }
          ++v123;
          v127 += v187;
          v146 += v188;
          v165 += v190 - v189;
          v164 += v188 - v187;
          v163 += v192 - v191;
          v162 += v194 - v193;
          v161 += v195 - v137;
          v160 += v196 - v121;
          v150 += v189;
          v149 += v191;
          v145 += v193;
          v147 += v137;
          v148 += v121;
        }
        while ( v123 != v174 );
        v127 = (v197 - 1) * v187 + v187 + v207;
        v150 = (v197 - 1) * v189 + v189 + v209;
        v149 = (v197 - 1) * v191 + v191 + v206;
        v145 = (v197 - 1) * v193 + v193 + v205;
        v147 = (v197 - 1) * v137 + v137 + v204;
        v148 = (v197 - 1) * v121 + v121 + v203;
        v146 = (v197 - 1) * v188 + v188 + v208;
        v186 += (v197 - 1) * v190 + v190;
        v184 += (v197 - 1) * v192 + v192;
        result = v195 + v183;
        v185 += (v197 - 1) * v194 + v194;
        v183 += (v197 - 1) * v195 + v195;
        v182 += v196 + v196 * (v197 - 1);
        v128 = v257;
      }
    }
    while ( v173 < v128 );
  }
  return result;
}
