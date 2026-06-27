int __cdecl sub_6F834FA7(int a1, int a2)
{
  int result; // eax@2
  int v3; // eax@4
  int v4; // eax@5

  if ( *(_WORD *)(a2 + 114) >= 0 )
  {
    if ( *(_WORD *)(a2 + 114) & 0x80 )
    {
      v3 = *(_DWORD *)(a2 + 8);
      BYTE1(v3) |= 8u;
      *(_DWORD *)(a2 + 8) = v3;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 8);
      BYTE1(v4) &= 0xF7u;
      *(_DWORD *)(a2 + 8) = v4;
    }
    if ( *(_WORD *)(a2 + 114) & 2 )
      *(_DWORD *)(a2 + 8) |= 4u;
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFFB;
    if ( *(_WORD *)(a2 + 114) & 1 )
    {
      result = a2;
      *(_DWORD *)(a2 + 8) |= 1u;
    }
    else
    {
      result = a2;
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFFE;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= 0xFFFFE7FA;
    result = sub_6F8341B7(a1, a2, 16, -1);
  }
  return result;
}
