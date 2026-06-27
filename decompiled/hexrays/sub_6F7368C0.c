int __usercall sub_6F7368C0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  signed int v3; // eax@1
  int v4; // edx@7
  int v5; // ebx@7
  double v6; // st7@7
  int v7; // eax@7
  signed int v8; // ebp@7
  double v9; // st6@7
  signed int v10; // edi@8
  double v11; // st5@8
  bool v12; // zf@8
  double v13; // st7@8
  signed int v14; // edx@9
  int v15; // ebp@11
  double v16; // st7@11
  int v17; // ebx@16
  int v18; // esi@16
  char v19; // cl@18
  int v20; // eax@18
  int v21; // edx@18
  int v22; // ebp@25
  int v23; // eax@25
  int v24; // edx@28
  int v25; // edi@28
  int v26; // ebp@31
  int v27; // edx@31
  int v28; // ebp@34
  int v29; // edi@34
  int v30; // edx@37
  int v31; // ebp@37
  int v32; // edx@40
  int v33; // edi@40
  int v34; // ebp@43
  int v35; // edx@43
  int v36; // ebp@46
  int v37; // edi@46
  int v38; // edx@48
  int v39; // edi@48
  int v40; // ebp@48
  int v41; // eax@50
  int v42; // edi@50
  int v43; // eax@52
  int v44; // ebp@52
  int v45; // edi@54
  int v46; // eax@54
  int v47; // edi@56
  int v48; // ebp@56
  int v49; // eax@58
  int v50; // edi@58
  int v51; // eax@60
  int v52; // ebp@60
  signed int v53; // edx@64
  int v54; // ebp@64
  int v55; // eax@66
  signed int v56; // eax@66
  int v57; // ebx@68
  int v58; // eax@68
  int v59; // esi@70
  signed int v60; // eax@70
  double v61; // st6@70
  double v62; // st5@70
  int v63; // ebx@71
  int v64; // edx@73
  _DWORD *v65; // edi@75
  _DWORD *v66; // esi@75
  int v67; // ebp@76
  int v68; // ebp@77
  int v69; // ebx@77
  int v70; // esi@77
  int v71; // edx@79
  _DWORD *v72; // edi@81
  int v73; // ebp@82
  int v74; // edi@83
  int v75; // ebx@83
  int v76; // ebp@83
  int v77; // edx@85
  _DWORD *v78; // edi@87
  _DWORD *v79; // esi@87
  int v80; // ebp@88
  int v81; // edx@89
  int v82; // eax@91
  _DWORD *v83; // ebx@93
  _DWORD *v84; // esi@93
  int v85; // edi@94
  int v86; // edi@95
  int v87; // ebx@95
  int v88; // edx@95
  int v89; // eax@97
  _DWORD *v90; // ebx@99
  _DWORD *v91; // esi@99
  int v92; // edi@100
  int v93; // edi@101
  int v94; // ebx@101
  int v95; // edx@101
  int result; // eax@103
  _DWORD *v97; // ebx@105
  _DWORD *v98; // esi@105
  int v99; // ebp@106
  int v100; // ebx@108
  int v101; // edx@110
  _DWORD *v102; // ebp@112
  int v103; // edi@113
  int v104; // ebp@114
  int v105; // edi@114
  int v106; // ebx@114
  int v107; // edx@116
  _DWORD *v108; // ebp@118
  int v109; // edi@119
  int v110; // ebp@120
  int v111; // edi@120
  int v112; // ebx@120
  int v113; // edx@122
  _DWORD *v114; // edi@124
  _DWORD *v115; // esi@124
  int v116; // ebp@125
  int v117; // ebx@126
  int v118; // esi@126
  int v119; // eax@128
  _DWORD *v120; // edx@130
  _DWORD *v121; // eax@130
  int v122; // edi@131
  int v123; // edx@132
  int v124; // esi@132
  int v125; // eax@132
  int v126; // ebx@134
  _DWORD *v127; // esi@136
  _DWORD *v128; // ebx@136
  int v129; // edi@137
  int v130; // ebx@138
  int v131; // edx@138
  int v132; // edx@140
  _DWORD *v133; // esi@142
  _DWORD *v134; // ebp@142
  int v135; // edi@143
  double v136; // st6@145
  int v137; // [sp+0h] [bp-30h]@1
  int v138; // [sp+4h] [bp-2Ch]@16
  int v139; // [sp+4h] [bp-2Ch]@70
  _DWORD *v140; // [sp+4h] [bp-2Ch]@112
  _DWORD *v141; // [sp+4h] [bp-2Ch]@118
  int v142; // [sp+8h] [bp-28h]@1
  int v143; // [sp+8h] [bp-28h]@70
  _DWORD *v144; // [sp+8h] [bp-28h]@81
  int v145; // [sp+Ch] [bp-24h]@16
  float v146; // [sp+10h] [bp-20h]@7
  float v147; // [sp+14h] [bp-1Ch]@8
  float v148; // [sp+18h] [bp-18h]@14

  v142 = a1;
  v3 = *(_DWORD *)a3;
  v137 = a2;
  if ( *(_DWORD *)(a2 + 4) < *(_DWORD *)(a2 + 4 * *(_DWORD *)a3) )
  {
    *(_DWORD *)a3 = 1;
    v3 = 1;
  }
  if ( *(_DWORD *)(a2 + 8) < *(_DWORD *)(a2 + 4 * v3) )
  {
    *(_DWORD *)a3 = 2;
    v3 = 2;
  }
  if ( *(_DWORD *)(a2 + 12) < *(_DWORD *)(a2 + 4 * v3) )
    *(_DWORD *)a3 = 3;
  v4 = *(_DWORD *)(a3 + 140);
  v5 = a3 + 4 * v4;
  v6 = (double)*(signed int *)v137;
  *(_DWORD *)(v5 + 144) = *(_DWORD *)v137;
  v7 = v4 + 1;
  *(_DWORD *)(a3 + 140) = v4 + 1;
  v8 = *(_DWORD *)(v137 + 4);
  v146 = v6;
  v9 = (double)v8;
  if ( v9 == v6 )
  {
    v10 = *(_DWORD *)(v137 + 8);
    v136 = (double)v10;
    if ( v136 == v6 )
    {
      v15 = *(_DWORD *)(v137 + 12);
      if ( (double)*(signed int *)(v137 + 12) == v6 )
        goto LABEL_16;
      goto LABEL_15;
    }
    v13 = v136;
    v14 = 1;
LABEL_10:
    *(_DWORD *)(a3 + 4 * v7++ + 144) = v10;
    *(_DWORD *)(a3 + 140) = v7;
    *(&v146 + v14++) = v13;
    goto LABEL_11;
  }
  v7 = v4 + 2;
  *(_DWORD *)(v5 + 148) = v8;
  *(_DWORD *)(a3 + 140) = v4 + 2;
  v10 = *(_DWORD *)(v137 + 8);
  v147 = v9;
  v11 = (double)v10;
  v12 = v11 == v6;
  v13 = v11;
  if ( v12 )
  {
    v14 = 2;
    goto LABEL_11;
  }
  v14 = 2;
  if ( v9 != v11 )
    goto LABEL_10;
LABEL_11:
  v15 = *(_DWORD *)(v137 + 12);
  v16 = (double)*(signed int *)(v137 + 12);
  if ( v146 == v16 || v147 == v16 || v14 != 2 && v148 == v16 )
    goto LABEL_16;
LABEL_15:
  *(_DWORD *)(a3 + 4 * v7++ + 144) = v15;
  *(_DWORD *)(a3 + 140) = v7;
LABEL_16:
  v17 = v7 - 1;
  v145 = a3;
  v138 = a3 + 144;
  v18 = a3 + 144 + 4 * (v7 - 1);
  do
  {
    if ( v17 <= 0 )
      break;
    v19 = 0;
    v20 = v138;
    v21 = ((unsigned __int8)((unsigned int)(v18 - v138 - 4) >> 2) + 1) & 7;
    if ( !(((unsigned __int8)((unsigned int)(v18 - v138 - 4) >> 2) + 1) & 7) )
      goto LABEL_152;
    if ( v21 != 1 )
    {
      if ( v21 != 2 )
      {
        if ( v21 != 3 )
        {
          if ( v21 != 4 )
          {
            if ( v21 != 5 )
            {
              if ( v21 != 6 )
              {
                v22 = *(_DWORD *)v138;
                v23 = *(_DWORD *)(v138 + 4);
                if ( *(_DWORD *)v138 > v23 )
                {
                  *(_DWORD *)v138 = v23;
                  v19 = 1;
                  *(_DWORD *)(v138 + 4) = v22;
                }
                v20 = v138 + 4;
              }
              v24 = *(_DWORD *)v20;
              v25 = *(_DWORD *)(v20 + 4);
              if ( *(_DWORD *)v20 > v25 )
              {
                *(_DWORD *)v20 = v25;
                v19 = 1;
                *(_DWORD *)(v20 + 4) = v24;
              }
              v20 += 4;
            }
            v26 = *(_DWORD *)v20;
            v27 = *(_DWORD *)(v20 + 4);
            if ( *(_DWORD *)v20 > v27 )
            {
              *(_DWORD *)v20 = v27;
              v19 = 1;
              *(_DWORD *)(v20 + 4) = v26;
            }
            v20 += 4;
          }
          v28 = *(_DWORD *)v20;
          v29 = *(_DWORD *)(v20 + 4);
          if ( *(_DWORD *)v20 > v29 )
          {
            *(_DWORD *)v20 = v29;
            v19 = 1;
            *(_DWORD *)(v20 + 4) = v28;
          }
          v20 += 4;
        }
        v30 = *(_DWORD *)v20;
        v31 = *(_DWORD *)(v20 + 4);
        if ( *(_DWORD *)v20 > v31 )
        {
          *(_DWORD *)v20 = v31;
          v19 = 1;
          *(_DWORD *)(v20 + 4) = v30;
        }
        v20 += 4;
      }
      v32 = *(_DWORD *)v20;
      v33 = *(_DWORD *)(v20 + 4);
      if ( *(_DWORD *)v20 > v33 )
      {
        *(_DWORD *)v20 = v33;
        v19 = 1;
        *(_DWORD *)(v20 + 4) = v32;
      }
      v20 += 4;
    }
    v34 = *(_DWORD *)v20;
    v35 = *(_DWORD *)(v20 + 4);
    if ( *(_DWORD *)v20 > v35 )
    {
      *(_DWORD *)v20 = v35;
      v19 = 1;
      *(_DWORD *)(v20 + 4) = v34;
    }
    v20 += 4;
    if ( v20 != v18 )
    {
LABEL_152:
      do
      {
        v36 = *(_DWORD *)v20;
        v37 = *(_DWORD *)(v20 + 4);
        if ( *(_DWORD *)v20 > v37 )
        {
          *(_DWORD *)v20 = v37;
          v19 = 1;
          *(_DWORD *)(v20 + 4) = v36;
        }
        v38 = v20 + 4;
        v39 = *(_DWORD *)(v20 + 4);
        v40 = *(_DWORD *)(v20 + 8);
        if ( v39 > v40 )
        {
          *(_DWORD *)(v20 + 4) = v40;
          v19 = 1;
          *(_DWORD *)(v20 + 8) = v39;
        }
        v41 = *(_DWORD *)(v20 + 8);
        v42 = *(_DWORD *)(v38 + 8);
        if ( v41 > v42 )
        {
          *(_DWORD *)(v38 + 4) = v42;
          v19 = 1;
          *(_DWORD *)(v38 + 8) = v41;
        }
        v43 = *(_DWORD *)(v38 + 8);
        v44 = *(_DWORD *)(v38 + 12);
        if ( v43 > v44 )
        {
          *(_DWORD *)(v38 + 8) = v44;
          v19 = 1;
          *(_DWORD *)(v38 + 12) = v43;
        }
        v45 = *(_DWORD *)(v38 + 12);
        v46 = *(_DWORD *)(v38 + 16);
        if ( v45 > v46 )
        {
          *(_DWORD *)(v38 + 12) = v46;
          v19 = 1;
          *(_DWORD *)(v38 + 16) = v45;
        }
        v47 = *(_DWORD *)(v38 + 16);
        v48 = *(_DWORD *)(v38 + 20);
        if ( v47 > v48 )
        {
          *(_DWORD *)(v38 + 16) = v48;
          v19 = 1;
          *(_DWORD *)(v38 + 20) = v47;
        }
        v49 = *(_DWORD *)(v38 + 20);
        v50 = *(_DWORD *)(v38 + 24);
        if ( v49 > v50 )
        {
          *(_DWORD *)(v38 + 20) = v50;
          v19 = 1;
          *(_DWORD *)(v38 + 24) = v49;
        }
        v51 = *(_DWORD *)(v38 + 24);
        v52 = *(_DWORD *)(v38 + 28);
        if ( v51 > v52 )
        {
          *(_DWORD *)(v38 + 24) = v52;
          v19 = 1;
          *(_DWORD *)(v38 + 28) = v51;
        }
        v20 = v38 + 28;
      }
      while ( v38 + 28 != v18 );
    }
    --v17;
    v18 -= 4;
  }
  while ( v19 );
  v53 = *(_DWORD *)(v145 + 140);
  v54 = v53 - 1;
  *(_DWORD *)(v145 + 160) = v53 - 1;
  if ( v53 - 1 > 0 )
  {
    if ( v53 <= 3 )
    {
      v56 = 0;
    }
    else
    {
      v55 = *(_DWORD *)(v145 + 148) - *(_DWORD *)(v145 + 144);
      *(_DWORD *)(v145 + 168) = *(_DWORD *)(v145 + 152) - *(_DWORD *)(v145 + 148);
      *(_DWORD *)(v145 + 164) = v55;
      v56 = 2;
    }
    *(_DWORD *)(v145 + 4 * v56 + 164) = *(_DWORD *)(v145 + 4 * v56 + 148) - *(_DWORD *)(v145 + 4 * v56 + 144);
    if ( v54 > v56 + 1 )
    {
      v57 = v145 + 4 * (v56 + 1);
      v58 = v56 + 2;
      *(_DWORD *)(v57 + 164) = *(_DWORD *)(v57 + 148) - *(_DWORD *)(v57 + 144);
      if ( v54 > v58 )
        *(_DWORD *)(v145 + 4 * v58 + 164) = *(_DWORD *)(v145 + 4 * v58 + 148) - *(_DWORD *)(v145 + 4 * v58 + 144);
    }
  }
  v59 = v142;
  v60 = *(_DWORD *)v145;
  v61 = (double)*(signed int *)v142;
  v62 = (double)*(signed int *)(v142 + 4);
  v143 = *(_DWORD *)v145 - 1;
  v139 = *(_DWORD *)v145 + 1;
  if ( (v62 - v61) * ((double)*(signed int *)(v137 + 12) - (double)*(signed int *)v137)
     - ((double)*(signed int *)(v59 + 12) - v61) * ((double)*(signed int *)(v137 + 4) - (double)*(signed int *)v137) < 0.0 )
  {
    v100 = v60 - 4;
    if ( v60 <= 3 )
      v100 = *(_DWORD *)v145;
    v101 = v60 - 3;
    if ( v60 + 1 <= 3 )
      v101 = v60 + 1;
    v102 = (_DWORD *)(v137 + 4 * v100);
    v140 = (_DWORD *)(v137 + 4 * v101);
    if ( *v102 < *v140 )
    {
      v103 = *(_DWORD *)(v145 + 4);
      *(_DWORD *)(v145 + 8 * v103 + 8) = v100;
      *(_DWORD *)(v145 + 8 * v103 + 12) = v101;
      *(_DWORD *)(v145 + 4) = v103 + 1;
      *(_DWORD *)(v145 + 4 * v103 + 40) = *v140 - *v102;
    }
    v104 = v100 + 1;
    v105 = v101 + 1;
    v106 = v100 - 3;
    if ( v104 <= 3 )
      v106 = v104;
    v107 = v101 - 3;
    if ( v105 <= 3 )
      v107 = v105;
    v108 = (_DWORD *)(v137 + 4 * v106);
    v141 = (_DWORD *)(v137 + 4 * v107);
    if ( *v108 < *v141 )
    {
      v109 = *(_DWORD *)(v145 + 4);
      *(_DWORD *)(v145 + 8 * v109 + 8) = v106;
      *(_DWORD *)(v145 + 8 * v109 + 12) = v107;
      *(_DWORD *)(v145 + 4) = v109 + 1;
      *(_DWORD *)(v145 + 4 * v109 + 40) = *v141 - *v108;
    }
    v110 = v106 + 1;
    v111 = v107 + 1;
    v112 = v106 - 3;
    if ( v110 <= 3 )
      v112 = v110;
    v113 = v107 - 3;
    if ( v111 <= 3 )
      v113 = v111;
    v114 = (_DWORD *)(v137 + 4 * v113);
    v115 = (_DWORD *)(v137 + 4 * v112);
    if ( *v114 > *v115 )
    {
      v116 = *(_DWORD *)(v145 + 4);
      *(_DWORD *)(v145 + 8 * v116 + 8) = v112;
      *(_DWORD *)(v145 + 8 * v116 + 12) = v113;
      *(_DWORD *)(v145 + 4) = v116 + 1;
      *(_DWORD *)(v145 + 4 * v116 + 40) = *v114 - *v115;
    }
    v117 = v143;
    v118 = v60 + 4;
    if ( v60 >= 0 )
      v118 = v60;
    v119 = v60 + 3;
    if ( v143 < 0 )
      v117 = v119;
    v120 = (_DWORD *)(v137 + 4 * v117);
    v121 = (_DWORD *)(v137 + 4 * v118);
    if ( *v121 < *v120 )
    {
      v122 = *(_DWORD *)(v145 + 72);
      *(_DWORD *)(v145 + 8 * v122 + 76) = v118;
      *(_DWORD *)(v145 + 8 * v122 + 80) = v117;
      *(_DWORD *)(v145 + 72) = v122 + 1;
      *(_DWORD *)(v145 + 4 * v122 + 108) = *v120 - *v121;
    }
    v123 = v118 + 3;
    v124 = v118 - 1;
    v125 = v117 + 3;
    if ( v124 >= 0 )
      v123 = v124;
    v126 = v117 - 1;
    if ( v126 >= 0 )
      v125 = v126;
    v127 = (_DWORD *)(v137 + 4 * v125);
    v128 = (_DWORD *)(v137 + 4 * v123);
    if ( *v128 < *v127 )
    {
      v129 = *(_DWORD *)(v145 + 72);
      *(_DWORD *)(v145 + 8 * v129 + 76) = v123;
      *(_DWORD *)(v145 + 8 * v129 + 80) = v125;
      *(_DWORD *)(v145 + 72) = v129 + 1;
      *(_DWORD *)(v145 + 4 * v129 + 108) = *v127 - *v128;
    }
    v130 = v123 + 3;
    v131 = v123 - 1;
    if ( v131 >= 0 )
      v130 = v131;
    v132 = v125 + 3;
    result = v125 - 1;
    if ( result < 0 )
      result = v132;
    v133 = (_DWORD *)(v137 + 4 * v130);
    v134 = (_DWORD *)(v137 + 4 * result);
    if ( *v134 > *v133 )
    {
      v135 = *(_DWORD *)(v145 + 72);
      *(_DWORD *)(v145 + 8 * v135 + 80) = result;
      result = v135 + 1;
      *(_DWORD *)(v145 + 8 * v135 + 76) = v130;
      *(_DWORD *)(v145 + 72) = v135 + 1;
      *(_DWORD *)(v145 + 4 * v135 + 108) = *v134 - *v133;
    }
  }
  else
  {
    v63 = v60 + 4;
    if ( v60 >= 0 )
      v63 = *(_DWORD *)v145;
    v64 = v60 + 3;
    if ( v60 - 1 >= 0 )
      v64 = v60 - 1;
    v65 = (_DWORD *)(v137 + 4 * v63);
    v66 = (_DWORD *)(v137 + 4 * v64);
    if ( *v66 > *v65 )
    {
      v67 = *(_DWORD *)(v145 + 4);
      *(_DWORD *)(v145 + 8 * v67 + 8) = v63;
      *(_DWORD *)(v145 + 8 * v67 + 12) = v64;
      *(_DWORD *)(v145 + 4) = v67 + 1;
      *(_DWORD *)(v145 + 4 * v67 + 40) = *v66 - *v65;
    }
    v68 = v63 + 3;
    v69 = v63 - 1;
    v70 = v64 + 3;
    if ( v69 < 0 )
      v69 = v68;
    v71 = v64 - 1;
    if ( v71 < 0 )
      v71 = v70;
    v72 = (_DWORD *)(v137 + 4 * v69);
    v144 = (_DWORD *)(v137 + 4 * v71);
    if ( *v144 > *v72 )
    {
      v73 = *(_DWORD *)(v145 + 4);
      *(_DWORD *)(v145 + 8 * v73 + 8) = v69;
      *(_DWORD *)(v145 + 8 * v73 + 12) = v71;
      *(_DWORD *)(v145 + 4) = v73 + 1;
      *(_DWORD *)(v145 + 4 * v73 + 40) = *v144 - *v72;
    }
    v74 = v69 + 3;
    v75 = v69 - 1;
    v76 = v71 + 3;
    if ( v75 < 0 )
      v75 = v74;
    v77 = v71 - 1;
    if ( v77 < 0 )
      v77 = v76;
    v78 = (_DWORD *)(v137 + 4 * v77);
    v79 = (_DWORD *)(v137 + 4 * v75);
    if ( *v78 > *v79 )
    {
      v80 = *(_DWORD *)(v145 + 4);
      *(_DWORD *)(v145 + 8 * v80 + 8) = v75;
      *(_DWORD *)(v145 + 8 * v80 + 12) = v77;
      *(_DWORD *)(v145 + 4) = v80 + 1;
      *(_DWORD *)(v145 + 4 * v80 + 40) = *v78 - *v79;
    }
    v81 = v60 - 4;
    if ( v60 <= 3 )
      v81 = v60;
    v82 = v60 - 3;
    if ( v139 <= 3 )
      v82 = v139;
    v83 = (_DWORD *)(v137 + 4 * v81);
    v84 = (_DWORD *)(v137 + 4 * v82);
    if ( *v83 < *v84 )
    {
      v85 = *(_DWORD *)(v145 + 72);
      *(_DWORD *)(v145 + 8 * v85 + 76) = v81;
      *(_DWORD *)(v145 + 8 * v85 + 80) = v82;
      *(_DWORD *)(v145 + 72) = v85 + 1;
      *(_DWORD *)(v145 + 4 * v85 + 108) = *v84 - *v83;
    }
    v86 = v81 + 1;
    v87 = v82 + 1;
    v88 = v81 - 3;
    if ( v86 <= 3 )
      v88 = v86;
    v89 = v82 - 3;
    if ( v87 <= 3 )
      v89 = v87;
    v90 = (_DWORD *)(v137 + 4 * v88);
    v91 = (_DWORD *)(v137 + 4 * v89);
    if ( *v90 < *v91 )
    {
      v92 = *(_DWORD *)(v145 + 72);
      *(_DWORD *)(v145 + 8 * v92 + 76) = v88;
      *(_DWORD *)(v145 + 8 * v92 + 80) = v89;
      *(_DWORD *)(v145 + 72) = v92 + 1;
      *(_DWORD *)(v145 + 4 * v92 + 108) = *v91 - *v90;
    }
    v93 = v88 + 1;
    v94 = v89 + 1;
    v95 = v88 - 3;
    if ( v93 <= 3 )
      v95 = v93;
    result = v89 - 3;
    if ( v94 <= 3 )
      result = v94;
    v97 = (_DWORD *)(v137 + 4 * v95);
    v98 = (_DWORD *)(v137 + 4 * result);
    if ( *v98 > *v97 )
    {
      v99 = *(_DWORD *)(v145 + 72);
      *(_DWORD *)(v145 + 8 * v99 + 80) = result;
      result = v99 + 1;
      *(_DWORD *)(v145 + 8 * v99 + 76) = v95;
      *(_DWORD *)(v145 + 72) = v99 + 1;
      *(_DWORD *)(v145 + 4 * v99 + 108) = *v98 - *v97;
    }
  }
  return result;
}
