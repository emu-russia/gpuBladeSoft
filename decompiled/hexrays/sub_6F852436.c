int __cdecl sub_6F852436(int a1, char a2)
{
  int v3; // [sp+24h] [bp+Ch]@1

  v3 = a2 & 0xB;
  if ( !v3 && !(*(_DWORD *)(a1 + 116) & 0x8000) )
  {
    sub_6F8395B4(a1, "png_set_unknown_chunks now expects a valid location");
    v3 = *(_DWORD *)(a1 + 116) & 0xB;
  }
  if ( !v3 )
    sub_6F839044(a1, (int)"invalid location in png_set_unknown_chunks");
  while ( (v3 & -v3) != v3 )
    v3 &= ~(v3 & -v3);
  return v3;
}
