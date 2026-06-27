int __cdecl sub_6F87B144(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ecx@2
  int v5; // ST38_4@2
  int v6; // ST50_4@2
  int v7; // ST4C_4@2
  int v8; // ST34_4@2
  int v9; // ST28_4@2
  int v10; // edx@2
  int v11; // ST24_4@2
  int v12; // edx@2
  int v13; // ST2C_4@2
  int v14; // ST20_4@2
  int v15; // ST1C_4@2
  int v16; // ST48_4@2
  int v17; // ST18_4@2
  int v18; // ST44_4@2
  int v19; // esi@2
  int v20; // ST10_4@2
  int v21; // esi@2
  int v22; // ST40_4@2
  int v23; // ecx@2
  int v24; // ST0C_4@2
  int v25; // ecx@2
  int v26; // ST08_4@2
  int v27; // ebx@2
  int v28; // ST04_4@2
  int v29; // ST3C_4@2
  int v30; // ST00_4@2
  int v31; // edx@2
  int v32; // ST38_4@2
  int v33; // ST4C_4@2
  int v34; // ST2C_4@2
  int v35; // ST48_4@2
  int v36; // ST44_4@2
  int v37; // ST40_4@2
  int v38; // ST50_4@2
  int v39; // edx@2
  int v40; // ST3C_4@2
  int v41; // ebx@2
  int result; // eax@3
  int v43; // esi@4
  int v44; // ST44_4@4
  int v45; // ecx@4
  int v46; // ST4C_4@4
  int v47; // ebx@4
  int v48; // ST40_4@4
  int v49; // ST38_4@4
  int v50; // edx@4
  int v51; // ST50_4@4
  int v52; // ST48_4@4
  int v53; // ecx@4
  int v54; // esi@4
  int v55; // esi@4
  int v56; // ST4C_4@4
  int v57; // ecx@4
  int v58; // edi@4
  int v59; // [sp+30h] [bp-30h]@1

  memset((void *)(a1 + 224), 0, 0x20u);
  v3 = a1;
  v59 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + 4 * v59) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 13);
    v7 = *(_BYTE *)(v4 + 1);
    v8 = *(_BYTE *)(v4 + 12);
    v9 = *(_BYTE *)(v4 + 2);
    v10 = *(_BYTE *)(v4 + 11);
    v11 = v10;
    v12 = v9 + v10;
    v13 = *(_BYTE *)(v4 + 3);
    v14 = *(_BYTE *)(v4 + 10);
    v15 = v13 + v14;
    v16 = *(_BYTE *)(v4 + 4);
    v17 = *(_BYTE *)(v4 + 9);
    v18 = *(_BYTE *)(v4 + 5);
    v19 = *(_BYTE *)(v4 + 8);
    v20 = v19;
    v21 = v18 + v19;
    v22 = *(_BYTE *)(v4 + 6);
    v23 = *(_BYTE *)(v4 + 7);
    v24 = v23;
    v25 = v22 + v23;
    v26 = v25 + v5 + v6;
    v27 = v5 + v6 - v25;
    v28 = v21 + v7 + v8;
    v29 = v7 + v8 - v21;
    v30 = v12 + v16 + v17;
    v31 = v12 - (v16 + v17);
    v32 = v5 - v6;
    v33 = v7 - v8;
    v34 = v13 - v14;
    v35 = v16 - v17;
    v36 = v18 - v20;
    v37 = v22 - v24;
    *(_DWORD *)v3 = 4 * (v30 + v28 + v15 + v26 - 1792);
    *(_DWORD *)(v3 + 16) = (7223 * (2 * v15 - v30) + 2 * (5219 * (v26 - 2 * v15) + 1289 * (v28 - 2 * v15)) + 1024) >> 11;
    v38 = 9058 * (v27 + v29);
    *(_DWORD *)(v3 + 8) = (v38 + 2237 * v27 + 5027 * v31 + 1024) >> 11;
    *(_DWORD *)(v3 + 24) = (v38 + -11295 * v31 - 14084 * v29 + 1024) >> 11;
    *(_DWORD *)(v3 + 28) = 4 * (v32 + v34 - v37 - (v36 - v35) - (v9 - v11 + v33));
    v39 = 11512 * (v36 - v35) - 1297 * (v9 - v11 + v33) - (v34 << 13);
    v40 = 9810 * (v9 - v11 + v32) + 6164 * (v35 + v37);
    *(_DWORD *)(v3 + 20) = (v39 + v40 + 9175 * v35 + -19447 * (v9 - v11) + 1024) >> 11;
    v41 = 10935 * (v32 + v33) + 3826 * (v36 - v37);
    *(_DWORD *)(v3 + 12) = (v41 + v39 + -3474 * v33 - 25148 * v36 + 1024) >> 11;
    *(_DWORD *)(v3 + 4) = (v41 + v40 + v37 + (v34 << 13) + 1024 - 9232 * (v32 + v37)) >> 11;
    v3 += 32;
    ++v59;
  }
  while ( v59 != 7 );
  result = a1;
  do
  {
    v43 = *(_DWORD *)(result + 192);
    v44 = v43 + *(_DWORD *)result;
    v45 = *(_DWORD *)(result + 32);
    v46 = v45 + *(_DWORD *)(result + 160);
    v47 = *(_DWORD *)(result + 64) + *(_DWORD *)(result + 128);
    v48 = *(_DWORD *)result - v43;
    v49 = v45 - *(_DWORD *)(result + 160);
    v50 = *(_DWORD *)(result + 64) - *(_DWORD *)(result + 128);
    *(_DWORD *)result = (10700 * (v47 + v44 + *(_DWORD *)(result + 96) + v46) + 0x8000) >> 16;
    v51 = 2 * *(_DWORD *)(result + 96);
    v52 = 3783 * (v47 + v44 - v51 - v51);
    v53 = 3367 * (v46 - v47);
    *(_DWORD *)(result + 64) = (v52 + 9850 * (v44 - v47) + v53 + 0x8000) >> 16;
    v54 = 9434 * (v44 - v46);
    *(_DWORD *)(result + 128) = (v53 + v54 + 0x8000 + 7566 * (v51 - v46)) >> 16;
    *(_DWORD *)(result + 192) = (v52 - 9850 * (v44 - v47) + v54 + 0x8000) >> 16;
    v55 = 10009 * (v48 + v49);
    v56 = 1822 * (v48 - v49);
    v57 = -14752 * (v50 + v49);
    v58 = 6565 * (v50 + v48);
    *(_DWORD *)(result + 32) = (v55 + v58 + 0x8000 - v56) >> 16;
    *(_DWORD *)(result + 96) = (v56 + v57 + v55 + 0x8000) >> 16;
    *(_DWORD *)(result + 160) = (20017 * v50 + 0x8000 + v57 + v58) >> 16;
    result += 4;
    --v59;
  }
  while ( v59 != -1 );
  return result;
}
