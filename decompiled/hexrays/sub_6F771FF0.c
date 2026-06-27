signed int __cdecl sub_6F771FF0(int a1, unsigned int a2)
{
  int (__cdecl *v2)(int, unsigned int, _DWORD, _DWORD); // eax@1

  v2 = *(int (__cdecl **)(int, unsigned int, _DWORD, _DWORD))(a1 + 20);
  if ( v2 )
  {
    if ( v2(a1, a2, 0, 0) )
      return 85;
  }
  else if ( a2 > *(_DWORD *)(a1 + 4) )
  {
    return 85;
  }
  *(_DWORD *)(a1 + 8) = a2;
  return 0;
}
