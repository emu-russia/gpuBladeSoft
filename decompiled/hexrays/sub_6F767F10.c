signed int __cdecl sub_6F767F10(_DWORD *a1, int a2)
{
  signed int v2; // esi@1

  v2 = 18;
  if ( *(_UNKNOWN **)(a2 + 72) == &loc_6F75746C )
  {
    v2 = sub_6F76FF60((int *)*a1, *(_WORD *)(a2 + 110), *(_WORD *)(a2 + 108), (int)(a1 + 5));
    if ( !v2 )
      sub_6F770190(a2 + 108, (int)(a1 + 5));
  }
  return v2;
}
