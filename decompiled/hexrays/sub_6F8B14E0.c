int __cdecl sub_6F8B14E0(_WORD *a1, int a2)
{
  int result; // eax@1

  result = 0;
  if ( a2 && *a1 )
  {
    do
      ++result;
    while ( a2 != result && a1[result] );
  }
  return result;
}
