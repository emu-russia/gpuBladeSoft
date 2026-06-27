int __cdecl sub_6F875C38(void *a1, int a2, int a3)
{
  void *v3; // edx@1
  int v4; // eax@1
  int v5; // ecx@2
  int v6; // edi@2
  int v7; // ST00_4@2
  int v8; // ST0C_4@2
  int v9; // ebx@2
  int v10; // ST18_4@2
  int v11; // ST14_4@2
  int v12; // esi@2
  int v13; // ST10_4@2
  int v14; // ecx@2
  int v15; // esi@2
  int v16; // ST04_4@2
  int v17; // edi@2
  int v18; // ST18_4@2
  int v19; // ebx@2
  int v20; // ecx@2
  int v21; // eax@4
  int v22; // ST00_4@4
  int v23; // edi@4
  int v24; // ebx@4
  int v25; // esi@4
  int v26; // ecx@4
  int v27; // ST18_4@4
  int v28; // ST14_4@4
  int v29; // esi@4
  int result; // eax@4
  int v31; // [sp+Ch] [bp-1Ch]@3

  v3 = a1;
  memset(a1, 0, 0x100u);
  v4 = 0;
  do
  {
    v5 = *(_DWORD *)(a2 + v4) + a3;
    v6 = *(_BYTE *)v5;
    v7 = *(_BYTE *)(v5 + 5);
    v8 = v6 + v7;
    v9 = *(_BYTE *)(v5 + 1);
    v10 = *(_BYTE *)(v5 + 4);
    v11 = v9 + v10;
    v12 = *(_BYTE *)(v5 + 2);
    v13 = v12;
    v14 = *(_BYTE *)(v5 + 3);
    v15 = v14 + v12;
    v16 = v6 + v7 + v15;
    v17 = v6 - v7;
    v18 = v9 - v10;
    v19 = v13 - v14;
    *((_DWORD *)a1 + 2 * v4) = 4 * (v11 + v16 - 768);
    *((_DWORD *)a1 + 2 * v4 + 2) = (10033 * (v8 - v15) + 1024) >> 11;
    *((_DWORD *)a1 + 2 * v4 + 4) = (5793 * (v16 - v11 - v11) + 1024) >> 11;
    v20 = (2998 * (v13 - v14 + v17) + 1024) >> 11;
    *((_DWORD *)a1 + 2 * v4 + 1) = v20 + 4 * (v17 + v18);
    *((_DWORD *)a1 + 2 * v4 + 3) = 4 * (v17 - v18 - v19);
    *((_DWORD *)a1 + 2 * v4 + 5) = v20 + 4 * (v19 - v18);
    v4 += 4;
  }
  while ( v4 != 24 );
  v31 = 0;
  do
  {
    v21 = *((_DWORD *)v3 + 40);
    v22 = v21 + *(_DWORD *)v3;
    v23 = *((_DWORD *)v3 + 8);
    v24 = v23 + *((_DWORD *)v3 + 32);
    v25 = *((_DWORD *)v3 + 16) + *((_DWORD *)v3 + 24);
    v26 = *(_DWORD *)v3 - v21;
    v27 = v23 - *((_DWORD *)v3 + 32);
    v28 = *((_DWORD *)v3 + 16) - *((_DWORD *)v3 + 24);
    *(_DWORD *)v3 = (14564 * (v24 + v22 + v25) + 0x4000) >> 15;
    *((_DWORD *)v3 + 16) = (17837 * (v22 - v25) + 0x4000) >> 15;
    *((_DWORD *)v3 + 32) = (10298 * (v22 + v25 - v24 - v24) + 0x4000) >> 15;
    v29 = 5331 * (v26 + v28);
    *((_DWORD *)v3 + 8) = (v29 + 14564 * (v26 + v27) + 0x4000) >> 15;
    *((_DWORD *)v3 + 24) = (14564 * (v26 - v27 - v28) + 0x4000) >> 15;
    result = (v29 + 14564 * (v28 - v27) + 0x4000) >> 15;
    *((_DWORD *)v3 + 40) = result;
    v3 = (char *)v3 + 4;
    ++v31;
  }
  while ( v31 != 6 );
  return result;
}
