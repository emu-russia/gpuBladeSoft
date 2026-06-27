signed int __cdecl sub_6F842A88(int a1, signed int a2, signed int a3)
{
  signed int result; // eax@1
  signed int v4; // [sp+24h] [bp+Ch]@2
  signed int v5; // [sp+28h] [bp+10h]@2

  result = sub_6F84173B(a1, 0);
  if ( result )
  {
    v4 = sub_6F841981(a1, a2, 1);
    v5 = sub_6F841981(a1, a3, 0);
    if ( v5 <= 0 )
      sub_6F839044(a1, (int)"invalid file gamma in png_set_gamma");
    if ( v4 <= 0 )
      sub_6F839044(a1, (int)"invalid screen gamma in png_set_gamma");
    *(_DWORD *)(a1 + 732) = v5;
    *(_WORD *)(a1 + 806) |= 1u;
    result = a1;
    *(_DWORD *)(a1 + 396) = v4;
  }
  return result;
}
