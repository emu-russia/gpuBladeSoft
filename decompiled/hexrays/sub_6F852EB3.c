int __cdecl sub_6F852EB3(int a1)
{
  int result; // eax@2

  if ( a1 )
  {
    result = a1;
    *(_DWORD *)(a1 + 124) |= 0x20000u;
  }
  return result;
}
