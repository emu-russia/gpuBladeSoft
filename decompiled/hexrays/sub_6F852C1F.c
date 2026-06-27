int __cdecl sub_6F852C1F(int a1, int a2)
{
  int result; // eax@2

  if ( a2 )
  {
    result = a1;
    *(_DWORD *)(a1 + 120) |= 0x700000u;
  }
  else
  {
    result = a1;
    *(_DWORD *)(a1 + 120) &= 0xFF8FFFFF;
  }
  return result;
}
