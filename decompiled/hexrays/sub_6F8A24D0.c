int __cdecl sub_6F8A24D0(int a1)
{
  int v1; // esi@2

  *errno() = 0;
  if ( a1 )
  {
    v1 = 0;
    if ( *(_DWORD *)(a1 + 548) != -1 )
      v1 = findclose(*(_DWORD *)(a1 + 548));
    free((void *)a1);
  }
  else
  {
    v1 = -1;
    *errno() = 14;
  }
  return v1;
}
