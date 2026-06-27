int __cdecl sub_6F84B3DA(int a1, int a2, unsigned int a3)
{
  int result; // eax@6
  char v4; // [sp+11h] [bp-317h]@15
  char v5; // [sp+12h] [bp-316h]@15
  char v6; // [sp+13h] [bp-315h]@15
  char v7; // [sp+14h] [bp-314h]@14
  int v8; // [sp+314h] [bp-14h]@14
  char *v9; // [sp+318h] [bp-10h]@14
  int v10; // [sp+31Ch] [bp-Ch]@14

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 2 )
    sub_6F83979A(a1, (int)"duplicate");
  if ( *(_DWORD *)(a1 + 116) & 4 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "out of place");
  }
  else
  {
    *(_DWORD *)(a1 + 116) |= 2u;
    if ( *(_BYTE *)(a1 + 343) & 2 )
    {
      if ( a3 > 0x300 || a3 % 3 )
      {
        sub_6F84A77C(a1, a3);
        if ( *(_BYTE *)(a1 + 343) == 3 )
          sub_6F83979A(a1, (int)"invalid");
        result = sub_6F839842(a1, "invalid");
      }
      else
      {
        v8 = (signed int)a3 / 3;
        v10 = 0;
        v9 = &v7;
        while ( v10 < v8 )
        {
          sub_6F84A73A(a1, (int)&v4, 3);
          *v9 = v4;
          v9[1] = v5;
          v9[2] = v6;
          ++v10;
          v9 += 3;
        }
        sub_6F84A77C(a1, 0);
        sub_6F8515C4(a1, a2, &v7, v8);
        result = *(_WORD *)(a1 + 336);
        if ( (_WORD)result || a2 && (result = *(_DWORD *)(a2 + 8) & 0x10) != 0 )
        {
          *(_WORD *)(a1 + 336) = 0;
          if ( a2 )
            *(_WORD *)(a2 + 22) = 0;
          result = sub_6F839842(a1, "tRNS must be after");
        }
        if ( a2 )
        {
          result = *(_DWORD *)(a2 + 8) & 0x40;
          if ( result )
            result = sub_6F839842(a1, "hIST must be after");
        }
        if ( a2 )
        {
          result = *(_DWORD *)(a2 + 8) & 0x20;
          if ( result )
            result = sub_6F839842(a1, "bKGD must be after");
        }
      }
    }
    else
    {
      sub_6F84A77C(a1, a3);
      result = sub_6F839842(a1, "ignored in grayscale PNG");
    }
  }
  return result;
}
