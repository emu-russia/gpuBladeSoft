void __cdecl sub_6F7C8020(int a1)
{
  unsigned int v1; // eax@2

  if ( a1 )
  {
    v1 = 0;
    do
    {
      *(_DWORD *)(a1 + v1) = 0;
      v1 += 4;
    }
    while ( v1 < 0x18 );
  }
}
