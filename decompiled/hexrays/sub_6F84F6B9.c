unsigned int __cdecl sub_6F84F6B9(int a1, int a2)
{
  unsigned int result; // eax@3
  int v3; // [sp+0h] [bp-10h]@1
  unsigned int v4; // [sp+4h] [bp-Ch]@1
  _BYTE *v5; // [sp+8h] [bp-8h]@1
  unsigned int i; // [sp+Ch] [bp-4h]@1

  v4 = *(_DWORD *)(a1 + 4);
  v3 = (*(_BYTE *)(a1 + 11) + 7) >> 3;
  v5 = (_BYTE *)(a2 + v3);
  for ( i = (*(_BYTE *)(a1 + 11) + 7) >> 3; ; ++i )
  {
    result = i;
    if ( i >= v4 )
      break;
    *v5 += v5[-v3];
    ++v5;
  }
  return result;
}
