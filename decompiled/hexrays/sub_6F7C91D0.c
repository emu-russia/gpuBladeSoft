signed int __cdecl sub_6F7C91D0(int *a1, int a2)
{
  signed int result; // eax@1
  unsigned int v3; // eax@3

  result = 33;
  if ( a1 )
  {
    result = 6;
    if ( a2 )
    {
      sub_6F773D90(*a1, *(_DWORD *)(a2 + 12));
      v3 = 0;
      do
      {
        *(_DWORD *)(a2 + v3) = 0;
        v3 += 4;
      }
      while ( v3 < 0x18 );
      result = 0;
    }
  }
  return result;
}
