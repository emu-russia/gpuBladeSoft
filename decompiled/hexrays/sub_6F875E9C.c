int __cdecl sub_6F875E9C(void *a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ecx@2
  int v5; // ebx@2
  int v6; // esi@2
  int v7; // ST14_4@2
  int v8; // esi@2
  int v9; // edi@2
  int v10; // ST10_4@2
  int v11; // edx@2
  int v12; // edi@2
  int v13; // ST08_4@2
  int v14; // ebx@2
  int v15; // ecx@2
  int v16; // ST14_4@2
  int v17; // esi@2
  void *v18; // edx@2
  int v19; // ST14_4@2
  int v20; // eax@4
  int v21; // edi@4
  int v22; // ebx@4
  int v23; // ecx@4
  int v24; // eax@4
  int v25; // ST0C_4@4
  int v26; // edi@4
  int v27; // ebx@4
  int result; // eax@4
  int v29; // [sp+14h] [bp-10h]@3

  memset(a1, 0, 0x100u);
  v3 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + v3) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 4);
    v7 = v6;
    v8 = v5 + v6;
    v9 = *(_BYTE *)(v4 + 1);
    v10 = v9;
    v11 = *(_BYTE *)(v4 + 3);
    v12 = v11 + v9;
    v13 = *(_BYTE *)(v4 + 2);
    v14 = v5 - v7;
    v15 = v10 - v11;
    *((_DWORD *)a1 + 2 * v3) = 8 * (v13 + v12 + v8 - 640);
    v16 = 6476 * (v8 - v12);
    v17 = 2896 * (v12 + v8 - 4 * v13);
    v18 = a1;
    *((_DWORD *)a1 + 2 * v3 + 2) = (v16 + v17 + 512) >> 10;
    *((_DWORD *)a1 + 2 * v3 + 4) = (v16 + 512 - v17) >> 10;
    v19 = 6810 * (v15 + v14);
    *((_DWORD *)a1 + 2 * v3 + 1) = (v19 + 4209 * v14 + 512) >> 10;
    *((_DWORD *)a1 + 2 * v3 + 3) = (v19 + -17828 * v15 + 512) >> 10;
    v3 += 4;
  }
  while ( v3 != 20 );
  v29 = 0;
  do
  {
    v20 = *((_DWORD *)v18 + 32);
    v21 = v20 + *(_DWORD *)v18;
    v22 = *((_DWORD *)v18 + 8) + *((_DWORD *)v18 + 24);
    v23 = *(_DWORD *)v18 - v20;
    v24 = *((_DWORD *)v18 + 8) - *((_DWORD *)v18 + 24);
    *(_DWORD *)v18 = (10486 * (v22 + v21 + *((_DWORD *)v18 + 16)) + 0x4000) >> 15;
    v25 = 8290 * (v21 - v22);
    v26 = 3707 * (v22 + v21 - 4 * *((_DWORD *)v18 + 16));
    *((_DWORD *)v18 + 16) = (v25 + v26 + 0x4000) >> 15;
    *((_DWORD *)v18 + 32) = (v25 + 0x4000 - v26) >> 15;
    v27 = 8716 * (v24 + v23);
    *((_DWORD *)v18 + 8) = (v27 + 5387 * v23 + 0x4000) >> 15;
    result = (v27 + -22820 * v24 + 0x4000) >> 15;
    *((_DWORD *)v18 + 24) = result;
    v18 = (char *)v18 + 4;
    ++v29;
  }
  while ( v29 != 5 );
  return result;
}
