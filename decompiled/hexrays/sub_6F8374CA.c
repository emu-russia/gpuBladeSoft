int __cdecl sub_6F8374CA(int a1, unsigned int a2, int a3, signed int a4, signed int a5, signed int a6, int a7, int a8)
{
  int result; // eax@37
  signed int v9; // [sp+1Ch] [bp-Ch]@1

  v9 = 0;
  if ( !a2 )
  {
    sub_6F839262(a1, "Image width is zero in IHDR");
    v9 = 1;
  }
  if ( !a3 )
  {
    sub_6F839262(a1, "Image height is zero in IHDR");
    v9 = 1;
  }
  if ( *(_DWORD *)(a1 + 656) < a2 )
  {
    sub_6F839262(a1, "Image width exceeds user limit in IHDR");
    v9 = 1;
  }
  if ( *(_DWORD *)(a1 + 660) < (unsigned int)a3 )
  {
    sub_6F839262(a1, "Image height exceeds user limit in IHDR");
    v9 = 1;
  }
  if ( (a2 & 0x80000000) != 0 )
  {
    sub_6F839262(a1, "Invalid image width in IHDR");
    v9 = 1;
  }
  if ( a3 < 0 )
  {
    sub_6F839262(a1, "Invalid image height in IHDR");
    v9 = 1;
  }
  if ( a2 > 0x1FFFFF8E )
    sub_6F839262(a1, "Width is too large for libpng to process pixels");
  if ( a4 != 1 && a4 != 2 && a4 != 4 && a4 != 8 && a4 != 16 )
  {
    sub_6F839262(a1, "Invalid bit depth in IHDR");
    v9 = 1;
  }
  if ( a5 < 0 || a5 == 1 || a5 == 5 || a5 > 6 )
  {
    sub_6F839262(a1, "Invalid color type in IHDR");
    v9 = 1;
  }
  if ( a5 == 3 && a4 > 8 || (a5 == 2 || a5 == 4 || a5 == 6) && a4 <= 7 )
  {
    sub_6F839262(a1, "Invalid color type/bit depth combination in IHDR");
    v9 = 1;
  }
  if ( a6 > 1 )
  {
    sub_6F839262(a1, "Unknown interlace method in IHDR");
    v9 = 1;
  }
  if ( a7 )
  {
    sub_6F839262(a1, "Unknown compression method in IHDR");
    v9 = 1;
  }
  result = *(_DWORD *)(a1 + 116) & 0x1000;
  if ( result )
  {
    result = *(_DWORD *)(a1 + 616);
    if ( result )
      result = sub_6F839262(a1, "MNG features are not allowed in a PNG datastream");
  }
  if ( a8 )
  {
    if ( !(*(_DWORD *)(a1 + 616) & 4) || a8 != 64 || *(_DWORD *)(a1 + 116) & 0x1000 || a5 != 2 && a5 != 6 )
    {
      sub_6F839262(a1, "Unknown filter method in IHDR");
      v9 = 1;
    }
    result = *(_DWORD *)(a1 + 116) & 0x1000;
    if ( result )
    {
      result = sub_6F839262(a1, "Invalid filter method in IHDR");
      v9 = 1;
    }
  }
  if ( v9 == 1 )
    sub_6F839044(a1, (int)"Invalid IHDR data");
  return result;
}
