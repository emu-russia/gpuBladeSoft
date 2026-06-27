void __cdecl sub_6F8515C4(int a1, int a2, const void *a3, signed int a4)
{
  int v4; // eax@16

  if ( a1 && a2 )
  {
    if ( a4 >= 0 && a4 <= 256 )
    {
      if ( (a4 <= 0 || a3) && (a4 || *(_DWORD *)(a1 + 616) & 1) )
      {
        sub_6F8341B7(a1, a2, 4096, 0);
        *(_DWORD *)(a1 + 324) = sub_6F83B307(a1, 0x300u);
        if ( a4 > 0 )
          memcpy(*(void **)(a1 + 324), a3, 3 * a4);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 324);
        *(_WORD *)(a1 + 328) = a4;
        *(_WORD *)(a2 + 20) = *(_WORD *)(a1 + 328);
        v4 = *(_DWORD *)(a2 + 232);
        BYTE1(v4) |= 0x10u;
        *(_DWORD *)(a2 + 232) = v4;
        *(_DWORD *)(a2 + 8) |= 8u;
      }
      else
      {
        sub_6F83987F(a1, "Invalid palette", 2);
      }
    }
    else
    {
      if ( *(_BYTE *)(a2 + 25) == 3 )
        sub_6F839044(a1, (int)"Invalid palette length");
      sub_6F839262(a1, "Invalid palette length");
    }
  }
}
