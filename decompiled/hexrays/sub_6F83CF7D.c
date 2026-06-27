BOOL __cdecl sub_6F83CF7D(signed int a1)
{
  BOOL result; // eax@3

  if ( a1 > 99999 )
  {
    result = 1;
  }
  else if ( a1 )
  {
    result = sub_6F83823E((11 * a1 + 2) / 5);
  }
  else
  {
    result = 0;
  }
  return result;
}
