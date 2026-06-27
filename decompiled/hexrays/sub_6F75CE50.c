int *__usercall sub_6F75CE50@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int *v2; // edi@1
  SHORT v3; // ax@2
  int v4; // ecx@2
  signed int v5; // eax@4
  signed int v6; // edi@4
  signed int v7; // ecx@4
  signed int v8; // ebp@4
  int *v9; // edx@5
  int *v10; // edx@7
  int *v11; // esi@9
  int *v12; // esi@11
  int *v13; // edx@13
  int *v14; // ebp@15
  int *v15; // esi@17
  int v16; // esi@19
  char *v17; // ecx@19
  int v18; // ebx@19
  char *v19; // edx@19
  signed int v20; // eax@21
  int *result; // eax@23
  signed int v22; // ecx@24
  signed int v23; // ecx@27
  signed int v24; // ecx@30
  signed int v25; // ecx@33
  signed int v26; // ecx@36
  signed int v27; // ecx@39
  signed int v28; // ecx@42
  int v29; // [sp+10h] [bp-20Ch]@1
  int *v30; // [sp+10h] [bp-20Ch]@19
  signed int v31; // [sp+14h] [bp-208h]@4
  signed int v32; // [sp+18h] [bp-204h]@4
  signed int v33; // [sp+1Ch] [bp-200h]@4
  signed int v34; // [sp+20h] [bp-1FCh]@4
  signed int v35; // [sp+24h] [bp-1F8h]@4
  signed int v36; // [sp+28h] [bp-1F4h]@4
  signed int v37; // [sp+2Ch] [bp-1F0h]@4
  signed int v38; // [sp+30h] [bp-1ECh]@4
  signed int v39; // [sp+34h] [bp-1E8h]@4
  signed int v40; // [sp+38h] [bp-1E4h]@4
  signed int v41; // [sp+3Ch] [bp-1E0h]@4
  signed int v42; // [sp+40h] [bp-1DCh]@4
  signed int v43; // [sp+44h] [bp-1D8h]@4
  signed int v44; // [sp+48h] [bp-1D4h]@4
  signed int v45; // [sp+4Ch] [bp-1D0h]@4
  signed int v46; // [sp+50h] [bp-1CCh]@4
  signed int v47; // [sp+54h] [bp-1C8h]@4
  signed int v48; // [sp+58h] [bp-1C4h]@4
  signed int v49; // [sp+5Ch] [bp-1C0h]@4
  signed int v50; // [sp+60h] [bp-1BCh]@4
  signed int v51; // [sp+64h] [bp-1B8h]@4
  signed int v52; // [sp+68h] [bp-1B4h]@4
  signed int v53; // [sp+6Ch] [bp-1B0h]@4
  signed int v54; // [sp+70h] [bp-1ACh]@4
  signed int v55; // [sp+74h] [bp-1A8h]@4
  signed int v56; // [sp+78h] [bp-1A4h]@4
  signed int v57; // [sp+7Ch] [bp-1A0h]@4
  signed int v58; // [sp+80h] [bp-19Ch]@4
  signed int v59; // [sp+84h] [bp-198h]@4
  signed int v60; // [sp+88h] [bp-194h]@4
  signed int v61; // [sp+8Ch] [bp-190h]@4
  signed int v62; // [sp+90h] [bp-18Ch]@4
  signed int v63; // [sp+94h] [bp-188h]@4
  signed int v64; // [sp+98h] [bp-184h]@4
  signed int v65; // [sp+9Ch] [bp-180h]@4
  signed int v66; // [sp+A0h] [bp-17Ch]@4
  signed int v67; // [sp+A4h] [bp-178h]@4
  signed int v68; // [sp+A8h] [bp-174h]@4
  signed int v69; // [sp+ACh] [bp-170h]@4
  signed int v70; // [sp+B0h] [bp-16Ch]@4
  signed int v71; // [sp+B4h] [bp-168h]@4
  signed int v72; // [sp+B8h] [bp-164h]@4
  signed int v73; // [sp+BCh] [bp-160h]@4
  signed int v74; // [sp+C0h] [bp-15Ch]@4
  signed int v75; // [sp+C4h] [bp-158h]@4
  signed int v76; // [sp+C8h] [bp-154h]@4
  signed int v77; // [sp+CCh] [bp-150h]@4
  signed int v78; // [sp+D0h] [bp-14Ch]@4
  signed int v79; // [sp+D4h] [bp-148h]@4
  signed int v80; // [sp+D8h] [bp-144h]@4
  signed int v81; // [sp+DCh] [bp-140h]@4
  signed int v82; // [sp+E0h] [bp-13Ch]@4
  signed int v83; // [sp+E4h] [bp-138h]@4
  signed int v84; // [sp+E8h] [bp-134h]@4
  signed int v85; // [sp+ECh] [bp-130h]@4
  signed int v86; // [sp+F0h] [bp-12Ch]@4
  signed int v87; // [sp+F4h] [bp-128h]@4
  signed int v88; // [sp+F8h] [bp-124h]@4
  signed int v89; // [sp+FCh] [bp-120h]@4
  signed int v90; // [sp+100h] [bp-11Ch]@4
  signed int v91; // [sp+104h] [bp-118h]@4
  signed int v92; // [sp+108h] [bp-114h]@4
  signed int v93; // [sp+10Ch] [bp-110h]@4
  signed int v94; // [sp+110h] [bp-10Ch]@4
  signed int v95; // [sp+114h] [bp-108h]@4
  signed int v96; // [sp+118h] [bp-104h]@4
  signed int v97; // [sp+11Ch] [bp-100h]@4
  signed int v98; // [sp+120h] [bp-FCh]@4
  signed int v99; // [sp+124h] [bp-F8h]@4
  signed int v100; // [sp+128h] [bp-F4h]@4
  signed int v101; // [sp+12Ch] [bp-F0h]@4
  signed int v102; // [sp+130h] [bp-ECh]@4
  signed int v103; // [sp+134h] [bp-E8h]@4
  signed int v104; // [sp+138h] [bp-E4h]@4
  signed int v105; // [sp+13Ch] [bp-E0h]@4
  signed int v106; // [sp+140h] [bp-DCh]@4
  signed int v107; // [sp+144h] [bp-D8h]@4
  signed int v108; // [sp+148h] [bp-D4h]@4
  signed int v109; // [sp+14Ch] [bp-D0h]@4
  signed int v110; // [sp+150h] [bp-CCh]@4
  signed int v111; // [sp+154h] [bp-C8h]@4
  signed int v112; // [sp+158h] [bp-C4h]@4
  signed int v113; // [sp+15Ch] [bp-C0h]@4
  signed int v114; // [sp+160h] [bp-BCh]@4
  signed int v115; // [sp+164h] [bp-B8h]@4
  signed int v116; // [sp+168h] [bp-B4h]@4
  signed int v117; // [sp+16Ch] [bp-B0h]@4
  signed int v118; // [sp+170h] [bp-ACh]@4
  signed int v119; // [sp+174h] [bp-A8h]@4
  signed int v120; // [sp+178h] [bp-A4h]@4
  signed int v121; // [sp+17Ch] [bp-A0h]@4
  signed int v122; // [sp+180h] [bp-9Ch]@4
  signed int v123; // [sp+184h] [bp-98h]@4
  signed int v124; // [sp+188h] [bp-94h]@4
  signed int v125; // [sp+18Ch] [bp-90h]@4
  signed int v126; // [sp+190h] [bp-8Ch]@4
  signed int v127; // [sp+194h] [bp-88h]@4
  signed int v128; // [sp+198h] [bp-84h]@4
  signed int v129; // [sp+19Ch] [bp-80h]@4
  signed int v130; // [sp+1A0h] [bp-7Ch]@4
  signed int v131; // [sp+1A4h] [bp-78h]@4
  signed int v132; // [sp+1A8h] [bp-74h]@4
  signed int v133; // [sp+1ACh] [bp-70h]@4
  signed int v134; // [sp+1B0h] [bp-6Ch]@4
  signed int v135; // [sp+1B4h] [bp-68h]@4
  signed int v136; // [sp+1B8h] [bp-64h]@4
  signed int v137; // [sp+1BCh] [bp-60h]@4
  signed int v138; // [sp+1C0h] [bp-5Ch]@4
  signed int v139; // [sp+1C4h] [bp-58h]@4
  signed int v140; // [sp+1C8h] [bp-54h]@4
  signed int v141; // [sp+1CCh] [bp-50h]@4
  signed int v142; // [sp+1D0h] [bp-4Ch]@4
  signed int v143; // [sp+1D4h] [bp-48h]@4
  signed int v144; // [sp+1D8h] [bp-44h]@4
  signed int v145; // [sp+1DCh] [bp-40h]@4
  signed int v146; // [sp+1E0h] [bp-3Ch]@4
  signed int v147; // [sp+1E4h] [bp-38h]@4
  signed int v148; // [sp+1E8h] [bp-34h]@4
  signed int v149; // [sp+1ECh] [bp-30h]@4
  signed int v150; // [sp+1F0h] [bp-2Ch]@4
  signed int v151; // [sp+1F4h] [bp-28h]@4
  signed int v152; // [sp+1F8h] [bp-24h]@4
  signed int v153; // [sp+1FCh] [bp-20h]@4

  v1 = 0;
  v2 = &dword_7025A560[16467 * a1];
  v29 = a1;
  do
  {
    *((_BYTE *)v2 + (unsigned __int8)byte_6FB541A0[v1]) = (GetAsyncKeyState(v1) >> 15) & 1;
    *((_BYTE *)v2 + (unsigned __int8)byte_6FB541A1[v1]) = (GetAsyncKeyState(v1 + 1) >> 15) & 1;
    *((_BYTE *)v2 + (unsigned __int8)byte_6FB541A2[v1]) = (GetAsyncKeyState(v1 + 2) >> 15) & 1;
    *((_BYTE *)v2 + (unsigned __int8)byte_6FB541A3[v1]) = (GetAsyncKeyState(v1 + 3) >> 15) & 1;
    *((_BYTE *)v2 + (unsigned __int8)byte_6FB541A4[v1]) = (GetAsyncKeyState(v1 + 4) >> 15) & 1;
    *((_BYTE *)v2 + (unsigned __int8)byte_6FB541A5[v1]) = (GetAsyncKeyState(v1 + 5) >> 15) & 1;
    *((_BYTE *)v2 + (unsigned __int8)byte_6FB541A6[v1]) = (GetAsyncKeyState(v1 + 6) >> 15) & 1;
    v3 = GetAsyncKeyState(v1 + 7);
    v4 = (unsigned __int8)byte_6FB541A7[v1];
    v1 += 8;
    *((_BYTE *)v2 + v4) = (v3 >> 15) & 1;
  }
  while ( v1 != 256 );
  if ( *((_BYTE *)v2 + 50) )
  {
    *((_BYTE *)v2 + 50) = 0;
    v5 = 33024;
    v6 = 49408;
    v7 = 16640;
    v33 = 57600;
    v8 = 41216;
    v32 = 24832;
    v31 = 8448;
    v41 = 37120;
    v40 = 53504;
    v39 = 20736;
    v38 = 45312;
    v37 = 61696;
    v36 = 28928;
    v35 = 12544;
    v34 = 4352;
    v57 = 35072;
    v56 = 51456;
    v55 = 18688;
    v54 = 43264;
    v53 = 59648;
    v52 = 26880;
    v51 = 10496;
    v50 = 39168;
    v49 = 55552;
    v48 = 22784;
    v47 = 47360;
    v46 = 63744;
    v45 = 30976;
    v44 = 14592;
    v43 = 6400;
    v42 = 2304;
    v89 = 34048;
    v88 = 50432;
    v87 = 17664;
    v86 = 42240;
    v85 = 58624;
    v84 = 25856;
    v83 = 9472;
    v82 = 38144;
    v81 = 54528;
    v80 = 21760;
    v79 = 46336;
    v78 = 62720;
    v77 = 29952;
    v76 = 13568;
    v75 = 5376;
    v74 = 36096;
    v73 = 52480;
    v72 = 19712;
    v71 = 44288;
    v70 = 60672;
    v69 = 27904;
    v68 = 11520;
    v67 = 40192;
    v66 = 56576;
    v65 = 23808;
    v64 = 48384;
    v63 = 64768;
    v62 = 32000;
    v61 = 15616;
    v60 = 7424;
    v59 = 3328;
    v58 = 1280;
    v153 = 33536;
    v152 = 49920;
    v151 = 17152;
    v150 = 41728;
    v149 = 58112;
    v148 = 25344;
    v147 = 8960;
    v146 = 37632;
    v145 = 54016;
    v144 = 21248;
    v143 = 45824;
    v142 = 62208;
    v141 = 29440;
    v140 = 13056;
    v139 = 4864;
    v138 = 35584;
    v137 = 51968;
    v136 = 19200;
    v135 = 43776;
    v134 = 60160;
    v133 = 27392;
    v132 = 11008;
    v131 = 39680;
    v130 = 56064;
    v129 = 23296;
    v128 = 47872;
    v127 = 64256;
    v126 = 31488;
    v125 = 15104;
    v124 = 6912;
    v123 = 2816;
    v122 = 34560;
    v121 = 50944;
    v120 = 18176;
    v119 = 42752;
    v118 = 59136;
    v117 = 26368;
    v116 = 9984;
    v115 = 38656;
    v114 = 55040;
    v113 = 22272;
    v112 = 46848;
    v111 = 63232;
    v110 = 30464;
    v109 = 14080;
    v108 = 5888;
    v107 = 36608;
    v106 = 52992;
    v105 = 20224;
    v104 = 44800;
    v103 = 61184;
    v102 = 28416;
    v101 = 12032;
    v100 = 40704;
    v99 = 57088;
    v98 = 24320;
    v97 = 48896;
    v96 = 65280;
    v95 = 32512;
    v94 = 16128;
    v93 = 7936;
    v92 = 3840;
    v91 = 1792;
    v90 = 768;
  }
  else
  {
    v33 = 57344;
    v5 = 0x8000;
    v1 = 0;
    v6 = 49152;
    v32 = 24576;
    v7 = 0x4000;
    v8 = 40960;
    v31 = 0x2000;
    v41 = 36864;
    v40 = 53248;
    v39 = 20480;
    v38 = 45056;
    v37 = 61440;
    v36 = 28672;
    v35 = 12288;
    v34 = 4096;
    v57 = 34816;
    v56 = 51200;
    v55 = 18432;
    v54 = 43008;
    v53 = 59392;
    v52 = 26624;
    v51 = 10240;
    v50 = 38912;
    v49 = 55296;
    v48 = 22528;
    v47 = 47104;
    v46 = 63488;
    v45 = 30720;
    v44 = 14336;
    v43 = 6144;
    v42 = 2048;
    v89 = 33792;
    v88 = 50176;
    v87 = 17408;
    v86 = 41984;
    v85 = 58368;
    v84 = 25600;
    v83 = 9216;
    v82 = 37888;
    v81 = 54272;
    v80 = 21504;
    v79 = 46080;
    v78 = 62464;
    v77 = 29696;
    v76 = 13312;
    v75 = 5120;
    v74 = 35840;
    v73 = 52224;
    v72 = 19456;
    v71 = 44032;
    v70 = 60416;
    v69 = 27648;
    v68 = 11264;
    v67 = 39936;
    v66 = 56320;
    v65 = 23552;
    v64 = 48128;
    v63 = 64512;
    v62 = 31744;
    v61 = 15360;
    v60 = 7168;
    v59 = 3072;
    v58 = 1024;
    v153 = 33280;
    v152 = 49664;
    v151 = 16896;
    v150 = 41472;
    v149 = 57856;
    v148 = 25088;
    v147 = 8704;
    v146 = 37376;
    v145 = 53760;
    v144 = 20992;
    v143 = 45568;
    v142 = 61952;
    v141 = 29184;
    v140 = 12800;
    v139 = 4608;
    v138 = 35328;
    v137 = 51712;
    v136 = 18944;
    v135 = 43520;
    v134 = 59904;
    v133 = 27136;
    v132 = 10752;
    v131 = 39424;
    v130 = 55808;
    v129 = 23040;
    v128 = 47616;
    v127 = 64000;
    v126 = 31232;
    v125 = 14848;
    v124 = 6656;
    v123 = 2560;
    v122 = 34304;
    v121 = 50688;
    v120 = 17920;
    v119 = 42496;
    v118 = 58880;
    v117 = 26112;
    v116 = 9728;
    v115 = 38400;
    v114 = 54784;
    v113 = 22016;
    v112 = 46592;
    v111 = 62976;
    v110 = 30208;
    v109 = 13824;
    v108 = 5632;
    v107 = 36352;
    v106 = 52736;
    v105 = 19968;
    v104 = 44544;
    v103 = 60928;
    v102 = 28160;
    v101 = 11776;
    v100 = 40448;
    v99 = 56832;
    v98 = 24064;
    v97 = 48640;
    v96 = 65024;
    v95 = 32256;
    v94 = 15872;
    v93 = 7680;
    v92 = 3584;
    v91 = 1536;
    v90 = 512;
  }
  v9 = &dword_7025A560[16467 * v29];
  if ( *((_BYTE *)v9 + 62) )
  {
    *((_BYTE *)v9 + 62) = 0;
    v5 = v153;
    v33 = v149;
    v32 = v148;
    v31 = v147;
    v41 = v146;
    v40 = v145;
    v39 = v144;
    v38 = v143;
    v37 = v142;
    v36 = v141;
    v35 = v140;
    v34 = v139;
    v57 = v138;
    v6 = v152;
    v56 = v137;
    v7 = v151;
    v8 = v150;
    v55 = v136;
    v54 = v135;
    v53 = v134;
    v52 = v133;
    v51 = v132;
    v50 = v131;
    v49 = v130;
    v48 = v129;
    v47 = v128;
    v46 = v127;
    v45 = v126;
    v44 = v125;
    v43 = v124;
    v42 = v123;
    v88 = v121;
    v87 = v120;
    v89 = v122;
    v86 = v119;
    v85 = v118;
    v84 = v117;
    v83 = v116;
    v82 = v115;
    v81 = v114;
    v80 = v113;
    v79 = v112;
    v78 = v111;
    v77 = v110;
    v76 = v109;
    v75 = v108;
    v74 = v107;
    v72 = v105;
    v71 = v104;
    v73 = v106;
    v70 = v103;
    v69 = v102;
    v67 = v100;
    v68 = v101;
    v66 = v99;
    v64 = v97;
    v65 = v98;
    v63 = v96;
    v61 = v94;
    v62 = v95;
    v60 = v93;
    v58 = v91;
    v59 = v92;
    v1 = v90;
  }
  v10 = &dword_7025A560[16467 * v29];
  if ( *((_BYTE *)v10 + 37) )
  {
    *((_BYTE *)v10 + 37) = 0;
    v5 = v89;
    v33 = v85;
    v32 = v84;
    v31 = v83;
    v41 = v82;
    v40 = v81;
    v39 = v80;
    v38 = v79;
    v37 = v78;
    v36 = v77;
    v35 = v76;
    v34 = v75;
    v57 = v74;
    v6 = v88;
    v56 = v73;
    v7 = v87;
    v8 = v86;
    v55 = v72;
    v54 = v71;
    v52 = v69;
    v51 = v68;
    v53 = v70;
    v49 = v66;
    v48 = v65;
    v50 = v67;
    v46 = v63;
    v45 = v62;
    v47 = v64;
    v43 = v60;
    v42 = v59;
    v44 = v61;
    v1 = v58;
  }
  v11 = &dword_7025A560[16467 * v29];
  if ( *((_BYTE *)v11 + 105) )
  {
    *((_BYTE *)v11 + 105) = 0;
    v5 = v57;
    v6 = v56;
    v7 = v55;
    v32 = v52;
    v8 = v54;
    v33 = v53;
    v31 = v51;
    v40 = v49;
    v41 = v50;
    v39 = v48;
    v37 = v46;
    v38 = v47;
    v36 = v45;
    v34 = v43;
    v35 = v44;
    v1 = v42;
  }
  v12 = &dword_7025A560[16467 * v29];
  if ( *((_BYTE *)v12 + 133) )
  {
    *((_BYTE *)v12 + 133) = 0;
    v5 = v41;
    v6 = v40;
    v7 = v39;
    v32 = v36;
    v31 = v35;
    v8 = v38;
    v33 = v37;
    v1 = v34;
  }
  v13 = &dword_7025A560[16467 * v29];
  if ( *((_BYTE *)v13 + 134) )
  {
    *((_BYTE *)v13 + 134) = 0;
    v6 = v33;
    v5 = v8;
    v7 = v32;
    v1 = v31;
  }
  v14 = &dword_7025A560[16467 * v29];
  if ( *((_BYTE *)v14 + 64) )
  {
    *((_BYTE *)v14 + 64) = 0;
    v5 = v6;
    v1 = v7;
  }
  v15 = &dword_7025A560[16467 * v29];
  if ( *((_BYTE *)v15 + 108) )
  {
    *((_BYTE *)v15 + 108) = 0;
    v1 = v5;
  }
  v16 = 16467 * v29;
  v17 = (char *)&dword_7025A560[16467 * v29];
  *((_DWORD *)v17 + 16464) = 0;
  v18 = v1 - (_DWORD)v17;
  v30 = (int *)&byte_7025A660[65868 * v29];
  v19 = v17;
  do
  {
    if ( *v17 )
    {
      v20 = *((_DWORD *)v19 + 16464);
      if ( v20 <= 15 )
      {
        dword_7025A560[v20 + v16 + 16448] = (int)&v17[v18];
        *((_DWORD *)v19 + 16464) = v20 + 1;
      }
    }
    result = (int *)(v17 + 1);
    if ( v17[1] )
    {
      v22 = *((_DWORD *)v19 + 16464);
      if ( v22 <= 15 )
      {
        dword_7025A560[v16 + v22 + 16448] = (int)result + v18;
        *((_DWORD *)v19 + 16464) = v22 + 1;
      }
    }
    if ( *((_BYTE *)result + 1) )
    {
      v23 = *((_DWORD *)v19 + 16464);
      if ( v23 <= 15 )
      {
        dword_7025A560[v16 + v23 + 16448] = (int)result + v18 + 1;
        *((_DWORD *)v19 + 16464) = v23 + 1;
      }
    }
    if ( *((_BYTE *)result + 2) )
    {
      v24 = *((_DWORD *)v19 + 16464);
      if ( v24 <= 15 )
      {
        dword_7025A560[v16 + v24 + 16448] = (int)result + v18 + 2;
        *((_DWORD *)v19 + 16464) = v24 + 1;
      }
    }
    if ( *((_BYTE *)result + 3) )
    {
      v25 = *((_DWORD *)v19 + 16464);
      if ( v25 <= 15 )
      {
        dword_7025A560[v16 + v25 + 16448] = (int)result + v18 + 3;
        *((_DWORD *)v19 + 16464) = v25 + 1;
      }
    }
    if ( *((_BYTE *)result + 4) )
    {
      v26 = *((_DWORD *)v19 + 16464);
      if ( v26 <= 15 )
      {
        dword_7025A560[v16 + v26 + 16448] = (int)result + v18 + 4;
        *((_DWORD *)v19 + 16464) = v26 + 1;
      }
    }
    if ( *((_BYTE *)result + 5) )
    {
      v27 = *((_DWORD *)v19 + 16464);
      if ( v27 <= 15 )
      {
        dword_7025A560[v16 + v27 + 16448] = (int)result + v18 + 5;
        *((_DWORD *)v19 + 16464) = v27 + 1;
      }
    }
    if ( *((_BYTE *)result + 6) )
    {
      v28 = *((_DWORD *)v19 + 16464);
      if ( v28 <= 15 )
      {
        dword_7025A560[v16 + v28 + 16448] = (int)result + v18 + 6;
        *((_DWORD *)v19 + 16464) = v28 + 1;
      }
    }
    v17 = (char *)result + 7;
  }
  while ( v30 != (int *)((char *)result + 7) );
  return result;
}
