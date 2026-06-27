int __cdecl sub_6F845686(int a1, _BYTE *a2)
{
  int result; // eax@1
  int v3; // ST00_4@3
  _BYTE *v4; // eax@3
  int v5; // ST00_4@3
  _BYTE *v6; // eax@3
  _BYTE *v7; // [sp+4h] [bp-Ch]@2
  _BYTE *v8; // [sp+8h] [bp-8h]@2
  _BYTE *v9; // [sp+Ch] [bp-4h]@2

  result = *(_BYTE *)(a1 + 9);
  if ( (_BYTE)result == 16 )
  {
    v9 = a2;
    v8 = a2;
    v7 = &a2[*(_DWORD *)(a1 + 4)];
    while ( v9 < v7 )
    {
      v3 = *v9;
      v4 = v9 + 1;
      v9 += 2;
      v5 = (0xFFFF * (*v4 - v3 + 128) >> 24) + v3;
      v6 = v8++;
      *v6 = v5;
    }
    *(_BYTE *)(a1 + 9) = 8;
    *(_BYTE *)(a1 + 11) = 8 * *(_BYTE *)(a1 + 10);
    result = a1;
    *(_DWORD *)(a1 + 4) = *(_BYTE *)(a1 + 10) * *(_DWORD *)a1;
  }
  return result;
}
