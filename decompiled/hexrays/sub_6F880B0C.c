int __cdecl sub_6F880B0C(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // ST44_4@2
  int v7; // ecx@2
  int v8; // edx@2
  int v9; // esi@2
  int v10; // ST38_4@2
  int v11; // ST44_4@2
  int v12; // ST2C_4@2
  int v13; // esi@2
  int v14; // ST24_4@2
  int v15; // ST20_4@2
  int v16; // ST1C_4@2
  int v17; // ecx@2
  int v18; // edx@2
  int v19; // ST38_4@2
  int v20; // ST34_4@2
  int v21; // ST30_4@2
  int v22; // ST18_4@2
  int v23; // ST3C_4@2
  int v24; // ST0C_4@2
  int v25; // esi@2
  int v26; // ST34_4@2
  int v27; // ecx@2
  int result; // eax@3
  int v29; // ST14_4@4
  int v30; // edx@4
  int v31; // esi@4
  int v32; // ST38_4@4
  int v33; // ST40_4@4
  int v34; // ST2C_4@4
  int v35; // edi@4
  int v36; // ST48_4@4
  int v37; // edx@4
  int v38; // ST24_4@4
  int v39; // ST20_4@4
  int v40; // ST1C_4@4
  int v41; // ST3C_4@4
  int v42; // ST48_4@4
  int v43; // edx@4
  int v44; // ST30_4@4
  int v45; // esi@4
  int v46; // ST48_4@4
  int v47; // ST3C_4@4
  int v48; // edi@4
  int v49; // [sp+10h] [bp-168h]@1
  int v50; // [sp+14h] [bp-164h]@1
  char *v51; // [sp+40h] [bp-138h]@1
  int v52; // [sp+48h] [bp-130h]@1
  char v53[300]; // [sp+4Ch] [bp-12Ch]@1

  v5 = *(_DWORD *)(a2 + 84);
  v50 = v5 + 32;
  v52 = a3;
  v51 = v53;
  v49 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = (*(_DWORD *)v5 * *(_WORD *)v52 << 13) + 1024;
    v7 = *(_DWORD *)(v5 + 64) * *(_WORD *)(v52 + 32);
    v8 = *(_DWORD *)(v5 + 128) * *(_WORD *)(v52 + 64);
    v9 = *(_WORD *)(v52 + 96) * 5793 * *(_DWORD *)(v5 + 192);
    v10 = v9 + v6;
    v11 = v6 - v9 - v9;
    v12 = 5793 * (v7 - v8);
    v13 = 10887 * (v8 + v7);
    v14 = v10 + v13 - 2012 * v8;
    v15 = 8875 * v7 + v10 - v13;
    v16 = v10 + 2012 * v8 - 8875 * v7;
    v17 = *(_DWORD *)(v5 + 32) * *(_WORD *)(v52 + 16);
    v18 = *(_DWORD *)(v5 + 160) * *(_WORD *)(v52 + 80);
    v19 = *(_DWORD *)(v5 + 224) * *(_WORD *)(v52 + 112);
    v20 = -10033 * *(_DWORD *)(v5 + 96) * *(_WORD *)(v52 + 48);
    v21 = 7447 * (v18 + v17);
    v22 = 3962 * (v17 + v19);
    v23 = v22 + v21 - v20;
    v24 = 11409 * (v18 - v19);
    v25 = v20 + v21 - v24;
    v26 = v20 + v22 + v24;
    v27 = 10033 * (v17 - v18 - v19);
    *(_DWORD *)v51 = (v23 + v14) >> 11;
    *((_DWORD *)v51 + 64) = (v14 - v23) >> 11;
    *((_DWORD *)v51 + 8) = (v27 + v12 + v11) >> 11;
    *((_DWORD *)v51 + 56) = (v12 + v11 - v27) >> 11;
    *((_DWORD *)v51 + 16) = (v25 + v15) >> 11;
    *((_DWORD *)v51 + 48) = (v15 - v25) >> 11;
    *((_DWORD *)v51 + 24) = (v26 + v16) >> 11;
    *((_DWORD *)v51 + 40) = (v16 - v26) >> 11;
    *((_DWORD *)v51 + 32) = (v11 - v12 - v12) >> 11;
    v52 += 2;
    v5 += 4;
    v51 += 4;
  }
  while ( v5 != v50 );
  result = 0;
  do
  {
    v29 = *(_DWORD *)(a4 + result) + a5;
    v30 = (*(_DWORD *)&v53[8 * result] + 16) << 13;
    v31 = 5793 * *(_DWORD *)&v53[8 * result + 24];
    v32 = v30 + v31;
    v33 = v30 - v31 - v31;
    v34 = 5793 * (*(_DWORD *)&v53[8 * result + 8] - *(_DWORD *)&v53[8 * result + 16]);
    v35 = 10887 * (*(_DWORD *)&v53[8 * result + 8] + *(_DWORD *)&v53[8 * result + 16]);
    v36 = 8875 * *(_DWORD *)&v53[8 * result + 8];
    v37 = 2012 * *(_DWORD *)&v53[8 * result + 16];
    v38 = v32 + v35 - v37;
    v39 = v32 - v35 + v36;
    v40 = v32 + v37 - v36;
    v41 = -10033 * *(_DWORD *)&v53[8 * result + 12];
    v42 = 7447 * (*(_DWORD *)&v53[8 * result + 4] + *(_DWORD *)&v53[8 * result + 20]);
    v43 = 3962 * (*(_DWORD *)&v53[8 * result + 4] + *(_DWORD *)&v53[8 * result + 28]);
    v44 = v43 + v42 - v41;
    v45 = 11409 * (*(_DWORD *)&v53[8 * result + 20] - *(_DWORD *)&v53[8 * result + 28]);
    v46 = v41 + v42 - v45;
    v47 = v43 + v41 + v45;
    v48 = 10033
        * (*(_DWORD *)&v53[8 * result + 4] - *(_DWORD *)&v53[8 * result + 20] - *(_DWORD *)&v53[8 * result + 28]);
    *(_BYTE *)v29 = *(_BYTE *)(v49 + (((v44 + v38) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 8) = *(_BYTE *)(v49 + (((v38 - v44) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 1) = *(_BYTE *)(v49 + (((v48 + v34 + v33) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 7) = *(_BYTE *)(v49 + (((v34 + v33 - v48) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 2) = *(_BYTE *)(v49 + (((v39 + v46) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 6) = *(_BYTE *)(v49 + (((v39 - v46) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 3) = *(_BYTE *)(v49 + (((v47 + v40) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 5) = *(_BYTE *)(v49 + (((v40 - v47) >> 18) & 0x3FF));
    *(_BYTE *)(v29 + 4) = *(_BYTE *)(v49 + (((v33 - v34 - v34) >> 18) & 0x3FF));
    result += 4;
  }
  while ( result != 36 );
  return result;
}
