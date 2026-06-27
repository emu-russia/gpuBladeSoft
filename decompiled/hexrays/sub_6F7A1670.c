signed int __cdecl sub_6F7A1670(int a1, int a2)
{
  signed int v2; // esi@1
  bool v4; // zf@4
  bool v5; // sf@4
  unsigned __int8 v6; // of@4
  signed int v7; // eax@5

  v2 = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1835104368, a2, 0);
  if ( !v2 )
  {
    v2 = sub_6F7728E0(a2, (int)&unk_6FB6899C, a1 + 260);
    if ( !v2 )
    {
      *(_WORD *)(a1 + 266) = 0;
      *(_WORD *)(a1 + 278) = 0;
      *(_WORD *)(a1 + 268) = 0;
      *(_WORD *)(a1 + 280) = 0;
      *(_WORD *)(a1 + 270) = 0;
      *(_WORD *)(a1 + 272) = 0;
      *(_WORD *)(a1 + 274) = 0;
      *(_WORD *)(a1 + 276) = 0;
      *(_WORD *)(a1 + 282) = 0;
      *(_WORD *)(a1 + 284) = 0;
      *(_WORD *)(a1 + 286) = 0;
      *(_WORD *)(a1 + 288) = 0;
      v6 = __OFSUB__(*(_DWORD *)(a1 + 260), 0xFFFF);
      v4 = *(_DWORD *)(a1 + 260) == 0xFFFF;
      v5 = *(_DWORD *)(a1 + 260) - 0xFFFF < 0;
      *(_WORD *)(a1 + 290) = 0;
      if ( !((unsigned __int8)(v5 ^ v6) | v4) )
      {
        v7 = sub_6F7728E0(a2, (int)&unk_6FB68960, a1 + 260);
        if ( v7 )
        {
          v2 = v7;
        }
        else
        {
          if ( *(_WORD *)(a1 + 280) <= 0x3Fu )
            *(_WORD *)(a1 + 280) = 64;
          if ( *(_WORD *)(a1 + 276) > 0xFFFBu )
            *(_WORD *)(a1 + 276) = -5;
          if ( *(_WORD *)(a1 + 290) > 0x64u )
          {
            v2 = 0;
            *(_WORD *)(a1 + 290) = 100;
          }
        }
      }
    }
  }
  return v2;
}
