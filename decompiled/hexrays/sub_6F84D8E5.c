void __cdecl sub_6F84D8E5(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax@18
  int v4; // [sp+20h] [bp-18h]@16
  unsigned int v5; // [sp+24h] [bp-14h]@16
  unsigned int v6; // [sp+28h] [bp-10h]@22
  void *v7; // [sp+2Ch] [bp-Ch]@10

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 4 )
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "out of place");
  }
  else if ( a2 && *(_DWORD *)(a2 + 8) & 0x4000 )
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "duplicate");
  }
  else if ( a3 > 3 )
  {
    v7 = sub_6F84A90E(a1, a3 + 1, 2);
    if ( v7 )
    {
      sub_6F84A73A(a1, (int)v7, a3);
      *((_BYTE *)v7 + a3) = 0;
      if ( !sub_6F84A77C(a1, 0) )
      {
        if ( *(_BYTE *)v7 == 1 || *(_BYTE *)v7 == 2 )
        {
          v5 = 1;
          v4 = 0;
          if ( sub_6F837771((int)v7, a3, &v4, (int *)&v5) && v5 < a3 && (v3 = v5, ++v5, !*((_BYTE *)v7 + v3)) )
          {
            if ( (v4 & 0x188) == 264 )
            {
              v6 = v5;
              v4 = 0;
              if ( sub_6F837771((int)v7, a3, &v4, (int *)&v5) && v5 == a3 )
              {
                if ( (v4 & 0x188) == 264 )
                  sub_6F8511EF(a1, a2, *(_BYTE *)v7, (const char *)v7 + 1, (const char *)v7 + v6);
                else
                  sub_6F839842(a1, "non-positive height");
              }
              else
              {
                sub_6F839842(a1, "bad height format");
              }
            }
            else
            {
              sub_6F839842(a1, "non-positive width");
            }
          }
          else
          {
            sub_6F839842(a1, "bad width format");
          }
        }
        else
        {
          sub_6F839842(a1, "invalid unit");
        }
      }
    }
    else
    {
      sub_6F839842(a1, "out of memory");
      sub_6F84A77C(a1, a3);
    }
  }
  else
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "invalid");
  }
}
