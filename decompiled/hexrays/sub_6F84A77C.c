signed int __cdecl sub_6F84A77C(int a1, unsigned int a2)
{
  bool v2; // al@8
  signed int result; // eax@11
  char v4; // [sp+1Ch] [bp-40Ch]@4
  int v5; // [sp+41Ch] [bp-Ch]@2

  while ( a2 )
  {
    v5 = 1024;
    if ( a2 < 0x400 )
      v5 = a2;
    a2 -= v5;
    sub_6F84A73A(a1, (int)&v4, v5);
  }
  if ( sub_6F84A846(a1) )
  {
    if ( *(_DWORD *)(a1 + 284) & 0x20000000 )
      v2 = (*(_DWORD *)(a1 + 120) & 0x200) == 0;
    else
      v2 = (*(_DWORD *)(a1 + 120) & 0x400) != 0;
    if ( v2 )
    {
      sub_6F8397EC(a1, "CRC error");
      result = 1;
    }
    else
    {
      sub_6F839842(a1, "CRC error");
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
