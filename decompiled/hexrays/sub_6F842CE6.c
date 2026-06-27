signed int __cdecl sub_6F842CE6(int a1, int a2, int a3, int a4)
{
  signed int result; // eax@1
  int v5; // eax@10

  result = sub_6F84173B(a1, 1);
  if ( result )
  {
    if ( a2 == 2 )
    {
      *(_DWORD *)(a1 + 124) |= 0x400000u;
    }
    else if ( a2 == 3 )
    {
      *(_DWORD *)(a1 + 124) |= 0x200000u;
    }
    else
    {
      if ( a2 != 1 )
        sub_6F839044(a1, (int)"invalid error action to rgb_to_gray");
      *(_DWORD *)(a1 + 124) |= 0x600000u;
    }
    if ( *(_BYTE *)(a1 + 343) == 3 )
    {
      v5 = *(_DWORD *)(a1 + 124);
      BYTE1(v5) |= 0x10u;
      *(_DWORD *)(a1 + 124) = v5;
    }
    if ( a3 < 0 || a4 < 0 || a3 + a4 > 100000 )
    {
      if ( a3 >= 0 && a4 >= 0 )
        sub_6F8395B4(a1, "ignoring out of range rgb_to_gray coefficients");
      result = *(_WORD *)(a1 + 610);
      if ( !(_WORD)result )
      {
        result = *(_WORD *)(a1 + 612);
        if ( !(_WORD)result )
        {
          *(_WORD *)(a1 + 610) = 6968;
          result = a1;
          *(_WORD *)(a1 + 612) = 23434;
        }
      }
    }
    else
    {
      *(_WORD *)(a1 + 610) = (unsigned int)(175921861 * (unsigned __int64)((a3 << 10) & 0x7FFFFFF) >> 32) >> 7;
      *(_WORD *)(a1 + 612) = (unsigned int)(175921861 * (unsigned __int64)((a4 << 10) & 0x7FFFFFF) >> 32) >> 7;
      result = a1;
      *(_BYTE *)(a1 + 609) = 1;
    }
  }
  return result;
}
