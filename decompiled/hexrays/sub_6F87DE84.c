int __cdecl sub_6F87DE84(void *a1, int a2, int a3)
{
  void *v3; // edx@1
  int v4; // eax@1
  int v5; // ecx@2
  int v6; // edi@2
  int v7; // ST14_4@2
  int v8; // ST1C_4@2
  int v9; // ebx@2
  int v10; // ecx@2
  int v11; // esi@2
  int v12; // edi@2
  int v13; // ebx@2
  int v14; // esi@2
  int v15; // ebx@4
  int v16; // ecx@4
  int v17; // eax@4
  int v18; // esi@4
  int v19; // edi@4
  int v20; // ebx@4
  int v21; // ST00_4@4
  int v22; // ecx@4
  int v23; // ST10_4@4
  int v24; // ST18_4@4
  int v25; // eax@4
  int v26; // ST1C_4@4
  int v27; // edi@4
  int v28; // edi@4
  int v29; // ebx@4
  int v30; // esi@4
  int v31; // ST14_4@4
  int v32; // ST08_4@4
  int result; // eax@4
  int v34; // [sp+4h] [bp-28h]@3

  v3 = a1;
  memset(a1, 0, 0x100u);
  v4 = 0;
  do
  {
    v5 = *(_DWORD *)(a2 + v4) + a3;
    v6 = *(_BYTE *)v5;
    v7 = *(_BYTE *)(v5 + 3);
    v8 = v6 + v7;
    v9 = *(_BYTE *)(v5 + 1);
    v10 = *(_BYTE *)(v5 + 2);
    v11 = v10 + v9;
    v12 = v6 - v7;
    v13 = v9 - v10;
    *((_DWORD *)a1 + 2 * v4) = 8 * (v8 + v11 - 512);
    *((_DWORD *)a1 + 2 * v4 + 2) = 8 * (v8 - v11);
    v14 = 4433 * (v13 + v12) + 512;
    *((_DWORD *)a1 + 2 * v4 + 1) = (v14 + 6270 * v12) >> 10;
    *((_DWORD *)a1 + 2 * v4 + 3) = (v14 - 15137 * v13) >> 10;
    v4 += 4;
  }
  while ( v4 != 32 );
  v34 = 0;
  do
  {
    v15 = *(_DWORD *)v3 + *((_DWORD *)v3 + 56);
    v16 = *((_DWORD *)v3 + 8) + *((_DWORD *)v3 + 48);
    v17 = *((_DWORD *)v3 + 16) + *((_DWORD *)v3 + 40);
    v18 = *((_DWORD *)v3 + 24) + *((_DWORD *)v3 + 32);
    v19 = v15 + v18 + 2;
    v20 = v15 - v18;
    v21 = v17 + v16;
    v22 = v16 - v17;
    v23 = *(_DWORD *)v3 - *((_DWORD *)v3 + 56);
    v24 = *((_DWORD *)v3 + 8) - *((_DWORD *)v3 + 48);
    v25 = *((_DWORD *)v3 + 16) - *((_DWORD *)v3 + 40);
    v26 = *((_DWORD *)v3 + 24) - *((_DWORD *)v3 + 32);
    *(_DWORD *)v3 = (v19 + v21) >> 2;
    *((_DWORD *)v3 + 32) = (v19 - v21) >> 2;
    v27 = 4433 * (v22 + v20) + 0x4000;
    *((_DWORD *)v3 + 16) = (v27 + 6270 * v20) >> 15;
    *((_DWORD *)v3 + 48) = (v27 - 15137 * v22) >> 15;
    v28 = -7373 * (v23 + v26);
    v29 = -20995 * (v25 + v24);
    v30 = 9633 * (v24 + v26 + v25 + v23) + 0x4000;
    v31 = v30 + -3196 * (v25 + v23);
    v32 = v30 - 16069 * (v24 + v26);
    *((_DWORD *)v3 + 8) = (v31 + v28 + 12299 * v23) >> 15;
    *((_DWORD *)v3 + 24) = (v32 + v29 + 25172 * v24) >> 15;
    *((_DWORD *)v3 + 40) = (v31 + 16819 * v25 + v29) >> 15;
    result = (v32 + v28 + 2446 * v26) >> 15;
    *((_DWORD *)v3 + 56) = result;
    v3 = (char *)v3 + 4;
    ++v34;
  }
  while ( v34 != 4 );
  return result;
}
