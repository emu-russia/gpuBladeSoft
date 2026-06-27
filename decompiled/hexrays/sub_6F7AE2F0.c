signed int __cdecl sub_6F7AE2F0(int a1, int a2, int a3)
{
  signed int result; // eax@2

  if ( a2 < 0 )
  {
    result = -((a3 - a2) & 0xFFFFFFC0);
    if ( ((a3 - a2) & 0xFFFFFFC0 & 0x80000000) != 0 )
      result = 0;
  }
  else
  {
    result = (a3 + a2) & 0xFFFFFFC0;
    if ( result < 0 )
      result = 0;
  }
  return result;
}
