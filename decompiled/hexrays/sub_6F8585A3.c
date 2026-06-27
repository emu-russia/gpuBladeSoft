signed int __cdecl sub_6F8585A3(int a1, unsigned int a2, unsigned int a3)
{
  char v4; // [sp+24h] [bp-64h]@2
  char v5; // [sp+25h] [bp-63h]@2
  char v6; // [sp+26h] [bp-62h]@2
  char v7; // [sp+27h] [bp-61h]@2
  char v8; // [sp+28h] [bp-60h]@2
  char v9; // [sp+29h] [bp-5Fh]@2
  char v10; // [sp+2Ah] [bp-5Eh]@2
  char v11; // [sp+2Bh] [bp-5Dh]@2
  char v12; // [sp+2Ch] [bp-5Ch]@2
  char v13; // [sp+2Dh] [bp-5Bh]@2
  unsigned int v14; // [sp+64h] [bp-24h]@11
  int v15; // [sp+68h] [bp-20h]@24
  unsigned int v16; // [sp+6Ch] [bp-1Ch]@7
  int v17; // [sp+70h] [bp-18h]@5
  int v18; // [sp+74h] [bp-14h]@5
  int v19; // [sp+78h] [bp-10h]@5
  unsigned int v20; // [sp+7Ch] [bp-Ch]@5

  if ( *(_DWORD *)(a1 + 128) )
  {
    v4 = BYTE3(a2);
    v5 = a2 >> 16;
    v6 = BYTE1(a2);
    v7 = a2;
    v8 = 58;
    v9 = 32;
    v10 = *(_DWORD *)(a1 + 128) >> 24;
    v11 = *(_DWORD *)(a1 + 128) >> 16;
    v12 = *(_WORD *)(a1 + 128) >> 8;
    v13 = *(_DWORD *)(a1 + 128);
    sub_6F839081((int)&v4, 0x40u, 0xAu, " using zstream");
    sub_6F839262(a1, &v4);
    if ( *(_DWORD *)(a1 + 128) == 1229209940 )
    {
      *(_DWORD *)(a1 + 156) = "in use by IDAT";
      return -2;
    }
    *(_DWORD *)(a1 + 128) = 0;
  }
  v20 = *(_DWORD *)(a1 + 196);
  v19 = *(_DWORD *)(a1 + 200);
  v18 = *(_DWORD *)(a1 + 204);
  v17 = *(_DWORD *)(a1 + 208);
  if ( a2 == 1229209940 )
  {
    if ( *(_DWORD *)(a1 + 120) & 1 )
      v16 = *(_DWORD *)(a1 + 212);
    else
      v16 = *(_BYTE *)(a1 + 342) != 8;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 216);
    v19 = *(_DWORD *)(a1 + 220);
    v18 = *(_DWORD *)(a1 + 224);
    v17 = *(_DWORD *)(a1 + 228);
    v16 = *(_DWORD *)(a1 + 232);
  }
  if ( a3 <= 0x4000 )
  {
    v14 = 1 << (v18 - 1);
    while ( a3 + 262 <= v14 )
    {
      v14 >>= 1;
      --v18;
    }
  }
  if ( *(_DWORD *)(a1 + 120) & 2
    && (*(_DWORD *)(a1 + 236) != v20
     || *(_DWORD *)(a1 + 240) != v19
     || *(_DWORD *)(a1 + 244) != v18
     || *(_DWORD *)(a1 + 248) != v17
     || *(_DWORD *)(a1 + 252) != v16) )
  {
    if ( sub_6F890800(a1 + 132) )
      sub_6F839262(a1, "deflateEnd failed (ignored)");
    *(_DWORD *)(a1 + 120) &= 0xFFFFFFFD;
  }
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  if ( *(_DWORD *)(a1 + 120) & 2 )
  {
    v15 = sub_6F88F350(a1 + 132);
  }
  else
  {
    v15 = sub_6F890900(a1 + 132, v20, v19, v18, v17, v16, "1.2.8", 56);
    if ( !v15 )
      *(_DWORD *)(a1 + 120) |= 2u;
  }
  if ( v15 )
    sub_6F834D5F(a1, v15);
  else
    *(_DWORD *)(a1 + 128) = a2;
  return v15;
}
