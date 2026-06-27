int __cdecl sub_6F837123(int a1, int a2, int a3, int a4)
{
  int result; // eax@1

  result = sub_6F836D84(a1, a3, a4);
  if ( result )
    result = sub_6F8363B4(
               a1,
               a2,
               (*(_BYTE *)(a3 + 66) << 8)
             + (*(_BYTE *)(a3 + 65) << 16)
             + (*(_BYTE *)(a3 + 64) << 24)
             + *(_BYTE *)(a3 + 67));
  return result;
}
