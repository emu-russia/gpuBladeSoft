int __usercall sub_6F74E900@<eax>(__int64 a1@<edx:eax>, unsigned int a2@<ecx>, unsigned int a3@<ebx>, _DWORD *a4@<ebp>, unsigned int a5@<edi>, unsigned int a6@<esi>)
{
  int v6; // edx@13
  unsigned int v7; // edx@26
  unsigned int v8; // edi@26
  unsigned int v9; // ebx@28
  unsigned int v10; // ecx@28
  int v11; // edx@82
  int v12; // esi@82
  int v13; // ecx@85
  int v14; // ebp@85
  int v15; // edx@87
  int v16; // ebx@92
  int v17; // edi@92
  int v18; // esi@144
  __int16 v19; // ST30_2@144
  int v20; // ebx@144
  int v21; // ebp@144
  int v22; // edi@144
  int v23; // edx@147
  int v24; // edx@149
  int v25; // edx@152
  int v26; // edi@154
  int v27; // ebx@173
  __int16 v28; // di@173
  int v29; // ebp@178
  __int16 v30; // bx@178
  __int16 v31; // di@178
  __int16 v32; // si@178
  int v33; // ebp@183
  __int16 v34; // si@183
  unsigned int v35; // esi@190
  unsigned int v36; // edi@190
  unsigned int v37; // edx@192
  unsigned int v38; // ecx@192
  int v39; // esi@205
  int v40; // edi@205
  int v41; // esi@207
  int v42; // ebx@207
  int v43; // edx@207
  int v44; // ST00_4@210
  int v45; // ST08_4@211
  int v46; // ST04_4@211
  int v47; // ST00_4@211
  int v48; // ST08_4@212
  int v49; // ST04_4@212
  int v50; // ST00_4@212
  int v51; // eax@213
  int v52; // ecx@213
  int v53; // ST04_4@213
  int v54; // edi@217
  int v55; // ebp@217
  int v56; // edx@218
  signed int v57; // ebx@219
  int v58; // esi@220
  int v59; // edi@220
  int v60; // ST00_4@221
  int v61; // ST00_4@222
  int v62; // ST00_4@223
  int v63; // eax@223
  int v64; // ebx@223
  int v65; // ebx@233
  int v66; // edi@233
  int v67; // ebp@233
  int v68; // esi@233
  __int16 v69; // si@243
  int v70; // ebx@243
  int v71; // esi@243
  int v72; // edx@243
  int v73; // edi@243
  int v74; // ebp@243
  unsigned int v75; // ecx@243
  int v76; // ebp@243
  int v77; // eax@245
  int v78; // esi@247
  char v79; // bp@250
  int v80; // edx@250
  int v81; // eax@250
  int v82; // eax@254
  unsigned int v83; // ebx@254
  unsigned int v84; // esi@254
  __int64 v85; // rax@260
  int v86; // ebx@263
  int v87; // esi@263
  signed __int64 v88; // rax@264
  int v89; // edi@266
  signed int v90; // eax@269
  signed int v91; // edi@271
  signed int v92; // ebp@271
  signed int v93; // edi@273
  unsigned int v94; // edi@276
  unsigned int v95; // esi@276
  signed __int64 v96; // kr08_8@277
  int v97; // ebx@277
  signed __int64 v98; // rax@278
  int v99; // ebp@280
  signed __int64 v100; // kr10_8@281
  signed __int64 v101; // rax@281
  int v102; // ebp@283
  signed __int64 v103; // kr18_8@284
  signed __int64 v104; // rax@284
  int v105; // ebp@286
  signed __int64 v106; // rax@288
  int v107; // ebp@290
  char v108; // bl@296
  int v109; // edx@296
  int v110; // eax@296
  int v111; // eax@300
  unsigned int v112; // edi@300
  unsigned int v113; // edx@300
  __int64 v114; // rax@306
  signed int v115; // ebx@309
  unsigned int v116; // edi@309
  unsigned int v117; // esi@309
  char v118; // cl@309
  int v119; // ebp@309
  int v120; // esi@310
  int v121; // ebp@315
  int v122; // esi@319
  unsigned __int64 v123; // ST40_8@322
  signed __int64 v124; // kr30_8@323
  signed int v125; // ebx@323
  signed __int64 v126; // rax@324
  signed __int64 v127; // kr38_8@327
  signed __int64 v128; // rax@327
  signed __int64 v129; // kr40_8@330
  signed __int64 v130; // rax@330
  signed __int64 v131; // rax@334
  unsigned int v132; // ebx@340
  unsigned int v133; // edx@340
  unsigned int v134; // ecx@342
  unsigned int v135; // ebx@348
  unsigned int v137; // [sp+30h] [bp-BCh]@0
  int v138; // [sp+30h] [bp-BCh]@178
  int v139; // [sp+30h] [bp-BCh]@205
  int v140; // [sp+30h] [bp-BCh]@220
  int v141; // [sp+30h] [bp-BCh]@233
  __int64 v142; // [sp+30h] [bp-BCh]@254
  __int64 v143; // [sp+30h] [bp-BCh]@300
  unsigned int v144; // [sp+38h] [bp-B4h]@0
  signed int v145; // [sp+38h] [bp-B4h]@98
  int v146; // [sp+38h] [bp-B4h]@144
  signed int v147; // [sp+38h] [bp-B4h]@161
  int v148; // [sp+38h] [bp-B4h]@178
  int v149; // [sp+38h] [bp-B4h]@233
  int v150; // [sp+38h] [bp-B4h]@243
  unsigned int v151; // [sp+38h] [bp-B4h]@309
  unsigned int v152; // [sp+3Ch] [bp-B0h]@0
  char v153; // [sp+3Ch] [bp-B0h]@144
  int v154; // [sp+3Ch] [bp-B0h]@207
  int v155; // [sp+3Ch] [bp-B0h]@220
  int v156; // [sp+3Ch] [bp-B0h]@233
  int v157; // [sp+3Ch] [bp-B0h]@243
  unsigned int v158; // [sp+3Ch] [bp-B0h]@263
  unsigned int v159; // [sp+40h] [bp-ACh]@0
  signed int v160; // [sp+40h] [bp-ACh]@144
  int v161; // [sp+40h] [bp-ACh]@205
  int v162; // [sp+40h] [bp-ACh]@233
  __int64 v163; // [sp+40h] [bp-ACh]@247
  int v164; // [sp+40h] [bp-ACh]@291
  unsigned __int64 v165; // [sp+40h] [bp-ACh]@304
  unsigned __int64 v166; // [sp+40h] [bp-ACh]@313
  int v167; // [sp+40h] [bp-ACh]@326
  int v168; // [sp+40h] [bp-ACh]@329
  int v169; // [sp+40h] [bp-ACh]@332
  int v170; // [sp+40h] [bp-ACh]@336
  int v171; // [sp+40h] [bp-ACh]@359
  int v172; // [sp+40h] [bp-ACh]@361
  int v173; // [sp+40h] [bp-ACh]@363
  unsigned int v174; // [sp+48h] [bp-A4h]@0
  int v175; // [sp+48h] [bp-A4h]@144
  int v176; // [sp+48h] [bp-A4h]@159
  int v177; // [sp+48h] [bp-A4h]@205
  __int64 v178; // [sp+48h] [bp-A4h]@247
  unsigned __int64 v179; // [sp+48h] [bp-A4h]@258
  unsigned int v180; // [sp+50h] [bp-9Ch]@0
  int v181; // [sp+50h] [bp-9Ch]@144
  int v182; // [sp+50h] [bp-9Ch]@205
  int v183; // [sp+50h] [bp-9Ch]@223
  __int64 v184; // [sp+50h] [bp-9Ch]@245
  int v185; // [sp+50h] [bp-9Ch]@263
  char v186; // [sp+50h] [bp-9Ch]@296
  char v187; // [sp+50h] [bp-9Ch]@313
  signed int v188; // [sp+58h] [bp-94h]@1
  unsigned int v189; // [sp+58h] [bp-94h]@243
  int v190; // [sp+58h] [bp-94h]@309
  int v191; // [sp+5Ch] [bp-90h]@1
  unsigned int v192; // [sp+5Ch] [bp-90h]@243
  unsigned int v193; // [sp+60h] [bp-8Ch]@0
  signed int v194; // [sp+60h] [bp-8Ch]@79
  __int16 v195; // [sp+60h] [bp-8Ch]@144
  int v196; // [sp+60h] [bp-8Ch]@220
  __int64 v197; // [sp+60h] [bp-8Ch]@247
  int v198; // [sp+60h] [bp-8Ch]@266
  unsigned int v199; // [sp+68h] [bp-84h]@0
  signed int v200; // [sp+68h] [bp-84h]@217
  unsigned int v201; // [sp+68h] [bp-84h]@242
  char v202; // [sp+6Ch] [bp-80h]@0
  int v203; // [sp+6Ch] [bp-80h]@97
  int v204; // [sp+6Ch] [bp-80h]@217
  unsigned int v205; // [sp+70h] [bp-7Ch]@0
  int v206; // [sp+70h] [bp-7Ch]@96
  int v207; // [sp+70h] [bp-7Ch]@217
  __int64 v208; // [sp+70h] [bp-7Ch]@245
  unsigned int v209; // [sp+78h] [bp-74h]@0
  int v210; // [sp+78h] [bp-74h]@96
  int v211; // [sp+78h] [bp-74h]@218
  unsigned int v212; // [sp+78h] [bp-74h]@242
  int v213; // [sp+7Ch] [bp-70h]@97
  int v214; // [sp+7Ch] [bp-70h]@217
  unsigned int v215; // [sp+7Ch] [bp-70h]@243
  int v216; // [sp+80h] [bp-6Ch]@87
  signed int v217; // [sp+80h] [bp-6Ch]@160
  unsigned int v218; // [sp+80h] [bp-6Ch]@243
  int v219; // [sp+84h] [bp-68h]@96
  int v220; // [sp+84h] [bp-68h]@219
  int v221; // [sp+88h] [bp-64h]@94
  int v222; // [sp+88h] [bp-64h]@161
  int v223; // [sp+88h] [bp-64h]@247
  int v224; // [sp+8Ch] [bp-60h]@243
  signed int v225; // [sp+90h] [bp-5Ch]@159
  int v226; // [sp+94h] [bp-58h]@218
  signed int v227; // [sp+98h] [bp-54h]@218
  signed int v228; // [sp+9Ch] [bp-50h]@144
  int v229; // [sp+A0h] [bp-4Ch]@158
  signed int v230; // [sp+A4h] [bp-48h]@158
  int v231; // [sp+A8h] [bp-44h]@159
  int v232; // [sp+ACh] [bp-40h]@160
  int v233; // [sp+B0h] [bp-3Ch]@149
  int v234; // [sp+B4h] [bp-38h]@158
  int v235; // [sp+B8h] [bp-34h]@156
  int v236; // [sp+BCh] [bp-30h]@158
  int v237; // [sp+C0h] [bp-2Ch]@243
  int v238; // [sp+C4h] [bp-28h]@243
  int v239; // [sp+C8h] [bp-24h]@243
  int v240; // [sp+CCh] [bp-20h]@243
  unsigned int v241; // [sp+DCh] [bp-10h]@1
  unsigned int v242; // [sp+E0h] [bp-Ch]@1
  unsigned int v243; // [sp+E4h] [bp-8h]@1
  _DWORD *v244; // [sp+E8h] [bp-4h]@1

  LODWORD(a1) = a1 - 32;
  v244 = a4;
  v243 = a5;
  v242 = a6;
  v241 = a3;
  v191 = a2;
  v188 = HIDWORD(a1);
  switch ( (_DWORD)a1 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
      LODWORD(a1) = sub_6F74DF30(SHIDWORD(a1), a2, a2, a5);
      return a1;
    case 4:
    case 5:
    case 6:
    case 7:
      if ( dword_6FBB9558 == 1 )
      {
        LODWORD(a1) = sub_6F738A40(dword_6FBB9558);
      }
      else if ( dword_6FBB9558 <= 1 )
      {
        if ( !dword_6FBB9558 && dword_6FBB553C >= 0 )
        {
          if ( dword_6FBB553C <= 1 )
          {
            LODWORD(a1) = sub_6F73D870(SHIDWORD(a1), a2);
          }
          else if ( dword_6FBB553C == 2 )
          {
            if ( sub_6F74AF80(a4) )
            {
LABEL_12:
              LODWORD(a1) = sub_6F74CD20(v188, v191);
              return a1;
            }
            LODWORD(a1) = sub_6F73D870(v188, v191);
          }
        }
      }
      else if ( dword_6FBB9558 == 2 )
      {
        LODWORD(a1) = sub_6F745980(a2);
      }
      else if ( dword_6FBB9558 == 3 && dword_6FBB553C >= 0 )
      {
        if ( dword_6FBB553C > 1 )
        {
          if ( dword_6FBB553C != 2 )
            return a1;
          if ( sub_6F74AF80(a4) )
            goto LABEL_12;
        }
        if ( dword_6FBB9564 )
        {
          v132 = 0;
          v133 = 65280;
          if ( dword_6FBB9564 == 1 )
            v132 = 16711680;
          v134 = 0;
          if ( dword_6FBB9564 != 1 )
            v133 = 0;
          if ( dword_6FBB9564 == 1 )
            v134 = 255;
        }
        else
        {
          v134 = dword_70041E70;
          v132 = dword_70041E70;
          v133 = dword_70041E70;
        }
        LODWORD(a1) = sub_6F744610(v188, v191, v134, v133, v132);
      }
      return a1;
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
      v6 = dword_6FBB9558;
      if ( dword_6FBB9558 == 1 )
        goto LABEL_204;
      if ( dword_6FBB9558 > 1 )
        goto LABEL_15;
      if ( !dword_6FBB9558 )
      {
        v175 = dword_6FBBDB98;
        v181 = dword_6FBBDBA0;
        v160 = (unsigned int)dword_6FBBDBC8 < 1 ? 1 : -1;
        v18 = (unsigned __int8)byte_6FBB5054;
        v146 = dword_6FBBDBA4;
        v19 = (signed __int16)(32 * word_70041E82) >> 5;
        v20 = dword_70041E6C;
        v228 = (unsigned int)dword_6FBBDBCC < 1 ? 1 : -1;
        v195 = (signed __int16)(32 * word_70041E80) >> 5;
        v21 = dword_70041E68;
        v22 = dword_6FBBDB9C;
        v153 = byte_6FBB5050;
        nullsub_3();
        LODWORD(a1) = (signed __int16)((signed __int16)(32 * (dword_6FBBDB94 + v19)) >> 5);
        HIDWORD(a1) = v22 - a1;
        if ( v22 - (signed int)a1 > 0 )
        {
          v20 -= HIDWORD(a1);
          v18 += HIDWORD(a1);
          LODWORD(a1) = (signed __int16)((signed __int16)(32 * v22) >> 5);
        }
        if ( (signed int)a1 - v146 < 0 )
        {
          v23 = v20 + a1 - v146;
          if ( v23 > 0 )
            v20 -= v23;
          v233 = (signed __int16)((signed __int16)(32 * (dword_6FBBDB90 + v195)) >> 5);
          v24 = v175 - v233;
          if ( v175 - v233 > 0 )
          {
            v153 += v24;
            v21 -= v24;
            v233 = (signed __int16)((signed __int16)(32 * v175) >> 5);
          }
          if ( v233 - v181 < 0 )
          {
            v25 = v21 + v233 - v181;
            if ( v25 > 0 )
              v21 -= v25;
            v26 = 0;
            HIDWORD(a1) = 0;
            if ( v20 >= 0 )
              HIDWORD(a1) = v20;
            v235 = v21;
            if ( v21 >= 0 )
              v26 = v21;
            v234 = v26;
            v229 = HIDWORD(a1) - 1;
            v230 = dword_6FBB52F8 * a1;
            LODWORD(a1) = v18;
            v236 = (unsigned __int8)v18;
            if ( v20 > 0 )
            {
              v231 = 0;
              v225 = 0;
              v176 = (unsigned __int8)v153;
              do
              {
                v217 = dword_6FBB52F8;
                v232 = dword_6FBB52F8 - 1;
                if ( dword_6FBB52F8 )
                {
                  v147 = v230;
                  v222 = v230 + dword_6FBB52F8;
                  while ( 1 )
                  {
                    if ( sub_6F71F0C0(v147) )
                    {
                      if ( v191 == v225 % v188 )
                      {
                        v200 = dword_6FBB52F4;
                        v214 = dword_6FBB52F4 * v233;
                        v54 = dword_6FBB52F4 * v233 + dword_6FBB52F4 * (v147 << 10);
                        v55 = dword_6FBB5068 + 2 * v54;
                        v204 = dword_6FBB505C + 4 * v54;
                        v207 = v234 - 1;
                        if ( v235 > 0 )
                        {
                          v211 = 0;
                          v56 = dword_6FBB52F4;
                          v227 = v217 + ((v147 + v231 - v230) << dword_6FD4098C);
                          v226 = v236 << dword_6FD4098C;
                          while ( 1 )
                          {
                            v57 = v56;
                            v220 = v56 - 1;
                            if ( v56 )
                            {
                              v58 = v204;
                              v59 = v211;
                              v140 = v226 + v228 * (v227 / v217);
                              v155 = v214 - 1 - v211;
                              v196 = v55 + 2 * v200;
                              if ( !(v200 & 1) )
                              {
                                v60 = v55;
                                v55 += 2;
                                v59 = v211 + 1;
                                v58 = v204 + 4;
                                dword_6FBB5058(
                                  v60,
                                  v204,
                                  v211 + 1 + v155,
                                  v147,
                                  (unsigned __int8)dword_70041E70,
                                  BYTE1(dword_70041E70),
                                  BYTE2(dword_70041E70),
                                  (v176 << dword_6FD4098C) + v160 * ((v200 + (v211 << dword_6FD4098C)) / v200),
                                  v140);
                                v57 = dword_6FBB52F4;
                              }
                              while ( 1 )
                              {
                                v62 = v55;
                                v55 += 2;
                                v63 = (v176 << dword_6FD4098C) + v160 * ((v57 + (v59 << dword_6FD4098C)) / v57);
                                v64 = v59 + 1;
                                dword_6FBB5058(
                                  v62,
                                  v58,
                                  v59 + 1 + v155,
                                  v147,
                                  (unsigned __int8)dword_70041E70,
                                  BYTE1(dword_70041E70),
                                  BYTE2(dword_70041E70),
                                  v63,
                                  v140);
                                v183 = v58 + 4;
                                if ( v55 == v196 )
                                  break;
                                v59 += 2;
                                v61 = v55;
                                v58 += 8;
                                v55 += 2;
                                dword_6FBB5058(
                                  v61,
                                  v183,
                                  v59 + v155,
                                  v147,
                                  (unsigned __int8)dword_70041E70,
                                  BYTE1(dword_70041E70),
                                  BYTE2(dword_70041E70),
                                  (v176 << dword_6FD4098C)
                                + v160 * (((v64 << dword_6FD4098C) + dword_6FBB52F4) / dword_6FBB52F4),
                                  v140);
                                v57 = dword_6FBB52F4;
                              }
                              v211 += v220 + 1;
                              v214 += v220 + 1;
                              v204 += 4 * v200;
                            }
                            if ( --v207 == -1 )
                              break;
                            v56 = dword_6FBB52F4;
                            v200 = dword_6FBB52F4;
                          }
                        }
                      }
                      ++v225;
                    }
                    if ( ++v147 == v222 )
                      break;
                    v217 = dword_6FBB52F8;
                  }
                  LODWORD(a1) = v232;
                  v231 += v232 + 1;
                  v230 += v232 + 1;
                }
                --v229;
              }
              while ( v229 != -1 );
            }
          }
        }
      }
      return a1;
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
      if ( dword_6FBB9558 == 1 )
      {
        v149 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
        v65 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
        v66 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
        v67 = (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
        v68 = (signed __int16)((signed __int16)(32 * word_70041E8E) >> 5);
        v141 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
        v156 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
        v162 = (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
        if ( dword_6FBB955C == 1 )
        {
          v193 = 0xFFFFFF;
          v199 = 16711680;
          v180 = 65280;
          v174 = 255;
        }
        else if ( dword_6FBB955C == 2 )
        {
          v193 = 0xFFFFFF;
          v199 = 0xFFFFFF;
          v180 = 0xFFFFFF;
          v174 = 0xFFFFFF;
        }
        else if ( !dword_6FBB955C )
        {
          v174 = dword_70041E70;
          v193 = dword_70041E70;
          v199 = dword_70041E70;
          v180 = dword_70041E70;
        }
        sub_6F7370D0(v149, v65, v141, v66, v174, v180);
        sub_6F7370D0(v141, v66, v162, v68, v180, v193);
        sub_6F7370D0(v162, v68, v156, v67, v193, v199);
        LODWORD(a1) = sub_6F7370D0(v156, v67, v149, v65, v199, v174);
      }
      else
      {
        if ( dword_6FBB9558 <= 1 )
        {
          if ( dword_6FBB9558 )
            return a1;
          if ( dword_6FBB553C == 1 )
          {
            LODWORD(a1) = sub_6F741670(SHIDWORD(a1), a2);
            return a1;
          }
          if ( dword_6FBB553C != 2 )
            return a1;
          if ( !sub_6F74ADF0(a4) )
          {
            LODWORD(a1) = sub_6F741670(v188, v191);
            return a1;
          }
          goto LABEL_351;
        }
        if ( dword_6FBB9558 == 2 )
        {
          v29 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
          v138 = (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
          v148 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
          v30 = (signed __int16)(32 * word_70041E8E) >> 5;
          v31 = (signed __int16)(32 * word_70041E86) >> 5;
          v32 = (signed __int16)(32 * word_70041E8A) >> 5;
          if ( dword_6FBB9560 == 1 )
          {
            v205 = 0xFFFFFF;
            v209 = 16711680;
            v159 = 65280;
            v152 = 255;
          }
          else if ( dword_6FBB9560 == 2 )
          {
            v205 = 0xFFFFFF;
            v209 = 0xFFFFFF;
            v159 = 0xFFFFFF;
            v152 = 0xFFFFFF;
          }
          else if ( !dword_6FBB9560 )
          {
            v152 = dword_70041E70;
            v205 = dword_70041E70;
            v209 = dword_70041E70;
            v159 = dword_70041E70;
          }
          sub_6F684560(
            (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
            (signed __int16)(32 * word_70041E82) >> 5,
            v152);
          sub_6F684560(v29, v31, v159);
          sub_6F684560(v148, v32, v209);
          LODWORD(a1) = sub_6F684560(v138, v30, v205);
        }
        else
        {
          if ( dword_6FBB9558 != 3 )
            return a1;
          LODWORD(a1) = dword_6FBB553C;
          if ( dword_6FBB553C != 1 )
          {
            if ( dword_6FBB553C != 2 )
              return a1;
            if ( !sub_6F74ADF0(a4) )
            {
              if ( dword_6FBB9564 )
              {
                v7 = 0;
                v8 = 0;
                if ( dword_6FBB9564 == 1 )
                  v7 = 16711680;
                v9 = 65280;
                v10 = 0;
                if ( dword_6FBB9564 == 1 )
                  v8 = 0xFFFFFF;
                if ( dword_6FBB9564 != 1 )
                  v9 = 0;
                if ( dword_6FBB9564 == 1 )
                  v10 = 255;
              }
              else
              {
                v10 = dword_70041E70;
                v8 = dword_70041E70;
                v7 = dword_70041E70;
                v9 = dword_70041E70;
              }
              LODWORD(a1) = sub_6F7435E0(v188, v191, v10, v9, v7, v8);
              return a1;
            }
LABEL_351:
            LODWORD(a1) = sub_6F747420(v188, v191);
            return a1;
          }
          if ( dword_6FBB9564 )
          {
            v35 = 0;
            v36 = 0;
            if ( dword_6FBB9564 == 1 )
              v35 = 16711680;
            v37 = 65280;
            v38 = 0;
            if ( dword_6FBB9564 != 1 )
              v37 = 0;
            if ( dword_6FBB9564 == 1 )
            {
              v36 = 0xFFFFFF;
              if ( dword_6FBB9564 == 1 )
                v38 = 255;
            }
          }
          else
          {
            v38 = dword_70041E70;
            v36 = dword_70041E70;
            v35 = dword_70041E70;
            v37 = dword_70041E70;
          }
          LODWORD(a1) = sub_6F7435E0(v188, v191, v38, v37, v35, v36);
        }
      }
      return a1;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      LODWORD(a1) = dword_6FBB9558;
      if ( dword_6FBB9558 == 1 )
        goto LABEL_202;
      if ( dword_6FBB9558 <= 1 )
      {
        if ( !dword_6FBB9558 && dword_6FBB553C >= 0 )
        {
          if ( dword_6FBB553C <= 1 )
          {
            LODWORD(a1) = sub_6F73E990(SHIDWORD(a1), a2);
            return a1;
          }
          if ( dword_6FBB553C == 2 )
          {
            if ( !sub_6F74AF80(a4) )
            {
              LODWORD(a1) = sub_6F73E990(v188, v191);
              return a1;
            }
LABEL_43:
            LODWORD(a1) = sub_6F7498F0(v188, v191);
            return a1;
          }
        }
      }
      else
      {
        if ( dword_6FBB9558 == 2 )
          goto LABEL_171;
        if ( dword_6FBB9558 == 3 && dword_6FBB553C >= 0 )
        {
          if ( dword_6FBB553C <= 1 )
            goto LABEL_238;
          if ( dword_6FBB553C == 2 )
          {
            if ( !sub_6F74AF80((_DWORD *)2) )
              goto LABEL_238;
            goto LABEL_43;
          }
        }
      }
      return a1;
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
      if ( dword_6FBB9558 == 1 )
        goto LABEL_203;
      if ( dword_6FBB9558 <= 1 )
      {
        if ( !dword_6FBB9558 )
        {
          LODWORD(a1) = dword_6FBB553C;
          if ( dword_6FBB553C == 1 )
          {
            LODWORD(a1) = sub_6F73F910(SHIDWORD(a1), a2);
            return a1;
          }
          if ( dword_6FBB553C == 2 )
          {
            if ( !sub_6F74ADF0(a4) )
            {
              LODWORD(a1) = sub_6F73F910(v188, v191);
              return a1;
            }
LABEL_51:
            LODWORD(a1) = sub_6F745A80(v188, v191);
            return a1;
          }
        }
      }
      else
      {
        if ( dword_6FBB9558 == 2 )
          goto LABEL_170;
        if ( dword_6FBB9558 == 3 )
        {
          if ( dword_6FBB553C == 1 )
            goto LABEL_188;
          if ( dword_6FBB553C == 2 )
          {
            if ( !sub_6F74ADF0(a4) )
              goto LABEL_188;
            goto LABEL_51;
          }
        }
      }
      return a1;
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
      LODWORD(a1) = dword_6FBB9558;
      if ( dword_6FBB9558 == 1 )
      {
        if ( dword_6FBB955C )
        {
          if ( dword_6FBB955C >= 0 && dword_6FBB955C <= 2 )
          {
            LOBYTE(v212) = -1;
            LOBYTE(v201) = -1;
            v202 = -1;
LABEL_243:
            v69 = (signed __int16)(32 * word_70041E86) >> 5;
            v70 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
            v157 = dword_6FBB52F4 * dword_6FBBDB98;
            v215 = dword_6FBB52F4 * dword_6FBBDBA0;
            v150 = dword_6FBB52F8 * dword_6FBBDB9C;
            v218 = dword_6FBB52F8 * dword_6FBBDBA4;
            v237 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
            v238 = v70 * dword_6FBB52F4;
            v239 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
            v240 = v69 * dword_6FBB52F8;
            sub_6F733480(
              (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
              (signed __int16)(32 * word_70041E82) >> 5,
              &v237,
              &v239);
            sub_6F733480(v70, v69, &v238, &v240);
            v71 = v237;
            v224 = dword_6FBB52F4;
            v72 = v238;
            v238 += dword_6FBB52F4 * dword_6FBBDB90;
            v73 = v239;
            v192 = dword_6FBB52F4 * dword_6FBBDB90 + v237;
            v237 += dword_6FBB52F4 * dword_6FBBDB90;
            v74 = v239;
            v189 = dword_6FBB52F8 * dword_6FBBDB94 + v239;
            v239 += dword_6FBB52F8 * dword_6FBBDB94;
            v75 = v240 + dword_6FBB52F8 * dword_6FBBDB94;
            v76 = v74 - v240;
            if ( v240 - v73 >= 0 )
              v76 = v240 - v73;
            LODWORD(v184) = v238;
            v77 = v72 - v71;
            LODWORD(v208) = v238;
            if ( v72 - v71 < 0 )
              v77 = v71 - v72;
            v240 += dword_6FBB52F8 * dword_6FBBDB94;
            LODWORD(v197) = v75;
            v78 = a1;
            v223 = a1;
            v163 = (signed int)v192;
            HIDWORD(v184) = v238 >> 31;
            HIDWORD(v208) = v238 >> 31;
            LODWORD(a1) = v75;
            v178 = (signed int)v189;
            HIDWORD(v197) = (unsigned __int64)(signed int)v75 >> 32;
            if ( v78 <= v76 )
            {
              if ( v76 )
              {
                if ( SHIDWORD(v197) < (signed int)((v75 < v189) + ((unsigned __int64)(signed int)v189 >> 32)) )
                {
                  v178 = v197;
                  v197 = (signed int)v189;
                  v163 = v208;
                  v208 = (signed int)v192;
                }
                v108 = dword_6FD4098C;
                v186 = dword_6FD4098C;
                v109 = (unsigned __int64)((v208 - v163) << dword_6FD4098C) >> 32;
                v110 = ((_DWORD)v208 - (_DWORD)v163) << dword_6FD4098C;
                if ( dword_6FD4098C & 0x20 )
                  v109 = ((_DWORD)v208 - (_DWORD)v163) << dword_6FD4098C;
                if ( dword_6FD4098C & 0x20 )
                  v110 = 0;
                v111 = sub_6F737040(v110, v109, v76);
                v112 = (unsigned __int64)(v163 << v108) >> 32;
                v113 = (_DWORD)v163 << v108;
                v143 = v111;
                if ( v108 & 0x20 )
                  v112 = (_DWORD)v163 << v108;
                if ( v108 & 0x20 )
                  v113 = 0;
                v165 = __PAIR__(v112, v113);
                if ( v150 - (signed int)v178 > 0 )
                {
                  v165 = (v150 - (signed int)v178) * (signed __int64)v111 + __PAIR__(v112, v113);
                  v178 = v150;
                }
                v114 = (signed int)v218;
                if ( SHIDWORD(v197) < (signed int)(((unsigned int)v197 < v218)
                                                 + ((unsigned __int64)(signed int)v218 >> 32)) )
                  v114 = v197;
                a1 = v114 - v178;
                if ( a1 > 0 )
                {
                  v115 = v178;
                  v151 = v215 - v157;
                  v116 = HIDWORD(v165);
                  v117 = v165;
                  v190 = v178 + a1;
                  v118 = v186;
                  v119 = ~-(char)a1 & 3;
                  if ( ~-(char)a1 & 3 )
                  {
                    v120 = v165 >> v186;
                    if ( v186 & 0x20 )
                      v120 = SHIDWORD(v165) >> v186;
                    if ( v120 - v157 < v151 && sub_6F71F0C0(v178) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * (((_DWORD)v178 * dword_6FBB52F4 << 10) + v120),
                        dword_6FBB505C + 4 * (((_DWORD)v178 * dword_6FBB52F4 << 10) + v120),
                        v120,
                        v178,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                    v187 = dword_6FD4098C;
                    v166 = v143 + v165;
                    v115 = v178 + 1;
                    if ( v119 == 1 )
                    {
                      v118 = dword_6FD4098C;
                      v116 = HIDWORD(v166);
                      v117 = v166;
                    }
                    else
                    {
                      if ( v119 != 2 )
                      {
                        v121 = v166 >> dword_6FD4098C;
                        if ( dword_6FD4098C & 0x20 )
                          v121 = SHIDWORD(v166) >> dword_6FD4098C;
                        if ( v121 - v157 < v151 && sub_6F71F0C0(v115) )
                          dword_6FBB5058(
                            dword_6FBB5068 + 2 * ((v115 * dword_6FBB52F4 << 10) + v121),
                            dword_6FBB505C + 4 * ((v115 * dword_6FBB52F4 << 10) + v121),
                            v121,
                            v115,
                            (unsigned __int8)v202,
                            (unsigned __int8)v201,
                            (unsigned __int8)v212,
                            0,
                            0);
                        v187 = dword_6FD4098C;
                        v166 += v143;
                        v115 = v178 + 2;
                      }
                      v122 = v166 >> v187;
                      if ( v187 & 0x20 )
                        v122 = SHIDWORD(v166) >> v187;
                      if ( v122 - v157 < v151 && sub_6F71F0C0(v115) )
                        dword_6FBB5058(
                          dword_6FBB5068 + 2 * ((v115 * dword_6FBB52F4 << 10) + v122),
                          dword_6FBB505C + 4 * ((v115 * dword_6FBB52F4 << 10) + v122),
                          v122,
                          v115,
                          (unsigned __int8)v202,
                          (unsigned __int8)v201,
                          (unsigned __int8)v212,
                          0,
                          0);
                      v118 = dword_6FD4098C;
                      v123 = v143 + v166;
                      v117 = v123;
                      ++v115;
                      v116 = HIDWORD(v123);
                    }
                  }
                  while ( 1 )
                  {
                    v131 = (signed __int64)__PAIR__(v116, v117) >> (v118 & 0x1F);
                    if ( v118 & 0x20 )
                      LODWORD(v131) = (unsigned __int64)((signed __int64)__PAIR__(v116, v117) >> (v118 & 0x1F)) >> 32;
                    v170 = a1;
                    LODWORD(a1) = a1 - v157;
                    if ( (unsigned int)a1 < v151 )
                    {
                      LODWORD(a1) = sub_6F71F0C0(v115);
                      if ( (_DWORD)a1 )
                        LODWORD(a1) = dword_6FBB5058(
                                        dword_6FBB5068 + 2 * ((v115 * dword_6FBB52F4 << 10) + v170),
                                        dword_6FBB505C + 4 * ((v115 * dword_6FBB52F4 << 10) + v170),
                                        v170,
                                        v115,
                                        (unsigned __int8)v202,
                                        (unsigned __int8)v201,
                                        (unsigned __int8)v212,
                                        0,
                                        0);
                    }
                    v124 = v143 + __PAIR__(v116, v117);
                    v125 = v115 + 1;
                    if ( v190 == v125 )
                      break;
                    v126 = v124 >> (dword_6FD4098C & 0x1F);
                    if ( dword_6FD4098C & 0x20 )
                      LODWORD(v126) = (unsigned __int64)(v124 >> (dword_6FD4098C & 0x1F)) >> 32;
                    v167 = v126;
                    if ( (signed int)v126 - v157 < v151 && sub_6F71F0C0(v125) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * ((v125 * dword_6FBB52F4 << 10) + v167),
                        dword_6FBB505C + 4 * ((v125 * dword_6FBB52F4 << 10) + v167),
                        v167,
                        v125,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                    v127 = v143 + v124;
                    v128 = (v143 + v124) >> (dword_6FD4098C & 0x1F);
                    if ( dword_6FD4098C & 0x20 )
                      LODWORD(v128) = (unsigned __int64)(v127 >> (dword_6FD4098C & 0x1F)) >> 32;
                    v168 = v128;
                    if ( (signed int)v128 - v157 < v151 && sub_6F71F0C0(v125 + 1) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * (((v125 + 1) * dword_6FBB52F4 << 10) + v168),
                        dword_6FBB505C + 4 * (((v125 + 1) * dword_6FBB52F4 << 10) + v168),
                        v168,
                        v125 + 1,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                    v129 = v143 + v127;
                    v130 = (v143 + v127) >> (dword_6FD4098C & 0x1F);
                    if ( dword_6FD4098C & 0x20 )
                      LODWORD(v130) = (unsigned __int64)(v129 >> (dword_6FD4098C & 0x1F)) >> 32;
                    v169 = v130;
                    if ( (signed int)v130 - v157 < v151 && sub_6F71F0C0(v125 + 2) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * (((v125 + 2) * dword_6FBB52F4 << 10) + v169),
                        dword_6FBB505C + 4 * (((v125 + 2) * dword_6FBB52F4 << 10) + v169),
                        v169,
                        v125 + 2,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                    v118 = dword_6FD4098C;
                    v116 = (unsigned __int64)(v143 + v129) >> 32;
                    v117 = v143 + v129;
                    v115 = v125 + 3;
                  }
                }
              }
              else if ( v192 - v157 < v215 - v157 )
              {
                LODWORD(a1) = v150;
                if ( v189 - v150 < v218 - v150 )
                {
                  LODWORD(a1) = sub_6F71F0C0(v189);
                  if ( (_DWORD)a1 )
                    LODWORD(a1) = dword_6FBB5058(
                                    2 * (v192 + v224 * (v189 << 10)) + dword_6FBB5068,
                                    dword_6FBB505C + 4 * (v192 + v224 * (v189 << 10)),
                                    v192,
                                    v189,
                                    (unsigned __int8)v202,
                                    (unsigned __int8)v201,
                                    (unsigned __int8)v212,
                                    0,
                                    0);
                }
              }
            }
            else
            {
              if ( SHIDWORD(v184) < (signed int)((v238 < v192) + ((unsigned __int64)(signed int)v192 >> 32)) )
              {
                v178 = (signed int)v75;
                v197 = (signed int)v189;
                v163 = v184;
                v208 = (signed int)v192;
              }
              v79 = dword_6FD4098C;
              v80 = (unsigned __int64)((v197 - v178) << dword_6FD4098C) >> 32;
              v81 = ((_DWORD)v197 - (_DWORD)v178) << dword_6FD4098C;
              if ( dword_6FD4098C & 0x20 )
                v80 = ((_DWORD)v197 - (_DWORD)v178) << dword_6FD4098C;
              if ( dword_6FD4098C & 0x20 )
                v81 = 0;
              v82 = sub_6F737040(v81, v80, v223);
              v83 = (unsigned __int64)(v178 << v79) >> 32;
              v84 = (_DWORD)v178 << v79;
              v142 = v82;
              if ( v79 & 0x20 )
                v83 = (_DWORD)v178 << v79;
              if ( v79 & 0x20 )
                v84 = 0;
              v179 = __PAIR__(v83, v84);
              if ( v157 - (signed int)v163 > 0 )
              {
                v179 = (v157 - (signed int)v163) * (signed __int64)v82 + __PAIR__(v83, v84);
                v163 = v157;
              }
              v85 = (signed int)v215;
              if ( SHIDWORD(v208) < (signed int)(((unsigned int)v208 < v215) + ((unsigned __int64)(signed int)v215 >> 32)) )
                v85 = v208;
              a1 = v85 - v163;
              if ( a1 > 0 )
              {
                v86 = v163;
                v158 = v218 - v150;
                v185 = v163 + a1;
                v87 = ((_BYTE)v163 + (_BYTE)a1 + ~(_BYTE)v163) & 3;
                if ( !(((_BYTE)v163 + (_BYTE)a1 + ~(_BYTE)v163) & 3) )
                  goto LABEL_400;
                v88 = (signed __int64)v179 >> (v79 & 0x1F);
                if ( v79 & 0x20 )
                  LODWORD(v88) = (unsigned __int64)((signed __int64)v179 >> (v79 & 0x1F)) >> 32;
                v198 = v88;
                v89 = v88;
                if ( (signed int)v88 - v150 < v158 && sub_6F71F0C0(v88) )
                  dword_6FBB5058(
                    dword_6FBB5068 + 2 * (dword_6FBB52F4 * (v89 << 10) + v163),
                    dword_6FBB505C + 4 * (dword_6FBB52F4 * (v89 << 10) + v163),
                    v163,
                    v198,
                    (unsigned __int8)v202,
                    (unsigned __int8)v201,
                    (unsigned __int8)v212,
                    0,
                    0);
                v79 = dword_6FD4098C;
                v179 += v142;
                v86 = v163 + 1;
                if ( v87 != 1 )
                {
                  if ( v87 != 2 )
                  {
                    v90 = v179 >> dword_6FD4098C;
                    if ( dword_6FD4098C & 0x20 )
                      v90 = SHIDWORD(v179) >> dword_6FD4098C;
                    v91 = v90;
                    v92 = v90;
                    if ( v90 - v150 < v158 && sub_6F71F0C0(v90) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * (v86 + dword_6FBB52F4 * (v92 << 10)),
                        dword_6FBB505C + 4 * (v86 + dword_6FBB52F4 * (v92 << 10)),
                        v86,
                        v91,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                    v79 = dword_6FD4098C;
                    v179 += v142;
                    v86 = v163 + 2;
                  }
                  v93 = v179 >> v79;
                  if ( v79 & 0x20 )
                    v93 = SHIDWORD(v179) >> v79;
                  if ( v93 - v150 < v158 && sub_6F71F0C0(v93) )
                    dword_6FBB5058(
                      dword_6FBB5068 + 2 * (v86 + dword_6FBB52F4 * (v93 << 10)),
                      dword_6FBB505C + 4 * (v86 + dword_6FBB52F4 * (v93 << 10)),
                      v86,
                      v93,
                      (unsigned __int8)v202,
                      (unsigned __int8)v201,
                      (unsigned __int8)v212,
                      0,
                      0);
                  v79 = dword_6FD4098C;
                  ++v86;
                  v94 = (v142 + v179) >> 32;
                  v95 = v142 + v179;
                }
                else
                {
LABEL_400:
                  v94 = HIDWORD(v179);
                  v95 = v179;
                }
                while ( 1 )
                {
                  v106 = (signed __int64)__PAIR__(v94, v95) >> (v79 & 0x1F);
                  if ( v79 & 0x20 )
                    LODWORD(v106) = (unsigned __int64)((signed __int64)__PAIR__(v94, v95) >> (v79 & 0x1F)) >> 32;
                  v107 = v106;
                  HIDWORD(a1) = v106;
                  LODWORD(a1) = a1 - v150;
                  if ( (unsigned int)a1 < v158 )
                  {
                    v164 = HIDWORD(a1);
                    LODWORD(a1) = sub_6F71F0C0(SHIDWORD(a1));
                    if ( (_DWORD)a1 )
                      LODWORD(a1) = dword_6FBB5058(
                                      dword_6FBB5068 + 2 * (v86 + dword_6FBB52F4 * (v107 << 10)),
                                      dword_6FBB505C + 4 * (v86 + dword_6FBB52F4 * (v107 << 10)),
                                      v86,
                                      v164,
                                      (unsigned __int8)v202,
                                      (unsigned __int8)v201,
                                      (unsigned __int8)v212,
                                      0,
                                      0);
                  }
                  v96 = v142 + __PAIR__(v94, v95);
                  v97 = v86 + 1;
                  if ( v97 == v185 )
                    break;
                  v98 = v96 >> (dword_6FD4098C & 0x1F);
                  if ( dword_6FD4098C & 0x20 )
                    LODWORD(v98) = (unsigned __int64)(v96 >> (dword_6FD4098C & 0x1F)) >> 32;
                  v99 = v98;
                  if ( (signed int)v98 - v150 < v158 )
                  {
                    v173 = v98;
                    if ( sub_6F71F0C0(v98) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * (v97 + dword_6FBB52F4 * (v99 << 10)),
                        dword_6FBB505C + 4 * (v97 + dword_6FBB52F4 * (v99 << 10)),
                        v97,
                        v173,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                  }
                  v100 = v142 + v96;
                  v101 = (v142 + v96) >> (dword_6FD4098C & 0x1F);
                  if ( dword_6FD4098C & 0x20 )
                    LODWORD(v101) = (unsigned __int64)(v100 >> (dword_6FD4098C & 0x1F)) >> 32;
                  v102 = v101;
                  if ( (signed int)v101 - v150 < v158 )
                  {
                    v172 = v101;
                    if ( sub_6F71F0C0(v101) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * (v97 + 1 + dword_6FBB52F4 * (v102 << 10)),
                        dword_6FBB505C + 4 * (v97 + 1 + dword_6FBB52F4 * (v102 << 10)),
                        v97 + 1,
                        v172,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                  }
                  v103 = v142 + v100;
                  v104 = (v142 + v100) >> (dword_6FD4098C & 0x1F);
                  if ( dword_6FD4098C & 0x20 )
                    LODWORD(v104) = (unsigned __int64)(v103 >> (dword_6FD4098C & 0x1F)) >> 32;
                  v105 = v104;
                  if ( (signed int)v104 - v150 < v158 )
                  {
                    v171 = v104;
                    if ( sub_6F71F0C0(v104) )
                      dword_6FBB5058(
                        dword_6FBB5068 + 2 * (v97 + 2 + dword_6FBB52F4 * (v105 << 10)),
                        dword_6FBB505C + 4 * (v97 + 2 + dword_6FBB52F4 * (v105 << 10)),
                        v97 + 2,
                        v171,
                        (unsigned __int8)v202,
                        (unsigned __int8)v201,
                        (unsigned __int8)v212,
                        0,
                        0);
                  }
                  v79 = dword_6FD4098C;
                  v94 = (unsigned __int64)(v142 + v103) >> 32;
                  v95 = v142 + v103;
                  v86 = v97 + 3;
                }
              }
            }
            return a1;
          }
          v135 = 0;
        }
        else
        {
          v135 = dword_70041E70;
          v202 = dword_70041E70;
        }
        v212 = v135 >> 16;
        v201 = v135 >> 8;
        goto LABEL_243;
      }
      if ( dword_6FBB9558 <= 1 )
      {
        if ( dword_6FBB9558 )
          return a1;
LABEL_56:
        LODWORD(a1) = sub_6F73AB30(SHIDWORD(a1), a2);
        return a1;
      }
      if ( dword_6FBB9558 != 2 )
      {
        if ( dword_6FBB9558 != 3 )
          return a1;
        goto LABEL_56;
      }
      v33 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
      v34 = (signed __int16)(32 * word_70041E86) >> 5;
      if ( dword_6FBB9560 == 1 )
      {
        v144 = 65280;
        a3 = 255;
      }
      else if ( dword_6FBB9560 == 2 )
      {
        v144 = 0xFFFFFF;
        a3 = 0xFFFFFF;
      }
      else if ( !dword_6FBB9560 )
      {
        a3 = dword_70041E70;
        v144 = dword_70041E70;
      }
      sub_6F684560(
        (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
        (signed __int16)(32 * word_70041E82) >> 5,
        a3);
      LODWORD(a1) = sub_6F684560(v33, v34, v144);
      return a1;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      if ( dword_6FBB9558 == 1 )
      {
LABEL_202:
        LODWORD(a1) = sub_6F7388E0((unsigned int)a4);
        return a1;
      }
      if ( dword_6FBB9558 <= 1 )
      {
        if ( dword_6FBB9558 || dword_6FBB553C < 0 )
          return a1;
        if ( dword_6FBB553C <= 1 )
        {
          LODWORD(a1) = sub_6F73C0E0(SHIDWORD(a1), a2);
          return a1;
        }
        if ( dword_6FBB553C != 2 )
          return a1;
        if ( !sub_6F74AF80(a4) )
        {
          LODWORD(a1) = sub_6F73C0E0(v188, v191);
          return a1;
        }
      }
      else
      {
        if ( dword_6FBB9558 == 2 )
        {
LABEL_171:
          LODWORD(a1) = sub_6F745870(a2);
          return a1;
        }
        if ( dword_6FBB9558 != 3 || dword_6FBB553C < 0 )
          return a1;
        if ( dword_6FBB553C <= 1 )
          goto LABEL_238;
        if ( dword_6FBB553C != 2 )
          return a1;
        if ( !sub_6F74AF80(a4) )
        {
LABEL_238:
          LODWORD(a1) = sub_6F745590(v188, v191);
          return a1;
        }
      }
      LODWORD(a1) = sub_6F74B060(v188, v191);
      return a1;
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
      if ( dword_6FBB9558 == 1 )
      {
LABEL_203:
        LODWORD(a1) = sub_6F738700();
        return a1;
      }
      if ( dword_6FBB9558 <= 1 )
      {
        if ( dword_6FBB9558 )
          return a1;
        if ( dword_6FBB553C == 1 )
        {
          LODWORD(a1) = sub_6F742650(SHIDWORD(a1), a2);
          return a1;
        }
        if ( dword_6FBB553C != 2 )
          return a1;
        if ( !sub_6F74ADF0(0) )
        {
          LODWORD(a1) = sub_6F742650(v188, v191);
          return a1;
        }
      }
      else
      {
        if ( dword_6FBB9558 == 2 )
        {
LABEL_170:
          LODWORD(a1) = sub_6F745700(a2);
          return a1;
        }
        if ( dword_6FBB9558 != 3 )
          return a1;
        if ( dword_6FBB553C == 1 )
          goto LABEL_188;
        if ( dword_6FBB553C != 2 )
          return a1;
        if ( !sub_6F74ADF0((_DWORD *)3) )
        {
LABEL_188:
          LODWORD(a1) = sub_6F744590(v188, v191);
          return a1;
        }
      }
      LODWORD(a1) = sub_6F748550(v188, v191);
      return a1;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
      LODWORD(a1) = dword_6FBB9558;
      if ( dword_6FBB9558 != 1 )
      {
        if ( dword_6FBB9558 <= 1 )
        {
          if ( dword_6FBB9558 )
            return a1;
        }
        else
        {
          if ( dword_6FBB9558 == 2 )
          {
            v27 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
            v28 = (signed __int16)(32 * word_70041E86) >> 5;
            if ( dword_6FBB9560 == 1 )
            {
              v137 = 65280;
              a6 = 255;
            }
            else if ( dword_6FBB9560 == 2 )
            {
              v137 = 0xFFFFFF;
              a6 = 0xFFFFFF;
            }
            else if ( !dword_6FBB9560 )
            {
              a6 = dword_70041E70;
              v137 = dword_70041E74;
            }
            sub_6F684560(
              (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
              (signed __int16)(32 * word_70041E82) >> 5,
              a6);
            LODWORD(a1) = sub_6F684560(v27, v28, v137);
            return a1;
          }
          if ( dword_6FBB9558 != 3 )
            return a1;
        }
        LODWORD(a1) = sub_6F738BA0(SHIDWORD(a1), a2);
        return a1;
      }
      if ( dword_6FBB955C == 1 )
      {
        a5 = 65280;
        a4 = (_DWORD *)255;
      }
      else if ( dword_6FBB955C == 2 )
      {
        a5 = 0xFFFFFF;
        a4 = (_DWORD *)0xFFFFFF;
      }
      else if ( !dword_6FBB955C )
      {
        a4 = (_DWORD *)dword_70041E70;
        a5 = dword_70041E74;
      }
      LODWORD(a1) = sub_6F7370D0(
                      (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
                      (signed __int16)((signed __int16)(32 * word_70041E82) >> 5),
                      (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
                      (signed __int16)((signed __int16)(32 * word_70041E86) >> 5),
                      (unsigned int)a4,
                      a5);
      return a1;
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
      v6 = dword_6FBB9558;
      v194 = dword_6FBB9558;
      if ( dword_6FBB9558 == 1 )
      {
LABEL_204:
        LODWORD(a1) = sub_6F7385A0();
      }
      else if ( dword_6FBB9558 > 1 )
      {
LABEL_15:
        if ( v6 == 2 )
        {
          LODWORD(a1) = sub_6F745600(a2);
        }
        else if ( v6 == 3 )
        {
          LODWORD(a1) = sub_6F741150(v188, a2);
        }
      }
      else if ( !dword_6FBB9558 )
      {
        v11 = dword_70041E6C;
        v12 = (signed __int16)((signed __int16)(32 * (dword_6FBBDB94 + word_70041E82)) >> 5);
        if ( dword_6FBBDB9C - v12 > 0 )
        {
          v11 = dword_70041E6C - (dword_6FBBDB9C - v12);
          v12 = (signed __int16)((signed __int16)(32 * dword_6FBBDB9C) >> 5);
        }
        if ( v12 - dword_6FBBDBA4 < 0 )
        {
          v13 = dword_70041E68;
          v14 = v11 - (v11 + v12 - dword_6FBBDBA4);
          if ( v11 + v12 - dword_6FBBDBA4 <= 0 )
            v14 = v11;
          v15 = dword_6FBBDB98 - (signed __int16)((signed __int16)(32 * (dword_6FBBDB90 + word_70041E80)) >> 5);
          v216 = (signed __int16)((signed __int16)(32 * (dword_6FBBDB90 + word_70041E80)) >> 5);
          if ( v15 > 0 )
          {
            v13 = dword_70041E68 - v15;
            v216 = (signed __int16)((signed __int16)(32 * dword_6FBBDB98) >> 5);
          }
          LODWORD(a1) = v216;
          if ( v216 - dword_6FBBDBA0 < 0 )
          {
            LODWORD(a1) = v13 + v216 - dword_6FBBDBA0;
            if ( (signed int)a1 > 0 )
              v13 -= a1;
            v16 = 0;
            v17 = 0;
            if ( v14 >= 0 )
              v17 = v14;
            v221 = v13;
            if ( v13 >= 0 )
              v16 = v13;
            v219 = v16;
            v210 = v17 - 1;
            v206 = dword_6FBB52F8 * v12;
            if ( v14 > 0 )
            {
              do
              {
                LODWORD(a1) = v206;
                v213 = dword_6FBB52F8 - 1;
                v203 = v206 + dword_6FBB52F8;
                if ( dword_6FBB52F8 )
                {
                  v145 = v206;
                  do
                  {
                    if ( sub_6F71F0C0(v145) )
                    {
                      if ( v191 == v194 % v188 )
                      {
                        v139 = dword_6FBB52F4;
                        v161 = v219 - 1;
                        v182 = dword_6FBB52F4 * v216;
                        v39 = dword_6FBB52F4 * v216 + dword_6FBB52F4 * (v145 << 10);
                        v40 = dword_6FBB5068 + 2 * v39;
                        v177 = dword_6FBB505C + 4 * v39;
                        if ( v221 > 0 )
                        {
                          while ( 1 )
                          {
                            if ( v139 )
                            {
                              v41 = v177;
                              v42 = v182;
                              v154 = v40 + 2 * v139;
                              v43 = ((unsigned __int8)((unsigned int)(2 * v139 - 2) >> 1) + 1) & 3;
                              if ( !(((unsigned __int8)((unsigned int)(2 * v139 - 2) >> 1) + 1) & 3) )
                                goto LABEL_401;
                              if ( v43 != 1 )
                              {
                                if ( v43 != 2 )
                                {
                                  v42 = v182 + 1;
                                  v41 = v177 + 4;
                                  v44 = v40;
                                  v40 += 2;
                                  dword_6FBB5058(
                                    v44,
                                    v177,
                                    v182,
                                    v145,
                                    (unsigned __int8)dword_70041E70,
                                    BYTE1(dword_70041E70),
                                    BYTE2(dword_70041E70),
                                    0,
                                    0);
                                }
                                v45 = v42++;
                                v46 = v41;
                                v41 += 4;
                                v47 = v40;
                                v40 += 2;
                                dword_6FBB5058(
                                  v47,
                                  v46,
                                  v45,
                                  v145,
                                  (unsigned __int8)dword_70041E70,
                                  BYTE1(dword_70041E70),
                                  BYTE2(dword_70041E70),
                                  0,
                                  0);
                              }
                              v48 = v42++;
                              v49 = v41;
                              v41 += 4;
                              v50 = v40;
                              v40 += 2;
                              dword_6FBB5058(
                                v50,
                                v49,
                                v48,
                                v145,
                                (unsigned __int8)dword_70041E70,
                                BYTE1(dword_70041E70),
                                BYTE2(dword_70041E70),
                                0,
                                0);
                              if ( v40 != v154 )
                              {
LABEL_401:
                                do
                                {
                                  dword_6FBB5058(
                                    v40,
                                    v41,
                                    v42,
                                    v145,
                                    (unsigned __int8)dword_70041E70,
                                    BYTE1(dword_70041E70),
                                    BYTE2(dword_70041E70),
                                    0,
                                    0);
                                  dword_6FBB5058(
                                    v40 + 2,
                                    v41 + 4,
                                    v42 + 1,
                                    v145,
                                    (unsigned __int8)dword_70041E70,
                                    BYTE1(dword_70041E70),
                                    BYTE2(dword_70041E70),
                                    0,
                                    0);
                                  dword_6FBB5058(
                                    v40 + 4,
                                    v41 + 8,
                                    v42 + 2,
                                    v145,
                                    (unsigned __int8)dword_70041E70,
                                    BYTE1(dword_70041E70),
                                    BYTE2(dword_70041E70),
                                    0,
                                    0);
                                  v51 = v40 + 6;
                                  v52 = v42 + 3;
                                  v53 = v41 + 12;
                                  v40 += 8;
                                  v41 += 16;
                                  v42 += 4;
                                  dword_6FBB5058(
                                    v51,
                                    v53,
                                    v52,
                                    v145,
                                    (unsigned __int8)dword_70041E70,
                                    BYTE1(dword_70041E70),
                                    BYTE2(dword_70041E70),
                                    0,
                                    0);
                                }
                                while ( v40 != v154 );
                              }
                              v182 += v139 - 1 + 1;
                              v177 += 4 * v139;
                            }
                            if ( --v161 == -1 )
                              break;
                            v139 = dword_6FBB52F4;
                          }
                        }
                      }
                      ++v194;
                    }
                    ++v145;
                  }
                  while ( v145 != v203 );
                  LODWORD(a1) = v206;
                  v206 += v213 + 1;
                }
                --v210;
              }
              while ( v210 != -1 );
            }
          }
        }
      }
      return a1;
    default:
      return a1;
  }
}
