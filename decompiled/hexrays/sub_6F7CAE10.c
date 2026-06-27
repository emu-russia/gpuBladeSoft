signed int __usercall sub_6F7CAE10@<eax>(int a1@<eax>, unsigned int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5, int *a6, unsigned int *a7, int a8, _DWORD *a9, unsigned int *a10)
{
  unsigned int v10; // edi@1
  int v11; // esi@1
  int v12; // edx@1
  unsigned int v13; // eax@1
  int v14; // edx@3
  unsigned int v15; // ebx@4
  unsigned int v16; // ecx@18
  signed int v17; // ebp@19
  unsigned int v18; // edx@36
  int v19; // ecx@37
  int v20; // ebx@37
  int v21; // edx@39
  int v22; // eax@40
  int v23; // ecx@40
  unsigned int v24; // eax@42
  int v25; // edx@43
  int v26; // ecx@44
  int v27; // edx@46
  int v28; // eax@48
  unsigned int v29; // edi@50
  unsigned int v30; // ebx@50
  int v31; // edx@51
  unsigned int v32; // edi@52
  unsigned int v33; // eax@55
  unsigned int v34; // esi@56
  unsigned int j; // ecx@56
  int v36; // ecx@59
  unsigned int v37; // ecx@61
  int v38; // esi@62
  signed int v39; // ebp@63
  unsigned int v40; // ST08_4@63
  int v41; // esi@63
  int v42; // ecx@63
  char v43; // bl@65
  unsigned int v44; // eax@66
  signed int v45; // esi@68
  unsigned int v46; // edx@68
  int k; // eax@68
  unsigned int v48; // edx@70
  unsigned int v49; // eax@70
  int v50; // eax@74
  int v51; // ebx@75
  int v52; // ebx@76
  int v53; // ebx@77
  int v54; // ebx@78
  int v55; // ebx@79
  int v56; // ebx@80
  int v57; // ebx@81
  int v58; // ebx@82
  int v59; // ebx@83
  int v60; // ebx@84
  int v61; // ebx@85
  int v62; // ebx@86
  int v63; // ebx@87
  unsigned int v64; // eax@95
  int v65; // eax@99
  int v66; // eax@100
  int v67; // eax@102
  int v68; // eax@104
  int v69; // eax@106
  int v70; // eax@108
  int v71; // eax@110
  int v72; // eax@112
  int v73; // eax@114
  int v74; // eax@116
  int v75; // eax@118
  int v76; // eax@120
  int v77; // eax@122
  int v78; // eax@124
  signed int result; // eax@129
  int v80; // eax@133
  signed int v81; // [sp+0h] [bp-120h]@19
  int v82; // [sp+0h] [bp-120h]@50
  signed int v83; // [sp+4h] [bp-11Ch]@47
  int v84; // [sp+8h] [bp-118h]@47
  int v85; // [sp+Ch] [bp-114h]@47
  unsigned int v86; // [sp+10h] [bp-110h]@20
  unsigned int v87; // [sp+14h] [bp-10Ch]@47
  int i; // [sp+14h] [bp-10Ch]@50
  int v89; // [sp+18h] [bp-108h]@42
  unsigned int v90; // [sp+1Ch] [bp-104h]@48
  unsigned int v91; // [sp+24h] [bp-FCh]@47
  unsigned int v92; // [sp+28h] [bp-F8h]@4
  unsigned int v93; // [sp+2Ch] [bp-F4h]@47
  int v94; // [sp+30h] [bp-F0h]@47
  int *v95; // [sp+34h] [bp-ECh]@47
  int v96; // [sp+38h] [bp-E8h]@49
  signed int v97; // [sp+3Ch] [bp-E4h]@36
  unsigned int v98; // [sp+40h] [bp-E0h]@1
  unsigned int *v99; // [sp+48h] [bp-D8h]@47
  int v100; // [sp+4Ch] [bp-D4h]@38
  int v101[15]; // [sp+54h] [bp-CCh]@46
  int v102; // [sp+90h] [bp-90h]@1
  unsigned int v103; // [sp+94h] [bp-8Ch]@1
  int v104; // [sp+98h] [bp-88h]@1
  int v105; // [sp+9Ch] [bp-84h]@1
  int v106; // [sp+A0h] [bp-80h]@1
  int v107; // [sp+A4h] [bp-7Ch]@1
  int v108; // [sp+A8h] [bp-78h]@1
  int v109; // [sp+ACh] [bp-74h]@1
  int v110; // [sp+B0h] [bp-70h]@1
  int v111; // [sp+B4h] [bp-6Ch]@1
  int v112; // [sp+B8h] [bp-68h]@1
  int v113; // [sp+BCh] [bp-64h]@1
  int v114; // [sp+C0h] [bp-60h]@1
  int v115; // [sp+C4h] [bp-5Ch]@1
  int v116; // [sp+C8h] [bp-58h]@1
  int v117; // [sp+CCh] [bp-54h]@1
  int v118; // [sp+D0h] [bp-50h]@44
  int v119; // [sp+D4h] [bp-4Ch]@39
  int v120[18]; // [sp+D8h] [bp-48h]@41

  v10 = a2;
  v11 = a1;
  v12 = a1;
  v13 = v10;
  v98 = a3;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  do
  {
    v12 += 4;
    ++*(&v102 + *(_DWORD *)(v12 - 4));
    --v13;
  }
  while ( v13 );
  v14 = v102;
  if ( v10 == v102 )
  {
    *a6 = 0;
    *a7 = 0;
    return 0;
  }
  v15 = *a7;
  v92 = v103;
  if ( v103 )
  {
    v16 = 1;
    goto LABEL_91;
  }
  if ( v104 )
  {
    v16 = 2;
    goto LABEL_91;
  }
  if ( v105 )
  {
    v16 = 3;
    goto LABEL_91;
  }
  if ( v106 )
  {
    v16 = 4;
    goto LABEL_91;
  }
  if ( v107 )
  {
    v16 = 5;
    goto LABEL_91;
  }
  if ( v108 )
  {
    v16 = 6;
    goto LABEL_91;
  }
  if ( v109 )
  {
    v16 = 7;
    goto LABEL_91;
  }
  if ( v110 )
  {
    v16 = 8;
    goto LABEL_91;
  }
  if ( v111 )
  {
    v16 = 9;
    goto LABEL_91;
  }
  if ( v112 )
  {
    v16 = 10;
    goto LABEL_91;
  }
  if ( v113 )
  {
    v16 = 11;
    goto LABEL_91;
  }
  if ( v114 )
  {
    v16 = 12;
    goto LABEL_91;
  }
  if ( v115 )
  {
    v16 = 13;
LABEL_91:
    v86 = v16;
    v17 = v16;
    v81 = 1 << v16;
    if ( v15 < v16 )
      goto LABEL_93;
    goto LABEL_92;
  }
  if ( v116 )
  {
    v16 = 14;
    goto LABEL_91;
  }
  v16 = 15;
  if ( v117 )
    goto LABEL_91;
  v81 = 0x10000;
  v17 = 16;
  v16 = 16;
  if ( v15 <= 0xF )
  {
    v86 = 16;
    goto LABEL_21;
  }
LABEL_92:
  v86 = *a7;
LABEL_93:
  if ( v117 )
  {
    v18 = 15;
    goto LABEL_95;
  }
LABEL_21:
  if ( v116 )
  {
    v18 = 14;
    goto LABEL_95;
  }
  if ( v115 )
  {
    v18 = 13;
    goto LABEL_95;
  }
  if ( v114 )
  {
    v18 = 12;
    goto LABEL_95;
  }
  if ( v113 )
  {
    v18 = 11;
    goto LABEL_95;
  }
  if ( v112 )
  {
    v18 = 10;
    goto LABEL_95;
  }
  if ( v111 )
  {
    v18 = 9;
    goto LABEL_95;
  }
  if ( v110 )
  {
    v18 = 8;
    goto LABEL_95;
  }
  if ( v109 )
  {
    v18 = 7;
    goto LABEL_95;
  }
  if ( v108 )
  {
    v18 = 6;
    goto LABEL_95;
  }
  if ( v107 )
  {
    v18 = 5;
    goto LABEL_95;
  }
  if ( v106 )
  {
    v18 = 4;
    goto LABEL_95;
  }
  if ( v105 )
  {
    v18 = 3;
    goto LABEL_95;
  }
  if ( v104 )
  {
    v18 = 2;
    goto LABEL_95;
  }
  if ( v103 )
  {
    v18 = 1;
LABEL_95:
    v64 = v86;
    v97 = v18;
    v92 = v86;
    if ( v86 > v18 )
    {
      v92 = v18;
      v86 = v18;
      v64 = v18;
    }
    *a7 = v64;
    if ( v16 < v18 )
    {
      if ( v81 - *(&v102 + v16) < 0 )
        return -3;
      v65 = 2 * (v81 - *(&v102 + v16));
      if ( v18 > v16 + 1 )
      {
        v66 = v65 - *(&v102 + v16 + 1);
        if ( v66 < 0 )
          return -3;
        v65 = 2 * v66;
        if ( v16 + 2 < v18 )
        {
          v67 = v65 - *(&v102 + v16 + 2);
          if ( v67 < 0 )
            return -3;
          v65 = 2 * v67;
          if ( v18 > v16 + 3 )
          {
            v68 = v65 - *(&v102 + v16 + 3);
            if ( v68 < 0 )
              return -3;
            v65 = 2 * v68;
            if ( v18 > v16 + 4 )
            {
              v69 = v65 - *(&v102 + v16 + 4);
              if ( v69 < 0 )
                return -3;
              v65 = 2 * v69;
              if ( v16 + 5 < v18 )
              {
                v70 = v65 - *(&v102 + v16 + 5);
                if ( v70 < 0 )
                  return -3;
                v65 = 2 * v70;
                if ( v16 + 6 < v18 )
                {
                  v71 = v65 - *(&v102 + v16 + 6);
                  if ( v71 < 0 )
                    return -3;
                  v65 = 2 * v71;
                  if ( v16 + 7 < v18 )
                  {
                    v72 = v65 - *(&v102 + v16 + 7);
                    if ( v72 < 0 )
                      return -3;
                    v65 = 2 * v72;
                    if ( v16 + 8 < v18 )
                    {
                      v73 = v65 - *(&v102 + v16 + 8);
                      if ( v73 < 0 )
                        return -3;
                      v65 = 2 * v73;
                      if ( v16 + 9 < v18 )
                      {
                        v74 = v65 - *(&v102 + v16 + 9);
                        if ( v74 < 0 )
                          return -3;
                        v65 = 2 * v74;
                        if ( v16 + 10 < v18 )
                        {
                          v75 = v65 - *(&v102 + v16 + 10);
                          if ( v75 < 0 )
                            return -3;
                          v65 = 2 * v75;
                          if ( v16 + 11 < v18 )
                          {
                            v76 = v65 - *(&v102 + v16 + 11);
                            if ( v76 < 0 )
                              return -3;
                            v65 = 2 * v76;
                            if ( v16 + 12 < v18 )
                            {
                              v77 = v65 - *(&v102 + v16 + 12);
                              if ( v77 < 0 )
                                return -3;
                              v65 = 2 * v77;
                              if ( v16 + 13 < v18 )
                              {
                                v78 = v65 - v116;
                                if ( v78 < 0 )
                                  return -3;
                                v65 = 2 * v78;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v19 = *(&v102 + v18);
      v20 = v65;
LABEL_38:
      v100 = v20 - v19;
      if ( v20 - v19 >= 0 )
      {
        *(&v102 + v18) = v20;
        v21 = v18 - 1;
        v119 = 0;
        if ( !v21 )
          goto LABEL_42;
        goto LABEL_40;
      }
      return -3;
    }
LABEL_37:
    v19 = *(&v102 + v18);
    v20 = v81;
    goto LABEL_38;
  }
  if ( !v86 )
  {
    v97 = 0;
    v18 = 0;
    *a7 = 0;
    goto LABEL_37;
  }
  *a7 = 0;
  v100 = v81 - v14;
  if ( v81 - v14 < 0 )
    return -3;
  v119 = 0;
  v21 = -1;
  v97 = 0;
  v86 = 0;
  v102 = v81;
LABEL_40:
  v22 = 0;
  v23 = 0;
  do
  {
    v23 += *(&v103 + v22);
    v120[v22++] = v23;
  }
  while ( v22 != v21 );
LABEL_42:
  v89 = v17;
  v24 = 0;
  do
  {
    v25 = *(_DWORD *)(v11 + 4 * v24);
    if ( v25 )
    {
      v26 = *(&v118 + v25);
      a10[v26] = v24;
      *(&v118 + v25) = v26 + 1;
    }
    ++v24;
  }
  while ( v10 > v24 );
  v101[0] = 0;
  v27 = *(&v118 + v97);
  v118 = 0;
  if ( v17 <= v97 )
  {
    v84 = -v86;
    v93 = 0;
    v87 = 0;
    v85 = 0;
    v91 = 0;
    v83 = -1;
    v99 = &a10[v27];
    v95 = &v102 + v17;
    v94 = v97 - v17;
    while ( 2 )
    {
      v90 = *v95;
      v28 = *v95;
      while ( 1 )
      {
        v96 = v28 - 1;
        if ( !v28 )
          break;
        v29 = v87;
        v30 = v89 - (v86 + v84);
        v82 = v86 + v84;
        for ( i = (int)&v95[-v30]; v82 < v89; v82 += v86 )
        {
          v31 = v83 + 1;
          if ( v90 >= 1 << v30 )
            goto LABEL_170;
          v32 = v30 + v94;
          if ( v30 + v94 > v92 )
            v32 = v92;
          if ( v32 <= v30 )
          {
LABEL_170:
            v29 = 1 << v30;
            LOBYTE(v33) = v30;
          }
          else
          {
            v33 = v30 + 1;
            if ( v32 > v30 + 1 )
            {
              v34 = v95[1];
              for ( j = 2 * ((1 << v30) - v96) - 2; j > v34; j = 2 * v36 )
              {
                ++v33;
                v36 = j - v34;
                if ( v32 <= v33 )
                  break;
                v34 = *(_DWORD *)(i + 4 * v33);
              }
            }
            v29 = 1 << v33;
          }
          v37 = *a9 + v29;
          if ( v37 > 0x5A0 )
            return -3;
          v38 = a8 + 8 * *a9;
          v85 = v38;
          v101[v31] = v38;
          *a9 = v37;
          if ( v83 == -1 )
          {
            v83 = 0;
            *a6 = v38;
          }
          else
          {
            v39 = v83++;
            *(&v118 + v31) = v91;
            v40 = v91 >> v84;
            v41 = v101[v39];
            v42 = v41 + 8 * v40;
            v93 = ((v85 - v41) >> 3) - v40;
            *(_BYTE *)v42 = v33;
            *(_DWORD *)(v42 + 4) = v93;
            *(_BYTE *)(v42 + 1) = v86;
          }
          i += 4 * v86;
          v84 = v82;
          v30 -= v86;
        }
        v87 = v29;
        v43 = -64;
        if ( a10 < v99 )
        {
          v44 = *a10;
          v93 = *a10;
          if ( *a10 >= v98 )
          {
            v80 = v44 - v98;
            ++a10;
            v93 = *(_DWORD *)(a4 + 4 * v80);
            v43 = *(_DWORD *)(a5 + 4 * v80) + 80;
          }
          else
          {
            ++a10;
            v43 = v44 >= 0x100 ? 0x60 : 0;
          }
        }
        v45 = 1 << (v89 - v84);
        v46 = v91 >> v84;
        for ( k = v85 + 8 * (v91 >> v84); v29 > v46; k += 8 * v45 )
        {
          *(_BYTE *)k = v43;
          *(_BYTE *)(k + 1) = v89 - v84;
          v46 += v45;
          *(_DWORD *)(k + 4) = v93;
        }
        v48 = v91;
        v49 = 1 << (v89 - 1);
        if ( (1 << (v89 - 1)) & v91 )
        {
          do
          {
            v48 ^= v49;
            v49 >>= 1;
          }
          while ( v49 & v48 );
          v91 = v48;
        }
        v91 ^= v49;
        if ( (v91 & ((1 << v84) - 1)) != *(&v118 + v83) )
        {
          v50 = v83 - 1;
          v84 -= v86;
          if ( (v91 & ((1 << v84) - 1)) == *(&v118 + v83 - 1)
            || (v51 = v84 - v86, v50 = v83 - 2, v84 = v51, (v91 & ((1 << v51) - 1)) == *(&v118 + v83 - 2))
            || (v52 = v51 - v86, v50 = v83 - 3, v84 = v52, (v91 & ((1 << v52) - 1)) == *(&v118 + v83 - 3))
            || (v53 = v52 - v86, v50 = v83 - 4, v84 = v53, (v91 & ((1 << v53) - 1)) == *(&v118 + v83 - 4))
            || (v54 = v53 - v86, v50 = v83 - 5, v84 = v54, (v91 & ((1 << v54) - 1)) == *(&v118 + v83 - 5))
            || (v55 = v54 - v86, v50 = v83 - 6, v84 = v55, (v91 & ((1 << v55) - 1)) == *(&v118 + v83 - 6))
            || (v56 = v55 - v86, v50 = v83 - 7, v84 = v56, (v91 & ((1 << v56) - 1)) == *(&v118 + v83 - 7))
            || (v57 = v56 - v86, v50 = v83 - 8, v84 = v57, (v91 & ((1 << v57) - 1)) == *(&v118 + v83 - 8))
            || (v58 = v57 - v86, v50 = v83 - 9, v84 = v58, (v91 & ((1 << v58) - 1)) == *(&v118 + v83 - 9))
            || (v59 = v58 - v86, v50 = v83 - 10, v84 = v59, (v91 & ((1 << v59) - 1)) == *(&v118 + v83 - 10))
            || (v60 = v59 - v86, v50 = v83 - 11, v84 = v60, (v91 & ((1 << v60) - 1)) == *(&v118 + v83 - 11))
            || (v61 = v60 - v86, v50 = v83 - 12, v84 = v61, (v91 & ((1 << v61) - 1)) == *(&v118 + v83 - 12))
            || (v62 = v61 - v86, v50 = v83 - 13, v84 = v62, (v91 & ((1 << v62) - 1)) == *(&v118 + v83 - 13))
            || (v63 = v62 - v86, v50 = v83 - 14, v84 = v63, (v91 & ((1 << v63) - 1)) == *(&v118 + v83 - 14)) )
          {
            v83 = v50;
          }
          else
          {
            v84 = v63 - v86;
            v83 -= 15;
          }
        }
        v28 = v96;
        v90 = v96;
      }
      ++v89;
      ++v95;
      --v94;
      if ( v89 <= v97 )
        continue;
      break;
    }
  }
  if ( v100 && v97 != 1 )
    result = -5;
  else
    result = 0;
  return result;
}
