int __cdecl sub_6F852E68(int a1, __int16 a2, int a3)
{
  int result; // eax@2

  if ( a1 )
  {
    sub_6F852D96(a1, a2, a3);
    result = *(_DWORD *)(a1 + 124) & 0x8000;
    if ( result )
    {
      result = a1;
      *(_DWORD *)(a1 + 124) |= 0x1000000u;
    }
  }
  return result;
}
