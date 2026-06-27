void __cdecl sub_6F807D20(int a1, int a2)
{
  signed int v2; // eax@1
  int v3; // edi@1
  int v4; // edx@1
  signed int v5; // esi@2
  int v6; // ebx@2
  int v7; // ecx@2
  int v8; // esi@2
  int v9; // eax@2
  int v10; // ebx@2
  int v11; // ecx@2
  int v12; // esi@2
  int v13; // eax@2
  int v14; // ebx@2
  int v15; // ecx@2
  int v16; // esi@2
  int v17; // eax@2
  int v18; // ebx@2
  int v19; // ecx@2
  int v20; // esi@2
  int v21; // eax@2
  int v22; // ebx@2
  int v23; // ecx@2
  int v24; // esi@2
  int v25; // eax@2
  int v26; // ebx@2
  int v27; // ecx@2
  int v28; // esi@2
  int v29; // esi@3
  _BYTE *v30; // ebx@3
  int v31; // eax@12
  int v32; // edx@13
  int v33; // ecx@14
  int v34; // eax@15
  int v35; // edx@16
  int v36; // ecx@17
  int v37; // eax@18
  _WORD *v38; // edi@19
  unsigned int v39; // eax@19
  int v40; // ebx@19
  int v41; // ecx@19
  int v42; // edx@23
  int v43; // eax@24
  int v44; // eax@25
  int v45; // esi@26
  int v46; // esi@26
  int v47; // esi@26
  int v48; // eax@26
  unsigned int v49; // ST00_4@28
  _WORD *v50; // ebx@28
  int v51; // esi@28
  int v52; // ST04_4@36
  int v53; // edx@37
  int v54; // eax@38
  int v55; // ecx@39
  int v56; // edx@40
  int v57; // eax@41
  int v58; // ecx@42
  int v59; // edx@43
  unsigned int v60; // esi@44
  signed int v61; // ecx@44
  int v62; // ebx@44
  signed int v63; // edx@49
  signed int v64; // edx@50
  int v65; // eax@51
  int v66; // edx@52
  int v67; // edx@52
  int v68; // edx@52
  int v69; // eax@52
  int v70; // esi@54
  _WORD *v71; // ebx@54
  int v72; // eax@63
  int v73; // ecx@64
  int v74; // edx@65
  int v75; // eax@66
  int v76; // ecx@67
  int v77; // edx@68
  int v78; // eax@69
  int v79; // ebp@70
  int v80; // esi@72
  const void *v81; // ebx@73
  int v82; // edi@75
  int v83; // esi@75
  int v84; // esi@99
  const void *v85; // ecx@99
  int v86; // edx@107
  unsigned int v87; // edi@112
  int v88; // edi@113
  _BYTE *v89; // ebx@114
  int v90; // esi@114
  int v91; // ecx@115
  size_t v92; // ebp@119
  int v93; // ebx@123
  int v94; // edx@123
  int v95; // edi@123
  int v96; // edx@125
  int v97; // ecx@125
  int v98; // ebp@125
  int v99; // edx@126
  int v100; // esi@126
  int v101; // ecx@126
  int v102; // ebp@128
  signed int v103; // esi@128
  int v104; // ST04_4@128
  int v105; // ebx@128
  char *v106; // ebp@128
  int v107; // eax@129
  int v108; // edx@129
  int v109; // [sp+18h] [bp-C34h]@3
  unsigned int v110; // [sp+18h] [bp-C34h]@54
  int *v111; // [sp+18h] [bp-C34h]@73
  int v112; // [sp+18h] [bp-C34h]@118
  int v113; // [sp+1Ch] [bp-C30h]@3
  unsigned int v114; // [sp+1Ch] [bp-C30h]@28
  int v115; // [sp+1Ch] [bp-C30h]@73
  signed int v116; // [sp+1Ch] [bp-C30h]@118
  int *v117; // [sp+20h] [bp-C2Ch]@70
  int v118; // [sp+20h] [bp-C2Ch]@123
  const void **v119; // [sp+24h] [bp-C28h]@71
  int v120; // [sp+24h] [bp-C28h]@126
  int v121; // [sp+24h] [bp-C28h]@135
  char *v122; // [sp+28h] [bp-C24h]@71
  int v123; // [sp+2Ch] [bp-C20h]@70
  const void *v124; // [sp+30h] [bp-C1Ch]@75
  const void *v125; // [sp+34h] [bp-C18h]@84
  int v126[384]; // [sp+630h] [bp-61Ch]@70
  char v127; // [sp+C30h] [bp-1Ch]@111

  v2 = *(_BYTE *)(a2 + 256);
  v3 = a2 + 320;
  v4 = a2 + 257;
  do
  {
    v5 = *(_BYTE *)v4;
    v6 = v2 < v5;
    v7 = v2 - v5;
    v8 = *(_BYTE *)(v4 + 1);
    v9 = v2 - (-v6 & v7);
    v10 = v9 < v8;
    v11 = v9 - v8;
    v12 = *(_BYTE *)(v4 + 2);
    v13 = v9 - (-v10 & v11);
    v14 = v13 < v12;
    v15 = v13 - v12;
    v16 = *(_BYTE *)(v4 + 3);
    v17 = v13 - (-v14 & v15);
    v18 = v17 < v16;
    v19 = v17 - v16;
    v20 = *(_BYTE *)(v4 + 4);
    v21 = v17 - (-v18 & v19);
    v22 = v21 < v20;
    v23 = v21 - v20;
    v24 = *(_BYTE *)(v4 + 5);
    v25 = v21 - (-v22 & v23);
    v26 = v25 < v24;
    v27 = v25 - v24;
    v28 = *(_BYTE *)(v4 + 6);
    v4 += 7;
    v2 = v25 - (-v26 & v27) - (v25 - (-v26 & v27) < v28 ? v25 - (-v26 & v27) - v28 : 0);
  }
  while ( v4 != v3 );
  v29 = sub_6F8095C0(v2);
  sub_6F832980(a1, v29, 3u);
  v109 = a2 + 256;
  v113 = ((_BYTE)v3 + ~(_BYTE)a2) & 7;
  sub_6F832980(a1, *(_BYTE *)(a2 + 256), v29);
  v30 = (_BYTE *)(a2 + 257);
  if ( a2 + 257 != v3 )
  {
    if ( !(((_BYTE)v3 + ~(_BYTE)a2) & 7) )
      goto LABEL_140;
    if ( v113 != 1 )
    {
      if ( v113 != 2 )
      {
        if ( v113 != 3 )
        {
          if ( v113 != 4 )
          {
            if ( v113 != 5 )
            {
              if ( v113 != 6 )
              {
                sub_6F832980(a1, *v30, v29);
                v30 = (_BYTE *)(a2 + 258);
              }
              v31 = *v30++;
              sub_6F832980(a1, v31, v29);
            }
            v32 = *v30++;
            sub_6F832980(a1, v32, v29);
          }
          v33 = *v30++;
          sub_6F832980(a1, v33, v29);
        }
        v34 = *v30++;
        sub_6F832980(a1, v34, v29);
      }
      v35 = *v30++;
      sub_6F832980(a1, v35, v29);
    }
    v36 = *v30++;
    sub_6F832980(a1, v36, v29);
    if ( v30 != (_BYTE *)v3 )
    {
LABEL_140:
      do
      {
        v37 = *v30;
        v30 += 8;
        sub_6F832980(a1, v37, v29);
        sub_6F832980(a1, *(v30 - 7), v29);
        sub_6F832980(a1, *(v30 - 6), v29);
        sub_6F832980(a1, *(v30 - 5), v29);
        sub_6F832980(a1, *(v30 - 4), v29);
        sub_6F832980(a1, *(v30 - 3), v29);
        sub_6F832980(a1, *(v30 - 2), v29);
        sub_6F832980(a1, *(v30 - 1), v29);
      }
      while ( v30 != (_BYTE *)v3 );
    }
  }
  v38 = (_WORD *)(a2 + 128);
  v39 = ((unsigned int)(v109 - (a2 + 128) - 2) >> 1) & 3;
  v40 = *(_WORD *)(a2 + 128) - (*(_WORD *)(a2 + 128) == 0 ? *(_WORD *)(a2 + 128) - 1 : 0);
  v41 = a2 + 130;
  if ( v109 != a2 + 130 )
  {
    if ( !v39 )
      goto LABEL_141;
    if ( v39 != 1 )
    {
      if ( v39 != 2 )
      {
        v42 = *(_WORD *)v41;
        v41 = a2 + 132;
        v40 = v42 - (v40 > v42 ? v42 - v40 : 0);
      }
      v43 = *(_WORD *)v41;
      v41 += 2;
      v40 = v43 - (v40 > v43 ? v43 - v40 : 0);
    }
    v44 = *(_WORD *)v41;
    v41 += 2;
    v40 = v44 - (v40 > v44 ? v44 - v40 : 0);
    if ( v109 != v41 )
    {
LABEL_141:
      do
      {
        v45 = *(_WORD *)v41 - (v40 > *(_WORD *)v41 ? *(_WORD *)v41 - v40 : 0);
        v46 = *(_WORD *)(v41 + 2) - (v45 > *(_WORD *)(v41 + 2) ? *(_WORD *)(v41 + 2) - v45 : 0);
        v47 = *(_WORD *)(v41 + 4) - (v46 > *(_WORD *)(v41 + 4) ? *(_WORD *)(v41 + 4) - v46 : 0);
        v48 = *(_WORD *)(v41 + 6);
        v41 += 8;
        v40 = v48 - (v47 > v48 ? v48 - v47 : 0);
      }
      while ( v109 != v41 );
      v38 = (_WORD *)(a2 + 128);
    }
  }
  v49 = v40;
  v50 = v38 + 1;
  v51 = sub_6F8095C0(v49);
  sub_6F832980(a1, v51 - 1, 4u);
  v114 = ((unsigned int)(v109 - (_DWORD)v38 - 2) >> 1) & 7;
  sub_6F832980(a1, *v38, v51);
  if ( (_WORD *)v109 != v38 + 1 )
  {
    if ( !v114 )
      goto LABEL_142;
    if ( v114 != 1 )
    {
      if ( v114 != 2 )
      {
        if ( v114 != 3 )
        {
          if ( v114 != 4 )
          {
            if ( v114 != 5 )
            {
              if ( v114 != 6 )
              {
                v52 = *v50;
                v50 = v38 + 2;
                sub_6F832980(a1, v52, v51);
              }
              v53 = *v50;
              ++v50;
              sub_6F832980(a1, v53, v51);
            }
            v54 = *v50;
            ++v50;
            sub_6F832980(a1, v54, v51);
          }
          v55 = *v50;
          ++v50;
          sub_6F832980(a1, v55, v51);
        }
        v56 = *v50;
        ++v50;
        sub_6F832980(a1, v56, v51);
      }
      v57 = *v50;
      ++v50;
      sub_6F832980(a1, v57, v51);
    }
    v58 = *v50;
    ++v50;
    sub_6F832980(a1, v58, v51);
    if ( (_WORD *)v109 != v50 )
    {
LABEL_142:
      do
      {
        v59 = *v50;
        v50 += 8;
        sub_6F832980(a1, v59, v51);
        sub_6F832980(a1, *(v50 - 7), v51);
        sub_6F832980(a1, *(v50 - 6), v51);
        sub_6F832980(a1, *(v50 - 5), v51);
        sub_6F832980(a1, *(v50 - 4), v51);
        sub_6F832980(a1, *(v50 - 3), v51);
        sub_6F832980(a1, *(v50 - 2), v51);
        sub_6F832980(a1, *(v50 - 1), v51);
      }
      while ( (_WORD *)v109 != v50 );
    }
  }
  v60 = (((unsigned int)v38 + -a2 - 2) >> 1) & 3;
  v61 = *(_WORD *)a2 - (*(_WORD *)a2 == 0 ? *(_WORD *)a2 - 1 : 0);
  v62 = a2 + 2;
  if ( v38 != (_WORD *)(a2 + 2) )
  {
    if ( !v60 )
      goto LABEL_143;
    if ( v60 != 1 )
    {
      if ( v60 != 2 )
      {
        v61 = *(_WORD *)v62 - (v61 > *(_WORD *)v62 ? *(_WORD *)v62 - v61 : 0);
        v62 = a2 + 4;
      }
      v63 = *(_WORD *)v62;
      v62 += 2;
      v61 = v63 - (v61 > v63 ? v63 - v61 : 0);
    }
    v64 = *(_WORD *)v62;
    v62 += 2;
    v61 = v64 - (v61 > v64 ? v64 - v61 : 0);
    if ( v38 != (_WORD *)v62 )
    {
LABEL_143:
      v65 = v61;
      do
      {
        v66 = *(_WORD *)v62 - (v65 > *(_WORD *)v62 ? *(_WORD *)v62 - v65 : 0);
        v67 = *(_WORD *)(v62 + 2) - (v66 > *(_WORD *)(v62 + 2) ? *(_WORD *)(v62 + 2) - v66 : 0);
        v68 = *(_WORD *)(v62 + 4) - (v67 > *(_WORD *)(v62 + 4) ? *(_WORD *)(v62 + 4) - v67 : 0);
        v69 = *(_WORD *)(v62 + 6);
        v62 += 8;
        v65 = v69 - (v68 > v69 ? v69 - v68 : 0);
      }
      while ( v38 != (_WORD *)v62 );
      v61 = v65;
    }
  }
  v70 = sub_6F8095C0(v61);
  sub_6F832980(a1, v70 - 1, 4u);
  v110 = (((unsigned int)v38 + -a2 - 2) >> 1) & 7;
  sub_6F832980(a1, *(_WORD *)a2, v70);
  v71 = (_WORD *)(a2 + 2);
  if ( v38 != (_WORD *)(a2 + 2) )
  {
    if ( !v110 )
      goto LABEL_144;
    if ( v110 != 1 )
    {
      if ( v110 != 2 )
      {
        if ( v110 != 3 )
        {
          if ( v110 != 4 )
          {
            if ( v110 != 5 )
            {
              if ( v110 != 6 )
              {
                sub_6F832980(a1, *v71, v70);
                v71 = (_WORD *)(a2 + 4);
              }
              v72 = *v71;
              ++v71;
              sub_6F832980(a1, v72, v70);
            }
            v73 = *v71;
            ++v71;
            sub_6F832980(a1, v73, v70);
          }
          v74 = *v71;
          ++v71;
          sub_6F832980(a1, v74, v70);
        }
        v75 = *v71;
        ++v71;
        sub_6F832980(a1, v75, v70);
      }
      v76 = *v71;
      ++v71;
      sub_6F832980(a1, v76, v70);
    }
    v77 = *v71;
    ++v71;
    sub_6F832980(a1, v77, v70);
    if ( v38 != v71 )
    {
LABEL_144:
      do
      {
        v78 = *v71;
        v71 += 8;
        sub_6F832980(a1, v78, v70);
        sub_6F832980(a1, *(v71 - 7), v70);
        sub_6F832980(a1, *(v71 - 6), v70);
        sub_6F832980(a1, *(v71 - 5), v70);
        sub_6F832980(a1, *(v71 - 4), v70);
        sub_6F832980(a1, *(v71 - 3), v70);
        sub_6F832980(a1, *(v71 - 2), v70);
        sub_6F832980(a1, *(v71 - 1), v70);
      }
      while ( v38 != v71 );
    }
  }
  v79 = 0;
  v117 = v126;
  v123 = a2 + 328;
  do
  {
    v119 = (const void **)v123;
    v122 = (char *)(v117 + 192);
    do
    {
      v80 = (int)*(v119 - 2);
      if ( v80 >= 0 )
      {
        v81 = *v119;
        v111 = v117;
        v115 = (int)*v119 + 64 * (v80 + 1);
        do
        {
          if ( v79 )
          {
            v82 = 0;
            v83 = ((_BYTE)v79 - 1) & 7;
            if ( !memcmp(v124, v81, 0x40u) )
              goto LABEL_132;
            v82 = 1;
            if ( 1 != v79 )
            {
              if ( !(((_BYTE)v79 - 1) & 7) )
              {
LABEL_98:
                while ( memcmp(*(&v124 + v82), v81, 0x40u) )
                {
                  v84 = v82 + 1;
                  v85 = *(&v124 + v82++ + 1);
                  if ( !memcmp(v85, v81, 0x40u) )
                    break;
                  if ( !memcmp(*(&v124 + ++v82), v81, 0x40u) )
                    break;
                  v82 = v84 + 2;
                  if ( !memcmp(*(&v124 + v84 + 2), v81, 0x40u) )
                    break;
                  v82 = v84 + 3;
                  if ( !memcmp(*(&v124 + v84 + 3), v81, 0x40u) )
                    break;
                  v82 = v84 + 4;
                  if ( !memcmp(*(&v124 + v84 + 4), v81, 0x40u) )
                    break;
                  v82 = v84 + 5;
                  if ( !memcmp(*(&v124 + v84 + 5), v81, 0x40u) )
                    break;
                  v82 = v84 + 6;
                  if ( !memcmp(*(&v124 + v84 + 6), v81, 0x40u) )
                    break;
                  v82 = v84 + 7;
                  if ( v84 + 7 == v79 )
                    goto LABEL_107;
                }
LABEL_132:
                *v111 = v82;
                goto LABEL_109;
              }
              if ( v83 != 1 )
              {
                if ( v83 != 2 )
                {
                  if ( v83 != 3 )
                  {
                    if ( v83 != 4 )
                    {
                      if ( v83 != 5 )
                      {
                        if ( v83 != 6 )
                        {
                          if ( !memcmp(v125, v81, 0x40u) )
                            goto LABEL_132;
                          v82 = 2;
                        }
                        if ( !memcmp(*(&v124 + v82), v81, 0x40u) )
                          goto LABEL_132;
                        ++v82;
                      }
                      if ( !memcmp(*(&v124 + v82), v81, 0x40u) )
                        goto LABEL_132;
                      ++v82;
                    }
                    if ( !memcmp(*(&v124 + v82), v81, 0x40u) )
                      goto LABEL_132;
                    ++v82;
                  }
                  if ( !memcmp(*(&v124 + v82), v81, 0x40u) )
                    goto LABEL_132;
                  ++v82;
                }
                if ( !memcmp(*(&v124 + v82), v81, 0x40u) )
                  goto LABEL_132;
                ++v82;
              }
              if ( !memcmp(*(&v124 + v82), v81, 0x40u) )
                goto LABEL_132;
              if ( ++v82 != v79 )
                goto LABEL_98;
            }
LABEL_107:
            v86 = v79;
          }
          else
          {
            v86 = 0;
          }
          *(&v124 + v86) = v81;
          *v111 = v79++;
LABEL_109:
          v81 = (char *)v81 + 64;
          ++v111;
        }
        while ( v81 != (const void *)v115 );
      }
      v117 += 64;
      v119 += 3;
    }
    while ( (int *)v122 != v117 );
    v123 += 36;
  }
  while ( v122 != &v127 );
  v87 = v79 - 1;
  sub_6F832980(a1, v79 - 1, 9u);
  if ( v79 )
  {
    v88 = 0;
    do
    {
      v89 = *(&v124 + v88);
      v90 = (int)(v89 + 64);
      do
      {
        v91 = *v89;
        v89 += 8;
        sub_6F832980(a1, v91, 8u);
        sub_6F832980(a1, *(v89 - 7), 8u);
        sub_6F832980(a1, *(v89 - 6), 8u);
        sub_6F832980(a1, *(v89 - 5), 8u);
        sub_6F832980(a1, *(v89 - 4), 8u);
        sub_6F832980(a1, *(v89 - 3), 8u);
        sub_6F832980(a1, *(v89 - 2), 8u);
        sub_6F832980(a1, *(v89 - 1), 8u);
      }
      while ( v89 != (_BYTE *)v90 );
      ++v88;
    }
    while ( v88 != v79 );
    v87 = v79 - 1;
  }
  v116 = 0;
  v112 = sub_6F8095C0(v87);
  while ( 2 )
  {
    while ( 1 )
    {
      v93 = v116 / 3;
      v118 = v116 % 3;
      v94 = 12 * (v116 % 3);
      v95 = v94 + a2 + 36 * (v116 / 3) + 320;
      if ( !v116 )
        break;
      if ( v93 == 1 )
      {
        v96 = a2 + v94;
        v97 = *(_DWORD *)v95;
        v98 = *(_DWORD *)v95;
        if ( *(_DWORD *)v95 == *(_DWORD *)(v96 + 320) )
        {
          v121 = 4 * v97;
          if ( !memcmp(*(const void **)(v95 + 4), *(const void **)(v96 + 324), 4 * v97)
            && !memcmp(&v126[64 * (v118 + 3)], &v126[64 * v118], v121 + 4) )
          {
            sub_6F832980(a1, 1, 2u);
            goto LABEL_122;
          }
        }
      }
      else
      {
        v98 = *(_DWORD *)v95;
      }
      v99 = (v116 - 1) / 3;
      v100 = (v116 - 1) % 3;
      v120 = 3 * v99;
      v101 = a2 + 4 * (9 * v99 + 3 * v100);
      if ( *(_DWORD *)(v101 + 320) != v98
        || (v92 = 4 * v98, memcmp(*(const void **)(v95 + 4), *(const void **)(v101 + 324), v92))
        || memcmp(&v126[64 * (v118 + 3 * v93)], &v126[64 * (v100 + v120)], v92 + 4) )
      {
        sub_6F832980(a1, 1, 1u);
        break;
      }
      sub_6F832980(a1, 0, (v93 == 1) + 1);
LABEL_122:
      if ( ++v116 == 6 )
        return;
    }
    v102 = (v118 + 3 * v93) << 8;
    v103 = 0;
    v104 = v126[64 * (v118 + 3 * v93)];
    v105 = 0;
    sub_6F832980(a1, v104, v112);
    v106 = (char *)v126 + v102;
    do
    {
      v107 = sub_6F8095C0(62 - v103);
      sub_6F832980(a1, *(_DWORD *)(*(_DWORD *)(v95 + 4) + v105) - 1, v107);
      v103 += *(_DWORD *)(*(_DWORD *)(v95 + 4) + v105);
      v108 = *(_DWORD *)&v106[v105 + 4];
      v105 += 4;
      sub_6F832980(a1, v108, v112);
    }
    while ( v103 <= 62 );
    if ( ++v116 != 6 )
      continue;
    break;
  }
}
