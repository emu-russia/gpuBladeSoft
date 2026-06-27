_BYTE *__cdecl sub_6F84F82C(int a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // eax@1
  _BYTE *v4; // eax@1
  _BYTE *v5; // eax@2
  int v6; // ST0C_4@2
  _BYTE *v7; // eax@6
  _BYTE *result; // eax@7
  int v9; // [sp+4h] [bp-1Ch]@2
  _BYTE *v10; // [sp+10h] [bp-10h]@1
  int v11; // [sp+14h] [bp-Ch]@2
  int v12; // [sp+18h] [bp-8h]@1
  int v13; // [sp+1Ch] [bp-4h]@1
  _BYTE *v14; // [sp+2Ch] [bp+Ch]@1
  _BYTE *v15; // [sp+30h] [bp+10h]@1

  v10 = &a2[*(_DWORD *)(a1 + 4)];
  v3 = a3;
  v15 = a3 + 1;
  v12 = *v3;
  LOBYTE(v13) = *a2 + v12;
  v4 = a2;
  v14 = a2 + 1;
  *v4 = v13;
  while ( 1 )
  {
    result = v14;
    if ( v14 >= v10 )
      break;
    v13 = (unsigned __int8)v13;
    v5 = v15++;
    v6 = *v5;
    v11 = ((v6 - v12) ^ ((v6 - v12) >> 31)) - ((v6 - v12) >> 31);
    v9 = (((v13 - v12 + v6 - v12) >> 31) ^ (v13 - v12 + v6 - v12)) - ((v13 - v12 + v6 - v12) >> 31);
    if ( ((v13 - v12) ^ ((v13 - v12) >> 31)) - ((v13 - v12) >> 31) < v11 )
    {
      v11 = ((v13 - v12) ^ ((v13 - v12) >> 31)) - ((v13 - v12) >> 31);
      LOBYTE(v13) = *v5;
    }
    if ( v9 < v11 )
      LOBYTE(v13) = v12;
    v12 = *v5;
    LOBYTE(v13) = *v14 + v13;
    v7 = v14++;
    *v7 = v13;
  }
  return result;
}
