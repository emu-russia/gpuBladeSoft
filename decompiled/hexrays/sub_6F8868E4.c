char __cdecl sub_6F8868E4(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // ST2C_4@2
  int v7; // ecx@2
  int v8; // edx@2
  int v9; // ebx@2
  int v10; // ST34_4@2
  int v11; // ST30_4@2
  int v12; // ST20_4@2
  int v13; // ST38_4@2
  int v14; // ST28_4@2
  int v15; // ST30_4@2
  int v16; // ST34_4@2
  int v17; // esi@2
  int v18; // ecx@2
  int v19; // ST18_4@2
  int v20; // ST24_4@2
  int v21; // edi@2
  int v22; // ST1C_4@2
  int v23; // esi@2
  int v24; // ebx@2
  int v25; // ecx@2
  int v26; // ebx@3
  int v27; // esi@3
  int v28; // ecx@4
  int v29; // edx@4
  int v30; // eax@4
  int v31; // ST34_4@4
  int v32; // ST28_4@4
  int v33; // ST30_4@4
  int v34; // ST20_4@4
  int v35; // eax@4
  int v36; // edx@4
  int v37; // ST3C_4@4
  int v38; // ST38_4@4
  int v39; // ST3C_4@4
  int v40; // edx@4
  int v41; // ST1C_4@4
  int v42; // ST34_4@4
  int v43; // ST18_4@4
  int v44; // ST28_4@4
  int v45; // ST08_4@4
  int v46; // ST30_4@4
  int v47; // edx@4
  int v48; // ST38_4@4
  int v49; // ST40_4@4
  int v50; // ST2C_4@4
  int v51; // ST14_4@4
  int v52; // ST04_4@4
  int v53; // ST10_4@4
  int v54; // eax@4
  int v55; // ST3C_4@4
  int v56; // eax@4
  int v57; // ST0C_4@4
  int v58; // ST40_4@4
  int v59; // ST2C_4@4
  int v60; // ST14_4@4
  int v61; // edi@4
  int v62; // ST10_4@4
  int v63; // edi@4
  int v64; // edx@4
  char result; // al@4
  int v66; // [sp+8h] [bp-128h]@1
  int v67; // [sp+3Ch] [bp-F4h]@1
  int v68; // [sp+44h] [bp-ECh]@2
  int v69; // [sp+48h] [bp-E8h]@4
  int v70; // [sp+4Ch] [bp-E4h]@4
  int v71; // [sp+50h] [bp-E0h]@4
  int v72; // [sp+54h] [bp-DCh]@4
  int v73; // [sp+58h] [bp-D8h]@4
  int v74; // [sp+5Ch] [bp-D4h]@4
  int v75; // [sp+60h] [bp-D0h]@4
  int v76[8]; // [sp+64h] [bp-CCh]@2
  int v77[8]; // [sp+84h] [bp-ACh]@2
  int v78[8]; // [sp+A4h] [bp-8Ch]@2
  int v79[8]; // [sp+C4h] [bp-6Ch]@2
  int v80[8]; // [sp+E4h] [bp-4Ch]@2
  int v81[11]; // [sp+104h] [bp-2Ch]@2

  v67 = *(_DWORD *)(a2 + 84);
  v5 = 0;
  v66 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = (*(_DWORD *)(v67 + 4 * v5) * *(_WORD *)(a3 + 2 * v5) << 13) + 1024;
    v7 = *(_DWORD *)(v67 + 4 * v5 + 64) * *(_WORD *)(a3 + 2 * v5 + 32);
    v8 = *(_DWORD *)(v67 + 4 * v5 + 128) * *(_WORD *)(a3 + 2 * v5 + 64);
    v9 = *(_DWORD *)(v67 + 4 * v5 + 192) * *(_WORD *)(a3 + 2 * v5 + 96);
    v10 = 7223 * (v8 - v9);
    v11 = 2578 * (v7 - v8);
    v12 = v11 + v6 - 15083 * v8 + v10;
    v13 = v9 + v7;
    v14 = v6 + 10438 * (v9 + v7) + v10 - 637 * v9;
    v15 = v11 + v6 + 10438 * (v9 + v7) - 20239 * v7;
    v16 = *(_DWORD *)(v67 + 4 * v5 + 32) * *(_WORD *)(a3 + 2 * v5 + 16);
    v17 = *(_DWORD *)(v67 + 4 * v5 + 96) * *(_WORD *)(a3 + 2 * v5 + 48);
    v18 = *(_DWORD *)(v67 + 4 * v5 + 160) * *(_WORD *)(a3 + 2 * v5 + 80);
    v19 = 7663 * (v17 + v16);
    v20 = 1395 * (v16 - v17);
    v21 = -11295 * (v18 + v17);
    v22 = v20 + v21 + 7663 * (v17 + v16);
    v23 = 5027 * (v18 + v16);
    v24 = v23 + v19 - v20;
    v25 = v23 + v21 + 15326 * v18;
    *(&v68 + v5) = (v24 + v14) >> 11;
    v81[v5] = (v14 - v24) >> 11;
    v76[v5] = (v22 + v12) >> 11;
    v80[v5] = (v12 - v22) >> 11;
    v77[v5] = (v25 + v15) >> 11;
    v79[v5] = (v15 - v25) >> 11;
    v78[v5++] = (v6 + 11585 * (v8 - v13)) >> 11;
  }
  while ( v5 != 8 );
  v26 = v66;
  v27 = 0;
  do
  {
    v28 = *(_DWORD *)(a4 + v27) + a5;
    v29 = (*(&v68 + 2 * v27) + 16) << 13;
    v30 = *(&v72 + 2 * v27);
    v31 = v29 + 10438 * v30;
    v32 = v29 + 2578 * v30;
    v33 = v29 - 7223 * v30;
    v34 = v29 - 11586 * v30;
    v35 = *(&v70 + 2 * v27);
    v36 = *(&v74 + 2 * v27);
    v37 = 9058 * (v36 + v35);
    v38 = v37 + 2237 * v35;
    v39 = v37 - 14084 * v36;
    v40 = -11295 * v36 + 5027 * v35;
    v41 = v31 + v38;
    v42 = v31 - v38;
    v43 = v32 + v39;
    v44 = v32 - v39;
    v45 = v40 + v33;
    v46 = v33 - v40;
    v47 = *(&v71 + 2 * v27);
    v48 = *(&v75 + 2 * v27) << 13;
    v49 = *(&v73 + 2 * v27) + *(&v69 + 2 * v27);
    v50 = 10935 * (v47 + *(&v69 + 2 * v27));
    v51 = 9810 * v49;
    v52 = 9810 * v49 + v48 - 9232 * *(&v69 + 2 * v27) + v50;
    v53 = 6164 * v49;
    v54 = *(&v69 + 2 * v27) - v47;
    v55 = v54;
    v56 = 3826 * v54 - v48;
    v57 = v56 + 6164 * v49 - 8693 * *(&v69 + 2 * v27);
    v58 = -1297 * (v47 + *(&v73 + 2 * v27)) - v48;
    v59 = v58 + v50 - 3474 * v47;
    v60 = v58 + -19447 * *(&v73 + 2 * v27) + v51;
    v61 = *(&v73 + 2 * v27) - v47;
    v62 = 11512 * v61 + v48 - 13850 * *(&v73 + 2 * v27) + v53;
    v63 = 5529 * v47 + 11512 * v61 + v56;
    v64 = v48 + ((v55 - *(&v73 + 2 * v27)) << 13);
    *(_BYTE *)v28 = *(_BYTE *)(v26 + (((v41 + v52) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 13) = *(_BYTE *)(v26 + (((v41 - v52) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 1) = *(_BYTE *)(v26 + (((v43 + v59) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 12) = *(_BYTE *)(v26 + (((v43 - v59) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 2) = *(_BYTE *)(v26 + (((v45 + v60) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 11) = *(_BYTE *)(v26 + (((v45 - v60) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 3) = *(_BYTE *)(v26 + (((v64 + v34) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 10) = *(_BYTE *)(v26 + (((v34 - v64) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 4) = *(_BYTE *)(v26 + (((v46 + v62) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 9) = *(_BYTE *)(v26 + (((v46 - v62) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 5) = *(_BYTE *)(v26 + (((v63 + v44) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 8) = *(_BYTE *)(v26 + (((v44 - v63) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 6) = *(_BYTE *)(v26 + (((v42 + v57) >> 18) & 0x3FF));
    result = *(_BYTE *)(v26 + (((v42 - v57) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 7) = result;
    v27 += 4;
  }
  while ( v27 != 28 );
  return result;
}
