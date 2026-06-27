int __cdecl sub_6F78E2E0(int a1, _DWORD *a2, _DWORD *a3, signed int *a4, signed int *a5)
{
  int v5; // esi@1
  signed int v6; // ebp@6
  signed int v7; // eax@6

  v5 = *(_DWORD *)(a1 + 88);
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 300);
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 304);
  if ( v5 )
  {
    v6 = sub_6F7C9760(*(_WORD *)(v5 + 12) << 6, *(_DWORD *)(a1 + 304));
    v7 = sub_6F7C9760(*(_WORD *)(v5 + 14) << 6, *(_DWORD *)(a1 + 304));
  }
  else
  {
    v7 = 0x10000;
    v6 = 0x10000;
  }
  if ( a4 )
    *a4 = v6;
  if ( a5 )
    *a5 = v7;
  return 0;
}
