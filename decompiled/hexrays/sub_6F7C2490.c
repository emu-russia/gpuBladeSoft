signed int __usercall sub_6F7C2490@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // edi@1
  int v3; // eax@1
  unsigned int v4; // ebx@1
  int v5; // esi@1
  unsigned int v6; // esi@3
  int v7; // eax@4
  int v8; // ecx@4
  unsigned __int16 v9; // bp@4
  char v10; // bl@4
  int v11; // eax@5
  int v12; // edx@5
  int v13; // edi@7
  signed int v14; // eax@13
  int v15; // edx@14
  unsigned int v16; // ebp@14
  unsigned int v17; // edi@14
  signed int v18; // ebx@14
  signed int v19; // eax@15
  unsigned int v20; // eax@20
  int v21; // edi@23
  signed int v22; // edx@24
  signed int v23; // ecx@24
  int v24; // edx@28
  int v25; // ebx@29
  int v26; // ebx@33
  unsigned int v27; // esi@39
  int v28; // edx@41
  __int16 v29; // bp@43
  signed int v30; // eax@44
  unsigned int v31; // eax@45
  __int16 v32; // bx@47
  int v33; // edx@49
  int v34; // ebx@54
  int v35; // edi@57
  unsigned int v36; // ebx@57
  int v37; // edx@61
  int v39; // eax@66
  int v40; // edx@66
  int v41; // ecx@66
  unsigned int v42; // ebx@66
  int v43; // edx@67
  unsigned int v44; // ebp@68
  signed __int64 v45; // rax@68
  int v46; // eax@69
  int v47; // ebx@71
  int v48; // eax@74
  int v49; // esi@74
  int v50; // ebp@76
  int v51; // eax@77
  int v52; // ecx@77
  int v53; // edx@81
  int v54; // eax@82
  int v55; // edx@82
  unsigned int v56; // ecx@85
  unsigned int v57; // esi@88
  signed int v58; // eax@88
  int v59; // edx@89
  int v60; // edi@89
  int v61; // ebx@89
  int v62; // eax@89
  signed __int64 v63; // rax@89
  unsigned int v64; // ebp@91
  unsigned int v65; // eax@91
  unsigned int v66; // edx@91
  unsigned int v67; // ebx@92
  int v68; // ecx@93
  int v69; // eax@93
  int v70; // ebx@96
  int v71; // ecx@97
  int v72; // edx@99
  int v73; // edi@101
  int v74; // esi@101
  int v75; // eax@101
  int v76; // esi@101
  int v77; // edi@102
  int v78; // esi@112
  bool v79; // sf@112
  unsigned __int8 v80; // of@112
  int v81; // eax@112
  unsigned int v82; // ebp@118
  int v83; // eax@122
  int v84; // ecx@123
  bool v85; // zf@123
  signed int v86; // edx@124
  unsigned int v87; // [sp+14h] [bp-68h]@2
  unsigned int v88; // [sp+14h] [bp-68h]@14
  char v89; // [sp+14h] [bp-68h]@71
  signed int v90; // [sp+14h] [bp-68h]@99
  int v91; // [sp+18h] [bp-64h]@14
  unsigned int v92; // [sp+18h] [bp-64h]@39
  int v93; // [sp+18h] [bp-64h]@71
  int v94; // [sp+18h] [bp-64h]@96
  int v95; // [sp+1Ch] [bp-60h]@29
  __int16 v96; // [sp+1Ch] [bp-60h]@43
  unsigned int v97; // [sp+1Ch] [bp-60h]@66
  int v98; // [sp+1Ch] [bp-60h]@96
  int v99; // [sp+20h] [bp-5Ch]@17
  int v100; // [sp+20h] [bp-5Ch]@45
  int v101; // [sp+20h] [bp-5Ch]@57
  int v102; // [sp+20h] [bp-5Ch]@71
  int v103; // [sp+20h] [bp-5Ch]@96
  unsigned int v104; // [sp+24h] [bp-58h]@15
  int v105; // [sp+24h] [bp-58h]@44
  int v106; // [sp+24h] [bp-58h]@71
  unsigned int v107; // [sp+24h] [bp-58h]@91
  signed int v108; // [sp+28h] [bp-54h]@14
  int v109; // [sp+28h] [bp-54h]@70
  int v110; // [sp+2Ch] [bp-50h]@45
  int v111; // [sp+2Ch] [bp-50h]@70
  int v112; // [sp+30h] [bp-4Ch]@77
  unsigned int v113; // [sp+34h] [bp-48h]@66
  int v114; // [sp+38h] [bp-44h]@1
  int v115; // [sp+3Ch] [bp-40h]@1
  signed int v116; // [sp+40h] [bp-3Ch]@1
  signed int v117; // [sp+44h] [bp-38h]@67
  int v118; // [sp+4Ch] [bp-30h]@66
  int v119; // [sp+5Ch] [bp-20h]@88

  v2 = a1;
  v115 = a1;
  v114 = a2;
  v3 = a1 + 1468 * a2;
  v4 = *(_DWORD *)(v3 + 52);
  v5 = *(_DWORD *)(v3 + 44);
  v116 = sub_6F7C16F0(v2, a2);
  if ( v116 )
    return v116;
  v87 = v4 + 48 * v5;
  if ( v4 < v4 + 48 * v5 )
  {
    v6 = v4;
    do
    {
      v7 = *(_DWORD *)(v6 + 40);
      v8 = *(_DWORD *)(v6 + 44);
      v9 = *(_WORD *)v7;
      v10 = *(_BYTE *)v6 & 0xFE;
      *(_BYTE *)v6 = v10;
      if ( v7 != v8 )
      {
        v11 = *(_DWORD *)(v7 + 32);
        v12 = *(_WORD *)v11 & 3;
        if ( (v9 | *(_WORD *)v11) & 3 )
        {
          while ( v8 != v11 )
          {
            v11 = *(_DWORD *)(v11 + 32);
            v13 = *(_WORD *)v11 & 3;
            if ( !(v13 | v12) )
              goto LABEL_11;
            v12 = *(_WORD *)v11 & 3;
          }
          *(_BYTE *)v6 = v10 | 1;
        }
      }
LABEL_11:
      v6 += 48;
    }
    while ( v87 > v6 );
  }
  if ( v114 )
    v14 = *(_DWORD *)(v115 + 12);
  else
    v14 = *(_DWORD *)(v115 + 4);
  v15 = v115 + 1468 * v114;
  v16 = *(_DWORD *)(v15 + 52);
  v17 = v16 + 48 * *(_DWORD *)(v15 + 44);
  v88 = v16 + 48 * *(_DWORD *)(v15 + 44);
  v18 = *(_DWORD *)(*(_DWORD *)(v115 + 2988) + 40);
  v91 = *(_DWORD *)(v15 + 68);
  v108 = sub_6F7C9760(192, v14);
  if ( v16 < v17 )
  {
    v19 = v18 + 255;
    v104 = v16;
    if ( v18 >= 0 )
      v19 = v18;
    v99 = v19 >> 8;
    do
    {
      while ( v91 != *(_BYTE *)(v16 + 1) )
      {
        v16 += 48;
        if ( v88 <= v16 )
          goto LABEL_39;
      }
      v20 = v104;
      do
      {
        if ( v20 != v16 && !(v91 + *(_BYTE *)(v20 + 1)) )
        {
          v21 = *(_WORD *)(v20 + 2) - *(_WORD *)(v16 + 2);
          if ( v21 >= 0 )
          {
            v22 = *(_WORD *)(v16 + 6);
            v23 = *(_WORD *)(v16 + 4);
            if ( v22 > *(_WORD *)(v20 + 6) )
              v22 = *(_WORD *)(v20 + 6);
            if ( v23 < *(_WORD *)(v20 + 4) )
              v23 = *(_WORD *)(v20 + 4);
            v24 = v22 - v23;
            if ( v99 <= v24 )
            {
              v95 = 8 * v21;
              v25 = *(_DWORD *)(v16 + 32);
              if ( 8 * v21 < 9 * v25 && (v95 < 7 * v25 || v24 > *(_DWORD *)(v16 + 36)) )
              {
                *(_DWORD *)(v16 + 32) = v21;
                *(_DWORD *)(v16 + 36) = v24;
                *(_DWORD *)(v16 + 20) = v20;
              }
              v26 = *(_DWORD *)(v20 + 32);
              if ( v95 < 9 * v26 && (v95 < 7 * v26 || v24 > *(_DWORD *)(v20 + 36)) )
              {
                *(_DWORD *)(v20 + 32) = v21;
                *(_DWORD *)(v20 + 36) = v24;
                *(_DWORD *)(v20 + 20) = v16;
              }
            }
          }
        }
        v20 += 48;
      }
      while ( v88 > v20 );
      v16 += 48;
    }
    while ( v88 > v16 );
LABEL_39:
    v27 = v104;
    v92 = v104;
    do
    {
      v28 = *(_DWORD *)(v27 + 20);
      if ( v28 )
      {
        if ( *(_DWORD *)(v28 + 20) == v27 )
        {
          v29 = *(_WORD *)(v27 + 2);
          v96 = *(_WORD *)(v28 + 2);
          if ( *(_WORD *)(v28 + 2) > v29 )
          {
            v30 = *(_DWORD *)(v27 + 32);
            v105 = *(_DWORD *)(v27 + 32);
            if ( v108 > v30 )
            {
              v100 = *(_DWORD *)(v27 + 20);
              v110 = 4 * v30;
              v31 = v92;
              do
              {
                v32 = *(_WORD *)(v31 + 2);
                if ( v29 >= v32 && v31 != v27 )
                {
                  v33 = *(_DWORD *)(v31 + 20);
                  if ( v33 )
                  {
                    if ( *(_DWORD *)(v33 + 20) == v31
                      && v96 <= *(_WORD *)(v33 + 2)
                      && (v96 != *(_WORD *)(v33 + 2) || v29 != v32) )
                    {
                      v34 = *(_DWORD *)(v31 + 32);
                      if ( v105 < v34 && v34 < v110 )
                      {
                        if ( *(_DWORD *)(v27 + 36) < 3 * *(_DWORD *)(v31 + 36) )
                        {
                          *(_DWORD *)(v100 + 20) = 0;
                          *(_DWORD *)(v27 + 20) = 0;
                          break;
                        }
                        v35 = v100;
                        v36 = v92;
                        v101 = *(_DWORD *)(v31 + 20);
                        do
                        {
                          v37 = *(_DWORD *)(v36 + 20);
                          if ( v37 == v31 )
                          {
                            *(_DWORD *)(v36 + 20) = 0;
                            *(_DWORD *)(v36 + 24) = v35;
                          }
                          else if ( v101 == v37 )
                          {
                            *(_DWORD *)(v36 + 20) = 0;
                            *(_DWORD *)(v36 + 24) = v27;
                          }
                          v36 += 48;
                        }
                        while ( v88 > v36 );
                        v100 = v35;
                      }
                    }
                  }
                }
                v31 += 48;
              }
              while ( v88 > v31 );
            }
          }
        }
      }
      v27 += 48;
    }
    while ( v88 > v27 );
    v82 = v92;
    do
    {
      v83 = *(_DWORD *)(v82 + 20);
      if ( v83 )
      {
        v84 = *(_DWORD *)(v83 + 28);
        v85 = *(_DWORD *)(v83 + 20) == v82;
        *(_DWORD *)(v83 + 28) = v84 + 1;
        if ( !v85 )
        {
          v86 = *(_DWORD *)(v83 + 32);
          *(_DWORD *)(v82 + 20) = 0;
          if ( v108 > v86 || *(_DWORD *)(v82 + 32) < 4 * v86 )
            *(_DWORD *)(v82 + 24) = *(_DWORD *)(v83 + 20);
          else
            *(_DWORD *)(v83 + 28) = v84;
        }
      }
      v82 += 48;
    }
    while ( v88 > v82 );
  }
  v39 = v115 + 1468 * v114;
  v40 = *(_DWORD *)(v39 + 44);
  v118 = *(_DWORD *)v115;
  v41 = *(_DWORD *)(v115 + 2988);
  v42 = *(_DWORD *)(v39 + 52);
  *(_DWORD *)(v39 + 56) = 0;
  v97 = v42;
  v113 = v42 + 48 * v40;
  if ( v114 )
  {
    v117 = *(_DWORD *)(v115 + 12);
    v43 = *(_DWORD *)(v115 + 12);
  }
  else
  {
    v117 = *(_DWORD *)(v115 + 4);
    v43 = *(_DWORD *)(v115 + 4);
  }
  v44 = *(_DWORD *)(v41 + 1572 * v114 + 248);
  v45 = v43 * (signed __int64)*(_DWORD *)(v41 + 1572 * v114 + 248);
  if ( (signed int)((((unsigned __int64)(unsigned int)((SHIDWORD(v45) >> 31) + 0x8000) + v45) >> 32 << 16)
                  + ((unsigned int)((SHIDWORD(v45) >> 31) + 0x8000 + v45) >> 16)) > 16 )
  {
    v44 = sub_6F7C9760(16, v117);
    v46 = *(_DWORD *)(v115 + 1468 * v114 + 56);
    if ( v42 >= v113 )
      goto LABEL_91;
  }
  else
  {
    v46 = 0;
    if ( v42 >= v113 )
      return v116;
  }
  v109 = v44;
  v111 = v115 + 1468 * v114;
  if ( v46 <= 0 )
    goto LABEL_87;
LABEL_71:
  v106 = 0;
  v102 = 0xFFFF;
  v89 = *(_BYTE *)(v97 + 1);
  v47 = *(_DWORD *)(v111 + 64);
  v93 = v47 + 48 * v46;
  do
  {
    if ( *(_BYTE *)(v47 + 13) == v89 )
    {
      v48 = (*(_WORD *)(v97 + 2) - (signed int)*(_WORD *)v47) >> 31;
      v49 = (v48 ^ (*(_WORD *)(v97 + 2) - *(_WORD *)v47)) - v48;
      if ( v49 < v109 && v49 < v102 )
      {
        v50 = *(_DWORD *)(v97 + 20);
        if ( v50 )
        {
          v112 = (v48 ^ (*(_WORD *)(v97 + 2) - *(_WORD *)v47)) - v48;
          v51 = 0;
          v52 = *(_DWORD *)(v47 + 40);
          while ( 1 )
          {
            v53 = *(_DWORD *)(v52 + 20);
            if ( v53 )
            {
              v54 = *(_WORD *)(v50 + 2);
              v55 = *(_WORD *)(v53 + 2);
              v51 = (signed __int16)v54 > (signed __int16)v55 ? v54 - v55 : v55 - v54;
              if ( v51 >= v109 )
                break;
            }
            v52 = *(_DWORD *)(v52 + 16);
            if ( *(_DWORD *)(v47 + 40) == v52 )
            {
              v78 = v112;
              v80 = __OFSUB__(v51, v109);
              v79 = v51 - v109 < 0;
              v81 = v106;
              if ( !(v79 ^ v80) )
                v78 = v102;
              if ( v79 ^ v80 )
                v81 = v47;
              v102 = v78;
              v106 = v81;
              break;
            }
          }
        }
        else
        {
          v102 = (v48 ^ (*(_WORD *)(v97 + 2) - *(_WORD *)v47)) - v48;
          v106 = v47;
        }
      }
    }
    v47 += 48;
  }
  while ( v47 != v93 );
  if ( !v106 )
  {
    while ( 1 )
    {
      v57 = v97;
      v58 = sub_6F7C1C40(v115 + 1468 * v114 + 44, *(_WORD *)(v97 + 2), v89, v118, (unsigned int *)&v119);
      if ( v58 )
        return v58;
      v59 = v119;
      v60 = v119 + 4;
      *(_DWORD *)v119 = 0;
      *(_DWORD *)(v59 + 44) = 0;
      memset((void *)(v60 & 0xFFFFFFFC), 0, 4 * ((v59 - (v60 & 0xFFFFFFFC) + 48) >> 2));
      v61 = v119;
      *(_DWORD *)(v119 + 40) = v97;
      *(_DWORD *)(v61 + 44) = v97;
      *(_BYTE *)(v61 + 13) = *(_BYTE *)(v97 + 1);
      v62 = *(_WORD *)(v97 + 2);
      *(_WORD *)v61 = v62;
      v63 = (unsigned int)(((signed int)((unsigned __int64)(v117 * (signed __int64)v62) >> 32) >> 31) + 0x8000)
          + v117 * (signed __int64)v62;
      LODWORD(v63) = (HIDWORD(v63) << 16) + ((unsigned int)v63 >> 16);
      *(_DWORD *)(v61 + 4) = v63;
      *(_DWORD *)(v61 + 8) = v63;
      v97 += 48;
      *(_DWORD *)(v57 + 16) = v57;
      if ( v113 <= v97 )
        goto LABEL_90;
LABEL_86:
      v46 = *(_DWORD *)(v111 + 56);
      if ( v46 > 0 )
        goto LABEL_71;
LABEL_87:
      v89 = *(_BYTE *)(v97 + 1);
    }
  }
  v56 = v97;
  v97 += 48;
  *(_DWORD *)(v56 + 16) = *(_DWORD *)(v106 + 40);
  *(_DWORD *)(*(_DWORD *)(v106 + 44) + 16) = v56;
  *(_DWORD *)(v106 + 44) = v56;
  if ( v113 > v97 )
    goto LABEL_86;
LABEL_90:
  v46 = *(_DWORD *)(v115 + 1468 * v114 + 56);
LABEL_91:
  v64 = *(_DWORD *)(v115 + 1468 * v114 + 64);
  v65 = v64 + 48 * v46;
  v66 = *(_DWORD *)(v115 + 1468 * v114 + 64);
  v107 = v65;
  if ( v64 >= v65 )
    return v116;
  v67 = v65;
  do
  {
    v68 = *(_DWORD *)(v66 + 40);
    v69 = *(_DWORD *)(v66 + 40);
    if ( v68 )
    {
      do
      {
        *(_DWORD *)(v69 + 12) = v66;
        v69 = *(_DWORD *)(v69 + 16);
      }
      while ( v68 != v69 );
    }
    v66 += 48;
  }
  while ( v67 > v66 );
  do
  {
    v103 = 0;
    v98 = 0;
    v94 = *(_DWORD *)(v64 + 40);
    v70 = *(_DWORD *)(v64 + 40);
    do
    {
      while ( 1 )
      {
        if ( *(_BYTE *)v70 & 1 )
        {
          v71 = *(_DWORD *)(v70 + 24);
          ++v98;
          if ( !v71 )
            goto LABEL_110;
        }
        else
        {
          v71 = *(_DWORD *)(v70 + 24);
          ++v103;
          if ( !v71 )
            goto LABEL_110;
        }
        if ( *(_DWORD *)(v71 + 12) != v64 )
        {
          v72 = *(_DWORD *)(v64 + 28);
          v90 = 1;
          goto LABEL_100;
        }
LABEL_110:
        v71 = *(_DWORD *)(v70 + 20);
        if ( !v71 )
          goto LABEL_107;
        v72 = *(_DWORD *)(v64 + 24);
        v90 = 0;
LABEL_100:
        if ( !v72
          || ((v73 = *(_WORD *)(v70 + 2),
               v74 = (*(_WORD *)v64 - (signed int)*(_WORD *)v72) >> 31,
               v75 = (v74 ^ (*(_WORD *)v64 - *(_WORD *)v72)) - v74,
               v76 = *(_WORD *)(v71 + 2),
               (signed __int16)v73 <= (signed __int16)v76) ? (v77 = v76 - v73) : (v77 = v73 - v76),
              v77 < v75) )
        {
          v72 = *(_DWORD *)(v71 + 12);
        }
        if ( !v90 )
          break;
        *(_DWORD *)(v64 + 28) = v72;
        *(_BYTE *)(v72 + 12) |= 2u;
LABEL_107:
        v70 = *(_DWORD *)(v70 + 16);
        if ( v94 == v70 )
          goto LABEL_127;
      }
      *(_DWORD *)(v64 + 24) = v72;
      v70 = *(_DWORD *)(v70 + 16);
    }
    while ( v94 != v70 );
LABEL_127:
    *(_BYTE *)(v64 + 12) = v98 > 0 && v98 >= v103;
    if ( *(_DWORD *)(v64 + 28) )
    {
      if ( *(_DWORD *)(v64 + 24) )
        *(_DWORD *)(v64 + 28) = 0;
    }
    v64 += 48;
  }
  while ( v107 > v64 );
  return 0;
}
