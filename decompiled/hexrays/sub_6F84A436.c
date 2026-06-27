int __cdecl sub_6F84A436(int a1, int a2)
{
  int result; // eax@2

  if ( (*(_BYTE *)(a2 + 2) << 8) + (*(_BYTE *)(a2 + 1) << 16) + (*(_BYTE *)a2 << 24) + *(_BYTE *)(a2 + 3) < 0 )
  {
    if ( a1 )
      sub_6F839262(a1, "PNG fixed point integer out of range");
    result = -1;
  }
  else
  {
    result = (*(_BYTE *)(a2 + 2) << 8) + (*(_BYTE *)(a2 + 1) << 16) + (*(_BYTE *)a2 << 24) + *(_BYTE *)(a2 + 3);
  }
  return result;
}
