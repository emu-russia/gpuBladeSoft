int __usercall sub_6F745A80@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // ST30_4@1
  _DWORD *v3; // ebp@1
  int result; // eax@9
  int v5; // ebx@11
  int v6; // ebp@11
  int v7; // ebx@11
  int v8; // eax@15
  int v9; // edx@16
  int v10; // ebx@16
  int v11; // eax@20
  int v12; // eax@21
  char v13; // bp@30
  int v14; // edx@30
  signed int v15; // edi@30
  int v16; // edx@30
  int v17; // eax@30
  int v18; // edx@34
  int v19; // eax@34
  int v20; // esi@38
  int v21; // ebx@38
  int v22; // esi@42
  int v23; // ebx@42
  int v24; // esi@46
  int v25; // ebx@46
  int v26; // esi@50
  int v27; // ebx@50
  signed int v28; // edi@54
  int v29; // esi@54
  signed __int64 v30; // rax@54
  signed __int64 v31; // rax@56
  signed __int64 v32; // rax@58
  signed __int64 v33; // rax@60
  signed __int64 v34; // rax@62
  signed int v35; // ebx@64
  signed __int64 v36; // rax@64
  int v37; // esi@66
  signed int v38; // eax@66
  int v39; // edx@66
  signed int v40; // esi@67
  int v41; // ebx@68
  int v42; // ebx@70
  signed int v43; // ecx@74
  int v44; // eax@75
  char v45; // si@75
  int v46; // edi@75
  int v47; // edi@75
  int v48; // edi@75
  int v49; // edi@75
  int v50; // edi@75
  int v51; // edi@75
  int v52; // edi@75
  int v53; // eax@75
  int v54; // edx@75
  int v55; // eax@75
  __int64 v56; // rax@77
  int v57; // edx@77
  int v58; // eax@77
  __int64 v59; // rax@79
  int v60; // edx@79
  int v61; // eax@79
  __int64 v62; // rax@81
  int v63; // edx@81
  int v64; // eax@81
  __int64 v65; // rax@83
  int v66; // edx@83
  int v67; // eax@83
  __int64 v68; // rax@85
  int v69; // edx@85
  int v70; // eax@85
  int v71; // eax@87
  int v72; // edx@87
  int v73; // eax@87
  int v74; // eax@91
  char v75; // si@91
  int v76; // edi@91
  int v77; // edi@91
  int v78; // edi@91
  int v79; // edi@91
  int v80; // edi@91
  int v81; // edi@91
  int v82; // edi@91
  int v83; // eax@91
  int v84; // edx@91
  int v85; // eax@91
  __int64 v86; // rax@93
  int v87; // edx@93
  int v88; // eax@93
  __int64 v89; // rax@95
  int v90; // edx@95
  int v91; // eax@95
  __int64 v92; // rax@97
  int v93; // edx@97
  int v94; // eax@97
  __int64 v95; // rax@99
  int v96; // edx@99
  int v97; // eax@99
  __int64 v98; // rax@101
  int v99; // edx@101
  int v100; // eax@101
  int v101; // eax@103
  int v102; // edx@103
  int v103; // eax@103
  int v104; // eax@108
  int v105; // ebx@108
  signed int v106; // ST08_4@109
  char v107; // cl@109
  signed int v108; // ebp@109
  int v109; // ST08_4@110
  int v110; // ebx@111
  signed int v111; // ebp@111
  signed int v112; // esi@111
  int v113; // [sp+30h] [bp-248h]@28
  int v114; // [sp+30h] [bp-248h]@75
  int v115; // [sp+30h] [bp-248h]@91
  signed int v116; // [sp+34h] [bp-244h]@11
  int v117; // [sp+38h] [bp-240h]@0
  int v118; // [sp+3Ch] [bp-23Ch]@34
  int v119; // [sp+3Ch] [bp-23Ch]@91
  int v120; // [sp+40h] [bp-238h]@9
  int v121; // [sp+40h] [bp-238h]@38
  int v122; // [sp+44h] [bp-234h]@42
  int v123; // [sp+44h] [bp-234h]@75
  int v124; // [sp+44h] [bp-234h]@91
  int v125; // [sp+48h] [bp-230h]@46
  int v126; // [sp+48h] [bp-230h]@75
  int v127; // [sp+48h] [bp-230h]@91
  int v128; // [sp+4Ch] [bp-22Ch]@50
  int v129; // [sp+4Ch] [bp-22Ch]@75
  int v130; // [sp+4Ch] [bp-22Ch]@91
  int v131; // [sp+50h] [bp-228h]@54
  int v132; // [sp+50h] [bp-228h]@75
  int v133; // [sp+50h] [bp-228h]@91
  int v134; // [sp+54h] [bp-224h]@0
  int v135; // [sp+58h] [bp-220h]@0
  int v136; // [sp+5Ch] [bp-21Ch]@0
  int v137; // [sp+60h] [bp-218h]@0
  int v138; // [sp+64h] [bp-214h]@0
  int v139; // [sp+68h] [bp-210h]@0
  int v140; // [sp+6Ch] [bp-20Ch]@0
  int v141; // [sp+70h] [bp-208h]@28
  int v142; // [sp+70h] [bp-208h]@75
  int v143; // [sp+70h] [bp-208h]@91
  int v144; // [sp+74h] [bp-204h]@28
  int v145; // [sp+74h] [bp-204h]@75
  int v146; // [sp+78h] [bp-200h]@28
  int v147; // [sp+7Ch] [bp-1FCh]@28
  int v148; // [sp+80h] [bp-1F8h]@28
  int v149; // [sp+84h] [bp-1F4h]@28
  signed int v150; // [sp+88h] [bp-1F0h]@30
  signed int v151; // [sp+88h] [bp-1F0h]@67
  signed int v152; // [sp+88h] [bp-1F0h]@111
  signed int v153; // [sp+8Ch] [bp-1ECh]@56
  signed int v154; // [sp+8Ch] [bp-1ECh]@67
  signed int v155; // [sp+8Ch] [bp-1ECh]@111
  signed int v156; // [sp+90h] [bp-1E8h]@58
  signed int v157; // [sp+90h] [bp-1E8h]@67
  signed int v158; // [sp+90h] [bp-1E8h]@111
  signed int v159; // [sp+94h] [bp-1E4h]@60
  int v160; // [sp+94h] [bp-1E4h]@108
  signed int v161; // [sp+94h] [bp-1E4h]@111
  signed int v162; // [sp+98h] [bp-1E0h]@62
  int v163; // [sp+98h] [bp-1E0h]@108
  int v164; // [sp+9Ch] [bp-1DCh]@1
  signed int v165; // [sp+A0h] [bp-1D8h]@67
  int v166; // [sp+C4h] [bp-1B4h]@10
  int v167; // [sp+D4h] [bp-1A4h]@28
  int v168; // [sp+E8h] [bp-190h]@1
  signed int v169; // [sp+ECh] [bp-18Ch]@67
  int v170; // [sp+F0h] [bp-188h]@10
  int v171; // [sp+F4h] [bp-184h]@10
  int v172; // [sp+F8h] [bp-180h]@10
  int v173; // [sp+FCh] [bp-17Ch]@10
  int v174; // [sp+100h] [bp-178h]@0
  int v175; // [sp+104h] [bp-174h]@0
  int v176; // [sp+108h] [bp-170h]@0
  int v177; // [sp+10Ch] [bp-16Ch]@0
  int v178; // [sp+110h] [bp-168h]@0
  int v179; // [sp+114h] [bp-164h]@0
  int v180; // [sp+118h] [bp-160h]@0
  int v181; // [sp+120h] [bp-158h]@0
  int v182; // [sp+128h] [bp-150h]@0
  int v183; // [sp+130h] [bp-148h]@0
  int v184; // [sp+138h] [bp-140h]@0
  int v185; // [sp+140h] [bp-138h]@0
  int v186; // [sp+148h] [bp-130h]@0
  int v187; // [sp+150h] [bp-128h]@0
  int v188; // [sp+158h] [bp-120h]@0
  int v189; // [sp+160h] [bp-118h]@0
  int v190; // [sp+168h] [bp-110h]@0
  int v191; // [sp+170h] [bp-108h]@0
  int v192; // [sp+178h] [bp-100h]@0
  int v193; // [sp+180h] [bp-F8h]@0
  int v194; // [sp+188h] [bp-F0h]@25
  signed int v195; // [sp+18Ch] [bp-ECh]@10
  int v196; // [sp+190h] [bp-E8h]@1
  int v197; // [sp+194h] [bp-E4h]@1
  int v198; // [sp+19Ch] [bp-DCh]@108
  signed int v199; // [sp+1A0h] [bp-D8h]@1
  int v200; // [sp+1A4h] [bp-D4h]@1
  int v201; // [sp+1A8h] [bp-D0h]@28
  int v202; // [sp+1ACh] [bp-CCh]@28
  int v203; // [sp+1B0h] [bp-C8h]@28
  int v204; // [sp+1B4h] [bp-C4h]@28
  int v205; // [sp+1B8h] [bp-C0h]@28
  int v206; // [sp+1BCh] [bp-BCh]@28
  int v207; // [sp+1C0h] [bp-B8h]@28
  int v208; // [sp+1C4h] [bp-B4h]@28
  int v209; // [sp+1DCh] [bp-9Ch]@108
  int v210; // [sp+1ECh] [bp-8Ch]@9
  int v211; // [sp+1F0h] [bp-88h]@9
  int v212; // [sp+1F4h] [bp-84h]@9
  int v213; // [sp+1F8h] [bp-80h]@9
  int v214; // [sp+1FCh] [bp-7Ch]@9
  int v215; // [sp+200h] [bp-78h]@9
  int v216; // [sp+204h] [bp-74h]@9
  int v217; // [sp+208h] [bp-70h]@9
  int v218; // [sp+20Ch] [bp-6Ch]@9
  int v219; // [sp+210h] [bp-68h]@9
  int v220; // [sp+214h] [bp-64h]@9
  int v221; // [sp+218h] [bp-60h]@9
  int v222; // [sp+21Ch] [bp-5Ch]@9
  int v223; // [sp+220h] [bp-58h]@9
  int v224; // [sp+224h] [bp-54h]@9
  int v225; // [sp+228h] [bp-50h]@9
  int v226; // [sp+22Ch] [bp-4Ch]@9
  int v227; // [sp+230h] [bp-48h]@9
  int v228; // [sp+234h] [bp-44h]@9
  int v229; // [sp+238h] [bp-40h]@9
  int v230; // [sp+23Ch] [bp-3Ch]@9
  int v231; // [sp+240h] [bp-38h]@9
  int v232; // [sp+244h] [bp-34h]@9
  int v233; // [sp+248h] [bp-30h]@9
  int v234; // [sp+24Ch] [bp-2Ch]@1
  int v235; // [sp+250h] [bp-28h]@1
  int v236; // [sp+254h] [bp-24h]@1
  int v237; // [sp+258h] [bp-20h]@1
  int v238; // [sp+25Ch] [bp-1Ch]@1
  int v239; // [sp+260h] [bp-18h]@1
  int v240; // [sp+264h] [bp-14h]@1
  int v241; // [sp+268h] [bp-10h]@1
  int v242; // [sp+26Ch] [bp-Ch]@1
  int v243; // [sp+270h] [bp-8h]@1
  int v244; // [sp+274h] [bp-4h]@1
  int v245; // [sp+278h] [bp+0h]@1
  int v246; // [sp+27Ch] [bp+4h]@9
  int v247; // [sp+280h] [bp+8h]@9
  int v248; // [sp+284h] [bp+Ch]@11
  int v249[7]; // [sp+288h] [bp+10h]@16
  int v250[4]; // [sp+2A4h] [bp+2Ch]@11
  int v251; // [sp+2B4h] [bp+3Ch]@9
  int v252; // [sp+2B8h] [bp+40h]@9
  int v253; // [sp+2BCh] [bp+44h]@9
  int v254; // [sp+2C0h] [bp+48h]@9
  int v255; // [sp+2C4h] [bp+4Ch]@9
  int v256; // [sp+2C8h] [bp+50h]@20
  int v257[7]; // [sp+2CCh] [bp+54h]@75
  int v258[4]; // [sp+2E8h] [bp+70h]@16
  int v259; // [sp+2F8h] [bp+80h]@9
  int v260; // [sp+2FCh] [bp+84h]@9
  int v261; // [sp+300h] [bp+88h]@9
  int v262; // [sp+304h] [bp+8Ch]@9
  int v263; // [sp+308h] [bp+90h]@9
  int v264[4]; // [sp+30Ch] [bp+94h]@11
  int v265; // [sp+31Ch] [bp+A4h]@9

  v199 = a1;
  v200 = a2;
  v196 = dword_6FBB52F8 * dword_6FBBDB9C;
  v164 = dword_6FBB52F4 * dword_6FBBDB98;
  v197 = dword_6FBB52F8 * dword_6FBBDBA4;
  v168 = dword_6FBB52F4 * dword_6FBBDBA0;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v243 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v242 = dword_6FBB52F4 * v2;
  v245 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v244 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v238 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v3 = (_DWORD *)((signed __int16)((signed __int16)(32 * word_70041E8A) >> 5) * dword_6FBB52F8);
  v239 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5) * dword_6FBB52F8;
  v241 = (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5) * dword_6FBB52F8;
  v240 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
  sub_6F732840(
    v2,
    (signed __int16)(32 * word_70041E82) >> 5,
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (signed __int16)(32 * word_70041E8A) >> 5,
    &v242,
    &v238,
    &v234,
    &v243,
    &v239,
    &v235,
    v3,
    &v241,
    &v237);
  sub_6F732840(
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (signed __int16)(32 * word_70041E8A) >> 5,
    (signed __int16)(32 * word_70041E8C) >> 5,
    (signed __int16)(32 * word_70041E8E) >> 5,
    &v243,
    &v239,
    &v235,
    v3,
    &v241,
    &v237,
    &v244,
    &v240,
    &v236);
  if ( !v234 )
    v234 = 1;
  if ( !v235 )
    v235 = 1;
  if ( !v236 )
    v236 = 1;
  if ( !v237 )
    v237 = 1;
  v230 = 0xFFFF / v234;
  v231 = 0xFFFF / v235;
  v232 = 0xFFFF / v236;
  v233 = 0xFFFF / v237;
  v226 = 0xFFFF / v234 * (unsigned __int8)dword_70041E70;
  v222 = 0xFFFF / v234 * BYTE1(dword_70041E70);
  v227 = 0xFFFF / v235 * (unsigned __int8)dword_70041E74;
  v223 = 0xFFFF / v235 * BYTE1(dword_70041E74);
  v228 = 0xFFFF / v236 * (unsigned __int8)dword_70041E7C;
  v224 = 0xFFFF / v236 * BYTE1(dword_70041E7C);
  v229 = 0xFFFF / v237 * (unsigned __int8)dword_70041E78;
  v225 = 0xFFFF / v237 * BYTE1(dword_70041E78);
  v218 = 0xFFFF / v234 * BYTE2(dword_70041E70);
  v219 = 0xFFFF / v235 * BYTE2(dword_70041E74);
  v220 = 0xFFFF / v236 * BYTE2(dword_70041E7C);
  v221 = 0xFFFF / v237 * BYTE2(dword_70041E78);
  v214 = 0xFFFF / v234 * (unsigned __int8)byte_6FBB5050;
  v215 = (unsigned __int8)byte_6FBB5051 * (0xFFFF / v235);
  v216 = (unsigned __int8)byte_6FBB5053 * (0xFFFF / v236);
  v217 = (unsigned __int8)byte_6FBB5052 * (0xFFFF / v237);
  v210 = (unsigned __int8)byte_6FBB5054 * (0xFFFF / v234);
  v211 = (unsigned __int8)byte_6FBB5055 * (0xFFFF / v235);
  v212 = (unsigned __int8)byte_6FBB5057 * (0xFFFF / v236);
  v213 = 0xFFFF / v237 * (unsigned __int8)byte_6FBB5056;
  nullsub_2();
  v242 += dword_6FBB52F4 * dword_6FBBDB90;
  v243 += dword_6FBB52F4 * dword_6FBBDB90;
  v244 += dword_6FBB52F4 * dword_6FBBDB90;
  v245 += dword_6FBB52F4 * dword_6FBBDB90;
  v238 += dword_6FBB52F8 * dword_6FBBDB94;
  v239 += dword_6FBB52F8 * dword_6FBBDB94;
  v240 += dword_6FBB52F8 * dword_6FBBDB94;
  v241 += dword_6FBB52F8 * dword_6FBBDB94;
  v246 = 0;
  v247 = 0;
  v255 = 0;
  v263 = 0;
  v251 = 0;
  v259 = 0;
  v252 = 0;
  v260 = 0;
  v253 = 0;
  v261 = 0;
  v254 = 0;
  v262 = 0;
  result = sub_6F7368C0((int)&v242, (int)&v238, (int)&v246);
  v120 = v265;
  if ( v265 > 0 )
  {
    v171 = 0;
    v170 = 0;
    v195 = 0;
    v166 = 0;
    v173 = 12;
    v172 = 28;
    do
    {
      v5 = v264[v166++];
      v6 = v264[v166];
      v116 = v5;
      v7 = *(&v248 + v173);
      if ( v7 >= v250[v170] )
      {
        v173 = ++v170 + 12;
        v7 = *(&v248 + v170 + 12);
      }
      if ( v7 )
      {
        if ( v250[v170] > v7 )
        {
          v8 = *(&v248 + 2 * v170);
          v117 = (*(&v242 + v8) << dword_6FD4098C) + v7 * v180;
          v136 = (*(&v230 + v8) << dword_6FD4098C) + v7 * v182;
          v139 = (*(&v226 + v8) << dword_6FD4098C) + v7 * v184;
          v134 = (*(&v222 + v8) << dword_6FD4098C) + v7 * v186;
          v140 = (*(&v218 + v8) << dword_6FD4098C) + v7 * v188;
          v135 = (*(&v214 + v8) << dword_6FD4098C) + v7 * v190;
          v138 = v7 * v192 + (*(&v210 + v8) << dword_6FD4098C);
        }
      }
      else
      {
        v74 = *(&v248 + 2 * v170);
        v75 = dword_6FD4098C;
        v117 = *(&v242 + v74) << dword_6FD4098C;
        v76 = *(&v230 + v74);
        v119 = v76;
        v136 = v76 << dword_6FD4098C;
        v77 = *(&v226 + v74);
        v124 = v77;
        v139 = v77 << dword_6FD4098C;
        v78 = *(&v222 + v74);
        v127 = v78;
        v134 = v78 << dword_6FD4098C;
        v79 = *(&v218 + v74);
        v130 = v79;
        v140 = v79 << dword_6FD4098C;
        v80 = *(&v214 + v74);
        v133 = v80;
        v135 = v80 << dword_6FD4098C;
        v81 = *(&v210 + v74);
        v143 = v81;
        v138 = v81 << dword_6FD4098C;
        v82 = v249[2 * v170];
        v115 = *(&v238 + v82) - *(&v238 + v74);
        v83 = *(&v242 + v82) - *(&v242 + v74);
        v84 = (unsigned __int64)((signed __int64)v83 << dword_6FD4098C) >> 32;
        v85 = v83 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v84 = v85;
          v85 = 0;
        }
        v180 = sub_6F737040(v85, v84, v115);
        v86 = *(&v230 + v82) - v119;
        v87 = (unsigned __int64)(v86 << v75) >> 32;
        v88 = (_DWORD)v86 << v75;
        if ( v75 & 0x20 )
        {
          v87 = v88;
          v88 = 0;
        }
        v182 = sub_6F737040(v88, v87, v115);
        v89 = *(&v226 + v82) - v124;
        v90 = (unsigned __int64)(v89 << v75) >> 32;
        v91 = (_DWORD)v89 << v75;
        if ( v75 & 0x20 )
        {
          v90 = v91;
          v91 = 0;
        }
        v184 = sub_6F737040(v91, v90, v115);
        v92 = *(&v222 + v82) - v127;
        v93 = (unsigned __int64)(v92 << v75) >> 32;
        v94 = (_DWORD)v92 << v75;
        if ( v75 & 0x20 )
        {
          v93 = v94;
          v94 = 0;
        }
        v186 = sub_6F737040(v94, v93, v115);
        v95 = *(&v218 + v82) - v130;
        v96 = (unsigned __int64)(v95 << v75) >> 32;
        v97 = (_DWORD)v95 << v75;
        if ( v75 & 0x20 )
        {
          v96 = v97;
          v97 = 0;
        }
        v188 = sub_6F737040(v97, v96, v115);
        v98 = *(&v214 + v82) - v133;
        v99 = (unsigned __int64)(v98 << v75) >> 32;
        v100 = (_DWORD)v98 << v75;
        if ( v75 & 0x20 )
        {
          v99 = v100;
          v100 = 0;
        }
        v190 = sub_6F737040(v100, v99, v115);
        v101 = *(&v210 + v82) - v143;
        v102 = (unsigned __int64)((signed __int64)v101 << v75) >> 32;
        v103 = v101 << v75;
        if ( v75 & 0x20 )
        {
          v102 = v103;
          if ( v75 & 0x20 )
            v103 = 0;
        }
        v192 = sub_6F737040(v103, v102, v115);
      }
      v9 = v171;
      *(&v248 + v173) = v6 - v116 + v7;
      v10 = v249[v172];
      if ( v10 >= v258[v171] )
      {
        ++v171;
        v172 = v9 + 29;
        v10 = v249[v9 + 29];
      }
      if ( v10 )
      {
        if ( v258[v171] > v10 )
        {
          v11 = *(&v256 + 2 * v171);
          v137 = (*(&v242 + v11) << dword_6FD4098C) + v10 * v181;
          v176 = (*(&v230 + v11) << dword_6FD4098C) + v10 * v183;
          v179 = (*(&v226 + v11) << dword_6FD4098C) + v10 * v185;
          v174 = (*(&v222 + v11) << dword_6FD4098C) + v10 * v187;
          v177 = (*(&v218 + v11) << dword_6FD4098C) + v10 * v189;
          v175 = (*(&v214 + v11) << dword_6FD4098C) + v10 * v191;
          v178 = v10 * v193 + (*(&v210 + v11) << dword_6FD4098C);
        }
      }
      else
      {
        v44 = *(&v256 + 2 * v171);
        v45 = dword_6FD4098C;
        v137 = *(&v242 + v44) << dword_6FD4098C;
        v46 = *(&v230 + v44);
        v123 = v46;
        v176 = v46 << dword_6FD4098C;
        v47 = *(&v226 + v44);
        v126 = v47;
        v179 = v47 << dword_6FD4098C;
        v48 = *(&v222 + v44);
        v129 = v48;
        v174 = v48 << dword_6FD4098C;
        v49 = *(&v218 + v44);
        v132 = v49;
        v177 = v49 << dword_6FD4098C;
        v50 = *(&v214 + v44);
        v142 = v50;
        v175 = v50 << dword_6FD4098C;
        v51 = *(&v210 + v44);
        v145 = v51;
        v178 = v51 << dword_6FD4098C;
        v52 = v257[2 * v171];
        v114 = *(&v238 + v52) - *(&v238 + v44);
        v53 = *(&v242 + v52) - *(&v242 + v44);
        v54 = (unsigned __int64)((signed __int64)v53 << dword_6FD4098C) >> 32;
        v55 = v53 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v54 = v55;
          v55 = 0;
        }
        v181 = sub_6F737040(v55, v54, v114);
        v56 = *(&v230 + v52) - v123;
        v57 = (unsigned __int64)(v56 << v45) >> 32;
        v58 = (_DWORD)v56 << v45;
        if ( v45 & 0x20 )
        {
          v57 = v58;
          v58 = 0;
        }
        v183 = sub_6F737040(v58, v57, v114);
        v59 = *(&v226 + v52) - v126;
        v60 = (unsigned __int64)(v59 << v45) >> 32;
        v61 = (_DWORD)v59 << v45;
        if ( v45 & 0x20 )
        {
          v60 = v61;
          v61 = 0;
        }
        v185 = sub_6F737040(v61, v60, v114);
        v62 = *(&v222 + v52) - v129;
        v63 = (unsigned __int64)(v62 << v45) >> 32;
        v64 = (_DWORD)v62 << v45;
        if ( v45 & 0x20 )
        {
          v63 = v64;
          v64 = 0;
        }
        v187 = sub_6F737040(v64, v63, v114);
        v65 = *(&v218 + v52) - v132;
        v66 = (unsigned __int64)(v65 << v45) >> 32;
        v67 = (_DWORD)v65 << v45;
        if ( v45 & 0x20 )
        {
          v66 = v67;
          v67 = 0;
        }
        v189 = sub_6F737040(v67, v66, v114);
        v68 = *(&v214 + v52) - v142;
        v69 = (unsigned __int64)(v68 << v45) >> 32;
        v70 = (_DWORD)v68 << v45;
        if ( v45 & 0x20 )
        {
          v69 = v70;
          v70 = 0;
        }
        v191 = sub_6F737040(v70, v69, v114);
        v71 = *(&v210 + v52) - v145;
        v72 = (unsigned __int64)((signed __int64)v71 << v45) >> 32;
        v73 = v71 << v45;
        if ( v45 & 0x20 )
        {
          v72 = v73;
          if ( v45 & 0x20 )
            v73 = 0;
        }
        v193 = sub_6F737040(v73, v72, v114);
      }
      v249[v172] = v6 - v116 + v10;
      v12 = v196 - v116;
      if ( v196 - v116 > 0 )
      {
        v117 += v12 * v180;
        v136 += v12 * v182;
        v139 += v12 * v184;
        v134 += v12 * v186;
        v140 += v12 * v188;
        v135 += v12 * v190;
        v138 += v12 * v192;
        v137 += v12 * v181;
        v176 += v12 * v183;
        v179 += v12 * v185;
        v174 += v12 * v187;
        v116 = v196;
        v177 += v12 * v189;
        v175 += v12 * v191;
        v178 += v193 * v12;
      }
      if ( v197 <= v6 )
        v6 = v197;
      v194 = v6 - v116;
      if ( v6 - v116 > 0 )
      {
        v208 = v136;
        v149 = v176 - v136;
        v205 = v137;
        v206 = v117;
        v207 = v139;
        v148 = v179 - v139;
        v204 = v140;
        v144 = v174 - v134;
        v147 = v177 - v140;
        v203 = v134;
        v201 = v135;
        v141 = v175 - v135;
        v113 = v137 - v117;
        v202 = v138;
        v146 = v178 - v138;
        v167 = v6;
        do
        {
          v13 = dword_6FD4098C;
          v14 = (1 << dword_6FD4098C) - 1;
          v15 = v14 + v117;
          v150 = v137 + v14;
          v16 = (unsigned __int64)((signed __int64)v149 << dword_6FD4098C) >> 32;
          v17 = v149 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v16 = v149 << dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v17 = 0;
          v118 = sub_6F737040(v17, v16, v113);
          v18 = (unsigned __int64)((signed __int64)v148 << v13) >> 32;
          v19 = v148 << v13;
          if ( v13 & 0x20 )
            v18 = v148 << v13;
          if ( v13 & 0x20 )
            v19 = 0;
          v121 = sub_6F737040(v19, v18, v113);
          v20 = (unsigned __int64)((signed __int64)v144 << v13) >> 32;
          v21 = v144 << v13;
          if ( v13 & 0x20 )
            v20 = v144 << v13;
          if ( v13 & 0x20 )
            v21 = 0;
          v122 = sub_6F737040(v21, v20, v113);
          v22 = (unsigned __int64)((signed __int64)v147 << v13) >> 32;
          v23 = v147 << v13;
          if ( v13 & 0x20 )
            v22 = v147 << v13;
          if ( v13 & 0x20 )
            v23 = 0;
          v125 = sub_6F737040(v23, v22, v113);
          v24 = (unsigned __int64)((signed __int64)v141 << v13) >> 32;
          v25 = v141 << v13;
          if ( v13 & 0x20 )
            v24 = v141 << v13;
          if ( v13 & 0x20 )
            v25 = 0;
          v128 = sub_6F737040(v25, v24, v113);
          v26 = (unsigned __int64)((signed __int64)v146 << v13) >> 32;
          v27 = v146 << v13;
          if ( v13 & 0x20 )
            v26 = v146 << v13;
          if ( v13 & 0x20 )
            v27 = 0;
          v28 = v15 >> v13;
          v131 = sub_6F737040(v27, v26, v113);
          v29 = (v28 << v13) - v117;
          v30 = v29 * (signed __int64)v118 >> (v13 & 0x1F);
          if ( v13 & 0x20 )
            LODWORD(v30) = (unsigned __int64)(v29 * (signed __int64)v118 >> (v13 & 0x1F)) >> 32;
          v153 = v30 + v136;
          v31 = v29 * (signed __int64)v121 >> (v13 & 0x1F);
          if ( v13 & 0x20 )
            LODWORD(v31) = (unsigned __int64)(v29 * (signed __int64)v121 >> (v13 & 0x1F)) >> 32;
          v156 = v31 + v139;
          v32 = v29 * (signed __int64)v122 >> (v13 & 0x1F);
          if ( v13 & 0x20 )
            LODWORD(v32) = (unsigned __int64)(v29 * (signed __int64)v122 >> (v13 & 0x1F)) >> 32;
          v159 = v32 + v134;
          v33 = v29 * (signed __int64)v125 >> (v13 & 0x1F);
          if ( v13 & 0x20 )
            LODWORD(v33) = (unsigned __int64)(v29 * (signed __int64)v125 >> (v13 & 0x1F)) >> 32;
          v162 = v33 + v140;
          v34 = v29 * (signed __int64)v128 >> (v13 & 0x1F);
          if ( v13 & 0x20 )
            LODWORD(v34) = (unsigned __int64)(v29 * (signed __int64)v128 >> (v13 & 0x1F)) >> 32;
          v35 = v34 + v135;
          v36 = v131 * (signed __int64)((v28 << v13) - v117) >> (v13 & 0x1F);
          if ( v13 & 0x20 )
            LODWORD(v36) = (unsigned __int64)(v131 * (signed __int64)((v28 << v13) - v117) >> (v13 & 0x1F)) >> 32;
          v37 = v164 - v28;
          v38 = v138 + v36;
          v39 = v150 >> v13;
          if ( v164 - v28 <= 0 )
          {
            v43 = v153;
            v154 = v35;
            v169 = v43;
            v165 = v156;
            v157 = v159;
            v151 = v162;
            v40 = v38;
          }
          else
          {
            v169 = v153 + v37 * v118;
            v165 = v156 + v37 * v121;
            v157 = v159 + v37 * v122;
            v151 = v162 + v37 * v125;
            v28 = v164;
            v154 = v37 * v128 + v35;
            v40 = v38 + v131 * v37;
          }
          v41 = v39;
          if ( v168 <= v39 )
            v41 = v168;
          v42 = v41 - v28;
          if ( v42 > 0 && sub_6F71F0C0(v116) )
          {
            if ( v195 % v199 == v200 )
            {
              v209 = v42 + v28;
              v104 = v28 + dword_6FBB52F4 * (v116 << 10);
              v160 = 4 * v28;
              v105 = 2 * v28;
              v163 = dword_6FBB505C + 4 * v104 - 4 * v28;
              v198 = dword_6FBB5068 + 2 * v104 - 2 * v28;
              if ( ((_BYTE)v209 + ~(_BYTE)v28) & 1 )
              {
                v106 = v28++;
                dword_6FBB5058(
                  v198 + v105,
                  v163 + v160,
                  v106,
                  v116,
                  (unsigned __int8)(v165 / v169),
                  (unsigned __int8)(v157 / v169),
                  (unsigned __int8)(v151 / v169),
                  v154 / v169 << v13,
                  v40 / v169 << v13);
                v165 += v121;
                v157 += v122;
                v40 += v131;
                v154 += v128;
                v107 = dword_6FD4098C;
                v108 = v118 + v169;
                v151 += v125;
              }
              else
              {
                v107 = v13;
                v108 = v169;
              }
              while ( 1 )
              {
                v110 = v28 + 1;
                dword_6FBB5058(
                  v198 + 2 * v28,
                  v163 + 4 * v28,
                  v28,
                  v116,
                  (unsigned __int8)(v165 / v108),
                  (unsigned __int8)(v157 / v108),
                  (unsigned __int8)(v151 / v108),
                  v154 / v108 << v107,
                  v40 / v108 << v107);
                v111 = v118 + v108;
                v112 = v131 + v40;
                v161 = v121 + v165;
                v158 = v122 + v157;
                v152 = v125 + v151;
                v155 = v128 + v154;
                if ( v28 + 1 == v209 )
                  break;
                v109 = v28 + 1;
                v28 += 2;
                dword_6FBB5058(
                  v198 + 2 * v110,
                  v163 + 4 * v110,
                  v109,
                  v116,
                  (unsigned __int8)(v161 / v111),
                  (unsigned __int8)(v158 / v111),
                  (unsigned __int8)(v152 / v111),
                  v155 / v111 << dword_6FD4098C,
                  v112 / v111 << dword_6FD4098C);
                v151 = v125 + v152;
                v108 = v118 + v111;
                v40 = v131 + v112;
                v165 = v121 + v161;
                v154 = v128 + v155;
                v157 = v122 + v158;
                v107 = dword_6FD4098C;
              }
            }
            ++v195;
          }
          ++v116;
          v117 += v180;
          v137 += v181;
          v149 += v183 - v182;
          v113 += v181 - v180;
          v148 += v185 - v184;
          v144 += v187 - v186;
          v147 += v189 - v188;
          v141 += v191 - v190;
          v146 += v193 - v192;
          v136 += v182;
          v139 += v184;
          v134 += v186;
          v140 += v188;
          v135 += v190;
          v138 += v192;
        }
        while ( v116 != v167 );
        v117 = (v194 - 1) * v180 + v180 + v206;
        v136 = (v194 - 1) * v182 + v182 + v208;
        v139 = (v194 - 1) * v184 + v184 + v207;
        v134 = (v194 - 1) * v186 + v186 + v203;
        v135 = (v194 - 1) * v190 + v190 + v201;
        v140 = (v194 - 1) * v188 + v188 + v204;
        v137 = (v194 - 1) * v181 + v181 + v205;
        v138 = (v194 - 1) * v192 + v192 + v202;
        v176 += (v194 - 1) * v183 + v183;
        v179 += (v194 - 1) * v185 + v185;
        v174 += (v194 - 1) * v187 + v187;
        v177 += (v194 - 1) * v189 + v189;
        v175 += (v194 - 1) * v191 + v191;
        v178 += v193 + v193 * (v194 - 1);
        v120 = v265;
      }
      result = v120;
    }
    while ( v166 < v120 );
  }
  return result;
}
