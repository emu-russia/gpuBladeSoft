int __cdecl sub_6F852D2A(int a1, int a2)
{
  int result; // eax@2

  if ( a1 )
  {
    *(_DWORD *)(a1 + 124) |= 8u;
    result = a1;
    *(_DWORD *)(a1 + 429) = *(_DWORD *)a2;
    *(_BYTE *)(a1 + 433) = *(_BYTE *)(a2 + 4);
  }
  return result;
}
