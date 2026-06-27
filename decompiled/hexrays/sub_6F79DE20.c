int __cdecl sub_6F79DE20(int a1, unsigned int a2)
{
  int result; // eax@1

  result = 0;
  if ( a2 <= 0xFFFF )
  {
    if ( *(_BYTE *)(a1 + 20) & 1 )
      result = sub_6F79D5C0(a1, &a2, 0);
    else
      result = sub_6F79D7F0(a1, &a2, 0);
  }
  return result;
}
