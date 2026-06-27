char *__cdecl sub_6F877FE0(char *a1, int a2, int a3)
{
  int v3; // eax@2
  int v4; // ST2C_4@2
  int v5; // esi@2
  int v6; // ST48_4@2
  int v7; // ebx@2
  int v8; // ecx@2
  int v9; // edx@2
  int v10; // ST28_4@2
  int v11; // ST30_4@2
  int v12; // ST3C_4@2
  int v13; // ST44_4@2
  int v14; // ST1C_4@2
  int v15; // ST18_4@2
  int v16; // ST14_4@2
  int v17; // ST0C_4@2
  int v18; // ST08_4@2
  int v19; // edi@2
  int v20; // ST2C_4@2
  int v21; // ST24_4@2
  int v22; // ST28_4@2
  int v23; // ST3C_4@2
  int v24; // ST48_4@2
  int v25; // ST40_4@2
  int v26; // ST30_4@2
  int v27; // ebx@2
  int v28; // ecx@2
  int v29; // ST38_4@2
  int v30; // edi@2
  int v31; // ebx@2
  int v32; // ecx@2
  int v33; // ST44_4@2
  int v34; // ST38_4@2
  int v35; // ST40_4@2
  int v36; // ST30_4@2
  int v37; // ST48_4@2
  char *result; // eax@6
  char *v39; // ecx@6
  int v40; // esi@7
  int v41; // ebx@7
  int v42; // ST34_4@7
  int v43; // ST2C_4@7
  int v44; // ST24_4@7
  int v45; // ST14_4@7
  int v46; // ST40_4@7
  int v47; // ST28_4@7
  int v48; // ST30_4@7
  int v49; // ST48_4@7
  int v50; // ST38_4@7
  int v51; // edx@7
  int v52; // ST3C_4@7
  int v53; // esi@7
  int v54; // ST20_4@7
  int v55; // ST34_4@7
  int v56; // ST2C_4@7
  int v57; // ST24_4@7
  int v58; // ST40_4@7
  int v59; // ebx@7
  int v60; // edi@7
  int v61; // ST24_4@7
  int v62; // ST20_4@7
  int v63; // ST2C_4@7
  int v64; // ST34_4@7
  int v65; // ST44_4@7
  int v66; // ST40_4@7
  int v67; // [sp+20h] [bp-D8h]@1
  char *v68; // [sp+34h] [bp-C4h]@1
  char v69; // [sp+4Ch] [bp-ACh]@5
  char v70; // [sp+6Ch] [bp-8Ch]@7

  v68 = a1;
  v67 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a2 + 4 * v67) + a3;
      v4 = *(_BYTE *)v3;
      v5 = *(_BYTE *)(v3 + 12);
      v6 = v5 + v4;
      v7 = *(_BYTE *)(v3 + 1);
      v8 = *(_BYTE *)(v3 + 11);
      v9 = *(_BYTE *)(v3 + 2);
      v10 = *(_BYTE *)(v3 + 10);
      v11 = v9 + v10;
      v12 = *(_BYTE *)(v3 + 3);
      v13 = *(_BYTE *)(v3 + 9);
      v14 = v12 + v13;
      v15 = *(_BYTE *)(v3 + 4);
      v16 = *(_BYTE *)(v3 + 8);
      v17 = *(_BYTE *)(v3 + 5);
      v18 = *(_BYTE *)(v3 + 7);
      v19 = *(_BYTE *)(v3 + 6);
      v20 = v4 - v5;
      v21 = v7 - v8;
      v22 = v9 - v10;
      v23 = v12 - v13;
      *(_DWORD *)v68 = v17 + v18 + v15 + v16 + v14 + v11 + v8 + v7 + v6 + v19 - 1664;
      v24 = v6 - 2 * v19;
      v25 = v8 + v7 - 2 * v19;
      v26 = v11 - 2 * v19;
      v27 = v14 - 2 * v19;
      v28 = v15 + v16 - 2 * v19;
      v29 = v17 + v18 - 2 * v19;
      *((_DWORD *)v68 + 2) = (11249 * v24 + 8672 * v25 + 4096 - 1396 * v27 + 4108 * v26 - 10258 * v29 - 6581 * v28) >> 13;
      v30 = 2592 * (v29 - v25) + 9465 * (v24 - v26) + 3570 * (v28 - v27);
      v31 = 3989 * (v25 + v29) + 793 * (v24 + v26) + -7678 * (v27 + v28);
      *((_DWORD *)v68 + 4) = (v30 + v31 + 4096) >> 13;
      *((_DWORD *)v68 + 6) = (v30 - v31 + 4096) >> 13;
      v32 = 10832 * (v20 + v21);
      v33 = 9534 * (v20 + v22);
      v34 = 2773 * (v17 - v18 + v15 - v16) + 7682 * (v20 + v23);
      v35 = -2773 * (v21 + v22) + 7682 * (v15 - v16 - (v17 - v18));
      v36 = -9534 * (v21 + v23);
      v37 = -5384 * (v22 + v23);
      *((_DWORD *)v68 + 1) = (v34 + v33 + v32 + 2611 * (v15 - v16) - 16549 * v20 + 4096) >> 13;
      *((_DWORD *)v68 + 3) = (v35 + v36 + v32 + 6859 * v21 - 19183 * (v15 - v16) + 4096) >> 13;
      *((_DWORD *)v68 + 5) = (v35 + v37 + v33 + 18515 * (v17 - v18) - 12879 * v22 + 4096) >> 13;
      *((_DWORD *)v68 + 7) = (v34 + v37 + v36 + -14273 * (v17 - v18) + 18068 * v23 + 4096) >> 13;
      if ( ++v67 != 8 )
        break;
      v68 = &v69;
    }
    if ( v67 == 13 )
      break;
    v68 += 32;
  }
  result = a1;
  v39 = &v69;
  do
  {
    v40 = *((_DWORD *)v39 + 32);
    v41 = v40 + *(_DWORD *)result;
    v42 = *((_DWORD *)result + 8) + *((_DWORD *)v39 + 24);
    v43 = *((_DWORD *)result + 16) + *((_DWORD *)v39 + 16);
    v44 = *((_DWORD *)result + 24) + *((_DWORD *)v39 + 8);
    v45 = *((_DWORD *)result + 32) + *(_DWORD *)v39;
    v46 = *((_DWORD *)result + 40) + *((_DWORD *)result + 56);
    v47 = *(_DWORD *)result - v40;
    v48 = *((_DWORD *)result + 8) - *((_DWORD *)v39 + 24);
    v49 = *((_DWORD *)result + 16) - *((_DWORD *)v39 + 16);
    v50 = *((_DWORD *)result + 24) - *((_DWORD *)v39 + 8);
    v51 = *((_DWORD *)result + 32) - *(_DWORD *)v39;
    v52 = *((_DWORD *)result + 40) - *((_DWORD *)result + 56);
    *(_DWORD *)result = (6205 * (v46 + v45 + v44 + v43 + *((_DWORD *)result + 48) + v41 + v42) + 0x2000) >> 14;
    v53 = 2 * *((_DWORD *)result + 48);
    v54 = v41 - v53;
    v55 = v42 - v53;
    v56 = v43 - v53;
    v57 = v44 - v53;
    v58 = v46 - v53;
    *((_DWORD *)result + 16) = (6568 * v55
                              + 8520 * (v41 - v53)
                              + 0x2000
                              - 1058 * v57
                              + 3112 * v56
                              - 7770 * v58
                              - 4985 * (v45 - v53)) >> 14;
    v59 = 3021 * (v55 + v58) + 601 * (v41 - v53 + v56) - 5816 * (v57 + v45 - v53);
    v60 = 2704 * (v45 - v53 - v57) + 7169 * (v54 - v56) + 1963 * (v58 - v55);
    *((_DWORD *)result + 32) = (v60 + v59 + 0x2000) >> 14;
    *((_DWORD *)result + 48) = (v60 - v59 + 0x2000) >> 14;
    v61 = 8204 * (v47 + v48);
    v62 = 7221 * (v47 + v49);
    v63 = 5819 * (v47 + v50) + 2100 * (v51 + v52);
    v64 = 5819 * (v51 - v52) - 2100 * (v48 + v49);
    v65 = -7221 * (v48 + v50);
    v66 = -4078 * (v49 + v50);
    *((_DWORD *)result + 8) = (v63 + v62 + v61 + -12534 * v47 + 1978 * v51 + 0x2000) >> 14;
    *((_DWORD *)result + 24) = (v64 + v65 + v61 + -14529 * v51 + 5195 * v48 + 0x2000) >> 14;
    *((_DWORD *)result + 40) = (v64 + v66 + v62 + 14023 * v52 - 9754 * v49 + 0x2000) >> 14;
    *((_DWORD *)result + 56) = (v63 + v66 + v65 + 805 * v50 - 10811 * v52 + 12880 * v50 + 0x2000) >> 14;
    result += 4;
    v39 += 4;
  }
  while ( v39 != &v70 );
  return result;
}
