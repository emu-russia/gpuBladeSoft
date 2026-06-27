int __cdecl sub_6F84A3D0(int a1, int a2)
{
  if ( (*(_BYTE *)(a2 + 2) << 8) + (*(_BYTE *)(a2 + 1) << 16) + (*(_BYTE *)a2 << 24) + *(_BYTE *)(a2 + 3) < 0 )
    sub_6F839044(a1, (int)"PNG unsigned integer out of range");
  return (*(_BYTE *)(a2 + 2) << 8) + (*(_BYTE *)(a2 + 1) << 16) + (*(_BYTE *)a2 << 24) + *(_BYTE *)(a2 + 3);
}
