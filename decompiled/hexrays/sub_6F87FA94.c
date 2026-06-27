int *__cdecl sub_6F87FA94(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // eax@1
  int v6; // ST18_4@2
  int v7; // ecx@2
  int v8; // edx@2
  int v9; // ebx@2
  int v10; // ST30_4@2
  int v11; // ST28_4@2
  int v12; // ST10_4@2
  int v13; // ST20_4@2
  int v14; // ST1C_4@2
  int v15; // ST28_4@2
  int v16; // ST30_4@2
  int v17; // esi@2
  int v18; // ecx@2
  int v19; // ST08_4@2
  int v20; // ST14_4@2
  int v21; // edi@2
  int v22; // ST0C_4@2
  int v23; // esi@2
  int v24; // ebx@2
  int v25; // ecx@2
  int *result; // eax@3
  int v27; // ebx@3
  int v28; // ecx@4
  int v29; // ST20_4@4
  int v30; // edx@4
  int v31; // ST24_4@4
  int v32; // ST30_4@4
  int v33; // ST0C_4@4
  int v34; // ST2C_4@4
  int v35; // esi@4
  int v36; // ST30_4@4
  int v37; // ST1C_4@4
  int v38; // edx@4
  int v39; // ST04_4@4
  int v40; // ST28_4@4
  int v41; // ST18_4@4
  int v42; // ST08_4@4
  int v43; // edi@4
  int v44; // esi@4
  int v45; // ST28_4@4
  int v46; // [sp+4h] [bp-10Ch]@1
  _DWORD *v47; // [sp+10h] [bp-100h]@3
  int v48; // [sp+24h] [bp-ECh]@1
  int v49[7]; // [sp+40h] [bp-D0h]@2
  int v50[7]; // [sp+5Ch] [bp-B4h]@2
  int v51[7]; // [sp+78h] [bp-98h]@2
  int v52[7]; // [sp+94h] [bp-7Ch]@2
  int v53[7]; // [sp+B0h] [bp-60h]@2
  int v54[7]; // [sp+CCh] [bp-44h]@2
  int v55[7]; // [sp+E8h] [bp-28h]@2
  char v56; // [sp+104h] [bp-Ch]@4

  v46 = *(_DWORD *)(a1 + 292) + 128;
  v48 = *(_DWORD *)(a2 + 84);
  v5 = 0;
  do
  {
    v6 = (*(_DWORD *)(v48 + 4 * v5) * *(_WORD *)(a3 + 2 * v5) << 13) + 1024;
    v7 = *(_DWORD *)(v48 + 4 * v5 + 64) * *(_WORD *)(a3 + 2 * v5 + 32);
    v8 = *(_DWORD *)(v48 + 4 * v5 + 128) * *(_WORD *)(a3 + 2 * v5 + 64);
    v9 = *(_DWORD *)(v48 + 4 * v5 + 192) * *(_WORD *)(a3 + 2 * v5 + 96);
    v10 = 7223 * (v8 - v9);
    v11 = 2578 * (v7 - v8);
    v12 = v11 + v6 - 15083 * v8 + v10;
    v13 = v9 + v7;
    v14 = v6 + 10438 * (v9 + v7) + v10 - 637 * v9;
    v15 = v11 + v6 + 10438 * (v9 + v7) - 20239 * v7;
    v16 = *(_DWORD *)(v48 + 4 * v5 + 32) * *(_WORD *)(a3 + 2 * v5 + 16);
    v17 = *(_DWORD *)(v48 + 4 * v5 + 96) * *(_WORD *)(a3 + 2 * v5 + 48);
    v18 = *(_DWORD *)(v48 + 4 * v5 + 160) * *(_WORD *)(a3 + 2 * v5 + 80);
    v19 = 7663 * (v17 + v16);
    v20 = 1395 * (v16 - v17);
    v21 = -11295 * (v18 + v17);
    v22 = v20 + v21 + 7663 * (v17 + v16);
    v23 = 5027 * (v18 + v16);
    v24 = v23 + v19 - v20;
    v25 = v23 + v21 + 15326 * v18;
    v49[v5] = (v24 + v14) >> 11;
    v55[v5] = (v14 - v24) >> 11;
    v50[v5] = (v22 + v12) >> 11;
    v54[v5] = (v12 - v22) >> 11;
    v51[v5] = (v25 + v15) >> 11;
    v53[v5] = (v15 - v25) >> 11;
    v52[v5++] = (v6 + 11585 * (v8 - v13)) >> 11;
  }
  while ( v5 != 7 );
  v47 = a4;
  result = v49;
  v27 = v46;
  do
  {
    v28 = *v47 + a5;
    v29 = (*result + 16) << 13;
    v30 = result[2];
    v31 = result[4];
    v32 = 7223 * (v31 - result[6]);
    v33 = 2578 * (v30 - v31) + v29 - 15083 * v31 + v32;
    v34 = v30 + result[6];
    v35 = v29 + 10438 * v34;
    v36 = v35 + v32 - 637 * result[6];
    v37 = v35 + 2578 * (v30 - v31) - 20239 * v30;
    v38 = result[5];
    v39 = 7663 * (result[1] + result[3]);
    v40 = 1395 * (result[1] - result[3]);
    v41 = -11295 * (v38 + result[3]);
    v42 = v40 + v41 + v39;
    v43 = 5027 * (v38 + result[1]);
    v44 = v43 + v39 - v40;
    v45 = v41 + v43 + 15326 * v38;
    *(_BYTE *)v28 = *(_BYTE *)(v27 + (((v44 + v36) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 6) = *(_BYTE *)(v27 + (((v36 - v44) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 1) = *(_BYTE *)(v27 + (((v42 + v33) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 5) = *(_BYTE *)(v27 + (((v33 - v42) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 2) = *(_BYTE *)(v27 + (((v45 + v37) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 4) = *(_BYTE *)(v27 + (((v37 - v45) >> 18) & 0x3FF));
    *(_BYTE *)(v28 + 3) = *(_BYTE *)(v27 + (((v29 + 11585 * (v31 - v34)) >> 18) & 0x3FF));
    result += 7;
    ++v47;
  }
  while ( (char *)result != &v56 );
  return result;
}
