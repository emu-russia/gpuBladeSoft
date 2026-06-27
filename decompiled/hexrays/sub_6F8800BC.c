int __cdecl sub_6F8800BC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // ebx@1
  int v6; // eax@1
  char *v7; // edx@1
  int v8; // ST20_4@2
  int v9; // esi@2
  int v10; // ST24_4@2
  int v11; // ST20_4@2
  int v12; // esi@2
  int v13; // ST10_4@2
  int v14; // ST24_4@2
  int v15; // ST00_4@2
  int v16; // ST18_4@2
  int v17; // esi@2
  int v18; // ST14_4@2
  int v19; // esi@2
  int v20; // ST0C_4@2
  int v21; // ST1C_4@2
  int v22; // esi@2
  int result; // eax@4
  int v24; // edi@4
  int v25; // ebx@4
  int v26; // esi@4
  int v27; // ST20_4@4
  int v28; // ebx@4
  int v29; // ST1C_4@4
  int v30; // ST10_4@4
  int v31; // ebx@4
  int v32; // edi@4
  int v33; // ST0C_4@4
  int v34; // edi@4
  int v35; // ST24_4@4
  int v36; // [sp+8h] [bp-BCh]@1
  _DWORD *v37; // [sp+14h] [bp-B0h]@3
  char v38[144]; // [sp+28h] [bp-9Ch]@1
  char v39; // [sp+B8h] [bp-Ch]@4

  v5 = *(_DWORD *)(a2 + 84);
  v6 = 0;
  v7 = v38;
  v36 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v8 = (*(_DWORD *)(v5 + 4 * v6) * *(_WORD *)(a3 + 2 * v6) << 13) + 1024;
    v9 = *(_WORD *)(a3 + 2 * v6 + 64) * 5793 * *(_DWORD *)(v5 + 4 * v6 + 128);
    v10 = v9 + v8;
    v11 = (v8 - v9 - v9) >> 11;
    v12 = *(_WORD *)(a3 + 2 * v6 + 32) * 10033 * *(_DWORD *)(v5 + 4 * v6 + 64);
    v13 = v12 + v10;
    v14 = v10 - v12;
    v15 = *(_DWORD *)(v5 + 4 * v6 + 32) * *(_WORD *)(a3 + 2 * v6 + 16);
    v16 = *(_DWORD *)(v5 + 4 * v6 + 96) * *(_WORD *)(a3 + 2 * v6 + 48);
    v17 = *(_DWORD *)(v5 + 4 * v6 + 160) * *(_WORD *)(a3 + 2 * v6 + 80);
    v18 = v17;
    v19 = 2998 * (v15 + v17);
    v20 = v19 + ((v15 + v16) << 13);
    v21 = v19 + ((v18 - v16) << 13);
    v22 = 4 * (v15 - v16 - v18);
    *(_DWORD *)&v38[4 * v6] = (v20 + v13) >> 11;
    *(_DWORD *)&v38[4 * v6 + 120] = (v13 - v20) >> 11;
    *(_DWORD *)&v38[4 * v6 + 24] = v22 + v11;
    *(_DWORD *)&v38[4 * v6 + 96] = v11 - v22;
    *(_DWORD *)&v38[4 * v6 + 48] = (v21 + v14) >> 11;
    *(_DWORD *)&v38[4 * v6++ + 72] = (v14 - v21) >> 11;
  }
  while ( v6 != 6 );
  v37 = a4;
  do
  {
    result = *v37 + a5;
    v24 = (*(_DWORD *)v7 + 16) << 13;
    v25 = 5793 * *((_DWORD *)v7 + 4);
    v26 = v24 + v25;
    v27 = v24 - v25 - v25;
    v28 = 10033 * *((_DWORD *)v7 + 2);
    v29 = v26 + v28;
    v30 = v26 - v28;
    v31 = *((_DWORD *)v7 + 1);
    v32 = 2998 * (v31 + *((_DWORD *)v7 + 5));
    v33 = v32 + ((v31 + *((_DWORD *)v7 + 3)) << 13);
    v34 = ((*((_DWORD *)v7 + 5) - *((_DWORD *)v7 + 3)) << 13) + v32;
    v35 = (v31 - *((_DWORD *)v7 + 3) - *((_DWORD *)v7 + 5)) << 13;
    *(_BYTE *)result = *(_BYTE *)(v36 + (((v33 + v29) >> 18) & 0x3FF));
    *(_BYTE *)(result + 5) = *(_BYTE *)(v36 + (((v29 - v33) >> 18) & 0x3FF));
    *(_BYTE *)(result + 1) = *(_BYTE *)(v36 + (((v35 + v27) >> 18) & 0x3FF));
    *(_BYTE *)(result + 4) = *(_BYTE *)(v36 + (((v27 - v35) >> 18) & 0x3FF));
    *(_BYTE *)(result + 2) = *(_BYTE *)(v36 + (((v34 + v30) >> 18) & 0x3FF));
    *(_BYTE *)(result + 3) = *(_BYTE *)(v36 + (((v30 - v34) >> 18) & 0x3FF));
    v7 += 24;
    ++v37;
  }
  while ( v7 != &v39 );
  return result;
}
