int __cdecl sub_6F87C36C(void *a1, int a2, int a3)
{
  int result; // eax@1
  int v4; // ecx@2
  int v5; // edi@2
  int v6; // ST00_4@2
  int v7; // ST08_4@2
  int v8; // ebx@2
  int v9; // ecx@2
  int v10; // esi@2
  int v11; // edi@2
  int v12; // ebx@2
  int v13; // esi@2
  int v14; // ecx@4
  int v15; // esi@4

  memset(a1, 0, 0x100u);
  result = 0;
  do
  {
    v4 = *(_DWORD *)(a2 + result) + a3;
    v5 = *(_BYTE *)v4;
    v6 = *(_BYTE *)(v4 + 3);
    v7 = v5 + v6;
    v8 = *(_BYTE *)(v4 + 1);
    v9 = *(_BYTE *)(v4 + 2);
    v10 = v9 + v8;
    v11 = v5 - v6;
    v12 = v8 - v9;
    *((_DWORD *)a1 + 2 * result) = 32 * (v7 + v10 - 512);
    *((_DWORD *)a1 + 2 * result + 2) = 32 * (v7 - v10);
    v13 = 4433 * (v12 + v11) + 128;
    *((_DWORD *)a1 + 2 * result + 1) = (v13 + 6270 * v11) >> 8;
    *((_DWORD *)a1 + 2 * result + 3) = (v13 - 15137 * v12) >> 8;
    result += 4;
  }
  while ( result != 8 );
  LOBYTE(result) = 0;
  do
  {
    v14 = *((_DWORD *)a1 + result) + 2;
    v15 = *((_DWORD *)a1 + result + 8);
    *((_DWORD *)a1 + result) = (v14 + v15) >> 2;
    *((_DWORD *)a1 + result++ + 8) = (v14 - v15) >> 2;
  }
  while ( result != 4 );
  return result;
}
