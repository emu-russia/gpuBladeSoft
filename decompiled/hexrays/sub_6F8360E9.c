int __cdecl sub_6F8360E9(int a1, unsigned int a2)
{
  int result; // eax@1

  *(_BYTE *)a1 = 39;
  *(_BYTE *)(a1 + 1) = sub_6F8360C7(BYTE3(a2));
  *(_BYTE *)(a1 + 2) = sub_6F8360C7(a2 >> 16);
  *(_BYTE *)(a1 + 3) = sub_6F8360C7(BYTE1(a2));
  *(_BYTE *)(a1 + 4) = sub_6F8360C7(a2);
  result = a1 + 5;
  *(_BYTE *)(a1 + 5) = 39;
  return result;
}
