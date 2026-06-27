int __cdecl sub_6F87B6BC(int a1, int a2, int a3)
{
  int v3; // edx@1
  int v4; // eax@2
  int v5; // ST00_4@2
  int v6; // edi@2
  int v7; // ST3C_4@2
  int v8; // edi@2
  int v9; // ST48_4@2
  int v10; // ST34_4@2
  int v11; // ST30_4@2
  int v12; // ST40_4@2
  int v13; // ST2C_4@2
  int v14; // ST28_4@2
  int v15; // ecx@2
  int v16; // ST24_4@2
  int v17; // ecx@2
  int v18; // ST20_4@2
  int v19; // ST1C_4@2
  int v20; // ST14_4@2
  int v21; // eax@2
  int v22; // ST10_4@2
  int v23; // eax@2
  int v24; // ST08_4@2
  int v25; // ST04_4@2
  int v26; // ST44_4@2
  int v27; // ebx@2
  int v28; // ST48_4@2
  int v29; // ST40_4@2
  int v30; // ST3C_4@2
  int v31; // ST4C_4@2
  int v32; // ST44_4@2
  int v33; // ST34_4@2
  int v34; // ST48_4@2
  int result; // eax@3
  int v36; // edx@4
  int v37; // ST34_4@4
  int v38; // edi@4
  int v39; // ebx@4
  int v40; // esi@4
  int v41; // ecx@4
  int v42; // ST48_4@4
  int v43; // ST40_4@4
  int v44; // esi@4
  int v45; // [sp+38h] [bp-24h]@1
  signed int v46; // [sp+4Ch] [bp-10h]@3

  memset((void *)(a1 + 192), 0, 0x40u);
  v3 = a1;
  v45 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + 4 * v45) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 11);
    v7 = v6;
    v8 = v5 + v6;
    v9 = *(_BYTE *)(v4 + 1);
    v10 = *(_BYTE *)(v4 + 10);
    v11 = v9 + v10;
    v12 = *(_BYTE *)(v4 + 2);
    v13 = *(_BYTE *)(v4 + 9);
    v14 = *(_BYTE *)(v4 + 3);
    v15 = *(_BYTE *)(v4 + 8);
    v16 = v15;
    v17 = v14 + v15;
    v18 = *(_BYTE *)(v4 + 4);
    v19 = *(_BYTE *)(v4 + 7);
    v20 = *(_BYTE *)(v4 + 5);
    v21 = *(_BYTE *)(v4 + 6);
    v22 = v21;
    v23 = v20 + v21;
    v24 = v9 + v10 - (v18 + v19);
    v25 = v17 + v13 + v12;
    v26 = v13 + v12 - v17;
    v27 = v5 - v7;
    v28 = v9 - v10;
    v29 = v12 - v13;
    *(_DWORD *)v3 = 4 * (v25 + v11 + v18 + v19 - 1536 + v23 + v8);
    *(_DWORD *)(v3 + 24) = 4 * (v8 - v23 - v24 - v26);
    *(_DWORD *)(v3 + 16) = (10033 * (v23 + v8 - v25) + 1024) >> 11;
    *(_DWORD *)(v3 + 8) = (v24 + 1024 - v26 + 11190 * (v8 - v23 + v26)) >> 11;
    v30 = 4433 * (v18 - v19 + v28) + 6270 * v28;
    v31 = 4433 * (v18 - v19 + v28) - 15137 * (v18 - v19);
    v32 = 9191 * (v27 + v29);
    v33 = 7053 * (v14 - v16 + v27);
    v34 = -1512 * (v14 - v16 + v29);
    *(_DWORD *)(v3 + 4) = (v30 + v33 + v32 + 1512 * (v20 - v22) - 4758 * v27 + 1024) >> 11;
    *(_DWORD *)(v3 + 12) = (10703 * (v27 - (v14 - v16)) + v31 + -4433 * (v20 - v22 + v29) + 1024) >> 11;
    *(_DWORD *)(v3 + 20) = (v34 + v32 + 7053 * (v20 - v22) - 19165 * v29 + 1024 - v31) >> 11;
    *(_DWORD *)(v3 + 28) = (v34 + v33 + -9191 * (v20 - v22) + 5946 * (v14 - v16) + 1024 - v30) >> 11;
    v3 += 32;
    ++v45;
  }
  while ( v45 != 6 );
  result = a1;
  v46 = 7;
  do
  {
    v36 = *(_DWORD *)(result + 160);
    v37 = v36 + *(_DWORD *)result;
    v38 = *(_DWORD *)(result + 32);
    v39 = v38 + *(_DWORD *)(result + 128);
    v40 = *(_DWORD *)(result + 64) + *(_DWORD *)(result + 96);
    v41 = *(_DWORD *)result - v36;
    v42 = v38 - *(_DWORD *)(result + 128);
    v43 = *(_DWORD *)(result + 64) - *(_DWORD *)(result + 96);
    *(_DWORD *)result = (14564 * (v39 + v37 + v40) + 0x8000) >> 16;
    *(_DWORD *)(result + 64) = (17837 * (v37 - v40) + 0x8000) >> 16;
    *(_DWORD *)(result + 128) = (10298 * (v37 + v40 - v39 - v39) + 0x8000) >> 16;
    v44 = 5331 * (v41 + v43);
    *(_DWORD *)(result + 32) = (v44 + 14564 * (v41 + v42) + 0x8000) >> 16;
    *(_DWORD *)(result + 96) = (14564 * (v41 - v42 - v43) + 0x8000) >> 16;
    *(_DWORD *)(result + 160) = (v44 + 14564 * (v43 - v42) + 0x8000) >> 16;
    result += 4;
    --v46;
  }
  while ( v46 != -1 );
  return result;
}
