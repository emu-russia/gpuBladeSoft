signed int __cdecl sub_6F75B5B0(_DWORD *a1)
{
  unsigned int v1; // esi@3
  unsigned int v2; // eax@3
  int v3; // ecx@4
  int v4; // edi@8
  int v5; // edx@12
  int v6; // eax@18
  int v7; // edi@22
  int v8; // eax@23
  int v9; // esi@27
  int v10; // eax@27
  int v11; // eax@31
  int v12; // eax@35
  int v13; // eax@39
  int v14; // edi@44
  int v15; // esi@45
  int v16; // eax@45
  int v17; // eax@48
  int v18; // eax@51
  int v19; // eax@54
  int v20; // eax@57
  int v21; // eax@60
  int v22; // eax@63
  int v23; // eax@67
  signed int v24; // ST1C_4@69
  int v25; // eax@69
  int v26; // esi@69
  _DWORD *v27; // ecx@69
  int v28; // edi@70
  int v29; // esi@71
  int v30; // eax@71
  int v31; // eax@74
  int v32; // eax@77
  int v33; // eax@80
  int v34; // eax@83
  int v35; // eax@86
  int v36; // eax@89
  int v37; // eax@93
  signed int v38; // ST1C_4@95
  int v39; // eax@95
  int v40; // esi@95
  _DWORD *v41; // ecx@95
  int v42; // ST1C_4@26
  int v43; // eax@26
  int v44; // esi@26
  _DWORD *v45; // ecx@26
  int v46; // ST1C_4@30
  int v47; // eax@30
  int v48; // edx@30
  _DWORD *v49; // ecx@30
  int v50; // ST1C_4@34
  int v51; // eax@34
  int v52; // edi@34
  _DWORD *v53; // ecx@34
  int v54; // ST1C_4@38
  int v55; // eax@38
  int v56; // edi@38
  _DWORD *v57; // ecx@38
  int v58; // ST1C_4@42
  int v59; // eax@42
  int v60; // edi@42
  _DWORD *v61; // ecx@42
  signed int v62; // ebx@97
  signed int v64; // ST1C_4@91
  int v65; // eax@91
  int v66; // edi@91
  _DWORD *v67; // ecx@91
  signed int v68; // ST1C_4@85
  int v69; // eax@85
  int v70; // edi@85
  _DWORD *v71; // ecx@85
  signed int v72; // ST1C_4@88
  int v73; // eax@88
  int v74; // edi@88
  _DWORD *v75; // ecx@88
  signed int v76; // ST1C_4@73
  int v77; // eax@73
  int v78; // edx@73
  _DWORD *v79; // ecx@73
  signed int v80; // ST1C_4@76
  int v81; // eax@76
  int v82; // edi@76
  _DWORD *v83; // ecx@76
  signed int v84; // ST1C_4@79
  int v85; // eax@79
  int v86; // edi@79
  _DWORD *v87; // ecx@79
  signed int v88; // ST1C_4@82
  int v89; // eax@82
  int v90; // edi@82
  _DWORD *v91; // ecx@82
  signed int v92; // ST1C_4@50
  int v93; // eax@50
  int v94; // edi@50
  _DWORD *v95; // ecx@50
  signed int v96; // ST1C_4@53
  int v97; // eax@53
  int v98; // edi@53
  _DWORD *v99; // ecx@53
  signed int v100; // ST1C_4@56
  int v101; // eax@56
  int v102; // edi@56
  _DWORD *v103; // ecx@56
  signed int v104; // ST1C_4@59
  int v105; // eax@59
  int v106; // edi@59
  _DWORD *v107; // ecx@59
  signed int v108; // ST1C_4@62
  int v109; // eax@62
  int v110; // edi@62
  _DWORD *v111; // ecx@62
  signed int v112; // ST1C_4@47
  int v113; // eax@47
  int v114; // edx@47
  _DWORD *v115; // ecx@47
  signed int v116; // ST1C_4@65
  int v117; // eax@65
  int v118; // edi@65
  _DWORD *v119; // ecx@65
  int v120; // ST1C_4@21
  int v121; // eax@21
  int v122; // edx@21
  _DWORD *v123; // esi@21

  sub_6F75B290();
  sub_6F75E7B0();
  sub_6F75FD10();
  sub_6F762870();
  *a1 = 0;
  a1[9] = 0;
  memset(
    (void *)((unsigned int)(a1 + 1) & 0xFFFFFFFC),
    0,
    4 * (((unsigned int)a1 + -((unsigned int)(a1 + 1) & 0xFFFFFFFC) + 40) >> 2));
  while ( 1 )
  {
    if ( sub_6F75B060() < 0 )
    {
      v62 = 0;
      goto LABEL_98;
    }
    sub_6F75E700();
    sub_6F75FC60();
    sub_6F7627C0();
    v1 = a1[9];
    v2 = v1;
    if ( v1 )
    {
      v3 = a1[2] & 0xF0;
      if ( v3 == 32 )
      {
        if ( sub_6F7600B0(a1[2] & 0xF, *a1) )
        {
LABEL_102:
          v2 = a1[9];
          goto LABEL_7;
        }
      }
      else if ( v3 == 48 )
      {
        if ( sub_6F762C00(a1[2] & 0xF, *a1) )
        {
          v2 = a1[9];
LABEL_7:
          if ( v2 <= 1 )
            goto LABEL_16;
          v4 = a1[5] & 0xF0;
          if ( v4 == 32 )
          {
            if ( !sub_6F7600B0(a1[5] & 0xF, a1[3]) )
              goto LABEL_106;
          }
          else
          {
            if ( v4 != 48 )
            {
              if ( v4 != 16 )
                goto LABEL_11;
              if ( sub_6F75EE40(a1[5] & 0xF, a1[3]) )
              {
                v2 = a1[9];
LABEL_11:
                if ( v2 > 2 )
                {
                  v5 = a1[8] & 0xF0;
                  switch ( v5 )
                  {
                    case 32:
                      v1 -= (unsigned int)sub_6F7600B0(a1[8] & 0xF, a1[6]) < 1;
                      break;
                    case 48:
                      v1 -= (unsigned int)sub_6F762C00(a1[8] & 0xF, a1[6]) < 1;
                      break;
                    case 16:
                      v1 -= (unsigned int)sub_6F75EE40(a1[8] & 0xF, a1[6]) < 1;
                      break;
                  }
                }
                goto LABEL_16;
              }
LABEL_106:
              --v1;
              v2 = a1[9];
              goto LABEL_11;
            }
            if ( !sub_6F762C00(a1[5] & 0xF, a1[3]) )
              goto LABEL_106;
          }
          v2 = a1[9];
          goto LABEL_11;
        }
      }
      else
      {
        if ( v3 != 16 )
          goto LABEL_7;
        if ( sub_6F75EE40(a1[2] & 0xF, *a1) )
          goto LABEL_102;
      }
      --v1;
      v2 = a1[9];
      goto LABEL_7;
    }
LABEL_16:
    sub_6F75E650();
    sub_6F75FBB0();
    sub_6F762710();
    if ( a1[9] )
    {
      if ( !v1 )
        break;
    }
    v6 = sub_6F75ECF0(0);
    if ( v6 >= 0 )
    {
      if ( v6 == 9 )
      {
LABEL_97:
        *a1 = 0;
        a1[9] = 0;
        v62 = 0;
        memset(
          (void *)((unsigned int)(a1 + 1) & 0xFFFFFFFC),
          0,
          4 * (((unsigned int)a1 + -((unsigned int)(a1 + 1) & 0xFFFFFFFC) + 40) >> 2));
        goto LABEL_98;
      }
      if ( a1[9] <= 2u )
      {
        v120 = v6;
        sub_6F75F040(0, v6);
        a1[3 * a1[9]] = v120;
        v121 = sub_6F75EFC0();
        v122 = a1[9];
        v123 = &a1[3 * v122];
        v123[1] = v121;
        v123[2] = 16;
        a1[9] = v122 + 1;
      }
    }
    v7 = 1;
    do
    {
      v8 = sub_6F75ECF0(v7);
      if ( v8 >= 0 )
      {
        if ( v8 == 9 )
          goto LABEL_97;
        if ( a1[9] <= 2u )
        {
          v42 = v8;
          sub_6F75F040(v7, v8);
          a1[3 * a1[9]] = v42;
          v43 = sub_6F75EFC0();
          v44 = a1[9];
          v45 = &a1[3 * v44];
          v45[1] = v43;
          v45[2] = v7 + 16;
          a1[9] = v44 + 1;
        }
      }
      v9 = v7 + 1;
      v10 = sub_6F75ECF0(v7 + 1);
      if ( v10 >= 0 )
      {
        if ( v10 == 9 )
          goto LABEL_97;
        if ( a1[9] <= 2u )
        {
          v46 = v10;
          sub_6F75F040(v9, v10);
          a1[3 * a1[9]] = v46;
          v47 = sub_6F75EFC0();
          v48 = a1[9];
          v49 = &a1[3 * v48];
          v49[2] = v7 + 17;
          v49[1] = v47;
          a1[9] = v48 + 1;
        }
      }
      v11 = sub_6F75ECF0(v7 + 2);
      if ( v11 >= 0 )
      {
        if ( v11 == 9 )
          goto LABEL_97;
        if ( a1[9] <= 2u )
        {
          v50 = v11;
          sub_6F75F040(v7 + 2, v11);
          a1[3 * a1[9]] = v50;
          v51 = sub_6F75EFC0();
          v52 = a1[9];
          v53 = &a1[3 * v52];
          v53[1] = v51;
          v53[2] = v9 + 17;
          a1[9] = v52 + 1;
        }
      }
      v12 = sub_6F75ECF0(v9 + 2);
      if ( v12 >= 0 )
      {
        if ( v12 == 9 )
          goto LABEL_97;
        if ( a1[9] <= 2u )
        {
          v54 = v12;
          sub_6F75F040(v9 + 2, v12);
          a1[3 * a1[9]] = v54;
          v55 = sub_6F75EFC0();
          v56 = a1[9];
          v57 = &a1[3 * v56];
          v57[1] = v55;
          v57[2] = v9 + 18;
          a1[9] = v56 + 1;
        }
      }
      v13 = sub_6F75ECF0(v9 + 3);
      if ( v13 >= 0 )
      {
        if ( v13 == 9 )
          goto LABEL_97;
        if ( a1[9] <= 2u )
        {
          v58 = v13;
          sub_6F75F040(v9 + 3, v13);
          a1[3 * a1[9]] = v58;
          v59 = sub_6F75EFC0();
          v60 = a1[9];
          v61 = &a1[3 * v60];
          v61[1] = v59;
          v61[2] = v9 + 19;
          a1[9] = v60 + 1;
        }
      }
      v7 = v9 + 4;
    }
    while ( v9 != 12 );
    v14 = 0;
    do
    {
      v23 = sub_6F760050(v14);
      if ( v23 >= 0 && a1[9] <= 2u )
      {
        v24 = v23;
        sub_6F760190(v14, v23);
        a1[3 * a1[9]] = v24;
        LOBYTE(v25) = sub_6F760120(v14, v24);
        v26 = a1[9];
        v27 = &a1[3 * v26];
        v27[1] = v25;
        v27[2] = v14 + 32;
        a1[9] = v26 + 1;
      }
      v15 = v14 + 1;
      v16 = sub_6F760050(v14 + 1);
      if ( v16 >= 0 && a1[9] <= 2u )
      {
        v112 = v16;
        sub_6F760190(v15, v16);
        a1[3 * a1[9]] = v112;
        LOBYTE(v113) = sub_6F760120(v15, v112);
        v114 = a1[9];
        v115 = &a1[3 * v114];
        v115[2] = v14 + 33;
        v115[1] = v113;
        a1[9] = v114 + 1;
      }
      v17 = sub_6F760050(v14 + 2);
      if ( v17 >= 0 && a1[9] <= 2u )
      {
        v92 = v17;
        sub_6F760190(v14 + 2, v17);
        a1[3 * a1[9]] = v92;
        LOBYTE(v93) = sub_6F760120(v14 + 2, v92);
        v94 = a1[9];
        v95 = &a1[3 * v94];
        v95[1] = v93;
        v95[2] = v15 + 33;
        a1[9] = v94 + 1;
      }
      v18 = sub_6F760050(v15 + 2);
      if ( v18 >= 0 && a1[9] <= 2u )
      {
        v96 = v18;
        sub_6F760190(v15 + 2, v18);
        a1[3 * a1[9]] = v96;
        LOBYTE(v97) = sub_6F760120(v15 + 2, v96);
        v98 = a1[9];
        v99 = &a1[3 * v98];
        v99[1] = v97;
        v99[2] = v15 + 34;
        a1[9] = v98 + 1;
      }
      v19 = sub_6F760050(v15 + 3);
      if ( v19 >= 0 && a1[9] <= 2u )
      {
        v100 = v19;
        sub_6F760190(v15 + 3, v19);
        a1[3 * a1[9]] = v100;
        LOBYTE(v101) = sub_6F760120(v15 + 3, v100);
        v102 = a1[9];
        v103 = &a1[3 * v102];
        v103[1] = v101;
        v103[2] = v15 + 35;
        a1[9] = v102 + 1;
      }
      v20 = sub_6F760050(v15 + 4);
      if ( v20 >= 0 && a1[9] <= 2u )
      {
        v104 = v20;
        sub_6F760190(v15 + 4, v20);
        a1[3 * a1[9]] = v104;
        LOBYTE(v105) = sub_6F760120(v15 + 4, v104);
        v106 = a1[9];
        v107 = &a1[3 * v106];
        v107[1] = v105;
        v107[2] = v15 + 36;
        a1[9] = v106 + 1;
      }
      v21 = sub_6F760050(v15 + 5);
      if ( v21 >= 0 && a1[9] <= 2u )
      {
        v108 = v21;
        sub_6F760190(v15 + 5, v21);
        a1[3 * a1[9]] = v108;
        LOBYTE(v109) = sub_6F760120(v15 + 5, v108);
        v110 = a1[9];
        v111 = &a1[3 * v110];
        v111[1] = v109;
        v111[2] = v15 + 37;
        a1[9] = v110 + 1;
      }
      v22 = sub_6F760050(v15 + 6);
      if ( v22 >= 0 && a1[9] <= 2u )
      {
        v116 = v22;
        sub_6F760190(v15 + 6, v22);
        a1[3 * a1[9]] = v116;
        LOBYTE(v117) = sub_6F760120(v15 + 6, v116);
        v118 = a1[9];
        v119 = &a1[3 * v118];
        v119[1] = v117;
        v119[2] = v15 + 38;
        a1[9] = v118 + 1;
      }
      v14 = v15 + 7;
    }
    while ( v15 != 9 );
    v28 = 0;
    do
    {
      v37 = sub_6F762BA0(v28);
      if ( v37 >= 0 && a1[9] <= 2u )
      {
        v38 = v37;
        sub_6F762CE0(v28, v37);
        a1[3 * a1[9]] = v38;
        LOBYTE(v39) = sub_6F762C70(v28, v38);
        v40 = a1[9];
        v41 = &a1[3 * v40];
        v41[1] = v39;
        v41[2] = v28 + 48;
        a1[9] = v40 + 1;
      }
      v29 = v28 + 1;
      v30 = sub_6F762BA0(v28 + 1);
      if ( v30 >= 0 && a1[9] <= 2u )
      {
        v76 = v30;
        sub_6F762CE0(v29, v30);
        a1[3 * a1[9]] = v76;
        LOBYTE(v77) = sub_6F762C70(v29, v76);
        v78 = a1[9];
        v79 = &a1[3 * v78];
        v79[2] = v28 + 49;
        v79[1] = v77;
        a1[9] = v78 + 1;
      }
      v31 = sub_6F762BA0(v28 + 2);
      if ( v31 >= 0 && a1[9] <= 2u )
      {
        v80 = v31;
        sub_6F762CE0(v28 + 2, v31);
        a1[3 * a1[9]] = v80;
        LOBYTE(v81) = sub_6F762C70(v28 + 2, v80);
        v82 = a1[9];
        v83 = &a1[3 * v82];
        v83[1] = v81;
        v83[2] = v29 + 49;
        a1[9] = v82 + 1;
      }
      v32 = sub_6F762BA0(v29 + 2);
      if ( v32 >= 0 && a1[9] <= 2u )
      {
        v84 = v32;
        sub_6F762CE0(v29 + 2, v32);
        a1[3 * a1[9]] = v84;
        LOBYTE(v85) = sub_6F762C70(v29 + 2, v84);
        v86 = a1[9];
        v87 = &a1[3 * v86];
        v87[1] = v85;
        v87[2] = v29 + 50;
        a1[9] = v86 + 1;
      }
      v33 = sub_6F762BA0(v29 + 3);
      if ( v33 >= 0 && a1[9] <= 2u )
      {
        v88 = v33;
        sub_6F762CE0(v29 + 3, v33);
        a1[3 * a1[9]] = v88;
        LOBYTE(v89) = sub_6F762C70(v29 + 3, v88);
        v90 = a1[9];
        v91 = &a1[3 * v90];
        v91[1] = v89;
        v91[2] = v29 + 51;
        a1[9] = v90 + 1;
      }
      v34 = sub_6F762BA0(v29 + 4);
      if ( v34 >= 0 && a1[9] <= 2u )
      {
        v68 = v34;
        sub_6F762CE0(v29 + 4, v34);
        a1[3 * a1[9]] = v68;
        LOBYTE(v69) = sub_6F762C70(v29 + 4, v68);
        v70 = a1[9];
        v71 = &a1[3 * v70];
        v71[1] = v69;
        v71[2] = v29 + 52;
        a1[9] = v70 + 1;
      }
      v35 = sub_6F762BA0(v29 + 5);
      if ( v35 >= 0 && a1[9] <= 2u )
      {
        v72 = v35;
        sub_6F762CE0(v29 + 5, v35);
        a1[3 * a1[9]] = v72;
        LOBYTE(v73) = sub_6F762C70(v29 + 5, v72);
        v74 = a1[9];
        v75 = &a1[3 * v74];
        v75[1] = v73;
        v75[2] = v29 + 53;
        a1[9] = v74 + 1;
      }
      v36 = sub_6F762BA0(v29 + 6);
      if ( v36 >= 0 && a1[9] <= 2u )
      {
        v64 = v36;
        sub_6F762CE0(v29 + 6, v36);
        a1[3 * a1[9]] = v64;
        LOBYTE(v65) = sub_6F762C70(v29 + 6, v64);
        v66 = a1[9];
        v67 = &a1[3 * v66];
        v67[1] = v65;
        v67[2] = v29 + 54;
        a1[9] = v66 + 1;
      }
      v28 = v29 + 7;
    }
    while ( v29 != 9 );
    sub_6F760540(0.05);
  }
  v62 = 1;
LABEL_98:
  sub_6F75E700();
  sub_6F75FC60();
  sub_6F7627C0();
  return v62;
}
