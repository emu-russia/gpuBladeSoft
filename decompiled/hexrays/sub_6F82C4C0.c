int __usercall sub_6F82C4C0@<eax>(__m64 a1@<mm4>, int a2, int a3)
{
  int result; // eax@1
  __m64 v4; // mm6@1
  __m64 v5; // mm1@1
  __m64 v6; // mm7@1
  __m64 v7; // mm0@1
  __m64 v8; // mm6@1
  __m64 v9; // mm5@1
  __m64 v10; // mm1@1
  __m64 v11; // mm4@1
  __m64 v12; // mm2@1
  __m64 v13; // mm3@1
  __m64 v14; // mm5@1
  __m64 v15; // mm4@1
  __m64 v16; // mm7@1
  __m64 v17; // mm6@1
  __m64 v18; // mm1@1
  __m64 v19; // mm2@1
  __m64 v20; // mm7@1
  __m64 v21; // mm6@1
  __m64 v22; // mm7@1
  __m64 v23; // mm6@1
  __m64 v24; // mm0@1
  __m64 v25; // mm2@1
  __m64 v26; // mm4@1
  __m64 v27; // mm0@1
  __m64 v28; // mm4@1
  __m64 v29; // mm1@1
  __m64 v30; // mm3@1
  __m64 v31; // mm5@1
  __m64 v32; // mm3@1
  __m64 v33; // mm1@1
  __m64 v34; // mm4@1
  __m64 v35; // mm5@1
  __m64 v36; // mm2@1
  __m64 v37; // mm5@1
  __m64 v38; // mm4@1
  __m64 v39; // mm7@1
  __m64 v40; // mm7@1
  __m64 v41; // mm0@1
  __m64 v42; // mm4@1
  __m64 v43; // mm5@1
  __m64 v44; // mm6@1
  __m64 v45; // mm6@1
  __m64 v46; // mm1@1
  __m64 v47; // mm4@1
  __m64 v48; // mm2@1
  __m64 v49; // mm0@1
  __m64 v50; // mm7@1
  __m64 v51; // mm7@1
  __m64 v52; // mm4@1
  __m64 v53; // mm5@1
  __m64 v54; // mm7@1
  __m64 v55; // mm7@1
  __m64 v56; // mm4@1
  __m64 v57; // mm5@1
  __m64 v58; // mm1@1
  __m64 v59; // mm3@1
  __m64 v60; // mm6@1
  __m64 v61; // mm1@1
  __m64 v62; // mm3@1
  __m64 v63; // mm5@1
  __m64 v64; // mm3@1
  __m64 v65; // mm4@1
  __m64 v66; // mm6@1
  __m64 v67; // mm1@1
  __m64 v68; // mm4@1
  __m64 v69; // mm7@1
  __m64 v70; // mm7@1
  __m64 v71; // mm4@1
  __m64 v72; // mm1@1
  __m64 v73; // mm2@1
  __m64 v74; // mm4@1
  __m64 v75; // mm5@1
  __m64 v76; // mm6@1
  __m64 v77; // mm6@1
  __m64 v78; // mm4@1
  __m64 v79; // mm7@1
  __m64 v80; // mm7@1
  __m64 v81; // mm5@1
  __m64 v82; // mm2@1
  __m64 v83; // mm4@1
  __m64 v84; // mm5@1
  __m64 v85; // mm7@1
  __m64 v86; // mm1@1
  __m64 v87; // mm7@1
  __m64 v88; // mm4@1
  __m64 v89; // mm5@1
  __m64 v90; // mm3@1
  __m64 v91; // mm6@1
  __m64 v92; // mm1@1
  __m64 v93; // mm3@1
  __m64 v94; // mm5@1
  __m64 v95; // mm3@1
  __m64 v96; // mm4@1
  __m64 v97; // mm6@1
  __m64 v98; // mm4@1
  __m64 v99; // mm1@1
  __m64 v100; // mm7@1
  __m64 v101; // mm7@1
  __m64 v102; // mm2@1
  __m64 v103; // mm4@1
  __m64 v104; // mm5@1
  __m64 v105; // mm6@1
  __m64 v106; // mm6@1
  __m64 v107; // mm4@1
  __m64 v108; // mm7@1
  __m64 v109; // mm7@1
  __m64 v110; // mm5@1
  __m64 v111; // mm2@1
  __m64 v112; // mm4@1
  __m64 v113; // mm5@1
  __m64 v114; // mm7@1
  __m64 v115; // mm1@1
  __m64 v116; // mm7@1
  __m64 v117; // mm4@1
  __m64 v118; // mm5@1
  __m64 v119; // mm3@1
  __m64 v120; // mm6@1
  __m64 v121; // mm1@1
  __m64 v122; // mm4@1
  __m64 v123; // mm1@1
  __m64 v124; // mm4@1
  __m64 v125; // mm6@1
  __m64 v126; // mm4@1
  __m64 v127; // mm7@1
  __m64 v128; // mm5@1
  __m64 v129; // mm7@1
  __m64 v130; // mm2@1
  __m64 v131; // mm4@1
  __m64 v132; // mm3@1
  __m64 v133; // mm2@1
  __m64 v134; // mm0@1
  __m64 v135; // mm5@1
  __m64 v136; // mm1@1
  __m64 v137; // mm3@1
  __m64 v138; // mm4@1
  __m64 v139; // mm3@1
  __m64 v140; // mm2@1
  __m64 v141; // mm0@1
  __m64 v142; // mm2@1
  __m64 v143; // mm5@1
  __m64 v144; // mm3@1
  __m64 v145; // mm5@1
  __m64 v146; // mm1@1
  __m64 v147; // mm0@1
  __m64 v148; // mm3@1
  __m64 v149; // mm2@1
  __m64 v150; // mm3@1
  __m64 v151; // mm5@1
  __m64 v152; // mm7@1
  __m64 v153; // mm4@1
  __m64 v154; // mm7@1
  __m64 v155; // mm0@1
  __m64 v156; // mm6@1
  __m64 v157; // mm0@1
  __m64 v158; // mm5@1
  __m64 v159; // mm4@1
  __m64 v160; // mm5@1
  __m64 v161; // mm6@1
  __m64 v162; // mm7@1
  __m64 v163; // mm6@1
  __m64 v164; // mm0@1
  __m64 v165; // mm7@1
  __m64 v166; // mm1@1
  __m64 v167; // mm6@1
  __m64 v168; // mm2@1
  __m64 v169; // mm5@1
  __m64 v170; // mm3@1
  __m64 v171; // mm7@1
  __m64 v172; // mm0@1
  __m64 v173; // mm6@1
  __m64 v174; // mm1@1
  __m64 v175; // mm5@1
  __m64 v176; // mm2@1
  __m64 v177; // mm4@1
  __m64 v178; // mm3@1
  __m64 v179; // mm5@1
  __m64 v180; // mm4@1
  __m64 v181; // mm7@1
  __m64 v182; // mm6@1
  __m64 v183; // mm1@1
  __m64 v184; // mm2@1
  __m64 v185; // mm7@1
  __m64 v186; // mm6@1
  __m64 v187; // mm7@1
  __m64 v188; // mm6@1
  __m64 v189; // mm0@1
  __m64 v190; // mm2@1
  __m64 v191; // mm4@1
  __m64 v192; // mm0@1
  __m64 v193; // mm4@1
  __m64 v194; // mm1@1
  __m64 v195; // mm3@1
  __m64 v196; // mm5@1
  __m64 v197; // mm3@1
  __m64 v198; // mm1@1
  __m64 v199; // mm4@1
  __m64 v200; // mm5@1
  __m64 v201; // mm2@1
  __m64 v202; // mm5@1
  __m64 v203; // mm4@1
  __m64 v204; // mm7@1
  __m64 v205; // mm7@1
  __m64 v206; // mm0@1
  __m64 v207; // mm4@1
  __m64 v208; // mm5@1
  __m64 v209; // mm6@1
  __m64 v210; // mm6@1
  __m64 v211; // mm1@1
  __m64 v212; // mm4@1
  __m64 v213; // mm2@1
  __m64 v214; // mm0@1
  __m64 v215; // mm7@1
  __m64 v216; // mm7@1
  __m64 v217; // mm4@1
  __m64 v218; // mm5@1
  __m64 v219; // mm7@1
  __m64 v220; // mm7@1
  __m64 v221; // mm4@1
  __m64 v222; // mm5@1
  __m64 v223; // mm1@1
  __m64 v224; // mm3@1
  __m64 v225; // mm6@1
  __m64 v226; // mm1@1
  __m64 v227; // mm3@1
  __m64 v228; // mm5@1
  __m64 v229; // mm3@1
  __m64 v230; // mm4@1
  __m64 v231; // mm6@1
  __m64 v232; // mm1@1
  __m64 v233; // mm4@1
  __m64 v234; // mm7@1
  __m64 v235; // mm7@1
  __m64 v236; // mm4@1
  __m64 v237; // mm1@1
  __m64 v238; // mm2@1
  __m64 v239; // mm4@1
  __m64 v240; // mm5@1
  __m64 v241; // mm6@1
  __m64 v242; // mm6@1
  __m64 v243; // mm4@1
  __m64 v244; // mm7@1
  __m64 v245; // mm7@1
  __m64 v246; // mm5@1
  __m64 v247; // mm2@1
  __m64 v248; // mm4@1
  __m64 v249; // mm5@1
  __m64 v250; // mm7@1
  __m64 v251; // mm1@1
  __m64 v252; // mm7@1
  __m64 v253; // mm4@1
  __m64 v254; // mm5@1
  __m64 v255; // mm3@1
  __m64 v256; // mm6@1
  __m64 v257; // mm1@1
  __m64 v258; // mm3@1
  __m64 v259; // mm5@1
  __m64 v260; // mm3@1
  __m64 v261; // mm4@1
  __m64 v262; // mm6@1
  __m64 v263; // mm4@1
  __m64 v264; // mm1@1
  __m64 v265; // mm7@1
  __m64 v266; // mm7@1
  __m64 v267; // mm2@1
  __m64 v268; // mm4@1
  __m64 v269; // mm5@1
  __m64 v270; // mm6@1
  __m64 v271; // mm6@1
  __m64 v272; // mm4@1
  __m64 v273; // mm7@1
  __m64 v274; // mm7@1
  __m64 v275; // mm5@1
  __m64 v276; // mm2@1
  __m64 v277; // mm4@1
  __m64 v278; // mm5@1
  __m64 v279; // mm7@1
  __m64 v280; // mm1@1
  __m64 v281; // mm7@1
  __m64 v282; // mm4@1
  __m64 v283; // mm5@1
  __m64 v284; // mm3@1
  __m64 v285; // mm6@1
  __m64 v286; // mm1@1
  __m64 v287; // mm4@1
  __m64 v288; // mm1@1
  __m64 v289; // mm4@1
  __m64 v290; // mm6@1
  __m64 v291; // mm4@1
  __m64 v292; // mm7@1
  __m64 v293; // mm5@1
  __m64 v294; // mm7@1
  __m64 v295; // mm2@1
  __m64 v296; // mm4@1
  __m64 v297; // mm3@1
  __m64 v298; // mm2@1
  __m64 v299; // mm0@1
  __m64 v300; // mm5@1
  __m64 v301; // mm1@1
  __m64 v302; // mm3@1
  __m64 v303; // mm4@1
  __m64 v304; // mm3@1
  __m64 v305; // mm2@1
  __m64 v306; // mm0@1
  __m64 v307; // mm2@1
  __m64 v308; // mm5@1
  __m64 v309; // mm3@1
  __m64 v310; // mm5@1
  __m64 v311; // mm1@1
  __m64 v312; // mm0@1
  __m64 v313; // mm3@1
  __m64 v314; // mm2@1
  __m64 v315; // mm3@1
  __m64 v316; // mm5@1
  __m64 v317; // mm7@1
  __m64 v318; // mm4@1
  __m64 v319; // mm7@1
  __m64 v320; // mm0@1
  __m64 v321; // mm6@1
  __m64 v322; // mm0@1
  __m64 v323; // mm5@1
  __m64 v324; // mm4@1
  __m64 v325; // mm5@1
  __m64 v326; // mm6@1
  __m64 v327; // mm7@1
  __m64 v328; // mm6@1
  __m64 v329; // mm0@1
  __m64 v330; // mm1@1
  __m64 v331; // mm2@1
  __m64 v332; // mm0@1
  __m64 v333; // mm1@1
  __m64 v334; // mm2@1
  __m64 v335; // mm3@1
  __m64 v336; // mm5@1
  __m64 v337; // mm4@1
  __m64 v338; // mm7@1
  __m64 v339; // mm6@1
  __m64 v340; // mm1@1
  __m64 v341; // mm2@1
  __m64 v342; // mm7@1
  __m64 v343; // mm6@1
  __m64 v344; // mm7@1
  __m64 v345; // mm6@1
  __m64 v346; // mm0@1
  __m64 v347; // mm2@1
  __m64 v348; // mm4@1
  __m64 v349; // mm0@1
  __m64 v350; // mm4@1
  __m64 v351; // mm1@1
  __m64 v352; // mm3@1
  __m64 v353; // mm5@1
  __m64 v354; // mm3@1
  __m64 v355; // mm1@1
  __m64 v356; // mm4@1
  __m64 v357; // mm5@1
  __m64 v358; // mm2@1
  __m64 v359; // mm5@1
  __m64 v360; // mm4@1
  __m64 v361; // mm7@1
  __m64 v362; // mm7@1
  __m64 v363; // mm0@1
  __m64 v364; // mm4@1
  __m64 v365; // mm5@1
  __m64 v366; // mm6@1
  __m64 v367; // mm6@1
  __m64 v368; // mm1@1
  __m64 v369; // mm4@1
  __m64 v370; // mm2@1
  __m64 v371; // mm0@1
  __m64 v372; // mm7@1
  __m64 v373; // mm7@1
  __m64 v374; // mm4@1
  __m64 v375; // mm5@1
  __m64 v376; // mm7@1
  __m64 v377; // mm7@1
  __m64 v378; // mm4@1
  __m64 v379; // mm5@1
  __m64 v380; // mm1@1
  __m64 v381; // mm3@1
  __m64 v382; // mm6@1
  __m64 v383; // mm1@1
  __m64 v384; // mm3@1
  __m64 v385; // mm5@1
  __m64 v386; // mm3@1
  __m64 v387; // mm4@1
  __m64 v388; // mm6@1
  __m64 v389; // mm1@1
  __m64 v390; // mm4@1
  __m64 v391; // mm7@1
  __m64 v392; // mm7@1
  __m64 v393; // mm4@1
  __m64 v394; // mm1@1
  __m64 v395; // mm2@1
  __m64 v396; // mm4@1
  __m64 v397; // mm5@1
  __m64 v398; // mm6@1
  __m64 v399; // mm6@1
  __m64 v400; // mm4@1
  __m64 v401; // mm7@1
  __m64 v402; // mm7@1
  __m64 v403; // mm5@1
  __m64 v404; // mm2@1
  __m64 v405; // mm4@1
  __m64 v406; // mm5@1
  __m64 v407; // mm7@1
  __m64 v408; // mm1@1
  __m64 v409; // mm7@1
  __m64 v410; // mm4@1
  __m64 v411; // mm5@1
  __m64 v412; // mm3@1
  __m64 v413; // mm6@1
  __m64 v414; // mm1@1
  __m64 v415; // mm3@1
  __m64 v416; // mm5@1
  __m64 v417; // mm3@1
  __m64 v418; // mm4@1
  __m64 v419; // mm6@1
  __m64 v420; // mm4@1
  __m64 v421; // mm1@1
  __m64 v422; // mm7@1
  __m64 v423; // mm7@1
  __m64 v424; // mm2@1
  __m64 v425; // mm4@1
  __m64 v426; // mm5@1
  __m64 v427; // mm6@1
  __m64 v428; // mm6@1
  __m64 v429; // mm4@1
  __m64 v430; // mm7@1
  __m64 v431; // mm7@1
  __m64 v432; // mm5@1
  __m64 v433; // mm2@1
  __m64 v434; // mm4@1
  __m64 v435; // mm5@1
  __m64 v436; // mm7@1
  __m64 v437; // mm1@1
  __m64 v438; // mm7@1
  __m64 v439; // mm4@1
  __m64 v440; // mm5@1
  __m64 v441; // mm3@1
  __m64 v442; // mm6@1
  __m64 v443; // mm1@1
  __m64 v444; // mm4@1
  __m64 v445; // mm1@1
  __m64 v446; // mm4@1
  __m64 v447; // mm6@1
  __m64 v448; // mm4@1
  __m64 v449; // mm7@1
  __m64 v450; // mm5@1
  __m64 v451; // mm7@1
  __m64 v452; // mm2@1
  __m64 v453; // mm4@1
  __m64 v454; // mm3@1
  __m64 v455; // mm2@1
  __m64 v456; // mm0@1
  __m64 v457; // mm5@1
  __m64 v458; // mm1@1
  __m64 v459; // mm3@1
  __m64 v460; // mm4@1
  __m64 v461; // mm3@1
  __m64 v462; // mm2@1
  __m64 v463; // mm0@1
  __m64 v464; // mm2@1
  __m64 v465; // mm5@1
  __m64 v466; // mm3@1
  __m64 v467; // mm5@1
  __m64 v468; // mm1@1
  __m64 v469; // mm0@1
  __m64 v470; // mm3@1
  __m64 v471; // mm2@1
  __m64 v472; // mm3@1
  __m64 v473; // mm5@1
  __m64 v474; // mm7@1
  __m64 v475; // mm4@1
  __m64 v476; // mm7@1
  __m64 v477; // mm0@1
  __m64 v478; // mm6@1
  __m64 v479; // mm0@1
  __m64 v480; // mm5@1
  __m64 v481; // mm4@1
  __m64 v482; // mm5@1
  __m64 v483; // mm6@1
  __m64 v484; // mm7@1
  __m64 v485; // mm6@1
  __m64 v486; // mm0@1
  __m64 v487; // mm0@1
  __m64 v488; // mm2@1
  __m64 v489; // mm3@1
  __m64 v490; // mm4@1
  __m64 v491; // mm5@1
  __m64 v492; // mm6@1
  __m64 v493; // mm1@1
  __m64 v494; // mm7@1
  __m64 v495; // mm0@1
  __m64 v496; // mm7@1
  __m64 v497; // mm1@1
  __m64 v498; // mm6@1
  __m64 v499; // mm2@1
  __m64 v500; // mm5@1
  __m64 v501; // mm3@1
  __m64 v502; // mm4@1
  __m64 v503; // mm0@1
  __m64 v504; // mm1@1
  __m64 v505; // mm2@1
  __m64 v506; // mm3@1
  __m64 v507; // mm5@1
  __m64 v508; // mm4@1
  __m64 v509; // mm7@1
  __m64 v510; // mm6@1
  __m64 v511; // mm1@1
  __m64 v512; // mm2@1
  __m64 v513; // mm7@1
  __m64 v514; // mm6@1
  __m64 v515; // mm7@1
  __m64 v516; // mm6@1
  __m64 v517; // mm0@1
  __m64 v518; // mm2@1
  __m64 v519; // mm4@1
  __m64 v520; // mm0@1
  __m64 v521; // mm4@1
  __m64 v522; // mm1@1
  __m64 v523; // mm3@1
  __m64 v524; // mm5@1
  __m64 v525; // mm3@1
  __m64 v526; // mm1@1
  __m64 v527; // mm4@1
  __m64 v528; // mm5@1
  __m64 v529; // mm2@1
  __m64 v530; // mm5@1
  __m64 v531; // mm4@1
  __m64 v532; // mm7@1
  __m64 v533; // mm7@1
  __m64 v534; // mm0@1
  __m64 v535; // mm4@1
  __m64 v536; // mm5@1
  __m64 v537; // mm6@1
  __m64 v538; // mm6@1
  __m64 v539; // mm1@1
  __m64 v540; // mm4@1
  __m64 v541; // mm2@1
  __m64 v542; // mm0@1
  __m64 v543; // mm7@1
  __m64 v544; // mm7@1
  __m64 v545; // mm4@1
  __m64 v546; // mm5@1
  __m64 v547; // mm7@1
  __m64 v548; // mm7@1
  __m64 v549; // mm4@1
  __m64 v550; // mm5@1
  __m64 v551; // mm1@1
  __m64 v552; // mm3@1
  __m64 v553; // mm6@1
  __m64 v554; // mm1@1
  __m64 v555; // mm3@1
  __m64 v556; // mm5@1
  __m64 v557; // mm3@1
  __m64 v558; // mm4@1
  __m64 v559; // mm6@1
  __m64 v560; // mm1@1
  __m64 v561; // mm4@1
  __m64 v562; // mm7@1
  __m64 v563; // mm7@1
  __m64 v564; // mm4@1
  __m64 v565; // mm1@1
  __m64 v566; // mm2@1
  __m64 v567; // mm4@1
  __m64 v568; // mm5@1
  __m64 v569; // mm6@1
  __m64 v570; // mm6@1
  __m64 v571; // mm4@1
  __m64 v572; // mm7@1
  __m64 v573; // mm7@1
  __m64 v574; // mm5@1
  __m64 v575; // mm2@1
  __m64 v576; // mm4@1
  __m64 v577; // mm5@1
  __m64 v578; // mm7@1
  __m64 v579; // mm1@1
  __m64 v580; // mm7@1
  __m64 v581; // mm4@1
  __m64 v582; // mm5@1
  __m64 v583; // mm3@1
  __m64 v584; // mm6@1
  __m64 v585; // mm1@1
  __m64 v586; // mm3@1
  __m64 v587; // mm5@1
  __m64 v588; // mm3@1
  __m64 v589; // mm4@1
  __m64 v590; // mm6@1
  __m64 v591; // mm4@1
  __m64 v592; // mm1@1
  __m64 v593; // mm7@1
  __m64 v594; // mm7@1
  __m64 v595; // mm2@1
  __m64 v596; // mm4@1
  __m64 v597; // mm5@1
  __m64 v598; // mm6@1
  __m64 v599; // mm6@1
  __m64 v600; // mm4@1
  __m64 v601; // mm7@1
  __m64 v602; // mm7@1
  __m64 v603; // mm5@1
  __m64 v604; // mm2@1
  __m64 v605; // mm4@1
  __m64 v606; // mm5@1
  __m64 v607; // mm7@1
  __m64 v608; // mm1@1
  __m64 v609; // mm7@1
  __m64 v610; // mm4@1
  __m64 v611; // mm5@1
  __m64 v612; // mm3@1
  __m64 v613; // mm6@1
  __m64 v614; // mm1@1
  __m64 v615; // mm4@1
  __m64 v616; // mm1@1
  __m64 v617; // mm4@1
  __m64 v618; // mm6@1
  __m64 v619; // mm4@1
  __m64 v620; // mm7@1
  __m64 v621; // mm5@1
  __m64 v622; // mm7@1
  __m64 v623; // mm2@1
  __m64 v624; // mm4@1
  __m64 v625; // mm3@1
  __m64 v626; // mm2@1
  __m64 v627; // mm0@1
  __m64 v628; // mm5@1
  __m64 v629; // mm1@1
  __m64 v630; // mm3@1
  __m64 v631; // mm4@1
  __m64 v632; // mm3@1
  __m64 v633; // mm2@1
  __m64 v634; // mm0@1
  __m64 v635; // mm2@1
  __m64 v636; // mm5@1
  __m64 v637; // mm3@1
  __m64 v638; // mm5@1
  __m64 v639; // mm1@1
  __m64 v640; // mm0@1
  __m64 v641; // mm3@1
  __m64 v642; // mm2@1
  __m64 v643; // mm3@1
  __m64 v644; // mm5@1
  __m64 v645; // mm7@1
  __m64 v646; // mm4@1
  __m64 v647; // mm7@1
  __m64 v648; // mm0@1
  __m64 v649; // mm6@1
  __m64 v650; // mm0@1
  __m64 v651; // mm5@1
  __m64 v652; // mm4@1
  __m64 v653; // mm5@1
  __m64 v654; // mm6@1
  __m64 v655; // mm7@1
  __m64 v656; // mm6@1
  __m64 v657; // mm0@1
  __m64 v658; // mm0@1
  __m64 v659; // mm1@1

  result = a2;
  v4 = _mm_cvtsi32_si64(1u);
  v5 = _m_psubw(_m_psllw(*(__m64 *)(a3 + 16), 2u), v4);
  v6 = _m_psllw(*(__m64 *)(a3 + 112), 2u);
  v7 = _m_psubw(
         _m_paddw(
           _m_paddw(
             _m_psllw(*(__m64 *)a3, 2u),
             _m_punpckhwd(
               _m_psllq(_m_pslld(_m_psubw(_m_pcmpeqw(*(__m64 *)a3, 0i64), _m_pcmpeqb(a1, a1)), 0x10u), 0x10u),
               v4)),
           _mm_cvtsi32_si64(0x10001u)),
         v6);
  v8 = _m_psllw(*(__m64 *)(a3 + 96), 2u);
  v9 = _m_psllw(*(__m64 *)(a3 + 80), 2u);
  v10 = _m_psubw(v5, v8);
  v11 = _m_psllw(*(__m64 *)(a3 + 64), 2u);
  v12 = _m_psubw(_m_psllw(*(__m64 *)(a3 + 32), 2u), v9);
  v13 = _m_psubw(_m_psllw(*(__m64 *)(a3 + 48), 2u), v11);
  v14 = _m_paddw(_m_paddw(v9, v9), v12);
  v15 = _m_paddw(_m_paddw(v11, v11), v13);
  v16 = _m_psubw(_m_paddw(_m_paddw(v6, v6), v7), v15);
  v17 = _m_psubw(_m_paddw(_m_paddw(v8, v8), v10), v14);
  *(__m64 *)(a2 + 96) = v16;
  v18 = _m_psubw(v10, v12);
  *(__m64 *)(a2 + 32) = v17;
  *(__m64 *)a2 = _m_paddw(_m_paddw(v15, v15), v16);
  v19 = _m_paddw(_m_paddw(v12, v12), v18);
  *(__m64 *)(a2 + 64) = _m_paddw(_m_paddw(v14, v14), v17);
  v20 = _mm_cvtsi32_si64(0x5A806A0Au);
  v21 = _m_psrlw(_m_pcmpeqb(v17, v17), 0xFu);
  v22 = _m_punpckldq(v20, v20);
  v23 = _m_paddw(v21, v21);
  *(__m64 *)(a2 + 48) = v19;
  *(__m64 *)(a2 + 112) = v7;
  v24 = _m_psubw(_m_pcmpeqw(0i64, v18), _m_pcmpeqb(v19, v19));
  v25 = *(__m64 *)(a2 + 48);
  v26 = _m_paddw(
          _m_packssdw(
            _m_psrad(_m_pmaddwd(_m_punpcklwd(v18, v23), v22), 0x10u),
            _m_psrad(_m_pmaddwd(_m_punpckhwd(v18, v23), v22), 0x10u)),
          _m_paddw(v18, v24));
  v27 = *(__m64 *)(a2 + 112);
  v28 = _m_psraw(v26, 1u);
  v29 = v13;
  v30 = _m_paddw(v13, v28);
  v31 = *(__m64 *)(a2 + 48);
  *(__m64 *)(a2 + 80) = _m_psubw(v29, v28);
  *(__m64 *)(a2 + 16) = v30;
  v32 = _m_pcmpeqb(v30, v30);
  v33 = *(__m64 *)(a2 + 64);
  v34 = _m_psraw(
          _m_paddw(
            _m_packssdw(
              _m_psrad(_m_pmaddwd(_m_punpcklwd(v25, v23), v22), 0x10u),
              _m_psrad(_m_pmaddwd(_m_punpckhwd(v31, v23), v22), 0x10u)),
            _m_paddw(v25, _m_psubw(_m_pcmpeqw(0i64, v25), v32))),
          1u);
  v35 = *(__m64 *)(a2 + 64);
  *(__m64 *)(a2 + 48) = _m_psubw(v27, v34);
  v36 = *(__m64 *)a2;
  *(__m64 *)(a2 + 112) = _m_paddw(v27, v34);
  v37 = _m_pmaddwd(_m_punpckhwd(v35, v23), v22);
  v38 = _m_psrad(_m_pmaddwd(_m_punpcklwd(v33, v23), v22), 0x10u);
  v39 = _mm_cvtsi32_si64(0x20006A0Au);
  v40 = _m_punpckldq(v39, v39);
  v41 = _m_paddw(_m_paddw(_m_psubw(_m_pcmpeqw(0i64, v33), v32), v33), _m_packssdw(v38, _m_psrad(v37, 0x10u)));
  v42 = _m_pmaddwd(_m_punpcklwd(v36, v23), v40);
  v43 = _m_punpckhwd(v36, v23);
  v44 = _mm_cvtsi32_si64(0xE3Du);
  v45 = _m_punpckldq(v44, v44);
  v46 = *(__m64 *)(a2 + 80);
  v47 = _m_paddw(
          _m_packssdw(_m_psrad(v42, 0x10u), _m_psrad(_m_pmaddwd(v43, v40), 0x10u)),
          _m_paddw(v36, _m_psubw(_m_pcmpeqw(0i64, v36), v32)));
  v48 = *(__m64 *)(a2 + 48);
  v49 = _m_paddw(_m_psraw(_m_pxor(v41, v47), 1u), _m_pand(v41, v47));
  v50 = _mm_cvtsi32_si64(0x7FFF54DCu);
  v51 = _m_punpckldq(v50, v50);
  *(__m64 *)(a2 + 64) = _m_psubw(v47, v49);
  v52 = _m_pmaddwd(_m_punpcklwd(v46, v46), v51);
  *(__m64 *)a2 = v49;
  v53 = _m_pmaddwd(_m_punpckhwd(v46, v46), v51);
  v54 = _mm_cvtsi32_si64(0x8E3A8E3A);
  v55 = _m_punpckldq(v54, v54);
  v56 = _m_paddd(v52, v45);
  v57 = _m_paddd(v53, v45);
  v58 = _m_paddw(_m_psubw(_m_pcmpeqw(v46, 0i64), v32), v48);
  v59 = _m_pmullw(v48, v55);
  v60 = _m_paddw(_m_pmulhw(v48, v55), v58);
  v61 = v59;
  v62 = _m_punpckhwd(v59, v60);
  v63 = _m_psrad(_m_paddd(v57, v62), 0x10u);
  v64 = _m_pcmpeqb(v62, v62);
  v65 = _m_packssdw(_m_psrad(_m_paddd(v56, _m_punpcklwd(v61, v60)), 0x10u), v63);
  v66 = _m_psubw(0i64, v64);
  v67 = v65;
  v68 = _m_pmulhw(v65, v55);
  v69 = _mm_cvtsi32_si64(0x340067C8u);
  *(__m64 *)(a2 + 80) = v67;
  v70 = _m_punpckldq(v69, v69);
  v71 = _m_paddw(v68, v67);
  v72 = *(__m64 *)(a2 + 112);
  v73 = _m_psubw(v48, v71);
  v74 = _m_pmaddwd(_m_punpcklwd(v73, v66), v70);
  v75 = _m_punpckhwd(v73, v66);
  v76 = _mm_cvtsi32_si64(0x7B1Bu);
  v77 = _m_punpckldq(v76, v76);
  v78 = _m_packssdw(_m_psrad(v74, 0x11u), _m_psrad(_m_pmaddwd(v75, v70), 0x11u));
  v79 = _mm_cvtsi32_si64(0x7FFF7B16u);
  v80 = _m_punpckldq(v79, v79);
  v81 = *(__m64 *)(a2 + 112);
  *(__m64 *)(a2 + 48) = _m_paddw(_m_paddw(v73, _m_psubw(_m_pcmpeqw(0i64, v73), v64)), v78);
  v82 = *(__m64 *)(a2 + 16);
  v83 = _m_pmaddwd(_m_punpcklwd(v72, v72), v80);
  v84 = _m_pmaddwd(_m_punpckhwd(v81, v72), v80);
  v85 = _mm_cvtsi32_si64(0x31F131F1u);
  v86 = _m_psubw(_m_pcmpeqw(v72, 0i64), v64);
  v87 = _m_punpckldq(v85, v85);
  v88 = _m_paddd(v83, v77);
  v89 = _m_paddd(v84, v77);
  v90 = _m_pmullw(v82, v87);
  v91 = _m_paddw(_m_pmulhw(v82, v87), v86);
  v92 = v90;
  v93 = _m_punpckhwd(v90, v91);
  v94 = _m_psrad(_m_paddd(v89, v93), 0x10u);
  v95 = _m_pcmpeqb(v93, v93);
  v96 = _m_packssdw(_m_psrad(_m_paddd(v88, _m_punpcklwd(v92, v91)), 0x10u), v94);
  v97 = _m_psubw(0i64, v95);
  *(__m64 *)(a2 + 16) = v96;
  v98 = _m_pmulhw(v96, v87);
  v99 = *(__m64 *)(a2 + 96);
  v100 = _mm_cvtsi32_si64(0x3000503Bu);
  v101 = _m_punpckldq(v100, v100);
  v102 = _m_psubw(v98, v82);
  v103 = _m_pmaddwd(_m_punpcklwd(v102, v97), v101);
  v104 = _m_punpckhwd(v102, v97);
  v105 = _mm_cvtsi32_si64(0x6CB7u);
  v106 = _m_punpckldq(v105, v105);
  v107 = _m_packssdw(_m_psrad(v103, 0x14u), _m_psrad(_m_pmaddwd(v104, v101), 0x14u));
  v108 = _mm_cvtsi32_si64(0x7FFF6C84u);
  v109 = _m_punpckldq(v108, v108);
  v110 = *(__m64 *)(a2 + 96);
  *(__m64 *)(a2 + 112) = _m_paddw(_m_paddw(v102, _m_psubw(_m_pcmpeqw(0i64, v102), v95)), v107);
  v111 = *(__m64 *)(a2 + 32);
  v112 = _m_pmaddwd(_m_punpcklwd(v99, v99), v109);
  v113 = _m_pmaddwd(_m_punpckhwd(v110, v99), v109);
  v114 = _mm_cvtsi32_si64(0x61F861F8u);
  v115 = _m_psubw(_m_pcmpeqw(v99, 0i64), v95);
  v116 = _m_punpckldq(v114, v114);
  v117 = _m_paddd(v112, v106);
  v118 = _m_paddd(v113, v106);
  v119 = _m_pmullw(v111, v116);
  v120 = _m_paddw(_m_pmulhw(v111, v116), v115);
  v121 = _m_punpcklwd(v119, v120);
  v122 = _m_psrad(_m_paddd(v117, v121), 0x10u);
  v123 = _m_pcmpeqb(v121, v121);
  v124 = _m_packssdw(v122, _m_psrad(_m_paddd(v118, _m_punpckhwd(v119, v120)), 0x10u));
  v125 = v124;
  v126 = _m_pmulhw(v124, v116);
  v127 = _mm_cvtsi32_si64(0x28005460u);
  v128 = _m_psubw(0i64, v123);
  v129 = _m_punpckldq(v127, v127);
  v130 = _m_psubw(v126, v111);
  v131 = _m_pmaddwd(_m_punpckhwd(v130, v128), v129);
  v132 = _m_punpcklwd(v130, v128);
  v133 = _m_paddw(v130, _m_psubw(_m_pcmpeqw(0i64, v130), v123));
  v134 = *(__m64 *)(a2 + 64);
  v135 = *(__m64 *)(a2 + 80);
  v136 = *(__m64 *)(a2 + 112);
  v137 = _m_packssdw(_m_psrad(_m_pmaddwd(v132, v129), 0x12u), _m_psrad(v131, 0x12u));
  v138 = *(__m64 *)a2;
  v139 = _m_paddw(v137, v133);
  v140 = v134;
  v141 = _m_punpcklwd(v134, v135);
  v142 = _m_punpckhwd(v140, v135);
  v143 = v139;
  v144 = _m_punpcklwd(v139, v136);
  v145 = _m_punpckhwd(v143, v136);
  *(__m64 *)(a2 + 64) = _m_punpckldq(v141, v144);
  v146 = _m_punpckhdq(v141, v144);
  v147 = *(__m64 *)(a2 + 16);
  v148 = v142;
  v149 = _m_punpckldq(v142, v145);
  v150 = _m_punpckhdq(v148, v145);
  v151 = *(__m64 *)(a2 + 48);
  v152 = v138;
  v153 = _m_punpcklwd(v138, v147);
  v154 = _m_punpckhwd(v152, v147);
  v155 = v125;
  v156 = _m_punpcklwd(v125, v151);
  v157 = _m_punpckhwd(v155, v151);
  v158 = v153;
  v159 = _m_punpckldq(v153, v156);
  v160 = _m_punpckhdq(v158, v156);
  v161 = v154;
  v162 = _m_punpckhdq(v154, v157);
  v163 = _m_punpckldq(v161, v157);
  v164 = *(__m64 *)(a3 + 8);
  *(__m64 *)(a2 + 48) = v162;
  v165 = *(__m64 *)(a3 + 120);
  *(__m64 *)(a2 + 80) = v146;
  v166 = *(__m64 *)(a3 + 24);
  *(__m64 *)(a2 + 32) = v163;
  v167 = *(__m64 *)(a3 + 104);
  *(__m64 *)(a2 + 96) = v149;
  v168 = *(__m64 *)(a3 + 40);
  *(__m64 *)(a2 + 16) = v160;
  v169 = *(__m64 *)(a3 + 88);
  *(__m64 *)(a2 + 112) = v150;
  v170 = *(__m64 *)(a3 + 56);
  *(__m64 *)a2 = v159;
  v171 = _m_psllw(v165, 2u);
  v172 = _m_psubw(_m_psllw(v164, 2u), v171);
  v173 = _m_psllw(v167, 2u);
  v174 = _m_psubw(_m_psllw(v166, 2u), v173);
  v175 = _m_psllw(v169, 2u);
  v176 = _m_psubw(_m_psllw(v168, 2u), v175);
  v177 = _m_psllw(*(__m64 *)(a3 + 72), 2u);
  v178 = _m_psubw(_m_psllw(v170, 2u), v177);
  v179 = _m_paddw(_m_paddw(v175, v175), v176);
  v180 = _m_paddw(_m_paddw(v177, v177), v178);
  v181 = _m_psubw(_m_paddw(_m_paddw(v171, v171), v172), v180);
  v182 = _m_psubw(_m_paddw(_m_paddw(v173, v173), v174), v179);
  *(__m64 *)(a2 + 104) = v181;
  v183 = _m_psubw(v174, v176);
  *(__m64 *)(a2 + 40) = v182;
  *(__m64 *)(a2 + 8) = _m_paddw(_m_paddw(v180, v180), v181);
  v184 = _m_paddw(_m_paddw(v176, v176), v183);
  *(__m64 *)(a2 + 72) = _m_paddw(_m_paddw(v179, v179), v182);
  v185 = _mm_cvtsi32_si64(0x5A806A0Au);
  v186 = _m_psrlw(_m_pcmpeqb(v182, v182), 0xFu);
  v187 = _m_punpckldq(v185, v185);
  v188 = _m_paddw(v186, v186);
  *(__m64 *)(a2 + 56) = v184;
  *(__m64 *)(a2 + 120) = v172;
  v189 = _m_psubw(_m_pcmpeqw(0i64, v183), _m_pcmpeqb(v184, v184));
  v190 = *(__m64 *)(a2 + 56);
  v191 = _m_paddw(
           _m_packssdw(
             _m_psrad(_m_pmaddwd(_m_punpcklwd(v183, v188), v187), 0x10u),
             _m_psrad(_m_pmaddwd(_m_punpckhwd(v183, v188), v187), 0x10u)),
           _m_paddw(v183, v189));
  v192 = *(__m64 *)(a2 + 120);
  v193 = _m_psraw(v191, 1u);
  v194 = v178;
  v195 = _m_paddw(v178, v193);
  v196 = *(__m64 *)(a2 + 56);
  *(__m64 *)(a2 + 88) = _m_psubw(v194, v193);
  *(__m64 *)(a2 + 24) = v195;
  v197 = _m_pcmpeqb(v195, v195);
  v198 = *(__m64 *)(a2 + 72);
  v199 = _m_psraw(
           _m_paddw(
             _m_packssdw(
               _m_psrad(_m_pmaddwd(_m_punpcklwd(v190, v188), v187), 0x10u),
               _m_psrad(_m_pmaddwd(_m_punpckhwd(v196, v188), v187), 0x10u)),
             _m_paddw(v190, _m_psubw(_m_pcmpeqw(0i64, v190), v197))),
           1u);
  v200 = *(__m64 *)(a2 + 72);
  *(__m64 *)(a2 + 56) = _m_psubw(v192, v199);
  v201 = *(__m64 *)(a2 + 8);
  *(__m64 *)(a2 + 120) = _m_paddw(v192, v199);
  v202 = _m_pmaddwd(_m_punpckhwd(v200, v188), v187);
  v203 = _m_psrad(_m_pmaddwd(_m_punpcklwd(v198, v188), v187), 0x10u);
  v204 = _mm_cvtsi32_si64(0x20006A0Au);
  v205 = _m_punpckldq(v204, v204);
  v206 = _m_paddw(_m_paddw(_m_psubw(_m_pcmpeqw(0i64, v198), v197), v198), _m_packssdw(v203, _m_psrad(v202, 0x10u)));
  v207 = _m_pmaddwd(_m_punpcklwd(v201, v188), v205);
  v208 = _m_punpckhwd(v201, v188);
  v209 = _mm_cvtsi32_si64(0xE3Du);
  v210 = _m_punpckldq(v209, v209);
  v211 = *(__m64 *)(a2 + 88);
  v212 = _m_paddw(
           _m_packssdw(_m_psrad(v207, 0x10u), _m_psrad(_m_pmaddwd(v208, v205), 0x10u)),
           _m_paddw(v201, _m_psubw(_m_pcmpeqw(0i64, v201), v197)));
  v213 = *(__m64 *)(a2 + 56);
  v214 = _m_paddw(_m_psraw(_m_pxor(v206, v212), 1u), _m_pand(v206, v212));
  v215 = _mm_cvtsi32_si64(0x7FFF54DCu);
  v216 = _m_punpckldq(v215, v215);
  *(__m64 *)(a2 + 72) = _m_psubw(v212, v214);
  v217 = _m_pmaddwd(_m_punpcklwd(v211, v211), v216);
  *(__m64 *)(a2 + 8) = v214;
  v218 = _m_pmaddwd(_m_punpckhwd(v211, v211), v216);
  v219 = _mm_cvtsi32_si64(0x8E3A8E3A);
  v220 = _m_punpckldq(v219, v219);
  v221 = _m_paddd(v217, v210);
  v222 = _m_paddd(v218, v210);
  v223 = _m_paddw(_m_psubw(_m_pcmpeqw(v211, 0i64), v197), v213);
  v224 = _m_pmullw(v213, v220);
  v225 = _m_paddw(_m_pmulhw(v213, v220), v223);
  v226 = v224;
  v227 = _m_punpckhwd(v224, v225);
  v228 = _m_psrad(_m_paddd(v222, v227), 0x10u);
  v229 = _m_pcmpeqb(v227, v227);
  v230 = _m_packssdw(_m_psrad(_m_paddd(v221, _m_punpcklwd(v226, v225)), 0x10u), v228);
  v231 = _m_psubw(0i64, v229);
  v232 = v230;
  v233 = _m_pmulhw(v230, v220);
  v234 = _mm_cvtsi32_si64(0x340067C8u);
  *(__m64 *)(a2 + 88) = v232;
  v235 = _m_punpckldq(v234, v234);
  v236 = _m_paddw(v233, v232);
  v237 = *(__m64 *)(a2 + 120);
  v238 = _m_psubw(v213, v236);
  v239 = _m_pmaddwd(_m_punpcklwd(v238, v231), v235);
  v240 = _m_punpckhwd(v238, v231);
  v241 = _mm_cvtsi32_si64(0x7B1Bu);
  v242 = _m_punpckldq(v241, v241);
  v243 = _m_packssdw(_m_psrad(v239, 0x11u), _m_psrad(_m_pmaddwd(v240, v235), 0x11u));
  v244 = _mm_cvtsi32_si64(0x7FFF7B16u);
  v245 = _m_punpckldq(v244, v244);
  v246 = *(__m64 *)(a2 + 120);
  *(__m64 *)(a2 + 56) = _m_paddw(_m_paddw(v238, _m_psubw(_m_pcmpeqw(0i64, v238), v229)), v243);
  v247 = *(__m64 *)(a2 + 24);
  v248 = _m_pmaddwd(_m_punpcklwd(v237, v237), v245);
  v249 = _m_pmaddwd(_m_punpckhwd(v246, v237), v245);
  v250 = _mm_cvtsi32_si64(0x31F131F1u);
  v251 = _m_psubw(_m_pcmpeqw(v237, 0i64), v229);
  v252 = _m_punpckldq(v250, v250);
  v253 = _m_paddd(v248, v242);
  v254 = _m_paddd(v249, v242);
  v255 = _m_pmullw(v247, v252);
  v256 = _m_paddw(_m_pmulhw(v247, v252), v251);
  v257 = v255;
  v258 = _m_punpckhwd(v255, v256);
  v259 = _m_psrad(_m_paddd(v254, v258), 0x10u);
  v260 = _m_pcmpeqb(v258, v258);
  v261 = _m_packssdw(_m_psrad(_m_paddd(v253, _m_punpcklwd(v257, v256)), 0x10u), v259);
  v262 = _m_psubw(0i64, v260);
  *(__m64 *)(a2 + 24) = v261;
  v263 = _m_pmulhw(v261, v252);
  v264 = *(__m64 *)(a2 + 104);
  v265 = _mm_cvtsi32_si64(0x3000503Bu);
  v266 = _m_punpckldq(v265, v265);
  v267 = _m_psubw(v263, v247);
  v268 = _m_pmaddwd(_m_punpcklwd(v267, v262), v266);
  v269 = _m_punpckhwd(v267, v262);
  v270 = _mm_cvtsi32_si64(0x6CB7u);
  v271 = _m_punpckldq(v270, v270);
  v272 = _m_packssdw(_m_psrad(v268, 0x14u), _m_psrad(_m_pmaddwd(v269, v266), 0x14u));
  v273 = _mm_cvtsi32_si64(0x7FFF6C84u);
  v274 = _m_punpckldq(v273, v273);
  v275 = *(__m64 *)(a2 + 104);
  *(__m64 *)(a2 + 120) = _m_paddw(_m_paddw(v267, _m_psubw(_m_pcmpeqw(0i64, v267), v260)), v272);
  v276 = *(__m64 *)(a2 + 40);
  v277 = _m_pmaddwd(_m_punpcklwd(v264, v264), v274);
  v278 = _m_pmaddwd(_m_punpckhwd(v275, v264), v274);
  v279 = _mm_cvtsi32_si64(0x61F861F8u);
  v280 = _m_psubw(_m_pcmpeqw(v264, 0i64), v260);
  v281 = _m_punpckldq(v279, v279);
  v282 = _m_paddd(v277, v271);
  v283 = _m_paddd(v278, v271);
  v284 = _m_pmullw(v276, v281);
  v285 = _m_paddw(_m_pmulhw(v276, v281), v280);
  v286 = _m_punpcklwd(v284, v285);
  v287 = _m_psrad(_m_paddd(v282, v286), 0x10u);
  v288 = _m_pcmpeqb(v286, v286);
  v289 = _m_packssdw(v287, _m_psrad(_m_paddd(v283, _m_punpckhwd(v284, v285)), 0x10u));
  v290 = v289;
  v291 = _m_pmulhw(v289, v281);
  v292 = _mm_cvtsi32_si64(0x28005460u);
  v293 = _m_psubw(0i64, v288);
  v294 = _m_punpckldq(v292, v292);
  v295 = _m_psubw(v291, v276);
  v296 = _m_pmaddwd(_m_punpckhwd(v295, v293), v294);
  v297 = _m_punpcklwd(v295, v293);
  v298 = _m_paddw(v295, _m_psubw(_m_pcmpeqw(0i64, v295), v288));
  v299 = *(__m64 *)(a2 + 72);
  v300 = *(__m64 *)(a2 + 88);
  v301 = *(__m64 *)(a2 + 120);
  v302 = _m_packssdw(_m_psrad(_m_pmaddwd(v297, v294), 0x12u), _m_psrad(v296, 0x12u));
  v303 = *(__m64 *)(a2 + 8);
  v304 = _m_paddw(v302, v298);
  v305 = v299;
  v306 = _m_punpcklwd(v299, v300);
  v307 = _m_punpckhwd(v305, v300);
  v308 = v304;
  v309 = _m_punpcklwd(v304, v301);
  v310 = _m_punpckhwd(v308, v301);
  *(__m64 *)(a2 + 72) = _m_punpckldq(v306, v309);
  v311 = _m_punpckhdq(v306, v309);
  v312 = *(__m64 *)(a2 + 24);
  v313 = v307;
  v314 = _m_punpckldq(v307, v310);
  v315 = _m_punpckhdq(v313, v310);
  v316 = *(__m64 *)(a2 + 56);
  v317 = v303;
  v318 = _m_punpcklwd(v303, v312);
  v319 = _m_punpckhwd(v317, v312);
  v320 = v290;
  v321 = _m_punpcklwd(v290, v316);
  v322 = _m_punpckhwd(v320, v316);
  v323 = v318;
  v324 = _m_punpckldq(v318, v321);
  v325 = _m_punpckhdq(v323, v321);
  v326 = v319;
  v327 = _m_punpckhdq(v319, v322);
  v328 = _m_punpckldq(v326, v322);
  v329 = *(__m64 *)a2;
  *(__m64 *)(a2 + 88) = v311;
  v330 = *(__m64 *)(a2 + 16);
  *(__m64 *)(a2 + 104) = v314;
  v331 = *(__m64 *)(a2 + 32);
  *(__m64 *)(a2 + 120) = v315;
  v332 = _m_psubw(v329, v327);
  v333 = _m_psubw(v330, v328);
  v334 = _m_psubw(v331, v325);
  v335 = _m_psubw(*(__m64 *)(a2 + 48), v324);
  v336 = _m_paddw(_m_paddw(v325, v325), v334);
  v337 = _m_paddw(_m_paddw(v324, v324), v335);
  v338 = _m_psubw(_m_paddw(_m_paddw(v327, v327), v332), v337);
  v339 = _m_psubw(_m_paddw(_m_paddw(v328, v328), v333), v336);
  *(__m64 *)(a2 + 40) = v338;
  v340 = _m_psubw(v333, v334);
  *(__m64 *)(a2 + 32) = v339;
  *(__m64 *)a2 = _m_paddw(_m_paddw(v337, v337), v338);
  v341 = _m_paddw(_m_paddw(v334, v334), v340);
  *(__m64 *)(a2 + 8) = _m_paddw(_m_paddw(v336, v336), v339);
  v342 = _mm_cvtsi32_si64(0x5A806A0Au);
  v343 = _m_psrlw(_m_pcmpeqb(v339, v339), 0xFu);
  v344 = _m_punpckldq(v342, v342);
  v345 = _m_paddw(v343, v343);
  *(__m64 *)(a2 + 48) = v341;
  *(__m64 *)(a2 + 56) = v332;
  v346 = _m_psubw(_m_pcmpeqw(0i64, v340), _m_pcmpeqb(v341, v341));
  v347 = *(__m64 *)(a2 + 48);
  v348 = _m_paddw(
           _m_packssdw(
             _m_psrad(_m_pmaddwd(_m_punpcklwd(v340, v345), v344), 0x10u),
             _m_psrad(_m_pmaddwd(_m_punpckhwd(v340, v345), v344), 0x10u)),
           _m_paddw(v340, v346));
  v349 = *(__m64 *)(a2 + 56);
  v350 = _m_psraw(v348, 1u);
  v351 = v335;
  v352 = _m_paddw(v335, v350);
  v353 = *(__m64 *)(a2 + 48);
  *(__m64 *)(a2 + 24) = _m_psubw(v351, v350);
  *(__m64 *)(a2 + 16) = v352;
  v354 = _m_pcmpeqb(v352, v352);
  v355 = *(__m64 *)(a2 + 8);
  v356 = _m_psraw(
           _m_paddw(
             _m_packssdw(
               _m_psrad(_m_pmaddwd(_m_punpcklwd(v347, v345), v344), 0x10u),
               _m_psrad(_m_pmaddwd(_m_punpckhwd(v353, v345), v344), 0x10u)),
             _m_paddw(v347, _m_psubw(_m_pcmpeqw(0i64, v347), v354))),
           1u);
  v357 = *(__m64 *)(a2 + 8);
  *(__m64 *)(a2 + 48) = _m_psubw(v349, v356);
  v358 = *(__m64 *)a2;
  *(__m64 *)(a2 + 56) = _m_paddw(v349, v356);
  v359 = _m_pmaddwd(_m_punpckhwd(v357, v345), v344);
  v360 = _m_psrad(_m_pmaddwd(_m_punpcklwd(v355, v345), v344), 0x10u);
  v361 = _mm_cvtsi32_si64(0x20006A0Au);
  v362 = _m_punpckldq(v361, v361);
  v363 = _m_paddw(_m_paddw(_m_psubw(_m_pcmpeqw(0i64, v355), v354), v355), _m_packssdw(v360, _m_psrad(v359, 0x10u)));
  v364 = _m_pmaddwd(_m_punpcklwd(v358, v345), v362);
  v365 = _m_punpckhwd(v358, v345);
  v366 = _mm_cvtsi32_si64(0xE3Du);
  v367 = _m_punpckldq(v366, v366);
  v368 = *(__m64 *)(a2 + 24);
  v369 = _m_paddw(
           _m_packssdw(_m_psrad(v364, 0x10u), _m_psrad(_m_pmaddwd(v365, v362), 0x10u)),
           _m_paddw(v358, _m_psubw(_m_pcmpeqw(0i64, v358), v354)));
  v370 = *(__m64 *)(a2 + 48);
  v371 = _m_paddw(_m_psraw(_m_pxor(v363, v369), 1u), _m_pand(v363, v369));
  v372 = _mm_cvtsi32_si64(0x7FFF54DCu);
  v373 = _m_punpckldq(v372, v372);
  *(__m64 *)(a2 + 8) = _m_psubw(v369, v371);
  v374 = _m_pmaddwd(_m_punpcklwd(v368, v368), v373);
  *(__m64 *)a2 = v371;
  v375 = _m_pmaddwd(_m_punpckhwd(v368, v368), v373);
  v376 = _mm_cvtsi32_si64(0x8E3A8E3A);
  v377 = _m_punpckldq(v376, v376);
  v378 = _m_paddd(v374, v367);
  v379 = _m_paddd(v375, v367);
  v380 = _m_paddw(_m_psubw(_m_pcmpeqw(v368, 0i64), v354), v370);
  v381 = _m_pmullw(v370, v377);
  v382 = _m_paddw(_m_pmulhw(v370, v377), v380);
  v383 = v381;
  v384 = _m_punpckhwd(v381, v382);
  v385 = _m_psrad(_m_paddd(v379, v384), 0x10u);
  v386 = _m_pcmpeqb(v384, v384);
  v387 = _m_packssdw(_m_psrad(_m_paddd(v378, _m_punpcklwd(v383, v382)), 0x10u), v385);
  v388 = _m_psubw(0i64, v386);
  v389 = v387;
  v390 = _m_pmulhw(v387, v377);
  v391 = _mm_cvtsi32_si64(0x340067C8u);
  *(__m64 *)(a2 + 24) = v389;
  v392 = _m_punpckldq(v391, v391);
  v393 = _m_paddw(v390, v389);
  v394 = *(__m64 *)(a2 + 56);
  v395 = _m_psubw(v370, v393);
  v396 = _m_pmaddwd(_m_punpcklwd(v395, v388), v392);
  v397 = _m_punpckhwd(v395, v388);
  v398 = _mm_cvtsi32_si64(0x7B1Bu);
  v399 = _m_punpckldq(v398, v398);
  v400 = _m_packssdw(_m_psrad(v396, 0x11u), _m_psrad(_m_pmaddwd(v397, v392), 0x11u));
  v401 = _mm_cvtsi32_si64(0x7FFF7B16u);
  v402 = _m_punpckldq(v401, v401);
  v403 = *(__m64 *)(a2 + 56);
  *(__m64 *)(a2 + 48) = _m_paddw(_m_paddw(v395, _m_psubw(_m_pcmpeqw(0i64, v395), v386)), v400);
  v404 = *(__m64 *)(a2 + 16);
  v405 = _m_pmaddwd(_m_punpcklwd(v394, v394), v402);
  v406 = _m_pmaddwd(_m_punpckhwd(v403, v394), v402);
  v407 = _mm_cvtsi32_si64(0x31F131F1u);
  v408 = _m_psubw(_m_pcmpeqw(v394, 0i64), v386);
  v409 = _m_punpckldq(v407, v407);
  v410 = _m_paddd(v405, v399);
  v411 = _m_paddd(v406, v399);
  v412 = _m_pmullw(v404, v409);
  v413 = _m_paddw(_m_pmulhw(v404, v409), v408);
  v414 = v412;
  v415 = _m_punpckhwd(v412, v413);
  v416 = _m_psrad(_m_paddd(v411, v415), 0x10u);
  v417 = _m_pcmpeqb(v415, v415);
  v418 = _m_packssdw(_m_psrad(_m_paddd(v410, _m_punpcklwd(v414, v413)), 0x10u), v416);
  v419 = _m_psubw(0i64, v417);
  *(__m64 *)(a2 + 16) = v418;
  v420 = _m_pmulhw(v418, v409);
  v421 = *(__m64 *)(a2 + 40);
  v422 = _mm_cvtsi32_si64(0x3000503Bu);
  v423 = _m_punpckldq(v422, v422);
  v424 = _m_psubw(v420, v404);
  v425 = _m_pmaddwd(_m_punpcklwd(v424, v419), v423);
  v426 = _m_punpckhwd(v424, v419);
  v427 = _mm_cvtsi32_si64(0x6CB7u);
  v428 = _m_punpckldq(v427, v427);
  v429 = _m_packssdw(_m_psrad(v425, 0x14u), _m_psrad(_m_pmaddwd(v426, v423), 0x14u));
  v430 = _mm_cvtsi32_si64(0x7FFF6C84u);
  v431 = _m_punpckldq(v430, v430);
  v432 = *(__m64 *)(a2 + 40);
  *(__m64 *)(a2 + 56) = _m_paddw(_m_paddw(v424, _m_psubw(_m_pcmpeqw(0i64, v424), v417)), v429);
  v433 = *(__m64 *)(a2 + 32);
  v434 = _m_pmaddwd(_m_punpcklwd(v421, v421), v431);
  v435 = _m_pmaddwd(_m_punpckhwd(v432, v421), v431);
  v436 = _mm_cvtsi32_si64(0x61F861F8u);
  v437 = _m_psubw(_m_pcmpeqw(v421, 0i64), v417);
  v438 = _m_punpckldq(v436, v436);
  v439 = _m_paddd(v434, v428);
  v440 = _m_paddd(v435, v428);
  v441 = _m_pmullw(v433, v438);
  v442 = _m_paddw(_m_pmulhw(v433, v438), v437);
  v443 = _m_punpcklwd(v441, v442);
  v444 = _m_psrad(_m_paddd(v439, v443), 0x10u);
  v445 = _m_pcmpeqb(v443, v443);
  v446 = _m_packssdw(v444, _m_psrad(_m_paddd(v440, _m_punpckhwd(v441, v442)), 0x10u));
  v447 = v446;
  v448 = _m_pmulhw(v446, v438);
  v449 = _mm_cvtsi32_si64(0x28005460u);
  v450 = _m_psubw(0i64, v445);
  v451 = _m_punpckldq(v449, v449);
  v452 = _m_psubw(v448, v433);
  v453 = _m_pmaddwd(_m_punpckhwd(v452, v450), v451);
  v454 = _m_punpcklwd(v452, v450);
  v455 = _m_paddw(v452, _m_psubw(_m_pcmpeqw(0i64, v452), v445));
  v456 = *(__m64 *)(a2 + 8);
  v457 = *(__m64 *)(a2 + 24);
  v458 = *(__m64 *)(a2 + 56);
  v459 = _m_packssdw(_m_psrad(_m_pmaddwd(v454, v451), 0x12u), _m_psrad(v453, 0x12u));
  v460 = *(__m64 *)a2;
  v461 = _m_paddw(v459, v455);
  v462 = v456;
  v463 = _m_punpcklwd(v456, v457);
  v464 = _m_punpckhwd(v462, v457);
  v465 = v461;
  v466 = _m_punpcklwd(v461, v458);
  v467 = _m_punpckhwd(v465, v458);
  *(__m64 *)(a2 + 8) = _m_punpckldq(v463, v466);
  v468 = _m_punpckhdq(v463, v466);
  v469 = *(__m64 *)(a2 + 16);
  v470 = v464;
  v471 = _m_punpckldq(v464, v467);
  v472 = _m_punpckhdq(v470, v467);
  v473 = *(__m64 *)(a2 + 48);
  v474 = v460;
  v475 = _m_punpcklwd(v460, v469);
  v476 = _m_punpckhwd(v474, v469);
  v477 = v447;
  v478 = _m_punpcklwd(v447, v473);
  v479 = _m_punpckhwd(v477, v473);
  v480 = v475;
  v481 = _m_punpckldq(v475, v478);
  v482 = _m_punpckhdq(v480, v478);
  v483 = v476;
  v484 = _m_punpckhdq(v476, v479);
  v485 = _m_punpckldq(v483, v479);
  v486 = _m_pcmpeqw(v479, v479);
  v487 = _m_paddw(v486, v486);
  *(__m64 *)(a2 + 24) = _m_psraw(_m_psubw(v468, v487), 2u);
  v488 = _m_psraw(_m_psubw(v471, v487), 2u);
  v489 = _m_psraw(_m_psubw(v472, v487), 2u);
  v490 = _m_psraw(_m_psubw(v481, v487), 2u);
  v491 = _m_psraw(_m_psubw(v482, v487), 2u);
  v492 = _m_psraw(_m_psubw(v485, v487), 2u);
  v493 = _m_psubw(*(__m64 *)(a2 + 8), v487);
  v494 = _m_psraw(_m_psubw(v484, v487), 2u);
  v495 = *(__m64 *)(a2 + 64);
  *(__m64 *)(a2 + 48) = v494;
  v496 = *(__m64 *)(a2 + 120);
  *(__m64 *)(a2 + 8) = _m_psraw(v493, 2u);
  v497 = *(__m64 *)(a2 + 80);
  *(__m64 *)(a2 + 32) = v492;
  v498 = *(__m64 *)(a2 + 104);
  *(__m64 *)(a2 + 40) = v488;
  v499 = *(__m64 *)(a2 + 96);
  *(__m64 *)(a2 + 16) = v491;
  v500 = *(__m64 *)(a2 + 88);
  *(__m64 *)(a2 + 56) = v489;
  v501 = *(__m64 *)(a2 + 112);
  *(__m64 *)a2 = v490;
  v502 = *(__m64 *)(a2 + 72);
  v503 = _m_psubw(v495, v496);
  v504 = _m_psubw(v497, v498);
  v505 = _m_psubw(v499, v500);
  v506 = _m_psubw(v501, v502);
  v507 = _m_paddw(_m_paddw(v500, v500), v505);
  v508 = _m_paddw(_m_paddw(v502, v502), v506);
  v509 = _m_psubw(_m_paddw(_m_paddw(v496, v496), v503), v508);
  v510 = _m_psubw(_m_paddw(_m_paddw(v498, v498), v504), v507);
  *(__m64 *)(a2 + 104) = v509;
  v511 = _m_psubw(v504, v505);
  *(__m64 *)(a2 + 96) = v510;
  *(__m64 *)(a2 + 64) = _m_paddw(_m_paddw(v508, v508), v509);
  v512 = _m_paddw(_m_paddw(v505, v505), v511);
  *(__m64 *)(a2 + 72) = _m_paddw(_m_paddw(v507, v507), v510);
  v513 = _mm_cvtsi32_si64(0x5A806A0Au);
  v514 = _m_psrlw(_m_pcmpeqb(v510, v510), 0xFu);
  v515 = _m_punpckldq(v513, v513);
  v516 = _m_paddw(v514, v514);
  *(__m64 *)(a2 + 112) = v512;
  *(__m64 *)(a2 + 120) = v503;
  v517 = _m_psubw(_m_pcmpeqw(0i64, v511), _m_pcmpeqb(v512, v512));
  v518 = *(__m64 *)(a2 + 112);
  v519 = _m_paddw(
           _m_packssdw(
             _m_psrad(_m_pmaddwd(_m_punpcklwd(v511, v516), v515), 0x10u),
             _m_psrad(_m_pmaddwd(_m_punpckhwd(v511, v516), v515), 0x10u)),
           _m_paddw(v511, v517));
  v520 = *(__m64 *)(a2 + 120);
  v521 = _m_psraw(v519, 1u);
  v522 = v506;
  v523 = _m_paddw(v506, v521);
  v524 = *(__m64 *)(a2 + 112);
  *(__m64 *)(a2 + 88) = _m_psubw(v522, v521);
  *(__m64 *)(a2 + 80) = v523;
  v525 = _m_pcmpeqb(v523, v523);
  v526 = *(__m64 *)(a2 + 72);
  v527 = _m_psraw(
           _m_paddw(
             _m_packssdw(
               _m_psrad(_m_pmaddwd(_m_punpcklwd(v518, v516), v515), 0x10u),
               _m_psrad(_m_pmaddwd(_m_punpckhwd(v524, v516), v515), 0x10u)),
             _m_paddw(v518, _m_psubw(_m_pcmpeqw(0i64, v518), v525))),
           1u);
  v528 = *(__m64 *)(a2 + 72);
  *(__m64 *)(a2 + 112) = _m_psubw(v520, v527);
  v529 = *(__m64 *)(a2 + 64);
  *(__m64 *)(a2 + 120) = _m_paddw(v520, v527);
  v530 = _m_pmaddwd(_m_punpckhwd(v528, v516), v515);
  v531 = _m_psrad(_m_pmaddwd(_m_punpcklwd(v526, v516), v515), 0x10u);
  v532 = _mm_cvtsi32_si64(0x20006A0Au);
  v533 = _m_punpckldq(v532, v532);
  v534 = _m_paddw(_m_paddw(_m_psubw(_m_pcmpeqw(0i64, v526), v525), v526), _m_packssdw(v531, _m_psrad(v530, 0x10u)));
  v535 = _m_pmaddwd(_m_punpcklwd(v529, v516), v533);
  v536 = _m_punpckhwd(v529, v516);
  v537 = _mm_cvtsi32_si64(0xE3Du);
  v538 = _m_punpckldq(v537, v537);
  v539 = *(__m64 *)(a2 + 88);
  v540 = _m_paddw(
           _m_packssdw(_m_psrad(v535, 0x10u), _m_psrad(_m_pmaddwd(v536, v533), 0x10u)),
           _m_paddw(v529, _m_psubw(_m_pcmpeqw(0i64, v529), v525)));
  v541 = *(__m64 *)(a2 + 112);
  v542 = _m_paddw(_m_psraw(_m_pxor(v534, v540), 1u), _m_pand(v534, v540));
  v543 = _mm_cvtsi32_si64(0x7FFF54DCu);
  v544 = _m_punpckldq(v543, v543);
  *(__m64 *)(a2 + 72) = _m_psubw(v540, v542);
  v545 = _m_pmaddwd(_m_punpcklwd(v539, v539), v544);
  *(__m64 *)(a2 + 64) = v542;
  v546 = _m_pmaddwd(_m_punpckhwd(v539, v539), v544);
  v547 = _mm_cvtsi32_si64(0x8E3A8E3A);
  v548 = _m_punpckldq(v547, v547);
  v549 = _m_paddd(v545, v538);
  v550 = _m_paddd(v546, v538);
  v551 = _m_paddw(_m_psubw(_m_pcmpeqw(v539, 0i64), v525), v541);
  v552 = _m_pmullw(v541, v548);
  v553 = _m_paddw(_m_pmulhw(v541, v548), v551);
  v554 = v552;
  v555 = _m_punpckhwd(v552, v553);
  v556 = _m_psrad(_m_paddd(v550, v555), 0x10u);
  v557 = _m_pcmpeqb(v555, v555);
  v558 = _m_packssdw(_m_psrad(_m_paddd(v549, _m_punpcklwd(v554, v553)), 0x10u), v556);
  v559 = _m_psubw(0i64, v557);
  v560 = v558;
  v561 = _m_pmulhw(v558, v548);
  v562 = _mm_cvtsi32_si64(0x340067C8u);
  *(__m64 *)(a2 + 88) = v560;
  v563 = _m_punpckldq(v562, v562);
  v564 = _m_paddw(v561, v560);
  v565 = *(__m64 *)(a2 + 120);
  v566 = _m_psubw(v541, v564);
  v567 = _m_pmaddwd(_m_punpcklwd(v566, v559), v563);
  v568 = _m_punpckhwd(v566, v559);
  v569 = _mm_cvtsi32_si64(0x7B1Bu);
  v570 = _m_punpckldq(v569, v569);
  v571 = _m_packssdw(_m_psrad(v567, 0x11u), _m_psrad(_m_pmaddwd(v568, v563), 0x11u));
  v572 = _mm_cvtsi32_si64(0x7FFF7B16u);
  v573 = _m_punpckldq(v572, v572);
  v574 = *(__m64 *)(a2 + 120);
  *(__m64 *)(a2 + 112) = _m_paddw(_m_paddw(v566, _m_psubw(_m_pcmpeqw(0i64, v566), v557)), v571);
  v575 = *(__m64 *)(a2 + 80);
  v576 = _m_pmaddwd(_m_punpcklwd(v565, v565), v573);
  v577 = _m_pmaddwd(_m_punpckhwd(v574, v565), v573);
  v578 = _mm_cvtsi32_si64(0x31F131F1u);
  v579 = _m_psubw(_m_pcmpeqw(v565, 0i64), v557);
  v580 = _m_punpckldq(v578, v578);
  v581 = _m_paddd(v576, v570);
  v582 = _m_paddd(v577, v570);
  v583 = _m_pmullw(v575, v580);
  v584 = _m_paddw(_m_pmulhw(v575, v580), v579);
  v585 = v583;
  v586 = _m_punpckhwd(v583, v584);
  v587 = _m_psrad(_m_paddd(v582, v586), 0x10u);
  v588 = _m_pcmpeqb(v586, v586);
  v589 = _m_packssdw(_m_psrad(_m_paddd(v581, _m_punpcklwd(v585, v584)), 0x10u), v587);
  v590 = _m_psubw(0i64, v588);
  *(__m64 *)(a2 + 80) = v589;
  v591 = _m_pmulhw(v589, v580);
  v592 = *(__m64 *)(a2 + 104);
  v593 = _mm_cvtsi32_si64(0x3000503Bu);
  v594 = _m_punpckldq(v593, v593);
  v595 = _m_psubw(v591, v575);
  v596 = _m_pmaddwd(_m_punpcklwd(v595, v590), v594);
  v597 = _m_punpckhwd(v595, v590);
  v598 = _mm_cvtsi32_si64(0x6CB7u);
  v599 = _m_punpckldq(v598, v598);
  v600 = _m_packssdw(_m_psrad(v596, 0x14u), _m_psrad(_m_pmaddwd(v597, v594), 0x14u));
  v601 = _mm_cvtsi32_si64(0x7FFF6C84u);
  v602 = _m_punpckldq(v601, v601);
  v603 = *(__m64 *)(a2 + 104);
  *(__m64 *)(a2 + 120) = _m_paddw(_m_paddw(v595, _m_psubw(_m_pcmpeqw(0i64, v595), v588)), v600);
  v604 = *(__m64 *)(a2 + 96);
  v605 = _m_pmaddwd(_m_punpcklwd(v592, v592), v602);
  v606 = _m_pmaddwd(_m_punpckhwd(v603, v592), v602);
  v607 = _mm_cvtsi32_si64(0x61F861F8u);
  v608 = _m_psubw(_m_pcmpeqw(v592, 0i64), v588);
  v609 = _m_punpckldq(v607, v607);
  v610 = _m_paddd(v605, v599);
  v611 = _m_paddd(v606, v599);
  v612 = _m_pmullw(v604, v609);
  v613 = _m_paddw(_m_pmulhw(v604, v609), v608);
  v614 = _m_punpcklwd(v612, v613);
  v615 = _m_psrad(_m_paddd(v610, v614), 0x10u);
  v616 = _m_pcmpeqb(v614, v614);
  v617 = _m_packssdw(v615, _m_psrad(_m_paddd(v611, _m_punpckhwd(v612, v613)), 0x10u));
  v618 = v617;
  v619 = _m_pmulhw(v617, v609);
  v620 = _mm_cvtsi32_si64(0x28005460u);
  v621 = _m_psubw(0i64, v616);
  v622 = _m_punpckldq(v620, v620);
  v623 = _m_psubw(v619, v604);
  v624 = _m_pmaddwd(_m_punpckhwd(v623, v621), v622);
  v625 = _m_punpcklwd(v623, v621);
  v626 = _m_paddw(v623, _m_psubw(_m_pcmpeqw(0i64, v623), v616));
  v627 = *(__m64 *)(a2 + 72);
  v628 = *(__m64 *)(a2 + 88);
  v629 = *(__m64 *)(a2 + 120);
  v630 = _m_packssdw(_m_psrad(_m_pmaddwd(v625, v622), 0x12u), _m_psrad(v624, 0x12u));
  v631 = *(__m64 *)(a2 + 64);
  v632 = _m_paddw(v630, v626);
  v633 = v627;
  v634 = _m_punpcklwd(v627, v628);
  v635 = _m_punpckhwd(v633, v628);
  v636 = v632;
  v637 = _m_punpcklwd(v632, v629);
  v638 = _m_punpckhwd(v636, v629);
  *(__m64 *)(a2 + 72) = _m_punpckldq(v634, v637);
  v639 = _m_punpckhdq(v634, v637);
  v640 = *(__m64 *)(a2 + 80);
  v641 = v635;
  v642 = _m_punpckldq(v635, v638);
  v643 = _m_punpckhdq(v641, v638);
  v644 = *(__m64 *)(a2 + 112);
  v645 = v631;
  v646 = _m_punpcklwd(v631, v640);
  v647 = _m_punpckhwd(v645, v640);
  v648 = v618;
  v649 = _m_punpcklwd(v618, v644);
  v650 = _m_punpckhwd(v648, v644);
  v651 = v646;
  v652 = _m_punpckldq(v646, v649);
  v653 = _m_punpckhdq(v651, v649);
  v654 = v647;
  v655 = _m_punpckhdq(v647, v650);
  v656 = _m_punpckldq(v654, v650);
  v657 = _m_pcmpeqw(v650, v650);
  v658 = _m_paddw(v657, v657);
  *(__m64 *)(a2 + 88) = _m_psraw(_m_psubw(v639, v658), 2u);
  v659 = *(__m64 *)(a2 + 72);
  *(__m64 *)(a2 + 104) = _m_psraw(_m_psubw(v642, v658), 2u);
  *(__m64 *)(a2 + 120) = _m_psraw(_m_psubw(v643, v658), 2u);
  *(__m64 *)(a2 + 64) = _m_psraw(_m_psubw(v652, v658), 2u);
  *(__m64 *)(a2 + 80) = _m_psraw(_m_psubw(v653, v658), 2u);
  *(__m64 *)(a2 + 96) = _m_psraw(_m_psubw(v656, v658), 2u);
  *(__m64 *)(a2 + 112) = _m_psraw(_m_psubw(v655, v658), 2u);
  *(__m64 *)(a2 + 72) = _m_psraw(_m_psubw(v659, v658), 2u);
  return result;
}
