char *__cdecl sub_6F889E2C(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // ecx@1
  char *v6; // edx@1
  int v7; // ST38_4@2
  int v8; // eax@2
  int v9; // ebx@2
  int v10; // ST3C_4@2
  int v11; // ST30_4@2
  int v12; // ST2C_4@2
  int v13; // ebx@2
  int v14; // eax@2
  int v15; // ST40_4@2
  int v16; // esi@2
  int v17; // eax@2
  int v18; // ST24_4@2
  int v19; // ST3C_4@2
  int v20; // ST20_4@2
  int v21; // ST30_4@2
  int v22; // eax@2
  int v23; // edi@2
  int v24; // ST34_4@2
  int v25; // esi@2
  int v26; // ebx@2
  int v27; // ST40_4@2
  int v28; // ST38_4@2
  int v29; // ST18_4@2
  int v30; // ST28_4@2
  int v31; // edi@2
  int v32; // ST1C_4@2
  int v33; // ST40_4@2
  int v34; // ebx@2
  int v35; // edi@2
  char *result; // eax@3
  int v37; // ebx@4
  int v38; // ST40_4@4
  int v39; // ecx@4
  int v40; // edx@4
  int v41; // ST3C_4@4
  int v42; // ST2C_4@4
  int v43; // ST34_4@4
  int v44; // ecx@4
  int v45; // ST38_4@4
  int v46; // ST44_4@4
  int v47; // ecx@4
  int v48; // [sp+Ch] [bp-118h]@1
  int v49; // [sp+10h] [bp-114h]@1
  _DWORD *v50; // [sp+30h] [bp-F4h]@3
  int v51; // [sp+44h] [bp-E0h]@1
  char v52; // [sp+50h] [bp-D4h]@1
  char v53; // [sp+118h] [bp-Ch]@4

  v5 = *(_DWORD *)(a2 + 84);
  v49 = v5 + 20;
  v51 = a3;
  v6 = &v52;
  v48 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v7 = (*(_DWORD *)v5 * *(_WORD *)v51 << 13) + 1024;
    v8 = *(_DWORD *)(v5 + 128) * *(_WORD *)(v51 + 64);
    v9 = 3580 * v8;
    v10 = 9373 * v8 + v7;
    v11 = v7 - v9;
    v12 = (v7 - 2 * (9373 * v8 - v9)) >> 11;
    v13 = *(_DWORD *)(v5 + 64) * *(_WORD *)(v51 + 32);
    v14 = *(_DWORD *)(v5 + 192) * *(_WORD *)(v51 + 96);
    v15 = 6810 * (v14 + v13);
    v16 = v15 + 4209 * v13;
    v17 = v15 - 17828 * v14;
    v18 = v16 + v10;
    v19 = v10 - v16;
    v20 = v17 + v11;
    v21 = v11 - v17;
    v22 = *(_DWORD *)(v5 + 32) * *(_WORD *)(v51 + 16);
    v23 = *(_DWORD *)(v5 + 96) * *(_WORD *)(v51 + 48);
    v24 = *(_DWORD *)(v5 + 160) * *(_WORD *)(v51 + 80);
    v25 = *(_DWORD *)(v5 + 224) * *(_WORD *)(v51 + 112);
    v26 = v25 + v23;
    v27 = v23 - v25;
    v28 = (v24 << 13) + 2531 * (v23 - v25);
    v29 = v28 + 7791 * (v25 + v23) + 11443 * v22;
    v30 = v28 - 7791 * (v25 + v23) + 1812 * v22;
    v31 = 4815 * v26;
    v32 = (v24 << 13) - 2531 * v27 - (v27 << 12);
    v33 = 4 * (v22 - v27 - v24);
    v34 = 10323 * v22 - 4815 * v26 - v32;
    v35 = 5260 * v22 - v31 + v32;
    *(_DWORD *)v6 = (v18 + v29) >> 11;
    *((_DWORD *)v6 + 45) = (v18 - v29) >> 11;
    *((_DWORD *)v6 + 5) = (v34 + v20) >> 11;
    *((_DWORD *)v6 + 40) = (v20 - v34) >> 11;
    *((_DWORD *)v6 + 10) = v33 + v12;
    *((_DWORD *)v6 + 35) = v12 - v33;
    *((_DWORD *)v6 + 15) = (v35 + v21) >> 11;
    *((_DWORD *)v6 + 30) = (v21 - v35) >> 11;
    *((_DWORD *)v6 + 20) = (v19 + v30) >> 11;
    *((_DWORD *)v6 + 25) = (v19 - v30) >> 11;
    v51 += 2;
    v5 += 4;
    v6 += 4;
  }
  while ( v5 != v49 );
  v50 = a4;
  result = &v52;
  do
  {
    v37 = *v50 + a5;
    v38 = (*(_DWORD *)result + 16) << 13;
    v39 = *((_DWORD *)result + 2);
    v40 = 6476 * (v39 + *((_DWORD *)result + 4));
    v41 = 2896 * (v39 - *((_DWORD *)result + 4));
    v42 = v41 + v38 + v40;
    v43 = v41 + v38 - v40;
    v44 = *((_DWORD *)result + 3);
    v45 = 6810 * (v44 + *((_DWORD *)result + 1));
    v46 = v45 + 4209 * *((_DWORD *)result + 1);
    v47 = v45 - 17828 * v44;
    *(_BYTE *)v37 = *(_BYTE *)(v48 + (((v46 + v42) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 4) = *(_BYTE *)(v48 + (((v42 - v46) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 1) = *(_BYTE *)(v48 + (((v47 + v43) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 3) = *(_BYTE *)(v48 + (((v43 - v47) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 2) = *(_BYTE *)(v48 + (((v38 - 4 * v41) >> 18) & 0x3FF));
    result += 20;
    ++v50;
  }
  while ( result != &v53 );
  return result;
}
