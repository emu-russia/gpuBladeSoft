int __stdcall sub_6F8C3830(unsigned __int16 a1)
{
  int result; // eax@7

  if ( a1 == 16 )
    return sub_6F8A3840("xdigit");
  if ( a1 <= 0x10u )
  {
    if ( a1 == 4 )
      return sub_6F8A3840("alpha");
    if ( a1 > 4u )
    {
      if ( a1 == 8 )
        return sub_6F8A3840("digit");
      if ( a1 == 12 )
        return sub_6F8A3840("alnum");
    }
    else
    {
      if ( a1 == 1 )
        return sub_6F8A3840("upper");
      if ( a1 == 2 )
        return sub_6F8A3840("lower");
    }
  }
  else
  {
    if ( a1 == 256 )
      return sub_6F8A3840("cntrl");
    if ( a1 > 0x100u )
    {
      if ( a1 == 512 )
        return sub_6F8A3840("punct");
      if ( a1 == 524 )
        return sub_6F8A3840("graph");
    }
    else
    {
      if ( a1 == 32 )
        return sub_6F8A3840("space");
      if ( a1 == 64 )
        return sub_6F8A3840("print");
    }
  }
  result = 0;
  if ( a1 == 1024 )
    result = sub_6F8A3840("blank");
  return result;
}
