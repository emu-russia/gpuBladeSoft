void __cdecl sub_6F833A70(int a1, signed int a2)
{
  char v2; // al@5

  if ( a1 )
  {
    if ( a2 > 8 )
      sub_6F839044(a1, (int)"Too many bytes for PNG signature");
    if ( a2 < 0 )
      v2 = 0;
    else
      v2 = a2;
    *(_BYTE *)(a1 + 349) = v2;
  }
}
