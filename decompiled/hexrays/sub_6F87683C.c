char *__cdecl sub_6F87683C(char *a1, int a2, int a3)
{
  char *v3; // eax@1
  int v4; // esi@2
  int v5; // ST00_4@2
  int v6; // ST3C_4@2
  int v7; // ST30_4@2
  int v8; // ecx@2
  int v9; // ST28_4@2
  int v10; // ecx@2
  int v11; // ST40_4@2
  int v12; // ST24_4@2
  int v13; // ST20_4@2
  int v14; // ST34_4@2
  int v15; // ST1C_4@2
  int v16; // ST38_4@2
  int v17; // esi@2
  int v18; // ST18_4@2
  int v19; // esi@2
  int v20; // ST14_4@2
  int v21; // ebx@2
  int v22; // ST10_4@2
  int v23; // ecx@2
  int v24; // edx@2
  int v25; // ST30_4@2
  int v26; // ST40_4@2
  int v27; // ST34_4@2
  int v28; // ST38_4@2
  int v29; // ST3C_4@2
  int v30; // ebx@2
  int v31; // ecx@2
  char *result; // eax@6
  int v33; // ST0C_4@7
  int v34; // esi@7
  int v35; // ebx@7
  int v36; // ST24_4@7
  int v37; // edx@7
  int v38; // edi@7
  int v39; // ST14_4@7
  int v40; // esi@7
  int v41; // ST10_4@7
  int v42; // ebx@7
  int v43; // ST20_4@7
  int v44; // ST34_4@7
  int v45; // ST38_4@7
  int v46; // edx@7
  int v47; // ST30_4@7
  int v48; // ST40_4@7
  int v49; // ebx@7
  int v50; // edx@7
  int v51; // [sp+2Ch] [bp-64h]@1
  char *v52; // [sp+3Ch] [bp-54h]@6
  char v53; // [sp+44h] [bp-4Ch]@5
  char v54; // [sp+64h] [bp-2Ch]@7

  v3 = a1;
  v51 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v51) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 9);
      v7 = *(_BYTE *)(v4 + 1);
      v8 = *(_BYTE *)(v4 + 8);
      v9 = v8;
      v10 = v7 + v8;
      v11 = *(_BYTE *)(v4 + 2);
      v12 = *(_BYTE *)(v4 + 7);
      v13 = v11 + v12;
      v14 = *(_BYTE *)(v4 + 3);
      v15 = *(_BYTE *)(v4 + 6);
      v16 = *(_BYTE *)(v4 + 4);
      v17 = *(_BYTE *)(v4 + 5);
      v18 = v17;
      v19 = v16 + v17;
      v20 = v19 + v6 + v5;
      v21 = v6 + v5 - v19;
      v22 = v15 + v14 + v10;
      v23 = v10 - (v15 + v14);
      v24 = v5 - v6;
      v25 = v7 - v9;
      v26 = v11 - v12;
      v27 = v14 - v15;
      v28 = v16 - v18;
      *(_DWORD *)v3 = 2 * (v13 + v20 - 1280 + v22);
      *((_DWORD *)v3 + 4) = (9373 * (v20 - 2 * v13) + 3580 * (2 * v13 - v22) + 2048) >> 12;
      v29 = 6810 * (v23 + v21);
      *((_DWORD *)v3 + 2) = (v29 + 4209 * v21 + 2048) >> 12;
      *((_DWORD *)v3 + 6) = (v29 + -17828 * v23 + 2048) >> 12;
      *((_DWORD *)v3 + 5) = 2 * (v24 + v28 - (v25 - v27) - v26);
      *((_DWORD *)v3 + 1) = (10323 * v25 + (v26 << 13) + 11443 * v24 + 2048 + 1812 * v28 + 5260 * v27) >> 12;
      v30 = 2531 * (v24 + v28 + v25 - v27) + ((v25 - v27) << 12) - (v26 << 13);
      v31 = -4815 * (v27 + v25) + 7791 * (v24 - v28) + 2048;
      *((_DWORD *)v3 + 3) = (v31 + v30) >> 12;
      *((_DWORD *)v3 + 7) = (v31 - v30) >> 12;
      if ( ++v51 != 8 )
        break;
      v3 = &v53;
    }
    if ( v51 == 10 )
      break;
    v3 += 32;
  }
  result = a1;
  v52 = &v53;
  do
  {
    v33 = *((_DWORD *)v52 + 8);
    v34 = v33 + *(_DWORD *)result;
    v35 = *((_DWORD *)result + 8) + *(_DWORD *)v52;
    v36 = *((_DWORD *)result + 16) + *((_DWORD *)result + 56);
    v37 = *((_DWORD *)result + 24) + *((_DWORD *)result + 48);
    v38 = *((_DWORD *)result + 32) + *((_DWORD *)result + 40);
    v39 = v38 + v34;
    v40 = v34 - v38;
    v41 = v37 + v35;
    v42 = v35 - v37;
    v43 = *(_DWORD *)result - v33;
    v44 = *((_DWORD *)result + 8) - *(_DWORD *)v52;
    v45 = *((_DWORD *)result + 16) - *((_DWORD *)result + 56);
    v46 = *((_DWORD *)result + 24) - *((_DWORD *)result + 48);
    v47 = *((_DWORD *)result + 32) - *((_DWORD *)result + 40);
    *(_DWORD *)result = (10486 * (v36 + v41 + v39) + 0x4000) >> 15;
    *((_DWORD *)result + 32) = (11997 * (v39 - 2 * v36) + 4582 * (2 * v36 - v41) + 0x4000) >> 15;
    v48 = 8716 * (v42 + v40);
    *((_DWORD *)result + 16) = (v48 + 5387 * v40 + 0x4000) >> 15;
    *((_DWORD *)result + 48) = (v48 + -22820 * v42 + 0x4000) >> 15;
    *((_DWORD *)result + 40) = (10486 * (v43 + v47 - (v44 - v46) - v45) + 0x4000) >> 15;
    v45 *= 10486;
    *((_DWORD *)result + 8) = (v45 + 14647 * v43 + 0x4000 + 13213 * v44 + 2320 * v47 + 6732 * v46) >> 15;
    v49 = 5243 * (v44 - v46) - v45 + 3240 * (v43 + v47 + v44 - v46);
    v50 = -6163 * (v44 + v46) + 9973 * (v43 - v47) + 0x4000;
    *((_DWORD *)result + 24) = (v50 + v49) >> 15;
    *((_DWORD *)result + 56) = (v50 - v49) >> 15;
    result += 4;
    v52 += 4;
  }
  while ( v52 != &v54 );
  return result;
}
