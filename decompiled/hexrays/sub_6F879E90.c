char *__cdecl sub_6F879E90(char *a1, int a2, int a3)
{
  int v3; // eax@2
  int v4; // ST64_4@2
  int v5; // ST3C_4@2
  int v6; // ST38_4@2
  int v7; // ecx@2
  int v8; // ST30_4@2
  int v9; // ecx@2
  int v10; // ST4C_4@2
  int v11; // ST2C_4@2
  int v12; // ST48_4@2
  int v13; // ST28_4@2
  int v14; // ST44_4@2
  int v15; // ST24_4@2
  int v16; // ST5C_4@2
  int v17; // ST1C_4@2
  int v18; // ST58_4@2
  int v19; // esi@2
  int v20; // ST18_4@2
  int v21; // esi@2
  int v22; // edi@2
  int v23; // eax@2
  int v24; // ST14_4@2
  int v25; // eax@2
  int v26; // ST10_4@2
  int v27; // ST40_4@2
  int v28; // ST0C_4@2
  int v29; // ecx@2
  int v30; // ST08_4@2
  int v31; // ebx@2
  int v32; // ST00_4@2
  int v33; // ST54_4@2
  int v34; // eax@2
  int v35; // edx@2
  int v36; // ST4C_4@2
  int v37; // ST48_4@2
  int v38; // ST44_4@2
  int v39; // ST5C_4@2
  int v40; // ST58_4@2
  int v41; // ST64_4@2
  int v42; // ST40_4@2
  int v43; // ST3C_4@2
  int v44; // ST38_4@2
  int v45; // ST54_4@2
  int v46; // ebx@2
  char *result; // eax@6
  char *v48; // edx@6
  int v49; // edi@7
  int v50; // ST64_4@7
  int v51; // ST60_4@7
  int v52; // ST40_4@7
  int v53; // ST24_4@7
  int v54; // ST1C_4@7
  int v55; // ecx@7
  int v56; // esi@7
  int v57; // ST34_4@7
  int v58; // ST0C_4@7
  int v59; // ebx@7
  int v60; // ST08_4@7
  int v61; // ST60_4@7
  int v62; // ST64_4@7
  int v63; // ST40_4@7
  int v64; // ecx@7
  int v65; // ST50_4@7
  int v66; // ST48_4@7
  int v67; // ST44_4@7
  int v68; // ST54_4@7
  int v69; // ST5C_4@7
  int v70; // ST58_4@7
  int v71; // ST4C_4@7
  int v72; // esi@7
  int v73; // ST64_4@7
  int v74; // ST34_4@7
  int v75; // ST3C_4@7
  int v76; // ST38_4@7
  int v77; // ST60_4@7
  int v78; // ST40_4@7
  int v79; // [sp+34h] [bp-140h]@1
  char *v80; // [sp+60h] [bp-114h]@1
  char v81; // [sp+68h] [bp-10Ch]@5
  char v82; // [sp+88h] [bp-ECh]@7

  v80 = a1;
  v79 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a2 + 4 * v79) + a3;
      v4 = *(_BYTE *)v3;
      v5 = *(_BYTE *)(v3 + 15);
      v6 = *(_BYTE *)(v3 + 1);
      v7 = *(_BYTE *)(v3 + 14);
      v8 = v7;
      v9 = v6 + v7;
      v10 = *(_BYTE *)(v3 + 2);
      v11 = *(_BYTE *)(v3 + 13);
      v12 = *(_BYTE *)(v3 + 3);
      v13 = *(_BYTE *)(v3 + 12);
      v14 = *(_BYTE *)(v3 + 4);
      v15 = *(_BYTE *)(v3 + 11);
      v16 = *(_BYTE *)(v3 + 5);
      v17 = *(_BYTE *)(v3 + 10);
      v18 = *(_BYTE *)(v3 + 6);
      v19 = *(_BYTE *)(v3 + 9);
      v20 = v19;
      v21 = v18 + v19;
      v22 = *(_BYTE *)(v3 + 7);
      v23 = *(_BYTE *)(v3 + 8);
      v24 = v23;
      v25 = v22 + v23;
      v26 = v25 + v4 + v5;
      v27 = v4 + v5 - v25;
      v28 = v21 + v9;
      v29 = v9 - v21;
      v30 = v17 + v16 + v11 + v10;
      v31 = v11 + v10 - (v17 + v16);
      v32 = v12 + v13 + v14 + v15;
      v33 = v12 + v13 - (v14 + v15);
      v34 = v4 - v5;
      v35 = v6 - v8;
      v36 = v10 - v11;
      v37 = v12 - v13;
      v38 = v14 - v15;
      v39 = v16 - v17;
      v40 = v18 - v20;
      *(_DWORD *)v80 = 4 * (v32 + v30 + v26 + v28 - 2048);
      *((_DWORD *)v80 + 4) = (10703 * (v26 - v32) + 4433 * (v28 - v30) + 1024) >> 11;
      v41 = 11363 * (v27 - v31) + 2260 * (v33 - v29);
      *((_DWORD *)v80 + 2) = (v41 + 11893 * v29 + 17799 * v31 + 1024) >> 11;
      *((_DWORD *)v80 + 6) = (v41 + -8697 * v33 - 1730 * v27 + 1024) >> 11;
      v42 = 3363 * (v40 - (v22 - v24)) + 11086 * (v6 - v8 + v34);
      v43 = 8956 * (v34 + v37) + 7350 * (v38 - (v22 - v24));
      v44 = 11529 * (v40 - v39) + 1136 * (v6 - v8 + v36);
      v45 = -5461 * (v35 + v37) - 10217 * (v38 + v40);
      v46 = 3363 * (v39 - v38) + -11086 * (v36 + v37);
      *((_DWORD *)v80 + 1) = (v43
                            + v42
                            + 5461 * (v39 + v22 - v24)
                            + 10217 * (v34 + v36)
                            + 6387 * (v22 - v24)
                            - 18730 * v34
                            + 1024) >> 11;
      *((_DWORD *)v80 + 3) = (v44 + v42 + v45 + -13631 * v40 + 589 * v35 + 1024) >> 11;
      *((_DWORD *)v80 + 5) = (v46
                            + v44
                            + 5461 * (v39 + v22 - v24)
                            + 10217 * (v34 + v36)
                            + 10055 * v39
                            - 9222 * v36
                            + 1024) >> 11;
      *((_DWORD *)v80 + 7) = (v46 + v43 + v45 + 17760 * v38 + 8728 * v37 + 1024) >> 11;
      if ( ++v79 != 8 )
        break;
      v80 = &v81;
    }
    if ( v79 == 16 )
      break;
    v80 += 32;
  }
  result = a1;
  v48 = &v81;
  do
  {
    v49 = *(_DWORD *)result + *((_DWORD *)v48 + 56);
    v50 = *((_DWORD *)result + 8) + *((_DWORD *)v48 + 48);
    v51 = *((_DWORD *)result + 16) + *((_DWORD *)v48 + 40);
    v52 = *((_DWORD *)result + 24) + *((_DWORD *)v48 + 32);
    v53 = *((_DWORD *)result + 32) + *((_DWORD *)v48 + 24);
    v54 = *((_DWORD *)result + 40) + *((_DWORD *)v48 + 16);
    v55 = *((_DWORD *)result + 48) + *((_DWORD *)v48 + 8);
    v56 = *((_DWORD *)result + 56) + *(_DWORD *)v48;
    v57 = v49 - v56;
    v58 = v55 + v50;
    v59 = v50 - v55;
    v60 = v51 + v54;
    v61 = v51 - v54;
    v62 = v52 + v53;
    v63 = v52 - v53;
    v64 = *(_DWORD *)result - *((_DWORD *)v48 + 56);
    v65 = *((_DWORD *)result + 8) - *((_DWORD *)v48 + 48);
    v66 = *((_DWORD *)result + 16) - *((_DWORD *)v48 + 40);
    v67 = *((_DWORD *)result + 24) - *((_DWORD *)v48 + 32);
    v68 = *((_DWORD *)result + 32) - *((_DWORD *)v48 + 24);
    v69 = *((_DWORD *)result + 40) - *((_DWORD *)v48 + 16);
    v70 = *((_DWORD *)result + 48) - *((_DWORD *)v48 + 8);
    v71 = *((_DWORD *)result + 56) - *(_DWORD *)v48;
    v72 = v56 + v49;
    *(_DWORD *)result = (v62 + v60 + v72 + v58 + 8) >> 4;
    *((_DWORD *)result + 32) = (10703 * (v72 - v62) + 4433 * (v58 - v60) + 0x10000) >> 17;
    v73 = 11363 * (v57 - v61) + 2260 * (v63 - v59);
    *((_DWORD *)result + 16) = (v73 + 11893 * v59 + 17799 * v61 + 0x10000) >> 17;
    *((_DWORD *)result + 48) = (v73 + -8697 * v63 - 1730 * v57 + 0x10000) >> 17;
    v74 = 3363 * (v70 - v71) + 11086 * (v64 + v65);
    v75 = 8956 * (v64 + v67) + 7350 * (v68 - v71);
    v76 = 11529 * (v70 - v69) + 1136 * (v65 + v66);
    v77 = -5461 * (v65 + v67) - 10217 * (v68 + v70);
    v78 = 3363 * (v69 - v68) + -11086 * (v66 + v67);
    *((_DWORD *)result + 8) = (v75 + v74 + 5461 * (v69 + v71) + 10217 * (v64 + v66) + 6387 * v71 - 18730 * v64 + 0x10000) >> 17;
    *((_DWORD *)result + 24) = (v76 + v74 + v77 + -13631 * v70 + 589 * v65 + 0x10000) >> 17;
    *((_DWORD *)result + 40) = (v78 + v76
                                    + 5461 * (v69 + v71)
                                    + 10217 * (v64 + v66)
                                    + 10055 * v69
                                    - 9222 * v66
                                    + 0x10000) >> 17;
    *((_DWORD *)result + 56) = (v75 + v77 + 17760 * v68 + 8728 * v67 + 0x10000 + v78) >> 17;
    result += 4;
    v48 += 4;
  }
  while ( v48 != &v82 );
  return result;
}
