int __cdecl sub_6F84A9E8(int a1, int a2)
{
  char v3; // [sp+18h] [bp-50h]@2
  char v4; // [sp+19h] [bp-4Fh]@2
  char v5; // [sp+1Ah] [bp-4Eh]@2
  char v6; // [sp+1Bh] [bp-4Dh]@2
  int v7; // [sp+58h] [bp-10h]@4
  int v8; // [sp+5Ch] [bp-Ch]@7

  if ( *(_DWORD *)(a1 + 128) )
  {
    v3 = *(_DWORD *)(a1 + 128) >> 24;
    v4 = *(_DWORD *)(a1 + 128) >> 16;
    v5 = *(_WORD *)(a1 + 128) >> 8;
    v6 = *(_DWORD *)(a1 + 128);
    sub_6F839081((int)&v3, 0x40u, 4u, " using zstream");
    sub_6F8397EC(a1, &v3);
    *(_DWORD *)(a1 + 128) = 0;
  }
  if ( ((*(_BYTE *)(a1 + 552) >> 2) & 3) == 3 )
    v7 = 15;
  else
    v7 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  if ( *(_DWORD *)(a1 + 120) & 2 )
  {
    v8 = sub_6F892DD0(a1 + 132, v7);
  }
  else
  {
    v8 = sub_6F892E60(a1 + 132, v7, "1.2.8", 56);
    if ( !v8 )
      *(_DWORD *)(a1 + 120) |= 2u;
  }
  if ( v8 )
    sub_6F834D5F(a1, v8);
  else
    *(_DWORD *)(a1 + 128) = a2;
  return v8;
}
