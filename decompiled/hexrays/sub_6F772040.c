signed int __cdecl sub_6F772040(int a1, int a2)
{
  unsigned int v2; // ebx@2
  int (__cdecl *v3)(int, unsigned int, _DWORD, _DWORD); // eax@2

  if ( a2 < 0 )
    return 85;
  v2 = *(_DWORD *)(a1 + 8) + a2;
  v3 = *(int (__cdecl **)(int, unsigned int, _DWORD, _DWORD))(a1 + 20);
  if ( v3 )
  {
    if ( v3(a1, v2, 0, 0) )
      return 85;
  }
  else if ( v2 > *(_DWORD *)(a1 + 4) )
  {
    return 85;
  }
  *(_DWORD *)(a1 + 8) = v2;
  return 0;
}
