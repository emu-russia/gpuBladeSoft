int __cdecl sub_6F8109A0(int a1, int a2, unsigned int a3)
{
  int v3; // ecx@2
  unsigned int v4; // ebp@3
  int v5; // eax@4
  __int64 v6; // rax@6
  signed int v7; // ecx@6
  int v8; // ecx@8
  int v9; // eax@9
  unsigned int v10; // edi@9
  unsigned int v11; // edx@9
  int v12; // eax@9
  bool v13; // zf@9
  int v14; // edx@9
  signed int v15; // edi@11
  unsigned __int8 v16; // cf@13
  int v17; // ecx@13
  int v18; // edi@13
  unsigned int v19; // edx@13
  unsigned int v20; // eax@13
  int v21; // edi@13
  unsigned int v22; // esi@15
  unsigned int v23; // edi@17
  unsigned int v24; // ecx@27
  int v25; // edi@30
  int v26; // eax@30
  int v27; // edx@30
  int v28; // ecx@30
  int v29; // esi@30
  unsigned int v30; // edx@30
  int v31; // eax@30
  int v32; // ecx@30
  int v33; // edi@30
  int v34; // eax@30
  int v35; // edi@30
  int v36; // esi@32
  int v37; // eax@32
  unsigned int v38; // edi@32
  int v39; // edx@32
  int v40; // ST18_4@32
  unsigned int v41; // edx@32
  signed __int64 v42; // rax@32
  __int64 v43; // rax@33
  signed int v44; // eax@37
  int v45; // edx@37
  int v46; // esi@39
  int v47; // edi@39
  signed int v48; // edi@64
  unsigned int v49; // eax@66
  unsigned int v50; // edx@68
  int v51; // edx@81
  int v52; // eax@81
  int v53; // ecx@81
  int v54; // esi@81
  int v55; // eax@81
  unsigned int v56; // ecx@81
  int v57; // edx@81
  unsigned int v58; // edx@81
  int v60; // ST18_4@86
  int v61; // esi@86
  int v62; // eax@86
  int v63; // eax@92
  int v64; // edi@94
  int v65; // ecx@94
  int v66; // eax@95
  int v67; // esi@95
  int v68; // edx@95
  int v69; // eax@95
  int v70; // edx@95
  unsigned int v71; // esi@95
  int v72; // eax@95
  unsigned __int64 v73; // kr08_8@95
  int v74; // eax@95
  int v75; // ST3C_4@95
  unsigned __int64 v76; // ST28_8@95
  int v77; // edi@95
  int v78; // ST3C_4@95
  unsigned __int64 v79; // ST28_8@95
  unsigned int v80; // edi@95
  int v81; // edx@97
  int v82; // edi@109
  int v83; // eax@109
  char v84; // cl@109
  int v85; // esi@109
  int v86; // [sp+18h] [bp-54h]@11
  unsigned int v87; // [sp+18h] [bp-54h]@38
  int v88; // [sp+18h] [bp-54h]@95
  int v89; // [sp+24h] [bp-48h]@95
  unsigned __int8 v90; // [sp+32h] [bp-3Ah]@95
  unsigned __int8 v91; // [sp+33h] [bp-39h]@95
  int v92; // [sp+34h] [bp-38h]@95
  int v93; // [sp+38h] [bp-34h]@95
  int v94; // [sp+3Ch] [bp-30h]@95
  int v95; // [sp+4Ch] [bp-20h]@81

  if ( *(_DWORD *)(a1 + 175112) )
  {
    v3 = *(_DWORD *)(a1 + 175208);
    if ( v3 )
    {
      v4 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 175112) = 2;
    *(_DWORD *)(a1 + 175168) = 0;
    *(_DWORD *)(a1 + 175208) = 0;
    *(_DWORD *)(a1 + 175196) = 0;
    *(_DWORD *)(a1 + 175200) = 0;
    *(_DWORD *)(a1 + 175204) = 0;
    *(_DWORD *)(a1 + 175248) = 0;
    *(_DWORD *)(a1 + 175252) = 0;
  }
  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 175192) )
      v63 = 8 * *(_DWORD *)(a1 + 174952) + 38;
    else
      v63 = 46;
    return v63 - *(_DWORD *)(a1 + 175168);
  }
  v44 = *(_DWORD *)(a1 + 175168);
  v45 = *(_DWORD *)(a1 + 175168);
  if ( (unsigned int)v44 <= 0x25 )
  {
    v87 = v44 + a3;
    if ( a3 )
    {
      v46 = a2 - v44;
      v47 = (37 - (_BYTE)v44) & 7;
      if ( !((37 - (_BYTE)v44) & 7) )
        goto LABEL_54;
      *(_DWORD *)(a1 + 175168) = ++v44;
      v4 = v44 - v45;
      *(_BYTE *)(a1 + v44 + 175115) = *(_BYTE *)(v46 + v44 - 1);
      if ( v44 == v87 )
        return v4;
      if ( v47 == 1 )
        goto LABEL_54;
      if ( v47 != 2 )
      {
        if ( v47 != 3 )
        {
          if ( v47 != 4 )
          {
            if ( v47 != 5 )
            {
              if ( v47 != 6 )
              {
                *(_DWORD *)(a1 + 175168) = ++v44;
                v4 = v44 - v45;
                *(_BYTE *)(a1 + v44 + 175115) = *(_BYTE *)(v46 + v44 - 1);
                if ( v44 == v87 )
                  return v4;
              }
              *(_DWORD *)(a1 + 175168) = ++v44;
              v4 = v44 - v45;
              *(_BYTE *)(a1 + v44 + 175115) = *(_BYTE *)(v46 + v44 - 1);
              if ( v44 == v87 )
                return v4;
            }
            *(_DWORD *)(a1 + 175168) = ++v44;
            v4 = v44 - v45;
            *(_BYTE *)(a1 + v44 + 175115) = *(_BYTE *)(v46 + v44 - 1);
            if ( v44 == v87 )
              return v4;
          }
          *(_DWORD *)(a1 + 175168) = ++v44;
          v4 = v44 - v45;
          *(_BYTE *)(a1 + v44 + 175115) = *(_BYTE *)(v46 + v44 - 1);
          if ( v44 == v87 )
            return v4;
        }
        *(_DWORD *)(a1 + 175168) = ++v44;
        v4 = v44 - v45;
        *(_BYTE *)(a1 + v44 + 175115) = *(_BYTE *)(v46 + v44 - 1);
        if ( v44 == v87 )
          return v4;
      }
      ++v44;
      while ( 1 )
      {
        *(_DWORD *)(a1 + 175168) = v44;
        v4 = v44 - v45;
        *(_BYTE *)(a1 + v44 + 175115) = *(_BYTE *)(v46 + v44 - 1);
        if ( v44 == v87 )
          return v4;
LABEL_54:
        *(_DWORD *)(a1 + 175168) = v44 + 1;
        v4 = v44 + 1 - v45;
        *(_BYTE *)(a1 + v44 + 175116) = *(_BYTE *)(v44 + v46);
        if ( v44 == 37 )
          break;
        if ( v44 + 1 == v87 )
          return v4;
        *(_DWORD *)(a1 + 175168) = v44 + 2;
        v4 = v44 + 2 - v45;
        *(_BYTE *)(a1 + v44 + 175117) = *(_BYTE *)(v44 + v46 + 1);
        if ( v44 + 2 == v87 )
          return v4;
        *(_DWORD *)(a1 + 175168) = v44 + 3;
        v4 = v44 + 3 - v45;
        *(_BYTE *)(a1 + v44 + 175118) = *(_BYTE *)(v44 + v46 + 2);
        if ( v44 + 3 == v87 )
          return v4;
        *(_DWORD *)(a1 + 175168) = v44 + 4;
        v4 = v44 + 4 - v45;
        *(_BYTE *)(a1 + v44 + 175119) = *(_BYTE *)(v44 + v46 + 3);
        if ( v44 + 4 == v87 )
          return v4;
        *(_DWORD *)(a1 + 175168) = v44 + 5;
        v4 = v44 + 5 - v45;
        *(_BYTE *)(a1 + v44 + 175120) = *(_BYTE *)(v44 + v46 + 4);
        if ( v44 + 5 == v87 )
          return v4;
        *(_DWORD *)(a1 + 175168) = v44 + 6;
        v4 = v44 + 6 - v45;
        *(_BYTE *)(a1 + v44 + 175121) = *(_BYTE *)(v44 + v46 + 5);
        if ( v44 + 6 == v87 )
          return v4;
        *(_DWORD *)(a1 + 175168) = v44 + 7;
        v4 = v44 + 7 - v45;
        *(_BYTE *)(a1 + v44 + 175122) = *(_BYTE *)(v44 + v46 + 6);
        if ( v44 + 7 == v87 )
          return v4;
        v44 += 8;
      }
      goto LABEL_86;
    }
    return 0;
  }
  if ( v44 <= 37 )
    return 0;
  v4 = 0;
LABEL_86:
  v60 = *(_DWORD *)(a1 + 175164);
  v61 = *(_DWORD *)(a1 + 175164);
  v62 = ((unsigned __int64)*(_BYTE *)(a1 + v60 + 175119) >> 8) | ((unsigned __int64)*(_BYTE *)(a1 + v60 + 175118) >> 16) | ((unsigned __int64)*(_BYTE *)(a1 + v60 + 175117) >> 24) | ((*(_BYTE *)(a1 + v60 + 175119) << 24) | (*(_BYTE *)(a1 + v60 + 175118) << 16) | (*(_BYTE *)(a1 + v60 + 175117) << 8) | *(_BYTE *)(a1 + v60 + 175116)) ^ 0x5032544F;
  *(_DWORD *)(a1 + 175164) = v60 + 4;
  if ( v62
    || (v64 = v61,
        v65 = ((unsigned __int64)*(_BYTE *)(a1 + v61 + 175123) >> 8) | ((unsigned __int64)*(_BYTE *)(a1 + v61 + 175122) >> 16) | ((unsigned __int64)*(_BYTE *)(a1 + v61 + 175121) >> 24) | ((*(_BYTE *)(a1 + v61 + 175123) << 24) | (*(_BYTE *)(a1 + v61 + 175122) << 16) | (*(_BYTE *)(a1 + v61 + 175121) << 8) | *(_BYTE *)(a1 + v61 + 175120)) ^ 1,
        *(_DWORD *)(a1 + 175164) = v61 + 8,
        v65) )
  {
    *(_DWORD *)(a1 + 175164) = 0;
    return -21;
  }
  v66 = *(_BYTE *)(a1 + v61 + 175128);
  v3 = (*(_BYTE *)(a1 + v61 + 175126) << 16) | (*(_BYTE *)(a1 + v61 + 175125) << 8) | *(_BYTE *)(a1 + v61 + 8 + 175116) | (*(_BYTE *)(a1 + v61 + 175127) << 24);
  v67 = *(_BYTE *)(a1 + v61 + 175129);
  v68 = *(_BYTE *)(a1 + v64 + 175130) << 16;
  *(_DWORD *)(a1 + 175208) = v3;
  v69 = v68 | v66 | (v67 << 8) | (*(_BYTE *)(a1 + v64 + 175131) << 24);
  v70 = *(_BYTE *)(a1 + v64 + 175133) << 8;
  v71 = v69;
  *(_DWORD *)(a1 + 175212) = v69;
  v72 = (*(_BYTE *)(a1 + v64 + 175134) << 16) | *(_BYTE *)(a1 + v64 + 175132) | v70 | (*(_BYTE *)(a1 + v64 + 175135) << 24);
  LOBYTE(v70) = *(_BYTE *)(a1 + v64 + 175136);
  v89 = v72;
  *(_DWORD *)(a1 + 175216) = v72;
  v91 = v70;
  v90 = *(_BYTE *)(a1 + v64 + 175137);
  v73 = (unsigned __int64)*(_BYTE *)(a1 + v64 + 175141) << 24;
  v93 = v73 | (*(_BYTE *)(a1 + v64 + 175140) << 16) | (*(_BYTE *)(a1 + v64 + 175139) << 8) | *(_BYTE *)(a1 + v64 + 175138);
  v92 = (*(_BYTE *)(a1 + v64 + 175145) << 24) | (*(_BYTE *)(a1 + v64 + 175144) << 16) | (*(_BYTE *)(a1 + v64 + 175143) << 8) | *(_BYTE *)(a1 + v64 + 175142) | ((unsigned __int64)*(_BYTE *)(a1 + v64 + 175140) >> 16) | ((unsigned __int64)*(_BYTE *)(a1 + v64 + 175139) >> 24) | HIDWORD(v73);
  v74 = v64;
  v75 = (*(_BYTE *)(a1 + v64 + 175147) << 8) | *(_BYTE *)(a1 + v64 + 175146);
  v76 = (unsigned __int64)*(_BYTE *)(a1 + v64 + 175148) << 16;
  v77 = HIDWORD(v76) | ((unsigned __int64)*(_BYTE *)(a1 + v64 + 175147) >> 24);
  v78 = v76 | v75;
  v79 = (unsigned __int64)*(_BYTE *)(a1 + v74 + 175149) << 24;
  v94 = v79 | v78;
  v88 = (*(_BYTE *)(a1 + v74 + 175153) << 24) | (*(_BYTE *)(a1 + v74 + 175152) << 16) | (*(_BYTE *)(a1 + v74 + 175151) << 8) | *(_BYTE *)(a1 + v74 + 175150) | v77 | HIDWORD(v79);
  *(_DWORD *)(a1 + 175164) = v74 + 38;
  v80 = v3 + v71 + v89;
  if ( (v3 == 0) | (unsigned __int8)(__CFADD__(v3, v71 + v89) | (v71 > v80)) || v80 >> 31 )
  {
    *(_DWORD *)(a1 + 175208) = 0;
    *(_DWORD *)(a1 + 175164) = 0;
    return -20;
  }
  v81 = *(_DWORD *)(a1 + 175192);
  *(_DWORD *)(a1 + 175220) = v3;
  *(_DWORD *)(a1 + 175224) = v71;
  *(_DWORD *)(a1 + 175228) = v89;
  if ( v81 )
  {
    *(_DWORD *)(a1 + 175168) = 0;
    *(_DWORD *)(a1 + 175164) = 0;
    *(_DWORD *)(a1 + 174944) = v91;
    *(_DWORD *)(a1 + 174948) = v90;
  }
  else
  {
    *(_DWORD *)(a1 + 175256) = v3;
    *(_DWORD *)(a1 + 175260) = v71;
    *(_DWORD *)(a1 + 175264) = v89;
    *(_DWORD *)(a1 + 174952) = v80;
    *(_DWORD *)(a1 + 175232) = v93;
    *(_DWORD *)(a1 + 175252) = v80;
    *(_DWORD *)(a1 + 175236) = v92;
    *(_DWORD *)(a1 + 175240) = v94;
    *(_DWORD *)(a1 + 175244) = v88;
    sub_6F80C080(a1);
    v3 = *(_DWORD *)(a1 + 175208);
    *(_DWORD *)(a1 + 175168) = 0;
    *(_DWORD *)(a1 + 175164) = 0;
    *(_DWORD *)(a1 + 174944) = v91;
    *(_DWORD *)(a1 + 174948) = v90;
    if ( !v3 )
      return v4;
  }
LABEL_4:
  v5 = *(_DWORD *)(a1 + 51604);
  if ( *(_DWORD *)(a1 + 780) >= 0 && (*(_DWORD *)(a1 + 175180) & 0x7FFFFFFF) != v5 )
  {
    *(_DWORD *)(a1 + 175164) = 0;
    return -10;
  }
  v6 = *(_QWORD *)(a1 + 776) + (unsigned int)(v5 + 1);
  v7 = *(_DWORD *)(a1 + 175216) + *(_DWORD *)(a1 + 175212) + v3;
  if ( SHIDWORD(v6) >= v7 >> 31 && (SHIDWORD(v6) > v7 >> 31 || (unsigned int)v6 >= v7) )
  {
    *(_DWORD *)(a1 + 175164) = 0;
    return v4;
  }
  if ( *(_DWORD *)(a1 + 175164) )
    return v4;
  v8 = *(_DWORD *)(a1 + 175192);
  if ( !v8 )
  {
    if ( !a2 )
      return 8 - *(_DWORD *)(a1 + 175168);
    v48 = *(_DWORD *)(a1 + 175168);
    if ( (unsigned int)v48 > 7 )
    {
      if ( v48 <= 7 )
        return v4;
LABEL_81:
      v51 = *(_BYTE *)(a1 + 175117);
      v52 = *(_BYTE *)(a1 + 175116);
      v53 = *(_BYTE *)(a1 + 175118);
      v54 = *(_BYTE *)(a1 + 175119);
      *(_DWORD *)(a1 + 175164) = 8;
      v55 = (v54 << 24) | (v53 << 16) | (v51 << 8) | v52;
      v56 = v55;
      v55 &= 0x7FFFFFFFu;
      v56 >>= 31;
      v57 = *(_DWORD *)(a1 + 175188);
      *(_DWORD *)(a1 + 175184) = (*(_BYTE *)(a1 + 175123) << 24) | (*(_BYTE *)(a1 + 175122) << 16) | (*(_BYTE *)(a1 + 175121) << 8) | *(_BYTE *)(a1 + 175120);
      *(_BYTE *)(a1 + 175172) = v56 ^ 1;
      v58 = v55 | v57 & 0x80000000;
      *(_DWORD *)(a1 + 175188) = v58;
      *(_BYTE *)(a1 + 175191) = ((_BYTE)v56 << 7) | BYTE3(v58) & 0x7F;
      v95 = v55;
      sub_6F8069F0(a1, 18, &v95, 4);
      *(_DWORD *)(a1 + 175168) = 0;
      return v4;
    }
    if ( a3 <= v4 )
      return v4;
    v49 = v4 + 1;
    *(_DWORD *)(a1 + 175168) = v48 + 1;
    *(_BYTE *)(a1 + v48 + 175116) = *(_BYTE *)(a2 + v4);
    if ( v48 != 7 )
    {
      if ( a3 <= v49 )
        return v49;
      v50 = v4 + 2;
      *(_DWORD *)(a1 + 175168) = v48 + 2;
      *(_BYTE *)(a1 + v48 + 175117) = *(_BYTE *)(a2 + v49);
      if ( v48 == 6 )
        goto LABEL_123;
      if ( a3 <= v50 )
        return v50;
      v49 = v4 + 3;
      *(_DWORD *)(a1 + 175168) = v48 + 3;
      *(_BYTE *)(a1 + v48 + 2 + 175116) = *(_BYTE *)(a2 + v50);
      if ( v48 != 5 )
      {
        if ( a3 <= v49 )
          return v49;
        v50 = v4 + 4;
        *(_DWORD *)(a1 + 175168) = v48 + 4;
        *(_BYTE *)(a1 + v48 + 175119) = *(_BYTE *)(a2 + v49);
        if ( v48 == 4 )
          goto LABEL_123;
        if ( a3 <= v50 )
          return v50;
        *(_DWORD *)(a1 + 175168) = v48 + 5;
        v49 = v4 + 5;
        *(_BYTE *)(a1 + v48 + 4 + 175116) = *(_BYTE *)(a2 + v50);
        if ( v48 != 3 )
        {
          if ( a3 > v49 )
          {
            v24 = v4 + 6;
            *(_DWORD *)(a1 + 175168) = v48 + 6;
            *(_BYTE *)(a1 + v48 + 5 + 175116) = *(_BYTE *)(a2 + v49);
            if ( v48 == 2 )
            {
              v4 += 6;
              goto LABEL_81;
            }
            if ( a3 <= v24 )
              return v24;
            v50 = v4 + 7;
            *(_DWORD *)(a1 + 175168) = v48 + 7;
            *(_BYTE *)(a1 + v48 + 6 + 175116) = *(_BYTE *)(a2 + v24);
            if ( v48 == 0 )
            {
              if ( a3 > v50 )
              {
                *(_DWORD *)(a1 + 175168) = 8;
                v4 += 8;
                *(_BYTE *)(a1 + 175123) = *(_BYTE *)(a2 + v50);
                goto LABEL_81;
              }
              return v50;
            }
LABEL_123:
            v4 = v50;
            goto LABEL_81;
          }
          return v49;
        }
      }
    }
    v4 = v49;
    goto LABEL_81;
  }
  v9 = *(_DWORD *)(a1 + 175252);
  v10 = *(_DWORD *)(a1 + 175224) + *(_DWORD *)(a1 + 175220) - *(_DWORD *)(a1 + 175256) - *(_DWORD *)(a1 + 175260);
  v11 = *(_DWORD *)(a1 + 174952) + *(_DWORD *)(a1 + 175248) - v9;
  v12 = v10 < v11 ? v10 + v9 - *(_DWORD *)(a1 + 175248) - *(_DWORD *)(a1 + 174952) : 0;
  v13 = v12 + v11 == 0;
  v14 = -(v12 + v11);
  if ( -(!v13 ? v14 : 0) < 0 || (!v13 ? v14 : 0) == 0 )
    goto LABEL_109;
  if ( !a2 )
  {
    v63 = -8 * (!v13 ? v14 : 0);
    return v63 - *(_DWORD *)(a1 + 175168);
  }
  v15 = *(_DWORD *)(a1 + 175168);
  v86 = *(_DWORD *)(a1 + 175168);
  if ( (unsigned int)v15 <= 7 )
    goto LABEL_14;
  if ( v15 <= 7 )
    return v4;
  while ( 1 )
  {
    v25 = *(_BYTE *)(a1 + 175117);
    v26 = *(_BYTE *)(a1 + 175118);
    v27 = *(_BYTE *)(a1 + 175116);
    v28 = *(_BYTE *)(a1 + 175121);
    v29 = *(_BYTE *)(a1 + 175120);
    *(_DWORD *)(a1 + 175164) = 8;
    v30 = v27 | (v25 << 8) | (v26 << 16) | (*(_BYTE *)(a1 + 175119) << 24);
    v31 = *(_DWORD *)(a1 + 175196);
    v32 = (v28 << 8) | (*(_BYTE *)(a1 + 175122) << 16) | v29 | (*(_BYTE *)(a1 + 175123) << 24);
    v33 = v31 + 1;
    v34 = *(_DWORD *)(a1 + 175204) + v31;
    *(_DWORD *)(a1 + 175196) = v33;
    v35 = *(_DWORD *)(a1 + 175200);
    if ( v34 >= v35 )
      v34 -= v35;
    v36 = *(_DWORD *)(a1 + 175192) + 8 * v34;
    v37 = v30 & 0x7FFFFFFF;
    v38 = v30 >> 31;
    v39 = *(_DWORD *)(v36 + 4);
    v40 = v37;
    *(_DWORD *)v36 = v32;
    v41 = v37 | v39 & 0x80000000;
    *(_DWORD *)(v36 + 4) = v41;
    LODWORD(v42) = -1;
    *(_BYTE *)(v36 + 7) = ((_BYTE)v38 << 7) | BYTE7(v42) & 0x7F;
    ++*(_DWORD *)(a1 + 4 * v38 + 175256);
    *(_DWORD *)(a1 + 175264) += v40;
    HIDWORD(v42) = 0x7FFF;
    if ( v32 <= 385875967 )
    {
      LODWORD(v43) = 0;
      HIDWORD(v43) = 2 * v32;
      v42 = sub_6F809680(v43 + 3458764513820540928i64);
      if ( SHIDWORD(v42) > 0x7FFF )
        v42 = 0x7FFFFFFFFFFFi64;
    }
    v16 = __CFADD__((_DWORD)v42, *(_DWORD *)(a1 + 8 * v38 + 175232));
    *(_DWORD *)(a1 + 8 * v38 + 175232) += v42;
    v86 = 0;
    *(_DWORD *)(a1 + 8 * v38 + 175236) += HIDWORD(v42) + v16;
    v17 = (*(_DWORD *)(v36 + 4) & 0x7FFFFFFF) + *(_DWORD *)(a1 + 175252) + 1;
    v18 = *(_DWORD *)(a1 + 175248);
    v19 = *(_DWORD *)(a1 + 175224) + *(_DWORD *)(a1 + 175220) - *(_DWORD *)(a1 + 175256) - *(_DWORD *)(a1 + 175260);
    *(_DWORD *)(a1 + 175168) = 0;
    *(_DWORD *)(a1 + 175252) = v17;
    *(_DWORD *)(a1 + 175164) = 0;
    v20 = *(_DWORD *)(a1 + 174952) + v18 - v17;
    v21 = v19 < v20 ? v19 + v17 - v18 - *(_DWORD *)(a1 + 174952) : 0;
    if ( (-(v20 + v21 != 0 ? -(v20 + v21) : 0) & 0x80000000) != 0 || (v20 + v21 != 0 ? -(v20 + v21) : 0) == 0 )
      break;
LABEL_14:
    if ( a3 <= v4 )
      return v4;
    v22 = v4 + 1;
    *(_DWORD *)(a1 + 175168) = v86 + 1;
    *(_BYTE *)(a1 + v86 + 175116) = *(_BYTE *)(a2 + v4);
    if ( v86 == 7 )
      goto LABEL_126;
    if ( a3 <= v22 )
      return v22;
    v23 = v4 + 2;
    *(_DWORD *)(a1 + 175168) = v86 + 2;
    *(_BYTE *)(a1 + v86 + 1 + 175116) = *(_BYTE *)(a2 + v22);
    if ( v86 == 6 )
      goto LABEL_100;
    if ( a3 <= v23 )
      return v23;
    v22 = v4 + 3;
    *(_DWORD *)(a1 + 175168) = v86 + 3;
    *(_BYTE *)(a1 + v86 + 2 + 175116) = *(_BYTE *)(a2 + v23);
    if ( v86 == 5 )
      goto LABEL_126;
    if ( a3 <= v22 )
      return v22;
    v23 = v4 + 4;
    *(_DWORD *)(a1 + 175168) = v86 + 4;
    *(_BYTE *)(a1 + v86 + 3 + 175116) = *(_BYTE *)(a2 + v22);
    if ( v86 == 4 )
      goto LABEL_100;
    if ( a3 <= v23 )
      return v23;
    v22 = v4 + 5;
    *(_DWORD *)(a1 + 175168) = v86 + 5;
    *(_BYTE *)(a1 + v86 + 4 + 175116) = *(_BYTE *)(a2 + v23);
    if ( v86 == 3 )
    {
LABEL_126:
      v4 = v22;
    }
    else
    {
      if ( a3 <= v22 )
        return v22;
      v23 = v4 + 6;
      *(_DWORD *)(a1 + 175168) = v86 + 6;
      *(_BYTE *)(a1 + v86 + 5 + 175116) = *(_BYTE *)(a2 + v22);
      if ( v86 == 2 )
      {
LABEL_100:
        v4 = v23;
      }
      else
      {
        if ( a3 <= v23 )
          return v23;
        *(_DWORD *)(a1 + 175168) = v86 + 7;
        v24 = v4 + 7;
        *(_BYTE *)(a1 + v86 + 6 + 175116) = *(_BYTE *)(a2 + v23);
        if ( v86 == 0 )
        {
          if ( a3 <= v24 )
            return v24;
          *(_DWORD *)(a1 + 175168) = 8;
          v4 += 8;
          *(_BYTE *)(a1 + 175123) = *(_BYTE *)(a2 + v24);
        }
        else
        {
          v4 += 7;
        }
      }
    }
  }
  v8 = *(_DWORD *)(a1 + 175192);
LABEL_109:
  v82 = *(_DWORD *)(a1 + 175204);
  v83 = *(_DWORD *)(v8 + 8 * v82);
  *(_DWORD *)(a1 + 175188) = *(_DWORD *)(v8 + 8 * v82 + 4);
  v84 = *(_BYTE *)(a1 + 175191);
  v85 = *(_DWORD *)(a1 + 175188);
  *(_DWORD *)(a1 + 175184) = v83;
  v95 = v85 & 0x7FFFFFFF;
  *(_BYTE *)(a1 + 175172) = (unsigned __int8)~v84 >> 7;
  sub_6F8069F0(a1, 18, &v95, 4);
  *(_DWORD *)(a1 + 175164) = 1;
  return v4;
}
