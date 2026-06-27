void __cdecl sub_6F850BB2(int a1, int a2, int a3)
{
  signed int i; // [sp+1Ch] [bp-Ch]@9

  if ( a1 && a2 )
  {
    if ( *(_WORD *)(a2 + 20) && *(_WORD *)(a2 + 20) <= 0x100u )
    {
      sub_6F8341B7(a1, a2, 8, 0);
      *(_DWORD *)(a2 + 204) = sub_6F83B561(a1, 0x200u);
      if ( *(_DWORD *)(a2 + 204) )
      {
        *(_DWORD *)(a2 + 232) |= 8u;
        for ( i = 0; *(_WORD *)(a2 + 20) > i; ++i )
          *(_WORD *)(*(_DWORD *)(a2 + 204) + 2 * i) = *(_WORD *)(2 * i + a3);
        *(_DWORD *)(a2 + 8) |= 0x40u;
      }
      else
      {
        sub_6F839262(a1, "Insufficient memory for hIST chunk data");
      }
    }
    else
    {
      sub_6F839262(a1, "Invalid palette size, hIST allocation skipped");
    }
  }
}
