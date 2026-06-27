int __cdecl sub_6F8760F8(void *a1, int a2, int a3)
{
  void *v3; // edx@1
  int v4; // eax@1
  int v5; // ecx@2
  int v6; // edi@2
  int v7; // ST00_4@2
  int v8; // ST08_4@2
  int v9; // ebx@2
  int v10; // ecx@2
  int v11; // esi@2
  int v12; // edi@2
  int v13; // ebx@2
  int v14; // esi@2
  int v15; // esi@4
  int v16; // ecx@4
  int v17; // ebx@4
  int v18; // eax@4
  int v19; // edi@4
  int v20; // ebx@4
  int v21; // eax@4
  int result; // eax@4
  int v23; // [sp+8h] [bp-10h]@3

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
    *((_DWORD *)a1 + 2 * v4) = 16 * (v8 + v11 - 512);
    *((_DWORD *)a1 + 2 * v4 + 2) = 16 * (v8 - v11);
    v14 = 4433 * (v13 + v12) + 256;
    *((_DWORD *)a1 + 2 * v4 + 1) = (v14 + 6270 * v12) >> 9;
    *((_DWORD *)a1 + 2 * v4 + 3) = (v14 - 15137 * v13) >> 9;
    v4 += 4;
  }
  while ( v4 != 16 );
  v23 = 0;
  do
  {
    v15 = *((_DWORD *)v3 + 24);
    v16 = *(_DWORD *)v3 + v15 + 2;
    v17 = *((_DWORD *)v3 + 8);
    v18 = v17 + *((_DWORD *)v3 + 16);
    v19 = *(_DWORD *)v3 - v15;
    v20 = v17 - *((_DWORD *)v3 + 16);
    *(_DWORD *)v3 = (v16 + v18) >> 2;
    *((_DWORD *)v3 + 16) = (v16 - v18) >> 2;
    v21 = 4433 * (v20 + v19) + 0x4000;
    *((_DWORD *)v3 + 8) = (v21 + 6270 * v19) >> 15;
    result = (v21 - 15137 * v20) >> 15;
    *((_DWORD *)v3 + 24) = result;
    v3 = (char *)v3 + 4;
    ++v23;
  }
  while ( v23 != 4 );
  return result;
}
