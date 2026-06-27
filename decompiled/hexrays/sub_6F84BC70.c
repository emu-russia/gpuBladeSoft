int __cdecl sub_6F84BC70(int a1, int a2, unsigned int a3)
{
  int result; // eax@4
  unsigned __int8 v4; // [sp+1Fh] [bp-9h]@7

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 6 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "out of place");
  }
  else if ( a3 == 1 )
  {
    sub_6F84A73A(a1, (int)&v4, 1);
    result = sub_6F84A77C(a1, 0);
    if ( !result )
    {
      result = *(_WORD *)(a1 + 806);
      if ( (signed __int16)result >= 0 )
      {
        if ( *(_WORD *)(a1 + 806) & 4 )
        {
          *(_WORD *)(a1 + 806) |= 0x8000u;
          sub_6F835096(a1, a2);
          result = sub_6F839842(a1, "too many profiles");
        }
        else
        {
          sub_6F8363B4(a1, a1 + 732, v4);
          result = sub_6F835096(a1, a2);
        }
      }
    }
  }
  else
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "invalid");
  }
  return result;
}
