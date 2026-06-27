int __cdecl sub_6F76F110(int a1, int a2)
{
  int (__cdecl *v2)(int, int); // eax@2
  int result; // eax@3
  int v4; // eax@5
  int *v5; // ebx@5
  unsigned int v6; // esi@5
  int v7; // eax@6
  int (__cdecl *v8)(int, int); // edx@7

  if ( !a1 )
    return 0;
  v2 = *(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 32);
  if ( v2 )
  {
    result = v2(a1, a2);
    if ( result )
      return result;
  }
  v4 = *(_DWORD *)(a1 + 4);
  v5 = (int *)(v4 + 20);
  v6 = v4 + 20 + 4 * *(_DWORD *)(v4 + 16);
  if ( v4 + 20 >= v6 )
    return 0;
  while ( 1 )
  {
    v7 = *v5;
    if ( a1 != *v5 )
    {
      v8 = *(int (__cdecl **)(int, int))(*(_DWORD *)v7 + 32);
      if ( v8 )
      {
        result = v8(v7, a2);
        if ( result )
          break;
      }
    }
    ++v5;
    if ( v6 <= (unsigned int)v5 )
      return 0;
  }
  return result;
}
