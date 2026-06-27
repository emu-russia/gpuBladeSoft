char *__cdecl sub_6F877728(char *a1, int a2, int a3)
{
  char *v3; // ebx@1
  int v4; // eax@2
  int v5; // ST00_4@2
  int v6; // edi@2
  int v7; // ST40_4@2
  int v8; // edi@2
  int v9; // ST4C_4@2
  int v10; // ST38_4@2
  int v11; // ST30_4@2
  int v12; // ST44_4@2
  int v13; // ST34_4@2
  int v14; // ST2C_4@2
  int v15; // edx@2
  int v16; // ST28_4@2
  int v17; // edx@2
  int v18; // ST24_4@2
  int v19; // ST20_4@2
  int v20; // ST18_4@2
  int v21; // eax@2
  int v22; // ST14_4@2
  int v23; // eax@2
  int v24; // ST0C_4@2
  int v25; // ST08_4@2
  int v26; // ST48_4@2
  int v27; // ecx@2
  int v28; // ST4C_4@2
  int v29; // ST44_4@2
  int v30; // ST40_4@2
  int v31; // ST50_4@2
  int v32; // ST48_4@2
  int v33; // ST38_4@2
  int v34; // ST4C_4@2
  char *result; // eax@6
  char *v36; // ebx@6
  int v37; // edi@7
  int v38; // ST30_4@7
  int v39; // ecx@7
  int v40; // edx@7
  int v41; // ST20_4@7
  int v42; // esi@7
  int v43; // ST08_4@7
  int v44; // ST3C_4@7
  int v45; // ST4C_4@7
  int v46; // ST50_4@7
  int v47; // ST44_4@7
  int v48; // ecx@7
  int v49; // ST48_4@7
  int v50; // edx@7
  int v51; // ST3C_4@7
  int v52; // ST40_4@7
  int v53; // ST3C_4@7
  int v54; // ST50_4@7
  int v55; // [sp+3Ch] [bp-A4h]@1
  char v56; // [sp+54h] [bp-8Ch]@5
  char v57; // [sp+74h] [bp-6Ch]@7

  v3 = a1;
  v55 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v55) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 11);
      v7 = v6;
      v8 = v5 + v6;
      v9 = *(_BYTE *)(v4 + 1);
      v10 = *(_BYTE *)(v4 + 10);
      v11 = v9 + v10;
      v12 = *(_BYTE *)(v4 + 2);
      v13 = *(_BYTE *)(v4 + 9);
      v14 = *(_BYTE *)(v4 + 3);
      v15 = *(_BYTE *)(v4 + 8);
      v16 = v15;
      v17 = v14 + v15;
      v18 = *(_BYTE *)(v4 + 4);
      v19 = *(_BYTE *)(v4 + 7);
      v20 = *(_BYTE *)(v4 + 5);
      v21 = *(_BYTE *)(v4 + 6);
      v22 = v21;
      v23 = v20 + v21;
      v24 = v9 + v10 - (v18 + v19);
      v25 = v17 + v13 + v12;
      v26 = v13 + v12 - v17;
      v27 = v5 - v7;
      v28 = v9 - v10;
      v29 = v12 - v13;
      *(_DWORD *)v3 = v25 + v11 + v18 + v19 - 1536 + v23 + v8;
      *((_DWORD *)v3 + 6) = v8 - v23 - v24 - v26;
      *((_DWORD *)v3 + 4) = (10033 * (v23 + v8 - v25) + 4096) >> 13;
      *((_DWORD *)v3 + 2) = (v24 + 4096 - v26 + 11190 * (v8 - v23 + v26)) >> 13;
      v30 = 4433 * (v18 - v19 + v28) + 6270 * v28;
      v31 = 4433 * (v18 - v19 + v28) - 15137 * (v18 - v19);
      v32 = 9191 * (v27 + v29);
      v33 = 7053 * (v14 - v16 + v27);
      v34 = -1512 * (v14 - v16 + v29);
      *((_DWORD *)v3 + 1) = (v30 + v33 + v32 + 1512 * (v20 - v22) - 4758 * v27 + 4096) >> 13;
      *((_DWORD *)v3 + 3) = (10703 * (v27 - (v14 - v16)) + v31 + -4433 * (v20 - v22 + v29) + 4096) >> 13;
      *((_DWORD *)v3 + 5) = (v34 + v32 + 7053 * (v20 - v22) - 19165 * v29 + 4096 - v31) >> 13;
      *((_DWORD *)v3 + 7) = (v34 + v33 + -9191 * (v20 - v22) + 5946 * (v14 - v16) + 4096 - v30) >> 13;
      if ( ++v55 != 8 )
        break;
      v3 = &v56;
    }
    if ( v55 == 12 )
      break;
    v3 += 32;
  }
  result = a1;
  v36 = &v56;
  do
  {
    v37 = *(_DWORD *)result + *((_DWORD *)v36 + 24);
    v38 = *((_DWORD *)result + 8) + *((_DWORD *)v36 + 16);
    v39 = *((_DWORD *)result + 16) + *((_DWORD *)v36 + 8);
    v40 = *((_DWORD *)result + 24) + *(_DWORD *)v36;
    v41 = *((_DWORD *)result + 32) + *((_DWORD *)result + 56);
    v42 = *((_DWORD *)result + 40) + *((_DWORD *)result + 48);
    v43 = v40 + v39;
    v44 = v39 - v40;
    v45 = *(_DWORD *)result - *((_DWORD *)v36 + 24);
    v46 = *((_DWORD *)result + 8) - *((_DWORD *)v36 + 16);
    v47 = *((_DWORD *)result + 16) - *((_DWORD *)v36 + 8);
    v48 = *((_DWORD *)result + 24) - *(_DWORD *)v36;
    v49 = *((_DWORD *)result + 32) - *((_DWORD *)result + 56);
    v50 = *((_DWORD *)result + 40) - *((_DWORD *)result + 48);
    *(_DWORD *)result = (7282 * (v43 + v42 + v37 + v38 + v41) + 0x2000) >> 14;
    *((_DWORD *)result + 48) = (7282 * (v37 - v42 - (v38 - v41) - v44) + 0x2000) >> 14;
    *((_DWORD *)result + 32) = (8918 * (v42 + v37 - v43) + 0x2000) >> 14;
    *((_DWORD *)result + 16) = (9947 * (v37 - v42 + v44) + 7282 * (v38 - v41 - v44) + 0x2000) >> 14;
    v51 = 3941 * (v46 + v49);
    v52 = v51 + 5573 * v46;
    v53 = v51 - 13455 * v49;
    v54 = -1344 * (v48 + v47);
    *((_DWORD *)result + 8) = (v52 + 8170 * (v45 + v47) + 1344 * v50 - 4229 * v45 + 0x2000 + 6269 * (v48 + v45)) >> 14;
    *((_DWORD *)result + 24) = (v53 - 3941 * (v50 + v47) + 0x2000 + 9514 * (v45 - v48)) >> 14;
    *((_DWORD *)result + 40) = (v54 + 8170 * (v45 + v47) + 6269 * v50 + -17036 * v47 + 0x2000 - v53) >> 14;
    *((_DWORD *)result + 56) = (v54 + 6269 * (v48 + v45) + 5285 * v48 - 8170 * v50 + 0x2000 - v52) >> 14;
    result += 4;
    v36 += 4;
  }
  while ( v36 != &v57 );
  return result;
}
