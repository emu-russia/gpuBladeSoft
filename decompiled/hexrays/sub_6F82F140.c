int __cdecl sub_6F82F140(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebp@1
  int v7; // esi@1
  int v8; // edi@1
  int v9; // ebx@1
  int v10; // esi@1
  int v11; // ebx@1
  int v12; // ecx@1
  int v13; // edi@1
  int v14; // ecx@1
  int v15; // esi@1
  int v16; // ecx@1
  int result; // eax@1
  int v18; // edx@2
  int v19; // ecx@2
  int v20; // ebp@3
  int v21; // eax@4
  int v22; // ecx@4
  int v23; // edx@6
  int v24; // esi@6
  unsigned int *v25; // ebp@6
  __m64 v26; // mm0@6
  __m64 v27; // mm2@6
  __m64 v28; // mm3@6
  __m64 v29; // mm0@6
  __m64 v30; // mm3@6
  __m64 v31; // mm1@6
  __m64 v32; // mm4@6
  __m64 v33; // mm6@6
  __m64 v34; // mm5@6
  __m64 v35; // mm4@6
  __m64 v36; // mm5@6
  __m64 v37; // mm0@6
  __m64 v38; // mm1@6
  __m64 v39; // mm2@6
  __m64 v40; // mm3@6
  __m64 v41; // mm6@6
  __m64 v42; // mm0@6
  __m64 v43; // mm6@6
  __m64 v44; // mm3@6
  __m64 v45; // mm1@6
  __m64 v46; // mm3@6
  __m64 v47; // mm7@6
  __m64 v48; // mm4@6
  __m64 v49; // mm5@6
  __m64 v50; // mm7@6
  __m64 v51; // mm4@6
  __m64 v52; // mm5@6
  __m64 v53; // mm7@6
  __m64 v54; // mm4@6
  __m64 v55; // mm6@6
  __m64 v56; // mm4@6
  __m64 v57; // mm7@6
  __m64 v58; // mm4@6
  __m64 v59; // mm5@6
  __m64 v60; // mm4@6
  __m64 v61; // mm6@6
  __m64 v62; // mm1@6
  __m64 v63; // mm2@6
  __m64 v64; // mm0@6
  __m64 v65; // mm1@6
  __m64 v66; // mm0@6
  int v67; // ebp@6
  int v68; // ebp@6
  int v69; // edx@6
  int v70; // ebp@6
  int v71; // ebp@6
  int v72; // esi@9
  __m64 v73; // mm0@9
  __m64 v74; // mm3@9
  __m64 v75; // mm1@9
  __m64 v76; // mm2@9
  __m64 v77; // mm6@9
  __m64 v78; // mm0@9
  __m64 v79; // mm6@9
  __m64 v80; // mm3@9
  __m64 v81; // mm1@9
  __m64 v82; // mm3@9
  __m64 v83; // mm7@9
  __m64 v84; // mm4@9
  __m64 v85; // mm5@9
  __m64 v86; // mm7@9
  __m64 v87; // mm4@9
  __m64 v88; // mm5@9
  __m64 v89; // mm7@9
  __m64 v90; // mm4@9
  __m64 v91; // mm6@9
  __m64 v92; // mm4@9
  __m64 v93; // mm7@9
  __m64 v94; // mm4@9
  __m64 v95; // mm5@9
  __m64 v96; // mm4@9
  __m64 v97; // mm6@9
  int v98; // esi@13
  int v99; // edx@14
  __m64 v100; // mm0@14
  __m64 v101; // mm1@14
  int v102; // esi@14
  unsigned int *v103; // ebx@14
  __m64 v104; // mm0@14
  __m64 v105; // mm2@14
  __m64 v106; // mm3@14
  __m64 v107; // mm0@14
  __m64 v108; // mm3@14
  __m64 v109; // mm1@14
  __m64 v110; // mm4@14
  __m64 v111; // mm6@14
  __m64 v112; // mm5@14
  __m64 v113; // mm4@14
  __m64 v114; // mm5@14
  __m64 v115; // mm0@14
  __m64 v116; // mm1@14
  __m64 v117; // mm2@14
  __m64 v118; // mm3@14
  __m64 v119; // mm6@14
  __m64 v120; // mm0@14
  __m64 v121; // mm6@14
  __m64 v122; // mm3@14
  __m64 v123; // mm1@14
  __m64 v124; // mm3@14
  __m64 v125; // mm7@14
  __m64 v126; // mm4@14
  __m64 v127; // mm5@14
  __m64 v128; // mm7@14
  __m64 v129; // mm4@14
  __m64 v130; // mm5@14
  __m64 v131; // mm7@14
  __m64 v132; // mm4@14
  __m64 v133; // mm6@14
  __m64 v134; // mm4@14
  __m64 v135; // mm7@14
  __m64 v136; // mm4@14
  __m64 v137; // mm5@14
  __m64 v138; // mm4@14
  __m64 v139; // mm6@14
  __m64 v140; // mm1@14
  __m64 v141; // mm2@14
  __m64 v142; // mm0@14
  __m64 v143; // mm1@14
  __m64 v144; // mm0@14
  int v145; // ebx@14
  int v146; // ebx@14
  int v147; // edx@14
  int v148; // ebx@14
  int v149; // ebx@14
  int v150; // ebp@16
  __m64 v151; // mm0@16
  __m64 v152; // mm3@16
  __m64 v153; // mm1@16
  __m64 v154; // mm2@16
  __m64 v155; // mm6@16
  __m64 v156; // mm0@16
  __m64 v157; // mm6@16
  __m64 v158; // mm3@16
  __m64 v159; // mm1@16
  __m64 v160; // mm3@16
  __m64 v161; // mm7@16
  __m64 v162; // mm4@16
  __m64 v163; // mm5@16
  __m64 v164; // mm7@16
  __m64 v165; // mm4@16
  __m64 v166; // mm5@16
  __m64 v167; // mm7@16
  __m64 v168; // mm4@16
  __m64 v169; // mm6@16
  __m64 v170; // mm4@16
  __m64 v171; // mm7@16
  __m64 v172; // mm4@16
  __m64 v173; // mm5@16
  __m64 v174; // mm4@16
  __m64 v175; // mm6@16
  int v176; // [sp+0h] [bp-6Ch]@4
  int v177; // [sp+4h] [bp-68h]@4
  int v178; // [sp+8h] [bp-64h]@4
  int v179; // [sp+Ch] [bp-60h]@13
  int v180; // [sp+10h] [bp-5Ch]@1
  int v181; // [sp+14h] [bp-58h]@4
  int v182; // [sp+18h] [bp-54h]@1
  int v183; // [sp+1Ch] [bp-50h]@1
  int v184; // [sp+20h] [bp-4Ch]@1
  int v185; // [sp+24h] [bp-48h]@1
  int v186; // [sp+28h] [bp-44h]@2
  int v187; // [sp+2Ch] [bp-40h]@2
  int v188; // [sp+30h] [bp-3Ch]@1
  int v189; // [sp+34h] [bp-38h]@1
  int v190; // [sp+38h] [bp-34h]@2
  int v191; // [sp+3Ch] [bp-30h]@1
  int v192; // [sp+40h] [bp-2Ch]@2
  int v193; // [sp+44h] [bp-28h]@2
  __m64 v194; // [sp+50h] [bp-1Ch]@1

  v6 = a1 + 32 * a4;
  v7 = *(_DWORD *)(v6 + 116);
  v194.m64_i32[0] = 16843009 * *(_BYTE *)(a1 + *(_BYTE *)(a1 + 795) + 51488);
  v194.m64_i32[1] = 16843009 * *(_BYTE *)(a1 + *(_BYTE *)(a1 + 795) + 51488);
  v8 = *(_DWORD *)(v6 + 108);
  v185 = v7 + *(_DWORD *)(v6 + 120);
  v182 = *(_DWORD *)(v6 + 116);
  v191 = v8;
  v9 = v7 + a5 * v8;
  v10 = v9;
  v180 = v9;
  v11 = *(_DWORD *)(v6 + 108);
  v12 = v8 * (a6 - a5);
  v13 = v10;
  v14 = v10 + v12;
  v15 = v14;
  v189 = v14;
  v16 = *(_DWORD *)(a1 + 4 * a4 + 496);
  v188 = *(_DWORD *)(a1 + 204);
  v183 = *(_DWORD *)(a1 + 208);
  result = *(_DWORD *)(a1 + 4 * a3 + 480);
  v184 = *(_DWORD *)(a1 + 4 * a3 + 480);
  if ( v13 >= v15 )
    return result;
  v187 = -2 * v16;
  v192 = 6 * v16;
  v190 = 4 * v11;
  v186 = *(_DWORD *)(a1 + 204) + 4 * v13;
  v193 = 1 - v11;
  v18 = *(_DWORD *)(a1 + 4 * a4 + 496);
  v19 = v180;
  do
  {
    v20 = v19 + v191;
    if ( v19 + v191 <= v19 )
      goto LABEL_21;
    v178 = v18;
    v177 = v19 + v191;
    v176 = v19 + v191;
    v21 = v20 + v193;
    v181 = v19;
    v22 = v186;
    while ( !(*(_BYTE *)v22 & 1) )
    {
LABEL_10:
      if ( v176 <= v21 )
        goto LABEL_20;
LABEL_11:
      ++v177;
      v22 += 4;
      ++v21;
    }
    v98 = *(_DWORD *)(v183 + 4 * v21 - 4) + v184;
    v179 = *(_DWORD *)(v183 + 4 * v21 - 4) + v184;
    if ( v180 < v21 - 1 )
    {
      v99 = v98 - 2;
      v100 = _mm_cvtsi32_si64(*(_DWORD *)(v98 - 2));
      v101 = _mm_cvtsi32_si64(*(_DWORD *)(v98 - 2 + v178));
      v102 = 3 * v178;
      v103 = (unsigned int *)(v99 + 4 * v178);
      v104 = _m_punpcklbw(v100, v101);
      v105 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(v99 + 2 * v178)), _mm_cvtsi32_si64(*(_DWORD *)(v99 + 3 * v178)));
      v106 = v104;
      v107 = _m_punpcklwd(v104, v105);
      v108 = _m_punpckhwd(v106, v105);
      v109 = v107;
      v110 = _m_punpcklbw(_mm_cvtsi32_si64(*v103), _mm_cvtsi32_si64(*(unsigned int *)((char *)v103 + v178)));
      v111 = _m_punpcklbw(
               _mm_cvtsi32_si64(*(unsigned int *)((char *)v103 + 2 * v178)),
               _mm_cvtsi32_si64(*(unsigned int *)((char *)v103 + 3 * v178)));
      v112 = v110;
      v113 = _m_punpcklwd(v110, v111);
      v114 = _m_punpckhwd(v112, v111);
      v115 = _m_punpckldq(v107, v113);
      v116 = _m_punpckhdq(v109, v113);
      v117 = _m_punpckldq(v108, v114);
      v118 = _m_punpckhdq(v108, v114);
      v119 = v115;
      v120 = _m_psubw(_m_punpcklbw(v115, 0i64), _m_punpcklbw(v118, 0i64));
      v121 = _m_psubw(_m_punpckhbw(v119, 0i64), _m_punpckhbw(v118, 0i64));
      v122 = v116;
      v123 = _m_punpcklbw(v116, 0i64);
      v124 = _m_punpckhbw(v122, 0i64);
      v125 = _m_psrlw(_m_pcmpeqw(0i64, 0i64), 0xEu);
      v126 = _m_pmullw(_m_psubw(_m_punpcklbw(v117, 0i64), v123), v125);
      v127 = _m_pmullw(_m_psubw(_m_punpckhbw(v117, 0i64), v124), v125);
      v128 = _m_psllw(_m_psrlw(v125, 1u), 2u);
      v129 = _m_psraw(_m_psubw(_m_paddw(v126, v120), v128), 3u);
      v130 = _m_psraw(_m_psubw(_m_paddw(v127, v121), v128), 3u);
      v131 = _m_pcmpeqb(v128, v128);
      v132 = _m_pxor(_m_packsswb(v129, v130), v131);
      v133 = _m_pcmpgtb(0i64, v132);
      v134 = _m_psubb(_m_pxor(v132, v133), v133);
      v135 = _m_paddusb(_m_psubb(_m_psubb(v131, v194), v194), v134);
      v136 = _m_psubusb(_m_paddusb(v134, v135), v135);
      v137 = v136;
      v138 = _m_pand(v136, v133);
      v139 = _m_pandn(v133, v137);
      v140 = _m_psubusb(_m_paddusb(_m_packuswb(v123, v124), v138), v139);
      v141 = _m_paddusb(_m_psubusb(v117, v138), v139);
      v142 = v140;
      v143 = _m_punpcklbw(v140, v141);
      v144 = _m_punpckhbw(v142, v141);
      v145 = _mm_cvtsi64_si32(v143);
      *(_WORD *)(v99 + 1) = v145;
      *(_WORD *)(v99 + v178 + 1) = HIWORD(v145);
      v146 = _mm_cvtsi64_si32(_m_psrlq(v143, 0x20u));
      *(_WORD *)(v99 + 2 * v178 + 1) = v146;
      *(_WORD *)(v99 + v102 + 1) = HIWORD(v146);
      v147 = v99 + 4 * v178;
      v148 = _mm_cvtsi64_si32(v144);
      *(_WORD *)(v147 + 1) = v148;
      *(_WORD *)(v147 + v178 + 1) = HIWORD(v148);
      v149 = _mm_cvtsi64_si32(_m_psrlq(v144, 0x20u));
      *(_WORD *)(v147 + 2 * v178 + 1) = v149;
      *(_WORD *)(v147 + v102 + 1) = HIWORD(v149);
    }
    if ( v182 < v181 )
    {
      v150 = v179 + v187;
      v151 = *(__m64 *)(v179 + v187);
      v152 = *(__m64 *)(v179 + v187 + 3 * v178);
      v153 = *(__m64 *)(v179 + v187 + v178);
      v154 = *(__m64 *)(v179 + v187 + 2 * v178);
      v155 = v151;
      v156 = _m_psubw(_m_punpcklbw(v151, 0i64), _m_punpcklbw(v152, 0i64));
      v157 = _m_psubw(_m_punpckhbw(v155, 0i64), _m_punpckhbw(v152, 0i64));
      v158 = v153;
      v159 = _m_punpcklbw(v153, 0i64);
      v160 = _m_punpckhbw(v158, 0i64);
      v161 = _m_psrlw(_m_pcmpeqw(0i64, 0i64), 0xEu);
      v162 = _m_pmullw(_m_psubw(_m_punpcklbw(v154, 0i64), v159), v161);
      v163 = _m_pmullw(_m_psubw(_m_punpckhbw(*(__m64 *)(v179 + v187 + 2 * v178), 0i64), v160), v161);
      v164 = _m_psllw(_m_psrlw(v161, 1u), 2u);
      v165 = _m_psraw(_m_psubw(_m_paddw(v162, v156), v164), 3u);
      v166 = _m_psraw(_m_psubw(_m_paddw(v163, v157), v164), 3u);
      v167 = _m_pcmpeqb(v164, v164);
      v168 = _m_pxor(_m_packsswb(v165, v166), v167);
      v169 = _m_pcmpgtb(0i64, v168);
      v170 = _m_psubb(_m_pxor(v168, v169), v169);
      v171 = _m_paddusb(_m_psubb(_m_psubb(v167, v194), v194), v170);
      v172 = _m_psubusb(_m_paddusb(v170, v171), v171);
      v173 = v172;
      v174 = _m_pand(v172, v169);
      v175 = _m_pandn(v169, v173);
      *(__m64 *)(v150 + v178) = _m_psubusb(_m_paddusb(_m_packuswb(v159, v160), v174), v175);
      *(__m64 *)(v150 + 2 * v178) = _m_paddusb(_m_psubusb(v154, v174), v175);
    }
    if ( v176 > v21 )
    {
      if ( !(*(_BYTE *)(v22 + 4) & 1) )
      {
        v23 = v179 + 6;
        v24 = 3 * v178;
        v25 = (unsigned int *)(v179 + 6 + 4 * v178);
        v26 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(v179 + 6)), _mm_cvtsi32_si64(*(_DWORD *)(v179 + 6 + v178)));
        v27 = _m_punpcklbw(
                _mm_cvtsi32_si64(*(_DWORD *)(v179 + 6 + 2 * v178)),
                _mm_cvtsi32_si64(*(_DWORD *)(v179 + 6 + 3 * v178)));
        v28 = v26;
        v29 = _m_punpcklwd(v26, v27);
        v30 = _m_punpckhwd(v28, v27);
        v31 = v29;
        v32 = _m_punpcklbw(_mm_cvtsi32_si64(*v25), _mm_cvtsi32_si64(*(unsigned int *)((char *)v25 + v178)));
        v33 = _m_punpcklbw(
                _mm_cvtsi32_si64(*(unsigned int *)((char *)v25 + 2 * v178)),
                _mm_cvtsi32_si64(*(unsigned int *)((char *)v25 + 3 * v178)));
        v34 = v32;
        v35 = _m_punpcklwd(v32, v33);
        v36 = _m_punpckhwd(v34, v33);
        v37 = _m_punpckldq(v29, v35);
        v38 = _m_punpckhdq(v31, v35);
        v39 = _m_punpckldq(v30, v36);
        v40 = _m_punpckhdq(v30, v36);
        v41 = v37;
        v42 = _m_psubw(_m_punpcklbw(v37, 0i64), _m_punpcklbw(v40, 0i64));
        v43 = _m_psubw(_m_punpckhbw(v41, 0i64), _m_punpckhbw(v40, 0i64));
        v44 = v38;
        v45 = _m_punpcklbw(v38, 0i64);
        v46 = _m_punpckhbw(v44, 0i64);
        v47 = _m_psrlw(_m_pcmpeqw(0i64, 0i64), 0xEu);
        v48 = _m_pmullw(_m_psubw(_m_punpcklbw(v39, 0i64), v45), v47);
        v49 = _m_pmullw(_m_psubw(_m_punpckhbw(v39, 0i64), v46), v47);
        v50 = _m_psllw(_m_psrlw(v47, 1u), 2u);
        v51 = _m_psraw(_m_psubw(_m_paddw(v48, v42), v50), 3u);
        v52 = _m_psraw(_m_psubw(_m_paddw(v49, v43), v50), 3u);
        v53 = _m_pcmpeqb(v50, v50);
        v54 = _m_pxor(_m_packsswb(v51, v52), v53);
        v55 = _m_pcmpgtb(0i64, v54);
        v56 = _m_psubb(_m_pxor(v54, v55), v55);
        v57 = _m_paddusb(_m_psubb(_m_psubb(v53, v194), v194), v56);
        v58 = _m_psubusb(_m_paddusb(v56, v57), v57);
        v59 = v58;
        v60 = _m_pand(v58, v55);
        v61 = _m_pandn(v55, v59);
        v62 = _m_psubusb(_m_paddusb(_m_packuswb(v45, v46), v60), v61);
        v63 = _m_paddusb(_m_psubusb(v39, v60), v61);
        v64 = v62;
        v65 = _m_punpcklbw(v62, v63);
        v66 = _m_punpckhbw(v64, v63);
        v67 = _mm_cvtsi64_si32(v65);
        *(_WORD *)(v23 + 1) = v67;
        *(_WORD *)(v23 + v178 + 1) = HIWORD(v67);
        v68 = _mm_cvtsi64_si32(_m_psrlq(v65, 0x20u));
        *(_WORD *)(v23 + 2 * v178 + 1) = v68;
        *(_WORD *)(v23 + v24 + 1) = HIWORD(v68);
        v69 = v179 + 6 + 4 * v178;
        v70 = _mm_cvtsi64_si32(v66);
        *(_WORD *)(v69 + 1) = v70;
        *(_WORD *)(v69 + v178 + 1) = HIWORD(v70);
        v71 = _mm_cvtsi64_si32(_m_psrlq(v66, 0x20u));
        *(_WORD *)(v69 + 2 * v178 + 1) = v71;
        *(_WORD *)(v69 + v24 + 1) = HIWORD(v71);
      }
      if ( v185 <= v177 || *(_BYTE *)(v188 + 4 * v177) & 1 )
        goto LABEL_11;
LABEL_9:
      v72 = v192 + v179;
      v73 = *(__m64 *)(v192 + v179);
      v74 = *(__m64 *)(v192 + v179 + 3 * v178);
      v75 = *(__m64 *)(v192 + v179 + v178);
      v76 = *(__m64 *)(v192 + v179 + 2 * v178);
      v77 = v73;
      v78 = _m_psubw(_m_punpcklbw(v73, 0i64), _m_punpcklbw(v74, 0i64));
      v79 = _m_psubw(_m_punpckhbw(v77, 0i64), _m_punpckhbw(v74, 0i64));
      v80 = v75;
      v81 = _m_punpcklbw(v75, 0i64);
      v82 = _m_punpckhbw(v80, 0i64);
      v83 = _m_psrlw(_m_pcmpeqw(0i64, 0i64), 0xEu);
      v84 = _m_pmullw(_m_psubw(_m_punpcklbw(v76, 0i64), v81), v83);
      v85 = _m_pmullw(_m_psubw(_m_punpckhbw(*(__m64 *)(v192 + v179 + 2 * v178), 0i64), v82), v83);
      v86 = _m_psllw(_m_psrlw(v83, 1u), 2u);
      v87 = _m_psraw(_m_psubw(_m_paddw(v84, v78), v86), 3u);
      v88 = _m_psraw(_m_psubw(_m_paddw(v85, v79), v86), 3u);
      v89 = _m_pcmpeqb(v86, v86);
      v90 = _m_pxor(_m_packsswb(v87, v88), v89);
      v91 = _m_pcmpgtb(0i64, v90);
      v92 = _m_psubb(_m_pxor(v90, v91), v91);
      v93 = _m_paddusb(_m_psubb(_m_psubb(v89, v194), v194), v92);
      v94 = _m_psubusb(_m_paddusb(v92, v93), v93);
      v95 = v94;
      v96 = _m_pand(v94, v91);
      v97 = _m_pandn(v91, v95);
      *(__m64 *)(v72 + v178) = _m_psubusb(_m_paddusb(_m_packuswb(v81, v82), v96), v97);
      *(__m64 *)(v72 + 2 * v178) = _m_paddusb(_m_psubusb(v76, v96), v97);
      goto LABEL_10;
    }
    if ( v185 > v177 && !(*(_BYTE *)(v188 + 4 * v177) & 1) )
      goto LABEL_9;
LABEL_20:
    v20 = v176;
    v18 = v178;
LABEL_21:
    result = v190;
    v186 += v190;
    v19 = v20;
    v180 = v20;
  }
  while ( v189 > v20 );
  return result;
}
