int __cdecl sub_6F859C7F(int a1, int a2, int a3, signed int a4, int a5)
{
  int result; // eax@4
  char v6; // [sp+1Ah] [bp-Eh]@9
  char v7; // [sp+1Ch] [bp-Ch]@11
  unsigned __int8 v8; // [sp+1Eh] [bp-Ah]@11

  if ( a5 == 3 )
  {
    if ( a4 > 0 && *(_WORD *)(a1 + 328) >= a4 )
      result = sub_6F858229(a1, 0x74524E53u, a2, a4);
    else
      result = sub_6F8395B4(a1, "Invalid number of transparent colors specified");
  }
  else if ( a5 )
  {
    if ( a5 == 2 )
    {
      sub_6F857FE5((int)&v6, *(_WORD *)(a3 + 2));
      sub_6F857FE5((int)&v7, *(_WORD *)(a3 + 4));
      sub_6F857FE5((int)&v8, *(_WORD *)(a3 + 6));
      if ( *(_BYTE *)(a1 + 344) == 8 && (unsigned __int8)(v7 | v6) | v8 )
        result = sub_6F8395B4(a1, "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
      else
        result = sub_6F858229(a1, 0x74524E53u, (int)&v6, 6);
    }
    else
    {
      result = sub_6F8395B4(a1, "Can't write tRNS with an alpha channel");
    }
  }
  else if ( *(_WORD *)(a3 + 8) < 1 << *(_BYTE *)(a1 + 344) )
  {
    sub_6F857FE5((int)&v6, *(_WORD *)(a3 + 8));
    result = sub_6F858229(a1, 0x74524E53u, (int)&v6, 2);
  }
  else
  {
    result = sub_6F8395B4(a1, "Ignoring attempt to write tRNS chunk out-of-range for bit_depth");
  }
  return result;
}
