char __cdecl sub_6F8871C8(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx@1
  int v6; // eax@1
  int v7; // ST38_4@2
  int v8; // esi@2
  int v9; // ST3C_4@2
  int v10; // ST38_4@2
  int v11; // esi@2
  int v12; // ST28_4@2
  int v13; // ST3C_4@2
  int v14; // ST20_4@2
  int v15; // ST30_4@2
  int v16; // esi@2
  int v17; // ST40_4@2
  int v18; // esi@2
  int v19; // ST24_4@2
  int v20; // ST34_4@2
  int v21; // esi@2
  int v22; // ecx@3
  int v23; // ebx@3
  int v24; // eax@4
  int v25; // edi@4
  int v26; // ST24_4@4
  int v27; // esi@4
  int v28; // ST30_4@4
  int v29; // ST3C_4@4
  int v30; // esi@4
  int v31; // ST18_4@4
  int v32; // ST14_4@4
  int v33; // ST10_4@4
  int v34; // ST28_4@4
  int v35; // eax@4
  int v36; // ST0C_4@4
  int v37; // ST24_4@4
  int v38; // eax@4
  int v39; // ST20_4@4
  int v40; // ST34_4@4
  int v41; // esi@4
  int v42; // ST1C_4@4
  int v43; // ST2C_4@4
  int v44; // ST08_4@4
  int v45; // ST40_4@4
  int v46; // ST2C_4@4
  int v47; // ST40_4@4
  int v48; // ST34_4@4
  int v49; // esi@4
  int v50; // eax@4
  int v51; // edi@4
  int v52; // ST3C_4@4
  int v53; // esi@4
  char result; // al@4
  int v55; // [sp+2Ch] [bp-E4h]@1
  char v56[204]; // [sp+44h] [bp-CCh]@2

  v5 = *(_DWORD *)(a2 + 84);
  v6 = 0;
  v55 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v7 = (*(_DWORD *)(v5 + 4 * v6) * *(_WORD *)(a3 + 2 * v6) << 13) + 1024;
    v8 = *(_WORD *)(a3 + 2 * v6 + 64) * 5793 * *(_DWORD *)(v5 + 4 * v6 + 128);
    v9 = v8 + v7;
    v10 = (v7 - v8 - v8) >> 11;
    v11 = *(_WORD *)(a3 + 2 * v6 + 32) * 10033 * *(_DWORD *)(v5 + 4 * v6 + 64);
    v12 = v11 + v9;
    v13 = v9 - v11;
    v14 = *(_DWORD *)(v5 + 4 * v6 + 32) * *(_WORD *)(a3 + 2 * v6 + 16);
    v15 = *(_DWORD *)(v5 + 4 * v6 + 96) * *(_WORD *)(a3 + 2 * v6 + 48);
    v16 = *(_DWORD *)(v5 + 4 * v6 + 160) * *(_WORD *)(a3 + 2 * v6 + 80);
    v17 = v16;
    v18 = 2998 * (v14 + v16);
    v19 = v18 + ((v14 + v15) << 13);
    v20 = v18 + ((v17 - v15) << 13);
    v21 = 4 * (v14 - v15 - v17);
    *(_DWORD *)&v56[4 * v6] = (v19 + v12) >> 11;
    *(_DWORD *)&v56[4 * v6 + 160] = (v12 - v19) >> 11;
    *(_DWORD *)&v56[4 * v6 + 32] = v21 + v10;
    *(_DWORD *)&v56[4 * v6 + 128] = v10 - v21;
    *(_DWORD *)&v56[4 * v6 + 64] = (v20 + v13) >> 11;
    *(_DWORD *)&v56[4 * v6++ + 96] = (v13 - v20) >> 11;
  }
  while ( v6 != 8 );
  v22 = v55;
  v23 = 0;
  do
  {
    v24 = (*(_DWORD *)&v56[8 * v23] + 16) << 13;
    v25 = 10033 * *(_DWORD *)&v56[8 * v23 + 16];
    v26 = v24 - v25;
    v27 = *(_DWORD *)&v56[8 * v23 + 8];
    v28 = 11190 * v27;
    v29 = v27 << 13;
    v30 = *(_DWORD *)&v56[8 * v23 + 24] << 13;
    v31 = v24 + v29 - v30;
    v32 = v24 - (v29 - v30);
    v33 = v30 + v28 + v24 + v25;
    v34 = v24 + v25 - (v30 + v28);
    v35 = v28 - v29 - v30;
    v36 = v35 + v26;
    v37 = v26 - v35;
    v38 = *(_DWORD *)&v56[8 * v23 + 28];
    v39 = 10703 * *(_DWORD *)&v56[8 * v23 + 12];
    v40 = -4433 * *(_DWORD *)&v56[8 * v23 + 12];
    v41 = *(_DWORD *)&v56[8 * v23 + 4] + *(_DWORD *)&v56[8 * v23 + 20];
    v42 = 7053 * (v38 + v41);
    v43 = 2139 * v41 + v42;
    v44 = v43 + 2295 * *(_DWORD *)&v56[8 * v23 + 4] + v39;
    v45 = -8565 * (v38 + *(_DWORD *)&v56[8 * v23 + 20]);
    v46 = v43 + v40 - 12112 * *(_DWORD *)&v56[8 * v23 + 20] + v45;
    v47 = v42 + v45 - v39 + 12998 * v38;
    v48 = v42 + v40 - 5540 * *(_DWORD *)&v56[8 * v23 + 4] - 16244 * v38;
    v49 = *(_DWORD *)&v56[8 * v23 + 4] - v38;
    v50 = *(_DWORD *)&v56[8 * v23 + 12] - *(_DWORD *)&v56[8 * v23 + 20];
    v51 = 4433 * (v50 + v49) + 6270 * v49;
    v52 = 4433 * (v50 + v49) - 15137 * v50;
    v53 = *(_DWORD *)(a4 + v23) + a5;
    *(_BYTE *)v53 = *(_BYTE *)(v22 + (((v33 + v44) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 11) = *(_BYTE *)(v22 + (((v33 - v44) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 1) = *(_BYTE *)(v22 + (((v51 + v31) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 10) = *(_BYTE *)(v22 + (((v31 - v51) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 2) = *(_BYTE *)(v22 + (((v36 + v46) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 9) = *(_BYTE *)(v22 + (((v36 - v46) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 3) = *(_BYTE *)(v22 + (((v37 + v47) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 8) = *(_BYTE *)(v22 + (((v37 - v47) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 4) = *(_BYTE *)(v22 + (((v32 + v52) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 7) = *(_BYTE *)(v22 + (((v32 - v52) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 5) = *(_BYTE *)(v22 + (((v34 + v48) >> 18) & 0x3FF));
    result = *(_BYTE *)(v22 + (((v34 - v48) >> 18) & 0x3FF));
    *(_BYTE *)(v53 + 6) = result;
    v23 += 4;
  }
  while ( v23 != 24 );
  return result;
}
