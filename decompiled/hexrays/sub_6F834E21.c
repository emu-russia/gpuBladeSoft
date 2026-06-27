signed int __cdecl sub_6F834E21(int a1, int a2, int a3, int a4)
{
  signed int result; // eax@6
  int v5; // [sp+1Ch] [bp-Ch]@2

  if ( *(_WORD *)(a2 + 74) & 1 && (!sub_6F8380D8(&v5, *(_DWORD *)a2, 100000, a3) || sub_6F83823E(v5)) )
  {
    if ( *(_WORD *)(a2 + 74) & 0x20 || a4 == 2 )
    {
      sub_6F83987F(a1, "gamma value does not match sRGB", 2);
      result = a4 == 2;
    }
    else
    {
      sub_6F83987F(a1, "gamma value does not match libpng estimate", 0);
      result = a4 == 1;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
