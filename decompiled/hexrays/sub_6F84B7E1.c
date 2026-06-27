int __cdecl sub_6F84B7E1(int a1, int a2, unsigned int a3)
{
  int result; // eax@4
  char v4; // [sp+18h] [bp-10h]@1
  char v5; // [sp+19h] [bp-Fh]@1
  char v6; // [sp+1Ah] [bp-Eh]@1
  char v7; // [sp+1Bh] [bp-Dh]@1
  int v8; // [sp+1Ch] [bp-Ch]@9

  v7 = 0;
  v6 = 0;
  v5 = 0;
  v4 = 0;
  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 6 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "out of place");
  }
  else if ( a2 && *(_DWORD *)(a2 + 8) & 2 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "duplicate");
  }
  else
  {
    if ( *(_BYTE *)(a1 + 343) == 3 )
      v8 = 3;
    else
      v8 = *(_BYTE *)(a1 + 347);
    if ( a3 == v8 && a3 <= 4 )
    {
      sub_6F84A73A(a1, (int)&v4, v8);
      result = sub_6F84A77C(a1, 0);
      if ( !result )
      {
        if ( *(_BYTE *)(a1 + 343) & 2 )
        {
          *(_BYTE *)(a1 + 424) = v4;
          *(_BYTE *)(a1 + 425) = v5;
          *(_BYTE *)(a1 + 426) = v6;
          *(_BYTE *)(a1 + 428) = v7;
        }
        else
        {
          *(_BYTE *)(a1 + 427) = v4;
          *(_BYTE *)(a1 + 424) = v4;
          *(_BYTE *)(a1 + 425) = v4;
          *(_BYTE *)(a1 + 426) = v4;
          *(_BYTE *)(a1 + 428) = v5;
        }
        result = sub_6F851726(a1, a2, a1 + 424);
      }
    }
    else
    {
      sub_6F839842(a1, "invalid");
      result = sub_6F84A77C(a1, a3);
    }
  }
  return result;
}
