unsigned int __cdecl sub_6F857FAC(int a1, unsigned int a2)
{
  unsigned int result; // eax@1

  *(_BYTE *)a1 = BYTE3(a2);
  *(_BYTE *)(a1 + 1) = a2 >> 16;
  *(_BYTE *)(a1 + 2) = BYTE1(a2);
  result = a2;
  *(_BYTE *)(a1 + 3) = a2;
  return result;
}
