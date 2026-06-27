int __cdecl sub_6F7A9E20(int a1, int a2, int a3)
{
  int result; // eax@2

  if ( a2 < 0 )
  {
    result = a2 - a3;
    if ( a2 - a3 > 0 )
      result = 0;
  }
  else
  {
    result = a3 + a2;
    if ( a3 + a2 < 0 )
      result = 0;
  }
  return result;
}
