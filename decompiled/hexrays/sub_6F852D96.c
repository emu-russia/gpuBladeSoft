void __cdecl sub_6F852D96(int a1, __int16 a2, int a3)
{
  int v3; // eax@11
  int v4; // eax@12
  int v5; // eax@13

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 116) & 0x8000 )
    {
      *(_WORD *)(a1 + 352) = a2;
    }
    else if ( *(_BYTE *)(a1 + 343) )
    {
      if ( *(_BYTE *)(a1 + 343) != 2 )
      {
        sub_6F8395F1(a1, "png_set_filler: inappropriate color type");
        return;
      }
      *(_BYTE *)(a1 + 348) = 4;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 344) <= 7u )
      {
        sub_6F8395F1(a1, "png_set_filler is invalid for low bit depth gray output");
        return;
      }
      *(_BYTE *)(a1 + 348) = 2;
    }
    v3 = *(_DWORD *)(a1 + 124);
    BYTE1(v3) |= 0x80u;
    *(_DWORD *)(a1 + 124) = v3;
    if ( a3 == 1 )
    {
      v4 = *(_DWORD *)(a1 + 120);
      LOBYTE(v4) = v4 | 0x80;
      *(_DWORD *)(a1 + 120) = v4;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 120);
      LOBYTE(v5) = v5 & 0x7F;
      *(_DWORD *)(a1 + 120) = v5;
    }
  }
}
