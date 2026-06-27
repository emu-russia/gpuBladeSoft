signed int __cdecl sub_6F87E330(void *a1, int a2, int a3)
{
  void *v3; // edx@1
  int v4; // eax@1
  int v5; // ecx@2
  int v6; // esi@2
  int v7; // ecx@2
  int v8; // esi@4
  int v9; // ecx@4
  int v10; // ebx@4
  int v11; // eax@4
  int v12; // edi@4
  int v13; // ebx@4
  int v14; // eax@4
  int v16; // [sp+0h] [bp-10h]@3

  v3 = a1;
  memset(a1, 0, 0x100u);
  v4 = 0;
  do
  {
    v5 = *(_DWORD *)(a2 + v4) + a3;
    v6 = *(_BYTE *)v5;
    v7 = *(_BYTE *)(v5 + 1);
    *((_DWORD *)a1 + 2 * v4) = 8 * (v6 + v7 - 256);
    *((_DWORD *)a1 + 2 * v4 + 1) = 8 * (v6 - v7);
    v4 += 4;
  }
  while ( v4 != 16 );
  v16 = 0;
  do
  {
    v8 = *((_DWORD *)v3 + 24);
    v9 = v8 + *(_DWORD *)v3;
    v10 = *((_DWORD *)v3 + 8);
    v11 = v10 + *((_DWORD *)v3 + 16);
    v12 = *(_DWORD *)v3 - v8;
    v13 = v10 - *((_DWORD *)v3 + 16);
    *(_DWORD *)v3 = v11 + v9;
    *((_DWORD *)v3 + 16) = v9 - v11;
    v14 = 4433 * (v13 + v12) + 4096;
    *((_DWORD *)v3 + 8) = (v14 + 6270 * v12) >> 13;
    *((_DWORD *)v3 + 24) = (v14 - 15137 * v13) >> 13;
    v3 = (char *)v3 + 4;
    ++v16;
  }
  while ( v16 != 2 );
  return 2;
}
