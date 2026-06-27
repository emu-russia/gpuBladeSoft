char __cdecl sub_6F88785C(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // ST2C_4@2
  int v7; // esi@2
  int v8; // ebx@2
  int v9; // ecx@2
  int v10; // ebx@2
  int v11; // ST38_4@2
  int v12; // ebx@2
  int v13; // ST28_4@2
  int v14; // ST24_4@2
  int v15; // ebx@2
  int v16; // ecx@2
  int v17; // ST30_4@2
  int v18; // esi@2
  int v19; // ebx@2
  int v20; // ecx@3
  int v21; // ST30_4@4
  int v22; // eax@4
  int v23; // ST2C_4@4
  int v24; // ST28_4@4
  int v25; // ST1C_4@4
  int v26; // ebx@4
  int v27; // ST38_4@4
  int v28; // ST3C_4@4
  int v29; // eax@4
  int v30; // ST18_4@4
  int v31; // ST2C_4@4
  int v32; // ST14_4@4
  int v33; // ST28_4@4
  int v34; // eax@4
  int v35; // edi@4
  int v36; // ST24_4@4
  int v37; // ST00_4@4
  int v38; // edi@4
  int v39; // ST30_4@4
  int v40; // ST10_4@4
  int v41; // ST0C_4@4
  int v42; // ST38_4@4
  int v43; // ST3C_4@4
  int v44; // ebx@4
  int v45; // ST38_4@4
  int v46; // edi@4
  char result; // al@4
  int v48; // [sp+20h] [bp-CCh]@1
  int v49; // [sp+34h] [bp-B8h]@1
  char v50[172]; // [sp+40h] [bp-ACh]@2

  v49 = *(_DWORD *)(a2 + 84);
  v5 = 0;
  v48 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = (*(_DWORD *)(v49 + 4 * v5) * *(_WORD *)(a3 + 2 * v5) << 13) + 1024;
    v7 = *(_DWORD *)(v49 + 4 * v5 + 64) * *(_WORD *)(a3 + 2 * v5 + 32);
    v8 = *(_DWORD *)(v49 + 4 * v5 + 128) * *(_WORD *)(a3 + 2 * v5 + 64);
    v9 = 6476 * (v8 + v7);
    v10 = 2896 * (v7 - v8);
    v11 = v10;
    v12 = v6 + v10;
    v13 = v12 + v9;
    v14 = v12 - v9;
    v15 = *(_DWORD *)(v49 + 4 * v5 + 32) * *(_WORD *)(a3 + 2 * v5 + 16);
    v16 = *(_DWORD *)(v49 + 4 * v5 + 96) * *(_WORD *)(a3 + 2 * v5 + 48);
    v17 = 6810 * (v16 + v15);
    v18 = v17 + 4209 * v15;
    v19 = v17 - 17828 * v16;
    *(_DWORD *)&v50[4 * v5] = (v18 + v13) >> 11;
    *(_DWORD *)&v50[4 * v5 + 128] = (v13 - v18) >> 11;
    *(_DWORD *)&v50[4 * v5 + 32] = (v19 + v14) >> 11;
    *(_DWORD *)&v50[4 * v5 + 96] = (v14 - v19) >> 11;
    *(_DWORD *)&v50[4 * v5++ + 64] = (v6 - 4 * v11) >> 11;
  }
  while ( v5 != 8 );
  v20 = 0;
  do
  {
    v21 = (*(_DWORD *)&v50[8 * v20] + 16) << 13;
    v22 = *(_DWORD *)&v50[8 * v20 + 16];
    v23 = v21 + 9373 * v22;
    v24 = v21 - 3580 * v22;
    v25 = v21 - 11586 * v22;
    v26 = *(_DWORD *)&v50[8 * v20 + 24];
    v27 = 6810 * (v26 + *(_DWORD *)&v50[8 * v20 + 8]);
    v28 = v27 + 4209 * *(_DWORD *)&v50[8 * v20 + 8];
    v29 = v27 - 17828 * v26;
    v30 = v23 + v28;
    v31 = v23 - v28;
    v32 = v29 + v24;
    v33 = v24 - v29;
    v34 = *(_DWORD *)&v50[8 * v20 + 4];
    v35 = *(_DWORD *)&v50[8 * v20 + 12];
    v36 = *(_DWORD *)&v50[8 * v20 + 20] << 13;
    v37 = v35 + *(_DWORD *)&v50[8 * v20 + 28];
    v38 = v35 - *(_DWORD *)&v50[8 * v20 + 28];
    v39 = v36 + 2531 * v38;
    v40 = v39 + 7791 * v37 + 11443 * v34;
    v41 = v39 - 7791 * v37 + 1812 * v34;
    v42 = v36 - 2531 * v38 - (v38 << 12);
    v43 = ((v34 - v38) << 13) - v36;
    v44 = 10323 * v34 - 4815 * v37 - v42;
    v45 = v42 + 5260 * v34 - 4815 * v37;
    v46 = *(_DWORD *)(a4 + v20) + a5;
    *(_BYTE *)v46 = *(_BYTE *)(v48 + (((v30 + v40) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 9) = *(_BYTE *)(v48 + (((v30 - v40) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 1) = *(_BYTE *)(v48 + (((v44 + v32) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 8) = *(_BYTE *)(v48 + (((v32 - v44) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 2) = *(_BYTE *)(v48 + (((v25 + v43) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 7) = *(_BYTE *)(v48 + (((v25 - v43) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 3) = *(_BYTE *)(v48 + (((v33 + v45) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 6) = *(_BYTE *)(v48 + (((v33 - v45) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 4) = *(_BYTE *)(v48 + (((v31 + v41) >> 18) & 0x3FF));
    result = *(_BYTE *)(v48 + (((v31 - v41) >> 18) & 0x3FF));
    *(_BYTE *)(v46 + 5) = result;
    v20 += 4;
  }
  while ( v20 != 20 );
  return result;
}
