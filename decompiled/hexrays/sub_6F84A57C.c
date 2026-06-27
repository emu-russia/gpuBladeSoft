int __cdecl sub_6F84A57C(int a1, int a2)
{
  int result; // eax@1
  int v3; // eax@8
  int v4; // edx@8
  unsigned int v5; // [sp+1Ch] [bp-Ch]@2

  result = *(_BYTE *)(a1 + 349);
  if ( (unsigned __int8)result <= 7u )
  {
    v5 = *(_BYTE *)(a1 + 349);
    *(_DWORD *)(a1 + 708) = 17;
    sub_6F8414F4(a1, a2 + v5 + 32, 8 - v5);
    *(_BYTE *)(a1 + 349) = 8;
    result = sub_6F833AB2(a2 + 32, v5, 8 - v5);
    if ( result )
    {
      if ( v5 <= 3 )
      {
        if ( sub_6F833AB2(a2 + 32, v5, 8 - v5 - 4) )
          sub_6F839044(a1, (int)"Not a PNG file");
      }
      sub_6F839044(a1, (int)"PNG file corrupted by ASCII conversion");
    }
    if ( v5 <= 2 )
    {
      v3 = *(_DWORD *)(a1 + 116);
      BYTE1(v3) |= 0x10u;
      v4 = v3;
      result = a1;
      *(_DWORD *)(a1 + 116) = v4;
    }
  }
  return result;
}
