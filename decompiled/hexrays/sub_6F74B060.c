int __usercall sub_6F74B060@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // ST30_4@1
  int v3; // edx@1
  _DWORD *v4; // ebp@1
  int v5; // ebx@7
  int v6; // ecx@7
  int v7; // eax@7
  int v8; // edx@7
  int v9; // edi@7
  int v10; // ebp@7
  int v11; // esi@8
  int v12; // ecx@8
  int v13; // edx@8
  int v14; // ecx@8
  int v15; // edx@8
  int v16; // ecx@8
  int v17; // edx@8
  int v18; // esi@8
  int v19; // ecx@10
  int v20; // ecx@10
  int v21; // ecx@10
  int v22; // ecx@10
  int v23; // ecx@10
  int v24; // ebx@10
  int v25; // esi@11
  int v26; // eax@12
  int v27; // eax@12
  int v28; // eax@12
  int v29; // eax@12
  int v30; // eax@12
  int v31; // eax@12
  int v32; // esi@13
  int v33; // ecx@13
  int v34; // edx@13
  int v35; // edi@13
  signed int v36; // eax@13
  char v37; // bp@14
  int v38; // ebx@14
  int v39; // edi@15
  int v40; // edx@15
  int v41; // eax@15
  int v42; // esi@15
  int v43; // edx@19
  int v44; // eax@19
  int v45; // edx@23
  int v46; // eax@23
  int v47; // edx@27
  int v48; // eax@27
  int v49; // edx@31
  int v50; // eax@31
  int v51; // edx@35
  int v52; // eax@35
  int v53; // edi@39
  int v54; // edx@39
  int v55; // eax@39
  int v56; // eax@41
  int v57; // esi@42
  int v58; // ecx@42
  int result; // eax@42
  int v60; // ebx@43
  int v61; // ebx@45
  int v62; // ebx@47
  int v63; // edx@54
  signed int v64; // ebx@54
  int v65; // edx@54
  int v66; // eax@54
  int v67; // esi@58
  int v68; // edi@58
  int v69; // edi@62
  int v70; // esi@62
  int v71; // edi@66
  int v72; // esi@66
  int v73; // edi@70
  int v74; // esi@70
  int v75; // edi@74
  int v76; // esi@74
  signed int v77; // edi@78
  int v78; // esi@78
  signed __int64 v79; // rax@78
  signed __int64 v80; // rax@80
  signed __int64 v81; // rax@82
  signed __int64 v82; // rax@84
  signed __int64 v83; // rax@86
  signed int v84; // ebx@88
  signed __int64 v85; // rax@88
  int v86; // esi@90
  signed int v87; // eax@90
  int v88; // edx@90
  signed int v89; // esi@91
  int v90; // edi@92
  int v91; // edi@94
  int v92; // edx@100
  int v93; // eax@100
  int v94; // edx@102
  int v95; // eax@102
  int v96; // edx@104
  int v97; // eax@104
  int v98; // edx@106
  int v99; // eax@106
  int v100; // edx@108
  int v101; // eax@108
  int v102; // edx@110
  int v103; // eax@110
  int v104; // edx@112
  int v105; // eax@112
  int v106; // eax@114
  int v107; // esi@114
  int v108; // edi@114
  int v109; // esi@114
  int v110; // ebx@114
  int v111; // esi@118
  int v112; // eax@118
  int v113; // esi@122
  int v114; // edx@122
  int v115; // esi@126
  int v116; // edx@126
  int v117; // esi@130
  int v118; // edx@130
  int v119; // esi@134
  int v120; // edx@134
  int v121; // esi@138
  int v122; // edx@138
  int v123; // edi@142
  int v124; // eax@144
  char v125; // cl@145
  int v126; // ebx@145
  signed int v127; // ebp@145
  int v128; // ST08_4@146
  int v129; // edi@147
  signed int v130; // ebp@147
  signed int v131; // esi@147
  int v132; // eax@150
  int v133; // eax@150
  int v134; // [sp+30h] [bp-1E0h]@7
  int v135; // [sp+30h] [bp-1E0h]@42
  int v136; // [sp+30h] [bp-1E0h]@51
  int v137; // [sp+30h] [bp-1E0h]@102
  int v138; // [sp+34h] [bp-1DCh]@7
  signed int v139; // [sp+34h] [bp-1DCh]@13
  int v140; // [sp+38h] [bp-1D8h]@7
  int v141; // [sp+38h] [bp-1D8h]@14
  int v142; // [sp+3Ch] [bp-1D4h]@7
  int v143; // [sp+3Ch] [bp-1D4h]@14
  int v144; // [sp+40h] [bp-1D0h]@14
  int v145; // [sp+44h] [bp-1CCh]@14
  int v146; // [sp+48h] [bp-1C8h]@14
  int v147; // [sp+4Ch] [bp-1C4h]@14
  int v148; // [sp+50h] [bp-1C0h]@7
  int v149; // [sp+50h] [bp-1C0h]@19
  int v150; // [sp+50h] [bp-1C0h]@58
  int v151; // [sp+58h] [bp-1B8h]@13
  int v152; // [sp+58h] [bp-1B8h]@62
  int v153; // [sp+58h] [bp-1B8h]@118
  int v154; // [sp+60h] [bp-1B0h]@14
  int v155; // [sp+64h] [bp-1ACh]@23
  int v156; // [sp+64h] [bp-1ACh]@42
  int v157; // [sp+64h] [bp-1ACh]@66
  int v158; // [sp+64h] [bp-1ACh]@104
  int v159; // [sp+68h] [bp-1A8h]@27
  int v160; // [sp+68h] [bp-1A8h]@42
  int v161; // [sp+68h] [bp-1A8h]@70
  int v162; // [sp+68h] [bp-1A8h]@106
  int v163; // [sp+6Ch] [bp-1A4h]@31
  int v164; // [sp+6Ch] [bp-1A4h]@42
  int v165; // [sp+6Ch] [bp-1A4h]@74
  int v166; // [sp+6Ch] [bp-1A4h]@108
  int v167; // [sp+70h] [bp-1A0h]@35
  int v168; // [sp+70h] [bp-1A0h]@78
  int v169; // [sp+70h] [bp-1A0h]@110
  int v170; // [sp+78h] [bp-198h]@15
  int v171; // [sp+78h] [bp-198h]@78
  int v172; // [sp+78h] [bp-198h]@112
  signed int v173; // [sp+78h] [bp-198h]@147
  int v174; // [sp+7Ch] [bp-194h]@42
  int v175; // [sp+7Ch] [bp-194h]@114
  int v176; // [sp+80h] [bp-190h]@15
  int v177; // [sp+80h] [bp-190h]@51
  int v178; // [sp+80h] [bp-190h]@122
  int v179; // [sp+84h] [bp-18Ch]@15
  int v180; // [sp+84h] [bp-18Ch]@51
  int v181; // [sp+84h] [bp-18Ch]@126
  int v182; // [sp+88h] [bp-188h]@15
  int v183; // [sp+88h] [bp-188h]@51
  int v184; // [sp+88h] [bp-188h]@130
  int v185; // [sp+8Ch] [bp-184h]@15
  int v186; // [sp+8Ch] [bp-184h]@51
  int v187; // [sp+8Ch] [bp-184h]@134
  int v188; // [sp+90h] [bp-180h]@15
  int v189; // [sp+90h] [bp-180h]@51
  int v190; // [sp+90h] [bp-180h]@138
  int v191; // [sp+94h] [bp-17Ch]@15
  int v192; // [sp+94h] [bp-17Ch]@51
  int v193; // [sp+98h] [bp-178h]@41
  signed int v194; // [sp+98h] [bp-178h]@54
  signed int v195; // [sp+98h] [bp-178h]@91
  signed int v196; // [sp+98h] [bp-178h]@147
  int v197; // [sp+9Ch] [bp-174h]@41
  int v198; // [sp+A0h] [bp-170h]@41
  signed int v199; // [sp+A0h] [bp-170h]@80
  signed int v200; // [sp+A0h] [bp-170h]@91
  signed int v201; // [sp+A0h] [bp-170h]@147
  int v202; // [sp+A8h] [bp-168h]@41
  signed int v203; // [sp+A8h] [bp-168h]@82
  signed int v204; // [sp+A8h] [bp-168h]@91
  signed int v205; // [sp+A8h] [bp-168h]@147
  signed int v206; // [sp+B0h] [bp-160h]@84
  int v207; // [sp+B0h] [bp-160h]@144
  signed int v208; // [sp+B8h] [bp-158h]@86
  int v209; // [sp+B8h] [bp-158h]@144
  int v210; // [sp+BCh] [bp-154h]@1
  int v211; // [sp+C0h] [bp-150h]@7
  int v212; // [sp+C4h] [bp-14Ch]@7
  signed int v213; // [sp+C8h] [bp-148h]@91
  int v214; // [sp+CCh] [bp-144h]@7
  int v215; // [sp+D0h] [bp-140h]@7
  int v216; // [sp+D4h] [bp-13Ch]@7
  int v217; // [sp+D8h] [bp-138h]@7
  int v218; // [sp+DCh] [bp-134h]@7
  int v219; // [sp+F8h] [bp-118h]@1
  int v220; // [sp+FCh] [bp-114h]@51
  signed int v221; // [sp+124h] [bp-ECh]@91
  int v222; // [sp+128h] [bp-E8h]@7
  int v223; // [sp+12Ch] [bp-E4h]@7
  int v224; // [sp+130h] [bp-E0h]@7
  int v225; // [sp+134h] [bp-DCh]@7
  int v226; // [sp+138h] [bp-D8h]@0
  int v227; // [sp+140h] [bp-D0h]@0
  int v228; // [sp+148h] [bp-C8h]@0
  int v229; // [sp+150h] [bp-C0h]@0
  int v230; // [sp+158h] [bp-B8h]@0
  int v231; // [sp+160h] [bp-B0h]@0
  int v232; // [sp+168h] [bp-A8h]@0
  int v233; // [sp+170h] [bp-A0h]@0
  int v234; // [sp+178h] [bp-98h]@0
  int v235; // [sp+180h] [bp-90h]@0
  int v236; // [sp+188h] [bp-88h]@0
  int v237; // [sp+190h] [bp-80h]@0
  int v238; // [sp+198h] [bp-78h]@0
  int v239; // [sp+1A0h] [bp-70h]@0
  int v240; // [sp+1A8h] [bp-68h]@7
  int v241; // [sp+1ACh] [bp-64h]@7
  int v242; // [sp+1B0h] [bp-60h]@7
  int v243; // [sp+1B4h] [bp-5Ch]@7
  int v244; // [sp+1B8h] [bp-58h]@7
  int v245; // [sp+1BCh] [bp-54h]@7
  signed int v246; // [sp+1C0h] [bp-50h]@13
  signed int v247; // [sp+1C4h] [bp-4Ch]@13
  int v248; // [sp+1C8h] [bp-48h]@1
  int v249; // [sp+1CCh] [bp-44h]@1
  int v250; // [sp+1D0h] [bp-40h]@13
  int v251; // [sp+1D4h] [bp-3Ch]@7
  __int64 v252; // [sp+1D8h] [bp-38h]@13
  signed int v253; // [sp+1E0h] [bp-30h]@1
  int v254; // [sp+1E4h] [bp-2Ch]@1
  int v255; // [sp+1E8h] [bp-28h]@144
  int v256; // [sp+1FCh] [bp-14h]@1
  int v257; // [sp+200h] [bp-10h]@1
  int v258; // [sp+204h] [bp-Ch]@1
  int v259; // [sp+208h] [bp-8h]@1
  int v260; // [sp+20Ch] [bp-4h]@1
  int v261; // [sp+210h] [bp+0h]@1
  int v262; // [sp+214h] [bp+4h]@1
  int v263; // [sp+218h] [bp+8h]@1
  int v264; // [sp+21Ch] [bp+Ch]@1

  v253 = a1;
  v254 = a2;
  v248 = dword_6FBB52F8 * dword_6FBBDB9C;
  v210 = dword_6FBB52F4 * dword_6FBBDB98;
  v219 = dword_6FBB52F4 * dword_6FBBDBA0;
  v249 = dword_6FBB52F8 * dword_6FBBDBA4;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v263 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5) * dword_6FBB52F4;
  v262 = dword_6FBB52F4 * v2;
  v264 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5) * dword_6FBB52F4;
  v260 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5) * dword_6FBB52F8;
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v259 = v3 * dword_6FBB52F8;
  v4 = (_DWORD *)(32 * (unsigned __int16)word_70041E8A);
  LOWORD(v4) = (signed __int16)v4 >> 5;
  v261 = (signed __int16)v4 * dword_6FBB52F8;
  sub_6F732840(
    v2,
    v3,
    (signed __int16)(32 * word_70041E84) >> 5,
    (signed __int16)(32 * word_70041E86) >> 5,
    (signed __int16)(32 * word_70041E88) >> 5,
    (__int16)v4,
    &v262,
    &v259,
    &v256,
    &v263,
    &v260,
    &v257,
    &v264,
    v4,
    &v258);
  if ( !v256 )
    v256 = 1;
  if ( !v257 )
    v257 = 1;
  if ( !v258 )
    v258 = 1;
  v211 = 0xFFFF / v256;
  v142 = 0xFFFF / v257;
  v212 = 0xFFFF / v257;
  v240 = 0xFFFF / v256 * (unsigned __int8)dword_70041E70;
  v218 = 0xFFFF / v257 * (unsigned __int8)dword_70041E74;
  v5 = 0xFFFF / v258;
  v251 = 0xFFFF / v258;
  v241 = 0xFFFF / v258 * (unsigned __int8)dword_70041E78;
  v225 = 0xFFFF / v256 * BYTE1(dword_70041E70);
  v242 = 0xFFFF / v258 * BYTE1(dword_70041E78);
  v217 = 0xFFFF / v257 * BYTE1(dword_70041E74);
  v224 = 0xFFFF / v256 * BYTE2(dword_70041E70);
  v216 = 0xFFFF / v257 * BYTE2(dword_70041E74);
  v243 = 0xFFFF / v258 * BYTE2(dword_70041E78);
  v223 = (unsigned __int8)byte_6FBB5050 * (0xFFFF / v256);
  v215 = (unsigned __int8)byte_6FBB5051 * (0xFFFF / v257);
  v244 = 0xFFFF / v258 * (unsigned __int8)byte_6FBB5052;
  v222 = (unsigned __int8)byte_6FBB5054 * (0xFFFF / v256);
  v214 = (unsigned __int8)byte_6FBB5055 * (0xFFFF / v257);
  v245 = 0xFFFF / v258 * (unsigned __int8)byte_6FBB5056;
  nullsub_3();
  v134 = dword_6FBB52F4 * dword_6FBBDB90 + v263;
  v6 = dword_6FBB52F4 * dword_6FBBDB90 + v262;
  v7 = v260;
  v263 += dword_6FBB52F4 * dword_6FBBDB90;
  v8 = v259;
  v140 = dword_6FBB52F4 * dword_6FBBDB90 + v264;
  v264 += dword_6FBB52F4 * dword_6FBBDB90;
  v148 = dword_6FBB52F8 * dword_6FBBDB94 + v259;
  v259 += dword_6FBB52F8 * dword_6FBBDB94;
  v9 = dword_6FBB52F8 * dword_6FBBDB94 + v261;
  v10 = dword_6FBB52F8 * dword_6FBBDB94 + v260;
  v138 = dword_6FBB52F4 * dword_6FBBDB90 + v262;
  v262 += dword_6FBB52F4 * dword_6FBBDB90;
  v260 += dword_6FBB52F8 * dword_6FBBDB94;
  v261 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v8 > v7 )
  {
    v11 = v134;
    v134 = v6;
    v263 = v6;
    v262 = v11;
    v12 = v211;
    v138 = v11;
    v260 = v148;
    v13 = v218;
    v211 = v142;
    v212 = v12;
    v14 = v225;
    v218 = v240;
    v240 = v13;
    v15 = v216;
    v225 = v217;
    v217 = v14;
    v16 = v223;
    v216 = v224;
    v224 = v15;
    v17 = v214;
    v223 = v215;
    v18 = v10;
    v259 = v10;
    v215 = v16;
    v214 = v222;
    v222 = v17;
    v10 = v148;
    v148 = v18;
  }
  if ( v9 < v10 )
  {
    v260 = v9;
    v19 = v214;
    v261 = v10;
    v263 = v140;
    v214 = v245;
    v245 = v19;
    v20 = v215;
    v215 = v244;
    v244 = v20;
    v21 = v216;
    v216 = v243;
    v243 = v21;
    v22 = v217;
    v217 = v242;
    v242 = v22;
    v23 = v218;
    v218 = v241;
    v264 = v134;
    v241 = v23;
    v251 = v212;
    v140 = v134;
    v134 = v263;
    v212 = v5;
    v24 = v10;
    v10 = v9;
    v9 = v24;
  }
  v25 = v148;
  if ( v148 > v10 )
  {
    v259 = v10;
    v26 = v214;
    v260 = v148;
    v262 = v134;
    v214 = v222;
    v222 = v26;
    v27 = v215;
    v215 = v223;
    v223 = v27;
    v28 = v216;
    v216 = v224;
    v224 = v28;
    v29 = v217;
    v217 = v225;
    v225 = v29;
    v30 = v218;
    v218 = v240;
    v240 = v30;
    v31 = v212;
    v263 = v138;
    v212 = v211;
    v211 = v31;
    v134 = v138;
    v138 = v262;
    v148 = v10;
    v10 = v25;
  }
  v32 = v138;
  v33 = v9 - v10;
  v246 = 2;
  v139 = v10;
  v34 = (v9 - v148) * (v140 - v134);
  v151 = v9;
  v35 = v140;
  v247 = 0;
  v36 = 2;
  v250 = v34 - v33 * (v140 - v32);
  v252 = v251 - v212;
  while ( 1 )
  {
    v37 = dword_6FD4098C;
    v141 = v32 << dword_6FD4098C;
    v143 = v211 << dword_6FD4098C;
    v144 = v240 << dword_6FD4098C;
    v145 = v225 << dword_6FD4098C;
    v146 = v224 << dword_6FD4098C;
    v147 = v223 << dword_6FD4098C;
    v154 = v222 << dword_6FD4098C;
    v38 = v139 - v148;
    if ( v36 == 2 )
    {
      v92 = (unsigned __int64)((signed __int64)(v134 - v32) << dword_6FD4098C) >> 32;
      v93 = (v134 - v32) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
      {
        v92 = (v134 - v32) << dword_6FD4098C;
        v93 = 0;
      }
      v137 = sub_6F737040(v93, v92, v139 - v148);
      v94 = (unsigned __int64)((signed __int64)(v212 - v211) << v37) >> 32;
      v95 = (v212 - v211) << v37;
      if ( v37 & 0x20 )
      {
        v94 = (v212 - v211) << v37;
        v95 = 0;
      }
      v158 = sub_6F737040(v95, v94, v38);
      v96 = (unsigned __int64)((signed __int64)(v218 - v240) << v37) >> 32;
      v97 = (v218 - v240) << v37;
      if ( v37 & 0x20 )
      {
        v96 = (v218 - v240) << v37;
        v97 = 0;
      }
      v162 = sub_6F737040(v97, v96, v38);
      v98 = (unsigned __int64)((signed __int64)(v217 - v225) << v37) >> 32;
      v99 = (v217 - v225) << v37;
      if ( v37 & 0x20 )
      {
        v98 = (v217 - v225) << v37;
        v99 = 0;
      }
      v166 = sub_6F737040(v99, v98, v38);
      v100 = (unsigned __int64)((signed __int64)(v216 - v224) << v37) >> 32;
      v101 = (v216 - v224) << v37;
      if ( v37 & 0x20 )
      {
        v100 = (v216 - v224) << v37;
        v101 = 0;
      }
      v169 = sub_6F737040(v101, v100, v38);
      v102 = (unsigned __int64)((signed __int64)(v215 - v223) << v37) >> 32;
      v103 = (v215 - v223) << v37;
      if ( v37 & 0x20 )
      {
        v102 = (v215 - v223) << v37;
        v103 = 0;
      }
      v172 = sub_6F737040(v103, v102, v38);
      v104 = (unsigned __int64)((signed __int64)(v214 - v222) << v37) >> 32;
      v105 = (v214 - v222) << v37;
      if ( v37 & 0x20 )
      {
        v104 = (v214 - v222) << v37;
        v105 = 0;
      }
      v106 = sub_6F737040(v105, v104, v38);
      v107 = v35 - v32;
      v108 = (unsigned __int64)((signed __int64)v107 << v37) >> 32;
      v109 = v107 << v37;
      v110 = v151 - v148;
      v175 = v106;
      if ( v37 & 0x20 )
        v108 = v109;
      if ( v37 & 0x20 )
        v109 = 0;
      v153 = sub_6F737040(v109, v108, v151 - v148);
      v111 = (unsigned __int64)((signed __int64)(v251 - v211) << v37) >> 32;
      v112 = (v251 - v211) << v37;
      if ( v37 & 0x20 )
        v111 = (v251 - v211) << v37;
      if ( v37 & 0x20 )
        v112 = 0;
      v178 = sub_6F737040(v112, v111, v110);
      v113 = (v241 - v240) << v37;
      v114 = (unsigned __int64)((signed __int64)(v241 - v240) << v37) >> 32;
      if ( v37 & 0x20 )
        v114 = (v241 - v240) << v37;
      if ( v37 & 0x20 )
        v113 = 0;
      v181 = sub_6F737040(v113, v114, v110);
      v115 = (v242 - v225) << v37;
      v116 = (unsigned __int64)((signed __int64)(v242 - v225) << v37) >> 32;
      if ( v37 & 0x20 )
        v116 = (v242 - v225) << v37;
      if ( v37 & 0x20 )
        v115 = 0;
      v184 = sub_6F737040(v115, v116, v110);
      v117 = (v243 - v224) << v37;
      v118 = (unsigned __int64)((signed __int64)(v243 - v224) << v37) >> 32;
      if ( v37 & 0x20 )
        v118 = (v243 - v224) << v37;
      if ( v37 & 0x20 )
        v117 = 0;
      v187 = sub_6F737040(v117, v118, v110);
      v119 = (v244 - v223) << v37;
      v120 = (unsigned __int64)((signed __int64)(v244 - v223) << v37) >> 32;
      if ( v37 & 0x20 )
        v120 = (v244 - v223) << v37;
      if ( v37 & 0x20 )
        v119 = 0;
      v190 = sub_6F737040(v119, v120, v110);
      v121 = (v245 - v222) << v37;
      v122 = (unsigned __int64)((signed __int64)(v245 - v222) << v37) >> 32;
      if ( v37 & 0x20 )
        v122 = (v245 - v222) << v37;
      if ( v37 & 0x20 )
        v121 = 0;
      v226 = v137;
      v228 = v158;
      v230 = v162;
      v232 = v166;
      v234 = v169;
      v236 = v172;
      v238 = v175;
      v227 = v153;
      v229 = v178;
      v231 = v181;
      v233 = v184;
      v235 = v187;
      v123 = sub_6F737040(v121, v122, v110);
      v239 = v123;
      v237 = v190;
      if ( v250 < 0 )
      {
        v238 = v123;
        v239 = v175;
        v236 = v190;
        v164 = v154;
        v234 = v187;
        v235 = v169;
        v132 = v232;
        v237 = v172;
        v58 = v147;
        v160 = v146;
        v232 = v184;
        v233 = v132;
        v231 = v230;
        v230 = v181;
        v229 = v158;
        v156 = v145;
        v228 = v178;
        v133 = v137;
        v135 = v144;
        v226 = v153;
        v57 = v143;
        v227 = v133;
        result = v148;
        v174 = v141;
        v151 = v139;
        v139 = v148;
      }
      else
      {
        result = v141;
        v58 = v147;
        v164 = v154;
        v160 = v146;
        v135 = v144;
        v156 = v145;
        v57 = v143;
        v174 = v141;
        v151 = v139;
        v139 = v148;
      }
    }
    else
    {
      v39 = v35 - v134;
      v176 = v211 << dword_6FD4098C;
      v179 = v240 << dword_6FD4098C;
      v170 = v32 << dword_6FD4098C;
      v188 = v223 << dword_6FD4098C;
      v182 = v225 << dword_6FD4098C;
      v191 = v222 << dword_6FD4098C;
      v40 = (unsigned __int64)((signed __int64)v39 << dword_6FD4098C) >> 32;
      v41 = v39 << dword_6FD4098C;
      v185 = v224 << dword_6FD4098C;
      v42 = v151 - v139;
      if ( dword_6FD4098C & 0x20 )
        v40 = v39 << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v41 = 0;
      v149 = sub_6F737040(v41, v40, v151 - v139);
      v43 = (unsigned __int64)(v252 << v37) >> 32;
      v44 = (_DWORD)v252 << v37;
      if ( v37 & 0x20 )
        v43 = (_DWORD)v252 << v37;
      if ( v37 & 0x20 )
        v44 = 0;
      v155 = sub_6F737040(v44, v43, v42);
      v45 = (unsigned __int64)((signed __int64)(v241 - v218) << v37) >> 32;
      v46 = (v241 - v218) << v37;
      if ( v37 & 0x20 )
        v45 = (v241 - v218) << v37;
      if ( v37 & 0x20 )
        v46 = 0;
      v159 = sub_6F737040(v46, v45, v42);
      v47 = (unsigned __int64)((signed __int64)(v242 - v217) << v37) >> 32;
      v48 = (v242 - v217) << v37;
      if ( v37 & 0x20 )
        v47 = (v242 - v217) << v37;
      if ( v37 & 0x20 )
        v48 = 0;
      v163 = sub_6F737040(v48, v47, v42);
      v49 = (unsigned __int64)((signed __int64)(v243 - v216) << v37) >> 32;
      v50 = (v243 - v216) << v37;
      if ( v37 & 0x20 )
        v49 = (v243 - v216) << v37;
      if ( v37 & 0x20 )
        v50 = 0;
      v167 = sub_6F737040(v50, v49, v42);
      v51 = (unsigned __int64)((signed __int64)(v244 - v215) << v37) >> 32;
      v52 = (v244 - v215) << v37;
      if ( v37 & 0x20 )
        v51 = (v244 - v215) << v37;
      if ( v37 & 0x20 )
        v52 = 0;
      v53 = sub_6F737040(v52, v51, v42);
      v54 = (unsigned __int64)((signed __int64)(v245 - v214) << v37) >> 32;
      v55 = (v245 - v214) << v37;
      if ( v37 & 0x20 )
      {
        v54 = (v245 - v214) << v37;
        v55 = 0;
      }
      v141 = v134 << v37;
      v143 = v212 << v37;
      v144 = v218 << v37;
      v145 = v217 << v37;
      v146 = v216 << v37;
      v147 = v215 << v37;
      v154 = v214 << v37;
      v193 = v155;
      v197 = v155 >> 31;
      v198 = v159;
      v202 = v163;
      v56 = sub_6F737040(v55, v54, v42);
      if ( v250 < 0 )
      {
        v239 = v56;
        v164 = v214 << v37;
        v154 = v238 * v38 + v191;
        v237 = v53;
        v235 = v167;
        v58 = v215 << v37;
        v147 = v38 * v236 + v188;
        v160 = v216 << v37;
        v146 = v38 * v234 + v185;
        v156 = v217 << v37;
        v145 = v38 * v232 + v182;
        v233 = v202;
        v135 = v218 << v37;
        v144 = v179 + v38 * v230;
        v231 = v198;
        v227 = v149;
        v57 = v212 << v37;
        v229 = v193;
        v143 = v176 + v38 * v228;
        result = v141;
        v174 = v141;
        v141 = v38 * v226 + v170;
      }
      else
      {
        v238 = v56;
        v174 = v170 + v38 * v227;
        v57 = v38 * v229 + v176;
        v135 = v179 + v38 * v231;
        v156 = v182 + v38 * v233;
        v160 = v185 + v38 * v235;
        v164 = v191 + v239 * v38;
        v234 = v167;
        v58 = v188 + v38 * v237;
        v236 = v53;
        v232 = v202;
        v230 = v198;
        result = v197;
        v228 = v193;
        v226 = v149;
      }
    }
    v60 = v248 - v139;
    if ( v248 - v139 > 0 )
    {
      v141 += v60 * v226;
      v143 += v60 * v228;
      v144 += v60 * v230;
      v145 += v60 * v232;
      v146 += v60 * v234;
      v147 += v60 * v236;
      v154 += v60 * v238;
      v174 += v60 * v227;
      v135 += v60 * v231;
      v57 += v60 * v229;
      result = v60 * v235;
      v156 += v60 * v233;
      v160 += v60 * v235;
      v139 = v248;
      v164 += v239 * v60;
      v58 += v60 * v237;
    }
    v61 = v151;
    if ( v151 > v249 )
      v61 = v249;
    v62 = v61 - v139;
    if ( v62 > 0 )
    {
      v192 = v57 - v143;
      v189 = v135 - v144;
      v180 = v58 - v147;
      v136 = v174 - v141;
      v186 = v156 - v145;
      v183 = v160 - v146;
      v220 = v139 + v62;
      v177 = v164 - v154;
      while ( 1 )
      {
        v63 = (1 << v37) - 1;
        v64 = v141 + v63;
        v194 = v174 + v63;
        v65 = (unsigned __int64)((signed __int64)v192 << v37) >> 32;
        v66 = v192 << v37;
        if ( v37 & 0x20 )
          v65 = v192 << v37;
        if ( v37 & 0x20 )
          v66 = 0;
        v150 = sub_6F737040(v66, v65, v136);
        v67 = v189 << v37;
        v68 = (unsigned __int64)((signed __int64)v189 << v37) >> 32;
        if ( v37 & 0x20 )
          v68 = v189 << v37;
        if ( v37 & 0x20 )
          v67 = 0;
        v152 = sub_6F737040(v67, v68, v136);
        v69 = (unsigned __int64)((signed __int64)v186 << v37) >> 32;
        v70 = v186 << v37;
        if ( v37 & 0x20 )
          v69 = v186 << v37;
        if ( v37 & 0x20 )
          v70 = 0;
        v157 = sub_6F737040(v70, v69, v136);
        v71 = (unsigned __int64)((signed __int64)v183 << v37) >> 32;
        v72 = v183 << v37;
        if ( v37 & 0x20 )
          v71 = v183 << v37;
        if ( v37 & 0x20 )
          v72 = 0;
        v161 = sub_6F737040(v72, v71, v136);
        v73 = (unsigned __int64)((signed __int64)v180 << v37) >> 32;
        v74 = v180 << v37;
        if ( v37 & 0x20 )
          v73 = v180 << v37;
        if ( v37 & 0x20 )
          v74 = 0;
        v165 = sub_6F737040(v74, v73, v136);
        v75 = (unsigned __int64)((signed __int64)v177 << v37) >> 32;
        v76 = v177 << v37;
        if ( v37 & 0x20 )
          v75 = v177 << v37;
        if ( v37 & 0x20 )
          v76 = 0;
        v168 = sub_6F737040(v76, v75, v136);
        v77 = v64 >> v37;
        v171 = v64 >> v37;
        v78 = (v64 >> v37 << v37) - v141;
        v79 = v78 * (signed __int64)v150 >> (v37 & 0x1F);
        if ( v37 & 0x20 )
          LODWORD(v79) = (unsigned __int64)(v78 * (signed __int64)v150 >> (v37 & 0x1F)) >> 32;
        v199 = v79 + v143;
        v80 = v78 * (signed __int64)v152 >> (v37 & 0x1F);
        if ( v37 & 0x20 )
          LODWORD(v80) = (unsigned __int64)(v78 * (signed __int64)v152 >> (v37 & 0x1F)) >> 32;
        v203 = v80 + v144;
        v81 = v78 * (signed __int64)v157 >> (v37 & 0x1F);
        if ( v37 & 0x20 )
          LODWORD(v81) = (unsigned __int64)(v78 * (signed __int64)v157 >> (v37 & 0x1F)) >> 32;
        v206 = v81 + v145;
        v82 = v78 * (signed __int64)v161 >> (v37 & 0x1F);
        if ( v37 & 0x20 )
          LODWORD(v82) = (unsigned __int64)(v78 * (signed __int64)v161 >> (v37 & 0x1F)) >> 32;
        v208 = v146 + v82;
        v83 = v78 * (signed __int64)v165 >> (v37 & 0x1F);
        if ( v37 & 0x20 )
          LODWORD(v83) = (unsigned __int64)(v78 * (signed __int64)v165 >> (v37 & 0x1F)) >> 32;
        v84 = v83 + v147;
        v85 = v168 * (signed __int64)v78 >> (v37 & 0x1F);
        if ( v37 & 0x20 )
          LODWORD(v85) = (unsigned __int64)(v168 * (signed __int64)v78 >> (v37 & 0x1F)) >> 32;
        v86 = v210 - v77;
        v87 = v154 + v85;
        v88 = v194 >> v37;
        if ( v210 - v77 <= 0 )
        {
          v195 = v84;
          v221 = v199;
          v213 = v203;
          v89 = v87;
          v204 = v206;
          v200 = v208;
        }
        else
        {
          v221 = v199 + v86 * v150;
          v213 = v203 + v86 * v152;
          v204 = v206 + v86 * v157;
          v200 = v208 + v86 * v161;
          v195 = v86 * v165 + v84;
          v89 = v87 + v168 * v86;
          v171 = v210;
        }
        v90 = v88;
        if ( v219 <= v88 )
          v90 = v219;
        v91 = v90 - v171;
        if ( v91 > 0 && sub_6F71F0C0(v139) )
        {
          if ( v247 % v253 == v254 )
          {
            v255 = v171 + v91;
            v124 = v171 + dword_6FBB52F4 * (v139 << 10);
            v207 = dword_6FBB505C + 4 * v124 - 4 * v171;
            v209 = dword_6FBB5068 + 2 * v124 - 2 * v171;
            if ( ((_BYTE)v171 + (_BYTE)v91 + ~(_BYTE)v171) & 1 )
            {
              dword_6FBB5058(
                dword_6FBB5068 + 2 * v124,
                dword_6FBB505C + 4 * v124,
                v171,
                v139,
                (unsigned __int8)(v213 / v221),
                (unsigned __int8)(v204 / v221),
                (unsigned __int8)(v200 / v221),
                v195 / v221 << v37,
                v89 / v221 << v37);
              v204 += v157;
              v195 += v165;
              v127 = v150 + v221;
              v126 = v171 + 1;
              v213 += v152;
              v200 += v161;
              v89 += v168;
              v125 = dword_6FD4098C;
            }
            else
            {
              v125 = v37;
              v126 = v171;
              v127 = v221;
            }
            while ( 1 )
            {
              v129 = v126 + 1;
              dword_6FBB5058(
                v209 + 2 * v126,
                v207 + 4 * v126,
                v126,
                v139,
                (unsigned __int8)(v213 / v127),
                (unsigned __int8)(v204 / v127),
                (unsigned __int8)(v200 / v127),
                v195 / v127 << v125,
                v89 / v127 << v125);
              v173 = v152 + v213;
              v205 = v157 + v204;
              v130 = v150 + v127;
              v131 = v168 + v89;
              v201 = v161 + v200;
              v196 = v165 + v195;
              if ( v126 + 1 == v255 )
                break;
              v128 = v126 + 1;
              v126 += 2;
              dword_6FBB5058(
                v209 + 2 * v129,
                v207 + 4 * v129,
                v128,
                v139,
                (unsigned __int8)(v173 / v130),
                (unsigned __int8)(v205 / v130),
                (unsigned __int8)(v201 / v130),
                v196 / v130 << dword_6FD4098C,
                v131 / v130 << dword_6FD4098C);
              v213 = v152 + v173;
              v127 = v150 + v130;
              v89 = v168 + v131;
              v200 = v161 + v201;
              v195 = v165 + v196;
              v204 = v157 + v205;
              v125 = dword_6FD4098C;
            }
          }
          ++v247;
        }
        ++v139;
        v141 += v226;
        v143 += v228;
        v144 += v230;
        v145 += v232;
        v146 += v234;
        v147 += v236;
        v154 += v238;
        v174 += v227;
        v192 += v229 - v228;
        v136 += v227 - v226;
        result = v233 - v232;
        v189 += v231 - v230;
        v186 += v233 - v232;
        v183 += v235 - v234;
        v180 += v237 - v236;
        v177 += v239 - v238;
        if ( v139 == v220 )
          break;
        v37 = dword_6FD4098C;
      }
    }
    if ( v246 == 1 )
      break;
    v246 = 1;
    v151 = v261;
    v32 = v262;
    v36 = 1;
    v134 = v263;
    v35 = v264;
    v148 = v259;
    v139 = v260;
  }
  return result;
}
