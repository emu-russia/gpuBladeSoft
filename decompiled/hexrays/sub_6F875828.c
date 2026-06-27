int __cdecl sub_6F875828(void *a1, int a2, int a3)
{
  void *v3; // edx@1
  int v4; // eax@1
  int v5; // ecx@2
  int v6; // edi@2
  int v7; // ST10_4@2
  int v8; // ST20_4@2
  int v9; // ebx@2
  int v10; // ST18_4@2
  int v11; // ST1C_4@2
  int v12; // ST0C_4@2
  int v13; // esi@2
  int v14; // ST08_4@2
  int v15; // ST00_4@2
  int v16; // ST04_4@2
  int v17; // ST10_4@2
  int v18; // ecx@2
  int v19; // ST18_4@2
  int v20; // ebx@2
  int v21; // esi@2
  int v22; // ebx@2
  int v23; // ST20_4@2
  int v24; // esi@2
  int v25; // edi@2
  int v26; // esi@4
  int v27; // ST18_4@4
  int v28; // ecx@4
  int v29; // ST20_4@4
  int v30; // ebx@4
  int v31; // ST08_4@4
  int v32; // ST04_4@4
  int v33; // eax@4
  int v34; // ST10_4@4
  int v35; // ST1C_4@4
  int v36; // ecx@4
  int v37; // esi@4
  int v38; // esi@4
  int v39; // ST20_4@4
  int v40; // ecx@4
  int v41; // edi@4
  int result; // eax@4
  int v43; // [sp+Ch] [bp-24h]@3

  v3 = a1;
  memset(a1, 0, 0x100u);
  v4 = 0;
  do
  {
    v5 = *(_DWORD *)(a2 + v4) + a3;
    v6 = *(_BYTE *)v5;
    v7 = *(_BYTE *)(v5 + 6);
    v8 = v6 + v7;
    v9 = *(_BYTE *)(v5 + 1);
    v10 = *(_BYTE *)(v5 + 5);
    v11 = v9 + v10;
    v12 = *(_BYTE *)(v5 + 2);
    v13 = *(_BYTE *)(v5 + 4);
    v14 = v12 + v13;
    v15 = *(_BYTE *)(v5 + 3);
    v16 = v6 - v7;
    v17 = v9 - v10;
    v18 = v12 - v13;
    *((_DWORD *)a1 + 2 * v4) = 4 * (v12 + v13 + v8 + v9 + v10 + v15 - 896);
    v19 = 2896 * (v12 + v13 + v8 - 2 * v15 - 2 * v15);
    v20 = 2578 * (v11 - (v12 + v13));
    *((_DWORD *)a1 + 2 * v4 + 2) = (v19 + 7542 * (v8 - (v12 + v13)) + v20 + 1024) >> 11;
    v21 = 7223 * (v8 - v11);
    *((_DWORD *)a1 + 2 * v4 + 4) = (v20 + v21 + 1024 + 5793 * (2 * v15 - v11)) >> 11;
    *((_DWORD *)a1 + 2 * v4 + 6) = (v19 + v21 + 1024 - 7542 * (v8 - v14)) >> 11;
    v22 = 7663 * (v16 + v17);
    v23 = 1395 * (v16 - v17);
    v24 = 5027 * (v18 + v16);
    *((_DWORD *)a1 + 2 * v4 + 1) = (v22 + v24 + 1024 - v23) >> 11;
    v25 = -11295 * (v18 + v17);
    *((_DWORD *)a1 + 2 * v4 + 3) = (v23 + v25 + v22 + 1024) >> 11;
    *((_DWORD *)a1 + 2 * v4 + 5) = (v25 + 15326 * v18 + 1024 + v24) >> 11;
    v4 += 4;
  }
  while ( v4 != 28 );
  v43 = 0;
  do
  {
    v26 = *((_DWORD *)v3 + 48);
    v27 = v26 + *(_DWORD *)v3;
    v28 = *((_DWORD *)v3 + 8);
    v29 = v28 + *((_DWORD *)v3 + 40);
    v30 = *((_DWORD *)v3 + 16) + *((_DWORD *)v3 + 32);
    v31 = *(_DWORD *)v3 - v26;
    v32 = v28 - *((_DWORD *)v3 + 40);
    v33 = *((_DWORD *)v3 + 16) - *((_DWORD *)v3 + 32);
    *(_DWORD *)v3 = (10700 * (v30 + v27 + *((_DWORD *)v3 + 24) + v29) + 0x4000) >> 15;
    v34 = 2 * *((_DWORD *)v3 + 24);
    v35 = 3783 * (v30 + v27 - v34 - v34);
    v36 = 3367 * (v29 - v30);
    *((_DWORD *)v3 + 16) = (v35 + 9850 * (v27 - v30) + v36 + 0x4000) >> 15;
    v37 = 9434 * (v27 - v29);
    *((_DWORD *)v3 + 32) = (v36 + v37 + 0x4000 + 7566 * (v34 - v29)) >> 15;
    *((_DWORD *)v3 + 48) = (v35 - 9850 * (v27 - v30) + v37 + 0x4000) >> 15;
    v38 = 10009 * (v31 + v32);
    v39 = 1822 * (v31 - v32);
    v40 = -14752 * (v33 + v32);
    v41 = 6565 * (v33 + v31);
    *((_DWORD *)v3 + 8) = (v38 + v41 + 0x4000 - v39) >> 15;
    *((_DWORD *)v3 + 24) = (v39 + v40 + v38 + 0x4000) >> 15;
    result = 20017 * v33 + 0x4000;
    *((_DWORD *)v3 + 40) = (result + v40 + v41) >> 15;
    v3 = (char *)v3 + 4;
    ++v43;
  }
  while ( v43 != 7 );
  return result;
}
