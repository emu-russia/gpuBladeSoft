int __cdecl sub_6F8753E4(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // edx@2
  int v5; // ST18_4@2
  int v6; // edi@2
  int v7; // ST2C_4@2
  int v8; // edi@2
  int v9; // ST24_4@2
  int v10; // ebx@2
  int v11; // ST28_4@2
  int v12; // ebx@2
  int v13; // ST20_4@2
  int v14; // ST1C_4@2
  int v15; // ecx@2
  int v16; // edx@2
  int v17; // ST0C_4@2
  int v18; // edx@2
  int v19; // ST08_4@2
  int v20; // ST00_4@2
  int v21; // edi@2
  int v22; // ebx@2
  int v23; // ST18_4@2
  int v24; // ST24_4@2
  int v25; // edx@2
  int v26; // ecx@2
  int v27; // edi@2
  int v28; // ST14_4@2
  int v29; // ebx@2
  int v30; // edi@2
  int v31; // ST2C_4@2
  int v32; // ST20_4@2
  int result; // eax@3
  int v34; // ebx@4
  int v35; // ecx@4
  int v36; // edx@4
  int v37; // esi@4
  int v38; // edi@4
  int v39; // ebx@4
  int v40; // ST08_4@4
  int v41; // ecx@4
  int v42; // ST18_4@4
  int v43; // ST2C_4@4
  int v44; // edx@4
  int v45; // ST24_4@4
  int v46; // edi@4
  int v47; // edi@4
  int v48; // ebx@4
  int v49; // esi@4
  int v50; // ST28_4@4
  int v51; // ST1C_4@4
  int v52; // [sp+10h] [bp-2Ch]@1
  signed int v53; // [sp+14h] [bp-28h]@3

  v3 = a1;
  v52 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + 4 * v52) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 7);
    v7 = v6;
    v8 = v5 + v6;
    v9 = *(_BYTE *)(v4 + 1);
    v10 = *(_BYTE *)(v4 + 6);
    v11 = v10;
    v12 = v9 + v10;
    v13 = *(_BYTE *)(v4 + 2);
    v14 = *(_BYTE *)(v4 + 5);
    v15 = *(_BYTE *)(v4 + 3);
    v16 = *(_BYTE *)(v4 + 4);
    v17 = v16;
    v18 = v15 + v16;
    v19 = v18 + v8;
    v20 = v8 - v18;
    v21 = v14 + v13 + v12;
    v22 = v12 - (v14 + v13);
    v23 = v5 - v7;
    v24 = v9 - v11;
    v25 = v13 - v14;
    v26 = v15 - v17;
    *(_DWORD *)v3 = 4 * (v19 + v21 - 1024);
    *(_DWORD *)(v3 + 16) = 4 * (v19 - v21);
    v27 = 4433 * (v22 + v20) + 1024;
    *(_DWORD *)(v3 + 8) = (v27 + 6270 * v20) >> 11;
    *(_DWORD *)(v3 + 24) = (v27 - 15137 * v22) >> 11;
    v28 = -7373 * (v26 + v23);
    v29 = -20995 * (v13 - v14 + v24);
    v30 = 9633 * (v13 - v14 + v23 + v26 + v24) + 1024;
    v31 = v30 + -3196 * (v13 - v14 + v23);
    v32 = v30 - 16069 * (v26 + v24);
    *(_DWORD *)(v3 + 4) = (v31 + v28 + 12299 * v23) >> 11;
    *(_DWORD *)(v3 + 12) = (v32 + v29 + 25172 * v24) >> 11;
    *(_DWORD *)(v3 + 20) = (v31 + 16819 * v25 + v29) >> 11;
    *(_DWORD *)(v3 + 28) = (v32 + v28 + 2446 * v26) >> 11;
    v3 += 32;
    ++v52;
  }
  while ( v52 != 8 );
  result = a1;
  v53 = 7;
  do
  {
    v34 = *(_DWORD *)result + *(_DWORD *)(result + 224);
    v35 = *(_DWORD *)(result + 32) + *(_DWORD *)(result + 192);
    v36 = *(_DWORD *)(result + 64) + *(_DWORD *)(result + 160);
    v37 = *(_DWORD *)(result + 96) + *(_DWORD *)(result + 128);
    v38 = v34 + v37 + 2;
    v39 = v34 - v37;
    v40 = v36 + v35;
    v41 = v35 - v36;
    v42 = *(_DWORD *)result - *(_DWORD *)(result + 224);
    v43 = *(_DWORD *)(result + 32) - *(_DWORD *)(result + 192);
    v44 = *(_DWORD *)(result + 64) - *(_DWORD *)(result + 160);
    v45 = *(_DWORD *)(result + 96) - *(_DWORD *)(result + 128);
    *(_DWORD *)result = (v38 + v40) >> 2;
    *(_DWORD *)(result + 128) = (v38 - v40) >> 2;
    v46 = 4433 * (v41 + v39) + 0x4000;
    *(_DWORD *)(result + 64) = (v46 + 6270 * v39) >> 15;
    *(_DWORD *)(result + 192) = (v46 - 15137 * v41) >> 15;
    v47 = -7373 * (v42 + v45);
    v48 = -20995 * (v44 + v43);
    v49 = 9633 * (v43 + v45 + v44 + v42) + 0x4000;
    v50 = v49 + -3196 * (v44 + v42);
    v51 = v49 - 16069 * (v43 + v45);
    *(_DWORD *)(result + 32) = (v50 + v47 + 12299 * v42) >> 15;
    *(_DWORD *)(result + 96) = (v51 + v48 + 25172 * v43) >> 15;
    *(_DWORD *)(result + 160) = (v50 + 16819 * v44 + v48) >> 15;
    *(_DWORD *)(result + 224) = (v51 + v47 + 2446 * v45) >> 15;
    result += 4;
    --v53;
  }
  while ( v53 != -1 );
  return result;
}
