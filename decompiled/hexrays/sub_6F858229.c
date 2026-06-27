int __cdecl sub_6F858229(int a1, unsigned int a2, int a3, signed int a4)
{
  int result; // eax@4

  if ( a1 )
  {
    if ( a4 < 0 )
      sub_6F839044(a1, (int)"length exceeds PNG maxima");
    sub_6F858091(a1, a2, a4);
    sub_6F85818E(a1, a3, a4);
    result = sub_6F8581DC(a1);
  }
  return result;
}
