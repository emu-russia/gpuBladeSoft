int __cdecl sub_6F85DD18(int a1)
{
  int v1; // esi@1

  sub_6F85D394(a1, -40);
  v1 = 0;
  do
  {
    if ( *(_DWORD *)(a1 + 4 * v1 + 88) )
      sub_6F85D3D0((int *)a1, v1);
    ++v1;
  }
  while ( v1 != 4 );
  if ( !*(_BYTE *)(a1 + 209) )
  {
    LOWORD(v1) = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 4 * v1 + 120) )
        sub_6F85D500((_DWORD *)a1, v1, 0);
      if ( *(_DWORD *)(a1 + 4 * v1 + 136) )
        sub_6F85D500((_DWORD *)a1, v1, 1);
      ++v1;
    }
    while ( v1 != 4 );
  }
  return sub_6F85D394(a1, -39);
}
