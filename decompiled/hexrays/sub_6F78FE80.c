signed int __cdecl sub_6F78FE80(int a1, int a2, unsigned int a3, __int16 a4)
{
  int v4; // edi@1
  unsigned int v5; // esi@1
  signed int v6; // ebx@3
  int v8; // esi@7
  int v9; // edx@7
  int v10; // ebx@7
  unsigned int v11; // ebp@7
  int v12; // ST14_4@7
  int v13; // ST18_4@7
  int v14; // eax@8
  unsigned int v15; // eax@8
  signed int v16; // ecx@11
  signed int v17; // edx@11
  int v18; // eax@11
  int v19; // ecx@14
  int v20; // edi@16
  int v21; // ebp@16
  int v22; // esi@16
  signed __int64 v23; // rax@17
  signed __int64 v24; // rax@17
  signed __int64 v25; // rax@19
  signed __int64 v26; // rax@19
  int v27; // ecx@20
  int v28; // edx@20
  int v29; // eax@20
  int v30; // edx@21
  int v31; // ebx@21
  int v32; // eax@22
  int v33; // ecx@26
  unsigned int v34; // eax@26
  int v35; // ebp@26
  int v36; // edx@26
  int v37; // eax@26
  int v38; // ebp@28
  int v39; // ecx@32
  unsigned int v40; // ebx@32
  int v41; // edx@32
  int v42; // ebp@32
  int v43; // ecx@34
  unsigned int v44; // esi@36
  unsigned int v45; // ecx@38
  int v46; // eax@38
  unsigned int v47; // edi@40
  int v48; // edx@45
  unsigned int v49; // eax@45
  int v50; // ecx@46
  int v51; // eax@48
  bool v52; // zf@48
  unsigned int v53; // ebx@48
  int v54; // ebp@50
  signed int v55; // edx@52
  signed int v56; // ecx@52
  int v57; // eax@52
  int v58; // ecx@56
  unsigned int v59; // ebp@56
  int v60; // edi@62
  int v61; // edx@62
  unsigned __int16 v62; // ax@62
  char v63; // al@70
  unsigned __int8 *v64; // ebx@73
  char v65; // dl@74
  unsigned __int8 v66; // cl@75
  char v67; // al@75
  int v68; // eax@78
  char v69; // dl@79
  int v70; // ecx@83
  int v71; // ST24_4@83
  int v72; // eax@84
  unsigned int v73; // ebp@86
  int v74; // edx@86
  _BYTE *v75; // ecx@86
  char v76; // dl@91
  unsigned int v77; // eax@91
  unsigned __int8 *v78; // ebx@94
  unsigned int v79; // eax@103
  int v80; // ecx@107
  unsigned int v81; // eax@112
  unsigned int v82; // ebp@114
  char v83; // al@114
  int v84; // edx@128
  unsigned int v85; // esi@128
  signed int v86; // eax@128
  unsigned __int8 *v87; // ebx@131
  signed int v88; // edx@133
  char v89; // al@133
  char v90; // bl@141
  char v91; // bl@147
  int v92; // edx@152
  unsigned __int8 v93; // bl@153
  __int16 v94; // dx@155
  __int16 v95; // ax@155
  int v96; // edx@163
  int v97; // [sp+14h] [bp-58h]@16
  int v98; // [sp+14h] [bp-58h]@30
  unsigned int v99; // [sp+14h] [bp-58h]@32
  int v100; // [sp+14h] [bp-58h]@74
  int v101; // [sp+14h] [bp-58h]@85
  int v102; // [sp+18h] [bp-54h]@14
  int v103; // [sp+18h] [bp-54h]@32
  int v104; // [sp+18h] [bp-54h]@74
  int v105; // [sp+18h] [bp-54h]@91
  unsigned int v106; // [sp+18h] [bp-54h]@114
  char v107; // [sp+18h] [bp-54h]@128
  int v108; // [sp+1Ch] [bp-50h]@14
  int v109; // [sp+1Ch] [bp-50h]@30
  int v110; // [sp+20h] [bp-4Ch]@16
  unsigned int v111; // [sp+20h] [bp-4Ch]@32
  int v112; // [sp+20h] [bp-4Ch]@54
  int v113; // [sp+20h] [bp-4Ch]@86
  int v114; // [sp+24h] [bp-48h]@34
  unsigned __int8 v115; // [sp+24h] [bp-48h]@70
  int v116; // [sp+24h] [bp-48h]@78
  unsigned int v117; // [sp+24h] [bp-48h]@84
  int v118; // [sp+24h] [bp-48h]@114
  int v119; // [sp+28h] [bp-44h]@32
  unsigned __int8 v120; // [sp+28h] [bp-44h]@79
  unsigned __int8 v121; // [sp+28h] [bp-44h]@82
  unsigned __int8 *v122; // [sp+28h] [bp-44h]@91
  _BYTE *v123; // [sp+28h] [bp-44h]@112
  unsigned __int8 *v124; // [sp+28h] [bp-44h]@128
  char v125; // [sp+2Ch] [bp-40h]@32
  int v126; // [sp+2Ch] [bp-40h]@83
  int v127; // [sp+30h] [bp-3Ch]@32
  signed int v128; // [sp+30h] [bp-3Ch]@91
  int v129; // [sp+30h] [bp-3Ch]@114
  signed int v130; // [sp+30h] [bp-3Ch]@128
  int v131; // [sp+34h] [bp-38h]@36
  signed int v132; // [sp+34h] [bp-38h]@91
  int v133; // [sp+34h] [bp-38h]@128
  int v134; // [sp+38h] [bp-34h]@91
  int v135; // [sp+38h] [bp-34h]@128
  _BYTE *v136; // [sp+3Ch] [bp-30h]@91
  _BYTE *v137; // [sp+3Ch] [bp-30h]@128
  int v138; // [sp+40h] [bp-2Ch]@20
  int v139; // [sp+44h] [bp-28h]@20
  int v140; // [sp+48h] [bp-24h]@20
  int v141; // [sp+4Ch] [bp-20h]@20
  unsigned int v142; // [sp+78h] [bp+Ch]@34
  unsigned int v143; // [sp+78h] [bp+Ch]@128

  v4 = *(_DWORD *)(a1 + 4);
  v5 = (a3 < 1) + a3 - 1;
  if ( !v4 || v5 >= *(_DWORD *)(v4 + 408) )
    return 6;
  if ( a4 & 9 )
    goto LABEL_6;
  v30 = *(_DWORD *)(v4 + 380);
  v31 = *(_DWORD *)(v4 + 388);
  if ( !v30 )
    goto LABEL_6;
  v32 = 0;
  while ( *(_DWORD *)v31 != *(_WORD *)(a2 + 12) || *(_DWORD *)(v31 + 4) != *(_WORD *)(a2 + 14) )
  {
    ++v32;
    v31 += 36;
    if ( v32 == v30 )
      goto LABEL_6;
  }
  v33 = *(_DWORD *)(v31 + 8);
  v34 = *(_DWORD *)(v31 + 8) & 1;
  v35 = 7 - (v34 < 1);
  v36 = 6 - (v34 < 1);
  v37 = 5 - (v34 < 1);
  if ( v33 & 2 )
  {
    v37 = v36;
    v36 = v35;
  }
  v38 = *(_DWORD *)(v4 + 416);
  if ( !(v33 & 4) )
    v36 = v37;
  v98 = v36;
  v109 = *(_DWORD *)(v4 + 104);
  if ( sub_6F771FF0(*(_DWORD *)(v4 + 104), *(_DWORD *)(v4 + 432) + *(_DWORD *)(v31 + 24))
    || sub_6F772380(v109, *(_DWORD *)(v31 + 28) * v98) )
  {
    goto LABEL_6;
  }
  v39 = *(_DWORD *)(v31 + 8);
  v40 = *(_DWORD *)(v31 + 28);
  v119 = v38 + 16 * v5;
  v111 = *(_DWORD *)v119;
  v103 = *(_DWORD *)(v109 + 32);
  v99 = *(_DWORD *)(v109 + 36);
  v125 = v39 & 1;
  v41 = 6 - ((v39 & 1u) < 1);
  v42 = 5 - ((v39 & 1u) < 1);
  v127 = v39 & 2;
  if ( v39 & 2 )
  {
    v42 = 6 - ((v39 & 1u) < 1);
    v41 = 7 - ((v39 & 1u) < 1);
  }
  v43 = v39 & 4;
  v142 = (a3 < 1) + a3 - 1;
  v114 = v4;
  if ( v43 )
    v42 = v41;
  v131 = v43;
  v44 = 0;
  while ( 1 )
  {
    if ( v44 >= v40 || (v45 = (v44 + v40) >> 1, v46 = v103 + v42 * v45, v99 < v46 + v42) )
    {
LABEL_65:
      v4 = v114;
      v5 = v142;
      goto LABEL_57;
    }
    if ( v125 )
      break;
    v47 = v44;
    while ( 1 )
    {
      v48 = v46 + 1;
      v49 = *(_BYTE *)v46;
      if ( v111 == v49 )
      {
        v4 = v114;
        v5 = v142;
        v50 = v48;
        goto LABEL_47;
      }
      if ( v111 <= v49 )
        break;
      if ( v40 <= v45 )
        goto LABEL_65;
      v47 = v45;
      v46 = v103 + ((v40 + v45) >> 1) * v42;
      if ( v99 < v46 + v42 )
        goto LABEL_65;
      v45 = (v40 + v45) >> 1;
    }
    v44 = v47;
LABEL_67:
    v40 = v45;
  }
  while ( 1 )
  {
    v60 = v46 + 2;
    v61 = *(_BYTE *)(v46 + 1) | (*(_BYTE *)v46 << 8);
    v62 = _byteswap_ushort(*(_WORD *)v46);
    if ( v111 == v62 )
      break;
    if ( v111 <= v62 )
      goto LABEL_67;
    if ( v45 >= v40 )
      goto LABEL_65;
    v44 = v45;
    v46 = v103 + v42 * ((v45 + v40) >> 1);
    if ( v99 < v46 + v42 )
      goto LABEL_65;
    v45 = (v45 + v40) >> 1;
  }
  v50 = v60;
  v5 = v142;
  v4 = v114;
LABEL_47:
  if ( v127 )
  {
    v51 = v50 + 2;
    v52 = (*(_BYTE *)(v50 + 1) | (*(_BYTE *)v50 << 8)) == 0;
    v53 = _byteswap_ushort(*(_WORD *)v50);
  }
  else
  {
    v51 = v50 + 1;
    v53 = *(_BYTE *)v50;
  }
  v54 = v131 ? *(_BYTE *)(v51 + 2) | (*(_BYTE *)v51 << 16) | (*(_BYTE *)(v51 + 1) << 8) : _byteswap_ushort(*(_WORD *)v51);
  sub_6F772460(v109);
  if ( !v53 )
    goto LABEL_6;
  v55 = *(_DWORD *)(v4 + 304);
  v56 = *(_DWORD *)(v4 + 300);
  v57 = *(_DWORD *)(v119 + 4);
  if ( v55 != v56 )
  {
    v57 = sub_6F7C9420(v57, v56, *(_DWORD *)(v4 + 304));
    v55 = *(_DWORD *)(v4 + 304);
  }
  *(_DWORD *)(a1 + 56) = v57;
  v112 = sub_6F7C9420(*(_WORD *)(a2 + 12) << 8, *(_DWORD *)(v119 + 4), v55);
  if ( sub_6F771FF0(v109, v54 + *(_DWORD *)(v4 + 188)) || sub_6F772380(v109, v53) )
    goto LABEL_6;
  v58 = *(_DWORD *)(v109 + 32);
  v59 = *(_DWORD *)(v109 + 36);
  if ( v59 < v58 + 1 )
    goto LABEL_57;
  v115 = *(_BYTE *)v58;
  v63 = *(_BYTE *)v58 & 3;
  if ( v63 == 2 )
  {
    v64 = (unsigned __int8 *)(v58 + 5);
    if ( v59 < v58 + 5 )
      goto LABEL_57;
    v96 = *(_BYTE *)(v58 + 4);
    v100 = (signed __int16)_byteswap_ushort(*(_WORD *)(v58 + 1));
    v104 = (signed __int16)_byteswap_ushort(*(_WORD *)(v58 + 3));
  }
  else if ( v63 == 3 )
  {
    v64 = (unsigned __int8 *)(v58 + 7);
    if ( v59 < v58 + 7 )
      goto LABEL_57;
    v100 = *(_BYTE *)(*(_DWORD *)(v109 + 32) + 3) | (*(_BYTE *)(*(_DWORD *)(v109 + 32) + 1) << 16) | (*(_BYTE *)(*(_DWORD *)(v109 + 32) + 2) << 8);
    v104 = *(_BYTE *)(*(_DWORD *)(v109 + 32) + 6) | (*(_BYTE *)(*(_DWORD *)(v109 + 32) + 4) << 16) | (*(_BYTE *)(*(_DWORD *)(v109 + 32) + 5) << 8);
  }
  else
  {
    if ( v63 != 1 )
    {
      v64 = (unsigned __int8 *)(v58 + 2);
      if ( v59 >= v58 + 2 )
      {
        v65 = *(_BYTE *)(v58 + 1);
        v100 = (char)(v65 >> 4);
        v104 = (char)((char)(16 * v65) >> 4);
        goto LABEL_75;
      }
      goto LABEL_57;
    }
    v64 = (unsigned __int8 *)(v58 + 3);
    if ( v59 < v58 + 3 )
    {
LABEL_57:
      sub_6F772460(v109);
      goto LABEL_6;
    }
    v100 = *(_BYTE *)(v58 + 1);
    v104 = *(_BYTE *)(v58 + 2);
  }
LABEL_75:
  v66 = v115 >> 2;
  v67 = (v115 >> 2) & 3;
  switch ( v67 )
  {
    case 2:
      if ( v59 < (unsigned int)(v64 + 2) )
        goto LABEL_57;
      v116 = *v64;
      v68 = v64[1];
      v64 += 2;
      break;
    case 3:
      if ( v59 < (unsigned int)(v64 + 4) )
        goto LABEL_57;
      v94 = v64[3];
      v116 = _byteswap_ushort(*(_WORD *)v64);
      v95 = v64[2];
      v64 += 4;
      v68 = (unsigned __int16)(v94 | (v95 << 8));
      break;
    case 1:
      v92 = (int)(v64 + 1);
      if ( v59 < (unsigned int)(v64 + 1) )
        goto LABEL_57;
      v93 = *v64;
      v68 = v93 & 0xF;
      v116 = v93 >> 4;
      v64 = (unsigned __int8 *)v92;
      break;
    default:
      v68 = 0;
      v116 = 0;
      break;
  }
  v120 = v66 >> 2;
  v69 = (v66 >> 2) & 3;
  if ( v69 == 2 )
  {
    v80 = (int)(v64 + 2);
    if ( v59 < (unsigned int)(v64 + 2) )
      goto LABEL_57;
    v52 = (v64[1] | (*v64 << 8)) == 0;
    v112 = (signed __int16)_byteswap_ushort(*(_WORD *)v64);
  }
  else if ( v69 == 3 )
  {
    v80 = (int)(v64 + 3);
    if ( v59 < (unsigned int)(v64 + 3) )
      goto LABEL_57;
    v112 = v64[2] | (*v64 << 16) | (v64[1] << 8);
  }
  else
  {
    if ( v69 != 1 )
    {
      v121 = v66 >> 4;
      goto LABEL_83;
    }
    v80 = (int)(v64 + 1);
    if ( v59 < (unsigned int)(v64 + 1) )
      goto LABEL_57;
    v112 = (char)*v64 << 8;
  }
  v64 = (unsigned __int8 *)v80;
  v121 = v120 >> 2;
LABEL_83:
  *(_DWORD *)(a1 + 72) = 1651078259;
  *(_DWORD *)(a1 + 76) = v68;
  *(_DWORD *)(a1 + 80) = v116;
  v70 = v116 << 6;
  v71 = (v116 + 7) >> 3;
  *(_DWORD *)(a1 + 84) = v71;
  *(_BYTE *)(a1 + 94) = 1;
  *(_DWORD *)(a1 + 24) = v70;
  *(_DWORD *)(a1 + 28) = v68 << 6;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 32) = v100 << 6;
  *(_DWORD *)(a1 + 36) = v104 << 6;
  *(_DWORD *)(a1 + 40) = ((v112 >> 2) + 32) & 0xFFFFFFC0;
  *(_DWORD *)(a1 + 44) = -v70 >> 1;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 100) = v100;
  *(_DWORD *)(a1 + 104) = v68 + v104;
  v126 = sub_6F769350(a1, v71 * v68);
  if ( v126 )
    goto LABEL_57;
  v117 = *(_DWORD *)(v109 + 36);
  v72 = *(_DWORD *)(a1 + 76);
  if ( !v72 )
    goto LABEL_105;
  v101 = *(_DWORD *)(a1 + 80);
  if ( !*(_DWORD *)(a1 + 80) )
    goto LABEL_105;
  v73 = v72 * *(_DWORD *)(a1 + 80);
  v74 = *(_DWORD *)(a1 + 84);
  v75 = *(_BYTE **)(a1 + 88);
  v113 = *(_DWORD *)(a1 + 84);
  if ( !(*(_DWORD *)(v4 + 208) & 2) )
  {
    v113 = -v74;
    v75 += v74 * (v72 - 1);
  }
  if ( v121 == 1 )
  {
    v143 = v5;
    v84 = 0;
    v137 = v75;
    v135 = 0;
    v85 = 128;
    v107 = 0;
    v130 = 1;
    v133 = *(_DWORD *)(a1 + 80);
    v124 = v64;
    v86 = 1;
    while ( 1 )
    {
      if ( !v73 )
      {
        v79 = v85;
        v5 = v143;
        if ( v79 != 128 )
          *v75 = v107;
        goto LABEL_105;
      }
      if ( !v130 )
      {
LABEL_138:
        if ( v86 )
          goto LABEL_139;
        goto LABEL_140;
      }
      v87 = v124;
      while ( 1 )
      {
        if ( !v86 )
        {
          v84 = v135;
          v86 = 1;
          goto LABEL_134;
        }
        if ( v117 <= (unsigned int)v87 )
          break;
        v88 = *v87++;
        v89 = v88;
        v84 = v88 >> 4;
        v135 = v89 & 0xF;
        v86 = 0;
LABEL_134:
        if ( v84 )
        {
          v124 = v87;
          goto LABEL_138;
        }
      }
      v124 = v87;
LABEL_139:
      v107 |= v85;
      v86 = 1;
LABEL_140:
      v85 >>= 1;
      if ( --v133 )
      {
        if ( !v85 )
        {
          v91 = v107;
          ++v75;
          v107 = 0;
          v85 = 128;
          *(v75 - 1) = v91;
        }
      }
      else
      {
        v90 = v107;
        v107 = 0;
        v133 = v101;
        v85 = 128;
        *v75 = v90;
        v75 = &v137[v113];
        v137 += v113;
      }
      --v84;
      --v73;
      v130 = v84 <= 0;
    }
  }
  if ( v121 < 1u )
  {
    v123 = v75;
    v81 = 8 * (v117 - (_DWORD)v64);
    if ( v73 <= v81 )
      v81 = v73;
    v76 = 0;
    v82 = 128;
    v106 = v81;
    v129 = v81 & 7;
    v118 = *(_DWORD *)(a1 + 80);
    v83 = 0;
    while ( v106 )
    {
      if ( v129 == (v106 & 7) )
        v83 = *v64++;
      if ( v83 & 0x80 )
        v76 |= v82;
      v83 *= 2;
      v82 >>= 1;
      if ( --v118 )
      {
        if ( !v82 )
        {
          *v75 = v76;
          v82 = 128;
          ++v75;
          v76 = 0;
        }
      }
      else
      {
        *v75 = v76;
        v82 = 128;
        v75 = &v123[v113];
        v118 = v101;
        v76 = 0;
        v123 += v113;
      }
      --v106;
    }
    if ( v82 == 128 )
      goto LABEL_105;
LABEL_111:
    *v75 = v76;
    goto LABEL_105;
  }
  if ( v121 != 2 )
  {
    v126 = 3;
    goto LABEL_105;
  }
  v136 = v75;
  v76 = 0;
  v128 = 1;
  v105 = 0;
  v132 = 1;
  v122 = v64;
  v134 = *(_DWORD *)(a1 + 80);
  v77 = 128;
  while ( v73 )
  {
    if ( v128 )
    {
      v78 = v122;
      do
      {
        if ( v117 <= (unsigned int)v78 )
          break;
        ++v78;
        v132 ^= 1u;
        v105 = *(v78 - 1);
      }
      while ( !*(v78 - 1) );
      v122 = v78;
    }
    if ( v132 )
      v76 |= v77;
    v77 >>= 1;
    if ( --v134 )
    {
      if ( !v77 )
      {
        *v75 = v76;
        v77 = 128;
        ++v75;
        v76 = 0;
      }
    }
    else
    {
      *v75 = v76;
      v76 = 0;
      v75 = &v136[v113];
      v134 = v101;
      v77 = 128;
      v136 += v113;
    }
    --v105;
    --v73;
    v128 = v105 <= 0;
  }
  if ( v77 != 128 )
    goto LABEL_111;
LABEL_105:
  v6 = 0;
  sub_6F772460(v109);
  if ( !v126 )
    return v6;
LABEL_6:
  if ( a4 & 0x4000 )
    return 6;
  v8 = *(_DWORD *)(v4 + 416) + 16 * v5;
  v9 = *(_DWORD *)(v4 + 104);
  *(_WORD *)(a1 + 110) = 0;
  *(_WORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 72) = &loc_6F75746C;
  v10 = *(_DWORD *)(v8 + 12);
  v11 = *(_DWORD *)(v8 + 8);
  v12 = v9;
  v13 = *(_DWORD *)(v4 + 188);
  sub_6F7CA220(*(_DWORD *)(a1 + 188));
  *(_DWORD *)(a1 + 176) = 0;
  v6 = sub_6F78F1D0(a1 + 160, v12, v13, v10, v11);
  if ( !v6 )
  {
    v14 = *(_DWORD *)(a1 + 188);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(v14 + 20);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(v14 + 24);
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(v14 + 28);
    *(_DWORD *)(a1 + 120) = *(_DWORD *)(v14 + 32);
    v15 = *(_DWORD *)(v14 + 36) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 124) = v15 | 4;
    if ( a2 && *(_WORD *)(a2 + 14) <= 0x17u )
      *(_DWORD *)(a1 + 124) = v15 | 0x104;
    v16 = *(_DWORD *)(v4 + 304);
    v17 = *(_DWORD *)(v4 + 300);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    v18 = *(_DWORD *)(v8 + 4);
    if ( v16 != v17 )
      v18 = sub_6F7C9420(v18, v17, v16);
    if ( *(_BYTE *)(v4 + 324) & 1 )
    {
      *(_DWORD *)(a1 + 52) = v18;
      v19 = *(_DWORD *)(a1 + 40);
      v108 = v18;
      v102 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      *(_DWORD *)(a1 + 40) = v18;
      v102 = v18;
      v108 = *(_DWORD *)(a1 + 52);
      v19 = v18;
    }
    *(_DWORD *)(a1 + 56) = v19;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 60) = v108;
    if ( !(a4 & 1) )
    {
      v20 = 0;
      v97 = *(_DWORD *)(a2 + 16);
      v110 = *(_DWORD *)(a2 + 20);
      v21 = *(_WORD *)(a1 + 110);
      v22 = *(_DWORD *)(a1 + 112);
      if ( v21 > 0 )
      {
        do
        {
          v23 = (unsigned int)(((signed int)((unsigned __int64)(v97 * (signed __int64)*(_DWORD *)v22) >> 32) >> 31)
                             + 0x8000)
              + v97 * (signed __int64)*(_DWORD *)v22;
          *(_DWORD *)v22 = (HIDWORD(v23) << 16) + ((unsigned int)v23 >> 16);
          v24 = (unsigned int)(((signed int)((unsigned __int64)(v110 * (signed __int64)*(_DWORD *)(v22 + 4)) >> 32) >> 31)
                             + 0x8000)
              + v110 * (signed __int64)*(_DWORD *)(v22 + 4);
          ++v20;
          *(_DWORD *)(v22 + 4) = (HIDWORD(v24) << 16) + ((unsigned int)v24 >> 16);
          v22 += 8;
        }
        while ( v20 != v21 );
        v6 = 0;
      }
      v25 = (unsigned int)(((signed int)((unsigned __int64)(v97 * (signed __int64)v102) >> 32) >> 31) + 0x8000)
          + v97 * (signed __int64)v102;
      *(_DWORD *)(a1 + 40) = (HIDWORD(v25) << 16) + ((unsigned int)v25 >> 16);
      v26 = (unsigned int)(((signed int)((unsigned __int64)(v110 * (signed __int64)v108) >> 32) >> 31) + 0x8000)
          + v110 * (signed __int64)v108;
      *(_DWORD *)(a1 + 52) = (HIDWORD(v26) << 16) + ((unsigned int)v26 >> 16);
    }
    sub_6F770380(a1 + 108, (int)&v138);
    v27 = v138;
    *(_DWORD *)(a1 + 24) = v140 - v138;
    v28 = v139;
    v29 = v141;
    *(_DWORD *)(a1 + 32) = v27;
    *(_DWORD *)(a1 + 36) = v28;
    *(_DWORD *)(a1 + 28) = v29 - v28;
  }
  return v6;
}
