signed int __cdecl sub_6F84FDF0(int a1)
{
  signed int result; // eax@4

  if ( !(*(_DWORD *)(a1 + 120) & 8) )
  {
    sub_6F84FB3B(a1, 0, 0);
    *(_DWORD *)(a1 + 144) = 0;
    if ( !(*(_DWORD *)(a1 + 120) & 8) )
    {
      *(_DWORD *)(a1 + 116) |= 8u;
      *(_DWORD *)(a1 + 120) |= 8u;
    }
  }
  result = *(_DWORD *)(a1 + 128);
  if ( result == 1229209940 )
  {
    *(_DWORD *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 128) = 0;
    result = sub_6F84A77C(a1, *(_DWORD *)(a1 + 316));
  }
  return result;
}
