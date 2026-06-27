int __cdecl sub_6F77B6D0(int a1)
{
  int result; // eax@1
  _DWORD *v2; // esi@1
  int v3; // ebx@2
  int (__cdecl **v4)(_DWORD); // edi@2
  int v5; // edi@5
  int i; // ebx@6

  result = a1;
  v2 = *(_DWORD **)(a1 + 40);
  if ( v2 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)a1 + 656);
    v4 = *(int (__cdecl ***)(_DWORD))(v3 + 2952);
    result = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4), "pshinter");
    if ( result )
    {
      if ( v4 )
      {
        if ( *v4 )
        {
          result = (*v4)(result);
          v5 = result;
          if ( result )
          {
            result = (*(int (__cdecl **)(_DWORD))(result + 8))(*v2);
            for ( i = *(_DWORD *)(v3 + 1896); i; result = (*(int (__cdecl **)(_DWORD))(v5 + 8))(v2[i + 1]) )
              --i;
          }
        }
      }
    }
  }
  return result;
}
