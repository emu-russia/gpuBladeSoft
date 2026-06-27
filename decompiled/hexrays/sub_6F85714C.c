unsigned int __cdecl sub_6F85714C(int a1, int a2)
{
  unsigned int result; // eax@21

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 124) & 0x100000 && *(_DWORD *)(a1 + 104) )
      (*(void (__cdecl **)(int, int, int))(a1 + 104))(a1, a2, *(_DWORD *)(a1 + 292) + 1);
    if ( *(_DWORD *)(a1 + 124) & 0x8000 )
      sub_6F853100(a2, *(_DWORD *)(a1 + 292) + 1, (*(_DWORD *)(a1 + 120) & 0x80) == 0);
    if ( *(_DWORD *)(a1 + 124) & 0x10000 )
      sub_6F853077(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
    if ( *(_DWORD *)(a1 + 124) & 4 )
      sub_6F857342(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1), *(_BYTE *)(a1 + 344));
    if ( *(_DWORD *)(a1 + 124) & 0x10 )
      sub_6F85300F(a2, *(_DWORD *)(a1 + 292) + 1);
    if ( *(_DWORD *)(a1 + 124) & 8 )
      sub_6F8575A5(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1), a1 + 429);
    if ( *(_DWORD *)(a1 + 124) & 0x20000 )
      sub_6F857959(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
    if ( *(_DWORD *)(a1 + 124) & 0x80000 )
      sub_6F857C1B(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
    if ( *(_DWORD *)(a1 + 124) & 1 )
      sub_6F85337D(a2, *(_DWORD *)(a1 + 292) + 1);
    result = *(_DWORD *)(a1 + 124) & 0x20;
    if ( result )
      result = sub_6F852F11(a2, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1));
  }
  return result;
}
