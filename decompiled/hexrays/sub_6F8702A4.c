char __cdecl sub_6F8702A4(int a1, int a2)
{
  int v2; // esi@1
  int v3; // eax@2
  signed int v4; // edi@5
  int v5; // esi@6
  _BYTE *v7; // [sp+Ch] [bp-1Ch]@5

  v2 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) )
  {
    v3 = *(_DWORD *)(v2 + 52);
    if ( !v3 )
    {
      sub_6F86FC10(a1);
      v3 = *(_DWORD *)(v2 + 52);
    }
    *(_DWORD *)(v2 + 52) = v3 - 1;
  }
  v7 = (_BYTE *)(v2 + 184);
  v4 = 1 << *(_DWORD *)(a1 + 380);
  if ( *(_DWORD *)(a1 + 324) > 0 )
  {
    v5 = 0;
    do
    {
      if ( sub_6F86F66C(a1, v7) )
        **(_WORD **)(a2 + 4 * v5) |= v4;
      ++v5;
    }
    while ( *(_DWORD *)(a1 + 324) > v5 );
  }
  return 1;
}
