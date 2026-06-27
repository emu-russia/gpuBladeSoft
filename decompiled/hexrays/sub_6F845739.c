int __cdecl sub_6F845739(int a1, _BYTE *a2)
{
  int result; // eax@1
  _BYTE *v3; // eax@3
  _BYTE *v4; // [sp+4h] [bp-Ch]@2
  _BYTE *v5; // [sp+8h] [bp-8h]@2
  _BYTE *v6; // [sp+Ch] [bp-4h]@2

  result = *(_BYTE *)(a1 + 9);
  if ( (_BYTE)result == 16 )
  {
    v6 = a2;
    v5 = a2;
    v4 = &a2[*(_DWORD *)(a1 + 4)];
    while ( v6 < v4 )
    {
      v3 = v5++;
      *v3 = *v6;
      v6 += 2;
    }
    *(_BYTE *)(a1 + 9) = 8;
    *(_BYTE *)(a1 + 11) = 8 * *(_BYTE *)(a1 + 10);
    result = a1;
    *(_DWORD *)(a1 + 4) = *(_BYTE *)(a1 + 10) * *(_DWORD *)a1;
  }
  return result;
}
