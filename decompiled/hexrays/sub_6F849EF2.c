int __cdecl sub_6F849EF2(int a1, int a2)
{
  int result; // eax@1
  unsigned int i; // [sp+8h] [bp-8h]@3
  unsigned int v4; // [sp+Ch] [bp-4h]@3

  result = *(_BYTE *)(a1 + 9);
  if ( (_BYTE)result == 8 )
  {
    result = *(_BYTE *)(a1 + 8);
    if ( (_BYTE)result != 3 )
    {
      v4 = *(_DWORD *)(a1 + 4) + a2;
      for ( i = *(_DWORD *)(a1 + 4) + v4; i > v4; i -= 2 )
      {
        *(_BYTE *)(i - 1) = *(_BYTE *)--v4;
        *(_BYTE *)(i - 2) = *(_BYTE *)(i - 1);
      }
      *(_DWORD *)(a1 + 4) *= 2;
      *(_BYTE *)(a1 + 9) = 16;
      result = a1;
      *(_BYTE *)(a1 + 11) = 16 * *(_BYTE *)(a1 + 10);
    }
  }
  return result;
}
