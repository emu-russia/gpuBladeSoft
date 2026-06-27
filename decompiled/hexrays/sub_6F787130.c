signed int __usercall sub_6F787130@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  int v4; // edi@1
  int v5; // ebp@1
  int v6; // eax@2
  int v7; // ecx@2
  unsigned int v8; // edx@2
  int v9; // eax@2
  int v10; // edi@4
  char v11; // dl@4
  int v12; // ecx@5
  int v13; // edi@5
  signed int v14; // esi@5
  int v15; // ecx@5
  int v16; // ecx@7
  signed int v17; // esi@7
  signed int v18; // edi@7
  signed int v19; // ecx@9
  signed int v20; // edi@9
  int v21; // ecx@13
  int v22; // eax@13
  signed int v23; // ecx@13
  signed int result; // eax@14
  signed int v25; // eax@19
  signed int v26; // eax@22
  int v27; // ebx@22
  int v28; // eax@22
  char v29; // si@23
  int v30; // edi@24
  int v31; // eax@27
  int v32; // edx@27
  int v33; // esi@27
  int v34; // ecx@27
  int v35; // eax@27
  int v36; // eax@27
  int v37; // eax@27
  signed int v38; // esi@29
  int v39; // ecx@33
  signed int v40; // esi@36
  int v41; // ecx@37
  int v42; // esi@37
  int *v43; // eax@37
  unsigned int v44; // eax@42
  int v45; // ecx@42
  char v46; // al@43
  bool v47; // al@46
  int v48; // ebx@48
  int v49; // edi@50
  int v50; // ebx@50
  unsigned int v51; // ecx@50
  int v52; // edx@51
  int v53; // eax@51
  int v54; // esi@51
  int v55; // esi@51
  int v56; // esi@55
  int v57; // esi@59
  unsigned int v58; // ebx@59
  int v59; // ecx@60
  int v60; // eax@60
  int v61; // edx@60
  int v62; // eax@60
  int v63; // esi@66
  int v64; // edi@68
  unsigned int v65; // ecx@68
  int v66; // esi@68
  int v67; // edx@69
  int v68; // eax@69
  signed int v69; // ebx@76
  signed int v70; // eax@77
  signed int v71; // edx@78
  int v72; // esi@82
  int v73; // edi@82
  int v74; // ebx@82
  int v75; // ebp@82
  int v76; // esi@82
  signed __int64 v77; // rax@83
  int v78; // eax@84
  signed __int64 v79; // rax@85
  int v80; // edi@90
  unsigned int v81; // ecx@90
  int v82; // edx@91
  int v83; // ebx@91
  int v84; // eax@91
  int v85; // edx@97
  int v86; // ecx@97
  char v87; // bl@104
  int v88; // eax@105
  int v89; // eax@109
  int v90; // eax@109
  int v91; // ecx@110
  __int16 v92; // dx@112
  int v93; // ebx@113
  int v94; // esi@113
  int v95; // edi@113
  char v96; // al@121
  int v97; // esi@124
  int v98; // ST30_4@124
  int v99; // ST2C_4@124
  void *v100; // eax@124
  int v101; // edx@124
  bool v102; // zf@124
  unsigned int v103; // edi@125
  unsigned int v104; // eax@125
  int v105; // ebx@134
  signed __int64 v106; // rax@134
  signed __int64 v107; // rax@134
  int v108; // eax@135
  unsigned int v109; // eax@138
  signed int v110; // ST00_4@141
  unsigned int v111; // eax@34
  int v112; // [sp+2Ch] [bp-90h]@5
  int v113; // [sp+2Ch] [bp-90h]@30
  unsigned int v114; // [sp+2Ch] [bp-90h]@48
  signed int v115; // [sp+2Ch] [bp-90h]@65
  int v116; // [sp+2Ch] [bp-90h]@82
  int v117; // [sp+2Ch] [bp-90h]@110
  signed int v118; // [sp+30h] [bp-8Ch]@22
  unsigned int v119; // [sp+30h] [bp-8Ch]@48
  int v120; // [sp+30h] [bp-8Ch]@65
  int v121; // [sp+30h] [bp-8Ch]@82
  int v122; // [sp+30h] [bp-8Ch]@109
  signed int v123; // [sp+34h] [bp-88h]@22
  int v124; // [sp+34h] [bp-88h]@66
  bool v125; // [sp+38h] [bp-84h]@30
  unsigned int v126; // [sp+38h] [bp-84h]@48
  unsigned int v127; // [sp+3Ch] [bp-80h]@48
  int v128; // [sp+40h] [bp-7Ch]@48
  int v129; // [sp+40h] [bp-7Ch]@65
  signed int v130; // [sp+44h] [bp-78h]@50
  int v131; // [sp+48h] [bp-74h]@65
  int v132; // [sp+5Ch] [bp-60h]@48
  int v133; // [sp+68h] [bp-54h]@1
  int v134; // [sp+6Ch] [bp-50h]@22
  int v135; // [sp+70h] [bp-4Ch]@22
  int v136; // [sp+74h] [bp-48h]@22
  int v137; // [sp+78h] [bp-44h]@2
  int v138; // [sp+7Ch] [bp-40h]@2
  int v139; // [sp+80h] [bp-3Ch]@2
  int v140; // [sp+84h] [bp-38h]@2
  int v141; // [sp+88h] [bp-34h]@3
  int v142; // [sp+8Ch] [bp-30h]@27
  int v143; // [sp+90h] [bp-2Ch]@27
  int v144; // [sp+94h] [bp-28h]@9
  int v145; // [sp+98h] [bp-24h]@27
  int v146; // [sp+9Ch] [bp-20h]@27

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 76);
  v133 = 0;
  v5 = *(_DWORD *)(v4 + 2972);
  if ( !v5 )
  {
    v97 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 2976) = nullsub_25;
    v98 = a3;
    v99 = a2;
    v100 = sub_6F773A50(v97, 504, &v133);
    v101 = v133;
    *(_DWORD *)(v4 + 2972) = v100;
    result = 64;
    a3 = v98;
    v102 = v101 == 0;
    a2 = v99;
    if ( !v102 )
      return result;
    v5 = *(_DWORD *)(*(_DWORD *)(v3 + 76) + 2972);
    *(_DWORD *)(v5 + 100) = 0;
    *(_DWORD *)(v5 + 128) = 0;
    *(_DWORD *)v5 = v97;
    v103 = (v5 + 104) & 0xFFFFFFFC;
    v104 = 0;
    do
    {
      *(_DWORD *)(v103 + v104) = 0;
      v104 += 4;
    }
    while ( v104 < ((v5 + 100 - v103 + 32) & 0xFFFFFFFC) );
    *(_DWORD *)(v5 + 120) = v97;
    *(_DWORD *)(v5 + 100) = sub_6F77C850;
    *(_DWORD *)(v5 + 104) = sub_6F77B610;
    *(_DWORD *)(v5 + 112) = sub_6F77B4F0;
    *(_DWORD *)(v5 + 124) = v5 + 4;
  }
  v6 = *(_DWORD *)(v3 + 4);
  v7 = a2 + a3;
  v140 = a2;
  v138 = a2;
  *(_DWORD *)(v5 + 132) = v3;
  v8 = 0;
  *(_DWORD *)(v5 + 128) = v3;
  v137 = 0;
  v9 = *(_DWORD *)(v6 + 96);
  v139 = v7;
  do
  {
    *(int *)((char *)&v141 + v8 * 4) = 0;
    ++v8;
  }
  while ( v8 < 6 );
  v10 = *(_DWORD *)(v3 + 8);
  v11 = *(_BYTE *)(v10 + 161);
  if ( *(_BYTE *)(v10 + 160) )
  {
    v12 = *(_DWORD *)(v10 + 164);
    v13 = *(_DWORD *)(v10 + 168);
    LOBYTE(v112) = 1;
    *(_DWORD *)(v5 + 8) = 1;
    v14 = v12 + 95;
    v15 = v12 + 32;
    if ( v15 >= 0 )
      v14 = v15;
    v16 = v13 + 95;
    v17 = v14 >> 6;
    v18 = v13 + 32;
    if ( v18 < 0 )
      v18 = v16;
    v141 = v17;
    v19 = 3;
    v20 = v18 >> 6;
    v144 = v20;
  }
  else
  {
    v141 = 1024;
    v144 = 1024;
    v20 = 1024;
    *(_DWORD *)(v5 + 8) = 0;
    v17 = 1024;
    v19 = 2;
    LOBYTE(v112) = 0;
  }
  if ( v11 && !*(_BYTE *)(v9 + 32) )
  {
    *(_DWORD *)(v5 + 8) = v19;
    LOBYTE(v112) = v19;
  }
  *(_DWORD *)(v5 + 144) = *(_DWORD *)(v9 + 36);
  *(_DWORD *)(v5 + 148) = *(_DWORD *)(v9 + 40);
  *(_DWORD *)(v5 + 152) = *(_DWORD *)(v9 + 44);
  *(_DWORD *)(v5 + 156) = *(_DWORD *)(v9 + 48);
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(v9 + 52);
  *(_DWORD *)(v5 + 164) = *(_DWORD *)(v9 + 56);
  v21 = *(_DWORD *)(v9 + 60);
  v22 = *(_DWORD *)(v9 + 64);
  *(_DWORD *)(v5 + 168) = v21;
  *(_DWORD *)(v5 + 172) = v22;
  v23 = *(_WORD *)(*(_DWORD *)(v3 + 4) + 68);
  *(_DWORD *)(v5 + 88) = v23;
  if ( v11 )
  {
    result = 36;
    if ( v17 <= 0 || v20 <= 0 )
      return result;
    if ( v23 > 0x7FFF )
      return 164;
    v25 = sub_6F7C9760(131072000, v23 << 16);
    if ( v25 < v17 || v25 < v20 )
      return 164;
    v112 = *(_DWORD *)(v5 + 8);
  }
  v26 = *(_DWORD *)(v5 + 92);
  v27 = *(_DWORD *)(v5 + 132);
  v136 = 0;
  v134 = 0;
  v135 = 0;
  *(_DWORD *)(v5 + 4) = 0;
  v118 = v26;
  v123 = *(_DWORD *)(v5 + 96);
  v28 = *(_DWORD *)(v27 + 736);
  if ( v28 == *(_DWORD *)(v5 + 136) )
  {
    v29 = 0;
  }
  else
  {
    *(_DWORD *)(v5 + 136) = v28;
    v29 = 1;
  }
  v30 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v27 + 4) + 88) + 14) << 16;
  if ( v30 != *(_DWORD *)(v5 + 84) )
  {
    *(_DWORD *)(v5 + 84) = v30;
    v29 = 1;
  }
  *(_BYTE *)(v5 + 140) = v112 & 1;
  if ( memcmp(&v141, (const void *)(v5 + 12), 0x10u) )
  {
    v31 = v144;
    v32 = v143;
    v33 = v141;
    v34 = v142;
    *(_DWORD *)(v5 + 32) = 0;
    *(_DWORD *)(v5 + 28) = 0;
    *(_DWORD *)(v5 + 24) = v31;
    *(_DWORD *)(v5 + 48) = v31;
    v35 = v145;
    *(_DWORD *)(v5 + 20) = v32;
    *(_DWORD *)(v5 + 44) = v32;
    *(_DWORD *)(v5 + 12) = v33;
    *(_DWORD *)(v5 + 16) = v34;
    *(_DWORD *)(v5 + 52) = v35;
    v36 = v146;
    *(_DWORD *)(v5 + 36) = v33;
    *(_DWORD *)(v5 + 40) = v34;
    *(_DWORD *)(v5 + 72) = 0x10000;
    *(_DWORD *)(v5 + 60) = 0x10000;
    *(_DWORD *)(v5 + 56) = v36;
    v37 = *(_BYTE *)(v5 + 142);
    *(_DWORD *)(v5 + 68) = 0;
    *(_DWORD *)(v5 + 64) = 0;
    if ( v37 == (v112 & 2) )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(v5 + 142) != (v112 & 2) )
  {
LABEL_28:
    *(_BYTE *)(v5 + 142) = v112 & 2;
    goto LABEL_29;
  }
  if ( v29 )
  {
LABEL_29:
    v38 = *(_DWORD *)(v5 + 88);
    if ( v38 )
    {
      v113 = 65536000 / v38;
      v125 = 65536000 / v38 <= 654;
    }
    else
    {
      v125 = 0;
      v113 = 0x10000;
      v38 = 1000;
    }
    if ( v30 < 0x40000 )
      v30 = 0x40000;
    v39 = *(_DWORD *)(*(_DWORD *)(v27 + 736) + 388) << 16;
    *(_DWORD *)(v5 + 176) = v39;
    if ( v39 <= 0 )
    {
      v111 = sub_6F7C9760(4915200, v113);
      *(_DWORD *)(v5 + 176) = v111;
      v39 = v111;
    }
    if ( v118 <= 0 )
    {
      v96 = *(_BYTE *)(v5 + 142);
      v42 = v5 + 144;
      *(_DWORD *)(v5 + 184) = 0;
      if ( v96 && !v125 )
        sub_6F77AEF0(v113, v30, v39, (int *)(v5 + 184), 0, v96, v5 + 144);
    }
    else
    {
      v40 = v38 << 16;
      if ( v118 <= (signed int)sub_6F7C9760(v40, v30) )
      {
        v110 = v40;
        v42 = v5 + 144;
        v118 = sub_6F7C9760(v110, v30);
        v41 = *(_DWORD *)(v5 + 176);
        *(_DWORD *)(v5 + 184) = 0;
        if ( !v118 )
          goto LABEL_40;
        v43 = (int *)(v5 + 184);
      }
      else
      {
        v41 = *(_DWORD *)(v5 + 176);
        v42 = v5 + 144;
        v43 = (int *)(v5 + 184);
        *(_DWORD *)(v5 + 184) = 0;
      }
      if ( v113 > 654 )
        sub_6F77AEF0(v113, v30, v41, v43, v118, 0, v42);
    }
LABEL_40:
    if ( *(_DWORD *)(*(_DWORD *)(v27 + 736) + 384) << 16 > 0
      && *(_DWORD *)(v5 + 176) > *(_DWORD *)(*(_DWORD *)(v27 + 736) + 384) << 17 )
    {
      v109 = sub_6F7C9760(4915200, v113);
      *(_DWORD *)(v5 + 180) = v109;
      v45 = v109;
    }
    else
    {
      v44 = sub_6F7C9760(7208960, v113);
      *(_DWORD *)(v5 + 180) = v44;
      v45 = v44;
    }
    v46 = *(_BYTE *)(v5 + 142);
    *(_DWORD *)(v5 + 188) = 0;
    if ( (v46 != 0 || v123 != 0) && !v125 )
      sub_6F77AEF0(v113, v30, v45, (int *)(v5 + 188), v123, v46, v42);
    v47 = 1;
    if ( !*(_DWORD *)(v5 + 184) )
      v47 = *(_DWORD *)(v5 + 188) != 0;
    *(_BYTE *)(v5 + 141) = v47;
    *(_BYTE *)(v5 + 192) = 0;
    v48 = *(_DWORD *)(v5 + 132);
    *(_DWORD *)(v5 + 500) = 0;
    memset((void *)((v5 + 200) & 0xFFFFFFFC), 0, 4 * ((v5 + 196 - ((v5 + 200) & 0xFFFFFFFC) + 308) >> 2));
    *(_DWORD *)(v5 + 196) = *(_DWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 208) = sub_6F7C9760(*(_DWORD *)(*(_DWORD *)(v48 + 736) + 372), 65536000);
    v132 = *(_DWORD *)(v48 + 736);
    *(_DWORD *)(v5 + 212) = *(_DWORD *)(v132 + 376) << 16;
    *(_DWORD *)(v5 + 216) = *(_DWORD *)(v132 + 380) << 16;
    v119 = *(_BYTE *)(v132 + 176);
    v114 = *(_BYTE *)(v132 + 177);
    v128 = v132 + 236;
    v126 = *(_BYTE *)(v132 + 178);
    v127 = *(_BYTE *)(v132 + 179);
    if ( *(_DWORD *)(v132 + 512) == 1 )
    {
      if ( !*(_BYTE *)(v132 + 176)
        || *(_BYTE *)(v132 + 176) == 4
        && *(_DWORD *)(v132 + 180) << 16 < -7864320
        && *(_DWORD *)(v132 + 184) << 16 < -7864320
        && *(_DWORD *)(v132 + 188) << 16 > 57671680
        && *(_DWORD *)(v132 + 192) << 16 > 57671680 )
      {
        v105 = *(_DWORD *)(v5 + 196);
        *(_DWORD *)(v5 + 252) = -7864321;
        v106 = (unsigned int)(((signed int)((unsigned __int64)(-7864321i64 * v105) >> 32) >> 31) + 0x8000)
             + -7864321i64 * v105;
        LODWORD(v106) = (HIDWORD(v106) << 16) + ((unsigned int)v106 >> 16) + 0x8000;
        *(_DWORD *)(v5 + 260) = v105;
        *(_DWORD *)(v5 + 244) = 49;
        LOWORD(v106) = 0;
        *(_DWORD *)(v5 + 256) = v106 - 0x8000;
        LODWORD(v106) = 2 * *(_DWORD *)(v5 + 188) + 57671681;
        *(_DWORD *)(v5 + 232) = v106;
        v107 = (unsigned int)(((signed int)((unsigned __int64)(v105 * (signed __int64)(signed int)v106) >> 32) >> 31)
                            + 0x8000)
             + v105 * (signed __int64)(signed int)v106;
        LODWORD(v107) = (HIDWORD(v107) << 16) + ((unsigned int)v107 >> 16) + 0x8000;
        *(_DWORD *)(v5 + 240) = v105;
        *(_DWORD *)(v5 + 224) = 50;
        LOWORD(v107) = 0;
        *(_BYTE *)(v5 + 205) = 1;
        *(_DWORD *)(v5 + 236) = v107 + 0x8000;
        goto LABEL_87;
      }
    }
    else if ( !*(_BYTE *)(v132 + 176) )
    {
      v130 = 0;
LABEL_58:
      if ( v114 )
      {
        v57 = *(_DWORD *)(v5 + 200);
        v58 = 0;
        do
        {
          v59 = v5 + 20 * v57;
          v60 = *(_DWORD *)(v128 + 4 * v58 + 4);
          v61 = *(_DWORD *)(v128 + 4 * v58) << 16;
          *(_DWORD *)(v59 + 264) = v61;
          v60 <<= 16;
          *(_DWORD *)(v59 + 268) = v60;
          v62 = v60 - v61;
          if ( v62 >= 0 )
          {
            *(_BYTE *)(v59 + 280) = 1;
            if ( v130 >= v62 )
              v62 = v130;
            ++v57;
            v130 = v62;
            *(_DWORD *)(v59 + 272) = *(_DWORD *)(v59 + 268);
            *(_DWORD *)(v5 + 200) = v57;
          }
          v58 += 2;
        }
        while ( v114 > v58 );
      }
      v115 = sub_6F7C9760(0x10000, *(_DWORD *)(v5 + 196));
      v120 = v5 + 272;
      v129 = 0;
      v131 = *(_DWORD *)(v5 + 200);
      if ( *(_DWORD *)(v5 + 200) )
      {
        do
        {
          v63 = *(_DWORD *)v120;
          v124 = *(_DWORD *)v120;
          if ( *(_BYTE *)(v120 + 8) )
          {
            if ( v127 )
            {
              v80 = 0x7FFFFFFF;
              v81 = 0;
              while ( 1 )
              {
                v82 = *(_DWORD *)(v132 + 332 + 4 * v81 + 4) << 16;
                v83 = (v63 - v82) >> 31;
                v84 = (v83 ^ (v63 - v82)) - v83;
                if ( v80 > v84 && v115 > v84 )
                {
                  *(_DWORD *)v120 = v82;
                  if ( (v83 ^ (v63 - v82)) == v83 )
                  {
                    v80 = 0;
                    goto LABEL_96;
                  }
                  v80 = (v83 ^ (v63 - v82)) - v83;
                }
                v81 += 2;
                if ( v127 <= v81 )
                  goto LABEL_96;
              }
            }
            v80 = 0x7FFFFFFF;
LABEL_96:
            if ( v126 > 1 )
            {
              v85 = *(_DWORD *)(v132 + 280) << 16;
              v86 = (((v124 - v85) >> 31) ^ (v124 - v85)) - ((v124 - v85) >> 31);
              if ( v86 < v80 && v115 > v86 )
                *(_DWORD *)v120 = v85;
            }
          }
          else if ( v126 > 2 )
          {
            v64 = 0x7FFFFFFF;
            v65 = 2;
            v66 = 2 * *(_DWORD *)(v5 + 188);
            do
            {
              v67 = v66 + (*(_DWORD *)(v132 + 276 + 4 * v65) << 16);
              v68 = (((v124 - v67) >> 31) ^ (v124 - v67)) - ((v124 - v67) >> 31);
              if ( v64 > v68 && v115 > v68 )
              {
                *(_DWORD *)v120 = v67;
                if ( (((v124 - v67) >> 31) ^ (v124 - v67)) == (v124 - v67) >> 31 )
                  break;
                v64 = (((v124 - v67) >> 31) ^ (v124 - v67)) - ((v124 - v67) >> 31);
              }
              v65 += 2;
            }
            while ( v126 > v65 );
          }
          ++v129;
          v120 += 20;
        }
        while ( v129 != v131 );
      }
      if ( v130 && (v69 = *(_DWORD *)(v5 + 208), v69 > (signed int)sub_6F7C9760(0x10000, v130)) )
      {
        v70 = sub_6F7C9760(0x10000, v130);
        *(_DWORD *)(v5 + 208) = v70;
      }
      else
      {
        v70 = *(_DWORD *)(v5 + 208);
      }
      v71 = *(_DWORD *)(v5 + 196);
      if ( v71 < v70 )
      {
        *(_BYTE *)(v5 + 204) = 1;
        v108 = 39322 - sub_6F7C9420(39322, v71, v70);
        if ( v108 > 0x7FFF )
          v108 = 0x7FFF;
        *(_DWORD *)(v5 + 220) = v108;
      }
      if ( *(_BYTE *)(v5 + 142) )
        *(_DWORD *)(v5 + 220) = 0;
      if ( *(_DWORD *)(v5 + 200) )
      {
        v72 = *(_DWORD *)(v5 + 196);
        v73 = *(_DWORD *)(v5 + 220);
        v74 = v5 + 272;
        v121 = v5;
        v75 = *(_DWORD *)(v5 + 200);
        v116 = v72;
        v76 = 0;
        do
        {
          while ( 1 )
          {
            v78 = *(_DWORD *)v74;
            if ( !*(_BYTE *)(v74 + 8) )
              break;
            v77 = (unsigned int)(((signed int)((unsigned __int64)(v116 * (signed __int64)v78) >> 32) >> 31) + 0x8000)
                + v116 * (signed __int64)v78;
            ++v76;
            v74 += 20;
            LODWORD(v77) = (HIDWORD(v77) << 16) + ((unsigned int)v77 >> 16) - v73 + 0x8000;
            LOWORD(v77) = 0;
            *(_DWORD *)(v74 - 16) = v77;
            if ( v76 == v75 )
              goto LABEL_86;
          }
          v79 = (unsigned int)(((signed int)((unsigned __int64)(v116 * (signed __int64)v78) >> 32) >> 31) + 0x8000)
              + v116 * (signed __int64)v78;
          LODWORD(v79) = v73 + (HIDWORD(v79) << 16) + ((unsigned int)v79 >> 16) + 0x8000;
          ++v76;
          v74 += 20;
          LOWORD(v79) = 0;
          *(_DWORD *)(v74 - 16) = v79;
        }
        while ( v76 != v75 );
LABEL_86:
        v5 = v121;
      }
LABEL_87:
      if ( *(_DWORD *)(v5 + 4) )
        return 3;
      goto LABEL_104;
    }
    v50 = *(_DWORD *)(v5 + 200);
    v130 = 0;
    v51 = 0;
    v49 = v132 + 180;
    do
    {
      v52 = v5 + 20 * v50;
      v53 = *(_DWORD *)(v49 + 4 * v51 + 4) << 16;
      v54 = *(_DWORD *)(v49 + 4 * v51) << 16;
      *(_DWORD *)(v52 + 264) = v54;
      *(_DWORD *)(v52 + 268) = v53;
      v55 = v53 - v54;
      if ( v55 >= 0 )
      {
        if ( v130 >= v55 )
          v55 = v130;
        v130 = v55;
        if ( v51 )
        {
          v56 = *(_DWORD *)(v5 + 188);
          *(_BYTE *)(v52 + 280) = 0;
          v56 *= 2;
          *(_DWORD *)(v52 + 264) += v56;
          *(_DWORD *)(v52 + 268) = v56 + v53;
          *(_DWORD *)(v52 + 272) = *(_DWORD *)(v52 + 264);
        }
        else
        {
          *(_BYTE *)(v52 + 280) = 1;
          *(_DWORD *)(v52 + 272) = v53;
        }
        *(_DWORD *)(v5 + 200) = ++v50;
      }
      v51 += 2;
    }
    while ( v119 > v51 );
    goto LABEL_58;
  }
LABEL_104:
  v87 = *(_BYTE *)(v5 + 141);
  *(_BYTE *)(v5 + 192) = 0;
  while ( 1 )
  {
    v88 = *(_DWORD *)(v5 + 128);
    *(_DWORD *)(v5 + 116) = 0;
    sub_6F7CA220(*(_DWORD *)(v88 + 12));
    sub_6F783180(v5 + 100, &v137);
    result = *(_DWORD *)(v5 + 4);
    if ( result )
      break;
    if ( !v87 || *(_DWORD *)(v5 + 116) >= 0 )
    {
      v89 = *(_DWORD *)(v5 + 128);
      v122 = v89;
      v90 = *(_DWORD *)(v89 + 20);
      if ( v90 )
      {
        v91 = *(_WORD *)v90;
        v117 = 0;
        if ( (signed __int16)v91 > 1 )
          v117 = *(_WORD *)(*(_DWORD *)(v90 + 12) + 2 * (signed __int16)v91 - 4) + 1;
        v92 = *(_WORD *)(v90 + 2);
        if ( v92 > 1 )
        {
          v93 = *(_DWORD *)(v90 + 4);
          v94 = v93 + 8 * v117;
          v95 = v93 + 8 * v92 - 8;
          if ( *(_DWORD *)v94 == *(_DWORD *)v95
            && *(_DWORD *)(v94 + 4) == *(_DWORD *)(v95 + 4)
            && *(_BYTE *)(*(_DWORD *)(v90 + 8) + v92 - 1) == 1 )
          {
            *(_WORD *)(v90 + 2) = --v92;
          }
        }
        if ( (signed __int16)v91 > 0 )
        {
          if ( v117 == v92 - 1 )
          {
            *(_WORD *)v90 = v91 - 1;
            *(_WORD *)(v90 + 2) = v92 - 1;
          }
          else
          {
            *(_WORD *)(*(_DWORD *)(v90 + 12) + 2 * v91 - 2) = v92 - 1;
          }
        }
      }
      sub_6F7CA8C0(*(_DWORD *)(v122 + 12));
      result = *(_DWORD *)(v5 + 4);
      break;
    }
    *(_BYTE *)(v5 + 192) = 1;
    v87 = 0;
  }
  if ( result )
    return 3;
  *(_DWORD *)(*(_DWORD *)(v5 + 128) + 552) = (v134 + 0x8000) >> 16;
  return result;
}
