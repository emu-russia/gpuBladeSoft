int __cdecl sub_6F8B0D70(int a1, int a2)
{
  int v2; // edx@1
  int result; // eax@1
  int v4; // ecx@2
  _DWORD *v5; // edx@2
  _DWORD *v6; // ecx@2

  v2 = *(_DWORD *)(a2 + 16);
  result = *(_DWORD *)(a1 + 16) - v2;
  if ( *(_DWORD *)(a1 + 16) == v2 )
  {
    v4 = 4 * v2;
    v5 = (_DWORD *)(a1 + 20 + 4 * v2);
    v6 = (_DWORD *)(a2 + v4 + 20);
    while ( 1 )
    {
      --v6;
      --v5;
      if ( *v5 != *v6 )
        break;
      if ( a1 + 20 >= (unsigned int)v5 )
        return result;
    }
    result = -(*v5 < *v6) | 1;
  }
  return result;
}
