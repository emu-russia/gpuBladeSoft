int __cdecl sub_6F71FBF0(int a1, int a2, int a3)
{
  int v3; // ecx@1
  int result; // eax@1
  int v5; // edx@1
  int v6; // esi@2
  int v7; // edi@4

  v3 = *(_DWORD *)(dword_6FD400F4 + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  result = dword_6FBB52F8;
  v5 = dword_6FBB52F4;
  if ( dword_6FBB52F8 > 0 )
  {
    v6 = 0;
    do
    {
      if ( v5 > 0 )
      {
        v7 = 0;
        do
        {
          *(_DWORD *)(v3 + 4 * v7) = a3;
          v5 = dword_6FBB52F4;
          ++v7;
        }
        while ( dword_6FBB52F4 > v7 );
        result = dword_6FBB52F8;
      }
      ++v6;
      v3 += 4 * dword_6FD40980;
    }
    while ( v6 < result );
  }
  return result;
}
