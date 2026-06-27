unsigned int __cdecl sub_6F85300F(int a1, int a2)
{
  unsigned int result; // eax@1
  char v3; // ST03_1@3
  unsigned int v4; // [sp+4h] [bp-Ch]@2
  unsigned int v5; // [sp+8h] [bp-8h]@2
  int v6; // [sp+Ch] [bp-4h]@2

  result = *(_BYTE *)(a1 + 9);
  if ( (_BYTE)result == 16 )
  {
    v6 = a2;
    v4 = *(_DWORD *)a1 * *(_BYTE *)(a1 + 10);
    v5 = 0;
    while ( 1 )
    {
      result = v5;
      if ( v5 >= v4 )
        break;
      v3 = *(_BYTE *)v6;
      *(_BYTE *)v6 = *(_BYTE *)(v6 + 1);
      *(_BYTE *)(v6 + 1) = v3;
      ++v5;
      v6 += 2;
    }
  }
  return result;
}
