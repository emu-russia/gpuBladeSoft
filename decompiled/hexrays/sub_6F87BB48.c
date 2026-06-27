int __cdecl sub_6F87BB48(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // esi@2
  int v5; // ST00_4@2
  int v6; // ST30_4@2
  int v7; // ST28_4@2
  int v8; // ecx@2
  int v9; // ST20_4@2
  int v10; // ecx@2
  int v11; // ST24_4@2
  int v12; // ST18_4@2
  int v13; // ST14_4@2
  int v14; // ST2C_4@2
  int v15; // ST10_4@2
  int v16; // ST34_4@2
  int v17; // esi@2
  int v18; // ST0C_4@2
  int v19; // esi@2
  int v20; // ST08_4@2
  int v21; // ebx@2
  int v22; // ST04_4@2
  int v23; // ecx@2
  int v24; // edx@2
  int v25; // ST28_4@2
  int v26; // ST24_4@2
  int v27; // ST2C_4@2
  int v28; // ST34_4@2
  int v29; // ST30_4@2
  int v30; // ebx@2
  int v31; // ecx@2
  int result; // eax@3
  int v33; // edx@4
  int v34; // edi@4
  int v35; // ebx@4
  int v36; // ecx@4
  int v37; // edx@4
  int v38; // ST30_4@4
  int v39; // edi@4
  int v40; // ebx@4
  int v41; // [sp+1Ch] [bp-28h]@1
  signed int v42; // [sp+2Ch] [bp-18h]@3

  memset((void *)(a1 + 160), 0, 0x60u);
  v3 = a1;
  v41 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + 4 * v41) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 9);
    v7 = *(_BYTE *)(v4 + 1);
    v8 = *(_BYTE *)(v4 + 8);
    v9 = v8;
    v10 = v7 + v8;
    v11 = *(_BYTE *)(v4 + 2);
    v12 = *(_BYTE *)(v4 + 7);
    v13 = v11 + v12;
    v14 = *(_BYTE *)(v4 + 3);
    v15 = *(_BYTE *)(v4 + 6);
    v16 = *(_BYTE *)(v4 + 4);
    v17 = *(_BYTE *)(v4 + 5);
    v18 = v17;
    v19 = v16 + v17;
    v20 = v19 + v6 + v5;
    v21 = v6 + v5 - v19;
    v22 = v15 + v14 + v10;
    v23 = v10 - (v15 + v14);
    v24 = v5 - v6;
    v25 = v7 - v9;
    v26 = v11 - v12;
    v27 = v14 - v15;
    v28 = v16 - v18;
    *(_DWORD *)v3 = 4 * (v13 + v20 - 1280 + v22);
    *(_DWORD *)(v3 + 16) = (9373 * (v20 - 2 * v13) + 3580 * (2 * v13 - v22) + 1024) >> 11;
    v29 = 6810 * (v23 + v21);
    *(_DWORD *)(v3 + 8) = (v29 + 4209 * v21 + 1024) >> 11;
    *(_DWORD *)(v3 + 24) = (v29 + -17828 * v23 + 1024) >> 11;
    *(_DWORD *)(v3 + 20) = 4 * (v24 + v28 - (v25 - v27) - v26);
    *(_DWORD *)(v3 + 4) = (10323 * v25 + (v26 << 13) + 11443 * v24 + 1024 + 1812 * v28 + 5260 * v27) >> 11;
    v30 = 2531 * (v24 + v28 + v25 - v27) + ((v25 - v27) << 12) - (v26 << 13);
    v31 = -4815 * (v27 + v25) + 7791 * (v24 - v28) + 1024;
    *(_DWORD *)(v3 + 12) = (v31 + v30) >> 11;
    *(_DWORD *)(v3 + 28) = (v31 - v30) >> 11;
    v3 += 32;
    ++v41;
  }
  while ( v41 != 5 );
  result = a1;
  v42 = 8;
  do
  {
    v33 = *(_DWORD *)(result + 128);
    v34 = v33 + *(_DWORD *)result;
    v35 = *(_DWORD *)(result + 32) + *(_DWORD *)(result + 96);
    v36 = *(_DWORD *)result - v33;
    v37 = *(_DWORD *)(result + 32) - *(_DWORD *)(result + 96);
    *(_DWORD *)result = (10486 * (v35 + v34 + *(_DWORD *)(result + 64)) + 0x4000) >> 15;
    v38 = 8290 * (v34 - v35);
    v39 = 3707 * (v35 + v34 - 4 * *(_DWORD *)(result + 64));
    *(_DWORD *)(result + 64) = (v38 + v39 + 0x4000) >> 15;
    *(_DWORD *)(result + 128) = (v38 + 0x4000 - v39) >> 15;
    v40 = 8716 * (v37 + v36);
    *(_DWORD *)(result + 32) = (v40 + 5387 * v36 + 0x4000) >> 15;
    *(_DWORD *)(result + 96) = (v40 + -22820 * v37 + 0x4000) >> 15;
    result += 4;
    --v42;
  }
  while ( v42 );
  return result;
}
