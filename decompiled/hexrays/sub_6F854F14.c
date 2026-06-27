void __cdecl sub_6F854F14(int a1, int a2, char a3)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 616) & 4 && a2 == 64 )
      a2 = 0;
    if ( a2 )
      sub_6F839044(a1, (int)"Unknown custom filter method");
    switch ( a3 )
    {
      case 5:
      case 6:
      case 7:
        sub_6F8395F1(a1, "Unknown row filter for method 0");
        goto LABEL_8;
      case 0:
LABEL_8:
        *(_BYTE *)(a1 + 342) = 8;
        break;
      case 1:
        *(_BYTE *)(a1 + 342) = 16;
        break;
      case 2:
        *(_BYTE *)(a1 + 342) = 32;
        break;
      case 3:
        *(_BYTE *)(a1 + 342) = 64;
        break;
      case 4:
        *(_BYTE *)(a1 + 342) = -128;
        break;
      default:
        *(_BYTE *)(a1 + 342) = a3;
        break;
    }
    if ( *(_DWORD *)(a1 + 292) )
    {
      if ( *(_BYTE *)(a1 + 342) & 0x10 && !*(_DWORD *)(a1 + 296) )
      {
        *(_DWORD *)(a1 + 296) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
        **(_BYTE **)(a1 + 296) = 1;
      }
      if ( *(_BYTE *)(a1 + 342) & 0x20 && !*(_DWORD *)(a1 + 300) )
      {
        if ( *(_DWORD *)(a1 + 288) )
        {
          *(_DWORD *)(a1 + 300) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
          **(_BYTE **)(a1 + 300) = 2;
        }
        else
        {
          sub_6F839262(a1, "Can't add Up filter after starting");
          *(_BYTE *)(a1 + 342) &= 0xDFu;
        }
      }
      if ( *(_BYTE *)(a1 + 342) & 0x40 && !*(_DWORD *)(a1 + 304) )
      {
        if ( *(_DWORD *)(a1 + 288) )
        {
          *(_DWORD *)(a1 + 304) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
          **(_BYTE **)(a1 + 304) = 3;
        }
        else
        {
          sub_6F839262(a1, "Can't add Average filter after starting");
          *(_BYTE *)(a1 + 342) &= 0xBFu;
        }
      }
      if ( *(_BYTE *)(a1 + 342) < 0 && !*(_DWORD *)(a1 + 308) )
      {
        if ( *(_DWORD *)(a1 + 288) )
        {
          *(_DWORD *)(a1 + 308) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
          **(_BYTE **)(a1 + 308) = 4;
        }
        else
        {
          sub_6F839262(a1, "Can't add Paeth filter after starting");
          *(_BYTE *)(a1 + 342) &= 0x7Fu;
        }
      }
      if ( !*(_BYTE *)(a1 + 342) )
        *(_BYTE *)(a1 + 342) = 8;
    }
  }
}
