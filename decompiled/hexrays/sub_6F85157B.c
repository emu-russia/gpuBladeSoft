int __cdecl sub_6F85157B(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // eax@4
  int v6; // edx@4
  int result; // eax@4

  if ( a1 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a2 + 192) = a3;
      *(_DWORD *)(a2 + 196) = a4;
      *(_BYTE *)(a2 + 200) = a5;
      v5 = *(_DWORD *)(a2 + 8);
      LOBYTE(v5) = v5 | 0x80;
      v6 = v5;
      result = a2;
      *(_DWORD *)(a2 + 8) = v6;
    }
  }
  return result;
}
