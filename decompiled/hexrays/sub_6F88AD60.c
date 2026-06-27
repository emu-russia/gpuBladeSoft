int __usercall sub_6F88AD60@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // ST00_4@1
  int v3; // ST04_4@1
  int v4; // ST0C_4@1
  int v5; // ST38_4@1
  int v6; // ST10_4@1
  int v7; // ST14_4@1
  int v8; // ST18_4@1
  int v9; // ST1C_4@1
  int v10; // ST20_4@1
  int v11; // ST08_4@1
  int v12; // ST24_4@1
  int v13; // ebp@1
  int v14; // ST28_4@1
  int v15; // ST30_4@1
  int v16; // ST2C_4@1
  int v17; // ST34_4@1
  int v18; // edx@1
  int v19; // edx@1
  int v20; // ecx@1
  int v21; // ecx@1
  int v22; // ebx@1
  int v23; // ebx@1
  int v24; // esi@1
  int v25; // esi@1
  int v26; // edx@1
  int v27; // edx@1
  int v28; // ecx@1
  int v29; // ecx@1
  int v30; // ebx@1
  int v31; // ebx@1
  int v32; // esi@1
  int v33; // esi@1
  int v34; // edx@1
  int v35; // edx@1
  int v36; // ecx@1
  int v37; // ecx@1
  int v38; // ebx@1
  int v39; // ebx@1
  int v40; // esi@1
  int v41; // esi@1
  int v42; // edx@1
  int v43; // edx@1
  int v44; // ecx@1
  int v45; // ecx@1
  int v46; // ebx@1
  int v47; // ebx@1
  int v48; // esi@1
  int v49; // esi@1
  int v50; // edx@1
  int v51; // edx@1
  int v52; // ecx@1
  int v53; // ecx@1
  int v54; // ebx@1
  int v55; // ebx@1
  int v56; // esi@1
  int v57; // esi@1
  int v58; // edx@1
  int v59; // edx@1
  int v60; // ecx@1
  int v61; // ecx@1
  int v62; // ebx@1
  int v63; // ebx@1
  int v64; // esi@1
  int v65; // esi@1
  int v66; // edx@1
  int v67; // edx@1
  int v68; // ecx@1
  int v69; // ecx@1
  int v70; // ebx@1
  int v71; // ebx@1
  int v72; // edi@1
  int v73; // edi@1
  int v74; // edx@1
  int v75; // edx@1
  int v76; // ecx@1
  int v77; // ecx@1
  int v78; // esi@1
  int v79; // esi@1
  int v80; // edi@1
  int v81; // edi@1
  int v82; // ebx@1
  int v83; // ebx@1
  int v84; // ecx@1
  int v85; // ecx@1
  int v86; // esi@1
  int v87; // esi@1
  int v88; // edx@1
  int v89; // edx@1
  int v90; // ebx@1
  int v91; // ebx@1
  int v92; // edi@1
  int v93; // edi@1
  int v94; // ecx@1
  int v95; // ecx@1
  int v96; // esi@1
  int v97; // esi@1
  int v98; // ebx@1
  int v99; // ebx@1
  int v100; // edx@1
  int v101; // edx@1
  int v102; // edi@1
  int v103; // edi@1
  int v104; // esi@1
  int v105; // esi@1
  int v106; // ecx@1
  int v107; // ecx@1
  int v108; // ebx@1
  int v109; // ebx@1
  int v110; // edi@1
  int v111; // edi@1
  int v112; // edx@1
  int v113; // edx@1
  int v114; // ecx@1
  int v115; // ecx@1
  int v116; // ebx@1
  int v117; // ebx@1
  int v118; // esi@1
  int v119; // esi@1
  int v120; // edx@1
  int v121; // edx@1
  int v122; // ecx@1
  int v123; // ecx@1
  int v124; // ebx@1
  int v125; // ebx@1
  int v126; // esi@1
  int v127; // esi@1
  int v128; // edx@1
  int v129; // edx@1
  int v130; // ecx@1
  int v131; // ecx@1
  int v132; // ebx@1
  int v133; // ebx@1
  int v134; // esi@1
  int v135; // esi@1
  int v136; // edx@1
  int v137; // edx@1
  int v138; // ecx@1
  int v139; // ecx@1
  int v140; // ebx@1
  int v141; // ebx@1
  int v142; // esi@1
  int v143; // esi@1
  int v144; // edi@1
  int v145; // ecx@1
  int v146; // ebx@1

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 20);
  v5 = *(_DWORD *)(a2 + 28);
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 36);
  v8 = *(_DWORD *)(a2 + 40);
  v9 = *(_DWORD *)(a2 + 44);
  v10 = *(_DWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 16);
  v12 = *(_DWORD *)(a2 + 52);
  v13 = *(_DWORD *)(a2 + 24);
  v14 = *(_DWORD *)(a2 + 56);
  v15 = *(_DWORD *)a2;
  v16 = *(_DWORD *)(a2 + 60);
  v17 = *(_DWORD *)(a2 + 4);
  v18 = __ROL4__(
          *(_DWORD *)a2
        + *(_DWORD *)(result + 8)
        - 680876936
        + (*(_DWORD *)(result + 20) ^ *(_DWORD *)(result + 12) & (*(_DWORD *)(result + 20) ^ *(_DWORD *)(result + 16))),
          7);
  v19 = *(_DWORD *)(result + 12) + v18;
  v20 = __ROL4__(
          v17
        + *(_DWORD *)(result + 20)
        - 389564586
        + (*(_DWORD *)(result + 16) ^ v19 & (*(_DWORD *)(result + 16) ^ *(_DWORD *)(result + 12))),
          12);
  v21 = v19 + v20;
  v22 = __ROR4__(
          v2
        + *(_DWORD *)(result + 16)
        + 606105819
        + (*(_DWORD *)(result + 12) ^ v21 & (v19 ^ *(_DWORD *)(result + 12))),
          15);
  v23 = v21 + v22;
  v24 = __ROR4__(v3 + *(_DWORD *)(result + 12) - 1044525330 + (v19 ^ v23 & (v21 ^ v19)), 10);
  v25 = v23 + v24;
  v26 = __ROL4__(v11 + v19 - 176418897 + (v21 ^ v25 & (v23 ^ v21)), 7);
  v27 = v25 + v26;
  v28 = __ROL4__(v4 + v21 + 1200080426 + (v23 ^ v27 & (v25 ^ v23)), 12);
  v29 = v27 + v28;
  v30 = __ROR4__(v13 + v23 - 1473231341 + (v25 ^ v29 & (v27 ^ v25)), 15);
  v31 = v29 + v30;
  v32 = __ROR4__(v5 + v25 - 45705983 + (v27 ^ v31 & (v29 ^ v27)), 10);
  v33 = v31 + v32;
  v34 = __ROL4__(v6 + v27 + 1770035416 + (v29 ^ v33 & (v31 ^ v29)), 7);
  v35 = v33 + v34;
  v36 = __ROL4__(v7 + v29 - 1958414417 + (v31 ^ v35 & (v33 ^ v31)), 12);
  v37 = v35 + v36;
  v38 = __ROR4__(v8 + v31 - 42063 + (v33 ^ v37 & (v35 ^ v33)), 15);
  v39 = v37 + v38;
  v40 = __ROR4__(v9 + v33 - 1990404162 + (v35 ^ v39 & (v37 ^ v35)), 10);
  v41 = v39 + v40;
  v42 = __ROL4__(v10 + v35 + 1804603682 + (v37 ^ v41 & (v39 ^ v37)), 7);
  v43 = v41 + v42;
  v44 = __ROL4__(v12 + v37 - 40341101 + (v39 ^ v43 & (v41 ^ v39)), 12);
  v45 = v43 + v44;
  v46 = __ROR4__(v14 + v39 - 1502002290 + (v41 ^ v45 & (v43 ^ v41)), 15);
  v47 = v45 + v46;
  v48 = __ROR4__(v16 + v41 + 1236535329 + (v43 ^ v47 & (v45 ^ v43)), 10);
  v49 = v47 + v48;
  v50 = __ROL4__(v17 + v43 - 165796510 + (v47 ^ v45 & (v49 ^ v47)), 5);
  v51 = v49 + v50;
  v52 = __ROL4__(v13 + v45 - 1069501632 + (v49 ^ v47 & (v51 ^ v49)), 9);
  v53 = v51 + v52;
  v54 = __ROL4__(v9 + v47 + 643717713 + (v51 ^ v49 & (v53 ^ v51)), 14);
  v55 = v53 + v54;
  v56 = __ROR4__(v15 + v49 - 373897302 + (v53 ^ v51 & (v55 ^ v53)), 12);
  v57 = v55 + v56;
  v58 = __ROL4__(v4 + v51 - 701558691 + (v55 ^ v53 & (v57 ^ v55)), 5);
  v59 = v57 + v58;
  v60 = __ROL4__(v8 + v53 + 38016083 + (v57 ^ v55 & (v59 ^ v57)), 9);
  v61 = v59 + v60;
  v62 = __ROL4__(v16 + v55 - 660478335 + (v59 ^ v57 & (v61 ^ v59)), 14);
  v63 = v61 + v62;
  v64 = __ROR4__(v11 + v57 - 405537848 + (v61 ^ v59 & (v63 ^ v61)), 12);
  v65 = v63 + v64;
  v66 = __ROL4__(v7 + v59 + 568446438 + (v63 ^ v61 & (v65 ^ v63)), 5);
  v67 = v65 + v66;
  v68 = __ROL4__(v14 + v61 - 1019803690 + (v65 ^ v63 & (v67 ^ v65)), 9);
  v69 = v67 + v68;
  v70 = __ROL4__(v3 + v63 - 187363961 + (v67 ^ v65 & (v69 ^ v67)), 14);
  v71 = v69 + v70;
  v72 = __ROR4__(v6 + v65 + 1163531501 + (v69 ^ v67 & (v71 ^ v69)), 12);
  v73 = v71 + v72;
  v74 = __ROL4__(v12 + v67 - 1444681467 + (v71 ^ v69 & (v73 ^ v71)), 5);
  v75 = v73 + v74;
  v76 = __ROL4__(v2 + v69 - 51403784 + (v73 ^ v71 & (v75 ^ v73)), 9);
  v77 = v75 + v76;
  v78 = __ROL4__(v5 + v71 + 1735328473 + (v75 ^ v73 & (v77 ^ v75)), 14);
  v79 = v77 + v78;
  v80 = __ROR4__(v10 + v73 - 1926607734 + (v77 ^ v75 & (v79 ^ v77)), 12);
  v81 = v79 + v80;
  v82 = __ROL4__(v4 + v75 - 378558 + (v81 ^ v79 ^ v77), 4);
  v83 = v81 + v82;
  v84 = __ROL4__(v6 + v77 - 2022574463 + (v83 ^ v81 ^ v79), 11);
  v85 = v83 + v84;
  v86 = __ROL4__(v9 + v79 + 1839030562 + (v85 ^ v83 ^ v81), 16);
  v87 = v85 + v86;
  v88 = __ROR4__(v14 + v81 - 35309556 + (v87 ^ v85 ^ v83), 9);
  v89 = v87 + v88;
  v90 = __ROL4__(v17 + v83 - 1530992060 + (v89 ^ v87 ^ v85), 4);
  v91 = v89 + v90;
  v92 = __ROL4__(v11 + v85 + 1272893353 + (v91 ^ v89 ^ v87), 11);
  v93 = v91 + v92;
  v94 = __ROL4__(v5 + v87 - 155497632 + (v93 ^ v91 ^ v89), 16);
  v95 = v93 + v94;
  v96 = __ROR4__(v8 + v89 - 1094730640 + (v95 ^ v93 ^ v91), 9);
  v97 = v95 + v96;
  v98 = __ROL4__(v12 + v91 + 681279174 + (v97 ^ v95 ^ v93), 4);
  v99 = v97 + v98;
  v100 = __ROL4__(v15 + v93 - 358537222 + (v99 ^ v97 ^ v95), 11);
  v101 = v99 + v100;
  v102 = __ROL4__(v3 + v95 - 722521979 + (v101 ^ v99 ^ v97), 16);
  v103 = v101 + v102;
  v104 = __ROR4__(v13 + v97 + 76029189 + (v103 ^ v101 ^ v99), 9);
  v105 = v103 + v104;
  v106 = __ROL4__(v7 + v99 - 640364487 + (v105 ^ v103 ^ v101), 4);
  v107 = v105 + v106;
  v108 = __ROL4__(v10 + v101 - 421815835 + (v107 ^ v105 ^ v103), 11);
  v109 = v107 + v108;
  v110 = __ROL4__(v16 + v103 + 530742520 + (v109 ^ v107 ^ v105), 16);
  v111 = v109 + v110;
  v112 = __ROR4__(v2 + v105 - 995338651 + (v111 ^ v109 ^ v107), 9);
  v113 = v111 + v112;
  v114 = __ROL4__(v15 + v107 - 198630844 + (v111 ^ (v113 | ~v109)), 6);
  v115 = v113 + v114;
  v116 = __ROL4__(v5 + v109 + 1126891415 + (v113 ^ (v115 | ~v111)), 10);
  v117 = v115 + v116;
  v118 = __ROL4__(v14 + v111 - 1416354905 + (v115 ^ (v117 | ~v113)), 15);
  v119 = v117 + v118;
  v120 = __ROR4__(v4 + v113 - 57434055 + (v117 ^ (v119 | ~v115)), 11);
  v121 = v119 + v120;
  v122 = __ROL4__(v10 + v115 + 1700485571 + (v119 ^ (v121 | ~v117)), 6);
  v123 = v121 + v122;
  v124 = __ROL4__(v3 + v117 - 1894986606 + (v121 ^ (v123 | ~v119)), 10);
  v125 = v123 + v124;
  v126 = __ROL4__(v8 + v119 - 1051523 + (v123 ^ (v125 | ~v121)), 15);
  v127 = v125 + v126;
  v128 = __ROR4__(v17 + v121 - 2054922799 + (v125 ^ (v127 | ~v123)), 11);
  v129 = v127 + v128;
  v130 = __ROL4__((char *)&unk_6FA87E4F + v6 + v123 + (v127 ^ (v129 | ~v125)), 6);
  v131 = v129 + v130;
  v132 = __ROL4__(v16 + v125 - 30611744 + (v129 ^ (v131 | ~v127)), 10);
  v133 = v131 + v132;
  v134 = __ROL4__(v13 + v127 - 1560198380 + (v131 ^ (v133 | ~v129)), 15);
  v135 = v133 + v134;
  v136 = __ROR4__(v12 + v129 + 1309151649 + (v133 ^ (v135 | ~v131)), 11);
  v137 = v135 + v136;
  v138 = __ROL4__(v11 + v131 - 145523070 + (v135 ^ (v137 | ~v133)), 6);
  v139 = v137 + v138;
  v140 = __ROL4__(v9 + v133 - 1120210379 + (v137 ^ (v139 | ~v135)), 10);
  v141 = v139 + v140;
  v142 = __ROL4__(v2 + v135 + 718787259 + (v139 ^ (v141 | ~v137)), 15);
  v143 = v141 + v142;
  *(_DWORD *)(result + 8) += v139;
  v144 = __ROR4__((v141 ^ (v143 | ~v139)) + v7 + v137 - 343485551, 11);
  v145 = v143 + *(_DWORD *)(result + 12);
  v146 = *(_DWORD *)(result + 20) + v141;
  *(_DWORD *)(result + 16) += v143;
  *(_DWORD *)(result + 12) = v145 + v144;
  *(_DWORD *)(result + 20) = v146;
  return result;
}
