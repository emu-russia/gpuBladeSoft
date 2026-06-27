int __cdecl sub_6F87AA98(int a1, int a2, int a3)
{
  int v3; // eax@2
  int v4; // ST44_4@2
  int v5; // ST38_4@2
  int v6; // ST30_4@2
  int v7; // ST2C_4@2
  int v8; // ST5C_4@2
  int v9; // ST28_4@2
  int v10; // ST50_4@2
  int v11; // ST24_4@2
  int v12; // ST40_4@2
  int v13; // ST20_4@2
  int v14; // ST60_4@2
  int v15; // ST18_4@2
  int v16; // ST58_4@2
  int v17; // esi@2
  int v18; // ST14_4@2
  int v19; // esi@2
  int v20; // edi@2
  int v21; // eax@2
  int v22; // ST10_4@2
  int v23; // eax@2
  int v24; // ST0C_4@2
  int v25; // ST3C_4@2
  int v26; // ST08_4@2
  int v27; // ecx@2
  int v28; // ST04_4@2
  int v29; // ebx@2
  int v30; // ST00_4@2
  int v31; // ST48_4@2
  int v32; // eax@2
  int v33; // edx@2
  int v34; // ST5C_4@2
  int v35; // ST50_4@2
  int v36; // ST40_4@2
  int v37; // ST60_4@2
  int v38; // ST58_4@2
  int v39; // ST44_4@2
  int v40; // ST3C_4@2
  int v41; // ST38_4@2
  int v42; // ST30_4@2
  int v43; // ST48_4@2
  int v44; // ebx@2
  int result; // eax@3
  int v46; // ebx@4
  int v47; // ecx@4
  int v48; // edx@4
  int v49; // esi@4
  int v50; // ST5C_4@4
  int v51; // ebx@4
  int v52; // ST34_4@4
  int v53; // ecx@4
  int v54; // ST54_4@4
  int v55; // ST58_4@4
  int v56; // edx@4
  int v57; // ST60_4@4
  int v58; // edi@4
  int v59; // ebx@4
  int v60; // esi@4
  int v61; // edi@4
  int v62; // ST5C_4@4
  int v63; // ST4C_4@4
  int v64; // [sp+34h] [bp-3Ch]@1
  signed int v65; // [sp+40h] [bp-30h]@3
  int v66; // [sp+4Ch] [bp-24h]@1

  v66 = a1;
  v64 = 0;
  do
  {
    v3 = *(_DWORD *)(a2 + 4 * v64) + a3;
    v4 = *(_BYTE *)v3;
    v5 = *(_BYTE *)(v3 + 15);
    v6 = *(_BYTE *)(v3 + 1);
    v7 = *(_BYTE *)(v3 + 14);
    v8 = *(_BYTE *)(v3 + 2);
    v9 = *(_BYTE *)(v3 + 13);
    v10 = *(_BYTE *)(v3 + 3);
    v11 = *(_BYTE *)(v3 + 12);
    v12 = *(_BYTE *)(v3 + 4);
    v13 = *(_BYTE *)(v3 + 11);
    v14 = *(_BYTE *)(v3 + 5);
    v15 = *(_BYTE *)(v3 + 10);
    v16 = *(_BYTE *)(v3 + 6);
    v17 = *(_BYTE *)(v3 + 9);
    v18 = v17;
    v19 = v16 + v17;
    v20 = *(_BYTE *)(v3 + 7);
    v21 = *(_BYTE *)(v3 + 8);
    v22 = v21;
    v23 = v20 + v21;
    v24 = v23 + v4 + v5;
    v25 = v4 + v5 - v23;
    v26 = v19 + v6 + v7;
    v27 = v6 + v7 - v19;
    v28 = v15 + v14 + v9 + v8;
    v29 = v9 + v8 - (v15 + v14);
    v30 = v10 + v11 + v12 + v13;
    v31 = v10 + v11 - (v12 + v13);
    v32 = v4 - v5;
    v33 = v6 - v7;
    v34 = v8 - v9;
    v35 = v10 - v11;
    v36 = v12 - v13;
    v37 = v14 - v15;
    v38 = v16 - v18;
    *(_DWORD *)v66 = 4 * (v30 + v28 + v24 + v26 - 2048);
    *(_DWORD *)(v66 + 16) = (10703 * (v24 - v30) + 4433 * (v26 - v28) + 1024) >> 11;
    v39 = 11363 * (v25 - v29) + 2260 * (v31 - v27);
    *(_DWORD *)(v66 + 8) = (v39 + 11893 * v27 + 17799 * v29 + 1024) >> 11;
    *(_DWORD *)(v66 + 24) = (v39 + -8697 * v31 - 1730 * v25 + 1024) >> 11;
    v40 = 3363 * (v38 - (v20 - v22)) + 11086 * (v6 - v7 + v32);
    v41 = 8956 * (v32 + v35) + 7350 * (v36 - (v20 - v22));
    v42 = 11529 * (v38 - v37) + 1136 * (v6 - v7 + v34);
    v43 = -5461 * (v33 + v35) - 10217 * (v36 + v38);
    v44 = 3363 * (v37 - v36) + -11086 * (v34 + v35);
    *(_DWORD *)(v66 + 4) = (v41
                          + v40
                          + 5461 * (v37 + v20 - v22)
                          + 10217 * (v32 + v34)
                          + 6387 * (v20 - v22)
                          - 18730 * v32
                          + 1024) >> 11;
    *(_DWORD *)(v66 + 12) = (v42 + v40 + v43 + -13631 * v38 + 589 * v33 + 1024) >> 11;
    *(_DWORD *)(v66 + 20) = (v44 + v42
                                 + 5461 * (v37 + v20 - v22)
                                 + 10217 * (v32 + v34)
                                 + 10055 * v37
                                 - 9222 * v34
                                 + 1024) >> 11;
    *(_DWORD *)(v66 + 28) = (v44 + v41 + v43 + 17760 * v36 + 8728 * v35 + 1024) >> 11;
    v66 += 32;
    ++v64;
  }
  while ( v64 != 8 );
  result = a1;
  v65 = 7;
  do
  {
    v46 = *(_DWORD *)result + *(_DWORD *)(result + 224);
    v47 = *(_DWORD *)(result + 32) + *(_DWORD *)(result + 192);
    v48 = *(_DWORD *)(result + 64) + *(_DWORD *)(result + 160);
    v49 = *(_DWORD *)(result + 96) + *(_DWORD *)(result + 128);
    v50 = v49 + v46;
    v51 = v46 - v49;
    v52 = v48 + v47;
    v53 = v47 - v48;
    v54 = *(_DWORD *)result - *(_DWORD *)(result + 224);
    v55 = *(_DWORD *)(result + 32) - *(_DWORD *)(result + 192);
    v56 = *(_DWORD *)(result + 64) - *(_DWORD *)(result + 160);
    v57 = *(_DWORD *)(result + 96) - *(_DWORD *)(result + 128);
    *(_DWORD *)result = (v50 + v52 + 4) >> 3;
    *(_DWORD *)(result + 128) = (v50 + 4 - v52) >> 3;
    v58 = 4433 * (v53 + v51);
    *(_DWORD *)(result + 64) = (v58 + 6270 * v51 + 0x8000) >> 16;
    *(_DWORD *)(result + 192) = (v58 + -15137 * v53 + 0x8000) >> 16;
    v59 = -7373 * (v54 + v57);
    v60 = -20995 * (v56 + v55);
    v61 = 9633 * (v55 + v57 + v56 + v54);
    v62 = v61 + -3196 * (v56 + v54);
    v63 = v61 - 16069 * (v55 + v57);
    *(_DWORD *)(result + 32) = (v62 + v59 + 12299 * v54 + 0x8000) >> 16;
    *(_DWORD *)(result + 96) = (v63 + v60 + 25172 * v55 + 0x8000) >> 16;
    *(_DWORD *)(result + 160) = (v62 + v60 + 16819 * v56 + 0x8000) >> 16;
    *(_DWORD *)(result + 224) = (v63 + v59 + 2446 * v57 + 0x8000) >> 16;
    result += 4;
    --v65;
  }
  while ( v65 != -1 );
  return result;
}
