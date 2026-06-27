int __cdecl sub_6F84FB3B(int a1, int a2, unsigned int a3)
{
  int result; // eax@19
  char v4; // [sp+10h] [bp-418h]@15
  int v5; // [sp+410h] [bp-18h]@16
  void *v6; // [sp+414h] [bp-14h]@10
  unsigned int v7; // [sp+418h] [bp-10h]@12
  unsigned int v8; // [sp+41Ch] [bp-Ch]@8

  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = 0;
  if ( !a2 )
    a3 = 0;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a1 + 136) )
    {
      while ( !*(_DWORD *)(a1 + 316) )
      {
        sub_6F84A77C(a1, 0);
        *(_DWORD *)(a1 + 316) = sub_6F84A670(a1);
        if ( *(_DWORD *)(a1 + 284) != 1229209940 )
          sub_6F839044(a1, (int)"Not enough image data");
      }
      v8 = *(_DWORD *)(a1 + 704);
      if ( *(_DWORD *)(a1 + 316) < v8 )
        v8 = *(_DWORD *)(a1 + 316);
      v6 = sub_6F84A90E(a1, v8, 0);
      sub_6F84A73A(a1, (int)v6, v8);
      *(_DWORD *)(a1 + 316) -= v8;
      *(_DWORD *)(a1 + 132) = v6;
      *(_DWORD *)(a1 + 136) = v8;
    }
    if ( a2 )
    {
      v7 = -1;
      if ( a3 < 0xFFFFFFFF )
        v7 = a3;
      a3 -= v7;
      *(_DWORD *)(a1 + 148) = v7;
    }
    else
    {
      *(_DWORD *)(a1 + 144) = &v4;
      *(_DWORD *)(a1 + 148) = 1024;
    }
    v5 = sub_6F893010(a1 + 132, 0);
    if ( a2 )
      a3 += *(_DWORD *)(a1 + 148);
    else
      a3 = a3 - *(_DWORD *)(a1 + 148) + 1024;
    result = a1;
    *(_DWORD *)(a1 + 148) = 0;
    if ( v5 == 1 )
    {
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 116) |= 8u;
      *(_DWORD *)(a1 + 120) |= 8u;
      if ( *(_DWORD *)(a1 + 136) || (result = *(_DWORD *)(a1 + 316)) != 0 )
        result = sub_6F839842(a1, "Extra compressed data");
LABEL_28:
      if ( a3 )
      {
        if ( a2 )
          sub_6F839044(a1, (int)"Not enough image data");
        result = sub_6F839842(a1, "Too much image data");
      }
      return result;
    }
    if ( v5 )
      break;
    if ( !a3 )
      goto LABEL_28;
  }
  sub_6F834D5F(a1, v5);
  if ( a2 )
    sub_6F83979A(a1, *(_DWORD *)(a1 + 156));
  return sub_6F839842(a1, *(_BYTE **)(a1 + 156));
}
