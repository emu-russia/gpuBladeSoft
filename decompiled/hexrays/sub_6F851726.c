int __cdecl sub_6F851726(int a1, int a2, int a3)
{
  int result; // eax@5

  if ( a1 && a2 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a2 + 148) = *(_DWORD *)a3;
      *(_BYTE *)(a2 + 152) = *(_BYTE *)(a3 + 4);
      result = a2;
      *(_DWORD *)(a2 + 8) |= 2u;
    }
  }
  return result;
}
