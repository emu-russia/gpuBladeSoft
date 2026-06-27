void *__cdecl sub_6F87E14C(void *a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // edx@2
  int v5; // ebx@2
  int v6; // esi@2
  int v7; // ST1C_4@2
  int v8; // esi@2
  int v9; // edx@2
  void *result; // eax@3
  int v11; // edx@4
  int v12; // ST04_4@4
  int v13; // edi@4
  int v14; // ebx@4
  int v15; // esi@4
  int v16; // ecx@4
  int v17; // ST18_4@4
  int v18; // ST1C_4@4
  int v19; // esi@4
  int v20; // [sp+14h] [bp-18h]@3

  memset(a1, 0, 0x100u);
  v3 = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + v3) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 2);
    v7 = v6;
    v8 = v5 + v6;
    v9 = *(_BYTE *)(v4 + 1);
    *((_DWORD *)a1 + 2 * v3) = 8 * (v8 + v9 - 384);
    *((_DWORD *)a1 + 2 * v3 + 2) = (5793 * (v8 - v9 - v9) + 512) >> 10;
    *((_DWORD *)a1 + 2 * v3 + 1) = (10033 * (v5 - v7) + 512) >> 10;
    v3 += 4;
  }
  while ( v3 != 24 );
  result = a1;
  v20 = 0;
  do
  {
    v11 = *((_DWORD *)result + 40);
    v12 = v11 + *(_DWORD *)result;
    v13 = *((_DWORD *)result + 8);
    v14 = v13 + *((_DWORD *)result + 32);
    v15 = *((_DWORD *)result + 16) + *((_DWORD *)result + 24);
    v16 = *(_DWORD *)result - v11;
    v17 = v13 - *((_DWORD *)result + 32);
    v18 = *((_DWORD *)result + 16) - *((_DWORD *)result + 24);
    *(_DWORD *)result = (14564 * (v14 + v12 + v15) + 0x4000) >> 15;
    *((_DWORD *)result + 16) = (17837 * (v12 - v15) + 0x4000) >> 15;
    *((_DWORD *)result + 32) = (10298 * (v12 + v15 - v14 - v14) + 0x4000) >> 15;
    v19 = 5331 * (v16 + v18);
    *((_DWORD *)result + 8) = (v19 + 14564 * (v16 + v17) + 0x4000) >> 15;
    *((_DWORD *)result + 24) = (14564 * (v16 - v17 - v18) + 0x4000) >> 15;
    *((_DWORD *)result + 40) = (v19 + 14564 * (v18 - v17) + 0x4000) >> 15;
    result = (char *)result + 4;
    ++v20;
  }
  while ( v20 != 3 );
  return result;
}
