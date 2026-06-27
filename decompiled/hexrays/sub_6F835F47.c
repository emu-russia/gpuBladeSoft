signed int __cdecl sub_6F835F47(int a1, int a2, int a3, signed int a4)
{
  int v4; // eax@1
  signed int result; // eax@4
  char v6; // [sp+2Ch] [bp-2Ch]@1

  v4 = sub_6F835CE4((int)&v6, a3);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      *(_WORD *)(a2 + 74) |= 0x8000u;
      sub_6F839044(a1, (int)"internal error checking chromaticities");
    }
    *(_WORD *)(a2 + 74) |= 0x8000u;
    sub_6F839519(a1, "invalid chromaticities");
    result = 0;
  }
  else
  {
    result = sub_6F835DE1(a1, a2, a3, (int)&v6, a4);
  }
  return result;
}
