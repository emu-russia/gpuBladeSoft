int __cdecl sub_6F80C660(int a1, int a2)
{
  unsigned int v2; // esi@2
  signed int v3; // edi@2
  unsigned __int64 v4; // rax@3
  int v5; // edi@5
  int v6; // ebp@5
  __int64 v7; // rax@5
  unsigned __int64 v8; // rcx@5
  int v9; // edi@9
  unsigned __int64 v10; // rax@9
  int v11; // esi@9
  unsigned int v12; // ebx@9
  unsigned __int64 v13; // rax@9
  unsigned int v14; // esi@9
  int v15; // edi@11
  signed int v16; // esi@11
  signed int v17; // ebx@11
  unsigned __int64 v18; // rax@11
  unsigned int v19; // esi@11
  int v20; // edi@13
  signed int v21; // esi@13
  signed int v22; // ebx@13
  unsigned __int64 v23; // rax@13
  unsigned int v24; // esi@13
  int v25; // edi@15
  signed int v26; // esi@15
  signed int v27; // ebx@15
  unsigned __int64 v28; // rax@15
  unsigned int v29; // esi@15
  int v30; // edi@17
  signed int v31; // esi@17
  signed int v32; // ebx@17
  unsigned __int64 v33; // rax@17
  unsigned int v34; // esi@17
  int v35; // edi@19
  signed int v36; // esi@19
  signed int v37; // ebx@19
  unsigned __int64 v38; // rax@19
  unsigned int v39; // esi@19
  signed int v40; // esi@22
  signed int v41; // ebx@22
  unsigned __int64 v42; // rax@22
  unsigned int v43; // esi@22
  int v44; // esi@61
  int v45; // esi@64
  int v46; // edi@69
  int v47; // edi@73
  signed __int64 v48; // rax@73
  int v49; // esi@73
  unsigned int v50; // ebx@73
  unsigned __int64 v51; // rax@73
  unsigned int v52; // esi@73
  int v53; // edi@75
  signed int v54; // esi@75
  signed int v55; // ebx@75
  unsigned __int64 v56; // rax@75
  unsigned int v57; // esi@75
  int v58; // edi@77
  signed int v59; // esi@77
  signed int v60; // ebx@77
  unsigned __int64 v61; // rax@77
  unsigned int v62; // esi@77
  int v63; // edi@79
  signed int v64; // esi@79
  signed int v65; // ebx@79
  unsigned __int64 v66; // rax@79
  unsigned int v67; // esi@79
  int v68; // edi@81
  signed int v69; // esi@81
  signed int v70; // ebx@81
  unsigned __int64 v71; // rax@81
  unsigned int v72; // esi@81
  int v73; // edi@83
  signed int v74; // esi@83
  signed int v75; // ebx@83
  unsigned int v76; // esi@83
  signed int v77; // esi@86
  signed int v78; // ebx@86
  unsigned __int64 v79; // rax@86
  unsigned int v80; // esi@86
  int v81; // esi@121
  int v82; // esi@124
  int v83; // ebp@127
  __int64 v85; // [sp+10h] [bp-5Ch]@5
  __int64 v86; // [sp+10h] [bp-5Ch]@69
  unsigned __int64 v87; // [sp+18h] [bp-54h]@5
  signed __int64 v88; // [sp+18h] [bp-54h]@69
  int v89; // [sp+20h] [bp-4Ch]@9
  int v90; // [sp+20h] [bp-4Ch]@73
  int v91; // [sp+24h] [bp-48h]@5
  int v92; // [sp+24h] [bp-48h]@69
  int v93; // [sp+30h] [bp-3Ch]@5
  int v94; // [sp+30h] [bp-3Ch]@69
  signed int v95; // [sp+34h] [bp-38h]@1
  __int64 v96; // [sp+38h] [bp-34h]@2
  signed int v97; // [sp+40h] [bp-2Ch]@67
  int v98; // [sp+44h] [bp-28h]@5
  __int64 v99; // [sp+48h] [bp-24h]@5

  v95 = *(_BYTE *)(a1 + 795);
  if ( *(_DWORD *)(a1 + 52) <= 0 )
  {
    v83 = v95 + (a2 << 6) + 21734;
    v96 = *(_QWORD *)(a1 + 8 * v83 + 8);
    v2 = *(_DWORD *)(a1 + 8 * v83 + 8);
    v3 = *(_DWORD *)(a1 + 8 * v83 + 12);
  }
  else
  {
    v96 = *(_QWORD *)(a1 + 174984);
    v2 = *(_DWORD *)(a1 + 174984);
    v3 = *(_DWORD *)(a1 + 174988);
  }
  LODWORD(v4) = sub_6F809680(2 * __PAIR__(v3, v2) - 322020380276864555i64);
  BYTE4(v4) = 1;
  *(_DWORD *)(a1 + 53164) = v4;
  if ( v3 <= 234881023 && !*(_BYTE *)(a1 + 51612) )
  {
    v87 = __PAIR__(v3, v2) + 100880631653099110i64;
    v91 = 0;
    v93 = v95 != 0 ? v95 - 1 : 0;
    v98 = a1 + (a2 << 9);
    v99 = *(_QWORD *)(a1 + (a2 << 9) + 173880);
    v5 = 1;
    v6 = a1 + (a2 << 9);
    v7 = (signed int)((v99 - v87) >> 32) >> 31;
    v8 = v7 + v99 - v87;
    HIDWORD(v85) = v8 ^ ((signed int)((v99 - v87) >> 32) >> 31);
    LODWORD(v85) = HIDWORD(v7) ^ HIDWORD(v8);
    do
    {
      v40 = (signed int)((*(_QWORD *)(v6 + 8 * v5 + 173880) - v87) >> 32) >> 31;
      v41 = (signed int)((*(_QWORD *)(v6 + 8 * v5 + 173880) - v87) >> 32) >> 62;
      v42 = __PAIR__(v41, v40) + *(_QWORD *)(v6 + 8 * v5 + 173880) - v87;
      v43 = v42 ^ v40;
      if ( (v41 ^ HIDWORD(v42)) < (signed int)v85 || (v41 ^ HIDWORD(v42)) <= (signed int)v85 && v43 < HIDWORD(v85) )
      {
        v91 = v5;
        HIDWORD(v85) = v43;
        LODWORD(v85) = v41 ^ HIDWORD(v42);
      }
      else if ( v85 == __PAIR__(v43, (unsigned int)v41 ^ HIDWORD(v42)) )
      {
        HIDWORD(v85) = v43;
        v45 = v91;
        LODWORD(v85) = v41 ^ HIDWORD(v42);
        if ( (((v5 - v93) >> 31) ^ (v5 - v93)) - ((v5 - v93) >> 31) < (((v91 - v93) >> 31) ^ (v91 - v93))
                                                                    - ((v91 - v93) >> 31) )
          v45 = v5;
        v91 = v45;
      }
      v9 = v5 + 1;
      v89 = v9;
      v10 = *(_QWORD *)(v6 + 8 * v9 + 173880) - v87;
      v11 = SHIDWORD(v10) >> 31;
      v12 = SHIDWORD(v10) >> 62;
      v13 = __PAIR__(SHIDWORD(v10) >> 62, SHIDWORD(v10) >> 31) + v10;
      v14 = v13 ^ v11;
      if ( (signed int)(v12 ^ HIDWORD(v13)) < (signed int)v85
        || (signed int)(v12 ^ HIDWORD(v13)) <= (signed int)v85 && v14 < HIDWORD(v85) )
      {
        HIDWORD(v85) = v14;
        LODWORD(v85) = v12 ^ HIDWORD(v13);
        v91 = v9;
      }
      else if ( v85 == __PAIR__(v14, v12 ^ HIDWORD(v13)) )
      {
        HIDWORD(v85) = v14;
        LODWORD(v85) = v12 ^ HIDWORD(v13);
        v44 = v91;
        if ( (((v9 - v93) >> 31) ^ (v9 - v93)) - ((v9 - v93) >> 31) < (((v91 - v93) >> 31) ^ (v91 - v93))
                                                                    - ((v91 - v93) >> 31) )
          v44 = v9;
        v91 = v44;
      }
      v15 = v9 + 1;
      v16 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 1) + 173880) - v87) >> 32) >> 31;
      v17 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 1) + 173880) - v87) >> 32) >> 62;
      v18 = __PAIR__(v17, v16) + *(_QWORD *)(v6 + 8 * (v89 + 1) + 173880) - v87;
      v19 = v18 ^ v16;
      if ( (v17 ^ HIDWORD(v18)) < (signed int)v85 || (v17 ^ HIDWORD(v18)) <= (signed int)v85 && v19 < HIDWORD(v85) )
      {
        v91 = v89 + 1;
        HIDWORD(v85) = v19;
        LODWORD(v85) = v17 ^ HIDWORD(v18);
      }
      else if ( v85 == __PAIR__(v19, (unsigned int)v17 ^ HIDWORD(v18)) )
      {
        HIDWORD(v85) = v19;
        LODWORD(v85) = v17 ^ HIDWORD(v18);
        if ( (((v15 - v93) >> 31) ^ (v15 - v93)) - ((v15 - v93) >> 31) >= (((v91 - v93) >> 31) ^ (v91 - v93))
                                                                        - ((v91 - v93) >> 31) )
          v15 = v91;
        v91 = v15;
      }
      v20 = v89 + 2;
      v21 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 2) + 173880) - v87) >> 32) >> 31;
      v22 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 2) + 173880) - v87) >> 32) >> 62;
      v23 = __PAIR__(v22, v21) + *(_QWORD *)(v6 + 8 * (v89 + 2) + 173880) - v87;
      v24 = v23 ^ v21;
      if ( (v22 ^ HIDWORD(v23)) < (signed int)v85 || (v22 ^ HIDWORD(v23)) <= (signed int)v85 && v24 < HIDWORD(v85) )
      {
        v91 = v89 + 2;
        HIDWORD(v85) = v24;
        LODWORD(v85) = v22 ^ HIDWORD(v23);
      }
      else if ( v85 == __PAIR__(v24, (unsigned int)v22 ^ HIDWORD(v23)) )
      {
        HIDWORD(v85) = v24;
        LODWORD(v85) = v22 ^ HIDWORD(v23);
        if ( (((v20 - v93) >> 31) ^ (v20 - v93)) - ((v20 - v93) >> 31) >= (((v91 - v93) >> 31) ^ (v91 - v93))
                                                                        - ((v91 - v93) >> 31) )
          v20 = v91;
        v91 = v20;
      }
      v25 = v89 + 3;
      v26 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 3) + 173880) - v87) >> 32) >> 31;
      v27 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 3) + 173880) - v87) >> 32) >> 62;
      v28 = __PAIR__(v27, v26) + *(_QWORD *)(v6 + 8 * (v89 + 3) + 173880) - v87;
      v29 = v28 ^ v26;
      if ( (v27 ^ HIDWORD(v28)) < (signed int)v85 || (v27 ^ HIDWORD(v28)) <= (signed int)v85 && v29 < HIDWORD(v85) )
      {
        v91 = v89 + 3;
        HIDWORD(v85) = v29;
        LODWORD(v85) = v27 ^ HIDWORD(v28);
      }
      else if ( v85 == __PAIR__(v29, (unsigned int)v27 ^ HIDWORD(v28)) )
      {
        HIDWORD(v85) = v29;
        LODWORD(v85) = v27 ^ HIDWORD(v28);
        if ( (((v25 - v93) >> 31) ^ (v25 - v93)) - ((v25 - v93) >> 31) >= (((v91 - v93) >> 31) ^ (v91 - v93))
                                                                        - ((v91 - v93) >> 31) )
          v25 = v91;
        v91 = v25;
      }
      v30 = v89 + 4;
      v31 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 4) + 173880) - v87) >> 32) >> 31;
      v32 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 4) + 173880) - v87) >> 32) >> 62;
      v33 = __PAIR__(v32, v31) + *(_QWORD *)(v6 + 8 * (v89 + 4) + 173880) - v87;
      v34 = v33 ^ v31;
      if ( (v32 ^ HIDWORD(v33)) < (signed int)v85 || (v32 ^ HIDWORD(v33)) <= (signed int)v85 && v34 < HIDWORD(v85) )
      {
        v91 = v89 + 4;
        HIDWORD(v85) = v34;
        LODWORD(v85) = v32 ^ HIDWORD(v33);
      }
      else if ( v85 == __PAIR__(v34, (unsigned int)v32 ^ HIDWORD(v33)) )
      {
        HIDWORD(v85) = v34;
        LODWORD(v85) = v32 ^ HIDWORD(v33);
        if ( (((v30 - v93) >> 31) ^ (v30 - v93)) - ((v30 - v93) >> 31) >= (((v91 - v93) >> 31) ^ (v91 - v93))
                                                                        - ((v91 - v93) >> 31) )
          v30 = v91;
        v91 = v30;
      }
      v35 = v89 + 5;
      v36 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 5) + 173880) - v87) >> 32) >> 31;
      v37 = (signed int)((*(_QWORD *)(v6 + 8 * (v89 + 5) + 173880) - v87) >> 32) >> 62;
      v38 = __PAIR__(v37, v36) + *(_QWORD *)(v6 + 8 * (v89 + 5) + 173880) - v87;
      v39 = v38 ^ v36;
      if ( (v37 ^ HIDWORD(v38)) < (signed int)v85 || (v37 ^ HIDWORD(v38)) <= (signed int)v85 && v39 < HIDWORD(v85) )
      {
        v91 = v89 + 5;
        HIDWORD(v85) = v39;
        LODWORD(v85) = v37 ^ HIDWORD(v38);
      }
      else if ( v85 == __PAIR__(v39, (unsigned int)v37 ^ HIDWORD(v38)) )
      {
        HIDWORD(v85) = v39;
        LODWORD(v85) = v37 ^ HIDWORD(v38);
        if ( (((v35 - v93) >> 31) ^ (v35 - v93)) - ((v35 - v93) >> 31) >= (((v91 - v93) >> 31) ^ (v91 - v93))
                                                                        - ((v91 - v93) >> 31) )
          v35 = v91;
        v91 = v35;
      }
      v5 = v89 + 6;
    }
    while ( v89 != 58 );
    v97 = 1;
    if ( v95 != v91 )
    {
      v97 = 2;
      *(_BYTE *)(a1 + 796) = v91;
    }
    v92 = 0;
    v88 = v96 - 86469112845513523i64;
    v94 = v95 + (v95 > 62 ? 62 - v95 : 0) + 1;
    v46 = 1;
    HIDWORD(v86) = (((signed int)((unsigned __int64)(v99 - (v96 - 86469112845513523i64)) >> 32) >> 31)
                  + v99
                  - (v96
                   - 858993459)) ^ ((signed int)((unsigned __int64)(v99 - (v96 - 86469112845513523i64)) >> 32) >> 31);
    LODWORD(v86) = ((unsigned __int64)((signed int)((unsigned __int64)(v99 - (v96 - 86469112845513523i64)) >> 32) >> 31) >> 32) ^ ((unsigned __int64)(((signed int)((unsigned __int64)(v99 - (v96 - 86469112845513523i64)) >> 32) >> 31) + v99 - (v96 - 86469112845513523i64)) >> 32);
    do
    {
      v77 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * v46 + 173880) - v88) >> 32) >> 31;
      v78 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * v46 + 173880) - v88) >> 32) >> 62;
      v79 = __PAIR__(v78, v77) + *(_QWORD *)(v98 + 8 * v46 + 173880) - v88;
      v80 = v79 ^ v77;
      if ( (v78 ^ HIDWORD(v79)) < (signed int)v86 || (v78 ^ HIDWORD(v79)) <= (signed int)v86 && v80 < HIDWORD(v86) )
      {
        v92 = v46;
        HIDWORD(v86) = v80;
        LODWORD(v86) = v78 ^ HIDWORD(v79);
      }
      else if ( v86 == __PAIR__(v80, (unsigned int)v78 ^ HIDWORD(v79)) )
      {
        HIDWORD(v86) = v80;
        v82 = v92;
        LODWORD(v86) = v78 ^ HIDWORD(v79);
        if ( (((v46 - v94) >> 31) ^ (v46 - v94)) - ((v46 - v94) >> 31) < (((v92 - v94) >> 31) ^ (v92 - v94))
                                                                       - ((v92 - v94) >> 31) )
          v82 = v46;
        v92 = v82;
      }
      v47 = v46 + 1;
      v90 = v47;
      v48 = *(_QWORD *)(v98 + 8 * v47 + 173880) - v88;
      v49 = SHIDWORD(v48) >> 31;
      v50 = SHIDWORD(v48) >> 62;
      v51 = __PAIR__(SHIDWORD(v48) >> 62, SHIDWORD(v48) >> 31) + v48;
      v52 = v51 ^ v49;
      if ( (signed int)(v50 ^ HIDWORD(v51)) < (signed int)v86
        || (signed int)(v50 ^ HIDWORD(v51)) <= (signed int)v86 && v52 < HIDWORD(v86) )
      {
        HIDWORD(v86) = v52;
        LODWORD(v86) = v50 ^ HIDWORD(v51);
        v92 = v47;
      }
      else if ( v86 == __PAIR__(v52, v50 ^ HIDWORD(v51)) )
      {
        HIDWORD(v86) = v52;
        LODWORD(v86) = v50 ^ HIDWORD(v51);
        v81 = v92;
        if ( (((v47 - v94) >> 31) ^ (v47 - v94)) - ((v47 - v94) >> 31) < (((v92 - v94) >> 31) ^ (v92 - v94))
                                                                       - ((v92 - v94) >> 31) )
          v81 = v47;
        v92 = v81;
      }
      v53 = v47 + 1;
      v54 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 1) + 173880) - v88) >> 32) >> 31;
      v55 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 1) + 173880) - v88) >> 32) >> 62;
      v56 = __PAIR__(v55, v54) + *(_QWORD *)(v98 + 8 * (v90 + 1) + 173880) - v88;
      v57 = v56 ^ v54;
      if ( (v55 ^ HIDWORD(v56)) < (signed int)v86 || (v55 ^ HIDWORD(v56)) <= (signed int)v86 && v57 < HIDWORD(v86) )
      {
        v92 = v90 + 1;
        HIDWORD(v86) = v57;
        LODWORD(v86) = v55 ^ HIDWORD(v56);
      }
      else if ( v86 == __PAIR__(v57, (unsigned int)v55 ^ HIDWORD(v56)) )
      {
        HIDWORD(v86) = v57;
        LODWORD(v86) = v55 ^ HIDWORD(v56);
        if ( (((v53 - v94) >> 31) ^ (v53 - v94)) - ((v53 - v94) >> 31) >= (((v92 - v94) >> 31) ^ (v92 - v94))
                                                                        - ((v92 - v94) >> 31) )
          v53 = v92;
        v92 = v53;
      }
      v58 = v90 + 2;
      v59 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 2) + 173880) - v88) >> 32) >> 31;
      v60 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 2) + 173880) - v88) >> 32) >> 62;
      v61 = __PAIR__(v60, v59) + *(_QWORD *)(v98 + 8 * (v90 + 2) + 173880) - v88;
      v62 = v61 ^ v59;
      if ( (v60 ^ HIDWORD(v61)) < (signed int)v86 || (v60 ^ HIDWORD(v61)) <= (signed int)v86 && v62 < HIDWORD(v86) )
      {
        v92 = v90 + 2;
        HIDWORD(v86) = v62;
        LODWORD(v86) = v60 ^ HIDWORD(v61);
      }
      else if ( v86 == __PAIR__(v62, (unsigned int)v60 ^ HIDWORD(v61)) )
      {
        HIDWORD(v86) = v62;
        LODWORD(v86) = v60 ^ HIDWORD(v61);
        if ( (((v58 - v94) >> 31) ^ (v58 - v94)) - ((v58 - v94) >> 31) >= (((v92 - v94) >> 31) ^ (v92 - v94))
                                                                        - ((v92 - v94) >> 31) )
          v58 = v92;
        v92 = v58;
      }
      v63 = v90 + 3;
      v64 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 3) + 173880) - v88) >> 32) >> 31;
      v65 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 3) + 173880) - v88) >> 32) >> 62;
      v66 = __PAIR__(v65, v64) + *(_QWORD *)(v98 + 8 * (v90 + 3) + 173880) - v88;
      v67 = v66 ^ v64;
      if ( (v65 ^ HIDWORD(v66)) < (signed int)v86 || (v65 ^ HIDWORD(v66)) <= (signed int)v86 && v67 < HIDWORD(v86) )
      {
        v92 = v90 + 3;
        HIDWORD(v86) = v67;
        LODWORD(v86) = v65 ^ HIDWORD(v66);
      }
      else if ( v86 == __PAIR__(v67, (unsigned int)v65 ^ HIDWORD(v66)) )
      {
        HIDWORD(v86) = v67;
        LODWORD(v86) = v65 ^ HIDWORD(v66);
        if ( (((v63 - v94) >> 31) ^ (v63 - v94)) - ((v63 - v94) >> 31) >= (((v92 - v94) >> 31) ^ (v92 - v94))
                                                                        - ((v92 - v94) >> 31) )
          v63 = v92;
        v92 = v63;
      }
      v68 = v90 + 4;
      v69 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 4) + 173880) - v88) >> 32) >> 31;
      v70 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 4) + 173880) - v88) >> 32) >> 62;
      v71 = __PAIR__(v70, v69) + *(_QWORD *)(v98 + 8 * (v90 + 4) + 173880) - v88;
      v72 = v71 ^ v69;
      if ( (v70 ^ HIDWORD(v71)) < (signed int)v86 || (v70 ^ HIDWORD(v71)) <= (signed int)v86 && v72 < HIDWORD(v86) )
      {
        v92 = v90 + 4;
        HIDWORD(v86) = v72;
        LODWORD(v86) = v70 ^ HIDWORD(v71);
      }
      else if ( v86 == __PAIR__(v72, (unsigned int)v70 ^ HIDWORD(v71)) )
      {
        HIDWORD(v86) = v72;
        LODWORD(v86) = v70 ^ HIDWORD(v71);
        if ( (((v68 - v94) >> 31) ^ (v68 - v94)) - ((v68 - v94) >> 31) >= (((v92 - v94) >> 31) ^ (v92 - v94))
                                                                        - ((v92 - v94) >> 31) )
          v68 = v92;
        v92 = v68;
      }
      v73 = v90 + 5;
      v74 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 5) + 173880) - v88) >> 32) >> 31;
      v75 = (signed int)((unsigned __int64)(*(_QWORD *)(v98 + 8 * (v90 + 5) + 173880) - v88) >> 32) >> 62;
      v4 = __PAIR__(v75, v74) + *(_QWORD *)(v98 + 8 * (v90 + 5) + 173880) - v88;
      v76 = v4 ^ v74;
      LODWORD(v4) = v75 ^ HIDWORD(v4);
      if ( (v75 ^ HIDWORD(v4)) < (signed int)v86 || (v75 ^ HIDWORD(v4)) <= (signed int)v86 && v76 < HIDWORD(v86) )
      {
        v92 = v90 + 5;
        HIDWORD(v86) = v76;
        LODWORD(v86) = v75 ^ HIDWORD(v4);
      }
      else if ( v86 == __PAIR__(v76, (unsigned int)v4) )
      {
        HIDWORD(v86) = v76;
        LODWORD(v86) = v75 ^ HIDWORD(v4);
        if ( (((v73 - v94) >> 31) ^ (v73 - v94)) - ((v73 - v94) >> 31) >= (((v92 - v94) >> 31) ^ (v92 - v94))
                                                                        - ((v92 - v94) >> 31) )
          v73 = v92;
        v92 = v73;
      }
      v46 = v90 + 6;
    }
    while ( v90 != 58 );
    if ( v95 == v92 || (LODWORD(v4) = *(_BYTE *)(a1 + v97 + 794), (_DWORD)v4 == v92) )
    {
      BYTE4(v4) = v97;
    }
    else
    {
      *(_BYTE *)(a1 + v97 + 795) = v92;
      BYTE4(v4) = v97 + 1;
    }
  }
  *(_BYTE *)(a1 + 794) = BYTE4(v4);
  return v4;
}
