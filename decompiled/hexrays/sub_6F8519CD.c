int __cdecl sub_6F8519CD(int a1, int a2, int a3, int a4)
{
  int result; // eax@1

  result = sub_6F851A11(a1, a2, a3, a4);
  if ( result )
    sub_6F839044(a1, (int)"Insufficient memory to store text");
  return result;
}
