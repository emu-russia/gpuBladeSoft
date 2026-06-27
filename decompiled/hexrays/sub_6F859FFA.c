int __cdecl sub_6F859FFA(int a1, int a2, signed int a3)
{
  int result; // eax@2
  char v4; // [sp+19h] [bp-Fh]@4
  int i; // [sp+1Ch] [bp-Ch]@3

  if ( *(_WORD *)(a1 + 328) >= a3 )
  {
    sub_6F858091(a1, 0x68495354u, 2 * a3);
    for ( i = 0; i < a3; ++i )
    {
      sub_6F857FE5((int)&v4, *(_WORD *)(2 * i + a2));
      sub_6F85818E(a1, (int)&v4, 2);
    }
    result = sub_6F8581DC(a1);
  }
  else
  {
    result = sub_6F839262(a1, "Invalid number of histogram entries specified");
  }
  return result;
}
