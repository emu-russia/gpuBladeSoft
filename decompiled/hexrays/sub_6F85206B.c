void __cdecl sub_6F85206B(int a1, int a2, const void *a3, signed int a4, int a5)
{
  int v5; // eax@19
  signed int v6; // [sp+1Ch] [bp-Ch]@9

  if ( a1 && a2 )
  {
    if ( a3 )
    {
      sub_6F8341B7(a1, a2, 0x2000, 0);
      *(_DWORD *)(a2 + 156) = sub_6F83B4D4(a1, 0x100u);
      *(_DWORD *)(a1 + 436) = *(_DWORD *)(a2 + 156);
      if ( a4 > 0 && a4 <= 256 )
        memcpy(*(void **)(a2 + 156), a3, a4);
    }
    if ( a5 )
    {
      v6 = 1 << *(_BYTE *)(a2 + 24);
      if ( !*(_BYTE *)(a2 + 25) && *(_WORD *)(a5 + 8) > v6
        || *(_BYTE *)(a2 + 25) == 2 && (*(_WORD *)(a5 + 2) > v6 || *(_WORD *)(a5 + 4) > v6 || *(_WORD *)(a5 + 6) > v6) )
      {
        sub_6F839262(a1, "tRNS chunk has out-of-range samples for bit_depth");
      }
      *(_DWORD *)(a2 + 160) = *(_DWORD *)a5;
      *(_DWORD *)(a2 + 164) = *(_DWORD *)(a5 + 4);
      *(_WORD *)(a2 + 168) = *(_WORD *)(a5 + 8);
      if ( !a4 )
        a4 = 1;
    }
    *(_WORD *)(a2 + 22) = a4;
    if ( a4 )
    {
      *(_DWORD *)(a2 + 8) |= 0x10u;
      v5 = *(_DWORD *)(a2 + 232);
      BYTE1(v5) |= 0x20u;
      *(_DWORD *)(a2 + 232) = v5;
    }
  }
}
