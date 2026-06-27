signed int __cdecl sub_6F8360C7(unsigned __int8 a1)
{
  signed int result; // eax@3

  if ( a1 <= 0x1Fu || a1 > 0x7Eu )
    result = 63;
  else
    result = a1;
  return result;
}
