int __cdecl sub_6F87C1C4(void *a1, int a2, int a3)
{
  int result; // eax@1
  int v4; // ecx@2
  int v5; // edi@2
  int v6; // ST00_4@2
  int v7; // ST10_4@2
  int v8; // ebx@2
  int v9; // ST18_4@2
  int v10; // ST14_4@2
  int v11; // esi@2
  int v12; // ST0C_4@2
  int v13; // ecx@2
  int v14; // esi@2
  int v15; // ST04_4@2
  int v16; // edi@2
  int v17; // ST18_4@2
  int v18; // ebx@2
  int v19; // ecx@2
  int v20; // ST14_4@4
  int v21; // ST18_4@4

  memset(a1, 0, 0x100u);
  result = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + result) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 5);
    v7 = v5 + v6;
    v8 = *(_BYTE *)(v4 + 1);
    v9 = *(_BYTE *)(v4 + 4);
    v10 = v8 + v9;
    v11 = *(_BYTE *)(v4 + 2);
    v12 = v11;
    v13 = *(_BYTE *)(v4 + 3);
    v14 = v13 + v11;
    v15 = v5 + v6 + v14;
    v16 = v5 - v6;
    v17 = v8 - v9;
    v18 = v12 - v13;
    *((_DWORD *)a1 + 2 * result) = 8 * (v10 + v15 - 768);
    *((_DWORD *)a1 + 2 * result + 2) = (10033 * (v7 - v14) + 512) >> 10;
    *((_DWORD *)a1 + 2 * result + 4) = (5793 * (v15 - v10 - v10) + 512) >> 10;
    v19 = (2998 * (v12 - v13 + v16) + 512) >> 10;
    *((_DWORD *)a1 + 2 * result + 1) = v19 + 8 * (v16 + v17);
    *((_DWORD *)a1 + 2 * result + 3) = 8 * (v16 - v17 - v18);
    *((_DWORD *)a1 + 2 * result + 5) = v19 + 8 * (v18 - v17);
    result += 4;
  }
  while ( result != 12 );
  LOBYTE(result) = 0;
  do
  {
    v20 = *((_DWORD *)a1 + result);
    v21 = *((_DWORD *)a1 + result + 16);
    *((_DWORD *)a1 + result) = (14564 * (v20 + v21 + *((_DWORD *)a1 + result + 8)) + 0x4000) >> 15;
    *((_DWORD *)a1 + result + 16) = (10298 * (v20 + v21 - *((_DWORD *)a1 + result + 8) - *((_DWORD *)a1 + result + 8))
                                   + 0x4000) >> 15;
    *((_DWORD *)a1 + result++ + 8) = (17837 * (v20 - v21) + 0x4000) >> 15;
  }
  while ( result != 6 );
  return result;
}
