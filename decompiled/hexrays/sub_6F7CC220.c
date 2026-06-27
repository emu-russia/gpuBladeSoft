int __usercall sub_6F7CC220@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  unsigned int v4; // ebp@1
  unsigned int v5; // edi@1
  unsigned int v6; // eax@1
  int v7; // eax@3
  unsigned int v8; // esi@3
  int v9; // edi@3
  int v10; // ecx@4
  unsigned int v11; // ebx@4
  unsigned int v12; // edi@4
  int v13; // esi@4
  int v14; // eax@7
  int v15; // eax@9
  signed int *v16; // ecx@9
  unsigned int v17; // eax@9
  signed int *v18; // eax@10
  signed int v19; // eax@11
  unsigned int v20; // ebp@13
  int v21; // ebx@13
  int v22; // eax@14
  int v23; // edx@15
  int result; // eax@15
  int v25; // eax@18
  const void *v26; // eax@19
  size_t v27; // ebp@19
  const void *v28; // edi@19
  int v29; // eax@22
  unsigned int v30; // ecx@22
  unsigned int v31; // edx@22
  int v32; // eax@23
  char *v33; // ecx@23
  int v34; // ecx@26
  int v35; // ebx@26
  int v36; // eax@26
  int v37; // edx@27
  int v38; // edx@30
  char v39; // cl@30
  unsigned int v40; // edx@34
  unsigned int v41; // eax@34
  unsigned int v42; // eax@35
  int v43; // eax@36
  unsigned int v44; // ebp@37
  unsigned int v45; // eax@37
  unsigned int v46; // ecx@37
  int v47; // edi@37
  int v48; // edx@40
  int v49; // edx@40
  int v50; // edx@41
  int v51; // ebx@41
  int v52; // eax@41
  int v53; // ecx@44
  int v54; // eax@44
  int v55; // eax@46
  int v56; // edx@47
  unsigned int v57; // edx@49
  signed int v58; // eax@64
  unsigned int v59; // ecx@65
  unsigned int v60; // edx@78
  signed int v61; // ebp@81
  int v62; // eax@84
  int v63; // eax@86
  int v64; // eax@88
  int v65; // eax@90
  int v66; // eax@92
  int v67; // eax@94
  int v68; // eax@96
  int v69; // eax@98
  int v70; // eax@100
  int v71; // eax@102
  int v72; // eax@104
  int v73; // eax@106
  int v74; // eax@108
  int v75; // edx@111
  int v76; // eax@111
  int v77; // ebp@111
  int v78; // eax@113
  int v79; // edx@114
  int v80; // ecx@115
  int v81; // eax@117
  unsigned int v82; // ebp@118
  int v83; // ebp@118
  int v84; // edi@119
  int v85; // eax@119
  int v86; // esi@121
  unsigned int v87; // eax@123
  unsigned int v88; // esi@124
  unsigned int v89; // ebx@128
  unsigned int i; // ecx@128
  int v91; // ecx@131
  signed int v92; // esi@132
  int v93; // ebx@133
  signed int v94; // edi@135
  unsigned int v95; // ST4C_4@135
  int v96; // ebp@135
  int v97; // ecx@135
  int v98; // edx@137
  char v99; // cl@139
  unsigned int v100; // eax@140
  int v101; // ecx@143
  int v102; // eax@144
  unsigned int v103; // esi@144
  bool v104; // cf@144
  bool v105; // zf@144
  int v106; // ebx@146
  int v107; // eax@146
  int v108; // ecx@146
  int v109; // edx@148
  int v110; // edx@150
  unsigned int v111; // edx@154
  int v112; // eax@158
  unsigned int v113; // ebp@161
  int v114; // eax@161
  unsigned int v115; // edx@162
  int v116; // eax@162
  int v117; // edx@162
  unsigned int v118; // edx@163
  int v119; // esi@163
  unsigned int v120; // ecx@165
  int v121; // eax@167
  int v122; // eax@169
  int v123; // ecx@169
  unsigned int v124; // edx@169
  int v125; // eax@170
  int v126; // ebx@171
  unsigned int v127; // eax@171
  int v128; // eax@172
  unsigned int v129; // eax@173
  int v130; // edi@173
  unsigned int v131; // esi@173
  int v132; // eax@173
  unsigned int v133; // edx@175
  unsigned int v134; // eax@175
  size_t v135; // ebx@179
  int v136; // eax@183
  int v137; // eax@190
  int v138; // edx@190
  unsigned int v139; // edx@191
  int v140; // eax@195
  unsigned int v141; // ebp@197
  int v142; // edi@197
  int v143; // eax@197
  int v144; // edx@200
  unsigned int v145; // eax@201
  int v146; // ecx@201
  int v147; // eax@202
  int v148; // edi@202
  int v149; // eax@208
  int v150; // eax@208
  char *v151; // edx@210
  unsigned int v152; // eax@210
  int v153; // eax@214
  unsigned int k; // eax@215
  _DWORD *v155; // eax@217
  int v156; // edi@218
  int v157; // edx@218
  int v158; // ecx@218
  int v159; // eax@220
  unsigned int v160; // ecx@220
  _BYTE *v161; // eax@220
  _BYTE *v162; // edi@221
  char v163; // cl@224
  unsigned int v164; // edx@229
  unsigned int v165; // ecx@232
  unsigned int v166; // edi@232
  int v167; // eax@234
  int v168; // edx@236
  char v169; // cl@236
  int v170; // eax@236
  int v171; // eax@237
  unsigned int v172; // edx@238
  unsigned int v173; // ecx@240
  unsigned int v174; // edi@240
  int v175; // eax@242
  char v176; // cl@244
  int v177; // eax@244
  int v178; // eax@244
  int v179; // eax@247
  int v180; // edx@248
  int v181; // eax@251
  char *v182; // ecx@251
  unsigned int v183; // edx@251
  char *v184; // eax@252
  unsigned int v185; // edx@256
  int v186; // eax@261
  int v187; // edx@263
  int v188; // ecx@263
  unsigned int v189; // edx@265
  unsigned int v190; // ecx@265
  int v191; // eax@269
  int v192; // eax@272
  int v193; // eax@273
  int v194; // ebx@287
  int v195; // eax@287
  int v196; // eax@287
  int v197; // eax@291
  int v198; // eax@293
  int v199; // eax@296
  int v200; // edi@299
  int v201; // eax@305
  int v202; // ecx@310
  int v203; // ST00_4@311
  char v204; // bl@312
  int v205; // esi@313
  signed int v206; // esi@315
  unsigned int v207; // edx@315
  int j; // eax@315
  unsigned int v209; // edx@317
  unsigned int v210; // eax@317
  int v211; // eax@321
  int v212; // esi@322
  int v213; // esi@323
  int v214; // esi@324
  int v215; // esi@325
  int v216; // esi@326
  int v217; // esi@327
  int v218; // esi@328
  int v219; // esi@329
  int v220; // esi@330
  int v221; // esi@331
  int v222; // esi@332
  int v223; // esi@333
  int v224; // esi@334
  int v225; // edx@345
  int v226; // ecx@345
  int v227; // ebp@345
  unsigned int *v228; // eax@345
  signed int v229; // eax@346
  signed int v230; // edx@349
  int v231; // ST24_4@350
  signed int v232; // ST30_4@350
  signed int v233; // edx@350
  int v234; // ST24_4@352
  int v235; // edx@353
  unsigned int v236; // ebx@356
  int v237; // edx@364
  int v238; // eax@365
  int v239; // ebx@365
  int v240; // edx@366
  int v241; // edi@366
  int v242; // eax@366
  int v243; // edi@370
  char *v244; // eax@371
  unsigned int v245; // ST28_4@377
  unsigned int v246; // ebp@377
  int v247; // ecx@377
  int v248; // eax@380
  int v249; // edi@381
  unsigned int v250; // ebp@381
  int v251; // ebx@381
  int v252; // edx@381
  int v253; // eax@381
  signed int v254; // eax@385
  int v255; // ST24_4@388
  int v256; // eax@401
  unsigned int v257; // ebp@434
  int v258; // ecx@434
  const void *v259; // [sp+4h] [bp-188h]@179
  int v260; // [sp+24h] [bp-168h]@3
  unsigned int v261; // [sp+28h] [bp-164h]@1
  int v262; // [sp+28h] [bp-164h]@169
  char *v263; // [sp+2Ch] [bp-160h]@1
  int v264; // [sp+2Ch] [bp-160h]@220
  int v265; // [sp+2Ch] [bp-160h]@251
  _BYTE *v266; // [sp+2Ch] [bp-160h]@280
  int v267; // [sp+30h] [bp-15Ch]@1
  int v268; // [sp+30h] [bp-15Ch]@22
  int v269; // [sp+34h] [bp-158h]@1
  unsigned int v270; // [sp+38h] [bp-154h]@2
  int v271; // [sp+38h] [bp-154h]@7
  unsigned int v272; // [sp+38h] [bp-154h]@9
  unsigned int v273; // [sp+38h] [bp-154h]@37
  int v274; // [sp+38h] [bp-154h]@63
  unsigned int v275; // [sp+38h] [bp-154h]@78
  signed int v276; // [sp+38h] [bp-154h]@118
  int v277; // [sp+38h] [bp-154h]@161
  unsigned int *v278; // [sp+38h] [bp-154h]@345
  char v279; // [sp+3Ch] [bp-150h]@7
  int v280; // [sp+3Ch] [bp-150h]@10
  int v281; // [sp+3Ch] [bp-150h]@45
  int v282; // [sp+3Ch] [bp-150h]@121
  unsigned int v283; // [sp+3Ch] [bp-150h]@161
  int v284; // [sp+3Ch] [bp-150h]@202
  int v285; // [sp+3Ch] [bp-150h]@296
  int v286; // [sp+3Ch] [bp-150h]@345
  char v287; // [sp+40h] [bp-14Ch]@7
  signed int v288; // [sp+40h] [bp-14Ch]@64
  unsigned int v289; // [sp+40h] [bp-14Ch]@121
  unsigned int v290; // [sp+40h] [bp-14Ch]@162
  unsigned int v291; // [sp+40h] [bp-14Ch]@218
  unsigned int v292; // [sp+40h] [bp-14Ch]@345
  int v293; // [sp+44h] [bp-148h]@7
  unsigned int v294; // [sp+44h] [bp-148h]@118
  int v295; // [sp+44h] [bp-148h]@169
  int v296; // [sp+44h] [bp-148h]@197
  int v297; // [sp+44h] [bp-148h]@345
  signed int v298; // [sp+48h] [bp-144h]@65
  signed int v299; // [sp+48h] [bp-144h]@190
  int v300; // [sp+48h] [bp-144h]@197
  int v301; // [sp+48h] [bp-144h]@345
  int v302; // [sp+4Ch] [bp-140h]@118
  signed int v303; // [sp+4Ch] [bp-140h]@190
  signed int v304; // [sp+50h] [bp-13Ch]@65
  int v305; // [sp+54h] [bp-138h]@121
  unsigned int v306; // [sp+58h] [bp-134h]@119
  int v307; // [sp+5Ch] [bp-130h]@45
  unsigned int v308; // [sp+64h] [bp-128h]@65
  unsigned int v309; // [sp+68h] [bp-124h]@118
  int v310; // [sp+6Ch] [bp-120h]@118
  int v311; // [sp+70h] [bp-11Ch]@118
  int v312; // [sp+74h] [bp-118h]@45
  int *v313; // [sp+78h] [bp-114h]@118
  int v314; // [sp+7Ch] [bp-110h]@120
  signed int v315; // [sp+80h] [bp-10Ch]@79
  int *v316; // [sp+84h] [bp-108h]@118
  unsigned int v317; // [sp+8Ch] [bp-100h]@118
  int v318; // [sp+90h] [bp-FCh]@118
  unsigned int v319; // [sp+94h] [bp-F8h]@118
  int v320; // [sp+98h] [bp-F4h]@110
  unsigned int v321; // [sp+9Ch] [bp-F0h]@118
  int v322; // [sp+ACh] [bp-E0h]@7
  int v323; // [sp+B0h] [bp-DCh]@7
  int v324[15]; // [sp+B4h] [bp-D8h]@7
  int v325; // [sp+F0h] [bp-9Ch]@7
  int v326; // [sp+F4h] [bp-98h]@46
  int v327; // [sp+F8h] [bp-94h]@46
  int v328; // [sp+FCh] [bp-90h]@46
  int v329; // [sp+100h] [bp-8Ch]@46
  int v330; // [sp+104h] [bp-88h]@46
  int v331; // [sp+108h] [bp-84h]@46
  int v332; // [sp+10Ch] [bp-80h]@46
  int v333; // [sp+110h] [bp-7Ch]@46
  int v334; // [sp+114h] [bp-78h]@46
  int v335; // [sp+118h] [bp-74h]@46
  int v336; // [sp+11Ch] [bp-70h]@46
  int v337; // [sp+120h] [bp-6Ch]@46
  int v338; // [sp+124h] [bp-68h]@46
  int v339; // [sp+128h] [bp-64h]@46
  int v340; // [sp+12Ch] [bp-60h]@46
  int v341; // [sp+130h] [bp-5Ch]@115
  int v342; // [sp+134h] [bp-58h]@111
  int v343[21]; // [sp+138h] [bp-54h]@112

  v3 = a1;
  v269 = a2;
  v4 = *(_DWORD *)(a2 + 4);
  v267 = a3;
  v5 = *(_DWORD *)(a1 + 28);
  v261 = *(_DWORD *)(a1 + 32);
  v263 = *(char **)(a1 + 52);
  v6 = *(_DWORD *)(a1 + 48);
  if ( (unsigned int)v263 >= v6 )
    v270 = *(_DWORD *)(v3 + 44) - (_DWORD)v263;
  else
    v270 = v6 - (_DWORD)v263 - 1;
  v7 = *(_DWORD *)v3;
  v260 = v3;
  v8 = v5;
  v9 = *(_DWORD *)a2;
  while ( 2 )
  {
    v10 = v9;
    v11 = v4;
    v12 = v8;
    v13 = v10;
LABEL_5:
    switch ( v7 )
    {
      case 6:
        goto LABEL_9;
      case 7:
        v20 = v11;
        v21 = v260;
        goto LABEL_14;
      case 8:
        v20 = v11;
        v21 = v260;
        goto LABEL_18;
      case 2:
        v26 = (const void *)v13;
        v8 = v12;
        v27 = v11;
        v28 = v26;
        if ( !v11 )
        {
          *(_DWORD *)(v260 + 28) = v8;
          *(_DWORD *)(v260 + 32) = v261;
          v237 = (int)v26 - *(_DWORD *)v269;
          *(_DWORD *)v269 = v26;
          *(_DWORD *)(v269 + 8) += v237;
          *(_DWORD *)(v269 + 4) = 0;
          *(_DWORD *)(v260 + 52) = v263;
          return sub_6F7CBE30(v260, v269, v267);
        }
        if ( !v270 )
        {
          if ( v263 != *(char **)(v260 + 44) )
            goto LABEL_454;
          v133 = *(_DWORD *)(v260 + 48);
          v134 = *(_DWORD *)(v260 + 40);
          if ( v133 == v134 )
            goto LABEL_454;
          v270 = (unsigned int)&v263[-v134];
          if ( v133 > v134 )
            v270 = v133 - v134 - 1;
          v263 = *(char **)(v260 + 40);
          if ( !v270 )
          {
LABEL_454:
            *(_DWORD *)(v260 + 52) = v263;
            v29 = sub_6F7CBE30(v260, v269, v267);
            v30 = *(_DWORD *)(v260 + 52);
            v31 = *(_DWORD *)(v260 + 48);
            v268 = v29;
            v263 = *(char **)(v260 + 52);
            if ( v30 >= v31 )
            {
              v33 = *(char **)(v260 + 44);
              v270 = *(_DWORD *)(v260 + 44) - (_DWORD)v263;
            }
            else
            {
              v32 = v31 - v30;
              v33 = *(char **)(v260 + 44);
              v270 = v32 - 1;
            }
            if ( v263 == v33 )
            {
              v236 = *(_DWORD *)(v260 + 40);
              if ( v31 != v236 )
              {
                if ( v31 <= v236 )
                {
                  v263 = *(char **)(v260 + 40);
                  v270 = *(_DWORD *)(v260 + 52) - v236;
                }
                else
                {
                  v263 = *(char **)(v260 + 40);
                  v270 = v31 - v236 - 1;
                }
              }
            }
            if ( !v270 )
            {
              v34 = v268;
              v35 = v260;
              v36 = (int)v28;
              v12 = v8;
              v13 = v36;
              goto LABEL_27;
            }
          }
        }
        v135 = *(_DWORD *)(v260 + 4);
        v259 = v28;
        if ( v27 <= v135 )
          v135 = v27;
        if ( v270 <= v135 )
          v135 = v270;
        v9 = (int)v28 + v135;
        v4 = v27 - v135;
        memcpy(v263, v259, v135);
        v263 += v135;
        v270 -= v135;
        v136 = *(_DWORD *)(v260 + 4) - v135;
        *(_DWORD *)(v260 + 4) = v136;
        if ( v136 )
        {
          v7 = *(_DWORD *)v260;
          v267 = 0;
        }
        else
        {
          v267 = 0;
          v7 = *(_DWORD *)(v260 + 24) >= 1u ? 7 : 0;
          *(_DWORD *)v260 = v7;
        }
        continue;
      case 3:
        if ( v12 > 0xD )
          goto LABEL_34;
        if ( !v11 )
          goto LABEL_185;
        v38 = v13 + 1;
        v39 = v12 + 8;
        v261 |= *(_BYTE *)v13 << v12;
        if ( v12 + 8 > 0xD )
        {
          v12 += 8;
          --v11;
        }
        else
        {
          if ( v11 == 1 )
          {
            v126 = v260;
            ++v13;
            v12 += 8;
            v267 = 0;
            v127 = v261;
            goto LABEL_172;
          }
          v38 = v13 + 2;
          v11 -= 2;
          v12 += 16;
          v261 |= *(_BYTE *)(v13 + 1) << v39;
        }
        v13 = v38;
        v267 = 0;
LABEL_34:
        v40 = v261 & 0x1F;
        v41 = v261 & 0x3FFF;
        *(_DWORD *)(v260 + 4) = v41;
        if ( v40 > 0x1D || (v42 = (v41 >> 5) & 0x1F, v42 > 0x1D) )
        {
          v4 = v11;
          v238 = v269;
          v239 = v260;
          *(_DWORD *)v260 = 9;
          *(_DWORD *)(v269 + 24) = "too many length or distance symbols";
LABEL_366:
          v240 = v13 - *(_DWORD *)v238;
          *(_DWORD *)(v239 + 28) = v12;
          v241 = v238;
          *(_DWORD *)(v239 + 32) = v261;
          *(_DWORD *)(v238 + 4) = v4;
          v242 = v240;
          goto LABEL_367;
        }
        v43 = (*(int (__cdecl **)(_DWORD, int, signed int))(v269 + 32))(*(_DWORD *)(v269 + 40), v40 + v42 + 258, 4);
        *(_DWORD *)(v260 + 12) = v43;
        if ( !v43 )
        {
          *(_DWORD *)(v260 + 28) = v12;
          v249 = v269;
          v250 = v11;
          v251 = v260;
          v252 = v13 - *(_DWORD *)v269;
          *(_DWORD *)(v260 + 32) = v261;
          *(_DWORD *)(v269 + 4) = v250;
          v253 = v252;
LABEL_382:
          *(_DWORD *)(v249 + 8) += v253;
          *(_DWORD *)v249 = v13;
          *(_DWORD *)(v251 + 52) = v263;
          return sub_6F7CBE30(v251, v249, -4);
        }
        v44 = v261 >> 14;
        *(_DWORD *)(v260 + 8) = 0;
        v45 = 0;
        *(_DWORD *)v260 = 4;
        v273 = v11;
        v46 = v12 - 14;
        v47 = v260;
        do
        {
LABEL_38:
          if ( v46 <= 2 )
          {
            if ( !v273 )
            {
              v126 = v47;
              v127 = v44;
              v12 = v46;
              goto LABEL_172;
            }
            v48 = *(_BYTE *)v13;
            --v273;
            ++v13;
            v267 = 0;
            v49 = v48 << v46;
            v46 += 8;
            v44 |= v49;
          }
          v50 = v45 + 1;
          v51 = *(_DWORD *)(v47 + 12);
          v52 = dword_6FB6C2A0[v45];
          v46 -= 3;
          *(_DWORD *)(v47 + 8) = v50;
          LOBYTE(v50) = v44;
          v44 >>= 3;
          *(_DWORD *)(v51 + 4 * v52) = v50 & 7;
          v45 = *(_DWORD *)(v47 + 8);
        }
        while ( v45 < (*(_DWORD *)(v47 + 4) >> 10) + 4 );
        v11 = v273;
        v261 = v44;
        v12 = v46;
LABEL_43:
        while ( v45 <= 0x12 )
        {
          v53 = v45 + 1;
          v54 = dword_6FB6C2A0[v45];
          *(_DWORD *)(v260 + 8) = v53;
          *(_DWORD *)(*(_DWORD *)(v260 + 12) + 4 * v54) = 0;
          v45 = *(_DWORD *)(v260 + 8);
        }
        *(_DWORD *)(v260 + 16) = 7;
        v307 = *(_DWORD *)(v260 + 36);
        v281 = *(_DWORD *)(v260 + 12);
        v312 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(v269 + 32))(*(_DWORD *)(v269 + 40), 19, 4);
        if ( !v312 )
        {
LABEL_404:
          v27 = v11;
          v34 = -4;
          v35 = v260;
          goto LABEL_27;
        }
        v55 = v281;
        v325 = 0;
        v326 = 0;
        v327 = 0;
        v328 = 0;
        v329 = 0;
        v330 = 0;
        v331 = 0;
        v332 = 0;
        v333 = 0;
        v334 = 0;
        v335 = 0;
        v336 = 0;
        v337 = 0;
        v338 = 0;
        v339 = 0;
        v340 = 0;
        do
        {
          v55 += 4;
          v56 = *(_DWORD *)(v55 - 4);
          ++*(&v325 + v56);
        }
        while ( v55 != v281 + 76 );
        if ( v325 == 19 )
        {
          v27 = v11;
          v35 = v260;
          *(_DWORD *)(v260 + 20) = 0;
          *(_DWORD *)(v260 + 16) = 0;
          goto LABEL_355;
        }
        v57 = *(_DWORD *)(v260 + 16);
        if ( v326 )
        {
          v59 = 1;
        }
        else if ( v327 )
        {
          v59 = 2;
        }
        else if ( v328 )
        {
          v59 = 3;
        }
        else if ( v329 )
        {
          v59 = 4;
        }
        else if ( v330 )
        {
          v59 = 5;
        }
        else if ( v331 )
        {
          v59 = 6;
        }
        else if ( v332 )
        {
          v59 = 7;
        }
        else if ( v333 )
        {
          v59 = 8;
        }
        else if ( v334 )
        {
          v59 = 9;
        }
        else if ( v335 )
        {
          v59 = 10;
        }
        else if ( v336 )
        {
          v59 = 11;
        }
        else if ( v337 )
        {
          v59 = 12;
        }
        else if ( v338 )
        {
          v59 = 13;
        }
        else
        {
          if ( !v339 )
          {
            v274 = v340;
            if ( v340 )
            {
              if ( v57 <= 0xE )
              {
                v275 = 15;
                v304 = 15;
                v315 = 15;
                v308 = 15;
                v298 = 15;
                *(_DWORD *)(v260 + 16) = 15;
                v61 = 15;
                v58 = 0x8000;
                goto LABEL_110;
              }
              v288 = 0x8000;
              v58 = 0x8000;
              v59 = 15;
              v304 = 15;
            }
            else
            {
              v288 = 0x10000;
              v58 = 0x10000;
              if ( v57 <= 0xF )
              {
                v308 = 16;
                v298 = 16;
                v59 = 16;
                v304 = 16;
                goto LABEL_66;
              }
              v59 = 16;
              v304 = 16;
            }
            goto LABEL_396;
          }
          v59 = 14;
        }
        v304 = v59;
        v274 = v340;
        if ( v57 >= v59 )
        {
          v58 = 1 << v59;
          v288 = 1 << v59;
LABEL_396:
          v298 = *(_DWORD *)(v260 + 16);
          goto LABEL_397;
        }
        v58 = 1 << v59;
        v298 = v59;
        v288 = 1 << v59;
LABEL_397:
        v308 = v298;
        if ( v274 )
        {
          v275 = 15;
          v60 = 15;
          goto LABEL_79;
        }
        if ( v339 )
        {
          v275 = 14;
          v60 = 14;
          goto LABEL_79;
        }
LABEL_66:
        if ( v338 )
        {
          v275 = 13;
          v60 = 13;
        }
        else if ( v337 )
        {
          v275 = 12;
          v60 = 12;
        }
        else if ( v336 )
        {
          v275 = 11;
          v60 = 11;
        }
        else if ( v335 )
        {
          v275 = 10;
          v60 = 10;
        }
        else if ( v334 )
        {
          v275 = 9;
          v60 = 9;
        }
        else if ( v333 )
        {
          v275 = 8;
          v60 = 8;
        }
        else if ( v332 )
        {
          v275 = 7;
          v60 = 7;
        }
        else if ( v331 )
        {
          v275 = 6;
          v60 = 6;
        }
        else if ( v330 )
        {
          v275 = 5;
          v60 = 5;
        }
        else if ( v329 )
        {
          v275 = 4;
          v60 = 4;
        }
        else if ( v328 )
        {
          v275 = 3;
          v60 = 3;
        }
        else if ( v327 )
        {
          v275 = 2;
          v60 = 2;
        }
        else
        {
          v60 = v326 != 0;
          v275 = v326 != 0;
        }
LABEL_79:
        v315 = v60;
        if ( v60 < v308 )
        {
          v308 = v60;
          v298 = v60;
        }
        v56 = v260;
        *(_DWORD *)(v260 + 16) = v308;
        v61 = v275;
        if ( v275 > v59 )
        {
          if ( v288 - *(&v325 + v59) < 0 )
            goto LABEL_339;
          v56 = v59 + 1;
          v58 = 2 * (v288 - *(&v325 + v59));
          if ( v59 + 1 < v275 )
          {
            v62 = v58 - *(&v325 + v56);
            if ( v62 < 0 )
              goto LABEL_339;
            v56 = v59 + 2;
            v58 = 2 * v62;
            if ( v59 + 2 < v275 )
            {
              v63 = v58 - *(&v325 + v56);
              if ( v63 < 0 )
                goto LABEL_339;
              v56 = v59 + 3;
              v58 = 2 * v63;
              if ( v59 + 3 < v275 )
              {
                v64 = v58 - *(&v325 + v56);
                if ( v64 < 0 )
                  goto LABEL_339;
                v56 = v59 + 4;
                v58 = 2 * v64;
                if ( v59 + 4 < v275 )
                {
                  v65 = v58 - *(&v325 + v56);
                  if ( v65 < 0 )
                    goto LABEL_339;
                  v56 = v59 + 5;
                  v58 = 2 * v65;
                  if ( v59 + 5 < v275 )
                  {
                    v66 = v58 - *(&v325 + v56);
                    if ( v66 < 0 )
                      goto LABEL_339;
                    v56 = v59 + 6;
                    v58 = 2 * v66;
                    if ( v59 + 6 < v275 )
                    {
                      v67 = v58 - *(&v325 + v56);
                      if ( v67 < 0 )
                        goto LABEL_339;
                      v56 = v59 + 7;
                      v58 = 2 * v67;
                      if ( v59 + 7 < v275 )
                      {
                        v68 = v58 - *(&v325 + v56);
                        if ( v68 < 0 )
                          goto LABEL_339;
                        v56 = v59 + 8;
                        v58 = 2 * v68;
                        if ( v59 + 8 < v275 )
                        {
                          v69 = v58 - *(&v325 + v56);
                          if ( v69 < 0 )
                            goto LABEL_339;
                          v56 = v59 + 9;
                          v58 = 2 * v69;
                          if ( v59 + 9 < v275 )
                          {
                            v70 = v58 - *(&v325 + v56);
                            if ( v70 < 0 )
                              goto LABEL_339;
                            v56 = v59 + 10;
                            v58 = 2 * v70;
                            if ( v59 + 10 < v275 )
                            {
                              v71 = v58 - *(&v325 + v56);
                              if ( v71 < 0 )
                                goto LABEL_339;
                              v56 = v59 + 11;
                              v58 = 2 * v71;
                              if ( v59 + 11 < v275 )
                              {
                                v72 = v58 - *(&v325 + v56);
                                if ( v72 < 0 )
                                  goto LABEL_339;
                                v56 = v59 + 12;
                                v58 = 2 * v72;
                                if ( v59 + 12 < v275 )
                                {
                                  v73 = v58 - *(&v325 + v56);
                                  if ( v73 < 0 )
                                    goto LABEL_339;
                                  v58 = 2 * v73;
                                  if ( v59 + 13 < v275 )
                                  {
                                    v74 = v58 - v339;
                                    if ( v74 < 0 )
                                      goto LABEL_339;
                                    v58 = 2 * v74;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_110:
        v56 = v58 - *(&v325 + v61);
        v320 = v58 - *(&v325 + v61);
        if ( v320 < 0 )
        {
LABEL_339:
          v27 = v11;
          v35 = v260;
LABEL_310:
          *(_DWORD *)(v269 + 24) = "oversubscribed dynamic bit lengths tree";
          v202 = v269;
          goto LABEL_311;
        }
        *(&v325 + v61) = v58;
        v75 = 0;
        v76 = 0;
        v77 = v61 - 1;
        v342 = 0;
        if ( v77 )
        {
          do
          {
            v75 += *(&v325 + v76 + 1);
            v343[v76++] = v75;
          }
          while ( v76 != v77 );
        }
        v78 = 0;
        do
        {
          v79 = *(_DWORD *)(v281 + 4 * v78);
          if ( v79 )
          {
            v80 = *(&v341 + v79);
            *(&v341 + v79) = v80 + 1;
            *(_DWORD *)(v312 + 4 * v80) = v78;
          }
          ++v78;
        }
        while ( v78 != 19 );
        v324[0] = 0;
        v56 = -v298;
        v81 = *(&v341 + v315);
        v341 = 0;
        if ( v315 >= v304 )
        {
          v302 = -v298;
          v56 = 0;
          v310 = 0;
          v294 = 0;
          v309 = 0;
          v317 = v12;
          v316 = (int *)v312;
          v318 = v13;
          v319 = v11;
          v321 = v312 + 4 * v81;
          v313 = &v325 + v304;
          v82 = v275;
          v276 = -1;
          v311 = v82 - v304;
          v83 = 0;
          do
          {
            v84 = v56;
            v306 = *v313;
            v85 = *v313;
            while ( 1 )
            {
              v314 = v85 - 1;
              if ( !v85 )
                break;
              v86 = v84;
              v282 = v298 + v302;
              v289 = v304 - (v298 + v302);
              v305 = (int)&v313[-(v304 - (v298 + v302))];
              while ( v282 < v304 )
              {
                v56 = v276 + 1;
                LOBYTE(v87) = v289;
                if ( 1 << v289 <= v306 )
                  goto LABEL_455;
                v88 = v289 + v311;
                if ( v289 + v311 > v308 )
                  v88 = v308;
                if ( v88 <= v289 )
                {
LABEL_455:
                  v294 = 1 << v289;
                  v92 = 1 << v289;
                }
                else
                {
                  v87 = v289 + 1;
                  if ( v289 + 1 < v88 )
                  {
                    v89 = v313[1];
                    for ( i = 2 * ((1 << v289) - v314) - 2; i > v89; i = 2 * v91 )
                    {
                      ++v87;
                      v91 = i - v89;
                      if ( v88 <= v87 )
                        break;
                      v89 = *(_DWORD *)(v305 + 4 * v87);
                    }
                  }
                  v92 = 1 << v87;
                  v294 = 1 << v87;
                }
                v93 = v83 + v92;
                if ( (unsigned int)(v83 + v92) > 0x5A0 )
                {
                  v12 = v317;
                  v13 = v318;
                  v27 = v319;
                  v35 = v260;
                  goto LABEL_310;
                }
                v86 = v307 + 8 * v83;
                v324[v56] = v86;
                if ( v276 == -1 )
                {
                  v276 = 0;
                  *(_DWORD *)(v260 + 20) = v86;
                }
                else
                {
                  v94 = v276++;
                  *(&v341 + v56) = v309;
                  v95 = v309 >> v302;
                  v96 = v324[v94];
                  v97 = v96 + 8 * v95;
                  v310 = ((v86 - v96) >> 3) - v95;
                  *(_BYTE *)v97 = v87;
                  *(_DWORD *)(v97 + 4) = v310;
                  *(_BYTE *)(v97 + 1) = v298;
                }
                v83 = v93;
                v289 -= v298;
                v305 += 4 * v298;
                v302 = v282;
                v282 += v298;
              }
              v84 = v86;
              v204 = -64;
              if ( v321 > (unsigned int)v316 )
              {
                v205 = *v316;
                v310 = *v316;
                if ( (unsigned int)*v316 > 0x12 )
                {
                  ++v316;
                  v310 = *(_DWORD *)(4 * v205 - 76);
                  v204 = v310 + 80;
                }
                else
                {
                  v204 = 0;
                  ++v316;
                }
              }
              v206 = 1 << (v304 - v302);
              v207 = v309 >> v302;
              for ( j = v84 + 8 * (v309 >> v302); v207 < v294; j += 8 * v206 )
              {
                *(_BYTE *)(j + 1) = v304 - v302;
                *(_DWORD *)(j + 4) = v310;
                *(_BYTE *)j = v204;
                v207 += v206;
              }
              v209 = v309;
              v210 = 1 << (v304 - 1);
              if ( (1 << (v304 - 1)) & v309 )
              {
                do
                {
                  v209 ^= v210;
                  v210 >>= 1;
                }
                while ( v210 & v209 );
                v309 = v209;
              }
              v309 ^= v210;
              if ( (v309 & ((1 << v302) - 1)) != *(&v341 + v276) )
              {
                v211 = v276 - 1;
                v302 -= v298;
                if ( (v309 & ((1 << v302) - 1)) == *(&v341 + v276 - 1)
                  || (v212 = v302 - v298, v211 = v276 - 2,
                                          v302 = v212,
                                          (v309 & ((1 << v212) - 1)) == *(&v341 + v276 - 2))
                  || (v213 = v212 - v298, v211 = v276 - 3,
                                          v302 = v213,
                                          (v309 & ((1 << v213) - 1)) == *(&v341 + v276 - 3))
                  || (v214 = v213 - v298, v211 = v276 - 4,
                                          v302 = v214,
                                          (v309 & ((1 << v214) - 1)) == *(&v341 + v276 - 4))
                  || (v215 = v214 - v298, v211 = v276 - 5,
                                          v302 = v215,
                                          (v309 & ((1 << v215) - 1)) == *(&v341 + v276 - 5))
                  || (v216 = v215 - v298, v211 = v276 - 6,
                                          v302 = v216,
                                          (v309 & ((1 << v216) - 1)) == *(&v341 + v276 - 6))
                  || (v217 = v216 - v298, v211 = v276 - 7,
                                          v302 = v217,
                                          (v309 & ((1 << v217) - 1)) == *(&v341 + v276 - 7))
                  || (v218 = v217 - v298, v211 = v276 - 8,
                                          v302 = v218,
                                          (v309 & ((1 << v218) - 1)) == *(&v341 + v276 - 8))
                  || (v219 = v218 - v298, v211 = v276 - 9,
                                          v302 = v219,
                                          (v309 & ((1 << v219) - 1)) == *(&v341 + v276 - 9))
                  || (v220 = v219 - v298,
                      v211 = v276 - 10,
                      v302 = v220,
                      (v309 & ((1 << v220) - 1)) == *(&v341 + v276 - 10))
                  || (v221 = v220 - v298,
                      v211 = v276 - 11,
                      v302 = v221,
                      (v309 & ((1 << v221) - 1)) == *(&v341 + v276 - 11))
                  || (v222 = v221 - v298,
                      v211 = v276 - 12,
                      v302 = v222,
                      (v309 & ((1 << v222) - 1)) == *(&v341 + v276 - 12))
                  || (v223 = v222 - v298,
                      v211 = v276 - 13,
                      v302 = v223,
                      (v309 & ((1 << v223) - 1)) == *(&v341 + v276 - 13))
                  || (v224 = v223 - v298,
                      v211 = v276 - 14,
                      v302 = v224,
                      (v309 & ((1 << v224) - 1)) == *(&v341 + v276 - 14)) )
                {
                  v276 = v211;
                }
                else
                {
                  v276 -= 15;
                  v302 = v224 - v298;
                }
              }
              v85 = v314;
              v306 = v314;
            }
            ++v304;
            ++v313;
            v56 = v84;
            --v311;
          }
          while ( v304 <= v315 );
          v12 = v317;
          v13 = v318;
          v11 = v319;
        }
        if ( v320 && v315 != 1 )
        {
          v27 = v11;
          v35 = v260;
          goto LABEL_355;
        }
        v56 = *(_DWORD *)(v260 + 16);
        if ( !v56 )
        {
          v27 = v11;
          v35 = v260;
LABEL_355:
          *(_DWORD *)(v269 + 24) = "incomplete dynamic bit lengths tree";
          v202 = v269;
LABEL_311:
          v203 = *(_DWORD *)(v202 + 40);
          (*(void (__fastcall **)(int, int))(v202 + 36))(v202, v56);
          (*(void (__cdecl **)(_DWORD, _DWORD))(v269 + 36))(*(_DWORD *)(v269 + 40), *(_DWORD *)(v35 + 12));
          *(_DWORD *)v35 = 9;
          v34 = -3;
          goto LABEL_27;
        }
        (*(void (__cdecl **)(_DWORD, int))(v269 + 36))(*(_DWORD *)(v269 + 40), v312);
        v114 = v260;
        v283 = 0;
        v113 = v261;
        v277 = v13;
        *(_DWORD *)(v260 + 8) = 0;
        *(_DWORD *)v260 = 5;
LABEL_162:
        while ( 2 )
        {
          while ( 2 )
          {
            v115 = *(_DWORD *)(v114 + 4);
            v116 = *(_DWORD *)(v114 + 4) & 0x1F;
            v117 = (v115 >> 5) & 0x1F;
            v290 = v116 + v117 + 258;
            if ( v290 <= v283 )
            {
              v297 = v117;
              v261 = v113;
              v13 = v277;
              v322 = 9;
              v323 = 6;
              v225 = *(_DWORD *)(v260 + 36);
              *(_DWORD *)(v260 + 20) = 0;
              v226 = *(_DWORD *)(v260 + 12);
              v341 = 0;
              v301 = v225;
              v227 = v225;
              v286 = v226;
              v292 = v116 + 257;
              v228 = (unsigned int *)(*(int (__cdecl **)(_DWORD, signed int, signed int))(v269 + 32))(
                                       *(_DWORD *)(v269 + 40),
                                       288,
                                       4);
              v278 = v228;
              if ( !v228 )
                goto LABEL_404;
              v229 = sub_6F7CAE10(
                       v286,
                       v292,
                       0x101u,
                       (int)&unk_6FB6D5E0,
                       (int)&unk_6FB6D560,
                       v324,
                       (unsigned int *)&v322,
                       v227,
                       &v341,
                       v228);
              if ( v229 )
              {
                v27 = v11;
                v35 = v260;
                if ( v229 == -3 )
                {
                  v230 = -3;
                  *(_DWORD *)(v269 + 24) = "oversubscribed literal/length tree";
                  goto LABEL_350;
                }
                v230 = -4;
                if ( v229 != -4 )
                {
LABEL_349:
                  v230 = -3;
                  *(_DWORD *)(v269 + 24) = "incomplete literal/length tree";
                  v229 = -3;
                }
LABEL_350:
                v231 = v229;
                v232 = v230;
                (*(void (__cdecl **)(_DWORD, unsigned int *))(v269 + 36))(*(_DWORD *)(v269 + 40), v278);
                v233 = v232;
                v34 = v231;
LABEL_351:
                if ( v233 == -3 )
                {
                  v234 = v34;
                  (*(void (__cdecl **)(_DWORD, _DWORD))(v269 + 36))(*(_DWORD *)(v269 + 40), *(_DWORD *)(v35 + 12));
                  *(_DWORD *)v35 = 9;
                  v34 = v234;
                }
LABEL_27:
                *(_DWORD *)(v35 + 28) = v12;
                v37 = v13 - *(_DWORD *)v269;
                *(_DWORD *)(v35 + 32) = v261;
                *(_DWORD *)(v269 + 8) += v37;
                *(_DWORD *)v269 = v13;
                *(_DWORD *)(v269 + 4) = v27;
                *(_DWORD *)(v35 + 52) = v263;
                return sub_6F7CBE30(v35, v269, v34);
              }
              if ( !v322 )
              {
                v27 = v11;
                v35 = v260;
                goto LABEL_349;
              }
              v254 = sub_6F7CAE10(
                       v286 + 4 * v292,
                       v297 + 1,
                       0,
                       (int)&unk_6FB6D4E0,
                       (int)&unk_6FB6D460,
                       &v325,
                       (unsigned int *)&v323,
                       v301,
                       &v341,
                       v278);
              if ( v254 )
              {
                v27 = v11;
                v35 = v260;
                if ( v254 == -3 )
                {
                  *(_DWORD *)(v269 + 24) = "oversubscribed distance tree";
                  goto LABEL_388;
                }
                if ( v254 == -5 )
                {
                  *(_DWORD *)(v269 + 24) = "incomplete distance tree";
                  v254 = -3;
                  goto LABEL_388;
                }
                if ( v254 == -4 )
                {
LABEL_388:
                  v255 = v254;
                  (*(void (__cdecl **)(_DWORD, unsigned int *))(v269 + 36))(*(_DWORD *)(v269 + 40), v278);
                  v233 = v255;
                  v34 = v255;
                  goto LABEL_351;
                }
LABEL_433:
                *(_DWORD *)(v269 + 24) = "empty distance tree with lengths";
                v254 = -3;
                goto LABEL_388;
              }
              if ( !v323 && v292 != 257 )
              {
                v27 = v11;
                v35 = v260;
                goto LABEL_433;
              }
              (*(void (__cdecl **)(_DWORD, unsigned int *))(v269 + 36))(*(_DWORD *)(v269 + 40), v278);
              v271 = v325;
              v293 = v324[0];
              v279 = v323;
              v287 = v322;
              v14 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(v269 + 32))(*(_DWORD *)(v269 + 40), 1, 28);
              if ( !v14 )
              {
                v257 = v11;
                v251 = v260;
                *(_DWORD *)(v260 + 28) = v12;
                v249 = v269;
                *(_DWORD *)(v260 + 32) = v261;
                v258 = v13 - *(_DWORD *)v269;
                *(_DWORD *)(v269 + 4) = v257;
                v253 = v258;
                goto LABEL_382;
              }
              v4 = v260;
              *(_DWORD *)(v14 + 20) = v293;
              *(_DWORD *)v14 = 0;
              *(_BYTE *)(v14 + 16) = v287;
              *(_BYTE *)(v14 + 17) = v279;
              *(_DWORD *)(v14 + 24) = v271;
              *(_DWORD *)(v260 + 4) = v14;
              (*(void (__cdecl **)(_DWORD, _DWORD))(v269 + 36))(*(_DWORD *)(v269 + 40), *(_DWORD *)(v260 + 12));
              *(_DWORD *)v260 = 6;
LABEL_9:
              *(_DWORD *)(v260 + 28) = v12;
              *(_DWORD *)(v260 + 32) = v261;
              v15 = v13 - *(_DWORD *)v269;
              *(_DWORD *)(v269 + 4) = v11;
              *(_DWORD *)(v269 + 8) += v15;
              *(_DWORD *)v269 = v13;
              v16 = *(signed int **)(v260 + 4);
              *(_DWORD *)(v260 + 52) = v263;
              v17 = *(_DWORD *)(v260 + 48);
              v272 = (unsigned int)v16;
              if ( (unsigned int)v263 >= v17 )
              {
                v280 = *(_DWORD *)(v260 + 44) - (_DWORD)v263;
                v18 = v16;
              }
              else
              {
                v280 = v17 - (_DWORD)v263 - 1;
                v18 = v16;
              }
LABEL_11:
              v19 = *v18;
              while ( 2 )
              {
                switch ( v19 )
                {
                  case 8:
                    goto LABEL_208;
                  case 5:
                    v153 = *(_DWORD *)(v272 + 12);
                    goto LABEL_215;
                  case 3:
                    v164 = *(_DWORD *)(v272 + 12);
                    goto LABEL_230;
                  case 2:
                    v172 = *(_DWORD *)(v272 + 8);
                    v4 = v272;
                    if ( v172 <= v12 )
                      goto LABEL_244;
                    if ( !v11 )
                      goto LABEL_293;
                    v173 = v12;
                    v174 = v261;
                    while ( 1 )
                    {
                      ++v13;
                      --v11;
                      v175 = *(_BYTE *)(v13 - 1) << v173;
                      v173 += 8;
                      v174 |= v175;
                      if ( v172 <= v173 )
                        break;
                      if ( !v11 )
                        goto LABEL_292;
                    }
                    v4 = v272;
                    v261 = v174;
                    v12 = v173;
                    v267 = 0;
LABEL_244:
                    v176 = *(_DWORD *)(v272 + 8);
                    v177 = dword_6FB6C300[v172] & v261;
                    v12 -= v172;
                    v164 = *(_BYTE *)(v4 + 17);
                    *(_DWORD *)(v4 + 4) += v177;
                    v178 = *(_DWORD *)(v4 + 24);
                    v261 >>= v176;
                    *(_DWORD *)v4 = 3;
                    *(_DWORD *)(v4 + 12) = v164;
                    *(_DWORD *)(v4 + 8) = v178;
LABEL_230:
                    if ( v12 >= v164 )
                      goto LABEL_236;
                    if ( !v11 )
                      goto LABEL_287;
                    v165 = v12;
                    v166 = v261;
                    while ( 1 )
                    {
                      ++v13;
                      --v11;
                      v167 = *(_BYTE *)(v13 - 1) << v165;
                      v165 += 8;
                      v166 |= v167;
                      if ( v165 >= v164 )
                        break;
                      if ( !v11 )
                        goto LABEL_286;
                    }
                    v261 = v166;
                    v267 = 0;
                    v12 = v165;
LABEL_236:
                    v168 = *(_DWORD *)(v272 + 8) + 8 * (v261 & dword_6FB6C300[v164]);
                    v169 = *(_BYTE *)(v168 + 1);
                    v12 -= *(_BYTE *)(v168 + 1);
                    v170 = *(_BYTE *)v168;
                    v4 = v261 >> v169;
                    v261 >>= v169;
                    if ( v170 & 0x10 )
                    {
                      *(_DWORD *)(v272 + 8) = v170 & 0xF;
                      v171 = *(_DWORD *)(v168 + 4);
                      *(_DWORD *)v272 = 4;
                      *(_DWORD *)(v272 + 12) = v171;
                      v19 = 4;
                    }
                    else
                    {
                      if ( v170 & 0x40 )
                      {
                        *(_DWORD *)v272 = 9;
                        *(_DWORD *)(v269 + 24) = "invalid distance code";
                        *(_DWORD *)(v260 + 32) = v261;
                        *(_DWORD *)(v260 + 28) = v12;
                        *(_DWORD *)(v269 + 4) = v11;
                        *(_DWORD *)(v269 + 8) += v13 - *(_DWORD *)v269;
                        *(_DWORD *)v269 = v13;
                        *(_DWORD *)(v260 + 52) = v263;
                        v150 = sub_6F7CBE30(v260, v269, -3);
                        goto LABEL_209;
                      }
                      *(_DWORD *)(v272 + 12) = v170;
                      *(_DWORD *)(v272 + 8) = v168 + 8 * *(_DWORD *)(v168 + 4);
                      v19 = *(_DWORD *)v272;
                    }
                    continue;
                  case 7:
                    if ( v12 > 7 )
                    {
                      v12 -= 8;
                      ++v11;
                      --v13;
                    }
                    v4 = v260;
                    *(_DWORD *)(v260 + 52) = v263;
                    v179 = sub_6F7CBE30(v260, v269, v267);
                    v263 = *(char **)(v260 + 52);
                    if ( *(_DWORD *)(v4 + 52) == *(_DWORD *)(v4 + 48) )
                    {
                      *(_DWORD *)v272 = 8;
LABEL_208:
                      *(_DWORD *)(v260 + 28) = v12;
                      *(_DWORD *)(v260 + 32) = v261;
                      *(_DWORD *)(v269 + 4) = v11;
                      v149 = v13 - *(_DWORD *)v269;
                      *(_DWORD *)v269 = v13;
                      *(_DWORD *)(v269 + 8) += v149;
                      *(_DWORD *)(v260 + 52) = v263;
                      v150 = sub_6F7CBE30(v260, v269, 1);
                    }
                    else
                    {
                      *(_DWORD *)(v260 + 28) = v12;
                      *(_DWORD *)(v260 + 32) = v261;
                      v180 = v13 - *(_DWORD *)v269;
                      *(_DWORD *)(v269 + 4) = v11;
                      *(_DWORD *)(v269 + 8) += v180;
                      *(_DWORD *)v269 = v13;
                      v150 = sub_6F7CBE30(v260, v269, v179);
                    }
                    goto LABEL_209;
                  case 6:
                    if ( v280 )
                    {
                      v182 = v263;
                      goto LABEL_255;
                    }
                    if ( v263 != *(char **)(v260 + 44) )
                      goto LABEL_251;
                    v244 = *(char **)(v260 + 48);
                    v182 = *(char **)(v260 + 40);
                    if ( v244 == v182 )
                      goto LABEL_251;
                    v280 = v263 - v182;
                    if ( v244 > v182 )
                      v280 = v244 - v182 - 1;
                    if ( v280 )
                      goto LABEL_255;
                    v263 = *(char **)(v260 + 40);
LABEL_251:
                    *(_DWORD *)(v260 + 52) = v263;
                    v181 = sub_6F7CBE30(v260, v269, v267);
                    v182 = *(char **)(v260 + 52);
                    v183 = *(_DWORD *)(v260 + 48);
                    v265 = v181;
                    if ( (unsigned int)v182 >= v183 )
                    {
                      v184 = *(char **)(v260 + 44);
                      v280 = *(_DWORD *)(v260 + 44) - (_DWORD)v182;
                    }
                    else
                    {
                      v280 = v183 - (_DWORD)v182 - 1;
                      v184 = *(char **)(v260 + 44);
                    }
                    if ( v182 == v184 )
                    {
                      v256 = *(_DWORD *)(v260 + 40);
                      if ( v183 != v256 )
                      {
                        if ( v183 <= v256 )
                        {
                          v280 = (int)&v182[-v256];
                          v182 = *(char **)(v260 + 40);
                        }
                        else
                        {
                          v280 = v183 - v256 - 1;
                          v182 = *(char **)(v260 + 40);
                        }
                      }
                    }
                    v4 = v280;
                    if ( v280 )
                    {
LABEL_255:
                      --v280;
                      v267 = 0;
                      v263 = v182 + 1;
                      *v182 = *(_DWORD *)(v272 + 8);
                      *(_DWORD *)v272 = 0;
                      v19 = 0;
                      continue;
                    }
                    *(_DWORD *)(v260 + 28) = v12;
                    *(_DWORD *)(v260 + 32) = v261;
                    *(_DWORD *)(v269 + 4) = v11;
                    *(_DWORD *)(v269 + 8) += v13 - *(_DWORD *)v269;
                    *(_DWORD *)v269 = v13;
                    *(_DWORD *)(v260 + 52) = v182;
                    v150 = sub_6F7CBE30(v260, v269, v265);
LABEL_209:
                    if ( v150 != 1 )
                      return sub_6F7CBE30(v260, v269, v150);
                    (*(void (__cdecl **)(_DWORD, _DWORD))(v269 + 36))(*(_DWORD *)(v269 + 40), *(_DWORD *)(v260 + 4));
                    v13 = *(_DWORD *)v269;
                    v11 = *(_DWORD *)(v269 + 4);
                    v151 = *(char **)(v260 + 52);
                    v261 = *(_DWORD *)(v260 + 32);
                    v12 = *(_DWORD *)(v260 + 28);
                    v152 = *(_DWORD *)(v260 + 48);
                    v263 = v151;
                    if ( (unsigned int)v151 >= v152 )
                      v270 = *(_DWORD *)(v260 + 44) - (_DWORD)v151;
                    else
                      v270 = v152 - (_DWORD)v151 - 1;
                    if ( *(_DWORD *)(v260 + 24) )
                    {
                      v20 = *(_DWORD *)(v269 + 4);
                      v21 = v260;
                      v267 = 0;
                      *(_DWORD *)v260 = 7;
LABEL_14:
                      *(_DWORD *)(v21 + 52) = v263;
                      v22 = sub_6F7CBE30(v21, v269, v267);
                      v263 = *(char **)(v21 + 52);
                      if ( *(_DWORD *)(v21 + 52) == *(_DWORD *)(v21 + 48) )
                      {
                        *(_DWORD *)v21 = 8;
LABEL_18:
                        *(_DWORD *)(v21 + 28) = v12;
                        *(_DWORD *)(v21 + 32) = v261;
                        v25 = v13 - *(_DWORD *)v269;
                        *(_DWORD *)(v269 + 4) = v20;
                        *(_DWORD *)(v269 + 8) += v25;
                        *(_DWORD *)v269 = v13;
                        *(_DWORD *)(v21 + 52) = v263;
                        result = sub_6F7CBE30(v21, v269, 1);
                      }
                      else
                      {
                        *(_DWORD *)(v21 + 28) = v12;
                        v23 = v13 - *(_DWORD *)v269;
                        *(_DWORD *)(v21 + 32) = v261;
                        *(_DWORD *)(v269 + 8) += v23;
                        *(_DWORD *)(v269 + 4) = v20;
                        *(_DWORD *)v269 = v13;
                        result = sub_6F7CBE30(v21, v269, v22);
                      }
                      return result;
                    }
                    *(_DWORD *)v260 = 0;
                    v267 = 0;
                    v7 = 0;
                    break;
                  case 1:
                    v185 = *(_DWORD *)(v272 + 12);
                    goto LABEL_257;
                  case 4:
                    v189 = *(_DWORD *)(v272 + 8);
                    v190 = v272;
                    if ( v189 <= v12 )
                      goto LABEL_271;
                    if ( !v11 )
                      goto LABEL_293;
                    v173 = v12;
                    v174 = v261;
                    while ( 1 )
                    {
                      ++v13;
                      --v11;
                      v191 = *(_BYTE *)(v13 - 1) << v173;
                      v173 += 8;
                      v174 |= v191;
                      if ( v189 <= v173 )
                        break;
                      if ( !v11 )
                      {
LABEL_292:
                        v261 = v174;
                        v267 = 0;
                        v12 = v173;
LABEL_293:
                        *(_DWORD *)(v260 + 32) = v261;
                        v194 = v269;
                        *(_DWORD *)(v260 + 28) = v12;
                        v198 = v13 - *(_DWORD *)v269;
                        *(_DWORD *)(v269 + 4) = 0;
                        *(_DWORD *)(v194 + 8) += v198;
                        *(_DWORD *)v269 = v13;
                        v196 = v260;
LABEL_288:
                        *(_DWORD *)(v196 + 52) = v263;
                        v150 = sub_6F7CBE30(v196, v194, v267);
                        goto LABEL_209;
                      }
                    }
                    v261 = v174;
                    v12 = v173;
                    v190 = v272;
                    v267 = 0;
LABEL_271:
                    v12 -= v189;
                    v153 = *(_DWORD *)(v190 + 12) + (v261 & dword_6FB6C300[v189]);
                    *(_DWORD *)(v190 + 12) = v153;
                    v261 >>= v189;
                    *(_DWORD *)v272 = 5;
LABEL_215:
                    v4 = (unsigned int)&v263[-v153];
                    for ( k = *(_DWORD *)(v260 + 40); v4 < k; v4 += *(_DWORD *)(v260 + 44) - k )
                      ;
                    v155 = (_DWORD *)v272;
                    if ( *(_DWORD *)(v272 + 4) )
                    {
                      v291 = v12;
                      v156 = (int)v263;
                      v157 = v280;
                      v158 = v267;
                      while ( 1 )
                      {
                        if ( v157 )
                        {
                          v161 = (_BYTE *)v156;
                        }
                        else
                        {
                          if ( *(_DWORD *)(v260 + 44) != v156 )
                            goto LABEL_220;
                          v161 = *(_BYTE **)(v260 + 40);
                          v266 = *(_BYTE **)(v260 + 48);
                          if ( v266 == v161 )
                            goto LABEL_220;
                          v157 = v156 - (_DWORD)v161;
                          if ( v266 > v161 )
                            v157 = v266 - v161 - 1;
                          if ( !v157 )
                          {
                            v156 = *(_DWORD *)(v260 + 40);
LABEL_220:
                            *(_DWORD *)(v260 + 52) = v156;
                            v159 = sub_6F7CBE30(v260, v269, v158);
                            v160 = *(_DWORD *)(v260 + 48);
                            v264 = v159;
                            v161 = *(_BYTE **)(v260 + 52);
                            if ( (unsigned int)v161 >= v160 )
                            {
                              v162 = *(_BYTE **)(v260 + 44);
                              v157 = *(_DWORD *)(v260 + 44) - (_DWORD)v161;
                            }
                            else
                            {
                              v162 = *(_BYTE **)(v260 + 44);
                              v157 = v160 - (_DWORD)v161 - 1;
                            }
                            if ( v161 == v162 )
                            {
                              v200 = *(_DWORD *)(v260 + 40);
                              if ( v160 != v200 )
                              {
                                if ( v160 <= v200 )
                                {
                                  v157 = (int)&v161[-v200];
                                  v161 = *(_BYTE **)(v260 + 40);
                                }
                                else
                                {
                                  v161 = *(_BYTE **)(v260 + 40);
                                  v157 = v160 - v200 - 1;
                                }
                              }
                            }
                            if ( !v157 )
                            {
                              *(_DWORD *)(v260 + 28) = v291;
                              *(_DWORD *)(v260 + 32) = v261;
                              v235 = v13 - *(_DWORD *)v269;
                              *(_DWORD *)(v269 + 4) = v11;
                              *(_DWORD *)(v269 + 8) += v235;
                              *(_DWORD *)v269 = v13;
                              *(_DWORD *)(v260 + 52) = v161;
                              v150 = sub_6F7CBE30(v260, v269, v264);
                              goto LABEL_209;
                            }
                            goto LABEL_224;
                          }
                        }
LABEL_224:
                        v163 = *(_BYTE *)v4;
                        --v157;
                        ++v4;
                        v156 = (int)(v161 + 1);
                        *v161 = v163;
                        if ( v4 == *(_DWORD *)(v260 + 44) )
                          v4 = *(_DWORD *)(v260 + 40);
                        v158 = 0;
                        v105 = (*(_DWORD *)(v272 + 4))-- == 1;
                        if ( v105 )
                        {
                          v263 = v161 + 1;
                          v12 = v291;
                          v155 = (_DWORD *)v272;
                          v280 = v157;
                          v267 = 0;
                          break;
                        }
                      }
                    }
                    *v155 = 0;
                    v19 = 0;
                    continue;
                  case 9:
                    *(_DWORD *)(v260 + 32) = v261;
                    *(_DWORD *)(v260 + 28) = v12;
                    *(_DWORD *)(v269 + 4) = v11;
                    v192 = v13 - *(_DWORD *)v269;
                    *(_DWORD *)v269 = v13;
                    *(_DWORD *)(v269 + 8) += v192;
                    *(_DWORD *)(v260 + 52) = v263;
                    v150 = sub_6F7CBE30(v260, v269, -3);
                    goto LABEL_209;
                  case 0:
                    v185 = *(_BYTE *)(v272 + 16);
                    v193 = *(_DWORD *)(v272 + 20);
                    *(_DWORD *)v272 = 1;
                    *(_DWORD *)(v272 + 8) = v193;
                    *(_DWORD *)(v272 + 12) = v185;
LABEL_257:
                    if ( v12 >= v185 )
                      goto LABEL_263;
                    if ( !v11 )
                      goto LABEL_287;
                    v165 = v12;
                    v166 = v261;
                    while ( 1 )
                    {
                      ++v13;
                      --v11;
                      v186 = *(_BYTE *)(v13 - 1) << v165;
                      v165 += 8;
                      v166 |= v186;
                      if ( v165 >= v185 )
                        break;
                      if ( !v11 )
                      {
LABEL_286:
                        v261 = v166;
                        v267 = 0;
                        v12 = v165;
LABEL_287:
                        *(_DWORD *)(v260 + 32) = v261;
                        v194 = v269;
                        *(_DWORD *)(v260 + 28) = v12;
                        v195 = v13 - *(_DWORD *)v269;
                        *(_DWORD *)(v269 + 4) = 0;
                        *(_DWORD *)(v194 + 8) += v195;
                        *(_DWORD *)v269 = v13;
                        v196 = v260;
                        goto LABEL_288;
                      }
                    }
                    v261 = v166;
                    v267 = 0;
                    v12 = v165;
LABEL_263:
                    v187 = *(_DWORD *)(v272 + 8) + 8 * (v261 & dword_6FB6C300[v185]);
                    v12 -= *(_BYTE *)(v187 + 1);
                    v4 = v261 >> *(_BYTE *)(v187 + 1);
                    v188 = *(_BYTE *)v187;
                    v261 >>= *(_BYTE *)(v187 + 1);
                    if ( !*(_BYTE *)v187 )
                    {
                      *(_DWORD *)(v272 + 8) = *(_DWORD *)(v187 + 4);
                      *(_DWORD *)v272 = 6;
                      v19 = 6;
                      continue;
                    }
                    if ( v188 & 0x10 )
                    {
                      *(_DWORD *)(v272 + 8) = *(_BYTE *)v187 & 0xF;
                      v201 = *(_DWORD *)(v187 + 4);
                      *(_DWORD *)v272 = 2;
                      *(_DWORD *)(v272 + 4) = v201;
                      v19 = 2;
                      continue;
                    }
                    if ( !(v188 & 0x40) )
                    {
                      v4 = v272;
                      *(_DWORD *)(v272 + 12) = v188;
                      *(_DWORD *)(v272 + 8) = v187 + 8 * *(_DWORD *)(v187 + 4);
                      v18 = (signed int *)v272;
                      goto LABEL_11;
                    }
                    if ( !(v188 & 0x20) )
                    {
                      *(_DWORD *)v272 = 9;
                      *(_DWORD *)(v269 + 24) = "invalid literal/length code";
                      *(_DWORD *)(v260 + 32) = v261;
                      *(_DWORD *)(v260 + 28) = v12;
                      *(_DWORD *)(v269 + 4) = v11;
                      *(_DWORD *)(v269 + 8) += v13 - *(_DWORD *)v269;
                      *(_DWORD *)v269 = v13;
                      *(_DWORD *)(v260 + 52) = v263;
                      v150 = sub_6F7CBE30(v260, v269, -3);
                      goto LABEL_209;
                    }
                    *(_DWORD *)v272 = 7;
                    v19 = 7;
                    continue;
                  default:
                    *(_DWORD *)(v260 + 28) = v12;
                    *(_DWORD *)(v260 + 32) = v261;
                    *(_DWORD *)(v269 + 4) = v11;
                    v197 = v13 - *(_DWORD *)v269;
                    *(_DWORD *)v269 = v13;
                    *(_DWORD *)(v269 + 8) += v197;
                    *(_DWORD *)(v260 + 52) = v263;
                    v150 = sub_6F7CBE30(v260, v269, -2);
                    goto LABEL_209;
                }
                goto LABEL_5;
              }
            }
            v118 = *(_DWORD *)(v260 + 16);
            v119 = v260;
            if ( v12 >= v118 )
              goto LABEL_169;
            if ( !v11 )
            {
              v126 = v260;
              v13 = v277;
              v127 = v113;
              goto LABEL_172;
            }
            v120 = v12;
            v13 = v277;
            while ( 1 )
            {
              ++v13;
              --v11;
              v121 = *(_BYTE *)(v13 - 1) << v120;
              v120 += 8;
              v113 |= v121;
              if ( v118 <= v120 )
                break;
              if ( !v11 )
              {
LABEL_174:
                v12 = v120;
                v126 = v260;
                v267 = 0;
                v127 = v113;
                goto LABEL_172;
              }
            }
            v277 = v13;
            v119 = v260;
            v12 = v120;
            v267 = 0;
LABEL_169:
            v122 = *(_DWORD *)(v119 + 20) + 8 * (v113 & dword_6FB6C300[v118]);
            v123 = *(_BYTE *)(v122 + 1);
            v295 = *(_BYTE *)(v122 + 1);
            v124 = *(_DWORD *)(v122 + 4);
            v262 = *(_DWORD *)(v122 + 4);
            if ( v124 <= 0xF )
            {
              v125 = *(_DWORD *)(v119 + 12);
              v113 >>= v123;
              v12 -= v123;
              *(_DWORD *)(v119 + 8) = v283 + 1;
              *(_DWORD *)(v125 + 4 * v283) = v262;
              v283 = *(_DWORD *)(v119 + 8);
              v114 = v260;
              continue;
            }
            break;
          }
          if ( v124 == 18 )
          {
            v299 = 7;
            v303 = 11;
            v138 = *(_BYTE *)(v122 + 1);
          }
          else
          {
            v137 = v124 - 14;
            v303 = 3;
            v138 = v123;
            v299 = v137;
          }
          v139 = v299 + v138;
          if ( v139 <= v12 )
            goto LABEL_197;
          if ( !v11 )
          {
            v13 = v277;
            v127 = v113;
            v126 = v260;
            goto LABEL_172;
          }
          v120 = v12;
          v13 = v277;
          while ( 1 )
          {
            ++v13;
            --v11;
            v140 = *(_BYTE *)(v13 - 1) << v120;
            v120 += 8;
            v113 |= v140;
            if ( v120 >= v139 )
              break;
            if ( !v11 )
              goto LABEL_174;
          }
          v12 = v120;
          v277 = v13;
          v267 = 0;
LABEL_197:
          v141 = v113 >> v295;
          v142 = v12 - v295 - v299;
          v143 = v303 + (v141 & dword_6FB6C300[v299]);
          v113 = v141 >> v299;
          v296 = v143;
          v300 = v283 + v143;
          if ( v290 >= v283 + v143 && (v262 != 16 || v283) )
          {
            v144 = *(_DWORD *)(v260 + 12);
            if ( v262 == 16 )
            {
              v145 = v283;
              v146 = *(_DWORD *)(v144 + 4 * v283 - 4);
            }
            else
            {
              v145 = v283;
              v146 = 0;
            }
            v284 = v142;
            v147 = 4 * v145;
            v148 = v296;
            while ( 1 )
            {
              *(_DWORD *)(v144 + v147) = v146;
              v147 += 4;
              if ( !--v148 )
                break;
              v144 = *(_DWORD *)(v260 + 12);
            }
            v12 = v284;
            v283 = v300;
            *(_DWORD *)(v260 + 8) = v300;
            v114 = v260;
            continue;
          }
          break;
        }
        v245 = v113;
        v246 = v11;
        v239 = v260;
        v13 = v277;
        (*(void (__cdecl **)(_DWORD, _DWORD))(v269 + 36))(*(_DWORD *)(v269 + 40), *(_DWORD *)(v260 + 12));
        *(_DWORD *)v260 = 9;
        *(_DWORD *)(v269 + 24) = "invalid bit length repeat";
        *(_DWORD *)(v260 + 32) = v245;
        v247 = v277 - *(_DWORD *)v269;
        *(_DWORD *)(v260 + 28) = v142;
        v241 = v269;
        *(_DWORD *)(v269 + 4) = v246;
        v242 = v247;
LABEL_367:
        *(_DWORD *)(v241 + 8) += v242;
        *(_DWORD *)v241 = v13;
        *(_DWORD *)(v239 + 52) = v263;
        return sub_6F7CBE30(v239, v241, -3);
      case 0:
        v98 = v13;
        if ( v12 > 2 )
          goto LABEL_140;
        if ( !v11 )
        {
LABEL_185:
          v126 = v260;
LABEL_186:
          v127 = v261;
LABEL_172:
          *(_DWORD *)(v126 + 28) = v12;
          *(_DWORD *)(v126 + 32) = v127;
          v128 = v13 - *(_DWORD *)v269;
          *(_DWORD *)(v269 + 4) = 0;
          *(_DWORD *)(v269 + 8) += v128;
          *(_DWORD *)v269 = v13;
          *(_DWORD *)(v126 + 52) = v263;
          return sub_6F7CBE30(v126, v269, v267);
        }
        v99 = v12;
        v98 = v13 + 1;
        --v11;
        v12 += 8;
        v267 = 0;
        v261 |= *(_BYTE *)v13 << v99;
LABEL_140:
        v4 = v260;
        *(_DWORD *)(v260 + 24) = v261 & 1;
        v100 = (v261 & 7) >> 1;
        if ( v100 == 2 )
        {
          v261 >>= 3;
          v12 -= 3;
          *(_DWORD *)v260 = 3;
          v13 = v98;
          v7 = 3;
        }
        else
        {
          if ( v100 == 3 )
          {
            *(_DWORD *)v260 = 9;
            *(_DWORD *)(v269 + 24) = "invalid block type";
            *(_DWORD *)(v260 + 32) = v261 >> 3;
            *(_DWORD *)(v260 + 28) = v12 - 3;
            *(_DWORD *)(v269 + 8) += v98 - *(_DWORD *)v269;
            *(_DWORD *)(v269 + 4) = v11;
            *(_DWORD *)v269 = v98;
            *(_DWORD *)(v260 + 52) = v263;
            return sub_6F7CBE30(v260, v269, -3);
          }
          if ( v100 == 1 )
          {
            v285 = v98;
            v199 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(v269 + 32))(*(_DWORD *)(v269 + 40), 1, 28);
            if ( !v199 )
            {
              *(_DWORD *)(v260 + 4) = 0;
              *(_DWORD *)(v260 + 28) = v12;
              v243 = v285 - *(_DWORD *)v269;
              *(_DWORD *)(v260 + 32) = v261;
              *(_DWORD *)(v269 + 4) = v11;
              *(_DWORD *)(v269 + 8) += v243;
              *(_DWORD *)v269 = v285;
              *(_DWORD *)(v260 + 52) = v263;
              return sub_6F7CBE30(v260, v269, -4);
            }
            *(_DWORD *)v199 = 0;
            v12 -= 3;
            *(_BYTE *)(v199 + 16) = 9;
            *(_BYTE *)(v199 + 17) = 5;
            *(_DWORD *)(v199 + 20) = &unk_6FB6C460;
            *(_DWORD *)(v199 + 24) = &unk_6FB6C360;
            v261 >>= 3;
            *(_DWORD *)(v260 + 4) = v199;
            v7 = 6;
            *(_DWORD *)v260 = 6;
            v13 = v285;
          }
          else
          {
            *(_DWORD *)v260 = 1;
            v101 = ((_BYTE)v12 - 3) & 7;
            v261 = v261 >> 3 >> v101;
            v12 = v12 - 3 - v101;
            v7 = 1;
            v13 = v98;
          }
        }
        goto LABEL_5;
      case 1:
        v102 = v13;
        v103 = v12;
        v4 = v11;
        v104 = v12 < 0x1F;
        v105 = v12 == 31;
        v9 = v102;
        if ( !v104 && !v105 )
          goto LABEL_154;
        if ( !v11 )
        {
          v12 = v103;
          v126 = v260;
          v13 = v102;
          goto LABEL_186;
        }
        v106 = v11 - 1;
        v107 = v102 + 1;
        v108 = v103 + 8;
        v261 |= *(_BYTE *)v9 << v103;
        if ( v103 + 8 > 0x1F )
          goto LABEL_456;
        if ( v4 == 1 )
          goto LABEL_295;
        v106 = v4 - 2;
        v107 = v9 + 2;
        v109 = *(_BYTE *)(v9 + 1) << v108;
        v108 = v103 + 16;
        v261 |= v109;
        if ( v103 + 16 > 0x1F )
          goto LABEL_456;
        if ( v4 == 2 )
          goto LABEL_295;
        v106 = v4 - 3;
        v107 = v9 + 3;
        v110 = *(_BYTE *)(v9 + 2) << v108;
        v108 = v103 + 24;
        v261 |= v110;
        if ( v103 + 24 > 0x1F )
        {
LABEL_456:
          v103 = v108;
          v4 = v106;
        }
        else
        {
          if ( v4 == 3 )
          {
LABEL_295:
            v126 = v260;
            v12 = v108;
            v13 = v107;
            v267 = 0;
            goto LABEL_186;
          }
          v107 = v9 + 4;
          v4 -= 4;
          v103 += 32;
          v261 |= *(_BYTE *)(v9 + 3) << v108;
        }
        v9 = v107;
        v267 = 0;
LABEL_154:
        v111 = ~v261 >> 16;
        if ( v111 != (unsigned __int16)v261 )
        {
          v248 = v9;
          v239 = v260;
          v12 = v103;
          v13 = v248;
          v238 = v269;
          *(_DWORD *)v260 = 9;
          *(_DWORD *)(v269 + 24) = "invalid stored block lengths";
          goto LABEL_366;
        }
        v7 = 2;
        *(_DWORD *)(v260 + 4) = v111;
        if ( !v111 )
          v7 = *(_DWORD *)(v260 + 24) >= 1u ? 7 : 0;
        *(_DWORD *)v260 = v7;
        v261 = 0;
        v8 = 0;
        continue;
      case 9:
        *(_DWORD *)(v260 + 28) = v12;
        *(_DWORD *)(v260 + 32) = v261;
        v112 = v13 - *(_DWORD *)v269;
        *(_DWORD *)(v269 + 4) = v11;
        *(_DWORD *)(v269 + 8) += v112;
        *(_DWORD *)v269 = v13;
        *(_DWORD *)(v260 + 52) = v263;
        return sub_6F7CBE30(v260, v269, -3);
      case 4:
        v45 = *(_DWORD *)(v260 + 8);
        if ( (*(_DWORD *)(v260 + 4) >> 10) + 4 <= v45 )
          goto LABEL_43;
        v46 = v12;
        v44 = v261;
        v273 = v11;
        v47 = v260;
        goto LABEL_38;
      case 5:
        v113 = v261;
        v277 = v13;
        v283 = *(_DWORD *)(v260 + 8);
        v114 = v260;
        goto LABEL_162;
      default:
        v129 = v12;
        v130 = v13;
        v131 = v129;
        *(_DWORD *)(v260 + 28) = v130;
        *(_DWORD *)(v260 + 32) = v261;
        v132 = v129 - *(_DWORD *)v269;
        *(_DWORD *)(v269 + 4) = v4;
        *(_DWORD *)(v269 + 8) += v132;
        *(_DWORD *)v269 = v131;
        *(_DWORD *)(v260 + 52) = v263;
        return sub_6F7CBE30(v260, v269, -2);
    }
  }
}
