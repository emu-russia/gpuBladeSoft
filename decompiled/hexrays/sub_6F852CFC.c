int __cdecl sub_6F852CFC(int a1)
{
  int result; // eax@2

  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 344);
    if ( (unsigned __int8)result <= 7u )
    {
      result = a1;
      *(_DWORD *)(a1 + 124) |= 0x10000u;
    }
  }
  return result;
}
