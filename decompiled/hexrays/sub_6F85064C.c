int __cdecl sub_6F85064C(int a1, int a2, int a3)
{
  int result; // eax@5

  if ( a1 && a2 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a2 + 170) = *(_DWORD *)a3;
      *(_DWORD *)(a2 + 174) = *(_DWORD *)(a3 + 4);
      *(_WORD *)(a2 + 178) = *(_WORD *)(a3 + 8);
      result = a2;
      *(_DWORD *)(a2 + 8) |= 0x20u;
    }
  }
  return result;
}
