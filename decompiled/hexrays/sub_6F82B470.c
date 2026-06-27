unsigned int __usercall sub_6F82B470@<eax>(unsigned int *a1@<eax>, int a2@<edx>, unsigned int *a3@<ecx>, int a4, unsigned int a5)
{
  __m64 v5; // mm0@1
  __m64 v6; // mm4@1
  __m64 v7; // mm1@1
  unsigned int *v8; // eax@1
  __m64 v9; // mm5@1
  unsigned int *v10; // edi@1
  __m64 v11; // mm2@1
  __m64 v12; // mm7@1
  __m64 v13; // mm3@1
  __m64 v14; // mm6@1
  unsigned int *v15; // eax@1
  unsigned int *v16; // edi@1
  __m64 v17; // mm0@1
  __m64 v18; // mm4@1
  __m64 v19; // ST00_8@1
  __m64 v20; // mm0@1
  __m64 v21; // mm1@1
  __m64 v22; // mm5@1
  __m64 v23; // mm2@1
  __m64 v24; // mm7@1
  unsigned int *v25; // eax@1
  __m64 v26; // mm3@1
  __m64 v27; // mm6@1
  unsigned int *v28; // edi@1
  int v29; // eax@1
  __m64 v30; // mm4@1
  __m64 v31; // mm0@1
  __m64 v32; // mm5@1
  __m64 v33; // mm7@1
  int v34; // edi@1
  __m64 v35; // mm6@1
  __m64 v36; // mm0@1
  int v37; // eax@1
  int v38; // edi@1
  __m64 v39; // mm5@1
  __m64 v40; // mm6@1
  __m64 v41; // mm2@1
  __m64 v42; // mm7@1
  __m64 v43; // mm4@1
  __m64 v44; // mm3@1
  __m64 v45; // mm0@1
  __m64 v46; // mm1@1
  __m64 v47; // mm4@1
  __m64 v48; // mm5@1
  __m64 v49; // mm2@1
  __m64 v50; // mm3@1
  __m64 v51; // mm6@1
  __m64 v52; // mm7@1
  __m64 v53; // mm0@1
  __m64 v54; // mm2@1
  __m64 v55; // mm4@1
  __m64 v56; // mm6@1
  __m64 v57; // mm1@1
  __m64 v58; // mm3@1
  __m64 v59; // mm7@1
  __m64 v60; // ST10_8@1
  __m64 v61; // mm5@1
  __m64 v62; // mm2@1
  __m64 v63; // mm5@1
  __m64 v64; // mm3@1
  __m64 v65; // mm0@1
  __m64 v66; // mm3@1
  __m64 v67; // mm1@1
  __m64 v68; // mm0@1
  __m64 v69; // mm1@1
  __m64 v70; // mm2@1
  __m64 v71; // mm3@1
  __m64 v72; // mm0@1
  __m64 v73; // mm6@1
  __m64 v74; // mm0@1
  __m64 v75; // mm7@1
  __m64 v76; // mm4@1
  __m64 v77; // mm5@1
  __m64 v78; // mm4@1
  __m64 v79; // mm5@1
  __m64 v80; // mm6@1
  __m64 v81; // ST00_8@1
  __m64 v82; // ST10_8@1
  __m64 v83; // ST20_8@1
  __m64 v84; // ST30_8@1
  __m64 v85; // mm0@1
  __m64 v86; // mm4@1
  __m64 v87; // mm1@1
  int v88; // eax@1
  __m64 v89; // mm5@1
  int v90; // edi@1
  __m64 v91; // mm2@1
  __m64 v92; // mm7@1
  __m64 v93; // mm3@1
  __m64 v94; // mm6@1
  int v95; // eax@1
  int v96; // edi@1
  __m64 v97; // mm0@1
  __m64 v98; // mm4@1
  __m64 v99; // ST08_8@1
  __m64 v100; // mm0@1
  __m64 v101; // mm1@1
  __m64 v102; // mm5@1
  __m64 v103; // mm2@1
  __m64 v104; // mm7@1
  int v105; // eax@1
  __m64 v106; // mm3@1
  int v107; // edi@1
  __m64 v108; // mm4@1
  __m64 v109; // mm0@1
  __m64 v110; // mm6@1
  __m64 v111; // mm0@1
  __m64 v112; // mm5@1
  __m64 v113; // mm6@1
  __m64 v114; // mm2@1
  __m64 v115; // mm7@1
  __m64 v116; // mm4@1
  __m64 v117; // mm3@1
  __m64 v118; // mm0@1
  __m64 v119; // mm1@1
  __m64 v120; // mm4@1
  __m64 v121; // mm5@1
  __m64 v122; // mm2@1
  __m64 v123; // mm3@1
  __m64 v124; // mm6@1
  __m64 v125; // mm7@1
  __m64 v126; // mm0@1
  __m64 v127; // mm2@1
  __m64 v128; // mm4@1
  __m64 v129; // mm6@1
  __m64 v130; // mm1@1
  __m64 v131; // mm3@1
  __m64 v132; // mm7@1
  __m64 v133; // ST18_8@1
  __m64 v134; // mm5@1
  __m64 v135; // mm2@1
  __m64 v136; // mm5@1
  __m64 v137; // mm3@1
  __m64 v138; // mm0@1
  __m64 v139; // mm3@1
  __m64 v140; // mm1@1
  __m64 v141; // mm0@1
  __m64 v142; // mm1@1
  __m64 v143; // mm2@1
  __m64 v144; // mm3@1
  __m64 v145; // mm0@1
  __m64 v146; // mm6@1
  __m64 v147; // mm0@1
  __m64 v148; // mm7@1
  __m64 v149; // mm4@1
  __m64 v150; // mm7@1
  __m64 v151; // mm5@1
  __m64 v152; // mm4@1
  __m64 v153; // mm5@1
  __m64 v154; // mm6@1
  __m64 v155; // mm2@1
  __m64 v156; // mm7@1
  __m64 v157; // mm4@1
  __m64 v158; // mm3@1
  __m64 v159; // mm0@1
  __m64 v160; // mm1@1
  __m64 v161; // mm4@1
  __m64 v162; // mm5@1
  __m64 v163; // mm2@1
  __m64 v164; // mm3@1
  __m64 v165; // mm7@1
  __m64 v166; // ST38_8@1
  __m64 v167; // ST28_8@1
  __m64 v168; // mm7@1
  __m64 v169; // mm0@1
  unsigned int result; // eax@1
  __m64 v171; // mm5@2
  __m64 v172; // mm6@2
  __m64 v173; // mm2@2
  __m64 v174; // mm7@2
  __m64 v175; // mm4@2
  __m64 v176; // mm3@2
  __m64 v177; // mm0@2
  __m64 v178; // mm1@2
  __m64 v179; // mm4@2
  __m64 v180; // mm5@2
  __m64 v181; // mm2@2
  __m64 v182; // mm3@2
  __m64 v183; // mm7@2
  __m64 v184; // ST78_8@2
  __m64 v185; // ST68_8@2
  __m64 v186; // mm7@2
  __m64 v187; // mm0@2
  __m64 v188; // [sp+40h] [bp-4Ch]@1
  __m64 v189; // [sp+48h] [bp-44h]@1
  __m64 v190; // [sp+50h] [bp-3Ch]@1
  __m64 v191; // [sp+58h] [bp-34h]@1
  __m64 v192; // [sp+60h] [bp-2Ch]@1
  __m64 v193; // [sp+68h] [bp-24h]@1
  __m64 v194; // [sp+70h] [bp-1Ch]@1
  __m64 v195; // [sp+78h] [bp-14h]@1

  v5 = _mm_cvtsi32_si64(*a1);
  v6 = _mm_cvtsi32_si64(*a3);
  v7 = _mm_cvtsi32_si64(*(unsigned int *)((char *)a1 + a2));
  v8 = (unsigned int *)((char *)a1 + 2 * a2);
  v9 = _mm_cvtsi32_si64(*(unsigned int *)((char *)a3 + a4));
  v10 = (unsigned int *)((char *)a3 + 2 * a4);
  v11 = _mm_cvtsi32_si64(*v8);
  v12 = _mm_cvtsi32_si64(*v10);
  v13 = _mm_cvtsi32_si64(*(unsigned int *)((char *)v8 + a2));
  v14 = _mm_cvtsi32_si64(*(unsigned int *)((char *)v10 + a4));
  v15 = (unsigned int *)((char *)v8 + 2 * a2);
  v16 = (unsigned int *)((char *)v10 + 2 * a4);
  v17 = _m_psubw(_m_punpcklbw(v5, v6), _m_punpcklbw(v6, v6));
  v18 = _mm_cvtsi32_si64(*v15);
  v19 = v17;
  v20 = _mm_cvtsi32_si64(*v16);
  v21 = _m_psubw(_m_punpcklbw(v7, v9), _m_punpcklbw(v9, v9));
  v22 = _mm_cvtsi32_si64(*(unsigned int *)((char *)v15 + a2));
  v23 = _m_psubw(_m_punpcklbw(v11, v12), _m_punpcklbw(v12, v12));
  v24 = _mm_cvtsi32_si64(*(unsigned int *)((char *)v16 + a4));
  v25 = (unsigned int *)((char *)v15 + 2 * a2);
  v26 = _m_psubw(_m_punpcklbw(v13, v14), _m_punpcklbw(v14, v14));
  v27 = _mm_cvtsi32_si64(*v25);
  v28 = (unsigned int *)((char *)v16 + 2 * a4);
  v29 = (int)v25 + 2 * a2;
  v30 = _m_psubw(_m_punpcklbw(v18, v20), _m_punpcklbw(v20, v20));
  v31 = _mm_cvtsi32_si64(*v28);
  v32 = _m_psubw(_m_punpcklbw(v22, v24), _m_punpcklbw(v24, v24));
  v33 = _mm_cvtsi32_si64(*(_DWORD *)(v29 - a2));
  v34 = (int)v28 + 2 * a4;
  v35 = _m_psubw(_m_punpcklbw(v27, v31), _m_punpcklbw(v31, v31));
  v36 = _mm_cvtsi32_si64(*(_DWORD *)(v34 - a4));
  v37 = v29 + -8 * a2;
  v38 = v34 + -8 * a4;
  v39 = _m_paddw(v32, v21);
  v40 = _m_paddw(v35, v23);
  v41 = _m_psubw(_m_paddw(v23, v23), v40);
  v42 = _m_paddw(_m_psubw(_m_punpcklbw(v33, v36), _m_punpcklbw(v36, v36)), v26);
  v43 = _m_paddw(v30, v19);
  v44 = _m_psubw(_m_paddw(v26, v26), v42);
  v45 = _m_paddw(_m_psubw(_m_paddw(v19, v19), v43), v41);
  v46 = _m_paddw(_m_psubw(_m_paddw(v21, v21), v39), v44);
  v47 = _m_paddw(v43, v40);
  v48 = _m_paddw(v39, v42);
  v49 = _m_psubw(_m_paddw(v41, v41), v45);
  v50 = _m_psubw(_m_paddw(v44, v44), v46);
  v51 = _m_psubw(_m_paddw(v40, v40), v47);
  v52 = _m_psubw(_m_paddw(v42, v42), v48);
  v53 = _m_paddw(v45, v46);
  v54 = _m_paddw(v49, v50);
  v55 = _m_paddw(v47, v48);
  v56 = _m_paddw(v51, v52);
  v57 = _m_psubw(_m_paddw(v46, v46), v53);
  v58 = _m_psubw(_m_paddw(v50, v50), v54);
  v59 = _m_psubw(_m_paddw(v52, v52), v56);
  v60 = _m_psubw(_m_paddw(v48, v48), v55);
  v61 = v54;
  v62 = _m_punpcklwd(v54, v58);
  v63 = _m_punpckhwd(v61, v58);
  v64 = v53;
  v65 = _m_punpcklwd(v53, v57);
  v66 = _m_punpckhwd(v64, v57);
  v67 = v65;
  v68 = _m_punpckldq(v65, v62);
  v69 = _m_punpckhdq(v67, v62);
  v70 = v66;
  v71 = _m_punpckhdq(v66, v63);
  v188 = v68;
  v72 = v56;
  v73 = _m_punpcklwd(v56, v59);
  v190 = v69;
  v74 = _m_punpckhwd(v72, v59);
  v75 = v55;
  v76 = _m_punpcklwd(v55, v60);
  v192 = _m_punpckldq(v70, v63);
  v77 = v76;
  v78 = _m_punpckldq(v76, v73);
  v194 = v71;
  v79 = _m_punpckhdq(v77, v73);
  v80 = _m_punpckhwd(v75, v60);
  v81 = v78;
  v82 = v79;
  v83 = _m_punpckldq(v80, v74);
  v84 = _m_punpckhdq(v80, v74);
  v85 = _mm_cvtsi32_si64(*(_DWORD *)(v37 + 4));
  v86 = _mm_cvtsi32_si64(*(_DWORD *)(v38 + 4));
  v87 = _mm_cvtsi32_si64(*(_DWORD *)(v37 + a2 + 4));
  v88 = v37 + 2 * a2;
  v89 = _mm_cvtsi32_si64(*(_DWORD *)(v38 + a4 + 4));
  v90 = v38 + 2 * a4;
  v91 = _mm_cvtsi32_si64(*(_DWORD *)(v88 + 4));
  v92 = _mm_cvtsi32_si64(*(_DWORD *)(v90 + 4));
  v93 = _mm_cvtsi32_si64(*(_DWORD *)(v88 + a2 + 4));
  v94 = _mm_cvtsi32_si64(*(_DWORD *)(v90 + a4 + 4));
  v95 = v88 + 2 * a2;
  v96 = v90 + 2 * a4;
  v97 = _m_psubw(_m_punpcklbw(v85, v86), _m_punpcklbw(v86, v86));
  v98 = _mm_cvtsi32_si64(*(_DWORD *)(v95 + 4));
  v99 = v97;
  v100 = _mm_cvtsi32_si64(*(_DWORD *)(v96 + 4));
  v101 = _m_psubw(_m_punpcklbw(v87, v89), _m_punpcklbw(v89, v89));
  v102 = _mm_cvtsi32_si64(*(_DWORD *)(v95 + a2 + 4));
  v103 = _m_psubw(_m_punpcklbw(v91, v92), _m_punpcklbw(v92, v92));
  v104 = _mm_cvtsi32_si64(*(_DWORD *)(v96 + a4 + 4));
  v105 = v95 + 2 * a2;
  v106 = _m_psubw(_m_punpcklbw(v93, v94), _m_punpcklbw(v94, v94));
  v107 = v96 + 2 * a4;
  v108 = _m_psubw(_m_punpcklbw(v98, v100), _m_punpcklbw(v100, v100));
  v109 = _mm_cvtsi32_si64(*(_DWORD *)(v107 + 4));
  v110 = _m_psubw(_m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(v105 + 4)), v109), _m_punpcklbw(v109, v109));
  v111 = _mm_cvtsi32_si64(*(_DWORD *)(v107 + 2 * a4 - a4 + 4));
  v112 = _m_paddw(_m_psubw(_m_punpcklbw(v102, v104), _m_punpcklbw(v104, v104)), v101);
  v113 = _m_paddw(v110, v103);
  v114 = _m_psubw(_m_paddw(v103, v103), v113);
  v115 = _m_paddw(
           _m_psubw(_m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(v105 + 2 * a2 - a2 + 4)), v111), _m_punpcklbw(v111, v111)),
           v106);
  v116 = _m_paddw(v108, v99);
  v117 = _m_psubw(_m_paddw(v106, v106), v115);
  v118 = _m_paddw(_m_psubw(_m_paddw(v99, v99), v116), v114);
  v119 = _m_paddw(_m_psubw(_m_paddw(v101, v101), v112), v117);
  v120 = _m_paddw(v116, v113);
  v121 = _m_paddw(v112, v115);
  v122 = _m_psubw(_m_paddw(v114, v114), v118);
  v123 = _m_psubw(_m_paddw(v117, v117), v119);
  v124 = _m_psubw(_m_paddw(v113, v113), v120);
  v125 = _m_psubw(_m_paddw(v115, v115), v121);
  v126 = _m_paddw(v118, v119);
  v127 = _m_paddw(v122, v123);
  v128 = _m_paddw(v120, v121);
  v129 = _m_paddw(v124, v125);
  v130 = _m_psubw(_m_paddw(v119, v119), v126);
  v131 = _m_psubw(_m_paddw(v123, v123), v127);
  v132 = _m_psubw(_m_paddw(v125, v125), v129);
  v133 = _m_psubw(_m_paddw(v121, v121), v128);
  v134 = v127;
  v135 = _m_punpcklwd(v127, v131);
  v136 = _m_punpckhwd(v134, v131);
  v137 = v126;
  v138 = _m_punpcklwd(v126, v130);
  v139 = _m_punpckhwd(v137, v130);
  v140 = v138;
  v141 = _m_punpckldq(v138, v135);
  v142 = _m_punpckhdq(v140, v135);
  v143 = v139;
  v144 = _m_punpckhdq(v139, v136);
  v189 = v141;
  v145 = v129;
  v146 = _m_punpcklwd(v129, v132);
  v191 = v142;
  v147 = _m_punpckhwd(v145, v132);
  v148 = v128;
  v149 = _m_punpcklwd(v128, v133);
  v193 = _m_punpckldq(v143, v136);
  v150 = _m_punpckhwd(v148, v133);
  v151 = v149;
  v152 = _m_punpckldq(v149, v146);
  v195 = v144;
  v153 = _m_paddw(_m_punpckhdq(v151, v146), v82);
  v154 = _m_paddw(_m_punpckldq(v150, v147), v83);
  v155 = _m_psubw(_m_paddw(v83, v83), v154);
  v156 = _m_paddw(_m_punpckhdq(v150, v147), v84);
  v157 = _m_paddw(v152, v81);
  v158 = _m_psubw(_m_paddw(v84, v84), v156);
  v159 = _m_paddw(_m_psubw(_m_paddw(v81, v81), v157), v155);
  v160 = _m_paddw(_m_psubw(_m_paddw(v82, v82), v153), v158);
  v161 = _m_paddw(v157, v154);
  v162 = _m_paddw(v153, v156);
  v163 = _m_psubw(_m_paddw(v155, v155), v159);
  v164 = _m_psubw(_m_paddw(v158, v158), v160);
  v165 = _m_psubw(_m_paddw(v156, v156), v162);
  v166 = v165;
  v167 = _m_psubw(_m_paddw(v154, v154), v161);
  v168 = _m_psrlw(_m_pcmpeqb(v165, v165), 1u);
  v169 = _m_pmaddwd(
           _m_psubw(
             _m_paddw(
               _m_paddw(
                 _m_paddw(
                   _m_psubw(_m_pmaxsw(v159, v160), _m_paddsw(_m_paddw(v159, v160), v168)),
                   _m_psubw(_m_pmaxsw(v163, v164), _m_paddsw(_m_paddw(v163, v164), v168))),
                 _m_psubw(_m_pmaxsw(v161, v162), _m_paddsw(_m_paddw(v161, v162), v168))),
               _m_pmaxsw(v166, v167)),
             _m_paddsw(_m_paddw(v166, v167), v168)),
           _m_psrlw(v168, 0xEu));
  result = 2 * _mm_cvtsi64_si32(_m_paddd(v169, _m_punpckhdq(v169, v169))) - 32;
  if ( result < a5 )
  {
    v171 = _m_paddw(v191, v190);
    v172 = _m_paddw(v193, v192);
    v173 = _m_psubw(_m_paddw(v192, v192), v172);
    v174 = _m_paddw(v195, v194);
    v175 = _m_paddw(v189, v188);
    v176 = _m_psubw(_m_paddw(v194, v194), v174);
    v177 = _m_paddw(_m_psubw(_m_paddw(v188, v188), v175), v173);
    v178 = _m_paddw(_m_psubw(_m_paddw(v190, v190), v171), v176);
    v179 = _m_paddw(v175, v172);
    v180 = _m_paddw(v171, v174);
    v181 = _m_psubw(_m_paddw(v173, v173), v177);
    v182 = _m_psubw(_m_paddw(v176, v176), v178);
    v183 = _m_psubw(_m_paddw(v174, v174), v180);
    v184 = v183;
    v185 = _m_psubw(_m_paddw(v172, v172), v179);
    v186 = _m_psrlw(_m_pcmpeqb(v183, v183), 1u);
    v187 = _m_pmaddwd(
             _m_psubw(
               _m_paddw(
                 _m_paddw(
                   _m_paddw(
                     _m_psubw(_m_pmaxsw(v177, v178), _m_paddsw(_m_paddw(v177, v178), v186)),
                     _m_psubw(_m_pmaxsw(v181, v182), _m_paddsw(_m_paddw(v181, v182), v186))),
                   _m_psubw(_m_pmaxsw(v179, v180), _m_paddsw(_m_paddw(v179, v180), v186))),
                 _m_pmaxsw(v184, v185)),
               _m_paddsw(_m_paddw(v184, v185), v186)),
             _m_psrlw(v186, 0xEu));
    result = result - 32 + 2 * _mm_cvtsi64_si32(_m_paddd(v187, _m_punpckhdq(v187, v187)));
  }
  return result;
}
