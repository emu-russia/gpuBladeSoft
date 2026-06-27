unsigned int __cdecl sub_6F85C9B3(int a1, int a2, unsigned int a3)
{
  int v3; // ST1C_4@2
  unsigned int result; // eax@3

  sub_6F859237(a1, a2, a3, 0);
  if ( *(_DWORD *)(a1 + 288) )
  {
    v3 = *(_DWORD *)(a1 + 288);
    *(_DWORD *)(a1 + 288) = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(a1 + 292) = v3;
  }
  sub_6F85ACBA(a1);
  ++*(_DWORD *)(a1 + 388);
  result = *(_DWORD *)(a1 + 384);
  if ( result )
  {
    result = *(_DWORD *)(a1 + 384);
    if ( *(_DWORD *)(a1 + 388) >= result )
      result = sub_6F854D45(a1);
  }
  return result;
}
