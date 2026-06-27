void __cdecl sub_6F84D4AC(int a1, int a2, unsigned int a3)
{
  _DWORD *v3; // [sp+3Ch] [bp-2Ch]@30
  const char *v4; // [sp+40h] [bp-28h]@16
  char v5; // [sp+46h] [bp-22h]@16
  char v6; // [sp+47h] [bp-21h]@16
  int v7; // [sp+48h] [bp-20h]@16
  int v8; // [sp+4Ch] [bp-1Ch]@16
  unsigned int v9; // [sp+50h] [bp-18h]@14
  const char *v10; // [sp+54h] [bp-14h]@8
  signed int k; // [sp+58h] [bp-10h]@32
  const char *i; // [sp+5Ch] [bp-Ch]@11
  _BYTE *j; // [sp+5Ch] [bp-Ch]@27

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 4 )
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "out of place");
  }
  else if ( a2 && *(_DWORD *)(a2 + 8) & 0x400 )
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "duplicate");
  }
  else
  {
    v10 = (const char *)sub_6F84A90E(a1, a3 + 1, 2);
    if ( v10 )
    {
      sub_6F84A73A(a1, (int)v10, a3);
      if ( !sub_6F84A77C(a1, 0) )
      {
        v10[a3] = 0;
        for ( i = v10; *i; ++i )
          ;
        v9 = (unsigned int)&v10[a3];
        if ( i + 12 < &v10[a3] )
        {
          v8 = (i[3] << 8) + (i[2] << 16) + (i[1] << 24) + i[4];
          v7 = (i[7] << 8) + (i[6] << 16) + (i[5] << 24) + i[8];
          v6 = i[9];
          v5 = i[10];
          v4 = i + 11;
          if ( (v6 || v5 == 2) && (v6 != 1 || v5 == 3) && (v6 != 2 || v5 == 3) && (v6 != 3 || v5 == 4) )
          {
            if ( (unsigned __int8)v6 > 3u )
              sub_6F839842(a1, "unrecognized equation type");
            for ( j = i + 11; *j; ++j )
              ;
            v3 = sub_6F83B561(a1, 4 * (unsigned __int8)v5);
            if ( v3 )
            {
              for ( k = 0; (unsigned __int8)v5 > k; ++k )
              {
                v3[k] = ++j;
                while ( (unsigned int)j <= v9 && *j )
                  ++j;
                if ( (unsigned int)j > v9 )
                {
                  sub_6F83B5A7(a1, (int)v3);
                  sub_6F839842(a1, "invalid data");
                  return;
                }
              }
              sub_6F850E8C(a1, a2, v10, v8, v7, (unsigned __int8)v6, (unsigned __int8)v5, v4, (int)v3);
              sub_6F83B5A7(a1, (int)v3);
            }
            else
            {
              sub_6F839842(a1, "out of memory");
            }
          }
          else
          {
            sub_6F839842(a1, "invalid parameter count");
          }
        }
        else
        {
          sub_6F839842(a1, "invalid");
        }
      }
    }
    else
    {
      sub_6F84A77C(a1, a3);
      sub_6F839842(a1, "out of memory");
    }
  }
}
