signed int __cdecl sub_6F852D60(int a1)
{
  signed int result; // eax@3

  if ( a1 && *(_BYTE *)(a1 + 340) )
  {
    *(_DWORD *)(a1 + 124) |= 2u;
    result = 7;
  }
  else
  {
    result = 1;
  }
  return result;
}
