int __cdecl sub_6F8363B4(int a1, int a2, signed int a3)
{
  int result; // eax@2
  __int16 v4; // ax@14

  if ( *(_WORD *)(a2 + 74) >= 0 )
  {
    if ( a3 >= 0 && a3 <= 3 )
    {
      if ( *(_WORD *)(a2 + 74) & 4 && *(_WORD *)(a2 + 72) != a3 )
      {
        result = sub_6F8361F7(a1, a2, (int)"sRGB", a3, (int)"inconsistent rendering intents");
      }
      else if ( *(_WORD *)(a2 + 74) & 0x20 )
      {
        sub_6F839519(a1, "duplicate sRGB information ignored");
        result = 0;
      }
      else
      {
        if ( *(_WORD *)(a2 + 74) & 2 )
        {
          if ( !sub_6F835B73((int)&unk_6FB98780, a2 + 4, 100) )
            sub_6F83987F(a1, "cHRM chunk does not match sRGB", 2);
        }
        sub_6F834E21(a1, a2, 45455, 2);
        *(_WORD *)(a2 + 72) = a3;
        *(_WORD *)(a2 + 74) |= 4u;
        *(_DWORD *)(a2 + 4) = 64000;
        *(_DWORD *)(a2 + 8) = 33000;
        *(_DWORD *)(a2 + 12) = 30000;
        *(_DWORD *)(a2 + 16) = 60000;
        *(_DWORD *)(a2 + 20) = 15000;
        *(_DWORD *)(a2 + 24) = 6000;
        *(_DWORD *)(a2 + 28) = 31270;
        *(_DWORD *)(a2 + 32) = 32900;
        *(_DWORD *)(a2 + 36) = 41239;
        *(_DWORD *)(a2 + 40) = 21264;
        *(_DWORD *)(a2 + 44) = 1933;
        *(_DWORD *)(a2 + 48) = 35758;
        *(_DWORD *)(a2 + 52) = 71517;
        *(_DWORD *)(a2 + 56) = 11919;
        *(_DWORD *)(a2 + 60) = 18048;
        *(_DWORD *)(a2 + 64) = 7219;
        *(_DWORD *)(a2 + 68) = 95053;
        *(_WORD *)(a2 + 74) |= 0x42u;
        *(_DWORD *)a2 = 45455;
        *(_WORD *)(a2 + 74) |= 1u;
        v4 = *(_WORD *)(a2 + 74);
        LOBYTE(v4) = v4 | 0xA0;
        *(_WORD *)(a2 + 74) = v4;
        result = 1;
      }
    }
    else
    {
      result = sub_6F8361F7(a1, a2, (int)"sRGB", a3, (int)"invalid sRGB rendering intent");
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
