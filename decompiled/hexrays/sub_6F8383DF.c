unsigned int __cdecl sub_6F8383DF(unsigned int a1, signed int a2)
{
  double v2; // st7@3
  unsigned int result; // eax@3

  if ( a1 && a1 <= 0xFFFE )
  {
    v2 = sub_6F8A7290((double)a1 / 65535.0, (double)a2 * 0.00001);
    result = (signed int)sub_6F8A7260(v2 * 65535.0 + 0.5);
  }
  else
  {
    result = a1;
  }
  return result;
}
