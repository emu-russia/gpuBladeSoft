int __cdecl sub_6F844A59(int a1, int a2)
{
  int result; // eax@77

  if ( !*(_DWORD *)(a1 + 292) )
    sub_6F839044(a1, (int)"NULL row buffer");
  if ( *(_DWORD *)(a1 + 120) & 0x4000 && !(*(_DWORD *)(a1 + 120) & 0x40) )
    sub_6F839044(a1, (int)"Uninitialized row");
  if ( *(_DWORD *)(a1 + 124) & 0x1000 )
  {
    if ( *(_BYTE *)(a2 + 8) == 3 )
    {
      sub_6F8493A0(a2, *(_DWORD *)(a1 + 292) + 1, *(_DWORD *)(a1 + 324), *(_DWORD *)(a1 + 436), *(_WORD *)(a1 + 336));
    }
    else if ( *(_WORD *)(a1 + 336) && *(_DWORD *)(a1 + 124) & 0x2000000 )
    {
      sub_6F849791(a2, *(_DWORD *)(a1 + 292) + 1, a1 + 440);
    }
    else
    {
      sub_6F849791(a2, *(_DWORD *)(a1 + 292) + 1, 0);
    }
  }
  if ( *(_DWORD *)(a1 + 124) & 0x40000
    && !(*(_DWORD *)(a1 + 124) & 0x80)
    && (*(_BYTE *)(a2 + 8) == 6 || *(_BYTE *)(a2 + 8) == 4) )
  {
    sub_6F853100(a2, *(_DWORD *)(a1 + 292) + 1, 0);
  }
  if ( *(_DWORD *)(a1 + 124) & 0x600000 && sub_6F84655C(a1, a2, (unsigned __int16 *)(*(_DWORD *)(a1 + 292) + 1)) )
  {
    *(_BYTE *)(a1 + 608) = 1;
    if ( (*(_DWORD *)(a1 + 124) & 0x600000) == 0x400000 )
      sub_6F839262(a1, "png_do_rgb_to_gray found nongray pixel");
    if ( (*(_DWORD *)(a1 + 124) & 0x600000) == 0x200000 )
      sub_6F839044(a1, (int)"png_do_rgb_to_gray found nongray pixel");
  }
  if ( *(_DWORD *)(a1 + 124) & 0x4000 && !(*(_DWORD *)(a1 + 116) & 0x800) )
    sub_6F8461F3(a2, *(_DWORD *)(a1 + 292) + 1);
  if ( *(_DWORD *)(a1 + 124) & 0x80 )
    sub_6F846D49(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1), a1);
  if ( *(_DWORD *)(a1 + 124) & 0x2000
    && !(*(_DWORD *)(a1 + 124) & 0x600000)
    && (!(*(_DWORD *)(a1 + 124) & 0x80) || !*(_WORD *)(a1 + 336) && !(*(_BYTE *)(a1 + 343) & 4))
    && *(_BYTE *)(a1 + 343) != 3 )
  {
    sub_6F848B2E(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1), a1);
  }
  if ( *(_DWORD *)(a1 + 124) & 0x40000
    && *(_DWORD *)(a1 + 124) & 0x80
    && (*(_BYTE *)(a2 + 8) == 6 || *(_BYTE *)(a2 + 8) == 4) )
  {
    sub_6F853100(a2, *(_DWORD *)(a1 + 292) + 1, 0);
  }
  if ( *(_DWORD *)(a1 + 124) & 0x800000 && *(_BYTE *)(a2 + 8) & 4 )
    sub_6F849230(a2, *(_DWORD *)(a1 + 292) + 1, a1);
  if ( *(_DWORD *)(a1 + 124) & 0x4000000 )
    sub_6F845686(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
  if ( *(_DWORD *)(a1 + 124) & 0x400 )
    sub_6F845739(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
  if ( *(_DWORD *)(a1 + 124) & 0x40 )
  {
    sub_6F849F7F(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1), *(_DWORD *)(a1 + 520), *(_DWORD *)(a1 + 524));
    if ( !*(_DWORD *)(a2 + 4) )
      sub_6F839044(a1, (int)"png_do_quantize returned rowbytes=0");
  }
  if ( *(_DWORD *)(a1 + 124) & 0x200 )
    sub_6F849EF2(a2, *(_DWORD *)(a1 + 292) + 1);
  if ( *(_DWORD *)(a1 + 124) & 0x4000 && *(_DWORD *)(a1 + 116) & 0x800 )
    sub_6F8461F3(a2, *(_DWORD *)(a1 + 292) + 1);
  if ( *(_DWORD *)(a1 + 124) & 0x20 )
    sub_6F852F11(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
  if ( *(_DWORD *)(a1 + 124) & 8 )
    sub_6F845397(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1), a1 + 429);
  if ( *(_DWORD *)(a1 + 124) & 4 )
    sub_6F845193(a2, *(_DWORD *)(a1 + 292) + 1);
  if ( *(_BYTE *)(a2 + 8) == 3 && *(_DWORD *)(a1 + 332) >= 0 )
    sub_6F853542(a1, a2);
  if ( *(_DWORD *)(a1 + 124) & 1 )
    sub_6F85337D(a2, *(_DWORD *)(a1 + 292) + 1);
  if ( *(_DWORD *)(a1 + 124) & 0x10000 )
    sub_6F853077(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
  if ( *(_DWORD *)(a1 + 124) & 0x8000 )
    sub_6F845BE9(a2, *(_DWORD *)(a1 + 292) + 1, *(_WORD *)(a1 + 352), *(_DWORD *)(a1 + 120));
  if ( *(_DWORD *)(a1 + 124) & 0x80000 )
    sub_6F845A3A(a2, *(_DWORD *)(a1 + 292) + 1);
  if ( *(_DWORD *)(a1 + 124) & 0x20000 )
    sub_6F8457B8(a2, *(_DWORD *)(a1 + 292) + 1);
  if ( *(_DWORD *)(a1 + 124) & 0x10 )
    sub_6F85300F(a2, *(_DWORD *)(a1 + 292) + 1);
  result = *(_DWORD *)(a1 + 124) & 0x100000;
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 100) )
      (*(void (__cdecl **)(int, int, int))(a1 + 100))(a1, a2, *(_DWORD *)(a1 + 292) + 1);
    if ( *(_BYTE *)(a1 + 112) )
      *(_BYTE *)(a2 + 9) = *(_BYTE *)(a1 + 112);
    if ( *(_BYTE *)(a1 + 113) )
      *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 113);
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 10) * *(_BYTE *)(a2 + 9);
    if ( *(_BYTE *)(a2 + 11) <= 7u )
      result = (*(_DWORD *)a2 * (unsigned int)*(_BYTE *)(a2 + 11) + 7) >> 3;
    else
      result = *(_DWORD *)a2 * (unsigned __int8)(*(_BYTE *)(a2 + 11) >> 3);
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}
