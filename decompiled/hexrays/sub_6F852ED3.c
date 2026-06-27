int __cdecl sub_6F852ED3(int a1)
{
  int result; // eax@2

  if ( a1 )
  {
    result = a1;
    *(_DWORD *)(a1 + 124) |= 0x80000u;
  }
  return result;
}
