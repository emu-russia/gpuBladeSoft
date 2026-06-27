signed int __cdecl sub_6F7AE330(int a1, int a2, int a3)
{
  signed int result; // eax@2

  if ( a2 < 0 )
  {
    result = -((a3 - a2 + 63) & 0xFFFFFFC0);
    if ( result >= 0 && ((a3 - a2 + 63) & 0xFFFFFFC0) != 0 )
      result = 0;
  }
  else
  {
    result = (a2 + a3 + 63) & 0xFFFFFFC0;
    if ( result < 0 )
      result = 0;
  }
  return result;
}
