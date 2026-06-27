bool __cdecl sub_6F771F80(int a1, unsigned int a2)
{
  bool result; // al@1

  result = 0;
  if ( a2 <= 8 )
    result = (unsigned int)(dword_6FB557A4[2 * a2] - 3) <= 1;
  return result;
}
