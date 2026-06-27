int __cdecl sub_6F852CC6(int a1)
{
  int result; // eax@2

  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 344);
    if ( (unsigned __int8)result <= 7u )
    {
      *(_DWORD *)(a1 + 124) |= 4u;
      result = a1;
      *(_BYTE *)(a1 + 345) = 8;
    }
  }
  return result;
}
