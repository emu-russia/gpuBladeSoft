signed int __cdecl sub_6F84B00E(int a1, int a2, unsigned int a3, unsigned int *a4, int a5, signed int *a6, int a7)
{
  int v7; // eax@15
  signed int result; // eax@21
  int v9; // [sp+18h] [bp-10h]@18
  signed int v10; // [sp+1Ch] [bp-Ch]@10

  if ( *(_DWORD *)(a1 + 128) == *(_DWORD *)(a1 + 284) )
  {
    *(_DWORD *)(a1 + 144) = a5;
    *(_DWORD *)(a1 + 148) = 0;
    do
    {
      if ( !*(_DWORD *)(a1 + 136) )
      {
        if ( *a4 < a3 )
          a3 = *a4;
        *a4 -= a3;
        if ( a3 )
          sub_6F84A73A(a1, a2, a3);
        *(_DWORD *)(a1 + 132) = a2;
        *(_DWORD *)(a1 + 136) = a3;
      }
      if ( !*(_DWORD *)(a1 + 148) )
      {
        v10 = -1;
        if ( (unsigned int)*a6 < 0xFFFFFFFF )
          v10 = *a6;
        *a6 -= v10;
        *(_DWORD *)(a1 + 148) = v10;
      }
      if ( *a4 )
      {
        v7 = 0;
      }
      else if ( a7 )
      {
        v7 = 4;
      }
      else
      {
        v7 = 2;
      }
      v9 = sub_6F893010(a1 + 132, v7);
    }
    while ( !v9 && (*a6 || *(_DWORD *)(a1 + 148)) );
    *a6 += *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 148) = 0;
    sub_6F834D5F(a1, v9);
    result = v9;
  }
  else
  {
    *(_DWORD *)(a1 + 156) = "zstream unclaimed";
    result = -2;
  }
  return result;
}
