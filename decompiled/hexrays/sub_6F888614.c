int __cdecl sub_6F888614(int a1, int a2, int a3, int a4, int a5)
{
  char *v5; // edx@1
  int v6; // ebx@2
  int v7; // eax@2
  int v8; // esi@2
  int v9; // ST48_4@2
  int v10; // ST38_4@2
  int v11; // ST4C_4@2
  int v12; // ST3C_4@2
  int v13; // eax@2
  int v14; // ebx@2
  int v15; // ST58_4@2
  int v16; // ST5C_4@2
  int v17; // esi@2
  int v18; // eax@2
  int v19; // ST40_4@2
  int v20; // ST48_4@2
  int v21; // ST24_4@2
  int v22; // ST4C_4@2
  int v23; // ST20_4@2
  int v24; // ST3C_4@2
  int v25; // ST1C_4@2
  int v26; // ST38_4@2
  int v27; // eax@2
  int v28; // ebx@2
  int v29; // ST58_4@2
  int v30; // ST00_4@2
  int v31; // ST28_4@2
  int v32; // ST34_4@2
  int v33; // ST30_4@2
  int v34; // ST14_4@2
  int v35; // ST54_4@2
  int v36; // ST44_4@2
  int v37; // ST2C_4@2
  int v38; // ST18_4@2
  int v39; // eax@2
  int v40; // ST10_4@2
  int v41; // ST5C_4@2
  int v42; // ST28_4@2
  int v43; // ST0C_4@2
  int v44; // edi@2
  int v45; // ST54_4@2
  int v46; // ST30_4@2
  int v47; // eax@2
  int v48; // ST34_4@2
  int v49; // ST44_4@2
  int v50; // eax@2
  int v51; // edi@2
  int v52; // ST5C_4@2
  int v53; // eax@2
  int v54; // esi@2
  int v55; // eax@2
  int result; // eax@3
  int v57; // ST58_4@4
  int v58; // edi@4
  int v59; // edx@4
  int v60; // ST50_4@4
  int v61; // ST60_4@4
  int v62; // edi@4
  int v63; // esi@4
  int v64; // edx@4
  int v65; // edi@4
  int v66; // ST3C_4@4
  int v67; // ST38_4@4
  int v68; // ST54_4@4
  int v69; // ST44_4@4
  int v70; // edx@4
  int v71; // ST5C_4@4
  int v72; // edi@4
  int v73; // ST40_4@4
  int v74; // ST5C_4@4
  int v75; // ST4C_4@4
  int v76; // ST48_4@4
  int v77; // ST60_4@4
  int v78; // ST48_4@4
  int v79; // esi@4
  int v80; // ST4C_4@4
  int v81; // esi@4
  int v82; // [sp+4h] [bp-26Ch]@1
  int v83; // [sp+8h] [bp-268h]@1
  int v84; // [sp+50h] [bp-220h]@1
  int v85; // [sp+60h] [bp-210h]@1
  char v86[524]; // [sp+64h] [bp-20Ch]@1

  v85 = *(_DWORD *)(a2 + 84);
  v83 = v85 + 32;
  v84 = a3;
  v5 = v86;
  v82 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = (*(_DWORD *)v85 * *(_WORD *)v84 << 13) + 1024;
    v7 = *(_DWORD *)(v85 + 128) * *(_WORD *)(v84 + 64);
    v8 = 10703 * v7;
    v7 *= 4433;
    v9 = v6 + v8;
    v10 = v6 - v8;
    v11 = v6 + v7;
    v12 = v6 - v7;
    v13 = *(_DWORD *)(v85 + 64) * *(_WORD *)(v84 + 32);
    v14 = *(_DWORD *)(v85 + 192) * *(_WORD *)(v84 + 96);
    v15 = 11363 * (v13 - v14) + 20995 * v14;
    v16 = 2260 * (v13 - v14) + 7373 * v13;
    v17 = 11363 * (v13 - v14) + -4926 * v13;
    v18 = 2260 * (v13 - v14) - 4176 * v14;
    v19 = v9 + v15;
    v20 = v9 - v15;
    v21 = v11 + v16;
    v22 = v11 - v16;
    v23 = v17 + v12;
    v24 = v12 - v17;
    v25 = v18 + v10;
    v26 = v10 - v18;
    v27 = *(_DWORD *)(v85 + 32) * *(_WORD *)(v84 + 16);
    v28 = *(_DWORD *)(v85 + 96) * *(_WORD *)(v84 + 48);
    v29 = *(_DWORD *)(v85 + 160) * *(_WORD *)(v84 + 80);
    v30 = *(_DWORD *)(v85 + 224) * *(_WORD *)(v84 + 112);
    v31 = 11086 * (v28 + v27);
    v32 = 10217 * (v27 + v29);
    v33 = 8956 * (v27 + v30);
    v34 = 7350 * (v27 - v30);
    v35 = 5461 * (v27 + v29);
    v36 = 3363 * (v27 - v28);
    v37 = v33 + v32 + 11086 * (v28 + v27) - 18730 * v27;
    v38 = v36 + v34 + v35 + -15038 * v27;
    v39 = 1136 * (v28 + v29);
    v40 = v39 + v31 + 589 * v28;
    v41 = v32 + v39 - 9222 * v29;
    v42 = 11529 * (v29 - v28);
    v43 = v42 + v35 + -6278 * v29;
    v44 = -5461 * (v28 + v30);
    v45 = v44 + v40;
    v46 = v33 + v44 + 8728 * v30;
    v47 = -10217 * (v28 + v30);
    v48 = v34 + v47 + 25733 * v30;
    v49 = v42 + v36 + v47 + 16154 * v28;
    v50 = -11086 * (v30 + v29);
    v51 = v50 + v41;
    v52 = v46 + v50;
    v53 = 3363 * (v30 - v29);
    v54 = v53 + v48;
    v55 = v43 + v53;
    *(_DWORD *)v5 = (v19 + v37) >> 11;
    *((_DWORD *)v5 + 120) = (v19 - v37) >> 11;
    *((_DWORD *)v5 + 8) = (v21 + v45) >> 11;
    *((_DWORD *)v5 + 112) = (v21 - v45) >> 11;
    *((_DWORD *)v5 + 16) = (v51 + v23) >> 11;
    *((_DWORD *)v5 + 104) = (v23 - v51) >> 11;
    *((_DWORD *)v5 + 24) = (v25 + v52) >> 11;
    *((_DWORD *)v5 + 96) = (v25 - v52) >> 11;
    *((_DWORD *)v5 + 32) = (v54 + v26) >> 11;
    *((_DWORD *)v5 + 88) = (v26 - v54) >> 11;
    *((_DWORD *)v5 + 40) = (v55 + v24) >> 11;
    *((_DWORD *)v5 + 80) = (v24 - v55) >> 11;
    *((_DWORD *)v5 + 48) = (v22 + v49) >> 11;
    *((_DWORD *)v5 + 72) = (v22 - v49) >> 11;
    *((_DWORD *)v5 + 56) = (v20 + v38) >> 11;
    *((_DWORD *)v5 + 64) = (v20 - v38) >> 11;
    v84 += 2;
    v85 += 4;
    v5 += 4;
  }
  while ( v85 != v83 );
  result = 0;
  do
  {
    v57 = *(_DWORD *)(a4 + result) + a5;
    v58 = *(_DWORD *)&v86[8 * result + 8];
    v59 = *(_DWORD *)&v86[8 * result + 24];
    v60 = 4433 * (v59 + v58) + 6270 * v58;
    v61 = 4433 * (v59 + v58) - 15137 * v59;
    v62 = *(_DWORD *)&v86[8 * result] + 16;
    v63 = *(_DWORD *)&v86[8 * result + 16];
    v64 = (v62 + v63) << 13;
    v65 = (v62 - v63) << 13;
    v66 = v64 + v60;
    v67 = v64 - v60;
    v68 = v65 + v61;
    v69 = v65 - v61;
    v70 = *(_DWORD *)&v86[8 * result + 20];
    v71 = *(_DWORD *)&v86[8 * result + 28] + *(_DWORD *)&v86[8 * result + 12];
    v72 = v70 + *(_DWORD *)&v86[8 * result + 4];
    v73 = 9633 * (v72 + v71);
    v74 = 9633 * (v72 + v71) - 16069 * v71;
    v75 = v73 + -3196 * v72;
    v76 = -7373 * (*(_DWORD *)&v86[8 * result + 28] + *(_DWORD *)&v86[8 * result + 4]);
    v77 = v74 + v76 + 2446 * *(_DWORD *)&v86[8 * result + 28];
    v78 = v75 + 12299 * *(_DWORD *)&v86[8 * result + 4] + v76;
    v79 = -20995 * (v70 + *(_DWORD *)&v86[8 * result + 12]);
    v80 = v75 + v79 + 16819 * v70;
    v81 = v74 + v79 + 25172 * *(_DWORD *)&v86[8 * result + 12];
    *(_BYTE *)v57 = *(_BYTE *)(v82 + (((v66 + v78) >> 18) & 0x3FF));
    *(_BYTE *)(v57 + 7) = *(_BYTE *)(v82 + (((v66 - v78) >> 18) & 0x3FF));
    *(_BYTE *)(v57 + 1) = *(_BYTE *)(v82 + (((v81 + v68) >> 18) & 0x3FF));
    *(_BYTE *)(v57 + 6) = *(_BYTE *)(v82 + (((v68 - v81) >> 18) & 0x3FF));
    *(_BYTE *)(v57 + 2) = *(_BYTE *)(v82 + (((v69 + v80) >> 18) & 0x3FF));
    *(_BYTE *)(v57 + 5) = *(_BYTE *)(v82 + (((v69 - v80) >> 18) & 0x3FF));
    *(_BYTE *)(v57 + 3) = *(_BYTE *)(v82 + (((v67 + v77) >> 18) & 0x3FF));
    *(_BYTE *)(v57 + 4) = *(_BYTE *)(v82 + (((v67 - v77) >> 18) & 0x3FF));
    result += 4;
  }
  while ( result != 64 );
  return result;
}
