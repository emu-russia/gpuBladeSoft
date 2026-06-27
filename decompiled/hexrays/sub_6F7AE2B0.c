signed int __cdecl sub_6F7AE2B0(int a1, int a2, int a3)
{
  signed int result; // eax@2

  if ( a2 < 0 )
  {
    result = -32 - ((a3 - a2) & 0xFFFFFFC0);
    if ( result > 0 )
      result = -32;
  }
  else
  {
    result = ((a3 + a2) & 0xFFFFFFC0) + 32;
    if ( result < 0 )
      result = 32;
  }
  return result;
}
