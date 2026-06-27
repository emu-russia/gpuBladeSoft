signed int __cdecl sub_6F83CEFC(int a1)
{
  signed int v2; // [sp+Ch] [bp-4h]@1

  v2 = 0;
  if ( *(_BYTE *)(a1 + 343) & 2 )
    v2 = 2;
  if ( *(_BYTE *)(a1 + 343) & 4 )
  {
    v2 |= 1u;
  }
  else if ( *(_WORD *)(a1 + 336) )
  {
    v2 |= 1u;
  }
  if ( *(_BYTE *)(a1 + 344) == 16 )
    v2 |= 4u;
  if ( *(_BYTE *)(a1 + 343) & 1 )
    v2 |= 8u;
  return v2;
}
