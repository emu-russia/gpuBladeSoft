char *__cdecl sub_6F889844(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  char *v5; // edx@1
  int v6; // ecx@2
  int v7; // eax@2
  int v8; // esi@2
  int v9; // ST30_4@2
  int v10; // eax@2
  int v11; // ST3C_4@2
  int v12; // ST48_4@2
  int v13; // eax@2
  int v14; // ST28_4@2
  int v15; // ST24_4@2
  int v16; // ST20_4@2
  int v17; // ST1C_4@2
  int v18; // ebx@2
  int v19; // ST18_4@2
  int v20; // ST30_4@2
  int v21; // ecx@2
  int v22; // ebx@2
  int v23; // ST00_4@2
  int v24; // eax@2
  int v25; // ST2C_4@2
  int v26; // ST3C_4@2
  int v27; // ST14_4@2
  int v28; // ST3C_4@2
  int v29; // ST48_4@2
  int v30; // edi@2
  int v31; // ecx@2
  int v32; // ebx@2
  int v33; // esi@2
  int v34; // ecx@2
  int v35; // esi@2
  char *result; // eax@3
  int v37; // edx@4
  int v38; // edi@4
  int v39; // ecx@4
  int v40; // esi@4
  int v41; // ST40_4@4
  int v42; // ecx@4
  int v43; // ST30_4@4
  int v44; // ST3C_4@4
  int v45; // ecx@4
  int v46; // edi@4
  int v47; // ST34_4@4
  int v48; // edi@4
  int v49; // ST48_4@4
  int v50; // [sp+8h] [bp-170h]@1
  int v51; // [sp+Ch] [bp-16Ch]@1
  _DWORD *v52; // [sp+38h] [bp-140h]@3
  int v53; // [sp+40h] [bp-138h]@1
  int v54; // [sp+44h] [bp-134h]@1
  char v55; // [sp+4Ch] [bp-12Ch]@1
  char v56; // [sp+16Ch] [bp-Ch]@4

  v53 = *(_DWORD *)(a2 + 84);
  v51 = v53 + 24;
  v54 = a3;
  v5 = &v55;
  v50 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = (*(_DWORD *)v53 * *(_WORD *)v54 << 13) + 1024;
    v7 = *(_WORD *)(v54 + 64) * 10033 * *(_DWORD *)(v53 + 128);
    v8 = v6 + v7;
    v9 = v6 - v7;
    v10 = *(_DWORD *)(v53 + 64) * *(_WORD *)(v54 + 32);
    v11 = 11190 * v10;
    v12 = v10 << 13;
    v13 = *(_DWORD *)(v53 + 192) * *(_WORD *)(v54 + 96) << 13;
    v14 = v12 - v13 + v6;
    v15 = v6 - (v12 - v13);
    v16 = v8 + v13 + v11;
    v17 = v8 - (v13 + v11);
    v18 = v11 - v12 - v13;
    v19 = v18 + v9;
    v20 = v9 - v18;
    v21 = *(_DWORD *)(v53 + 32) * *(_WORD *)(v54 + 16);
    v22 = *(_DWORD *)(v53 + 96) * *(_WORD *)(v54 + 48);
    v23 = *(_DWORD *)(v53 + 160) * *(_WORD *)(v54 + 80);
    v24 = *(_DWORD *)(v53 + 224) * *(_WORD *)(v54 + 112);
    v25 = 7053 * (v24 + v21 + v23);
    v26 = 2139 * (v21 + v23) + v25;
    v27 = v26 + 2295 * v21 + 10703 * v22;
    v28 = v26 + -4433 * v22 - 12112 * v23 + -8565 * (v24 + v23);
    v29 = v25 + -8565 * (v24 + v23) - 10703 * v22 + 12998 * v24;
    v30 = -4433 * v22 - 5540 * v21 - 16244 * v24 + v25;
    v31 = v21 - v24;
    v32 = v22 - v23;
    v33 = 4433 * (v32 + v31);
    v34 = v33 + 6270 * v31;
    v35 = v33 - 15137 * v32;
    *(_DWORD *)v5 = (v16 + v27) >> 11;
    *((_DWORD *)v5 + 66) = (v16 - v27) >> 11;
    *((_DWORD *)v5 + 6) = (v34 + v14) >> 11;
    *((_DWORD *)v5 + 60) = (v14 - v34) >> 11;
    *((_DWORD *)v5 + 12) = (v19 + v28) >> 11;
    *((_DWORD *)v5 + 54) = (v19 - v28) >> 11;
    *((_DWORD *)v5 + 18) = (v20 + v29) >> 11;
    *((_DWORD *)v5 + 48) = (v20 - v29) >> 11;
    *((_DWORD *)v5 + 24) = (v35 + v15) >> 11;
    *((_DWORD *)v5 + 42) = (v15 - v35) >> 11;
    *((_DWORD *)v5 + 30) = (v30 + v17) >> 11;
    *((_DWORD *)v5 + 36) = (v17 - v30) >> 11;
    v54 += 2;
    v53 += 4;
    v5 += 4;
  }
  while ( v53 != v51 );
  v52 = a4;
  result = &v55;
  do
  {
    v37 = *v52 + a5;
    v38 = (*(_DWORD *)result + 16) << 13;
    v39 = 5793 * *((_DWORD *)result + 4);
    v40 = v38 + v39;
    v41 = v38 - v39 - v39;
    v42 = 10033 * *((_DWORD *)result + 2);
    v43 = v40 + v42;
    v44 = v40 - v42;
    v45 = *((_DWORD *)result + 1);
    v46 = 2998 * (v45 + *((_DWORD *)result + 5));
    v47 = v46 + ((v45 + *((_DWORD *)result + 3)) << 13);
    v48 = ((*((_DWORD *)result + 5) - *((_DWORD *)result + 3)) << 13) + v46;
    v49 = (v45 - *((_DWORD *)result + 3) - *((_DWORD *)result + 5)) << 13;
    *(_BYTE *)v37 = *(_BYTE *)(v50 + (((v47 + v43) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 5) = *(_BYTE *)(v50 + (((v43 - v47) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 1) = *(_BYTE *)(v50 + (((v49 + v41) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 4) = *(_BYTE *)(v50 + (((v41 - v49) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 2) = *(_BYTE *)(v50 + (((v48 + v44) >> 18) & 0x3FF));
    *(_BYTE *)(v37 + 3) = *(_BYTE *)(v50 + (((v44 - v48) >> 18) & 0x3FF));
    result += 24;
    ++v52;
  }
  while ( result != &v56 );
  return result;
}
