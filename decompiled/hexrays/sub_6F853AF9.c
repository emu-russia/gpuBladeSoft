int __cdecl sub_6F853AF9(int a1, int a2)
{
  int result; // eax@4
  int v3; // ST1C_4@8
  int v4; // ST18_4@8
  int v5; // ST14_4@8
  int v6; // eax@26
  int v7; // edx@26

  if ( a1 )
  {
    if ( a2 )
    {
      result = *(_DWORD *)(a1 + 116) & 0x400;
      if ( !result )
      {
        sub_6F858002(a1);
        if ( *(_DWORD *)(a1 + 116) & 0x1000 && *(_DWORD *)(a1 + 616) )
        {
          sub_6F839262(a1, "MNG features are not allowed in a PNG datastream");
          *(_DWORD *)(a1 + 616) = 0;
        }
        v3 = *(_BYTE *)(a2 + 28);
        v4 = *(_BYTE *)(a2 + 27);
        v5 = *(_BYTE *)(a2 + 26);
        sub_6F858D9D(a1, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_BYTE *)(a2 + 24), *(_BYTE *)(a2 + 25));
        if ( *(_WORD *)(a2 + 114) >= 0 && *(_WORD *)(a2 + 114) & 8 && *(_DWORD *)(a2 + 8) & 1 )
          sub_6F8595B6(a1, *(_DWORD *)(a2 + 40));
        if ( *(_WORD *)(a2 + 114) >= 0 && *(_DWORD *)(a2 + 8) & 0x1000 )
        {
          if ( *(_DWORD *)(a2 + 8) & 0x800 )
            sub_6F8395B4(a1, "profile matches sRGB but writing iCCP instead");
          sub_6F85963B(a1, *(char **)(a2 + 116), *(_DWORD *)(a2 + 120));
        }
        else if ( *(_WORD *)(a2 + 114) >= 0 && *(_DWORD *)(a2 + 8) & 0x800 )
        {
          sub_6F8595F2(a1, *(_WORD *)(a2 + 112));
        }
        if ( *(_DWORD *)(a2 + 8) & 2 )
          sub_6F859A2B(a1, a2 + 148, *(_BYTE *)(a2 + 25));
        if ( *(_WORD *)(a2 + 114) >= 0 && *(_WORD *)(a2 + 114) & 0x10 )
        {
          if ( *(_DWORD *)(a2 + 8) & 4 )
            sub_6F859B99(a1, a2 + 44);
        }
        sub_6F853A04(a1, a2, 1u);
        v6 = *(_DWORD *)(a1 + 116);
        BYTE1(v6) |= 4u;
        v7 = v6;
        result = a1;
        *(_DWORD *)(a1 + 116) = v7;
      }
    }
  }
  return result;
}
