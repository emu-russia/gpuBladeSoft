int __cdecl sub_6F83D491(signed int a1, int a2, signed int a3)
{
  if ( a3 == 3 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( !a3 )
  {
    sub_6F83D426(a1);
    a3 = *(_DWORD *)(a1 + 32);
  }
  if ( a3 != 2 )
  {
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
      {
        a2 = (unsigned __int16)sub_6F8383DF(257 * a2, *(_DWORD *)(a1 + 36));
      }
      else
      {
        if ( a3 != 4 )
LABEL_15:
          sub_6F839044(***(_DWORD ***)a1, (int)"unexpected encoding (internal error)");
        a2 *= 257;
      }
    }
    else
    {
      if ( a3 != 1 )
        goto LABEL_15;
      a2 = (unsigned __int16)word_6FB99080[a2];
    }
  }
  return a2;
}
