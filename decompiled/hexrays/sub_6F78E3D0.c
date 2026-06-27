signed int __cdecl sub_6F78E3D0(int a1, int a2, int a3)
{
  int v3; // esi@1
  int v4; // ebx@1
  signed int result; // eax@1
  int v6; // eax@4
  int v7; // edx@9
  int v8; // edi@12
  unsigned int v9; // edx@13
  int v10; // edx@17
  int v11; // ecx@20
  int v12; // eax@21
  int v13; // edx@22
  int v14; // edx@26
  bool v15; // zf@32
  int v16; // edx@32
  int v17; // edx@34
  int v18; // edx@36
  __int16 v19; // cx@37
  _BYTE *v20; // edx@40
  int i; // eax@41
  int v22; // ecx@49
  int v23; // ecx@53
  unsigned int v24; // eax@53
  unsigned int v25; // edi@53
  int v26; // eax@55
  unsigned int v27; // ecx@55
  int v28; // edi@55
  int v29; // ecx@60
  int v30; // edx@61
  char *v31; // eax@68
  unsigned __int16 v32; // si@69
  unsigned int v33; // edi@71
  unsigned __int16 v34; // dx@71
  int v35; // edx@73
  int v36; // esi@76
  int v37; // edx@76
  int v38; // edx@76
  int v39; // eax@77
  int v40; // eax@78
  int v41; // ecx@78
  signed int v42; // esi@81
  int v43; // ecx@83
  int v44; // eax@85
  int v45; // edx@85
  int v46; // eax@85
  int v47; // edx@89
  int v48; // eax@91
  int v49; // eax@93
  int v50; // edi@93
  int v51; // ecx@93
  int v52; // eax@93
  int v53; // edx@102
  int v54; // eax@102
  int j; // esi@102
  char *v56; // eax@107
  char *v57; // edx@107
  int v58; // edi@108
  int v59; // ebx@108
  int v60; // eax@109
  int v61; // ecx@109
  int v62; // eax@110
  _DWORD *v63; // ecx@111
  size_t v64; // edx@111
  int v65; // edx@115
  int v66; // eax@116
  int v67; // eax@120
  unsigned int v68; // edi@120
  char *v69; // eax@121
  unsigned int v70; // edx@122
  int v71; // ecx@122
  signed int v72; // eax@126
  signed int v73; // ecx@126
  int v74; // eax@126
  char *v75; // eax@126
  char *v76; // edi@126
  int v77; // eax@127
  unsigned __int8 v78; // dl@129
  int v79; // eax@129
  bool v80; // cf@129
  unsigned __int8 v81; // cl@129
  int v82; // edx@129
  int *v83; // edi@130
  int v84; // ecx@133
  int v85; // eax@133
  __int16 v86; // ax@135
  __int16 v87; // dx@135
  int v88; // eax@135
  int v89; // ecx@136
  int v90; // eax@137
  int v91; // edx@137
  int v92; // ecx@139
  int v93; // ecx@143
  unsigned int v94; // ebx@144
  void *v95; // eax@146
  int (__cdecl *v96)(int, unsigned int, int); // edx@148
  unsigned int v97; // [sp+28h] [bp-54h]@16
  char v98; // [sp+28h] [bp-54h]@21
  int v99; // [sp+28h] [bp-54h]@53
  __int16 v100; // [sp+28h] [bp-54h]@93
  unsigned int v101; // [sp+28h] [bp-54h]@130
  int v102; // [sp+2Ch] [bp-50h]@21
  unsigned int v103; // [sp+2Ch] [bp-50h]@53
  unsigned int v104; // [sp+2Ch] [bp-50h]@93
  unsigned int v105; // [sp+2Ch] [bp-50h]@126
  unsigned int v106; // [sp+30h] [bp-4Ch]@20
  unsigned int v107; // [sp+30h] [bp-4Ch]@55
  int v108; // [sp+30h] [bp-4Ch]@83
  unsigned __int8 v109; // [sp+34h] [bp-48h]@56
  unsigned __int16 v110; // [sp+34h] [bp-48h]@93
  char v111; // [sp+34h] [bp-48h]@129
  unsigned int v112; // [sp+38h] [bp-44h]@61
  unsigned int v113; // [sp+38h] [bp-44h]@120
  int v114; // [sp+38h] [bp-44h]@125
  int v115; // [sp+38h] [bp-44h]@142
  _BYTE *v116; // [sp+3Ch] [bp-40h]@62
  char v117; // [sp+3Ch] [bp-40h]@127
  int v118; // [sp+3Ch] [bp-40h]@141
  char v119; // [sp+40h] [bp-3Ch]@56
  unsigned __int8 v120; // [sp+44h] [bp-38h]@129
  unsigned __int8 v121; // [sp+48h] [bp-34h]@129
  int v122; // [sp+50h] [bp-2Ch]@4
  int v123; // [sp+54h] [bp-28h]@8
  int v124; // [sp+58h] [bp-24h]@98
  __int16 v125; // [sp+5Ch] [bp-20h]@98
  __int16 v126; // [sp+5Eh] [bp-1Eh]@98
  int v127; // [sp+84h] [bp+8h]@108

  v3 = a1;
  v4 = a2;
  result = sub_6F771FF0(a1, 0);
  if ( result )
    return result;
  result = sub_6F7728E0(a1, (int)&unk_6FB585A0, a2 + 132);
  if ( result )
    return result;
  v6 = *(_DWORD *)(a2 + 204);
  v122 = 0;
  *(_DWORD *)(a2 + 168) += v6 << 16;
  result = 2;
  if ( *(_DWORD *)(a2 + 132) != 1346785840 )
    return result;
  if ( *(_DWORD *)(a2 + 136) > 4u )
    return result;
  if ( *(_DWORD *)(a2 + 144) <= 0x39u )
    return result;
  if ( *(_DWORD *)(a2 + 140) != 3338 )
    return result;
  result = sub_6F771FF0(a1, *(_DWORD *)(a2 + 152));
  v123 = result;
  if ( result )
    return result;
  v7 = (unsigned __int16)sub_6F772620(a1, &v123);
  result = v123;
  if ( v123 )
    return result;
  v122 = 0;
  *(_DWORD *)a2 = v7;
  if ( a3 < 0 )
    return result;
  result = 6;
  if ( a3 >= v7 )
    return result;
  v8 = *(_DWORD *)(a2 + 204);
  result = sub_6F771FF0(a1, *(_DWORD *)(a2 + 152));
  v123 = result;
  if ( result )
    return result;
  v9 = (unsigned __int16)sub_6F772620(a1, &v123);
  result = v123;
  if ( v123 )
    return result;
  result = 6;
  if ( a3 >= v9 )
    return result;
  result = sub_6F772040(a1, 5 * a3);
  v123 = result;
  if ( result )
    return result;
  LOWORD(v97) = sub_6F772620(a1, &v123);
  result = v123;
  if ( v123 )
    return result;
  v10 = sub_6F772740(a1, &v123);
  result = v123;
  if ( v123 )
    return result;
  *(_DWORD *)(a2 + 244) = v10;
  *(_DWORD *)(a2 + 240) = (unsigned __int16)v97;
  v97 = (unsigned __int16)v97;
  result = sub_6F771FF0(a1, v10);
  v123 = result;
  if ( result )
    return result;
  result = sub_6F772380(a1, v97);
  v123 = result;
  if ( result )
    return result;
  v11 = *(_DWORD *)(a1 + 32);
  v106 = v11 + v97;
  if ( v11 + v97 < v11 + 13 )
    goto LABEL_158;
  v102 = 0;
  *(_DWORD *)(a2 + 248) = *(_BYTE *)(*(_DWORD *)(a1 + 32) + 2) | (**(_BYTE **)(a1 + 32) << 16) | (*(_BYTE *)(*(_DWORD *)(a1 + 32) + 1) << 8);
  *(_DWORD *)(a2 + 252) = *(_BYTE *)(v11 + 5) | (*(_BYTE *)(v11 + 3) << 16) | (*(_BYTE *)(v11 + 4) << 8);
  *(_DWORD *)(a2 + 256) = *(_BYTE *)(v11 + 8) | (*(_BYTE *)(v11 + 6) << 16) | (*(_BYTE *)(v11 + 7) << 8);
  *(_DWORD *)(a2 + 260) = *(_BYTE *)(v11 + 11) | (*(_BYTE *)(v11 + 9) << 16) | (*(_BYTE *)(v11 + 10) << 8);
  v12 = v11 + 13;
  v98 = *(_BYTE *)(v11 + 12);
  if ( v98 & 4 )
  {
    v13 = 2 - ((v98 & 8u) < 1);
    if ( !(v98 & 3) )
      v13 += 3;
    v102 = v13;
  }
  if ( v98 & 0x10 )
  {
    v14 = v102 + 2;
    if ( !(v98 & 0x20) )
      v14 = v102 + 1;
    v102 = v14;
  }
  if ( v106 < v11 + 13 + v102 )
    goto LABEL_158;
  if ( v98 & 4 )
  {
    if ( v98 & 8 )
    {
      v12 = v11 + 15;
      v15 = (*(_BYTE *)(v11 + 14) | (*(_BYTE *)(v11 + 13) << 8)) == 0;
      v16 = (signed __int16)_byteswap_ushort(*(_WORD *)(v11 + 13));
    }
    else
    {
      v12 = v11 + 14;
      v16 = *(_BYTE *)(v11 + 13);
    }
    *(_DWORD *)(a2 + 268) = v16;
    if ( !(v98 & 3) )
    {
      v17 = *(_BYTE *)v12;
      v12 += 3;
      *(_DWORD *)(a2 + 276) = *(_BYTE *)(v12 - 1) | (v17 << 16) | (*(_BYTE *)(v12 - 2) << 8);
    }
  }
  if ( v98 & 0x10 )
  {
    v18 = *(_BYTE *)v12;
    if ( v98 & 0x20 )
    {
      v19 = *(_BYTE *)(v12 + 1);
      v12 += 2;
      v18 = (signed __int16)(v19 | ((_WORD)v18 << 8));
    }
    else
    {
      ++v12;
    }
    *(_DWORD *)(a2 + 272) = v18;
  }
  if ( v98 & 0x40 )
  {
    v20 = (_BYTE *)(v12 + 1);
    if ( v106 < v12 + 1 )
      goto LABEL_158;
    for ( i = *(_BYTE *)v12; i; --i )
    {
      if ( v106 < (unsigned int)(v20 + 2) )
        goto LABEL_158;
      v20 += *v20 + 2;
      if ( v106 < (unsigned int)v20 )
        goto LABEL_158;
    }
    v123 = 0;
    v12 = (int)v20;
  }
  if ( v106 >= v12 + 5 )
  {
    v22 = _byteswap_ushort(*(_WORD *)v12);
    *(_DWORD *)(a2 + 280) = v22;
    *(_DWORD *)(a2 + 284) = *(_BYTE *)(v12 + 4) | (*(_BYTE *)(v12 + 2) << 16) | (*(_BYTE *)(v12 + 3) << 8);
    if ( !v8 )
      goto LABEL_52;
    if ( v106 >= v12 + 6 )
    {
      *(_DWORD *)(a2 + 280) = (*(_BYTE *)(v12 + 5) << 16) + v22;
      goto LABEL_52;
    }
  }
LABEL_158:
  v123 = 8;
LABEL_52:
  sub_6F772460(a1);
  result = v123;
  v122 = v123;
  if ( v123 )
    return result;
  v23 = *(_DWORD *)(a1 + 28);
  v24 = *(_DWORD *)(a2 + 284);
  v25 = *(_DWORD *)(a2 + 280);
  *(_DWORD *)(a2 + 424) = 0;
  *(_DWORD *)(a2 + 288) = v23;
  *(_DWORD *)(a2 + 292) = v24;
  v103 = v24;
  v99 = v23;
  *(_DWORD *)(a2 + 428) = a2 + 424;
  result = sub_6F771FF0(a1, v24);
  v123 = result;
  if ( result )
    return result;
  result = sub_6F772380(a1, v25);
  v123 = result;
  if ( result )
    return result;
  v26 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 436) = v26;
  v27 = v26 + v25;
  v28 = v26 + 15;
  v107 = v27;
  if ( v27 < v26 + 15 )
    goto LABEL_74;
  *(_DWORD *)(a2 + 296) = _byteswap_ushort(*(_WORD *)v26);
  *(_DWORD *)(a2 + 300) = _byteswap_ushort(*(_WORD *)(v26 + 2));
  *(_DWORD *)(a2 + 304) = _byteswap_ushort(*(_WORD *)(v26 + 4));
  *(_DWORD *)(a2 + 308) = (signed __int16)_byteswap_ushort(*(_WORD *)(v26 + 6));
  *(_DWORD *)(a2 + 312) = (signed __int16)_byteswap_ushort(*(_WORD *)(v26 + 8));
  *(_DWORD *)(a2 + 316) = (signed __int16)_byteswap_ushort(*(_WORD *)(v26 + 10));
  *(_DWORD *)(a2 + 320) = (signed __int16)_byteswap_ushort(*(_WORD *)(v26 + 12));
  v109 = *(_BYTE *)(v26 + 14);
  *(_DWORD *)(a2 + 324) = v109;
  v119 = v109 & 4;
  if ( !(v109 & 4) )
  {
    v28 = v26 + 17;
    if ( v27 < v26 + 17 )
      goto LABEL_74;
    *(_DWORD *)(a2 + 328) = (signed __int16)_byteswap_ushort(*(_WORD *)(v26 + 15));
  }
  if ( (v109 & 0x80u) == 0 )
  {
LABEL_60:
    v29 = v28 + 3;
    if ( v107 >= v28 + 3 )
    {
      v30 = *(_BYTE *)(v28 + 2);
      v112 = v30 | (*(_BYTE *)v28 << 16) | (*(_BYTE *)(v28 + 1) << 8);
      if ( v112 )
      {
        v116 = (_BYTE *)(v29 + (v30 | (*(_BYTE *)v28 << 16) | (*(_BYTE *)(v28 + 1) << 8)));
        if ( v107 >= v29 + (v30 | (*(_BYTE *)v28 << 16) | ((unsigned int)*(_BYTE *)(v28 + 1) << 8)) )
        {
          while ( 1 )
          {
            v31 = (char *)(v29 + 4);
            if ( (unsigned int)v116 < v29 + 4 || (v32 = _byteswap_ushort(*(_WORD *)v29), v32 <= 3u) || v112 < v32 )
            {
LABEL_160:
              v3 = a1;
              goto LABEL_119;
            }
            v33 = v29 + v32;
            v34 = _byteswap_ushort(*(_WORD *)(v29 + 2));
            if ( v34 == 2 )
            {
              if ( v33 >= v29 + 36 )
              {
                *(_DWORD *)(v4 + 332) = (signed __int16)_byteswap_ushort(*(_WORD *)(v29 + 14));
                *(_DWORD *)(v4 + 336) = (signed __int16)_byteswap_ushort(*(_WORD *)(v29 + 16));
                v35 = *(_BYTE *)(v29 + 19);
                *(_DWORD *)(v4 + 340) = (signed __int16)_byteswap_ushort(*(_WORD *)(v29 + 18));
              }
            }
            else
            {
              if ( v34 == 3 )
              {
                v64 = v32 - 4;
                v63 = (_DWORD *)(v4 + 376);
              }
              else
              {
                if ( v34 != 1 )
                  goto LABEL_66;
                v63 = (_DWORD *)(v4 + 372);
                v64 = v32 - 4;
              }
              result = sub_6F78E200(v31, v64, v99, v63);
              v123 = result;
              if ( result )
                return result;
            }
LABEL_66:
            v112 -= v32;
            if ( !v112 )
              goto LABEL_160;
            v29 = v33;
          }
        }
      }
      else
      {
        v116 = (_BYTE *)(v28 + 3);
LABEL_119:
        if ( v107 >= (unsigned int)(v116 + 1) )
        {
          v67 = *v116;
          v68 = (unsigned int)&v116[2 * v67 + 1];
          v113 = *v116;
          *(_DWORD *)(v4 + 392) = v67;
          if ( v107 >= v68 )
          {
            v69 = sub_6F773B30(v99, 4, 0, v113, 0, &v123);
            v15 = v123 == 0;
            *(_DWORD *)(v4 + 396) = v69;
            if ( !v15 )
              goto LABEL_75;
            v70 = 0;
            v71 = (int)(v116 + 1);
            while ( v113 > v70 )
            {
              v71 += 2;
              *(_DWORD *)&v69[4 * v70++] = (signed __int16)((*(_BYTE *)(v71 - 2) << 8) | *(_BYTE *)(v71 - 1));
            }
            v114 = v68 + 8;
            if ( v107 >= v68 + 8 )
            {
              *(_DWORD *)(v4 + 400) = *(_BYTE *)v68;
              *(_DWORD *)(v4 + 404) = *(_BYTE *)(v68 + 1);
              *(_DWORD *)(v4 + 356) = _byteswap_ushort(*(_WORD *)(v68 + 2));
              *(_DWORD *)(v4 + 344) = _byteswap_ushort(*(_WORD *)(v68 + 4));
              v72 = _byteswap_ushort(*(_WORD *)(v68 + 6));
              *(_DWORD *)(v4 + 408) = v72;
              v73 = v72;
              v74 = v103 + v114 - *(_DWORD *)(v3 + 32);
              v105 = v73;
              *(_DWORD *)(v4 + 412) = v74;
              v75 = sub_6F773B30(v99, 16, 0, v73, 0, &v123);
              v15 = v123 == 0;
              v76 = v75;
              *(_DWORD *)(v4 + 416) = v75;
              if ( !v15 )
                goto LABEL_75;
              v117 = v109 & 2;
              v77 = 5 - ((v109 & 2u) < 1);
              if ( v119 )
                v77 = 7 - ((v109 & 2u) < 1);
              v78 = v109;
              v120 = v109 & 8;
              v79 = v77 - (((v109 & 8u) < 1) - 1);
              v80 = (v109 & 0x10u) < 1;
              v111 = v109 & 0x10;
              v81 = v78 & 0x20;
              v82 = v114;
              v121 = v81;
              if ( v107 >= v114 + v105 * (v79 - (v80 - 1) - ((v81 < 1u) - 1)) )
              {
                v83 = (int *)(v76 + 12);
                v101 = 0;
                while ( v105 > v101 )
                {
                  if ( v117 )
                  {
                    v84 = v82 + 2;
                    v15 = (*(_BYTE *)(v82 + 1) | (*(_BYTE *)v82 << 8)) == 0;
                    v85 = _byteswap_ushort(*(_WORD *)v82);
                  }
                  else
                  {
                    v84 = v82 + 1;
                    v85 = *(_BYTE *)v82;
                  }
                  *(v83 - 3) = v85;
                  if ( v119 )
                  {
                    v86 = *(_BYTE *)v84;
                    v87 = *(_BYTE *)(v84 + 1);
                    v84 += 2;
                    v88 = (signed __int16)(v87 | (v86 << 8));
                  }
                  else
                  {
                    v88 = *(_DWORD *)(v4 + 328);
                  }
                  *(v83 - 2) = v88;
                  v89 = v84 - ((v120 < 1u) - 1);
                  if ( v111 )
                  {
                    v90 = v89 + 2;
                    v15 = (*(_BYTE *)(v89 + 1) | (*(_BYTE *)v89 << 8)) == 0;
                    v91 = _byteswap_ushort(*(_WORD *)v89);
                  }
                  else
                  {
                    v90 = v89 + 1;
                    v91 = *(_BYTE *)v89;
                  }
                  *(v83 - 1) = v91;
                  if ( v121 )
                  {
                    v82 = v90 + 3;
                    v92 = *(_BYTE *)(v90 + 2) | (*(_BYTE *)v90 << 16) | (*(_BYTE *)(v90 + 1) << 8);
                  }
                  else
                  {
                    v82 = v90 + 2;
                    v15 = (*(_BYTE *)(v90 + 1) | (*(_BYTE *)v90 << 8)) == 0;
                    v92 = _byteswap_ushort(*(_WORD *)v90);
                  }
                  *v83 = v92;
                  ++v101;
                  v83 += 4;
                }
                goto LABEL_75;
              }
            }
          }
        }
      }
    }
LABEL_74:
    v123 = 8;
    goto LABEL_75;
  }
  v65 = v28 + 1;
  if ( v27 < v28 + 1 )
  {
LABEL_116:
    v66 = 8;
    goto LABEL_117;
  }
  v118 = *(_BYTE *)v28;
  if ( !*(_BYTE *)v28 )
  {
LABEL_157:
    v123 = 0;
    v28 = v65;
    goto LABEL_60;
  }
  v115 = v28 + 3;
  if ( v27 < v28 + 3 )
    goto LABEL_116;
  v93 = *(_BYTE *)(v28 + 2);
  if ( v107 < v28 + 3 + (unsigned int)*(_BYTE *)(v28 + 1) )
    goto LABEL_116;
  v94 = v28 + 3 + *(_BYTE *)(v28 + 1);
  while ( 1 )
  {
    if ( v93 != 1 )
    {
      v95 = &unk_6FB58560;
      while ( 1 )
      {
        v95 = (char *)v95 + 8;
        v96 = (int (__cdecl *)(int, unsigned int, int))*((_DWORD *)v95 + 1);
        if ( !v96 )
          goto LABEL_149;
        if ( *(_DWORD *)v95 == v93 )
          goto LABEL_154;
      }
    }
    v96 = sub_6F78DA60;
LABEL_154:
    v66 = v96(v115, v94, a2 + 288);
    if ( v66 )
      break;
LABEL_149:
    if ( !--v118 )
    {
      v65 = v94;
      v4 = a2;
      goto LABEL_157;
    }
    if ( v107 >= v94 + 2 )
    {
      v93 = *(_BYTE *)(v94 + 1);
      v115 = v94 + 2;
      v94 += 2 + *(_BYTE *)v94;
      if ( v107 >= v94 )
        continue;
    }
    v4 = a2;
    goto LABEL_116;
  }
  v4 = a2;
LABEL_117:
  v123 = v66;
LABEL_75:
  sub_6F772460(v3);
  *(_DWORD *)(v4 + 432) = sub_6F7720A0(v3);
  result = v123;
  *(_DWORD *)(v4 + 436) = 0;
  v122 = result;
  if ( !result )
  {
    v36 = *(_DWORD *)(v4 + 408);
    v37 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 4) = a3;
    v38 = v37 | 1;
    *(_DWORD *)(v4 + 16) = v36 + 1;
    *(_DWORD *)(v4 + 8) = v38;
    if ( !v36 )
      goto LABEL_81;
    v39 = *(_DWORD *)(v4 + 416);
    if ( *(_DWORD *)(v39 + 12) )
    {
LABEL_100:
      v42 = *(_DWORD *)(v4 + 380);
LABEL_83:
      v43 = *(_DWORD *)(v4 + 324);
      v108 = *(_DWORD *)(v4 + 324) & 4;
      if ( !v108 )
      {
        v38 |= 4u;
        *(_DWORD *)(v4 + 8) = v38;
      }
      v44 = v38;
      v45 = v38 | 0x10;
      v46 = v44 | 0x20;
      if ( !(v43 & 1) )
        v46 = v45;
      if ( v42 )
        v46 |= 2u;
      v47 = *(_DWORD *)(v4 + 420);
      *(_DWORD *)(v4 + 8) = v46;
      if ( v47 )
        *(_DWORD *)(v4 + 8) = v46 | 0x40;
      v48 = *(_DWORD *)(v4 + 372);
      *(_DWORD *)(v4 + 20) = v48;
      if ( !v48 )
        *(_DWORD *)(v4 + 20) = *(_DWORD *)(v4 + 368);
      v49 = *(_DWORD *)(v4 + 376);
      v50 = *(_DWORD *)(v4 + 312);
      v51 = *(_DWORD *)(v4 + 320);
      *(_DWORD *)(v4 + 28) = 0;
      *(_DWORD *)(v4 + 32) = 0;
      *(_DWORD *)(v4 + 24) = v49;
      v52 = *(_DWORD *)(v4 + 308);
      *(_DWORD *)(v4 + 56) = v50;
      *(_DWORD *)(v4 + 64) = v51;
      *(_WORD *)(v4 + 70) = v51;
      *(_WORD *)(v4 + 72) = v50;
      *(_DWORD *)(v4 + 52) = v52;
      *(_DWORD *)(v4 + 60) = *(_DWORD *)(v4 + 316);
      v110 = *(_DWORD *)(v4 + 300);
      *(_WORD *)(v4 + 68) = v110;
      v104 = (unsigned int)((unsigned __int64)(20615843028i64 * v110) >> 32) >> 2;
      v100 = v104;
      if ( (signed __int16)v104 < (signed __int16)v51 - (signed __int16)v50 )
      {
        v100 = v51 - v50;
        *(_WORD *)(v4 + 74) = v51 - v50;
      }
      else
      {
        *(_WORD *)(v4 + 74) = v104;
      }
      if ( v42 )
      {
        v56 = sub_6F773B30(*(_DWORD *)(*(_DWORD *)(v4 + 104) + 28), 16, 0, v42, 0, &v122);
        v57 = v56;
        *(_DWORD *)(v4 + 32) = v56;
        result = v122;
        if ( v122 )
          return result;
        v58 = *(_DWORD *)(v4 + 388);
        v127 = v4;
        v59 = v122;
        do
        {
          v60 = *(_DWORD *)(v58 + 4);
          v61 = *(_DWORD *)v58;
          ++v59;
          v57 += 16;
          v58 += 36;
          *((_WORD *)v57 - 8) = v60;
          *((_WORD *)v57 - 7) = v61;
          v60 <<= 6;
          *((_DWORD *)v57 - 3) = v60;
          *((_DWORD *)v57 - 1) = v60;
          *((_DWORD *)v57 - 2) = v61 << 6;
        }
        while ( v59 != v42 );
        v62 = v59;
        v4 = v127;
        *(_DWORD *)(v127 + 28) = v62;
        v108 = *(_DWORD *)(v127 + 324) & 4;
        v110 = *(_WORD *)(v127 + 68);
        v100 = *(_WORD *)(v127 + 74);
      }
      if ( v108 )
      {
        v53 = *(_DWORD *)(v4 + 408);
        v54 = 0;
        for ( j = *(_DWORD *)(v4 + 416); v53; --v53 )
        {
          if ( v54 < *(_DWORD *)(j + 4) )
            v54 = *(_DWORD *)(j + 4);
          j += 16;
        }
        *(_WORD *)(v4 + 76) = v54;
      }
      else
      {
        *(_WORD *)(v4 + 76) = *(_DWORD *)(v4 + 328);
      }
      v123 = v4;
      v125 = 3;
      v126 = 1;
      v124 = 1970170211;
      *(_WORD *)(v4 + 78) = v100;
      *(_WORD *)(v4 + 80) = -((signed int)(1717986919 * (unsigned __int64)v110 >> 32) >> 2);
      *(_WORD *)(v4 + 82) = 34953 * (unsigned int)v110 >> 20;
      result = sub_6F76D420((int)&unk_6FB58520, 0, (int)&v123, 0);
      if ( *(_DWORD *)(v4 + 420) )
        *(_DWORD *)(v4 + 8) |= 0x40u;
    }
    else
    {
      v40 = v39 + 28;
      v41 = 0;
      while ( v36 != ++v41 )
      {
        v40 += 16;
        if ( *(_DWORD *)(v40 - 16) )
          goto LABEL_100;
      }
LABEL_81:
      v42 = *(_DWORD *)(v4 + 380);
      result = 3;
      if ( v42 )
      {
        *(_DWORD *)(v4 + 8) = 0;
        v38 = 0;
        goto LABEL_83;
      }
    }
  }
  return result;
}
