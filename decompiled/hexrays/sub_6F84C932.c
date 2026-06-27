void __cdecl sub_6F84C932(int a1, int a2, unsigned int a3)
{
  unsigned __int8 v3; // [sp+28h] [bp-110h]@15
  unsigned __int8 v4; // [sp+29h] [bp-10Fh]@15
  unsigned __int8 v5; // [sp+2Ah] [bp-10Eh]@15
  unsigned __int8 v6; // [sp+2Bh] [bp-10Dh]@15
  unsigned __int8 v7; // [sp+2Ch] [bp-10Ch]@15
  unsigned __int8 v8; // [sp+2Dh] [bp-10Bh]@15
  unsigned __int8 v9; // [sp+2Eh] [bp-10Ah]@11
  unsigned __int8 v10; // [sp+2Fh] [bp-109h]@11
  char v11; // [sp+30h] [bp-108h]@23

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 4 )
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "out of place");
    return;
  }
  if ( a2 && *(_DWORD *)(a2 + 8) & 0x10 )
  {
    sub_6F84A77C(a1, a3);
    sub_6F839842(a1, "duplicate");
    return;
  }
  if ( *(_BYTE *)(a1 + 343) )
  {
    if ( *(_BYTE *)(a1 + 343) == 2 )
    {
      if ( a3 != 6 )
      {
        sub_6F84A77C(a1, a3);
        sub_6F839842(a1, "invalid");
        return;
      }
      sub_6F84A73A(a1, (int)&v3, 6);
      *(_WORD *)(a1 + 336) = 1;
      *(_WORD *)(a1 + 442) = v4 + (v3 << 8);
      *(_WORD *)(a1 + 444) = v6 + (v5 << 8);
      *(_WORD *)(a1 + 446) = v8 + (v7 << 8);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 343) != 3 )
      {
        sub_6F84A77C(a1, a3);
        sub_6F839842(a1, "invalid with alpha channel");
        return;
      }
      if ( !(*(_DWORD *)(a1 + 116) & 2) )
      {
        sub_6F84A77C(a1, a3);
        sub_6F839842(a1, "out of place");
        return;
      }
      if ( *(_WORD *)(a1 + 328) < a3 || a3 > 0x100 || !a3 )
      {
        sub_6F84A77C(a1, a3);
        sub_6F839842(a1, "invalid");
        return;
      }
      sub_6F84A73A(a1, (int)&v11, a3);
      *(_WORD *)(a1 + 336) = a3;
    }
  }
  else
  {
    if ( a3 != 2 )
    {
      sub_6F84A77C(a1, a3);
      sub_6F839842(a1, "invalid");
      return;
    }
    sub_6F84A73A(a1, (int)&v9, 2);
    *(_WORD *)(a1 + 336) = 1;
    *(_WORD *)(a1 + 448) = v10 + (v9 << 8);
  }
  if ( sub_6F84A77C(a1, 0) )
    *(_WORD *)(a1 + 336) = 0;
  else
    sub_6F85206B(a1, a2, &v11, *(_WORD *)(a1 + 336), a1 + 440);
}
