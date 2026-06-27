int __usercall sub_6F7370D0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, unsigned int a5, unsigned int a6)
{
  __int16 v6; // di@1
  int v7; // esi@1
  int v8; // edx@1
  signed int v9; // ebp@1
  int v10; // edi@1
  unsigned int v11; // eax@1
  int v12; // ebx@1
  bool v13; // sf@1
  int v14; // ecx@1
  int v15; // edi@3
  int v16; // edx@3
  int v17; // ebx@5
  __int64 v18; // rdi@7
  char v19; // bp@8
  int v20; // edx@8
  int v21; // eax@8
  int v22; // eax@12
  int v23; // edx@12
  int v24; // eax@12
  int v25; // eax@16
  int v26; // edx@16
  int v27; // eax@16
  int v28; // eax@20
  int v29; // edx@20
  int v30; // eax@20
  int v31; // ebx@22
  unsigned int v32; // edi@22
  unsigned int v33; // eax@22
  int v34; // ecx@26
  __int64 v35; // rax@28
  __int64 v36; // rax@30
  int v37; // ebx@31
  signed int v38; // eax@32
  signed int v39; // ebx@37
  signed int v40; // edi@41
  unsigned int v41; // edi@44
  unsigned int v42; // esi@44
  char v43; // si@46
  signed __int64 v44; // rax@46
  int v45; // ebp@48
  signed __int64 v46; // kr08_8@49
  char v47; // bp@49
  signed __int64 v48; // rax@49
  signed __int64 v49; // kr18_8@52
  char v50; // bp@52
  signed __int64 v51; // rax@52
  signed __int64 v52; // rax@56
  int v53; // ebx@58
  int v54; // ebx@60
  signed __int64 v55; // rax@60
  signed __int64 v56; // rax@62
  signed __int64 v57; // rax@64
  char v58; // bp@75
  int v59; // edx@75
  int v60; // eax@75
  int v61; // eax@79
  int v62; // edx@79
  int v63; // eax@79
  int v64; // eax@83
  int v65; // edx@83
  int v66; // eax@83
  int v67; // eax@87
  int v68; // edx@87
  int v69; // eax@87
  unsigned int v70; // edx@91
  unsigned int v71; // esi@91
  unsigned int v72; // edx@95
  unsigned int v73; // edi@95
  signed __int64 v74; // rax@99
  unsigned __int64 v75; // rax@103
  int v76; // ecx@107
  __int64 v77; // rax@109
  unsigned int v78; // edi@112
  signed int v79; // esi@112
  signed __int64 v80; // rax@115
  int v81; // ebx@119
  signed __int64 v82; // rax@121
  signed __int64 v83; // rax@123
  signed __int64 v84; // rax@127
  signed __int64 v85; // rax@129
  signed __int64 v86; // rax@131
  signed __int64 v87; // rax@135
  signed __int64 v88; // rax@137
  signed __int64 v89; // rax@139
  int v90; // ebp@143
  int v91; // ebx@143
  int v92; // ebx@145
  int v93; // ebx@147
  signed __int64 v94; // rax@152
  int v95; // eax@154
  int v96; // eax@156
  int v97; // eax@160
  signed __int64 v98; // rax@162
  int v99; // eax@164
  int v100; // eax@168
  int v101; // ebx@168
  signed __int64 v102; // rax@170
  int v103; // eax@172
  int v105; // [sp+14h] [bp-D8h]@64
  int v106; // [sp+14h] [bp-D8h]@123
  int v107; // [sp+14h] [bp-D8h]@131
  int v108; // [sp+14h] [bp-D8h]@139
  int v109; // [sp+14h] [bp-D8h]@147
  int v110; // [sp+14h] [bp-D8h]@156
  int v111; // [sp+14h] [bp-D8h]@164
  int v112; // [sp+14h] [bp-D8h]@172
  int v113; // [sp+18h] [bp-D4h]@62
  int v114; // [sp+18h] [bp-D4h]@129
  int v115; // [sp+18h] [bp-D4h]@137
  int v116; // [sp+18h] [bp-D4h]@145
  int v117; // [sp+18h] [bp-D4h]@154
  int v118; // [sp+18h] [bp-D4h]@162
  int v119; // [sp+18h] [bp-D4h]@170
  int v120; // [sp+30h] [bp-BCh]@1
  int v121; // [sp+30h] [bp-BCh]@117
  unsigned int v122; // [sp+38h] [bp-B4h]@1
  __int64 v123; // [sp+38h] [bp-B4h]@12
  signed __int64 v124; // [sp+38h] [bp-B4h]@95
  int v125; // [sp+40h] [bp-ACh]@5
  __int64 v126; // [sp+40h] [bp-ACh]@16
  signed __int64 v127; // [sp+40h] [bp-ACh]@103
  __int64 v128; // [sp+48h] [bp-A4h]@5
  __int64 v129; // [sp+48h] [bp-A4h]@20
  unsigned __int64 v130; // [sp+48h] [bp-A4h]@107
  __int64 v131; // [sp+50h] [bp-9Ch]@5
  __int64 v132; // [sp+50h] [bp-9Ch]@22
  signed __int64 v133; // [sp+50h] [bp-9Ch]@99
  __int64 v134; // [sp+58h] [bp-94h]@5
  int v135; // [sp+58h] [bp-94h]@45
  int v136; // [sp+58h] [bp-94h]@59
  signed int v137; // [sp+58h] [bp-94h]@167
  __int64 v138; // [sp+60h] [bp-8Ch]@5
  signed __int64 v139; // [sp+60h] [bp-8Ch]@26
  unsigned __int64 v140; // [sp+60h] [bp-8Ch]@45
  signed __int64 v141; // [sp+60h] [bp-8Ch]@49
  signed __int64 v142; // [sp+60h] [bp-8Ch]@52
  __int64 v143; // [sp+60h] [bp-8Ch]@112
  __int64 v144; // [sp+68h] [bp-84h]@5
  unsigned __int64 v145; // [sp+68h] [bp-84h]@22
  unsigned __int64 v146; // [sp+68h] [bp-84h]@45
  signed __int64 v147; // [sp+68h] [bp-84h]@49
  signed __int64 v148; // [sp+68h] [bp-84h]@52
  __int64 v149; // [sp+70h] [bp-7Ch]@5
  signed __int64 v150; // [sp+70h] [bp-7Ch]@22
  unsigned __int64 v151; // [sp+70h] [bp-7Ch]@45
  signed __int64 v152; // [sp+70h] [bp-7Ch]@49
  signed __int64 v153; // [sp+70h] [bp-7Ch]@52
  __int64 v154; // [sp+78h] [bp-74h]@1
  int v155; // [sp+78h] [bp-74h]@31
  __int64 v156; // [sp+78h] [bp-74h]@79
  int v157; // [sp+78h] [bp-74h]@142
  __int64 v158; // [sp+80h] [bp-6Ch]@5
  unsigned __int64 v159; // [sp+80h] [bp-6Ch]@22
  signed __int64 v160; // [sp+80h] [bp-6Ch]@45
  int v161; // [sp+80h] [bp-6Ch]@51
  int v162; // [sp+80h] [bp-6Ch]@54
  __int64 v163; // [sp+88h] [bp-64h]@5
  int v164; // [sp+88h] [bp-64h]@31
  unsigned int v165; // [sp+90h] [bp-5Ch]@1
  int v166; // [sp+90h] [bp-5Ch]@12
  signed int v167; // [sp+90h] [bp-5Ch]@34
  __int64 v168; // [sp+90h] [bp-5Ch]@83
  int v169; // [sp+90h] [bp-5Ch]@126
  int v170; // [sp+90h] [bp-5Ch]@134
  int v171; // [sp+98h] [bp-54h]@16
  __int64 v172; // [sp+98h] [bp-54h]@87
  signed int v173; // [sp+98h] [bp-54h]@159
  __int64 v174; // [sp+A0h] [bp-4Ch]@5
  int v175; // [sp+A0h] [bp-4Ch]@91
  int v176; // [sp+A8h] [bp-44h]@1
  unsigned int v177; // [sp+A8h] [bp-44h]@31
  int v178; // [sp+ACh] [bp-40h]@20
  int v179; // [sp+ACh] [bp-40h]@79
  int v180; // [sp+B0h] [bp-3Ch]@83
  unsigned int v181; // [sp+B4h] [bp-38h]@1
  unsigned int v182; // [sp+B8h] [bp-34h]@1
  int v183; // [sp+BCh] [bp-30h]@1
  int v184; // [sp+BCh] [bp-30h]@87
  int v185; // [sp+C0h] [bp-2Ch]@1
  int v186; // [sp+C4h] [bp-28h]@1
  int v187; // [sp+C8h] [bp-24h]@1
  int v188; // [sp+CCh] [bp-20h]@1

  v6 = a3;
  v176 = dword_6FBB52F4 * dword_6FBBDB98;
  v181 = dword_6FBB52F4 * dword_6FBBDBA0;
  v120 = dword_6FBB52F8 * dword_6FBBDB9C;
  v182 = dword_6FBB52F8 * dword_6FBBDBA4;
  v187 = a3 * dword_6FBB52F4;
  v188 = a1 * dword_6FBB52F4;
  v185 = a4 * dword_6FBB52F8;
  v186 = a2 * dword_6FBB52F8;
  sub_6F733480((signed __int16)a1, a2, &v188, &v186);
  sub_6F733480(v6, a4, &v187, &v185);
  v7 = v188;
  v8 = v187;
  v183 = dword_6FBB52F4;
  v122 = v188 + dword_6FBB52F4 * dword_6FBBDB90;
  v9 = v187 + dword_6FBB52F4 * dword_6FBBDB90;
  v188 += dword_6FBB52F4 * dword_6FBBDB90;
  v10 = v186;
  v187 = v9;
  v11 = v185 + dword_6FBB52F8 * dword_6FBBDB94;
  LODWORD(v154) = v9;
  v165 = v186 + dword_6FBB52F8 * dword_6FBBDB94;
  v186 += dword_6FBB52F8 * dword_6FBBDB94;
  v12 = v10 - v185;
  v14 = v185 - v10;
  v13 = v185 - v10 < 0;
  v185 += dword_6FBB52F8 * dword_6FBBDB94;
  if ( v13 )
    v14 = v12;
  v15 = v7 - v8;
  v16 = v8 - v7;
  if ( v16 < 0 )
    v16 = v15;
  v125 = v14;
  v17 = v16;
  v134 = (signed int)v122;
  HIDWORD(v154) = v9 >> 31;
  v138 = (signed int)v165;
  v158 = (signed int)v11;
  v144 = (unsigned __int8)a5;
  v128 = (unsigned __int8)a6;
  v149 = BYTE1(a5);
  v131 = BYTE1(a6);
  v163 = (unsigned __int8)(a5 >> 16);
  v174 = (unsigned __int8)(a6 >> 16);
  if ( v16 <= v14 )
  {
    if ( v14 )
    {
      if ( (signed int)((unsigned __int64)(signed int)v11 >> 32) < (signed int)((v11 < v165)
                                                                              + ((unsigned __int64)(signed int)v165 >> 32)) )
      {
        v174 = (unsigned __int8)(a5 >> 16);
        v163 = (unsigned __int8)(a6 >> 16);
        v131 = BYTE1(a5);
        v149 = BYTE1(a6);
        v128 = (unsigned __int8)a5;
        v138 = (signed int)v11;
        v144 = (unsigned __int8)a6;
        v158 = (signed int)v165;
        v134 = v154;
        v154 = (signed int)v122;
      }
      v58 = dword_6FD4098C;
      v59 = (unsigned __int64)((v154 - v134) << dword_6FD4098C) >> 32;
      v60 = ((_DWORD)v154 - (_DWORD)v134) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v59 = ((_DWORD)v154 - (_DWORD)v134) << dword_6FD4098C;
      if ( dword_6FD4098C & 0x20 )
        v60 = 0;
      v61 = sub_6F737040(v60, v59, v14);
      v179 = v61;
      v156 = v61;
      v62 = (unsigned __int64)((v128 - v144) << v58) >> 32;
      v63 = ((_DWORD)v128 - (_DWORD)v144) << v58;
      if ( v58 & 0x20 )
        v62 = ((_DWORD)v128 - (_DWORD)v144) << v58;
      if ( v58 & 0x20 )
        v63 = 0;
      v64 = sub_6F737040(v63, v62, v125);
      v180 = v64;
      v168 = v64;
      v65 = (unsigned __int64)((v131 - v149) << v58) >> 32;
      v66 = ((_DWORD)v131 - (_DWORD)v149) << v58;
      if ( v58 & 0x20 )
        v65 = ((_DWORD)v131 - (_DWORD)v149) << v58;
      if ( v58 & 0x20 )
        v66 = 0;
      v67 = sub_6F737040(v66, v65, v125);
      v184 = v67;
      v172 = v67;
      v68 = (unsigned __int64)((v174 - v163) << v58) >> 32;
      v69 = ((_DWORD)v174 - (_DWORD)v163) << v58;
      if ( v58 & 0x20 )
        v68 = ((_DWORD)v174 - (_DWORD)v163) << v58;
      if ( v58 & 0x20 )
        v69 = 0;
      v175 = sub_6F737040(v69, v68, v125);
      v70 = (unsigned __int64)(v134 << v58) >> 32;
      v71 = (_DWORD)v134 << v58;
      if ( v58 & 0x20 )
        v70 = (_DWORD)v134 << v58;
      if ( v58 & 0x20 )
        v71 = 0;
      v124 = __PAIR__(v70, v71);
      v72 = (unsigned __int64)(v144 << v58) >> 32;
      v73 = (_DWORD)v144 << v58;
      if ( v58 & 0x20 )
        v72 = (_DWORD)v144 << v58;
      if ( v58 & 0x20 )
        v73 = 0;
      v133 = __PAIR__(v72, v73);
      v74 = v149 << (v58 & 0x1F);
      if ( v58 & 0x20 )
        HIDWORD(v74) = v149 << (v58 & 0x1F);
      if ( v58 & 0x20 )
        LODWORD(v74) = 0;
      v127 = v74;
      v75 = v163 << (v58 & 0x1F);
      if ( v58 & 0x20 )
        HIDWORD(v75) = (_DWORD)v163 << v58;
      if ( v58 & 0x20 )
        LODWORD(v75) = 0;
      v130 = v75;
      v76 = v120 - v138;
      if ( v120 - (signed int)v138 > 0 )
      {
        v124 += v76 * (signed __int64)v179;
        v133 += v76 * (signed __int64)v180;
        v127 += v76 * (signed __int64)v184;
        v130 = v76 * (signed __int64)v175 + v75;
        v138 = v120;
      }
      v77 = (signed int)v182;
      if ( SHIDWORD(v158) < (signed int)(((unsigned int)v158 < v182) + ((unsigned __int64)(signed int)v182 >> 32)) )
        v77 = v158;
      v36 = v77 - v138;
      if ( v36 > 0 )
      {
        v78 = HIDWORD(v138);
        v79 = v138;
        v143 = v138 + v36;
        while ( 1 )
        {
          v80 = v124 >> (v58 & 0x1F);
          if ( v58 & 0x20 )
            LODWORD(v80) = (unsigned __int64)(v124 >> (v58 & 0x1F)) >> 32;
          v121 = v80;
          if ( (signed int)v80 - v176 < v181 - v176 && sub_6F71F0C0(v79) )
          {
            v81 = v130 >> v58;
            if ( v58 & 0x20 )
              v81 = SHIDWORD(v130) >> v58;
            v82 = v127 >> (v58 & 0x1F);
            v81 = (unsigned __int8)v81;
            if ( v58 & 0x20 )
              LOBYTE(v82) = (unsigned __int64)(v127 >> (v58 & 0x1F)) >> 32;
            v106 = (unsigned __int8)v82;
            v83 = v133 >> (v58 & 0x1F);
            if ( v58 & 0x20 )
              LOBYTE(v83) = (unsigned __int64)(v133 >> (v58 & 0x1F)) >> 32;
            dword_6FBB5058(
              dword_6FBB5068 + 2 * ((dword_6FBB52F4 * v79 << 10) + v121),
              dword_6FBB505C + 4 * ((dword_6FBB52F4 * v79 << 10) + v121),
              v121,
              v79,
              (unsigned __int8)v83,
              v106,
              v81,
              0,
              0);
          }
          v78 = (__PAIR__(v78, v79++) + 1) >> 32;
          v124 += v156;
          v133 += v168;
          v127 += v172;
          v130 += v175;
          LODWORD(v36) = v143;
          if ( __PAIR__(v78, v79) == v143 )
            break;
          v58 = dword_6FD4098C;
        }
      }
    }
    else
    {
      LODWORD(v36) = v122 - v176;
      if ( v122 - v176 < v181 - v176 && v165 - v120 < v182 - v120 )
      {
        LODWORD(v36) = sub_6F71F0C0(v165);
        if ( (_DWORD)v36 )
          LODWORD(v36) = dword_6FBB5058(
                           dword_6FBB5068 + 2 * (v122 + v183 * (v165 << 10)),
                           dword_6FBB505C + 4 * (v122 + v183 * (v165 << 10)),
                           v122,
                           v165,
                           (unsigned __int8)a5,
                           BYTE1(a5),
                           (unsigned __int8)(a5 >> 16),
                           0,
                           0);
      }
    }
  }
  else
  {
    if ( SHIDWORD(v154) < (signed int)((v9 < v122) + ((unsigned __int64)(signed int)v122 >> 32)) )
    {
      v174 = (unsigned __int8)(a5 >> 16);
      v163 = (unsigned __int8)(a6 >> 16);
      v131 = BYTE1(a5);
      v149 = BYTE1(a6);
      LODWORD(v18) = v11;
      v144 = (unsigned __int8)a6;
      v128 = (unsigned __int8)a5;
      HIDWORD(v18) = (unsigned __int64)(signed int)v11 >> 32;
      v158 = (signed int)v165;
      v138 = v18;
      v134 = v154;
      v154 = (signed int)v122;
    }
    v19 = dword_6FD4098C;
    v20 = (unsigned __int64)((v158 - v138) << dword_6FD4098C) >> 32;
    v21 = ((_DWORD)v158 - (_DWORD)v138) << dword_6FD4098C;
    if ( dword_6FD4098C & 0x20 )
      v20 = ((_DWORD)v158 - (_DWORD)v138) << dword_6FD4098C;
    if ( dword_6FD4098C & 0x20 )
      v21 = 0;
    v22 = sub_6F737040(v21, v20, v17);
    v166 = v22;
    v123 = v22;
    v23 = (unsigned __int64)((v128 - v144) << v19) >> 32;
    v24 = ((_DWORD)v128 - (_DWORD)v144) << v19;
    if ( v19 & 0x20 )
      v23 = ((_DWORD)v128 - (_DWORD)v144) << v19;
    if ( v19 & 0x20 )
      v24 = 0;
    v25 = sub_6F737040(v24, v23, v17);
    v171 = v25;
    v126 = v25;
    v26 = (unsigned __int64)((v131 - v149) << v19) >> 32;
    v27 = ((_DWORD)v131 - (_DWORD)v149) << v19;
    if ( v19 & 0x20 )
      v26 = ((_DWORD)v131 - (_DWORD)v149) << v19;
    if ( v19 & 0x20 )
      v27 = 0;
    v28 = sub_6F737040(v27, v26, v17);
    v178 = v28;
    v129 = v28;
    v29 = (unsigned __int64)((v174 - v163) << v19) >> 32;
    v30 = ((_DWORD)v174 - (_DWORD)v163) << v19;
    if ( v19 & 0x20 )
    {
      v29 = ((_DWORD)v174 - (_DWORD)v163) << v19;
      v30 = 0;
    }
    v31 = sub_6F737040(v30, v29, v17);
    v132 = v31;
    v159 = v138 << v19;
    v145 = v144 << v19;
    v150 = v149 << v19;
    v32 = (unsigned __int64)(v163 << v19) >> 32;
    v33 = (_DWORD)v163 << v19;
    if ( v19 & 0x20 )
      v32 = (_DWORD)v163 << v19;
    if ( v19 & 0x20 )
      v33 = 0;
    v34 = v176 - v134;
    v139 = __PAIR__(v32, v33);
    if ( v176 - (signed int)v134 > 0 )
    {
      v134 = v176;
      v159 += v34 * (signed __int64)v166;
      v145 += v34 * (signed __int64)v171;
      v150 += v34 * (signed __int64)v178;
      v139 = v34 * (signed __int64)v31 + __PAIR__(v32, v33);
    }
    v35 = (signed int)v181;
    if ( SHIDWORD(v154) < (signed int)(((unsigned int)v154 < v181) + ((unsigned __int64)(signed int)v181 >> 32)) )
      v35 = v154;
    v36 = v35 - v134;
    if ( v36 > 0 )
    {
      v155 = v134;
      v164 = v134 + v36;
      v177 = v182 - v120;
      v37 = ~-(char)v36 & 3;
      if ( !(~-(char)v36 & 3) )
        goto LABEL_178;
      v38 = v159 >> v19;
      if ( v19 & 0x20 )
        v38 = SHIDWORD(v159) >> v19;
      v167 = v38;
      if ( v38 - v120 < v177 )
      {
        v173 = v38;
        if ( sub_6F71F0C0(v38) )
        {
          v97 = (unsigned __int64)v139 >> v19;
          if ( v19 & 0x20 )
            v97 = SHIDWORD(v139) >> v19;
          v118 = (unsigned __int8)v97;
          v98 = v150 >> (v19 & 0x1F);
          if ( v19 & 0x20 )
            LOBYTE(v98) = (unsigned __int64)(v150 >> (v19 & 0x1F)) >> 32;
          v111 = (unsigned __int8)v98;
          v99 = v145 >> v19;
          if ( v19 & 0x20 )
            v99 = SHIDWORD(v145) >> v19;
          dword_6FBB5058(
            dword_6FBB5068 + 2 * (dword_6FBB52F4 * (v173 << 10) + v134),
            dword_6FBB505C + 4 * (dword_6FBB52F4 * (v173 << 10) + v134),
            v134,
            v167,
            (unsigned __int8)v99,
            v111,
            v118,
            0,
            0);
        }
      }
      v159 += v123;
      v145 += v126;
      v150 += v129;
      v139 += v132;
      v155 = v134 + 1;
      v19 = dword_6FD4098C;
      if ( v37 != 1 )
      {
        if ( v37 != 2 )
        {
          v39 = v159 >> dword_6FD4098C;
          if ( dword_6FD4098C & 0x20 )
            v39 = SHIDWORD(v159) >> dword_6FD4098C;
          if ( v39 - v120 < v177 )
          {
            v137 = v39;
            if ( sub_6F71F0C0(v39) )
            {
              v100 = (unsigned __int64)v139 >> v19;
              v101 = v155 + dword_6FBB52F4 * (v39 << 10);
              if ( v19 & 0x20 )
                v100 = SHIDWORD(v139) >> v19;
              v119 = (unsigned __int8)v100;
              v102 = v150 >> (v19 & 0x1F);
              if ( v19 & 0x20 )
                LOBYTE(v102) = (unsigned __int64)(v150 >> (v19 & 0x1F)) >> 32;
              v112 = (unsigned __int8)v102;
              v103 = v145 >> v19;
              if ( v19 & 0x20 )
                v103 = SHIDWORD(v145) >> v19;
              dword_6FBB5058(
                dword_6FBB5068 + 2 * v101,
                dword_6FBB505C + 4 * v101,
                v155,
                v137,
                (unsigned __int8)v103,
                v112,
                v119,
                0,
                0);
            }
          }
          v159 += v123;
          v145 += v126;
          v150 += v129;
          v139 += v132;
          ++v155;
          v19 = dword_6FD4098C;
        }
        v40 = v159 >> v19;
        if ( v19 & 0x20 )
          v40 = SHIDWORD(v159) >> v19;
        if ( v40 - v120 < v177 && sub_6F71F0C0(v40) )
        {
          v94 = v139 >> (v19 & 0x1F);
          if ( v19 & 0x20 )
            LOBYTE(v94) = (unsigned __int64)(v139 >> (v19 & 0x1F)) >> 32;
          v117 = (unsigned __int8)v94;
          v95 = (unsigned __int64)v150 >> v19;
          if ( v19 & 0x20 )
            v95 = SHIDWORD(v150) >> v19;
          v110 = (unsigned __int8)v95;
          v96 = v145 >> v19;
          if ( v19 & 0x20 )
            v96 = SHIDWORD(v145) >> v19;
          dword_6FBB5058(
            dword_6FBB5068 + 2 * (v155 + dword_6FBB52F4 * (v40 << 10)),
            dword_6FBB505C + 4 * (v155 + dword_6FBB52F4 * (v40 << 10)),
            v155,
            v40,
            (unsigned __int8)v96,
            v110,
            v117,
            0,
            0);
        }
        v145 += v126;
        v150 += v129;
        v139 += v132;
        ++v155;
        v19 = dword_6FD4098C;
        v41 = (v123 + v159) >> 32;
        v42 = v123 + v159;
      }
      else
      {
LABEL_178:
        v41 = HIDWORD(v159);
        v42 = v159;
      }
      while ( 1 )
      {
        v52 = (signed __int64)__PAIR__(v41, v42) >> (v19 & 0x1F);
        if ( v19 & 0x20 )
          LODWORD(v52) = (unsigned __int64)((signed __int64)__PAIR__(v41, v42) >> (v19 & 0x1F)) >> 32;
        v53 = v52;
        if ( (signed int)v52 - v120 < v177 )
        {
          v136 = v52;
          if ( sub_6F71F0C0(v52) )
          {
            v54 = v155 + dword_6FBB52F4 * (v53 << 10);
            v55 = v139 >> (v19 & 0x1F);
            if ( v19 & 0x20 )
              LOBYTE(v55) = (unsigned __int64)(v139 >> (v19 & 0x1F)) >> 32;
            v113 = (unsigned __int8)v55;
            v56 = v150 >> (v19 & 0x1F);
            if ( v19 & 0x20 )
              LOBYTE(v56) = (unsigned __int64)(v150 >> (v19 & 0x1F)) >> 32;
            v105 = (unsigned __int8)v56;
            v57 = (signed __int64)v145 >> (v19 & 0x1F);
            if ( v19 & 0x20 )
              LOBYTE(v57) = (unsigned __int64)((signed __int64)v145 >> (v19 & 0x1F)) >> 32;
            dword_6FBB5058(
              dword_6FBB5068 + 2 * v54,
              dword_6FBB505C + 4 * v54,
              v155,
              v136,
              (unsigned __int8)v57,
              v105,
              v113,
              0,
              0);
          }
        }
        v160 = v123 + __PAIR__(v41, v42);
        v146 = v126 + v145;
        v151 = v129 + v150;
        LODWORD(v36) = v155 + 1;
        v140 = v132 + v139;
        v135 = v155 + 1;
        if ( v164 == v155 + 1 )
          break;
        v43 = dword_6FD4098C;
        v44 = v160 >> (dword_6FD4098C & 0x1F);
        if ( dword_6FD4098C & 0x20 )
          LODWORD(v44) = (unsigned __int64)(v160 >> (dword_6FD4098C & 0x1F)) >> 32;
        v45 = v44;
        if ( (signed int)v44 - v120 < v177 )
        {
          v157 = v44;
          if ( sub_6F71F0C0(v44) )
          {
            v90 = dword_6FBB52F4 * (v45 << 10);
            v91 = v140 >> v43;
            if ( v43 & 0x20 )
              v91 = SHIDWORD(v140) >> v43;
            v116 = (unsigned __int8)v91;
            v92 = v151 >> v43;
            if ( v43 & 0x20 )
              v92 = SHIDWORD(v151) >> v43;
            v109 = (unsigned __int8)v92;
            v93 = v146 >> v43;
            if ( v43 & 0x20 )
              v93 = SHIDWORD(v146) >> v43;
            dword_6FBB5058(
              dword_6FBB5068 + 2 * (v90 + v135),
              dword_6FBB505C + 4 * (v90 + v135),
              v135,
              v157,
              (unsigned __int8)v93,
              v109,
              v116,
              0,
              0);
          }
        }
        v46 = v123 + v160;
        v147 = v126 + v146;
        v152 = v129 + v151;
        v47 = dword_6FD4098C;
        v141 = v132 + v140;
        v48 = (v123 + v160) >> (dword_6FD4098C & 0x1F);
        if ( dword_6FD4098C & 0x20 )
          LODWORD(v48) = (unsigned __int64)((v123 + v160) >> (dword_6FD4098C & 0x1F)) >> 32;
        v161 = v48;
        if ( (signed int)v48 - v120 < v177 )
        {
          v170 = v48;
          if ( sub_6F71F0C0(v48) )
          {
            v87 = v141 >> (v47 & 0x1F);
            if ( v47 & 0x20 )
              LOBYTE(v87) = (unsigned __int64)(v141 >> (v47 & 0x1F)) >> 32;
            v115 = (unsigned __int8)v87;
            v88 = v152 >> (v47 & 0x1F);
            if ( v47 & 0x20 )
              LOBYTE(v88) = (unsigned __int64)(v152 >> (v47 & 0x1F)) >> 32;
            v108 = (unsigned __int8)v88;
            v89 = v147 >> (v47 & 0x1F);
            if ( v47 & 0x20 )
              LOBYTE(v89) = (unsigned __int64)(v147 >> (v47 & 0x1F)) >> 32;
            dword_6FBB5058(
              dword_6FBB5068 + 2 * (v135 + 1 + dword_6FBB52F4 * (v161 << 10)),
              dword_6FBB505C + 4 * (v135 + 1 + dword_6FBB52F4 * (v161 << 10)),
              v135 + 1,
              v170,
              (unsigned __int8)v89,
              v108,
              v115,
              0,
              0);
          }
        }
        v49 = v123 + v46;
        v148 = v126 + v147;
        v153 = v129 + v152;
        v50 = dword_6FD4098C;
        v142 = v132 + v141;
        v51 = (v123 + v46) >> (dword_6FD4098C & 0x1F);
        if ( dword_6FD4098C & 0x20 )
          LODWORD(v51) = (unsigned __int64)(v49 >> (dword_6FD4098C & 0x1F)) >> 32;
        v162 = v51;
        if ( (signed int)v51 - v120 < v177 )
        {
          v169 = v51;
          if ( sub_6F71F0C0(v51) )
          {
            v84 = v142 >> (v50 & 0x1F);
            if ( v50 & 0x20 )
              LOBYTE(v84) = (unsigned __int64)(v142 >> (v50 & 0x1F)) >> 32;
            v114 = (unsigned __int8)v84;
            v85 = v153 >> (v50 & 0x1F);
            if ( v50 & 0x20 )
              LOBYTE(v85) = (unsigned __int64)(v153 >> (v50 & 0x1F)) >> 32;
            v107 = (unsigned __int8)v85;
            v86 = v148 >> (v50 & 0x1F);
            if ( v50 & 0x20 )
              LOBYTE(v86) = (unsigned __int64)(v148 >> (v50 & 0x1F)) >> 32;
            dword_6FBB5058(
              dword_6FBB5068 + 2 * (v135 + 2 + dword_6FBB52F4 * (v162 << 10)),
              dword_6FBB505C + 4 * (v135 + 2 + dword_6FBB52F4 * (v162 << 10)),
              v135 + 2,
              v169,
              (unsigned __int8)v86,
              v107,
              v114,
              0,
              0);
          }
        }
        v41 = (unsigned __int64)(v123 + v49) >> 32;
        v42 = v123 + v49;
        v145 = v126 + v148;
        v150 = v129 + v153;
        v139 = v132 + v142;
        v19 = dword_6FD4098C;
        v155 = v135 + 3;
      }
    }
  }
  return v36;
}
