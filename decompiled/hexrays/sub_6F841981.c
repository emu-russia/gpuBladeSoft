signed int __cdecl sub_6F841981(int a1, signed int a2, int a3)
{
  int v3; // eax@3

  if ( a2 != -1 && a2 != -100000 )
  {
    if ( a2 == -2 || a2 == -50000 )
    {
      if ( a3 )
        a2 = 151724;
      else
        a2 = 65909;
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 120);
    BYTE1(v3) |= 0x10u;
    *(_DWORD *)(a1 + 120) = v3;
    if ( a3 )
      a2 = 220000;
    else
      a2 = 45455;
  }
  return a2;
}
