char *__cdecl sub_6F8794C4(char *a1, int a2, int a3)
{
  char *v3; // edx@1
  int v4; // eax@2
  int v5; // ST40_4@2
  int v6; // esi@2
  int v7; // ST2C_4@2
  int v8; // ebx@2
  int v9; // ecx@2
  int v10; // ST30_4@2
  int v11; // ST44_4@2
  int v12; // ST3C_4@2
  int v13; // ST18_4@2
  int v14; // ST50_4@2
  int v15; // ST28_4@2
  int v16; // ST48_4@2
  int v17; // ST4C_4@2
  int v18; // ST14_4@2
  int v19; // ST24_4@2
  int v20; // ST10_4@2
  int v21; // ST0C_4@2
  int v22; // ST08_4@2
  int v23; // edi@2
  int v24; // ST1C_4@2
  int v25; // ST54_4@2
  int v26; // ST38_4@2
  int v27; // ST40_4@2
  int v28; // ST44_4@2
  int v29; // ST50_4@2
  int v30; // ST4C_4@2
  int v31; // eax@2
  int v32; // ebx@2
  int v33; // ST3C_4@2
  int v34; // ST54_4@2
  int v35; // edi@2
  int v36; // ST54_4@2
  char *result; // eax@6
  char *v38; // edx@6
  int v39; // esi@7
  int v40; // ST34_4@7
  int v41; // ecx@7
  int v42; // ST2C_4@7
  int v43; // ST18_4@7
  int v44; // ST30_4@7
  int v45; // ST24_4@7
  int v46; // ST20_4@7
  int v47; // ST1C_4@7
  int v48; // ST38_4@7
  int v49; // ST48_4@7
  int v50; // ST40_4@7
  int v51; // ST50_4@7
  int v52; // ST44_4@7
  int v53; // ecx@7
  int v54; // ST4C_4@7
  int v55; // ST28_4@7
  int v56; // edi@7
  int v57; // ST54_4@7
  int v58; // esi@7
  int v59; // ST34_4@7
  int v60; // [sp+34h] [bp-110h]@1
  char v61; // [sp+58h] [bp-ECh]@5
  char v62; // [sp+78h] [bp-CCh]@7

  v3 = a1;
  v60 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v60) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 14);
      v7 = v6 + v5;
      v8 = *(_BYTE *)(v4 + 1);
      v9 = *(_BYTE *)(v4 + 13);
      v10 = v9 + v8;
      v11 = *(_BYTE *)(v4 + 2);
      v12 = *(_BYTE *)(v4 + 12);
      v13 = v11 + v12;
      v14 = *(_BYTE *)(v4 + 3);
      v15 = *(_BYTE *)(v4 + 11);
      v16 = v14 + v15;
      v17 = *(_BYTE *)(v4 + 4);
      v18 = *(_BYTE *)(v4 + 10);
      v19 = v17 + v18;
      v20 = *(_BYTE *)(v4 + 5);
      v21 = *(_BYTE *)(v4 + 9);
      v22 = *(_BYTE *)(v4 + 6);
      v23 = *(_BYTE *)(v4 + 8);
      v24 = v22 + v23;
      v25 = *(_BYTE *)(v4 + 7);
      v26 = v5 - v6;
      v27 = v8 - v9;
      v28 = v11 - v12;
      v29 = v14 - v15;
      v30 = v17 - v18;
      v31 = v22 - v23;
      v32 = v20 + v21 + v7 + v19;
      v33 = v22 + v23 + v10 + v16;
      *(_DWORD *)v3 = v33 + v32 + v25 + v13 - 1920;
      *((_DWORD *)v3 + 6) = (9373 * (v32 - 2 * (v25 + v13)) + 3580 * (2 * (v25 + v13) - v33) + 4096) >> 13;
      v34 = v13 - v25 - v25 + ((v10 + v19) >> 1);
      v35 = 11332 * (v7 - v16) + 7752 * (v22 + v23 - (v20 + v21)) + 4096 + 6476 * (v10 - v19);
      *((_DWORD *)v3 + 2) = (v35 + 18336 * (v34 - v24) + 12543 * (v16 - v34)) >> 13;
      *((_DWORD *)v3 + 4) = (6541 * (v20 + v21 - v34) + 748 * (v34 - v7) + v35) >> 13;
      v36 = 11018 * (v27 + v30) + 4712 * (v20 - v21 + v29) + 11522 * (v26 - v31);
      *((_DWORD *)v3 + 1) = (v36 + -4209 * v30 + 10033 * v28 + 3897 * v29 + 4096 + 13930 * v31) >> 13;
      *((_DWORD *)v3 + 3) = (6810 * (v27 - v29 - v31) + 11018 * (v26 - v30 - (v20 - v21)) + 4096) >> 13;
      *((_DWORD *)v3 + 5) = (10033 * (v20 - v21 + v26 + v31 - v29 - v28) + 4096) >> 13;
      *((_DWORD *)v3 + 7) = (v36 + -2912 * v26 - 17828 * v27 + -7121 * (v20 - v21) + 4096 - 10033 * v28) >> 13;
      if ( ++v60 != 8 )
        break;
      v3 = &v61;
    }
    if ( v60 == 15 )
      break;
    v3 += 32;
  }
  result = a1;
  v38 = &v61;
  do
  {
    v39 = *((_DWORD *)v38 + 48);
    v40 = v39 + *(_DWORD *)result;
    v41 = *((_DWORD *)v38 + 40);
    v42 = v41 + *((_DWORD *)result + 8);
    v43 = *((_DWORD *)result + 16) + *((_DWORD *)v38 + 32);
    v44 = *((_DWORD *)result + 24) + *((_DWORD *)v38 + 24);
    v45 = *((_DWORD *)result + 32) + *((_DWORD *)v38 + 16);
    v46 = *((_DWORD *)result + 40) + *((_DWORD *)v38 + 8);
    v47 = *((_DWORD *)result + 48) + *(_DWORD *)v38;
    v48 = *(_DWORD *)result - v39;
    v49 = *((_DWORD *)result + 8) - v41;
    v50 = *((_DWORD *)result + 16) - *((_DWORD *)v38 + 32);
    v51 = *((_DWORD *)result + 24) - *((_DWORD *)v38 + 24);
    v52 = *((_DWORD *)result + 32) - *((_DWORD *)v38 + 16);
    v53 = *((_DWORD *)result + 40) - *((_DWORD *)v38 + 8);
    v54 = *((_DWORD *)result + 48) - *(_DWORD *)v38;
    v55 = v47 + v42 + v44;
    v56 = *((_DWORD *)result + 56) + v43;
    *(_DWORD *)result = (9321 * (v56 + v55 + v46 + v40 + v45) + 0x4000) >> 15;
    *((_DWORD *)result + 48) = (4073 * (2 * v56 - v55) + 10664 * (v46 + v40 + v45 - 2 * v56) + 0x4000) >> 15;
    v57 = v43 - *((_DWORD *)result + 56) - *((_DWORD *)result + 56) + ((v42 + v45) >> 1);
    v58 = 12893 * (v40 - v44) + 8820 * (v47 - v46) + 0x4000 + 7369 * (v42 - v45);
    *((_DWORD *)result + 16) = (v58 + 20862 * (v57 - v47) + 14271 * (v44 - v57)) >> 15;
    *((_DWORD *)result + 32) = (v58 + 852 * (v57 - v40) + 7442 * (v46 - v57)) >> 15;
    v59 = 5361 * (v53 + v51) + 12536 * (v49 + v52) + 13109 * (v48 - v54);
    *((_DWORD *)result + 8) = (v59 + 11415 * v50 + 4434 * v51 + 0x4000 + -4788 * v52 + 15850 * v54) >> 15;
    *((_DWORD *)result + 24) = (7748 * (v49 - v51 - v54) + 12536 * (v48 - v52 - v53) + 0x4000) >> 15;
    *((_DWORD *)result + 40) = (11415 * (v54 + v53 + v48 - v51 - v50) + 0x4000) >> 15;
    *((_DWORD *)result + 56) = (v59 + -20284 * v49 - 3314 * v48 + -8102 * v53 + 0x4000 - 11415 * v50) >> 15;
    result += 4;
    v38 += 4;
  }
  while ( v38 != &v62 );
  return result;
}
