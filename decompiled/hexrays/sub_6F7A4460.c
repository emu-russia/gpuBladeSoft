signed int __cdecl sub_6F7A4460(int a1, int a2)
{
  signed int v2; // esi@1
  bool v4; // zf@4
  signed int v5; // eax@5

  v2 = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1330851634, a2, 0);
  if ( !v2 )
  {
    v2 = sub_6F7728E0(a2, (int)&unk_6FB68A00, a1 + 364);
    if ( !v2 )
    {
      *(_WORD *)(a1 + 452) = 0;
      *(_DWORD *)(a1 + 444) = 0;
      *(_WORD *)(a1 + 458) = 0;
      *(_DWORD *)(a1 + 448) = 0;
      *(_WORD *)(a1 + 460) = 0;
      v4 = *(_WORD *)(a1 + 364) == 0;
      *(_WORD *)(a1 + 462) = 0;
      *(_WORD *)(a1 + 454) = 0;
      *(_WORD *)(a1 + 456) = 0;
      *(_WORD *)(a1 + 464) = -1;
      if ( !v4 )
      {
        v5 = sub_6F7728E0(a2, (int)&unk_6FB689D8, a1 + 364);
        if ( v5 )
          return v5;
        if ( *(_WORD *)(a1 + 364) <= 1u )
          return v2;
        v5 = sub_6F7728E0(a2, (int)&unk_6FB689BC, a1 + 364);
        if ( v5 )
          return v5;
        if ( *(_WORD *)(a1 + 364) > 4u )
          v2 = sub_6F7728E0(a2, (int)&unk_6FB689AC, a1 + 364);
      }
    }
  }
  return v2;
}
