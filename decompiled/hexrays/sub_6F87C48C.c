char *__cdecl sub_6F87C48C(char *a1, int a2, int a3)
{
  char *v3; // eax@1
  int v4; // edx@2
  int v5; // ST30_4@2
  int v6; // ST48_4@2
  int v7; // ST40_4@2
  int v8; // ST38_4@2
  int v9; // ST34_4@2
  int v10; // esi@2
  int v11; // ST24_4@2
  int v12; // esi@2
  int v13; // ebx@2
  int v14; // edx@2
  int v15; // ST28_4@2
  int v16; // edx@2
  int v17; // ST20_4@2
  int v18; // ecx@2
  int v19; // ST2C_4@2
  int v20; // edi@2
  int v21; // ST30_4@2
  int v22; // ST40_4@2
  int v23; // edx@2
  int v24; // ST44_4@2
  int v25; // esi@2
  int v26; // ebx@2
  int v27; // esi@2
  int v28; // edi@2
  int v29; // ST48_4@2
  int v30; // ST34_4@2
  char *result; // eax@6
  char *v32; // edx@6
  int v33; // edi@7
  int v34; // ST48_4@7
  int v35; // ST3C_4@7
  int v36; // ST28_4@7
  int v37; // ST14_4@7
  int v38; // ST10_4@7
  int v39; // ecx@7
  int v40; // esi@7
  int v41; // ST20_4@7
  int v42; // ST08_4@7
  int v43; // ebx@7
  int v44; // ST04_4@7
  int v45; // ST3C_4@7
  int v46; // ST2C_4@7
  int v47; // ST28_4@7
  int v48; // ecx@7
  int v49; // ST48_4@7
  int v50; // ST38_4@7
  int v51; // ST34_4@7
  int v52; // ST24_4@7
  int v53; // ST44_4@7
  int v54; // ST40_4@7
  int v55; // ST30_4@7
  int v56; // esi@7
  int v57; // ST2C_4@7
  int v58; // ST20_4@7
  int v59; // ST1C_4@7
  int v60; // ST18_4@7
  int v61; // ST3C_4@7
  int v62; // ST28_4@7
  int v63; // [sp+3Ch] [bp-11Ch]@1
  char v64; // [sp+4Ch] [bp-10Ch]@5
  char v65; // [sp+6Ch] [bp-ECh]@7

  v3 = a1;
  v63 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v63) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 7);
      v7 = *(_BYTE *)(v4 + 1);
      v8 = *(_BYTE *)(v4 + 6);
      v9 = *(_BYTE *)(v4 + 2);
      v10 = *(_BYTE *)(v4 + 5);
      v11 = v10;
      v12 = v9 + v10;
      v13 = *(_BYTE *)(v4 + 3);
      v14 = *(_BYTE *)(v4 + 4);
      v15 = v14;
      v16 = v13 + v14;
      v17 = v16 + v5 + v6;
      v18 = v5 + v6 - v16;
      v19 = v12 + v7 + v8;
      v20 = v7 + v8 - v12;
      v21 = v5 - v6;
      v22 = v7 - v8;
      v23 = v9 - v11;
      v24 = v13 - v15;
      *(_DWORD *)v3 = 4 * (v17 + v19 - 1024);
      *((_DWORD *)v3 + 4) = 4 * (v17 - v19);
      v25 = 4433 * (v20 + v18);
      *((_DWORD *)v3 + 2) = (v25 + 6270 * v18 + 1024) >> 11;
      *((_DWORD *)v3 + 6) = (v25 + -15137 * v20 + 1024) >> 11;
      v26 = -7373 * (v21 + v13 - v15);
      v27 = -20995 * (v9 - v11 + v22);
      v28 = 9633 * (v22 + v24 + v9 - v11 + v21);
      v29 = v28 + -3196 * (v9 - v11 + v21);
      v30 = v28 - 16069 * (v22 + v24);
      *((_DWORD *)v3 + 1) = (v29 + v26 + 12299 * v21 + 1024) >> 11;
      *((_DWORD *)v3 + 3) = (v30 + v27 + 25172 * v22 + 1024) >> 11;
      *((_DWORD *)v3 + 5) = (v29 + v27 + 16819 * v23 + 1024) >> 11;
      *((_DWORD *)v3 + 7) = (v30 + v26 + 2446 * v24 + 1024) >> 11;
      if ( ++v63 != 8 )
        break;
      v3 = &v64;
    }
    if ( v63 == 16 )
      break;
    v3 += 32;
  }
  result = a1;
  v32 = &v64;
  do
  {
    v33 = *(_DWORD *)result + *((_DWORD *)v32 + 56);
    v34 = *((_DWORD *)result + 8) + *((_DWORD *)v32 + 48);
    v35 = *((_DWORD *)result + 16) + *((_DWORD *)v32 + 40);
    v36 = *((_DWORD *)result + 24) + *((_DWORD *)v32 + 32);
    v37 = *((_DWORD *)result + 32) + *((_DWORD *)v32 + 24);
    v38 = *((_DWORD *)result + 40) + *((_DWORD *)v32 + 16);
    v39 = *((_DWORD *)result + 48) + *((_DWORD *)v32 + 8);
    v40 = *((_DWORD *)result + 56) + *(_DWORD *)v32;
    v41 = v33 - v40;
    v42 = v39 + v34;
    v43 = v34 - v39;
    v44 = v35 + v38;
    v45 = v35 - v38;
    v46 = v36 + v37;
    v47 = v36 - v37;
    v48 = *(_DWORD *)result - *((_DWORD *)v32 + 56);
    v49 = *((_DWORD *)result + 8) - *((_DWORD *)v32 + 48);
    v50 = *((_DWORD *)result + 16) - *((_DWORD *)v32 + 40);
    v51 = *((_DWORD *)result + 24) - *((_DWORD *)v32 + 32);
    v52 = *((_DWORD *)result + 32) - *((_DWORD *)v32 + 24);
    v53 = *((_DWORD *)result + 40) - *((_DWORD *)v32 + 16);
    v54 = *((_DWORD *)result + 48) - *((_DWORD *)v32 + 8);
    v55 = *((_DWORD *)result + 56) - *(_DWORD *)v32;
    v56 = v40 + v33;
    *(_DWORD *)result = (v46 + v44 + v56 + v42 + 4) >> 3;
    *((_DWORD *)result + 32) = (10703 * (v56 - v46) + 4433 * (v42 - v44) + 0x8000) >> 16;
    v57 = 11363 * (v41 - v45) + 2260 * (v47 - v43);
    *((_DWORD *)result + 16) = (v57 + 11893 * v43 + 17799 * v45 + 0x8000) >> 16;
    *((_DWORD *)result + 48) = (v57 + -8697 * v47 - 1730 * v41 + 0x8000) >> 16;
    v58 = 3363 * (v54 - v55) + 11086 * (v48 + v49);
    v59 = 8956 * (v48 + v51) + 7350 * (v52 - v55);
    v60 = 11529 * (v54 - v53) + 1136 * (v49 + v50);
    v61 = -5461 * (v49 + v51) - 10217 * (v52 + v54);
    v62 = 3363 * (v53 - v52) + -11086 * (v50 + v51);
    *((_DWORD *)result + 8) = (v59 + v58 + 5461 * (v53 + v55) + 10217 * (v48 + v50) + 6387 * v55 - 18730 * v48 + 0x8000) >> 16;
    *((_DWORD *)result + 24) = (v60 + v58 + v61 + -13631 * v54 + 589 * v49 + 0x8000) >> 16;
    *((_DWORD *)result + 40) = (v62 + v60 + 5461 * (v53 + v55) + 10217 * (v48 + v50) + 10055 * v53 - 9222 * v50 + 0x8000) >> 16;
    *((_DWORD *)result + 56) = (v59 + v61 + 17760 * v52 + 8728 * v51 + 0x8000 + v62) >> 16;
    result += 4;
    v32 += 4;
  }
  while ( v32 != &v65 );
  return result;
}
