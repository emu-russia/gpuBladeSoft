int __cdecl sub_6F852C9A(int a1)
{
  int result; // eax@2

  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 344);
    if ( (_BYTE)result == 16 )
    {
      result = a1;
      *(_DWORD *)(a1 + 124) |= 0x10u;
    }
  }
  return result;
}
