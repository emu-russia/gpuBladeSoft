_BYTE *__cdecl sub_6F84F932(int a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // eax@2
  char v4; // ST1C_1@2
  _BYTE *v5; // eax@2
  _BYTE *v6; // eax@5
  int v7; // ST14_4@5
  char v8; // ST2C_1@9
  _BYTE *v9; // eax@9
  _BYTE *result; // eax@10
  int v11; // [sp+Ch] [bp-24h]@5
  int v12; // [sp+18h] [bp-18h]@5
  _BYTE *v13; // [sp+20h] [bp-10h]@1
  unsigned int v14; // [sp+20h] [bp-10h]@4
  int v15; // [sp+24h] [bp-Ch]@1
  int v16; // [sp+28h] [bp-8h]@5
  int v17; // [sp+2Ch] [bp-4h]@5

  v15 = (*(_BYTE *)(a1 + 11) + 7) >> 3;
  v13 = &a2[v15];
  while ( a2 < v13 )
  {
    v3 = a3++;
    v4 = *a2 + *v3;
    v5 = a2++;
    *v5 = v4;
  }
  v14 = (unsigned int)&v13[*(_DWORD *)(a1 + 4) - v15];
  while ( 1 )
  {
    result = a2;
    if ( (unsigned int)a2 >= v14 )
      break;
    v12 = a3[-v15];
    v17 = a2[-v15];
    v6 = a3++;
    v7 = *v6;
    v16 = ((v7 - v12) ^ ((v7 - v12) >> 31)) - ((v7 - v12) >> 31);
    v11 = (((v17 - v12 + v7 - v12) >> 31) ^ (v17 - v12 + v7 - v12)) - ((v17 - v12 + v7 - v12) >> 31);
    if ( ((v17 - v12) ^ ((v17 - v12) >> 31)) - ((v17 - v12) >> 31) < v16 )
    {
      v16 = ((v17 - v12) ^ ((v17 - v12) >> 31)) - ((v17 - v12) >> 31);
      LOBYTE(v17) = *v6;
    }
    if ( v11 < v16 )
      LOBYTE(v17) = v12;
    v8 = *a2 + v17;
    v9 = a2++;
    *v9 = v8;
  }
  return result;
}
