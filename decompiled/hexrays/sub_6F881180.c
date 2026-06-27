int __cdecl sub_6F881180(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // edx@1
  int v6; // ecx@1
  int v7; // esi@2
  int v8; // eax@2
  int v9; // ST30_4@2
  int v10; // ST2C_4@2
  int v11; // ST28_4@2
  int v12; // ebx@2
  int v13; // eax@2
  int v14; // ST44_4@2
  int v15; // esi@2
  int v16; // eax@2
  int v17; // ST24_4@2
  int v18; // ST30_4@2
  int v19; // ST20_4@2
  int v20; // ST2C_4@2
  int v21; // eax@2
  int v22; // edi@2
  int v23; // ST38_4@2
  int v24; // esi@2
  int v25; // ebx@2
  int v26; // ST44_4@2
  int v27; // ST40_4@2
  int v28; // ST18_4@2
  int v29; // ST34_4@2
  int v30; // edi@2
  int v31; // ST1C_4@2
  int v32; // ST44_4@2
  int v33; // ebx@2
  int v34; // edi@2
  int v35; // edx@3
  int v36; // ebx@4
  int v37; // eax@4
  int v38; // ST30_4@4
  int v39; // ST2C_4@4
  int v40; // ST34_4@4
  int v41; // esi@4
  int v42; // ebx@4
  int v43; // ST44_4@4
  int v44; // esi@4
  int v45; // eax@4
  int v46; // ST24_4@4
  int v47; // ST30_4@4
  int v48; // ST20_4@4
  int v49; // ST2C_4@4
  int v50; // eax@4
  int v51; // esi@4
  int v52; // ST28_4@4
  int v53; // edi@4
  int v54; // ebx@4
  int v55; // esi@4
  int v56; // ST1C_4@4
  int v57; // ST18_4@4
  int v58; // ST40_4@4
  int v59; // ST38_4@4
  int v60; // edi@4
  int v61; // ebx@4
  int v62; // ST44_4@4
  int v63; // esi@4
  int result; // eax@4
  int v65; // [sp+Ch] [bp-188h]@1
  int v66; // [sp+10h] [bp-184h]@1
  int v67; // [sp+3Ch] [bp-158h]@1
  int v68; // [sp+48h] [bp-14Ch]@1
  int v69; // [sp+4Ch] [bp-148h]@4
  int v70; // [sp+50h] [bp-144h]@4
  int v71; // [sp+54h] [bp-140h]@4
  int v72; // [sp+58h] [bp-13Ch]@4
  int v73; // [sp+5Ch] [bp-138h]@4
  int v74; // [sp+60h] [bp-134h]@4
  int v75[76]; // [sp+64h] [bp-130h]@4

  v66 = *(_DWORD *)(a2 + 84) + 32;
  v67 = a3;
  v5 = &v68;
  v65 = *(_DWORD *)(a1 + 292) + 128;
  v6 = *(_DWORD *)(a2 + 84);
  do
  {
    v7 = (*(_DWORD *)v6 * *(_WORD *)v67 << 13) + 1024;
    v8 = *(_DWORD *)(v6 + 128) * *(_WORD *)(v67 + 64);
    v9 = 9373 * v8 + v7;
    v10 = v7 - 3580 * v8;
    v11 = (v7 - 11586 * v8) >> 11;
    v12 = *(_DWORD *)(v6 + 64) * *(_WORD *)(v67 + 32);
    v13 = *(_DWORD *)(v6 + 192) * *(_WORD *)(v67 + 96);
    v14 = 6810 * (v13 + v12);
    v15 = v14 + 4209 * v12;
    v16 = v14 - 17828 * v13;
    v17 = v15 + v9;
    v18 = v9 - v15;
    v19 = v16 + v10;
    v20 = v10 - v16;
    v21 = *(_DWORD *)(v6 + 32) * *(_WORD *)(v67 + 16);
    v22 = *(_DWORD *)(v6 + 96) * *(_WORD *)(v67 + 48);
    v23 = *(_DWORD *)(v6 + 160) * *(_WORD *)(v67 + 80);
    v24 = *(_DWORD *)(v6 + 224) * *(_WORD *)(v67 + 112);
    v25 = v24 + v22;
    v26 = v22 - v24;
    v27 = (v23 << 13) + 2531 * (v22 - v24);
    v28 = v27 + 7791 * (v24 + v22) + 11443 * v21;
    v29 = v27 - 7791 * (v24 + v22) + 1812 * v21;
    v30 = 4815 * v25;
    v31 = (v23 << 13) - 2531 * v26 - (v26 << 12);
    v32 = 4 * (v21 - v26 - v23);
    v33 = 10323 * v21 - 4815 * v25 - v31;
    v34 = 5260 * v21 - v30 + v31;
    *v5 = (v17 + v28) >> 11;
    v5[72] = (v17 - v28) >> 11;
    v5[8] = (v33 + v19) >> 11;
    v5[64] = (v19 - v33) >> 11;
    v5[16] = v32 + v11;
    v5[56] = v11 - v32;
    v5[24] = (v34 + v20) >> 11;
    v5[48] = (v20 - v34) >> 11;
    v5[32] = (v18 + v29) >> 11;
    v5[40] = (v18 - v29) >> 11;
    v67 += 2;
    v6 += 4;
    ++v5;
  }
  while ( v6 != v66 );
  v35 = 0;
  do
  {
    v36 = (*(&v68 + 2 * v35) + 16) << 13;
    v37 = *(&v72 + 2 * v35);
    v38 = v36 + 9373 * v37;
    v39 = v36 - 3580 * v37;
    v40 = v36 - 11586 * v37;
    v41 = *(&v70 + 2 * v35);
    v42 = *(&v74 + 2 * v35);
    v43 = 6810 * (v42 + v41);
    v44 = v43 + 4209 * v41;
    v45 = v43 - 17828 * v42;
    v46 = v44 + v38;
    v47 = v38 - v44;
    v48 = v45 + v39;
    v49 = v39 - v45;
    v50 = *(&v69 + 2 * v35);
    v51 = *(&v71 + 2 * v35);
    v52 = *(&v73 + 2 * v35) << 13;
    v53 = v75[2 * v35];
    v54 = v53 + v51;
    v55 = v51 - v53;
    v56 = v52 + 2531 * v55 + 7791 * v54 + 11443 * v50;
    v57 = v52 + 2531 * v55 - 7791 * v54 + 1812 * v50;
    v58 = 4815 * v54;
    v59 = v52 - 2531 * v55 - (v55 << 12);
    v60 = ((v50 - v55) << 13) - v52;
    v61 = 10323 * v50 - 4815 * v54 - v59;
    v62 = v59 + 5260 * v50 - v58;
    v63 = *(_DWORD *)(a4 + v35) + a5;
    *(_BYTE *)v63 = *(_BYTE *)(v65 + (((v46 + v56) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 9) = *(_BYTE *)(v65 + (((v46 - v56) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 1) = *(_BYTE *)(v65 + (((v61 + v48) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 8) = *(_BYTE *)(v65 + (((v48 - v61) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 2) = *(_BYTE *)(v65 + (((v60 + v40) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 7) = *(_BYTE *)(v65 + (((v40 - v60) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 3) = *(_BYTE *)(v65 + (((v49 + v62) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 6) = *(_BYTE *)(v65 + (((v49 - v62) >> 18) & 0x3FF));
    *(_BYTE *)(v63 + 4) = *(_BYTE *)(v65 + (((v47 + v57) >> 18) & 0x3FF));
    result = ((v47 - v57) >> 18) & 0x3FF;
    LOBYTE(result) = *(_BYTE *)(v65 + result);
    *(_BYTE *)(v63 + 5) = result;
    v35 += 4;
  }
  while ( v35 != 40 );
  return result;
}
