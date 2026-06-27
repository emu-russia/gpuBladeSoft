int *__cdecl sub_6F8803F4(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // eax@1
  int v6; // ST14_4@2
  int v7; // ebx@2
  int v8; // ecx@2
  int v9; // edx@2
  int v10; // ecx@2
  int v11; // ST18_4@2
  int v12; // ecx@2
  int v13; // ST10_4@2
  int v14; // ST0C_4@2
  int v15; // ecx@2
  int v16; // edx@2
  int v17; // ST08_4@2
  int v18; // ebx@2
  int v19; // ecx@2
  int v20; // esi@3
  int *result; // eax@3
  int v22; // ebx@4
  int v23; // ST18_4@4
  int v24; // ecx@4
  int v25; // edx@4
  int v26; // ST14_4@4
  int v27; // ST0C_4@4
  int v28; // ST08_4@4
  int v29; // ecx@4
  int v30; // ST04_4@4
  int v31; // ST1C_4@4
  int v32; // ecx@4
  int v33; // [sp+4h] [bp-98h]@1
  _DWORD *v34; // [sp+10h] [bp-8Ch]@3
  int v35; // [sp+1Ch] [bp-80h]@1
  int v36[5]; // [sp+2Ch] [bp-70h]@2
  int v37[5]; // [sp+40h] [bp-5Ch]@2
  int v38[5]; // [sp+54h] [bp-48h]@2
  int v39[5]; // [sp+68h] [bp-34h]@2
  int v40[5]; // [sp+7Ch] [bp-20h]@2
  char v41; // [sp+90h] [bp-Ch]@4

  v35 = *(_DWORD *)(a2 + 84);
  v5 = 0;
  v33 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v6 = (*(_DWORD *)(v35 + 4 * v5) * *(_WORD *)(a3 + 2 * v5) << 13) + 1024;
    v7 = *(_DWORD *)(v35 + 4 * v5 + 64) * *(_WORD *)(a3 + 2 * v5 + 32);
    v8 = *(_DWORD *)(v35 + 4 * v5 + 128) * *(_WORD *)(a3 + 2 * v5 + 64);
    v9 = 6476 * (v8 + v7);
    v10 = 2896 * (v7 - v8);
    v11 = v10;
    v12 = v6 + v10;
    v13 = v12 + v9;
    v14 = v12 - v9;
    v15 = *(_DWORD *)(v35 + 4 * v5 + 32) * *(_WORD *)(a3 + 2 * v5 + 16);
    v16 = *(_DWORD *)(v35 + 4 * v5 + 96) * *(_WORD *)(a3 + 2 * v5 + 48);
    v17 = 6810 * (v16 + v15);
    v18 = v17 + 4209 * v15;
    v19 = v17 - 17828 * v16;
    v36[v5] = (v18 + v13) >> 11;
    v40[v5] = (v13 - v18) >> 11;
    v37[v5] = (v19 + v14) >> 11;
    v39[v5] = (v14 - v19) >> 11;
    v38[v5++] = (v6 - 4 * v11) >> 11;
  }
  while ( v5 != 5 );
  v20 = v33;
  v34 = a4;
  result = v36;
  do
  {
    v22 = *v34 + a5;
    v23 = (*result + 16) << 13;
    v24 = result[2];
    v25 = 6476 * (v24 + result[4]);
    v26 = 2896 * (v24 - result[4]);
    v27 = v26 + v23 + v25;
    v28 = v26 + v23 - v25;
    v29 = result[3];
    v30 = 6810 * (v29 + result[1]);
    v31 = v30 + 4209 * result[1];
    v32 = v30 - 17828 * v29;
    *(_BYTE *)v22 = *(_BYTE *)(v20 + (((v31 + v27) >> 18) & 0x3FF));
    *(_BYTE *)(v22 + 4) = *(_BYTE *)(v20 + (((v27 - v31) >> 18) & 0x3FF));
    *(_BYTE *)(v22 + 1) = *(_BYTE *)(v20 + (((v32 + v28) >> 18) & 0x3FF));
    *(_BYTE *)(v22 + 3) = *(_BYTE *)(v20 + (((v28 - v32) >> 18) & 0x3FF));
    *(_BYTE *)(v22 + 2) = *(_BYTE *)(v20 + (((v23 - 4 * v26) >> 18) & 0x3FF));
    result += 5;
    ++v34;
  }
  while ( (char *)result != &v41 );
  return result;
}
