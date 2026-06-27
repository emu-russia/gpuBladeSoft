char *__cdecl sub_6F889044(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  char *v5; // ecx@1
  int v6; // edx@2
  int v7; // eax@2
  int v8; // ST38_4@2
  int v9; // ST50_4@2
  int v10; // ST40_4@2
  int v11; // ST48_4@2
  int v12; // eax@2
  int v13; // edx@2
  int v14; // edi@2
  int v15; // esi@2
  int v16; // edx@2
  int v17; // ST24_4@2
  int v18; // ST38_4@2
  int v19; // ST1C_4@2
  int v20; // ST50_4@2
  int v21; // ST18_4@2
  int v22; // ST40_4@2
  int v23; // ebx@2
  int v24; // edx@2
  int v25; // eax@2
  int v26; // ST34_4@2
  int v27; // ST30_4@2
  int v28; // ST20_4@2
  int v29; // ST14_4@2
  int v30; // ST0C_4@2
  int v31; // ST2C_4@2
  int v32; // ST28_4@2
  int v33; // ST10_4@2
  int v34; // ebx@2
  int v35; // ST30_4@2
  int v36; // ST20_4@2
  int v37; // ebx@2
  int v38; // esi@2
  int v39; // edi@2
  int v40; // ebx@2
  char *result; // eax@3
  int v42; // ecx@4
  int v43; // ST38_4@4
  int v44; // edx@4
  int v45; // ST44_4@4
  int v46; // ST50_4@4
  int v47; // ST28_4@4
  int v48; // ST4C_4@4
  int v49; // esi@4
  int v50; // ST50_4@4
  int v51; // ST40_4@4
  int v52; // edx@4
  int v53; // ST24_4@4
  int v54; // ST48_4@4
  int v55; // ST3C_4@4
  int v56; // ST30_4@4
  int v57; // edi@4
  int v58; // esi@4
  int v59; // ST48_4@4
  int v60; // [sp+4h] [bp-1ECh]@1
  int v61; // [sp+8h] [bp-1E8h]@1
  _DWORD *v62; // [sp+2Ch] [bp-1C4h]@3
  int v63; // [sp+44h] [bp-1ACh]@1
  int v64; // [sp+4Ch] [bp-1A4h]@1
  char v65; // [sp+5Ch] [bp-194h]@1
  char v66; // [sp+1E4h] [bp-Ch]@4

  v63 = *(_DWORD *)(a2 + 84);
  v61 = v63 + 28;
  v64 = a3;
  v5 = &v65;
  v60 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = (*(_DWORD *)v63 * *(_WORD *)v64 << 13) + 1024;
    v7 = *(_DWORD *)(v63 + 128) * *(_WORD *)(v64 + 64);
    v8 = v6 + 10438 * v7;
    v9 = v6 + 2578 * v7;
    v10 = v6 - 7223 * v7;
    v11 = (v6 - 11586 * v7) >> 11;
    v12 = *(_DWORD *)(v63 + 64) * *(_WORD *)(v64 + 32);
    v13 = *(_DWORD *)(v63 + 192) * *(_WORD *)(v64 + 96);
    v14 = 9058 * (v13 + v12) + 2237 * v12;
    v15 = 9058 * (v13 + v12) - 14084 * v13;
    v16 = -11295 * v13 + 5027 * v12;
    v17 = v14 + v8;
    v18 = v8 - v14;
    v19 = v15 + v9;
    v20 = v9 - v15;
    v21 = v16 + v10;
    v22 = v10 - v16;
    v23 = *(_DWORD *)(v63 + 32) * *(_WORD *)(v64 + 16);
    v24 = *(_DWORD *)(v63 + 96) * *(_WORD *)(v64 + 48);
    v25 = *(_DWORD *)(v63 + 160) * *(_WORD *)(v64 + 80);
    v26 = *(_DWORD *)(v63 + 224) * *(_WORD *)(v64 + 112);
    v27 = 10935 * (v24 + v23);
    v28 = 9810 * (v25 + v23);
    v29 = v28 + v27 + (v26 << 13) - 9232 * v23;
    v30 = 6164 * (v25 + v23);
    v31 = v23 - v24;
    v32 = 3826 * (v23 - v24) - (v26 << 13);
    v33 = v32 + 6164 * (v25 + v23) - 8693 * v23;
    v34 = -1297 * (v25 + v24) - (v26 << 13);
    v35 = v34 + v27 - 3474 * v24;
    v36 = v34 + v28 + -19447 * v25;
    v37 = 11512 * (v25 - v24);
    v38 = v37 + (v26 << 13) - 13850 * v25 + v30;
    v39 = v32 + v37 + 5529 * v24;
    v40 = 4 * (v26 + v31 - v25);
    *(_DWORD *)v5 = (v17 + v29) >> 11;
    *((_DWORD *)v5 + 91) = (v17 - v29) >> 11;
    *((_DWORD *)v5 + 7) = (v19 + v35) >> 11;
    *((_DWORD *)v5 + 84) = (v19 - v35) >> 11;
    *((_DWORD *)v5 + 14) = (v21 + v36) >> 11;
    *((_DWORD *)v5 + 77) = (v21 - v36) >> 11;
    *((_DWORD *)v5 + 21) = v40 + v11;
    *((_DWORD *)v5 + 70) = v11 - v40;
    *((_DWORD *)v5 + 28) = (v38 + v22) >> 11;
    *((_DWORD *)v5 + 63) = (v22 - v38) >> 11;
    *((_DWORD *)v5 + 35) = (v39 + v20) >> 11;
    *((_DWORD *)v5 + 56) = (v20 - v39) >> 11;
    *((_DWORD *)v5 + 42) = (v18 + v33) >> 11;
    *((_DWORD *)v5 + 49) = (v18 - v33) >> 11;
    v64 += 2;
    v63 += 4;
    v5 += 4;
  }
  while ( v63 != v61 );
  v62 = a4;
  result = &v65;
  do
  {
    v42 = *v62 + a5;
    v43 = (*(_DWORD *)result + 16) << 13;
    v44 = *((_DWORD *)result + 2);
    v45 = *((_DWORD *)result + 4);
    v46 = 7223 * (v45 - *((_DWORD *)result + 6));
    v47 = 2578 * (v44 - v45) + v43 - 15083 * v45 + v46;
    v48 = v44 + *((_DWORD *)result + 6);
    v49 = v43 + 10438 * v48;
    v50 = v49 + v46 - 637 * *((_DWORD *)result + 6);
    v51 = v49 + 2578 * (v44 - v45) - 20239 * v44;
    v52 = *((_DWORD *)result + 5);
    v53 = 7663 * (*((_DWORD *)result + 1) + *((_DWORD *)result + 3));
    v54 = 1395 * (*((_DWORD *)result + 1) - *((_DWORD *)result + 3));
    v55 = -11295 * (v52 + *((_DWORD *)result + 3));
    v56 = v54 + v55 + v53;
    v57 = 5027 * (v52 + *((_DWORD *)result + 1));
    v58 = v57 + v53 - v54;
    v59 = v55 + v57 + 15326 * v52;
    *(_BYTE *)v42 = *(_BYTE *)(v60 + (((v58 + v50) >> 18) & 0x3FF));
    *(_BYTE *)(v42 + 6) = *(_BYTE *)(v60 + (((v50 - v58) >> 18) & 0x3FF));
    *(_BYTE *)(v42 + 1) = *(_BYTE *)(v60 + (((v56 + v47) >> 18) & 0x3FF));
    *(_BYTE *)(v42 + 5) = *(_BYTE *)(v60 + (((v47 - v56) >> 18) & 0x3FF));
    *(_BYTE *)(v42 + 2) = *(_BYTE *)(v60 + (((v59 + v51) >> 18) & 0x3FF));
    *(_BYTE *)(v42 + 4) = *(_BYTE *)(v60 + (((v51 - v59) >> 18) & 0x3FF));
    *(_BYTE *)(v42 + 3) = *(_BYTE *)(v60 + (((v43 + 11585 * (v45 - v48)) >> 18) & 0x3FF));
    result += 28;
    ++v62;
  }
  while ( result != &v66 );
  return result;
}
