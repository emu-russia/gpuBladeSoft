unsigned int __stdcall sub_6F8D8B60(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int result; // eax@1

  result = a3 - a2;
  if ( a3 - a2 > a4 )
    result = a4;
  return result;
}
