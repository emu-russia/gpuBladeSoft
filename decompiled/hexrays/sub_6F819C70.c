signed int __usercall sub_6F819C70@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6, int *a7)
{
  int v7; // ebp@1
  int v8; // edi@1
  int v9; // esi@1
  unsigned __int8 *v10; // edx@1
  char v11; // bp@1
  unsigned __int8 v12; // bl@1
  signed int result; // eax@3
  int v14; // ebx@6
  int v15; // eax@6
  int v16; // esi@6
  signed int v17; // eax@9
  int v18; // esi@12
  int v19; // eax@12
  int v20; // ecx@12
  int v21; // eax@12
  unsigned int v22; // ebx@12
  int v23; // edx@12
  int v24; // ebx@12
  int v25; // eax@12
  int v26; // edx@12
  int v27; // esi@12
  int v28; // eax@12
  int v29; // esi@12
  int v30; // ebx@13
  unsigned int v31; // ebp@13
  __int16 v32; // di@13
  int v33; // ebx@14
  int v34; // edx@14
  int v35; // eax@15
  int v36; // ebx@15
  __int16 v37; // dx@15
  unsigned int v38; // ebp@15
  int v39; // ebx@16
  int v40; // ebp@16
  int v41; // ebx@17
  int v42; // esi@17
  unsigned int v43; // ecx@17
  __int16 v44; // bp@17
  int v45; // esi@18
  int v46; // edx@18
  __int16 *v47; // eax@21
  int v48; // edx@21
  int v49; // edi@24
  int v50; // esi@29
  int v51; // edi@29
  signed __int64 v52; // rcx@29
  int v53; // eax@29
  int v54; // edx@31
  signed __int64 v55; // rcx@32
  int v56; // edx@32
  int v57; // esi@33
  signed __int64 v58; // rcx@34
  int v59; // esi@35
  signed __int64 v60; // rcx@36
  int v61; // esi@37
  signed __int64 v62; // rcx@38
  int v63; // esi@39
  signed __int64 v64; // rcx@40
  int v65; // esi@41
  signed __int64 v66; // rcx@42
  int v67; // esi@43
  signed __int64 v68; // rcx@44
  int v69; // esi@45
  int v70; // edi@47
  unsigned int v71; // edx@47
  int v72; // ebp@48
  int v73; // ebx@54
  __int16 *v74; // ecx@62
  int v75; // esi@63
  int v76; // edx@63
  int v77; // ebx@63
  int v78; // eax@63
  int v79; // esi@63
  int v80; // edx@63
  int v81; // edi@63
  int v82; // ebx@63
  int v83; // edx@63
  int v84; // eax@63
  int v85; // ebx@63
  int v86; // edx@63
  int v87; // edi@63
  int v88; // eax@63
  int v89; // edx@63
  int v90; // esi@63
  int v91; // eax@63
  int v92; // ebx@63
  int v93; // esi@63
  int v94; // edx@63
  int v95; // ebx@63
  int v96; // eax@63
  int v97; // edi@63
  unsigned __int8 v98; // [sp+34h] [bp+34h]@1
  int v99; // [sp+34h] [bp+34h]@15
  int v100; // [sp+34h] [bp+34h]@20
  __int16 *v101; // [sp+38h] [bp+38h]@10
  int v102; // [sp+3Ch] [bp+3Ch]@12
  int v103; // [sp+40h] [bp+40h]@12
  int v104; // [sp+44h] [bp+44h]@6
  int v105; // [sp+48h] [bp+48h]@1
  int v106; // [sp+4Ch] [bp+4Ch]@6
  int v107; // [sp+50h] [bp+50h]@1
  int v108; // [sp+54h] [bp+54h]@1
  int v109; // [sp+58h] [bp+58h]@1
  int v110; // [sp+5Ch] [bp+5Ch]@12
  int v111; // [sp+60h] [bp+60h]@6
  int v112; // [sp+64h] [bp+64h]@6
  int v113; // [sp+68h] [bp+68h]@6
  int v114; // [sp+6Ch] [bp+6Ch]@6
  signed int v115; // [sp+70h] [bp+70h]@9
  int v116; // [sp+74h] [bp+74h]@12
  char v117; // [sp+79h] [bp+79h]@1
  __int16 v118; // [sp+7Ah] [bp+7Ah]@12
  int v119; // [sp+7Ch] [bp+7Ch]@20
  int v120; // [sp+88h] [bp+88h]@9
  int v121; // [sp+8Ch] [bp+8Ch]@10
  __int16 v122[64]; // [sp+90h] [bp+90h]@12
  __int16 v123; // [sp+110h] [bp+110h]@10
  char v124; // [sp+190h] [bp+190h]@22

  v7 = *(_DWORD *)(a1 + 204);
  v105 = a2;
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 208) + 4 * a4);
  v107 = *(_DWORD *)(a1 + 4 * a3 + 496);
  v9 = *(_DWORD *)(a1 + 492);
  v10 = (unsigned __int8 *)v7;
  v109 = *(_DWORD *)(a1 + 204);
  v11 = *(_BYTE *)(v7 + 1);
  v117 = v11 >> 3;
  v12 = *v10;
  v98 = *v10 >> 2;
  v108 = v98;
  if ( v98 & 0x3C )
  {
    if ( *(_DWORD *)(a1 + 51608) > 0 )
    {
      result = 0;
      *(_BYTE *)v109 = v12 & 0xFE;
      return result;
    }
    v108 = v98 & 3;
    *(_BYTE *)v109 = 4 * v108 | v12 & 3;
  }
  v14 = a1;
  v104 = a1;
  v15 = v9 + v8;
  v106 = a3;
  v16 = v11 & 7;
  v112 = v15;
  v114 = v16;
  v113 = v8 + *(_DWORD *)(v14 + 4 * *(_DWORD *)(v14 + 4 * ((268505377 >> 4 * v16) & 0xF) + 272) + 480);
  v111 = *(_DWORD *)(v14 + 4 * *(_DWORD *)(v14 + 280) + 480) + v8;
  if ( v16 == 1 )
  {
    v101 = &v123;
    sub_6F827390(v104, (int)&v123, v15, v107);
    v115 = 0;
  }
  else if ( v16 != 5 && v11 & 7 )
  {
    LOBYTE(v17) = sub_6F818550(
                    v104,
                    (int)&v120,
                    a3,
                    *(_BYTE *)(*(_DWORD *)(v104 + 212) + 2 * a4),
                    *(_BYTE *)(*(_DWORD *)(v104 + 212) + 2 * a4 + 1));
    v115 = v17;
    if ( v17 <= 1 )
    {
      v101 = &v123;
      sub_6F827240(v104, (int)&v123, v112, v120 + v113, v107);
    }
    else
    {
      sub_6F827EC0(v104, v111, v113 + v120, v113 + v121, v107);
      v101 = &v123;
      sub_6F827240(v104, (int)&v123, v112, v111, v107);
    }
  }
  else
  {
    v120 = 0;
    v101 = &v123;
    sub_6F827240(v104, (int)&v123, v15, v113, v107);
    v115 = 1;
  }
  sub_6F827050(v104, (int)v122, (int)v101);
  v103 = 0;
  v18 = v16 != 1;
  v19 = v105 + 4 * (v18 + 6 * v106);
  v20 = *(_DWORD *)(v19 + 1156);
  v21 = **(_WORD **)(v19 + 1084);
  v22 = (unsigned int)(2 * v122[0]) >> 31;
  v118 = v21;
  v116 = v21;
  v23 = ((v21 - v22) ^ -v22) + 2 * v122[0];
  v24 = ((v23 + (v23 * *(_WORD *)v20 >> 16)) >> *(_WORD *)(v20 + 2)) + v22;
  v110 = v24 + (v24 > 580 ? 580 - v24 : 0) >= -579 ? -580 - (v24 + (v24 > 580 ? 580 - v24 : 0)) + -580 : 580;
  v25 = v105 + 4 * (v18 + 2 * (v108 + 3 * v106));
  v26 = *(_DWORD *)(v25 + 1084);
  v27 = *(_DWORD *)(v25 + 1156);
  v28 = 1;
  v102 = v26;
  v29 = v27 + 4;
  do
  {
    v30 = *(_WORD *)(v102 + 2 * v28);
    v31 = 2 * v122[(unsigned __int8)byte_6FB8E900[v28]];
    v32 = 0;
    if ( v30 <= (signed int)((v31 ^ ((signed int)v31 >> 31)) - ((signed int)v31 >> 31)) )
    {
      v103 = v28;
      v33 = v31 + (-(v31 >> 31) ^ (v30 - (v31 >> 31)));
      v34 = (v31 >> 31) + (((v33 * *(_WORD *)v29 >> 16) + v33) >> *(_WORD *)(v29 + 2));
      v32 = v34 + (v34 > 580 ? 580 - v34 : 0) >= -579 ? -580
                                                      - v34
                                                      - (v34 > 580 ? (unsigned __int16)(580 - v34) : 0)
                                                      + -580 : 580;
    }
    v99 = v29 + 4;
    v101[v28] = v32;
    v35 = v28 + 1;
    v36 = *(_WORD *)(v102 + 2 * v35);
    v37 = 0;
    v38 = 2 * v122[(unsigned __int8)byte_6FB8E900[v35]];
    if ( v36 <= (signed int)((v38 ^ (2 * v122[(unsigned __int8)byte_6FB8E900[v35]] >> 31))
                           - (2 * v122[(unsigned __int8)byte_6FB8E900[v35]] >> 31)) )
    {
      v103 = v35;
      v39 = v38 + (-(v38 >> 31) ^ (v36 - (v38 >> 31)));
      v40 = (v38 >> 31) + ((v39 + (v39 * *(_WORD *)(v29 + 4) >> 16)) >> *(_WORD *)(v29 + 6));
      v37 = v40 + (v40 > 580 ? 580 - v40 : 0) >= -579 ? -580
                                                      - v40
                                                      - (v40 > 580 ? (unsigned __int16)(580 - v40) : 0)
                                                      + -580 : 580;
    }
    v41 = v35 + 1;
    v101[v35] = v37;
    v42 = *(_WORD *)(v102 + 2 * (v35 + 1));
    v43 = 2 * v122[(unsigned __int8)byte_6FB8E900[v35 + 1]];
    v44 = 0;
    if ( v42 <= (signed int)((v43 ^ (2 * v122[(unsigned __int8)byte_6FB8E900[v35 + 1]] >> 31))
                           - (2 * v122[(unsigned __int8)byte_6FB8E900[v35 + 1]] >> 31)) )
    {
      v103 = v35 + 1;
      v45 = v43 + (-(v43 >> 31) ^ (v42 - (v43 >> 31)));
      v46 = (v43 >> 31) + ((v45 + (v45 * *(_WORD *)(v99 + 4) >> 16)) >> *(_WORD *)(v99 + 6));
      v44 = v46 + (v46 > 580 ? 580 - v46 : 0) >= -579 ? -580
                                                      - v46
                                                      - (v46 > 580 ? (unsigned __int16)(580 - v46) : 0)
                                                      + -580 : 580;
    }
    v28 = v35 + 2;
    v29 = v99 + 8;
    v101[v41] = v44;
  }
  while ( v28 != 64 );
  v119 = *a7;
  v100 = sub_6F811B70(v104, v106, a4, v101, v102, v122, v103 + 1, a7, v114 == 1 ? 3 : 0);
  if ( v103 )
  {
    v123 = v110 * v118;
    sub_6F82D9C0(v104, (int)v101, v103 + 1);
  }
  else
  {
    v47 = v101;
    v48 = (unsigned __int16)((v110 * v116 + 15) >> 5) | ((v110 * v116 + 15) >> 5 << 16);
    do
    {
      *(_DWORD *)v47 = v48;
      *((_DWORD *)v47 + 1) = v48;
      v47 += 16;
      *((_DWORD *)v47 - 6) = v48;
      *((_DWORD *)v47 - 5) = v48;
      *((_DWORD *)v47 - 4) = v48;
      *((_DWORD *)v47 - 3) = v48;
      *((_DWORD *)v47 - 2) = v48;
      *((_DWORD *)v47 - 1) = v48;
    }
    while ( (char *)v47 != &v124 );
  }
  if ( v114 != 1 )
  {
    v49 = v111;
    if ( v115 == 1 )
      v49 = v120 + v113;
    sub_6F827FD0(v104, v111, v49, v107, (int)v101);
  }
  else
  {
    sub_6F827FA0(v104, v111, v107, (int)v101);
  }
  if ( !*(_BYTE *)(v104 + 792) )
  {
LABEL_55:
    sub_6F819330(v105 + 8 * v106 + 1060, v105 + 8 * v106 + 1060, v108);
    result = 1;
    *(_BYTE *)v109 |= 1u;
    *(_WORD *)(v109 + 2) = v110;
    return result;
  }
  sub_6F827240(v104, (int)v101, v112, v111, v107);
  if ( v117 < 0 )
  {
    v74 = v101;
    v53 = 0;
    v51 = 0;
    do
    {
      v75 = *v74;
      v76 = v74[1];
      v74 += 8;
      v77 = v75 * v75;
      v78 = v76 + v75 + v53;
      v79 = v76 * v76;
      v80 = *(v74 - 6);
      v81 = v79 + v77 + v51;
      v82 = v80 * v80;
      v83 = v78 + v80;
      v84 = *(v74 - 5);
      v85 = v81 + v82;
      v86 = v84 + v83;
      v87 = v84 * v84;
      v88 = *(v74 - 4);
      v89 = v88 + v86;
      v90 = v88 * v88;
      v91 = *(v74 - 3);
      v92 = v90 + v87 + v85;
      v93 = *(v74 - 2);
      v94 = v93 + v91 + v89;
      v95 = v93 * v93 + v91 * v91 + v92;
      v96 = *(v74 - 1);
      v97 = v96 * v96;
      v53 = v94 + v96;
      v51 = v95 + v97;
    }
    while ( (char *)v74 != &v124 );
  }
  else
  {
    v50 = (int)v101;
    v51 = 0;
    v52 = *(_QWORD *)(v104 + 16 * (v117 + 32));
    v53 = 0;
    do
    {
      if ( v52 & 1 )
      {
        v54 = *(_WORD *)v50;
        v53 += v54;
        v51 += v54 * v54;
      }
      v55 = v52 >> 1;
      v56 = v50 + 2;
      if ( v55 & 1 )
      {
        v57 = *(_WORD *)(v50 + 2);
        v53 += v57;
        v51 += v57 * v57;
      }
      v58 = v55 >> 1;
      if ( v58 & 1 )
      {
        v59 = *(_WORD *)(v56 + 2);
        v53 += v59;
        v51 += v59 * v59;
      }
      v60 = v58 >> 1;
      if ( v60 & 1 )
      {
        v61 = *(_WORD *)(v56 + 4);
        v53 += v61;
        v51 += v61 * v61;
      }
      v62 = v60 >> 1;
      if ( v62 & 1 )
      {
        v63 = *(_WORD *)(v56 + 6);
        v53 += v63;
        v51 += v63 * v63;
      }
      v64 = v62 >> 1;
      if ( v64 & 1 )
      {
        v65 = *(_WORD *)(v56 + 8);
        v53 += v65;
        v51 += v65 * v65;
      }
      v66 = v64 >> 1;
      if ( v66 & 1 )
      {
        v67 = *(_WORD *)(v56 + 10);
        v53 += v67;
        v51 += v67 * v67;
      }
      v68 = v66 >> 1;
      if ( v68 & 1 )
      {
        v69 = *(_WORD *)(v56 + 12);
        v53 += v69;
        v51 += v69 * v69;
      }
      v50 = v56 + 14;
      v52 = v68 >> 1;
    }
    while ( (char *)(v56 + 14) != &v124 );
  }
  v70 = 16 * v51 - (v53 * v53 >> 2);
  v71 = *(_DWORD *)(*(_DWORD *)(v105 + 4 * v106 + 1228) + 4 * (a4 - *(_DWORD *)(v105 + 4 * v106 + 1288)));
  if ( v71 == -1 )
  {
    *(_DWORD *)(a6 + 12) = 1;
LABEL_54:
    v73 = a6;
    *(_DWORD *)(v73 + 4) += v70;
    *(_DWORD *)v73 += v71;
    *(_DWORD *)(v73 + 8) += v100;
    goto LABEL_55;
  }
  v72 = 0;
  if ( a5 >= 0 )
    v72 = a5;
  if ( v71 > v70 + *(_DWORD *)(v104 + 53164) * (v100 + v72) || *(_BYTE *)(v104 + 51612) && v114 == 7 && !v106 )
    goto LABEL_54;
  sub_6F811920(v104, v119, (*a7 - v119) >> 3);
  result = 0;
  *a7 = v119;
  *(_BYTE *)v109 &= 0xFEu;
  return result;
}
