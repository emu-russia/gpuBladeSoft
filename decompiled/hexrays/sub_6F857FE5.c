int __cdecl sub_6F857FE5(int a1, int a2)
{
  int result; // eax@1

  *(_BYTE *)a1 = BYTE1(a2);
  result = a2;
  *(_BYTE *)(a1 + 1) = a2;
  return result;
}
