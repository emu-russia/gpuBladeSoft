int __cdecl sub_6F82BD20(int a1, int a2)
{
  int v2; // eax@1
  __m64 v3; // mm0@1
  __m64 v4; // mm4@1
  __m64 v5; // mm1@1
  __m64 v6; // mm5@1
  __m64 v7; // mm2@1
  __m64 v8; // mm6@1
  __m64 v9; // mm3@1
  __m64 v10; // mm7@1
  __m64 v11; // mm5@1
  __m64 v12; // mm6@1
  __m64 v13; // mm2@1
  __m64 v14; // mm7@1
  __m64 v15; // mm4@1
  __m64 v16; // mm3@1
  __m64 v17; // mm0@1
  __m64 v18; // mm1@1
  __m64 v19; // mm4@1
  __m64 v20; // mm5@1
  __m64 v21; // mm2@1
  __m64 v22; // mm3@1
  __m64 v23; // mm6@1
  __m64 v24; // mm7@1
  __m64 v25; // mm0@1
  __m64 v26; // mm2@1
  __m64 v27; // mm4@1
  __m64 v28; // mm6@1
  __m64 v29; // mm1@1
  __m64 v30; // mm3@1
  __m64 v31; // mm7@1
  __m64 v32; // ST10_8@1
  __m64 v33; // mm5@1
  __m64 v34; // mm2@1
  __m64 v35; // mm5@1
  __m64 v36; // mm3@1
  __m64 v37; // mm0@1
  __m64 v38; // mm3@1
  __m64 v39; // mm1@1
  __m64 v40; // mm0@1
  __m64 v41; // mm1@1
  __m64 v42; // mm2@1
  __m64 v43; // mm3@1
  __m64 v44; // ST40_8@1
  __m64 v45; // mm0@1
  __m64 v46; // mm6@1
  __m64 v47; // ST50_8@1
  __m64 v48; // mm0@1
  __m64 v49; // mm7@1
  __m64 v50; // mm4@1
  __m64 v51; // ST60_8@1
  __m64 v52; // mm5@1
  __m64 v53; // mm4@1
  __m64 v54; // ST70_8@1
  __m64 v55; // mm5@1
  __m64 v56; // mm6@1
  __m64 v57; // ST00_8@1
  __m64 v58; // ST10_8@1
  __m64 v59; // ST20_8@1
  __m64 v60; // ST30_8@1
  __m64 v61; // mm0@1
  __m64 v62; // mm4@1
  __m64 v63; // mm1@1
  __m64 v64; // mm5@1
  __m64 v65; // mm2@1
  __m64 v66; // mm6@1
  __m64 v67; // mm3@1
  __m64 v68; // mm7@1
  __m64 v69; // mm5@1
  __m64 v70; // mm6@1
  __m64 v71; // mm2@1
  __m64 v72; // mm7@1
  __m64 v73; // mm4@1
  __m64 v74; // mm3@1
  __m64 v75; // mm0@1
  __m64 v76; // mm1@1
  __m64 v77; // mm4@1
  __m64 v78; // mm5@1
  __m64 v79; // mm2@1
  __m64 v80; // mm3@1
  __m64 v81; // mm6@1
  __m64 v82; // mm7@1
  __m64 v83; // mm0@1
  __m64 v84; // mm2@1
  __m64 v85; // mm4@1
  __m64 v86; // mm6@1
  __m64 v87; // mm1@1
  __m64 v88; // mm3@1
  __m64 v89; // mm7@1
  __m64 v90; // ST18_8@1
  __m64 v91; // mm5@1
  __m64 v92; // mm2@1
  __m64 v93; // mm5@1
  __m64 v94; // mm3@1
  __m64 v95; // mm0@1
  __m64 v96; // mm3@1
  __m64 v97; // mm1@1
  __m64 v98; // mm0@1
  __m64 v99; // mm1@1
  __m64 v100; // mm2@1
  __m64 v101; // mm3@1
  __m64 v102; // ST48_8@1
  __m64 v103; // mm0@1
  __m64 v104; // mm6@1
  __m64 v105; // ST58_8@1
  __m64 v106; // mm0@1
  __m64 v107; // mm7@1
  __m64 v108; // mm4@1
  __m64 v109; // ST68_8@1
  __m64 v110; // mm7@1
  __m64 v111; // mm5@1
  __m64 v112; // mm4@1
  __m64 v113; // ST78_8@1
  __m64 v114; // mm5@1
  __m64 v115; // mm6@1
  __m64 v116; // mm2@1
  __m64 v117; // mm7@1
  __m64 v118; // mm4@1
  __m64 v119; // mm3@1
  __m64 v120; // mm0@1
  __m64 v121; // mm1@1
  __m64 v122; // mm4@1
  __m64 v123; // mm5@1
  __m64 v124; // mm2@1
  __m64 v125; // mm3@1
  __m64 v126; // mm7@1
  __m64 v127; // ST38_8@1
  __m64 v128; // ST28_8@1
  __m64 v129; // mm7@1
  __m64 v130; // mm0@1
  __m64 v131; // mm1@1
  __m64 v132; // mm0@1
  int v133; // edx@1
  __m64 v134; // mm5@1
  __m64 v135; // mm6@1
  __m64 v136; // mm2@1
  __m64 v137; // mm7@1
  __m64 v138; // mm4@1
  __m64 v139; // mm3@1
  __m64 v140; // mm0@1
  __m64 v141; // mm1@1
  __m64 v142; // mm4@1
  __m64 v143; // mm5@1
  __m64 v144; // mm2@1
  __m64 v145; // mm3@1
  __m64 v146; // mm7@1
  __m64 v147; // ST78_8@1
  __m64 v148; // ST68_8@1
  __m64 v149; // mm7@1
  __m64 v150; // mm0@1

  v2 = a1 + 4 * a2;
  v3 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)a1), 0i64);
  v4 = _mm_cvtsi32_si64(*(_DWORD *)v2);
  v5 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(a1 + a2)), 0i64);
  v6 = _mm_cvtsi32_si64(*(_DWORD *)(v2 + a2));
  v7 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(a1 + 2 * a2)), 0i64);
  v8 = _mm_cvtsi32_si64(*(_DWORD *)(v2 + 2 * a2));
  v9 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(a1 + 3 * a2)), 0i64);
  v10 = _mm_cvtsi32_si64(*(_DWORD *)(v2 + 3 * a2));
  v11 = _m_paddw(_m_psrlw(_m_punpcklbw(v6, v6), 8u), v5);
  v12 = _m_paddw(_m_psrlw(_m_punpcklbw(v8, v8), 8u), v7);
  v13 = _m_psubw(_m_paddw(v7, v7), v12);
  v14 = _m_paddw(_m_psrlw(_m_punpcklbw(v10, v10), 8u), v9);
  v15 = _m_paddw(_m_psrlw(_m_punpcklbw(v4, v4), 8u), v3);
  v16 = _m_psubw(_m_paddw(v9, v9), v14);
  v17 = _m_paddw(_m_psubw(_m_paddw(v3, v3), v15), v13);
  v18 = _m_paddw(_m_psubw(_m_paddw(v5, v5), v11), v16);
  v19 = _m_paddw(v15, v12);
  v20 = _m_paddw(v11, v14);
  v21 = _m_psubw(_m_paddw(v13, v13), v17);
  v22 = _m_psubw(_m_paddw(v16, v16), v18);
  v23 = _m_psubw(_m_paddw(v12, v12), v19);
  v24 = _m_psubw(_m_paddw(v14, v14), v20);
  v25 = _m_paddw(v17, v18);
  v26 = _m_paddw(v21, v22);
  v27 = _m_paddw(v19, v20);
  v28 = _m_paddw(v23, v24);
  v29 = _m_psubw(_m_paddw(v18, v18), v25);
  v30 = _m_psubw(_m_paddw(v22, v22), v26);
  v31 = _m_psubw(_m_paddw(v24, v24), v28);
  v32 = _m_psubw(_m_paddw(v20, v20), v27);
  v33 = v26;
  v34 = _m_punpcklwd(v26, v30);
  v35 = _m_punpckhwd(v33, v30);
  v36 = v25;
  v37 = _m_punpcklwd(v25, v29);
  v38 = _m_punpckhwd(v36, v29);
  v39 = v37;
  v40 = _m_punpckldq(v37, v34);
  v41 = _m_punpckhdq(v39, v34);
  v42 = v38;
  v43 = _m_punpckhdq(v38, v35);
  v44 = v40;
  v45 = v28;
  v46 = _m_punpcklwd(v28, v31);
  v47 = v41;
  v48 = _m_punpckhwd(v45, v31);
  v49 = v27;
  v50 = _m_punpcklwd(v27, v32);
  v51 = _m_punpckldq(v42, v35);
  v52 = v50;
  v53 = _m_punpckldq(v50, v46);
  v54 = v43;
  v55 = _m_punpckhdq(v52, v46);
  v56 = _m_punpckhwd(v49, v32);
  v57 = v53;
  v58 = v55;
  v59 = _m_punpckldq(v56, v48);
  v60 = _m_punpckhdq(v56, v48);
  v61 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(a1 + 4)), 0i64);
  v62 = _mm_cvtsi32_si64(*(_DWORD *)(v2 + 4));
  v63 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(a1 + a2 + 4)), 0i64);
  v64 = _mm_cvtsi32_si64(*(_DWORD *)(v2 + a2 + 4));
  v65 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(a1 + 2 * a2 + 4)), 0i64);
  v66 = _mm_cvtsi32_si64(*(_DWORD *)(v2 + 2 * a2 + 4));
  v67 = _m_punpcklbw(_mm_cvtsi32_si64(*(_DWORD *)(a1 + 3 * a2 + 4)), 0i64);
  v68 = _mm_cvtsi32_si64(*(_DWORD *)(v2 + 3 * a2 + 4));
  v69 = _m_paddw(_m_psrlw(_m_punpcklbw(v64, v64), 8u), v63);
  v70 = _m_paddw(_m_psrlw(_m_punpcklbw(v66, v66), 8u), v65);
  v71 = _m_psubw(_m_paddw(v65, v65), v70);
  v72 = _m_paddw(_m_psrlw(_m_punpcklbw(v68, v68), 8u), v67);
  v73 = _m_paddw(_m_psrlw(_m_punpcklbw(v62, v62), 8u), v61);
  v74 = _m_psubw(_m_paddw(v67, v67), v72);
  v75 = _m_paddw(_m_psubw(_m_paddw(v61, v61), v73), v71);
  v76 = _m_paddw(_m_psubw(_m_paddw(v63, v63), v69), v74);
  v77 = _m_paddw(v73, v70);
  v78 = _m_paddw(v69, v72);
  v79 = _m_psubw(_m_paddw(v71, v71), v75);
  v80 = _m_psubw(_m_paddw(v74, v74), v76);
  v81 = _m_psubw(_m_paddw(v70, v70), v77);
  v82 = _m_psubw(_m_paddw(v72, v72), v78);
  v83 = _m_paddw(v75, v76);
  v84 = _m_paddw(v79, v80);
  v85 = _m_paddw(v77, v78);
  v86 = _m_paddw(v81, v82);
  v87 = _m_psubw(_m_paddw(v76, v76), v83);
  v88 = _m_psubw(_m_paddw(v80, v80), v84);
  v89 = _m_psubw(_m_paddw(v82, v82), v86);
  v90 = _m_psubw(_m_paddw(v78, v78), v85);
  v91 = v84;
  v92 = _m_punpcklwd(v84, v88);
  v93 = _m_punpckhwd(v91, v88);
  v94 = v83;
  v95 = _m_punpcklwd(v83, v87);
  v96 = _m_punpckhwd(v94, v87);
  v97 = v95;
  v98 = _m_punpckldq(v95, v92);
  v99 = _m_punpckhdq(v97, v92);
  v100 = v96;
  v101 = _m_punpckhdq(v96, v93);
  v102 = v98;
  v103 = v86;
  v104 = _m_punpcklwd(v86, v89);
  v105 = v99;
  v106 = _m_punpckhwd(v103, v89);
  v107 = v85;
  v108 = _m_punpcklwd(v85, v90);
  v109 = _m_punpckldq(v100, v93);
  v110 = _m_punpckhwd(v107, v90);
  v111 = v108;
  v112 = _m_punpckldq(v108, v104);
  v113 = v101;
  v114 = _m_paddw(_m_punpckhdq(v111, v104), v58);
  v115 = _m_paddw(_m_punpckldq(v110, v106), v59);
  v116 = _m_psubw(_m_paddw(v59, v59), v115);
  v117 = _m_paddw(_m_punpckhdq(v110, v106), v60);
  v118 = _m_paddw(v112, v57);
  v119 = _m_psubw(_m_paddw(v60, v60), v117);
  v120 = _m_paddw(_m_psubw(_m_paddw(v57, v57), v118), v116);
  v121 = _m_paddw(_m_psubw(_m_paddw(v58, v58), v114), v119);
  v122 = _m_paddw(v118, v115);
  v123 = _m_paddw(v114, v117);
  v124 = _m_psubw(_m_paddw(v116, v116), v120);
  v125 = _m_psubw(_m_paddw(v119, v119), v121);
  v126 = _m_psubw(_m_paddw(v117, v117), v123);
  v127 = v126;
  v128 = _m_psubw(_m_paddw(v115, v115), v122);
  v129 = _m_psrlw(_m_pcmpeqb(v126, v126), 1u);
  v130 = _m_psubw(_m_pmaxsw(v120, v121), _m_paddsw(_m_paddw(v120, v121), v129));
  v131 = _m_paddw(v122, v123);
  LOWORD(v2) = _mm_cvtsi64_si32(v131);
  v132 = _m_pmaddwd(
           _m_psubw(
             _m_paddw(
               _m_paddw(
                 _m_paddw(v130, _m_psubw(_m_pmaxsw(v124, v125), _m_paddsw(_m_paddw(v124, v125), v129))),
                 _m_psubw(_m_pmaxsw(v122, v123), _m_paddsw(v131, v129))),
               _m_pmaxsw(v127, v128)),
             _m_paddsw(_m_paddw(v127, v128), v129)),
           _m_psrlw(v129, 0xEu));
  v133 = _mm_cvtsi64_si32(_m_paddd(v132, _m_punpckhdq(v132, v132)));
  v134 = _m_paddw(v105, v47);
  v135 = _m_paddw(v109, v51);
  v136 = _m_psubw(_m_paddw(v51, v51), v135);
  v137 = _m_paddw(v113, v54);
  v138 = _m_paddw(v102, v44);
  v139 = _m_psubw(_m_paddw(v54, v54), v137);
  v140 = _m_paddw(_m_psubw(_m_paddw(v44, v44), v138), v136);
  v141 = _m_paddw(_m_psubw(_m_paddw(v47, v47), v134), v139);
  v142 = _m_paddw(v138, v135);
  v143 = _m_paddw(v134, v137);
  v144 = _m_psubw(_m_paddw(v136, v136), v140);
  v145 = _m_psubw(_m_paddw(v139, v139), v141);
  v146 = _m_psubw(_m_paddw(v137, v137), v143);
  v147 = v146;
  v148 = _m_psubw(_m_paddw(v135, v135), v142);
  v149 = _m_psrlw(_m_pcmpeqb(v146, v146), 1u);
  v150 = _m_pmaddwd(
           _m_psubw(
             _m_paddw(
               _m_paddw(
                 _m_paddw(
                   _m_psubw(_m_pmaxsw(v140, v141), _m_paddsw(_m_paddw(v140, v141), v149)),
                   _m_psubw(_m_pmaxsw(v144, v145), _m_paddsw(_m_paddw(v144, v145), v149))),
                 _m_psubw(_m_pmaxsw(v142, v143), _m_paddsw(_m_paddw(v142, v143), v149))),
               _m_pmaxsw(v147, v148)),
             _m_paddsw(_m_paddw(v147, v148), v149)),
           _m_psrlw(v149, 0xEu));
  return 2 * v133 - (unsigned __int16)v2 + 2 * _mm_cvtsi64_si32(_m_paddd(v150, _m_punpckhdq(v150, v150))) - 64;
}
