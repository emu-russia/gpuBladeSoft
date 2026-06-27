int __cdecl sub_6F876240(void *a1, int a2, int a3)
{
  int result; // eax@1
  int v4; // ecx@2
  int v5; // esi@2
  int v6; // ST08_4@2
  int v7; // ecx@2
  int v8; // ST08_4@4
  int v9; // ST04_4@4

  memset(a1, 0, 0x100u);
  result = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + result) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 2);
    v7 = *(_BYTE *)(v4 + 1);
    *((_DWORD *)a1 + 2 * result) = 16 * (v5 + v6 + v7 - 384);
    *((_DWORD *)a1 + 2 * result + 2) = (5793 * (v5 + v6 - v7 - v7) + 256) >> 9;
    *((_DWORD *)a1 + 2 * result + 1) = (10033 * (v5 - v6) + 256) >> 9;
    result += 4;
  }
  while ( result != 12 );
  LOBYTE(result) = 0;
  do
  {
    v8 = *((_DWORD *)a1 + result);
    v9 = *((_DWORD *)a1 + result + 16);
    *((_DWORD *)a1 + result) = (14564 * (v8 + v9 + *((_DWORD *)a1 + result + 8)) + 0x4000) >> 15;
    *((_DWORD *)a1 + result + 16) = (10298 * (v8 + v9 - *((_DWORD *)a1 + result + 8) - *((_DWORD *)a1 + result + 8))
                                   + 0x4000) >> 15;
    *((_DWORD *)a1 + result++ + 8) = (17837 * (v8 - v9) + 0x4000) >> 15;
  }
  while ( result != 3 );
  return result;
}
