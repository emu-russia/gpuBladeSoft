void __cdecl sub_6F84CF86(int a1, int a2, unsigned int a3)
{
  unsigned __int8 v3; // [sp+16h] [bp-212h]@13
  unsigned __int8 v4; // [sp+17h] [bp-211h]@13
  __int16 v5[256]; // [sp+18h] [bp-210h]@13
  unsigned int v6; // [sp+218h] [bp-10h]@9
  unsigned int i; // [sp+21Ch] [bp-Ch]@12

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( !(*(_DWORD *)(a1 + 116) & 4) && *(_DWORD *)(a1 + 116) & 2 )
  {
    if ( a2 && *(_DWORD *)(a2 + 8) & 0x40 )
    {
      sub_6F84A77C(a1, a3);
      sub_6F839842(a1, "duplicate");
    }
    else
    {
      v6 = a3 >> 1;
      if ( *(_WORD *)(a1 + 328) == a3 >> 1 && v6 <= 0x100 )
      {
        for ( i = 0; i < v6; ++i )
        {
          sub_6F84A73A(a1, (int)&v3, 2);
          v5[i] = v4 + (v3 << 8);
        }
        if ( !sub_6F84A77C(a1, 0) )
          sub_6F850BB2(a1, a2, (int)v5);
      }
      else
      {
        sub_6F84A77C(a1, a3);
        sub_6F839842(a1, "invalid");
      }
    }
  }
  else
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "out of place");
  }
}
