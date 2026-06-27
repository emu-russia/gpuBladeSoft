int __cdecl sub_6F850E42(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // eax@4
  int v6; // edx@4
  int result; // eax@4

  if ( a1 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a2 + 180) = a3;
      *(_DWORD *)(a2 + 184) = a4;
      *(_BYTE *)(a2 + 188) = a5;
      v5 = *(_DWORD *)(a2 + 8);
      BYTE1(v5) |= 1u;
      v6 = v5;
      result = a2;
      *(_DWORD *)(a2 + 8) = v6;
    }
  }
  return result;
}
