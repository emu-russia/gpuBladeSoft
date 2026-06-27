int __cdecl sub_6F84B6DB(int a1, int a2, unsigned int a3)
{
  int result; // eax@4
  char v4; // [sp+18h] [bp-10h]@7
  int v5; // [sp+1Ch] [bp-Ch]@8

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 6 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "out of place");
  }
  else if ( a3 == 4 )
  {
    sub_6F84A73A(a1, (int)&v4, 4);
    result = sub_6F84A77C(a1, 0);
    if ( !result )
    {
      v5 = sub_6F84A436(0, (int)&v4);
      sub_6F834EDE(a1, a1 + 732, v5);
      result = sub_6F835096(a1, a2);
    }
  }
  else
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "invalid");
  }
  return result;
}
