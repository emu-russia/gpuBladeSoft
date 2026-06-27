int __cdecl sub_6F76DE40(int a1, int a2, int a3)
{
  int v3; // edx@2
  int result; // eax@7

  if ( !a1 )
    return 0;
  v3 = *(_DWORD *)(a1 + 148);
  if ( a3 )
  {
    if ( *(_DWORD *)a3 )
      v3 = *(_DWORD *)(*(_DWORD *)a3 + 4);
    *(_DWORD *)a3 = 0;
  }
  if ( !v3 )
    return 0;
  for ( result = *(_DWORD *)(v3 + 8); *(_DWORD *)(result + 16) != a2; result = *(_DWORD *)(v3 + 8) )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      return 0;
  }
  if ( a3 )
    *(_DWORD *)a3 = v3;
  return result;
}
