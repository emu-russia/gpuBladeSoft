int __cdecl sub_6F875178(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ebx@2
  int v5; // esi@2
  int v6; // ecx@2
  int v7; // edx@2
  int v8; // ST14_4@2
  int v9; // edi@2
  int v10; // ecx@2
  int v11; // ST10_4@2
  int v12; // ST0C_4@2
  int v13; // edi@2
  int v14; // esi@2
  int v15; // ecx@2
  int v16; // ST08_4@2
  int v17; // ST04_4@2
  int v18; // ebx@2
  int v19; // ST00_4@2
  int v20; // ebx@2
  int v21; // esi@2
  int v22; // edx@2
  int v23; // ecx@2
  int v24; // edx@2
  int v25; // esi@2
  int v26; // edx@2
  int v27; // ecx@2
  int result; // eax@3
  int v29; // ecx@4
  int v30; // edx@4
  int v31; // ST18_4@4
  int v32; // edi@4
  int v33; // ebx@4
  int v34; // ST08_4@4
  int v35; // ST10_4@4
  int v36; // edi@4
  int v37; // esi@4
  int v38; // ebx@4
  int v39; // ST0C_4@4
  int v40; // esi@4
  int v41; // ST04_4@4
  int v42; // esi@4
  int v43; // edi@4
  int v44; // edx@4
  int v45; // ecx@4
  int v46; // edx@4
  int v47; // esi@4
  int v48; // ecx@4
  int v49; // edx@4
  signed int v50; // [sp+14h] [bp-14h]@3
  int v51; // [sp+18h] [bp-10h]@1

  v3 = a1;
  v51 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + 4 * v51) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 7);
    v7 = v6 + v5;
    v8 = v5 - v6;
    v9 = *(_BYTE *)(v4 + 1);
    v10 = *(_BYTE *)(v4 + 6);
    v11 = v10 + v9;
    v12 = v9 - v10;
    v13 = *(_BYTE *)(v4 + 2);
    v14 = *(_BYTE *)(v4 + 5);
    v15 = v14 + v13;
    v16 = v13 - v14;
    v17 = *(_BYTE *)(v4 + 3);
    v18 = *(_BYTE *)(v4 + 4);
    v19 = v18;
    v20 = v17 + v18;
    v21 = v20 + v7;
    v22 = v7 - v20;
    *(_DWORD *)v3 = v21 + v15 + v11 - 1024;
    *(_DWORD *)(v3 + 16) = v21 - (v15 + v11);
    v23 = 181 * (v22 - v15 + v11) >> 8;
    *(_DWORD *)(v3 + 8) = v23 + v22;
    *(_DWORD *)(v3 + 24) = v22 - v23;
    v24 = 98 * (v17 + v16 - v19 - (v8 + v12)) >> 8;
    v25 = v24 + (139 * (v17 + v16 - v19) >> 8);
    v26 = (334 * (v8 + v12) >> 8) + v24;
    v27 = 181 * (v12 + v16) >> 8;
    *(_DWORD *)(v3 + 20) = v25 + v8 - v27;
    *(_DWORD *)(v3 + 12) = v8 - v27 - v25;
    *(_DWORD *)(v3 + 4) = v26 + v27 + v8;
    *(_DWORD *)(v3 + 28) = v27 + v8 - v26;
    v3 += 32;
    ++v51;
  }
  while ( v51 != 8 );
  result = a1;
  v50 = 7;
  do
  {
    v29 = *(_DWORD *)(result + 224);
    v30 = v29 + *(_DWORD *)result;
    v31 = *(_DWORD *)result - v29;
    v32 = *(_DWORD *)(result + 32);
    v33 = *(_DWORD *)(result + 192);
    v34 = v33 + v32;
    v35 = v32 - v33;
    v36 = *(_DWORD *)(result + 64);
    v37 = *(_DWORD *)(result + 160);
    v38 = v37 + v36;
    v39 = v36 - v37;
    v40 = *(_DWORD *)(result + 128);
    v41 = v40;
    v42 = *(_DWORD *)(result + 96) + v40;
    v43 = v42 + v30;
    v44 = v30 - v42;
    *(_DWORD *)result = v38 + v34 + v43;
    *(_DWORD *)(result + 128) = v43 - (v38 + v34);
    v45 = 181 * (v44 - v38 + v34) >> 8;
    *(_DWORD *)(result + 64) = v45 + v44;
    *(_DWORD *)(result + 192) = v44 - v45;
    v46 = 98 * (*(_DWORD *)(result + 96) + v39 - v41 - (v31 + v35)) >> 8;
    v47 = v46 + (139 * (*(_DWORD *)(result + 96) + v39 - v41) >> 8);
    v48 = v46 + (334 * (v31 + v35) >> 8);
    v49 = 181 * (v35 + v39) >> 8;
    *(_DWORD *)(result + 160) = v47 + v31 - v49;
    *(_DWORD *)(result + 96) = v31 - v49 - v47;
    *(_DWORD *)(result + 32) = v48 + v49 + v31;
    *(_DWORD *)(result + 224) = v49 + v31 - v48;
    result += 4;
    --v50;
  }
  while ( v50 != -1 );
  return result;
}
