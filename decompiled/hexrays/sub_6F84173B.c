signed int __cdecl sub_6F84173B(int a1, int a2)
{
  int v2; // eax@7

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 120) & 0x40 )
    {
      sub_6F8395F1(a1, "invalid after png_start_read_image or png_read_update_info");
    }
    else
    {
      if ( !a2 || *(_DWORD *)(a1 + 116) & 1 )
      {
        v2 = *(_DWORD *)(a1 + 120);
        BYTE1(v2) |= 0x40u;
        *(_DWORD *)(a1 + 120) = v2;
        return 1;
      }
      sub_6F8395F1(a1, "invalid before the PNG header has been read");
    }
  }
  return 0;
}
