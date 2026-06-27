int __cdecl sub_6F887DFC(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax@1
  int v6; // ebx@2
  int v7; // edx@2
  int v8; // ST20_4@2
  int v9; // ST1C_4@2
  int v10; // ebx@2
  int v11; // edx@2
  int v12; // ST18_4@2
  int v13; // ebx@2
  int v14; // edx@2
  int v15; // edi@3
  int v16; // ST24_4@4
  int v17; // esi@4
  int v18; // edx@4
  int v19; // ST20_4@4
  int v20; // ST28_4@4
  int v21; // esi@4
  int v22; // ebx@4
  int v23; // edx@4
  int v24; // esi@4
  int v25; // ST0C_4@4
  int v26; // ST08_4@4
  int v27; // ST04_4@4
  int v28; // ST00_4@4
  int v29; // edx@4
  int v30; // ST1C_4@4
  int v31; // esi@4
  int v32; // ST10_4@4
  int v33; // ST1C_4@4
  int v34; // ST18_4@4
  int v35; // ST14_4@4
  int v36; // ST28_4@4
  int v37; // ST14_4@4
  int v38; // ebx@4
  int v39; // ST18_4@4
  int v40; // ebx@4
  int v41; // [sp+14h] [bp-A4h]@1
  int v42; // [sp+24h] [bp-94h]@1
  char v43[140]; // [sp+2Ch] [bp-8Ch]@2

  v42 = *(_DWORD *)(a2 + 84);
  result = 0;
  v41 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = *(_DWORD *)(v42 + 4 * result) * *(_WORD *)(a3 + 2 * result);
    v7 = *(_DWORD *)(v42 + 4 * result + 64) * *(_WORD *)(a3 + 2 * result + 32);
    v8 = 4 * (v7 + v6);
    v9 = 4 * (v6 - v7);
    v10 = *(_DWORD *)(v42 + 4 * result + 32) * *(_WORD *)(a3 + 2 * result + 16);
    v11 = *(_DWORD *)(v42 + 4 * result + 96) * *(_WORD *)(a3 + 2 * result + 48);
    v12 = 143 * (v11 + v10);
    v13 = (4433 * (v11 + v10) + 1024 + 6270 * v10) >> 11;
    v14 = (31 * v12 + 1024 - 15137 * v11) >> 11;
    *(_DWORD *)&v43[4 * result] = v13 + v8;
    *(_DWORD *)&v43[4 * result + 96] = v8 - v13;
    *(_DWORD *)&v43[4 * result + 32] = v14 + v9;
    *(_DWORD *)&v43[4 * result++ + 64] = v9 - v14;
  }
  while ( result != 8 );
  v15 = v41;
  LOBYTE(result) = 0;
  do
  {
    v16 = *(_DWORD *)(a4 + result) + a5;
    v17 = *(_DWORD *)&v43[8 * result + 8];
    v18 = *(_DWORD *)&v43[8 * result + 24];
    v19 = 4433 * (v18 + v17) + 6270 * v17;
    v20 = 4433 * (v18 + v17) - 15137 * v18;
    v21 = *(_DWORD *)&v43[8 * result] + 16;
    v22 = *(_DWORD *)&v43[8 * result + 16];
    v23 = (v21 + v22) << 13;
    v24 = (v21 - v22) << 13;
    v25 = v23 + v19;
    v26 = v23 - v19;
    v27 = v24 + v20;
    v28 = v24 - v20;
    v29 = *(_DWORD *)&v43[8 * result + 20];
    v30 = *(_DWORD *)&v43[8 * result + 28] + *(_DWORD *)&v43[8 * result + 12];
    v31 = v29 + *(_DWORD *)&v43[8 * result + 4];
    v32 = 9633 * (v31 + v30);
    v33 = 9633 * (v31 + v30) - 16069 * v30;
    v34 = v32 + -3196 * v31;
    v35 = -7373 * (*(_DWORD *)&v43[8 * result + 28] + *(_DWORD *)&v43[8 * result + 4]);
    v36 = v33 + v35 + 2446 * *(_DWORD *)&v43[8 * result + 28];
    v37 = v34 + 12299 * *(_DWORD *)&v43[8 * result + 4] + v35;
    v38 = -20995 * (v29 + *(_DWORD *)&v43[8 * result + 12]);
    v39 = v34 + v38 + 16819 * v29;
    v40 = v33 + v38 + 25172 * *(_DWORD *)&v43[8 * result + 12];
    *(_BYTE *)v16 = *(_BYTE *)(v15 + (((v25 + v37) >> 18) & 0x3FF));
    *(_BYTE *)(v16 + 7) = *(_BYTE *)(v15 + (((v25 - v37) >> 18) & 0x3FF));
    *(_BYTE *)(v16 + 1) = *(_BYTE *)(v15 + (((v40 + v27) >> 18) & 0x3FF));
    *(_BYTE *)(v16 + 6) = *(_BYTE *)(v15 + (((v27 - v40) >> 18) & 0x3FF));
    *(_BYTE *)(v16 + 2) = *(_BYTE *)(v15 + (((v28 + v39) >> 18) & 0x3FF));
    *(_BYTE *)(v16 + 5) = *(_BYTE *)(v15 + (((v28 - v39) >> 18) & 0x3FF));
    *(_BYTE *)(v16 + 3) = *(_BYTE *)(v15 + (((v26 + v36) >> 18) & 0x3FF));
    *(_BYTE *)(v16 + 4) = *(_BYTE *)(v15 + (((v26 - v36) >> 18) & 0x3FF));
    result += 4;
  }
  while ( result != 16 );
  return result;
}
