signed int __cdecl sub_6F8348CA(int a1, signed int a2)
{
  signed int result; // eax@1

  *(_BYTE *)a1 = BYTE3(a2);
  *(_BYTE *)(a1 + 1) = a2 >> 16;
  *(_BYTE *)(a1 + 2) = BYTE1(a2);
  result = a2;
  *(_BYTE *)(a1 + 3) = a2;
  return result;
}
