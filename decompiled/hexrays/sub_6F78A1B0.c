int __usercall sub_6F78A1B0@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // edx@1
  int v3; // edi@1
  signed int v4; // eax@1
  bool v5; // zf@1
  _BYTE *v6; // esi@2
  signed int v7; // ecx@2
  const char *v8; // edi@2
  int *v9; // esi@7
  unsigned int v10; // ebp@7
  int v11; // edi@8
  size_t v12; // edi@8
  int *v13; // edx@14
  int *v14; // eax@14
  bool v15; // zf@16
  bool v16; // zf@18
  const char *v17; // edi@19
  signed int v18; // ecx@19
  int *v19; // esi@19
  int v20; // eax@23
  int v21; // esi@23
  unsigned int v22; // ebx@24
  int v23; // ST40_4@26
  const char *v24; // ebp@26
  unsigned int v25; // ebx@26
  const char *v26; // edx@26
  bool v27; // zf@29
  const char *v28; // edi@30
  signed int v29; // ecx@30
  _BYTE *v30; // esi@30
  bool v31; // zf@37
  const char *v32; // edi@38
  signed int v33; // ecx@38
  _BYTE *v34; // esi@38
  const char *v35; // edi@42
  signed int v36; // ecx@42
  const char *v37; // esi@42
  _BYTE *v38; // ebp@46
  unsigned int v39; // ebx@47
  unsigned int v40; // eax@48
  bool v41; // zf@51
  const char *v42; // edi@52
  signed int v43; // ecx@52
  _BYTE *v44; // esi@52
  const char *v45; // esi@64
  char **v46; // edi@64
  char v47; // dl@64
  unsigned int v48; // ebp@64
  unsigned int v49; // ebx@64
  char v50; // ST2C_1@67
  size_t v51; // eax@67
  signed int v52; // eax@70
  char *v53; // edx@73
  unsigned int v54; // ecx@74
  int v55; // eax@77
  const char *v57; // edi@91
  signed int v58; // ecx@91
  int *v59; // esi@91
  int v60; // eax@95
  _DWORD *v61; // eax@102
  int v62; // edx@104
  int v63; // eax@104
  char *v64; // edi@105
  int v65; // ebx@105
  char *v66; // eax@105
  int v67; // esi@105
  char *v68; // ebp@105
  int v69; // ebx@107
  unsigned int v70; // edx@108
  int j; // esi@108
  unsigned int v72; // esi@114
  int v73; // ecx@114
  int v74; // ebx@116
  int v75; // eax@116
  unsigned int v76; // eax@119
  signed int v77; // edx@121
  int v78; // esi@124
  char *v79; // edx@124
  int v80; // eax@129
  unsigned int v81; // ebx@131
  int v82; // ST04_4@132
  int v83; // eax@132
  int v84; // ebx@142
  int v85; // esi@143
  int *v86; // eax@143
  bool v87; // sf@145
  unsigned __int8 v88; // of@145
  __int32 v89; // eax@149
  _BYTE *v90; // ebx@153
  int v91; // edi@154
  int v92; // esi@154
  char *v93; // ebp@156
  char v94; // al@157
  char v95; // dl@157
  char v96; // al@159
  int v97; // esi@159
  int v98; // edx@164
  int v99; // eax@169
  int v100; // esi@169
  size_t v101; // eax@169
  int i; // [sp+24h] [bp-1C8h]@7
  unsigned int v103; // [sp+24h] [bp-1C8h]@26
  unsigned int v104; // [sp+24h] [bp-1C8h]@46
  unsigned int v105; // [sp+24h] [bp-1C8h]@107
  int *v106; // [sp+24h] [bp-1C8h]@156
  int v107; // [sp+28h] [bp-1C4h]@1
  int v108; // [sp+2Ch] [bp-1C0h]@1
  char v109; // [sp+2Ch] [bp-1C0h]@114
  char v110; // [sp+2Ch] [bp-1C0h]@156
  int v111; // [sp+30h] [bp-1BCh]@1
  unsigned int v112; // [sp+30h] [bp-1BCh]@46
  int v113; // [sp+30h] [bp-1BCh]@105
  unsigned int v114; // [sp+30h] [bp-1BCh]@155
  int v115; // [sp+34h] [bp-1B8h]@1
  int v116; // [sp+34h] [bp-1B8h]@105
  unsigned int v117; // [sp+38h] [bp-1B4h]@1
  int v118; // [sp+38h] [bp-1B4h]@108
  unsigned int v119; // [sp+3Ch] [bp-1B0h]@23
  unsigned int v120; // [sp+3Ch] [bp-1B0h]@64
  signed int v121; // [sp+3Ch] [bp-1B0h]@109
  unsigned int v122; // [sp+40h] [bp-1ACh]@110
  int v123; // [sp+44h] [bp-1A8h]@107
  int v124; // [sp+48h] [bp-1A4h]@105
  char *v125; // [sp+4Ch] [bp-1A0h]@114
  int v126; // [sp+58h] [bp-194h]@46
  unsigned int v127; // [sp+5Ch] [bp-190h]@1
  _BYTE *v128; // [sp+60h] [bp-18Ch]@26
  unsigned int v129; // [sp+64h] [bp-188h]@26
  int v130; // [sp+68h] [bp-184h]@27
  void (__cdecl *v131)(unsigned int *); // [sp+74h] [bp-178h]@89
  void (__cdecl *v132)(unsigned int *); // [sp+78h] [bp-174h]@26
  void (__cdecl *v133)(unsigned int *); // [sp+7Ch] [bp-170h]@26
  int (__cdecl *v134)(unsigned int *, char **, int *, _DWORD, _DWORD); // [sp+9Ch] [bp-150h]@79
  int (__cdecl *v135)(unsigned int *, char **, int *, _DWORD, _DWORD); // [sp+A0h] [bp-14Ch]@180
  int v136; // [sp+A4h] [bp-148h]@1
  _BYTE *v137; // [sp+A8h] [bp-144h]@25
  int v138; // [sp+ACh] [bp-140h]@26
  unsigned int v139; // [sp+B0h] [bp-13Ch]@26
  __int32 v140; // [sp+B4h] [bp-138h]@103
  int v141; // [sp+BCh] [bp-130h]@26
  int v142; // [sp+C4h] [bp-128h]@7
  char v143; // [sp+CEh] [bp-11Eh]@96

  v107 = a1;
  v117 = a2;
  v2 = *(_DWORD *)(a1 + 100);
  v115 = *(_DWORD *)(a1 + 100);
  memset(&v127, 0, 0x68u);
  v3 = *(_DWORD *)(a1 + 104);
  v108 = *(_DWORD *)(a1 + 104);
  (**(void (__cdecl ***)(unsigned int *, _DWORD, _DWORD, int))(*(_DWORD *)(a1 + 136) + 4))(&v127, 0, 0, v2);
  v136 = v3;
  v111 = sub_6F7720A0(v3);
  v4 = sub_6F772380(v3, 0x1Fu);
  v5 = v4 == 0;
  if ( v4 )
    goto LABEL_86;
  v6 = *(_BYTE **)(v3 + 32);
  v7 = 31;
  v8 = "%!PS-Adobe-3.0 Resource-CIDFont";
  do
  {
    if ( !v7 )
      break;
    v5 = *v6++ == *v8++;
    --v7;
  }
  while ( v5 );
  if ( !v5 )
  {
    sub_6F772460(v108);
    v4 = 2;
    goto LABEL_86;
  }
  sub_6F772460(v108);
  while ( 1 )
  {
    v9 = &v142;
    v10 = 266;
    for ( i = sub_6F7720A0(v108); ; i += 256 )
    {
      v11 = *(_DWORD *)(v108 + 4);
      v12 = v11 - sub_6F7720A0(v108);
      if ( !v12 )
        goto LABEL_152;
      if ( v12 > v10 )
        v12 = v10;
      v4 = sub_6F7720B0(v108, v9, v12);
      if ( v4 )
        goto LABEL_86;
      if ( v12 <= 0xFF )
        *((_BYTE *)v9 + v12) = 0;
      v13 = (int *)((char *)v9 + v12 - 10);
      v14 = &v142;
      if ( v13 > &v142 )
        break;
      v13 = &v142;
LABEL_96:
      v10 = 256;
      v9 = (int *)&v143;
      memmove(&v142, v13, 0xAu);
    }
    while ( 1 )
    {
      v16 = *(_BYTE *)v14 == 83;
      if ( *(_BYTE *)v14 == 83 )
      {
        v17 = "StartData";
        v18 = 9;
        v19 = v14;
        do
        {
          if ( !v18 )
            break;
          v16 = *(_BYTE *)v19 == *v17;
          v19 = (int *)((char *)v19 + 1);
          ++v17;
          --v18;
        }
        while ( v16 );
        if ( v16 )
        {
          v20 = (char *)v14 - (char *)&v142;
          v119 = i + v20 + 10;
          v21 = i + v20 + 10;
          goto LABEL_24;
        }
      }
      v15 = *((_BYTE *)v14 + 1) == 115;
      if ( *((_BYTE *)v14 + 1) == 115 )
      {
        v57 = "/sfnts";
        v58 = 6;
        v59 = v14;
        do
        {
          if ( !v58 )
            break;
          v15 = *(_BYTE *)v59 == *v57;
          v59 = (int *)((char *)v59 + 1);
          ++v57;
          --v58;
        }
        while ( v15 );
        if ( v15 )
          break;
      }
      v14 = (int *)((char *)v14 + 1);
      if ( v13 == v14 )
        goto LABEL_96;
    }
    v60 = (char *)v14 - (char *)&v142;
    v119 = i + v60 + 7;
    v21 = i + v60 + 7;
LABEL_24:
    v22 = v21 - v111;
    v4 = sub_6F771FF0(v108, v111);
    if ( v4 )
      goto LABEL_86;
    v4 = sub_6F772240(v108, v22, (int *)&v137);
    if ( v4 )
      goto LABEL_86;
    v138 = v21 - v111;
    v139 = v21;
    v141 = -1;
    v128 = v137;
    v127 = (unsigned int)v137;
    v23 = (int)v137;
    v129 = (unsigned int)&v137[v22];
    v133(&v127);
    v132(&v127);
    v24 = (const char *)v127;
    v133(&v127);
    v132(&v127);
    v25 = v127;
    v26 = (const char *)v23;
    v103 = v129;
    if ( v129 > v127 )
      break;
LABEL_136:
    sub_6F772340(v108, &v137);
    v4 = sub_6F771FF0(v108, v119);
    if ( v4 )
      goto LABEL_86;
  }
  v4 = v130;
  if ( v130 )
    goto LABEL_86;
  while ( 1 )
  {
    v31 = *(_BYTE *)v25 == 83;
    if ( *(_BYTE *)v25 == 83 )
    {
      v32 = "StartData";
      v33 = 9;
      v34 = (_BYTE *)v25;
      do
      {
        if ( !v33 )
          break;
        v31 = *v34++ == *v32++;
        --v33;
      }
      while ( v31 );
      if ( v31 )
        break;
    }
    v27 = *(_BYTE *)(v25 + 1) == 115;
    if ( *(_BYTE *)(v25 + 1) == 115 )
    {
      v28 = "/sfnts";
      v29 = 6;
      v30 = (_BYTE *)v25;
      do
      {
        if ( !v29 )
          break;
        v27 = *v30++ == *v28++;
        --v29;
      }
      while ( v27 );
      if ( v27 )
      {
        v4 = 2;
        goto LABEL_86;
      }
    }
    v133(&v127);
    v132(&v127);
    if ( v103 <= v127 )
      goto LABEL_136;
    v4 = v130;
    v26 = v24;
    v24 = (const char *)v25;
    if ( v130 )
      goto LABEL_86;
    v25 = v127;
  }
  v35 = "(Hex)";
  v36 = 5;
  v37 = v26;
  do
  {
    if ( !v36 )
      break;
    v31 = *v37++ == *v35++;
    --v36;
  }
  while ( v31 );
  if ( v31 )
  {
    v89 = atol(v24);
    if ( v89 < 0 )
    {
LABEL_152:
      v4 = 3;
      goto LABEL_86;
    }
    v140 = v89;
  }
  v38 = v137;
  v126 = 0;
  v130 = 0;
  v104 = (unsigned int)&v137[v138];
  v129 = (unsigned int)&v137[v138];
  v112 = (unsigned int)&v137[v138 - 18];
LABEL_47:
  while ( 1 )
  {
    v127 = (unsigned int)v38;
    v132(&v127);
    v39 = v127;
    if ( v104 <= v127 )
      break;
    v40 = v127 - 17;
    if ( (unsigned int)v38 < v127 - 17 )
      goto LABEL_51;
LABEL_59:
    v133(&v127);
    if ( v104 <= v127 )
      goto LABEL_100;
    v4 = v130;
    if ( v130 )
      goto LABEL_86;
    v38 = (_BYTE *)v127;
    if ( *(_BYTE *)v39 == 47 && v104 > v39 + 2 && v127 - (v39 + 1) - 1 <= 0x14 )
    {
      v120 = v127;
      v45 = "CIDFontName";
      v46 = &off_6FB57A00;
      v47 = *(_BYTE *)(v39 + 1);
      v48 = v39;
      v49 = v127 - (v39 + 1);
      while ( 1 )
      {
        if ( *v45 == v47 )
        {
          v50 = v47;
          v51 = strlen(v45);
          v47 = v50;
          if ( v49 == v51 )
          {
            if ( v49 <= 1 )
              goto LABEL_73;
            if ( *(_BYTE *)(v48 + 2) == v45[1] )
              break;
          }
        }
LABEL_65:
        v46 += 9;
        v45 = *v46;
        if ( !*v46 )
        {
          v38 = (_BYTE *)v120;
          goto LABEL_47;
        }
      }
      v52 = 1;
      while ( v49 != ++v52 )
      {
        if ( *(_BYTE *)(v48 + v52 + 1) != v45[v52] )
          goto LABEL_65;
      }
LABEL_73:
      v53 = v46[2];
      if ( v53 == (char *)11 )
      {
        ((void (__cdecl *)(int, int *))v46[3])(v107, (int *)&v127);
        v4 = v130;
        goto LABEL_80;
      }
      v54 = (unsigned int)v46[1];
      if ( v54 == 2 )
      {
        v55 = v107 + 312;
        goto LABEL_78;
      }
      if ( v54 <= 2 )
      {
        v55 = v107 + 140;
        if ( !v54 )
          goto LABEL_78;
      }
      else
      {
        if ( v54 == 3 )
        {
          v55 = v107 + 164;
          goto LABEL_78;
        }
        v55 = v107 + 196;
        if ( v54 == 5 )
          goto LABEL_78;
      }
      if ( v141 < 0 || v141 >= *(_DWORD *)(v107 + 300) )
      {
        v130 = 160;
        v4 = 160;
LABEL_86:
        v126 = v4;
        goto LABEL_87;
      }
      v55 = *(_DWORD *)(v107 + 304) + 252 * v141;
LABEL_78:
      v142 = v55;
      if ( (unsigned int)(v53 - 9) <= 1 )
        v4 = v135(&v127, v46, &v142, 0, 0);
      else
        v4 = v134(&v127, v46, &v142, 0, 0);
LABEL_80:
      v130 = v4;
      if ( v4 )
        goto LABEL_86;
      v38 = (_BYTE *)v127;
    }
  }
  v40 = v112;
  if ( (unsigned int)v38 >= v112 )
    goto LABEL_100;
  do
  {
LABEL_51:
    while ( 1 )
    {
      v41 = *v38 == 37;
      if ( *v38 == 37 )
      {
        v42 = "%ADOBeginFontDict";
        v43 = 17;
        v44 = v38;
        do
        {
          if ( !v43 )
            break;
          v41 = *v44++ == *v42++;
          --v43;
        }
        while ( v41 );
        if ( v41 && *(_DWORD *)(v107 + 300) > 0 )
          break;
      }
      if ( (unsigned int)++v38 >= v40 )
        goto LABEL_58;
    }
    ++v38;
    ++v141;
  }
  while ( (unsigned int)v38 < v40 );
LABEL_58:
  if ( v104 > v127 )
    goto LABEL_59;
LABEL_100:
  v126 = v130;
  if ( v130 )
    goto LABEL_87;
  if ( v117 >> 31 )
    goto LABEL_87;
  v61 = sub_6F773A50(v115, 40, &v126);
  v5 = v126 == 0;
  *(_DWORD *)(v107 + 328) = v61;
  if ( !v5 )
    goto LABEL_87;
  if ( v140 )
  {
    v90 = sub_6F773A50(v115, v140, &v126);
    v5 = v126 == 0;
    *(_DWORD *)(v107 + 324) = v90;
    if ( !v5 )
      goto LABEL_87;
    v91 = *(_DWORD *)(v107 + 104);
    v92 = v140;
    if ( sub_6F771FF0(*(_DWORD *)(v107 + 104), v139) )
      goto LABEL_87;
    v114 = (unsigned int)&v90[v92];
    if ( v90 >= &v90[v92] )
    {
LABEL_179:
      sub_6F771FA0(*(_DWORD *)(v107 + 328), *(_DWORD *)(v107 + 324), v140);
      *(_DWORD *)(v107 + 308) = 0;
      v63 = v107;
      goto LABEL_105;
    }
    v93 = (char *)&v142;
    v110 = 1;
    v106 = &v142;
    while ( 1 )
    {
      if ( v106 >= (int *)v93 )
      {
        v99 = sub_6F7720A0(v91);
        v100 = v99;
        v101 = *(_DWORD *)(v91 + 4) - v99;
        if ( !v101 )
          goto LABEL_87;
        if ( v101 > 0x100 )
          v101 = 256;
        if ( sub_6F7720B0(v91, &v142, v101) )
          goto LABEL_87;
        v93 = (char *)&v142 + sub_6F7720A0(v91) - v100;
        v106 = &v142;
      }
      v98 = *(_BYTE *)v106;
      if ( (unsigned int)(v98 - 48) <= 9 )
      {
        v94 = v98 - 48;
        v95 = 0;
      }
      else
      {
        v94 = v98 - 97;
        if ( (unsigned __int8)(v98 - 97) <= 5u )
        {
          v95 = 0;
        }
        else if ( (unsigned __int8)(v98 - 65) > 5u )
        {
          if ( (unsigned __int8)(v98 - 9) <= 1u || (unsigned __int8)(v98 - 12) <= 1u || !(v98 & 0xDF) )
          {
            v106 = (int *)((char *)v106 + 1);
            goto LABEL_162;
          }
          if ( (_BYTE)v98 != 62 )
            goto LABEL_87;
          v95 = 1;
          v94 = 0;
        }
        else
        {
          v94 = v98 - 55;
          v95 = 0;
        }
      }
      if ( v110 )
      {
        v96 = 16 * v94;
        v97 = (int)v90;
      }
      else
      {
        v96 = *v90 + v94;
        v97 = (int)(v90 + 1);
      }
      *v90 = v96;
      v110 = 1 - v110;
      if ( v95 )
        goto LABEL_179;
      v106 = (int *)((char *)v106 + 1);
      v90 = (_BYTE *)v97;
LABEL_162:
      if ( v114 <= (unsigned int)v90 )
        goto LABEL_179;
    }
  }
  v62 = *(_DWORD *)(v107 + 104);
  *v61 = *(_DWORD *)v62;
  v61[1] = *(_DWORD *)(v62 + 4);
  v61[2] = *(_DWORD *)(v62 + 8);
  v61[3] = *(_DWORD *)(v62 + 12);
  v61[4] = *(_DWORD *)(v62 + 16);
  v61[5] = *(_DWORD *)(v62 + 20);
  v61[6] = *(_DWORD *)(v62 + 24);
  v61[7] = *(_DWORD *)(v62 + 28);
  v61[8] = *(_DWORD *)(v62 + 32);
  v61[9] = *(_DWORD *)(v62 + 36);
  *(_DWORD *)(v107 + 308) = v139;
  v63 = v107;
LABEL_105:
  v64 = 0;
  v116 = *(_DWORD *)(v63 + 328);
  v113 = *(_DWORD *)(v63 + 100);
  v124 = *(_DWORD *)(v63 + 136);
  v65 = v63;
  v66 = sub_6F773B30(v113, 8, 0, *(_DWORD *)(v63 + 300), 0, &v142);
  v67 = v142;
  v68 = v66;
  *(_DWORD *)(v65 + 316) = v66;
  if ( !v67 && *(_DWORD *)(v65 + 300) > 0 )
  {
    v69 = *(_DWORD *)(v107 + 304);
    v123 = *(_DWORD *)(v69 + 4);
    v105 = *(_DWORD *)(v69 + 240);
    if ( *(_DWORD *)(v69 + 240) != -1 )
    {
      v70 = 0;
      v118 = 0;
      for ( j = *(_DWORD *)(v69 + 240); ; j = *(_DWORD *)(v69 + 240) )
      {
        v121 = j + 1;
        if ( j + 1 <= v70 )
        {
          v122 = v70;
        }
        else
        {
          v122 = (j + 4) & 0xFFFFFFFC;
          if ( v122 <= v70 )
          {
            v142 = 160;
            v66 = *(char **)(v107 + 316);
            goto LABEL_140;
          }
          v64 = sub_6F773B30(v113, 4, v70, v122, v64, &v142);
          if ( v142 )
            goto LABEL_139;
        }
        v142 = sub_6F771FF0(v116, *(_DWORD *)(v107 + 308) + *(_DWORD *)(v69 + 244));
        if ( v142 )
          goto LABEL_139;
        v142 = sub_6F772380(v116, *(_DWORD *)(v69 + 248) * v121);
        if ( v142 )
          goto LABEL_139;
        v125 = v68;
        v72 = 0;
        v73 = *(_DWORD *)(v116 + 32);
        v109 = *(_BYTE *)(v69 + 248);
        do
        {
          if ( v109 )
          {
            v74 = v73 + (unsigned __int8)(v109 - 1) + 1;
            v75 = 0;
            do
              v75 = *(_BYTE *)(++v73 - 1) | (v75 << 8);
            while ( v73 != v74 );
          }
          else
          {
            v75 = 0;
          }
          *(_DWORD *)&v64[4 * v72++] = v75;
        }
        while ( v72 <= v105 );
        sub_6F772460(v116);
        v76 = *(_DWORD *)v64;
        if ( v105 )
        {
          if ( v76 > *((_DWORD *)v64 + 1) )
            goto LABEL_139;
          v77 = 1;
          while ( v121 != ++v77 )
          {
            if ( *(_DWORD *)&v64[4 * v77 - 4] > *(_DWORD *)&v64[4 * v77] )
              goto LABEL_139;
          }
        }
        v78 = *(_DWORD *)&v64[4 * v105] - v76;
        v79 = sub_6F773B30(v113, 4, 0, v121, 0, &v142);
        *((_DWORD *)v68 + 1) = v79;
        if ( v142
          || (*(_DWORD *)v79 = sub_6F773A50(v113, v78, &v142), v142)
          || (v142 = sub_6F771FF0(v116, *(_DWORD *)(v107 + 308) + *(_DWORD *)v64)) != 0
          || (v142 = sub_6F7720B0(v116, **((void ***)v68 + 1), v78)) != 0 )
        {
LABEL_139:
          v66 = *(char **)(v107 + 316);
          goto LABEL_140;
        }
        if ( v105 )
        {
          v80 = 0;
          do
          {
            *(_DWORD *)(*((_DWORD *)v68 + 1) + v80 + 4) = *(_DWORD *)(*((_DWORD *)v68 + 1) + v80)
                                                        + *(_DWORD *)&v64[v80 + 4]
                                                        - *(_DWORD *)&v64[v80];
            v80 += 4;
          }
          while ( 4 * v105 != v80 );
          v81 = 0;
          if ( v123 >= 0 )
          {
            do
            {
              v82 = *(_DWORD *)&v64[4 * v81 + 4] - *(_DWORD *)&v64[4 * v81];
              v83 = *(_DWORD *)(*((_DWORD *)v68 + 1) + 4 * v81++);
              (*(void (__cdecl **)(int, int, signed int))(v124 + 16))(v83, v82, 4330);
            }
            while ( v105 > v81 );
          }
        }
        v68 += 8;
        ++v118;
        *(_DWORD *)v125 = v105;
        if ( v118 >= *(_DWORD *)(v107 + 300) )
          goto LABEL_147;
        v69 = *(_DWORD *)(v107 + 304) + 252 * v118;
        v123 = *(_DWORD *)(v69 + 4);
        v105 = *(_DWORD *)(v69 + 240);
        if ( *(_DWORD *)(v69 + 240) == -1 )
          break;
        v70 = v122;
      }
      v66 = *(char **)(v107 + 316);
    }
    v142 = 160;
LABEL_140:
    if ( v66 )
    {
      if ( *(_DWORD *)(v107 + 300) > 0 )
      {
        v84 = 0;
        do
        {
          v85 = 8 * v84;
          v86 = *(int **)&v66[8 * v84 + 4];
          if ( v86 )
          {
            sub_6F773D90(v113, *v86);
            **(_DWORD **)(*(_DWORD *)(v107 + 316) + v85 + 4) = 0;
            v86 = *(int **)(*(_DWORD *)(v107 + 316) + v85 + 4);
          }
          ++v84;
          sub_6F773D90(v113, (int)v86);
          v88 = __OFSUB__(v84, *(_DWORD *)(v107 + 300));
          v87 = v84 - *(_DWORD *)(v107 + 300) < 0;
          v66 = *(char **)(v107 + 316);
          *(_DWORD *)&v66[v85 + 4] = 0;
        }
        while ( v87 ^ v88 );
      }
      sub_6F773D90(v113, (int)v66);
      *(_DWORD *)(v107 + 316) = 0;
    }
  }
LABEL_147:
  sub_6F773D90(v113, (int)v64);
  v126 = v142;
LABEL_87:
  if ( v137 )
    sub_6F772340(v136, &v137);
  v131(&v127);
  return v126;
}
