int __cdecl sub_6F87BEEC(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // edx@2
  int v5; // ST14_4@2
  int v6; // edi@2
  int v7; // ST2C_4@2
  int v8; // edi@2
  int v9; // ST28_4@2
  int v10; // ebx@2
  int v11; // ST24_4@2
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
  int v23; // ST14_4@2
  int v24; // ST28_4@2
  int v25; // edx@2
  int v26; // ecx@2
  int v27; // edi@2
  int v28; // ST18_4@2
  int v29; // ebx@2
  int v30; // edi@2
  int v31; // ST2C_4@2
  int v32; // ST20_4@2
  int result; // eax@3
  int v34; // esi@4
  int v35; // ecx@4
  int v36; // ebx@4
  int v37; // edx@4
  int v38; // edi@4
  int v39; // ebx@4
  int v40; // edx@4
  int v41; // [sp+10h] [bp-2Ch]@1
  signed int v42; // [sp+28h] [bp-14h]@3

  memset((void *)(a1 + 128), 0, 0x80u);
  v3 = a1;
  v41 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + 4 * v41) + a3;
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
    *(_DWORD *)v3 = 8 * (v19 + v21 - 1024);
    *(_DWORD *)(v3 + 16) = 8 * (v19 - v21);
    v27 = 4433 * (v22 + v20) + 512;
    *(_DWORD *)(v3 + 8) = (v27 + 6270 * v20) >> 10;
    *(_DWORD *)(v3 + 24) = (v27 - 15137 * v22) >> 10;
    v28 = -7373 * (v26 + v23);
    v29 = -20995 * (v13 - v14 + v24);
    v30 = 9633 * (v13 - v14 + v23 + v26 + v24) + 512;
    v31 = v30 + -3196 * (v13 - v14 + v23);
    v32 = v30 - 16069 * (v26 + v24);
    *(_DWORD *)(v3 + 4) = (v31 + v28 + 12299 * v23) >> 10;
    *(_DWORD *)(v3 + 12) = (v32 + v29 + 25172 * v24) >> 10;
    *(_DWORD *)(v3 + 20) = (v31 + 16819 * v25 + v29) >> 10;
    *(_DWORD *)(v3 + 28) = (v32 + v28 + 2446 * v26) >> 10;
    v3 += 32;
    ++v41;
  }
  while ( v41 != 4 );
  result = a1;
  v42 = 7;
  do
  {
    v34 = *(_DWORD *)(result + 96);
    v35 = *(_DWORD *)result + v34 + 2;
    v36 = *(_DWORD *)(result + 32);
    v37 = v36 + *(_DWORD *)(result + 64);
    v38 = *(_DWORD *)result - v34;
    v39 = v36 - *(_DWORD *)(result + 64);
    *(_DWORD *)result = (v35 + v37) >> 2;
    *(_DWORD *)(result + 64) = (v35 - v37) >> 2;
    v40 = 4433 * (v39 + v38) + 0x4000;
    *(_DWORD *)(result + 32) = (v40 + 6270 * v38) >> 15;
    *(_DWORD *)(result + 96) = (v40 - 15137 * v39) >> 15;
    result += 4;
    --v42;
  }
  while ( v42 != -1 );
  return result;
}
