int __cdecl sub_6F8595F2(int a1, signed int a2)
{
  char v3; // [sp+1Fh] [bp-9h]@3

  if ( a2 > 3 )
    sub_6F839262(a1, "Invalid sRGB rendering intent specified");
  v3 = a2;
  return sub_6F858229(a1, 0x73524742u, (int)&v3, 1);
}
