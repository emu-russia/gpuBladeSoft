unsigned int __cdecl sub_6F85D1C0(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // esi@1
  unsigned int result; // eax@1
  unsigned int i; // edx@2

  v4 = *(_DWORD *)(a1 + 376);
  result = *(_DWORD *)(a1 + 268);
  if ( *(_DWORD *)(v4 + 8) < result )
  {
    for ( i = *(_DWORD *)(v4 + 12); ; i = 0 )
    {
      result = *(_DWORD *)(a1 + 264);
      if ( result <= i )
      {
        if ( i != result )
          return result;
      }
      else
      {
        (*(void (__cdecl **)(int, int, _DWORD *, int, int, int, _DWORD))(*(_DWORD *)(a1 + 380) + 4))(
          a1,
          a2,
          a3,
          a4,
          v4 + 24,
          v4 + 12,
          *(_DWORD *)(a1 + 264));
        result = *(_DWORD *)(a1 + 264);
        if ( *(_DWORD *)(v4 + 12) != result )
          return result;
      }
      result = (*(int (__cdecl **)(int, int))(*(_DWORD *)(a1 + 384) + 4))(a1, v4 + 24);
      if ( !(_BYTE)result )
        break;
      if ( *(_BYTE *)(v4 + 16) )
      {
        ++*a3;
        *(_BYTE *)(v4 + 16) = 0;
      }
      *(_DWORD *)(v4 + 12) = 0;
      result = *(_DWORD *)(v4 + 8) + 1;
      *(_DWORD *)(v4 + 8) = result;
      if ( *(_DWORD *)(a1 + 268) <= result )
        return result;
    }
    if ( !*(_BYTE *)(v4 + 16) )
    {
      --*a3;
      *(_BYTE *)(v4 + 16) = 1;
    }
  }
  return result;
}
