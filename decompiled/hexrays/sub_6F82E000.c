int __cdecl sub_6F82E000(int a1, signed int a2)
{
  int result; // eax@1
  __m64 v3; // mm2@2
  unsigned __int64 v4; // mm6@2
  __m64 v5; // mm7@2
  unsigned __int64 v6; // mm5@2
  __m64 v7; // mm3@2
  __m64 v8; // mm4@2
  __m64 v9; // mm6@2
  __m64 v10; // mm1@2
  __m64 v11; // mm4@2
  unsigned __int64 v12; // mm7@2
  __m64 v13; // mm6@2
  __m64 v14; // mm0@2
  __m64 v15; // mm3@2
  __m64 v16; // mm2@2
  __m64 v17; // mm7@2
  __m64 v18; // mm5@2
  __m64 v19; // mm1@2
  __m64 v20; // mm3@2
  __m64 v21; // mm5@2
  __m64 v22; // mm0@2
  __m64 v23; // mm7@2
  __m64 v24; // mm0@2
  __m64 v25; // mm2@2
  __m64 v26; // mm1@2
  __m64 v27; // mm3@2
  __m64 v28; // mm5@2
  __m64 v29; // mm7@2
  __m64 v30; // mm1@2
  unsigned __int64 v31; // mm4@2
  __m64 v32; // mm7@2
  __m64 v33; // mm5@2
  __m64 v34; // mm3@2
  __m64 v35; // mm5@2
  __m64 v36; // mm2@2
  __m64 v37; // mm6@2
  __m64 v38; // mm3@2
  __m64 v39; // mm1@2
  __m64 v40; // mm6@2
  __m64 v41; // mm0@2
  __m64 v42; // mm4@2
  __m64 v43; // mm2@2
  __m64 v44; // mm3@2
  __m64 v45; // mm4@2
  __m64 v46; // mm7@2
  __m64 v47; // mm4@2
  __m64 v48; // mm6@2
  __m64 v49; // mm3@2
  __m64 v50; // mm5@2
  __m64 v51; // mm7@2
  __m64 v52; // mm1@2
  __m64 v53; // mm4@2
  __m64 v54; // mm1@2
  __m64 v55; // mm0@2
  __m64 v56; // mm6@2
  __m64 v57; // mm0@2
  __m64 v58; // mm6@2
  __m64 v59; // mm4@2
  __m64 v60; // mm1@2
  __m64 v61; // mm5@2
  __m64 v62; // mm0@2
  __m64 v63; // mm0@2
  __m64 v64; // mm4@2
  __m64 v65; // mm5@2
  __m64 v66; // mm2@2
  __m64 v67; // mm5@2
  __m64 v68; // mm2@2
  unsigned __int64 v69; // mm6@2
  __m64 v70; // mm7@2
  unsigned __int64 v71; // mm5@2
  __m64 v72; // mm3@2
  __m64 v73; // mm4@2
  __m64 v74; // mm6@2
  __m64 v75; // mm1@2
  __m64 v76; // mm4@2
  unsigned __int64 v77; // mm7@2
  __m64 v78; // mm6@2
  __m64 v79; // mm0@2
  __m64 v80; // mm3@2
  __m64 v81; // mm2@2
  __m64 v82; // mm7@2
  __m64 v83; // mm5@2
  __m64 v84; // mm1@2
  __m64 v85; // mm3@2
  __m64 v86; // mm5@2
  __m64 v87; // mm0@2
  __m64 v88; // mm7@2
  __m64 v89; // mm0@2
  __m64 v90; // mm2@2
  __m64 v91; // mm1@2
  __m64 v92; // mm3@2
  __m64 v93; // mm5@2
  __m64 v94; // mm7@2
  __m64 v95; // mm1@2
  unsigned __int64 v96; // mm4@2
  __m64 v97; // mm7@2
  __m64 v98; // mm5@2
  __m64 v99; // mm3@2
  __m64 v100; // mm5@2
  __m64 v101; // mm2@2
  __m64 v102; // mm6@2
  __m64 v103; // mm3@2
  __m64 v104; // mm1@2
  __m64 v105; // mm6@2
  __m64 v106; // mm0@2
  __m64 v107; // mm4@2
  __m64 v108; // mm2@2
  __m64 v109; // mm3@2
  __m64 v110; // mm4@2
  __m64 v111; // mm7@2
  __m64 v112; // mm4@2
  __m64 v113; // mm6@2
  __m64 v114; // mm3@2
  __m64 v115; // mm5@2
  __m64 v116; // mm7@2
  __m64 v117; // mm1@2
  __m64 v118; // mm4@2
  __m64 v119; // mm1@2
  __m64 v120; // mm0@2
  __m64 v121; // mm6@2
  __m64 v122; // mm0@2
  __m64 v123; // mm6@2
  __m64 v124; // mm4@2
  __m64 v125; // mm1@2
  __m64 v126; // mm5@2
  __m64 v127; // mm0@2
  __m64 v128; // mm0@2
  __m64 v129; // mm4@2
  __m64 v130; // mm5@2
  __m64 v131; // mm2@2
  __m64 v132; // mm5@2
  __m64 v133; // mm2@2
  unsigned __int64 v134; // mm6@2
  __m64 v135; // mm7@2
  unsigned __int64 v136; // mm5@2
  __m64 v137; // mm3@2
  __m64 v138; // mm4@2
  __m64 v139; // mm6@2
  __m64 v140; // mm1@2
  __m64 v141; // mm4@2
  unsigned __int64 v142; // mm7@2
  __m64 v143; // mm6@2
  __m64 v144; // mm0@2
  __m64 v145; // mm3@2
  __m64 v146; // mm2@2
  __m64 v147; // mm7@2
  __m64 v148; // mm5@2
  __m64 v149; // mm1@2
  __m64 v150; // mm3@2
  __m64 v151; // mm5@2
  __m64 v152; // mm0@2
  __m64 v153; // mm7@2
  __m64 v154; // mm0@2
  __m64 v155; // mm2@2
  __m64 v156; // mm1@2
  __m64 v157; // mm3@2
  __m64 v158; // mm5@2
  __m64 v159; // mm7@2
  __m64 v160; // mm1@2
  unsigned __int64 v161; // mm4@2
  __m64 v162; // mm7@2
  __m64 v163; // mm5@2
  __m64 v164; // mm3@2
  __m64 v165; // mm5@2
  __m64 v166; // mm2@2
  __m64 v167; // mm6@2
  __m64 v168; // mm3@2
  __m64 v169; // mm1@2
  __m64 v170; // mm6@2
  __m64 v171; // mm0@2
  __m64 v172; // mm2@2
  __m64 v173; // mm4@2
  __m64 v174; // mm3@2
  __m64 v175; // mm7@2
  __m64 v176; // mm4@2
  __m64 v177; // mm6@2
  __m64 v178; // mm7@2
  __m64 v179; // mm2@2
  unsigned __int64 v180; // mm6@2
  __m64 v181; // mm7@2
  unsigned __int64 v182; // mm5@2
  __m64 v183; // mm3@2
  __m64 v184; // mm4@2
  __m64 v185; // mm6@2
  __m64 v186; // mm1@2
  __m64 v187; // mm4@2
  unsigned __int64 v188; // mm7@2
  __m64 v189; // mm6@2
  __m64 v190; // mm0@2
  __m64 v191; // mm3@2
  __m64 v192; // mm2@2
  __m64 v193; // mm7@2
  __m64 v194; // mm5@2
  __m64 v195; // mm1@2
  __m64 v196; // mm3@2
  __m64 v197; // mm5@2
  __m64 v198; // mm0@2
  __m64 v199; // mm7@2
  __m64 v200; // mm0@2
  __m64 v201; // mm2@2
  __m64 v202; // mm1@2
  __m64 v203; // mm3@2
  __m64 v204; // mm5@2
  __m64 v205; // mm7@2
  __m64 v206; // mm1@2
  unsigned __int64 v207; // mm4@2
  __m64 v208; // mm7@2
  __m64 v209; // mm5@2
  __m64 v210; // mm3@2
  __m64 v211; // mm5@2
  __m64 v212; // mm2@2
  __m64 v213; // mm6@2
  __m64 v214; // mm3@2
  __m64 v215; // mm1@2
  __m64 v216; // mm6@2
  __m64 v217; // mm0@2
  __m64 v218; // mm2@2
  __m64 v219; // mm4@2
  __m64 v220; // mm3@2
  __m64 v221; // mm7@2
  __m64 v222; // mm4@2
  __m64 v223; // mm6@2
  __m64 v224; // mm7@2
  __m64 v225; // mm2@3
  __m64 v226; // mm3@3
  __m64 v227; // mm4@3
  __m64 v228; // mm5@3
  __m64 v229; // mm6@3
  __m64 v230; // mm0@3
  __m64 v231; // mm7@3
  __m64 v232; // mm1@3
  __m64 v233; // mm3@3
  unsigned __int64 v234; // mm4@3
  __m64 v235; // mm2@3
  __m64 v236; // mm5@3
  __m64 v237; // mm6@3
  __m64 v238; // mm4@3
  __m64 v239; // mm1@3
  __m64 v240; // mm6@3
  __m64 v241; // mm0@3
  __m64 v242; // mm2@3
  __m64 v243; // mm3@3
  __m64 v244; // mm4@3
  __m64 v245; // mm7@3
  __m64 v246; // mm4@3
  __m64 v247; // mm6@3
  __m64 v248; // mm3@3
  __m64 v249; // mm5@3
  __m64 v250; // mm7@3
  __m64 v251; // mm1@3
  __m64 v252; // mm4@3
  __m64 v253; // mm1@3
  __m64 v254; // mm0@3
  __m64 v255; // mm6@3
  __m64 v256; // mm0@3
  __m64 v257; // mm6@3
  __m64 v258; // mm4@3
  __m64 v259; // mm1@3
  __m64 v260; // mm5@3
  __m64 v261; // mm0@3
  __m64 v262; // mm0@3
  __m64 v263; // mm4@3
  __m64 v264; // mm5@3
  __m64 v265; // mm2@3
  __m64 v266; // mm5@3
  __m64 v267; // mm2@3
  __m64 v268; // mm3@3
  __m64 v269; // mm4@3
  __m64 v270; // mm5@3
  __m64 v271; // mm6@3
  __m64 v272; // mm0@3
  __m64 v273; // mm7@3
  __m64 v274; // mm1@3
  __m64 v275; // mm3@3
  unsigned __int64 v276; // mm4@3
  __m64 v277; // mm2@3
  __m64 v278; // mm5@3
  __m64 v279; // mm6@3
  __m64 v280; // mm4@3
  __m64 v281; // mm1@3
  __m64 v282; // mm6@3
  __m64 v283; // mm0@3
  __m64 v284; // mm2@3
  __m64 v285; // mm4@3
  __m64 v286; // mm3@3
  __m64 v287; // mm7@3
  __m64 v288; // mm4@3
  __m64 v289; // mm6@3
  __m64 v290; // mm7@3
  __m64 v291; // mm2@3
  __m64 v292; // mm3@3
  __m64 v293; // mm4@3
  __m64 v294; // mm5@3
  __m64 v295; // mm6@3
  __m64 v296; // mm0@3
  __m64 v297; // mm7@3
  __m64 v298; // mm1@3
  __m64 v299; // mm3@3
  unsigned __int64 v300; // mm4@3
  __m64 v301; // mm2@3
  __m64 v302; // mm5@3
  __m64 v303; // mm6@3
  __m64 v304; // mm4@3
  __m64 v305; // mm1@3
  __m64 v306; // mm6@3
  __m64 v307; // mm0@3
  __m64 v308; // mm2@3
  __m64 v309; // mm4@3
  __m64 v310; // mm3@3
  __m64 v311; // mm7@3
  __m64 v312; // mm4@3
  __m64 v313; // mm6@3
  __m64 v314; // mm7@3

  result = a1;
  if ( a2 <= 9 )
  {
    v225 = *(__m64 *)(a1 + 48);
    v226 = *(__m64 *)(a1 + 16);
    v227 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 48), stru_6FB97EC0[2]), v225);
    v228 = *(__m64 *)(a1 + 32);
    v229 = _m_psubw(0i64, _m_paddw(v225, _m_pmulhw(stru_6FB97EC0[4], v225)));
    v230 = _m_psubw(_m_paddw(_m_pmulhw(stru_6FB97EC0[0], v226), v226), v227);
    v231 = _m_paddw(*(__m64 *)(a1 + 32), _m_pmulhw(v228, stru_6FB97EC0[1]));
    v232 = _m_pmulhw(v228, stru_6FB97EC0[5]);
    v233 = _m_psubw(_m_pmulhw(v226, stru_6FB97EC0[6]), v229);
    *(__m64 *)(a1 + 16) = _m_paddw(_m_paddw(v227, v227), v230);
    v234 = stru_6FB97EC0[3].m64_u64;
    *(__m64 *)(a1 + 32) = _m_paddw(_m_paddw(v229, v229), v233);
    v235 = _m_paddw(v230, _m_pmulhw(v230, (__m64)v234));
    v236 = _m_psubw(_m_paddw(v233, _m_pmulhw(v233, (__m64)v234)), v232);
    v237 = _m_paddw(_m_pmulhw(*(__m64 *)a1, (__m64)v234), *(__m64 *)a1);
    v238 = v237;
    v239 = _m_paddw(_m_paddw(v232, v232), v236);
    v240 = _m_psubw(v237, v235);
    v241 = *(__m64 *)(a1 + 16);
    v242 = _m_psubw(_m_paddw(_m_paddw(v235, v235), v240), v239);
    v243 = *(__m64 *)(a1 + 32);
    v244 = _m_psubw(v238, v231);
    v245 = _m_paddw(_m_paddw(v231, v231), v244);
    v246 = _m_psubw(v244, v243);
    v247 = _m_psubw(v240, v236);
    v248 = _m_paddw(_m_paddw(v243, v243), v246);
    v249 = _m_paddw(_m_paddw(v236, v236), v247);
    v250 = _m_psubw(v245, v241);
    *(__m64 *)(a1 + 16) = _m_paddw(_m_paddw(v239, v239), v242);
    v251 = v246;
    v252 = _m_punpcklwd(v246, v249);
    *(__m64 *)a1 = _m_paddw(_m_paddw(v241, v241), v250);
    v253 = _m_punpckhwd(v251, v249);
    v254 = v247;
    v255 = _m_punpcklwd(v247, v250);
    *(__m64 *)(a1 + 8) = _m_punpckldq(v252, v255);
    v256 = _m_punpckhwd(v254, v250);
    *(__m64 *)(a1 + 24) = _m_punpckhdq(v252, v255);
    v257 = _m_punpckhdq(v253, v256);
    v258 = *(__m64 *)a1;
    v259 = _m_punpckldq(v253, v256);
    v260 = *(__m64 *)(a1 + 16);
    v261 = *(__m64 *)a1;
    *(__m64 *)(a1 + 56) = v257;
    v262 = _m_punpcklwd(v261, v260);
    *(__m64 *)(a1 + 40) = v259;
    v263 = _m_punpckhwd(v258, v260);
    v264 = v242;
    v265 = _m_punpcklwd(v242, v248);
    *(__m64 *)a1 = _m_punpckldq(v262, v265);
    v266 = _m_punpckhwd(v264, v248);
    *(__m64 *)(a1 + 16) = _m_punpckhdq(v262, v265);
    *(__m64 *)(a1 + 48) = _m_punpckhdq(v263, v266);
    *(__m64 *)(a1 + 32) = _m_punpckldq(v263, v266);
    v267 = *(__m64 *)(a1 + 48);
    v268 = *(__m64 *)(a1 + 16);
    v269 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 48), stru_6FB97EC0[2]), v267);
    v270 = *(__m64 *)(a1 + 32);
    v271 = _m_psubw(0i64, _m_paddw(v267, _m_pmulhw(stru_6FB97EC0[4], v267)));
    v272 = _m_psubw(_m_paddw(_m_pmulhw(stru_6FB97EC0[0], v268), v268), v269);
    v273 = _m_paddw(*(__m64 *)(a1 + 32), _m_pmulhw(v270, stru_6FB97EC0[1]));
    v274 = _m_pmulhw(v270, stru_6FB97EC0[5]);
    v275 = _m_psubw(_m_pmulhw(v268, stru_6FB97EC0[6]), v271);
    *(__m64 *)(a1 + 16) = _m_paddw(_m_paddw(v269, v269), v272);
    v276 = stru_6FB97EC0[3].m64_u64;
    *(__m64 *)(a1 + 32) = _m_paddw(_m_paddw(v271, v271), v275);
    v277 = _m_paddw(v272, _m_pmulhw(v272, (__m64)v276));
    v278 = _m_psubw(_m_paddw(v275, _m_pmulhw(v275, (__m64)v276)), v274);
    v279 = _m_paddw(_m_pmulhw(*(__m64 *)a1, (__m64)v276), *(__m64 *)a1);
    v280 = v279;
    v281 = _m_paddw(_m_paddw(v274, v274), v278);
    v282 = _m_psubw(v279, v277);
    v283 = *(__m64 *)(a1 + 16);
    v284 = _m_paddw(_m_psubw(_m_paddw(_m_paddw(v277, v277), v282), v281), stru_6FB97EC0[7]);
    v285 = _m_psubw(v280, v273);
    v286 = *(__m64 *)(a1 + 32);
    *(__m64 *)(a1 + 32) = _m_psraw(v284, 4u);
    v287 = _m_paddw(_m_paddw(v273, v273), v285);
    *(__m64 *)(a1 + 16) = _m_psraw(_m_paddw(_m_paddw(v281, v281), v284), 4u);
    v288 = _m_paddw(_m_psubw(v285, v286), stru_6FB97EC0[7]);
    v289 = _m_paddw(_m_psubw(v282, v278), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 64) = _m_psraw(v288, 4u);
    *(__m64 *)(a1 + 48) = _m_psraw(_m_paddw(_m_paddw(v286, v286), v288), 4u);
    v290 = _m_paddw(_m_psubw(v287, v283), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 96) = _m_psraw(v289, 4u);
    *(__m64 *)(a1 + 80) = _m_psraw(_m_paddw(_m_paddw(v278, v278), v289), 4u);
    *(__m64 *)(a1 + 112) = _m_psraw(v290, 4u);
    *(__m64 *)a1 = _m_psraw(_m_paddw(_m_paddw(v283, v283), v290), 4u);
    v291 = *(__m64 *)(a1 + 56);
    v292 = *(__m64 *)(a1 + 24);
    v293 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 56), stru_6FB97EC0[2]), v291);
    v294 = *(__m64 *)(a1 + 40);
    v295 = _m_psubw(0i64, _m_paddw(v291, _m_pmulhw(stru_6FB97EC0[4], v291)));
    v296 = _m_psubw(_m_paddw(_m_pmulhw(stru_6FB97EC0[0], v292), v292), v293);
    v297 = _m_paddw(*(__m64 *)(a1 + 40), _m_pmulhw(v294, stru_6FB97EC0[1]));
    v298 = _m_pmulhw(v294, stru_6FB97EC0[5]);
    v299 = _m_psubw(_m_pmulhw(v292, stru_6FB97EC0[6]), v295);
    *(__m64 *)(a1 + 24) = _m_paddw(_m_paddw(v293, v293), v296);
    v300 = stru_6FB97EC0[3].m64_u64;
    *(__m64 *)(a1 + 40) = _m_paddw(_m_paddw(v295, v295), v299);
    v301 = _m_paddw(v296, _m_pmulhw(v296, (__m64)v300));
    v302 = _m_psubw(_m_paddw(v299, _m_pmulhw(v299, (__m64)v300)), v298);
    v303 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 8), (__m64)v300), *(__m64 *)(a1 + 8));
    v304 = v303;
    v305 = _m_paddw(_m_paddw(v298, v298), v302);
    v306 = _m_psubw(v303, v301);
    v307 = *(__m64 *)(a1 + 24);
    v308 = _m_paddw(_m_psubw(_m_paddw(_m_paddw(v301, v301), v306), v305), stru_6FB97EC0[7]);
    v309 = _m_psubw(v304, v297);
    v310 = *(__m64 *)(a1 + 40);
    *(__m64 *)(a1 + 40) = _m_psraw(v308, 4u);
    v311 = _m_paddw(_m_paddw(v297, v297), v309);
    *(__m64 *)(a1 + 24) = _m_psraw(_m_paddw(_m_paddw(v305, v305), v308), 4u);
    v312 = _m_paddw(_m_psubw(v309, v310), stru_6FB97EC0[7]);
    v313 = _m_paddw(_m_psubw(v306, v302), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 72) = _m_psraw(v312, 4u);
    *(__m64 *)(a1 + 56) = _m_psraw(_m_paddw(_m_paddw(v310, v310), v312), 4u);
    v314 = _m_paddw(_m_psubw(v311, v307), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 104) = _m_psraw(v313, 4u);
    *(__m64 *)(a1 + 88) = _m_psraw(_m_paddw(_m_paddw(v302, v302), v313), 4u);
    *(__m64 *)(a1 + 120) = _m_psraw(v314, 4u);
    *(__m64 *)(a1 + 8) = _m_psraw(_m_paddw(_m_paddw(v307, v307), v314), 4u);
  }
  else
  {
    v3 = *(__m64 *)(a1 + 48);
    v4 = stru_6FB97EC0[2].m64_u64;
    v5 = *(__m64 *)(a1 + 24);
    v6 = stru_6FB97EC0[4].m64_u64;
    v7 = *(__m64 *)(a1 + 16);
    v8 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 48), (__m64)v4), v3);
    v9 = _m_paddw(_m_pmulhw((__m64)v4, v5), v5);
    v10 = *(__m64 *)(a1 + 56);
    v11 = _m_paddw(v8, _m_paddw(v5, _m_pmulhw((__m64)v6, v5)));
    v12 = stru_6FB97EC0[6].m64_u64;
    v13 = _m_psubw(v9, _m_paddw(v3, _m_pmulhw((__m64)v6, v3)));
    v14 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v7), v7);
    v15 = _m_pmulhw(v7, (__m64)v12);
    v16 = *(__m64 *)(a1 + 32);
    v17 = _m_pmulhw((__m64)v12, v10);
    v18 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v10), v10);
    v19 = v16;
    v20 = _m_psubw(v15, v18);
    v21 = *(__m64 *)(a1 + 40);
    v22 = _m_paddw(v14, v17);
    v23 = v21;
    v24 = _m_psubw(v22, v11);
    v25 = _m_paddw(_m_pmulhw(v16, stru_6FB97EC0[1]), v16);
    v26 = _m_pmulhw(v19, stru_6FB97EC0[5]);
    v27 = _m_psubw(v20, v13);
    v28 = _m_paddw(_m_pmulhw(v21, stru_6FB97EC0[1]), v21);
    v29 = _m_pmulhw(v23, stru_6FB97EC0[5]);
    *(__m64 *)(a1 + 16) = _m_paddw(_m_paddw(v11, v11), v24);
    v30 = _m_psubw(v26, v28);
    v31 = stru_6FB97EC0[3].m64_u64;
    v32 = _m_paddw(v29, v25);
    *(__m64 *)(a1 + 32) = _m_paddw(_m_paddw(v13, v13), v27);
    v33 = _m_paddw(v27, _m_pmulhw(v27, (__m64)v31));
    v34 = *(__m64 *)(a1 + 8);
    v35 = _m_psubw(v33, v30);
    v36 = _m_paddw(v24, _m_pmulhw(v24, (__m64)v31));
    v37 = _m_psubw(*(__m64 *)a1, v34);
    v38 = _m_paddw(_m_paddw(v34, v34), v37);
    v39 = _m_paddw(_m_paddw(v30, v30), v35);
    v40 = _m_psubw(_m_paddw(_m_pmulhw(v37, (__m64)v31), v37), v36);
    v41 = *(__m64 *)(a1 + 16);
    v42 = _m_paddw(_m_pmulhw((__m64)v31, v38), v38);
    v43 = _m_psubw(_m_paddw(_m_paddw(v36, v36), v40), v39);
    v44 = *(__m64 *)(a1 + 32);
    v45 = _m_psubw(v42, v32);
    v46 = _m_paddw(_m_paddw(v32, v32), v45);
    v47 = _m_psubw(v45, v44);
    v48 = _m_psubw(v40, v35);
    v49 = _m_paddw(_m_paddw(v44, v44), v47);
    v50 = _m_paddw(_m_paddw(v35, v35), v48);
    v51 = _m_psubw(v46, v41);
    *(__m64 *)(a1 + 16) = _m_paddw(_m_paddw(v39, v39), v43);
    v52 = v47;
    v53 = _m_punpcklwd(v47, v50);
    *(__m64 *)a1 = _m_paddw(_m_paddw(v41, v41), v51);
    v54 = _m_punpckhwd(v52, v50);
    v55 = v48;
    v56 = _m_punpcklwd(v48, v51);
    *(__m64 *)(a1 + 8) = _m_punpckldq(v53, v56);
    v57 = _m_punpckhwd(v55, v51);
    *(__m64 *)(a1 + 24) = _m_punpckhdq(v53, v56);
    v58 = _m_punpckhdq(v54, v57);
    v59 = *(__m64 *)a1;
    v60 = _m_punpckldq(v54, v57);
    v61 = *(__m64 *)(a1 + 16);
    v62 = *(__m64 *)a1;
    *(__m64 *)(a1 + 56) = v58;
    v63 = _m_punpcklwd(v62, v61);
    *(__m64 *)(a1 + 40) = v60;
    v64 = _m_punpckhwd(v59, v61);
    v65 = v43;
    v66 = _m_punpcklwd(v43, v49);
    *(__m64 *)a1 = _m_punpckldq(v63, v66);
    v67 = _m_punpckhwd(v65, v49);
    *(__m64 *)(a1 + 16) = _m_punpckhdq(v63, v66);
    *(__m64 *)(a1 + 48) = _m_punpckhdq(v64, v67);
    *(__m64 *)(a1 + 32) = _m_punpckldq(v64, v67);
    v68 = *(__m64 *)(a1 + 112);
    v69 = stru_6FB97EC0[2].m64_u64;
    v70 = *(__m64 *)(a1 + 88);
    v71 = stru_6FB97EC0[4].m64_u64;
    v72 = *(__m64 *)(a1 + 80);
    v73 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 112), (__m64)v69), v68);
    v74 = _m_paddw(_m_pmulhw((__m64)v69, v70), v70);
    v75 = *(__m64 *)(a1 + 120);
    v76 = _m_paddw(v73, _m_paddw(v70, _m_pmulhw((__m64)v71, v70)));
    v77 = stru_6FB97EC0[6].m64_u64;
    v78 = _m_psubw(v74, _m_paddw(v68, _m_pmulhw((__m64)v71, v68)));
    v79 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v72), v72);
    v80 = _m_pmulhw(v72, (__m64)v77);
    v81 = *(__m64 *)(a1 + 96);
    v82 = _m_pmulhw((__m64)v77, v75);
    v83 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v75), v75);
    v84 = v81;
    v85 = _m_psubw(v80, v83);
    v86 = *(__m64 *)(a1 + 104);
    v87 = _m_paddw(v79, v82);
    v88 = v86;
    v89 = _m_psubw(v87, v76);
    v90 = _m_paddw(_m_pmulhw(v81, stru_6FB97EC0[1]), v81);
    v91 = _m_pmulhw(v84, stru_6FB97EC0[5]);
    v92 = _m_psubw(v85, v78);
    v93 = _m_paddw(_m_pmulhw(v86, stru_6FB97EC0[1]), v86);
    v94 = _m_pmulhw(v88, stru_6FB97EC0[5]);
    *(__m64 *)(a1 + 80) = _m_paddw(_m_paddw(v76, v76), v89);
    v95 = _m_psubw(v91, v93);
    v96 = stru_6FB97EC0[3].m64_u64;
    v97 = _m_paddw(v94, v90);
    *(__m64 *)(a1 + 96) = _m_paddw(_m_paddw(v78, v78), v92);
    v98 = _m_paddw(v92, _m_pmulhw(v92, (__m64)v96));
    v99 = *(__m64 *)(a1 + 72);
    v100 = _m_psubw(v98, v95);
    v101 = _m_paddw(v89, _m_pmulhw(v89, (__m64)v96));
    v102 = _m_psubw(*(__m64 *)(a1 + 64), v99);
    v103 = _m_paddw(_m_paddw(v99, v99), v102);
    v104 = _m_paddw(_m_paddw(v95, v95), v100);
    v105 = _m_psubw(_m_paddw(_m_pmulhw(v102, (__m64)v96), v102), v101);
    v106 = *(__m64 *)(a1 + 80);
    v107 = _m_paddw(_m_pmulhw((__m64)v96, v103), v103);
    v108 = _m_psubw(_m_paddw(_m_paddw(v101, v101), v105), v104);
    v109 = *(__m64 *)(a1 + 96);
    v110 = _m_psubw(v107, v97);
    v111 = _m_paddw(_m_paddw(v97, v97), v110);
    v112 = _m_psubw(v110, v109);
    v113 = _m_psubw(v105, v100);
    v114 = _m_paddw(_m_paddw(v109, v109), v112);
    v115 = _m_paddw(_m_paddw(v100, v100), v113);
    v116 = _m_psubw(v111, v106);
    *(__m64 *)(a1 + 80) = _m_paddw(_m_paddw(v104, v104), v108);
    v117 = v112;
    v118 = _m_punpcklwd(v112, v115);
    *(__m64 *)(a1 + 64) = _m_paddw(_m_paddw(v106, v106), v116);
    v119 = _m_punpckhwd(v117, v115);
    v120 = v113;
    v121 = _m_punpcklwd(v113, v116);
    *(__m64 *)(a1 + 72) = _m_punpckldq(v118, v121);
    v122 = _m_punpckhwd(v120, v116);
    *(__m64 *)(a1 + 88) = _m_punpckhdq(v118, v121);
    v123 = _m_punpckhdq(v119, v122);
    v124 = *(__m64 *)(a1 + 64);
    v125 = _m_punpckldq(v119, v122);
    v126 = *(__m64 *)(a1 + 80);
    v127 = *(__m64 *)(a1 + 64);
    *(__m64 *)(a1 + 120) = v123;
    v128 = _m_punpcklwd(v127, v126);
    *(__m64 *)(a1 + 104) = v125;
    v129 = _m_punpckhwd(v124, v126);
    v130 = v108;
    v131 = _m_punpcklwd(v108, v114);
    *(__m64 *)(a1 + 64) = _m_punpckldq(v128, v131);
    v132 = _m_punpckhwd(v130, v114);
    *(__m64 *)(a1 + 80) = _m_punpckhdq(v128, v131);
    *(__m64 *)(a1 + 112) = _m_punpckhdq(v129, v132);
    *(__m64 *)(a1 + 96) = _m_punpckldq(v129, v132);
    v133 = *(__m64 *)(a1 + 48);
    v134 = stru_6FB97EC0[2].m64_u64;
    v135 = *(__m64 *)(a1 + 80);
    v136 = stru_6FB97EC0[4].m64_u64;
    v137 = *(__m64 *)(a1 + 16);
    v138 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 48), (__m64)v134), v133);
    v139 = _m_paddw(_m_pmulhw((__m64)v134, v135), v135);
    v140 = *(__m64 *)(a1 + 112);
    v141 = _m_paddw(v138, _m_paddw(v135, _m_pmulhw((__m64)v136, v135)));
    v142 = stru_6FB97EC0[6].m64_u64;
    v143 = _m_psubw(v139, _m_paddw(v133, _m_pmulhw((__m64)v136, v133)));
    v144 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v137), v137);
    v145 = _m_pmulhw(v137, (__m64)v142);
    v146 = *(__m64 *)(a1 + 32);
    v147 = _m_pmulhw((__m64)v142, v140);
    v148 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v140), v140);
    v149 = v146;
    v150 = _m_psubw(v145, v148);
    v151 = *(__m64 *)(a1 + 96);
    v152 = _m_paddw(v144, v147);
    v153 = v151;
    v154 = _m_psubw(v152, v141);
    v155 = _m_paddw(_m_pmulhw(v146, stru_6FB97EC0[1]), v146);
    v156 = _m_pmulhw(v149, stru_6FB97EC0[5]);
    v157 = _m_psubw(v150, v143);
    v158 = _m_paddw(_m_pmulhw(v151, stru_6FB97EC0[1]), v151);
    v159 = _m_pmulhw(v153, stru_6FB97EC0[5]);
    *(__m64 *)(a1 + 16) = _m_paddw(_m_paddw(v141, v141), v154);
    v160 = _m_psubw(v156, v158);
    v161 = stru_6FB97EC0[3].m64_u64;
    v162 = _m_paddw(v159, v155);
    *(__m64 *)(a1 + 32) = _m_paddw(_m_paddw(v143, v143), v157);
    v163 = _m_paddw(v157, _m_pmulhw(v157, (__m64)v161));
    v164 = *(__m64 *)(a1 + 64);
    v165 = _m_psubw(v163, v160);
    v166 = _m_paddw(v154, _m_pmulhw(v154, (__m64)v161));
    v167 = _m_psubw(*(__m64 *)a1, v164);
    v168 = _m_paddw(_m_paddw(v164, v164), v167);
    v169 = _m_paddw(_m_paddw(v160, v160), v165);
    v170 = _m_psubw(_m_paddw(_m_pmulhw(v167, (__m64)v161), v167), v166);
    v171 = *(__m64 *)(a1 + 16);
    v172 = _m_paddw(_m_psubw(_m_paddw(_m_paddw(v166, v166), v170), v169), stru_6FB97EC0[7]);
    v173 = _m_psubw(_m_paddw(_m_pmulhw((__m64)v161, v168), v168), v162);
    v174 = *(__m64 *)(a1 + 32);
    *(__m64 *)(a1 + 32) = _m_psraw(v172, 4u);
    v175 = _m_paddw(_m_paddw(v162, v162), v173);
    *(__m64 *)(a1 + 16) = _m_psraw(_m_paddw(_m_paddw(v169, v169), v172), 4u);
    v176 = _m_paddw(_m_psubw(v173, v174), stru_6FB97EC0[7]);
    v177 = _m_paddw(_m_psubw(v170, v165), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 64) = _m_psraw(v176, 4u);
    *(__m64 *)(a1 + 48) = _m_psraw(_m_paddw(_m_paddw(v174, v174), v176), 4u);
    v178 = _m_paddw(_m_psubw(v175, v171), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 96) = _m_psraw(v177, 4u);
    *(__m64 *)(a1 + 80) = _m_psraw(_m_paddw(_m_paddw(v165, v165), v177), 4u);
    *(__m64 *)(a1 + 112) = _m_psraw(v178, 4u);
    *(__m64 *)a1 = _m_psraw(_m_paddw(_m_paddw(v171, v171), v178), 4u);
    v179 = *(__m64 *)(a1 + 56);
    v180 = stru_6FB97EC0[2].m64_u64;
    v181 = *(__m64 *)(a1 + 88);
    v182 = stru_6FB97EC0[4].m64_u64;
    v183 = *(__m64 *)(a1 + 24);
    v184 = _m_paddw(_m_pmulhw(*(__m64 *)(a1 + 56), (__m64)v180), v179);
    v185 = _m_paddw(_m_pmulhw((__m64)v180, v181), v181);
    v186 = *(__m64 *)(a1 + 120);
    v187 = _m_paddw(v184, _m_paddw(v181, _m_pmulhw((__m64)v182, v181)));
    v188 = stru_6FB97EC0[6].m64_u64;
    v189 = _m_psubw(v185, _m_paddw(v179, _m_pmulhw((__m64)v182, v179)));
    v190 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v183), v183);
    v191 = _m_pmulhw(v183, (__m64)v188);
    v192 = *(__m64 *)(a1 + 40);
    v193 = _m_pmulhw((__m64)v188, v186);
    v194 = _m_paddw(_m_pmulhw(stru_6FB97EC0[0], v186), v186);
    v195 = v192;
    v196 = _m_psubw(v191, v194);
    v197 = *(__m64 *)(a1 + 104);
    v198 = _m_paddw(v190, v193);
    v199 = v197;
    v200 = _m_psubw(v198, v187);
    v201 = _m_paddw(_m_pmulhw(v192, stru_6FB97EC0[1]), v192);
    v202 = _m_pmulhw(v195, stru_6FB97EC0[5]);
    v203 = _m_psubw(v196, v189);
    v204 = _m_paddw(_m_pmulhw(v197, stru_6FB97EC0[1]), v197);
    v205 = _m_pmulhw(v199, stru_6FB97EC0[5]);
    *(__m64 *)(a1 + 24) = _m_paddw(_m_paddw(v187, v187), v200);
    v206 = _m_psubw(v202, v204);
    v207 = stru_6FB97EC0[3].m64_u64;
    v208 = _m_paddw(v205, v201);
    *(__m64 *)(a1 + 40) = _m_paddw(_m_paddw(v189, v189), v203);
    v209 = _m_paddw(v203, _m_pmulhw(v203, (__m64)v207));
    v210 = *(__m64 *)(a1 + 72);
    v211 = _m_psubw(v209, v206);
    v212 = _m_paddw(v200, _m_pmulhw(v200, (__m64)v207));
    v213 = _m_psubw(*(__m64 *)(a1 + 8), v210);
    v214 = _m_paddw(_m_paddw(v210, v210), v213);
    v215 = _m_paddw(_m_paddw(v206, v206), v211);
    v216 = _m_psubw(_m_paddw(_m_pmulhw(v213, (__m64)v207), v213), v212);
    v217 = *(__m64 *)(a1 + 24);
    v218 = _m_paddw(_m_psubw(_m_paddw(_m_paddw(v212, v212), v216), v215), stru_6FB97EC0[7]);
    v219 = _m_psubw(_m_paddw(_m_pmulhw((__m64)v207, v214), v214), v208);
    v220 = *(__m64 *)(a1 + 40);
    *(__m64 *)(a1 + 40) = _m_psraw(v218, 4u);
    v221 = _m_paddw(_m_paddw(v208, v208), v219);
    *(__m64 *)(a1 + 24) = _m_psraw(_m_paddw(_m_paddw(v215, v215), v218), 4u);
    v222 = _m_paddw(_m_psubw(v219, v220), stru_6FB97EC0[7]);
    v223 = _m_paddw(_m_psubw(v216, v211), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 72) = _m_psraw(v222, 4u);
    *(__m64 *)(a1 + 56) = _m_psraw(_m_paddw(_m_paddw(v220, v220), v222), 4u);
    v224 = _m_paddw(_m_psubw(v221, v217), stru_6FB97EC0[7]);
    *(__m64 *)(a1 + 104) = _m_psraw(v223, 4u);
    *(__m64 *)(a1 + 88) = _m_psraw(_m_paddw(_m_paddw(v211, v211), v223), 4u);
    *(__m64 *)(a1 + 120) = _m_psraw(v224, 4u);
    *(__m64 *)(a1 + 8) = _m_psraw(_m_paddw(_m_paddw(v217, v217), v224), 4u);
  }
  return result;
}
