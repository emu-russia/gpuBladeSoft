int __cdecl sub_6F78A150(int a1)
{
  int result; // eax@1
  int (__cdecl **v2)(_DWORD); // esi@2

  result = *(_DWORD *)(a1 + 40);
  if ( result )
  {
    v2 = *(int (__cdecl ***)(_DWORD))(*(_DWORD *)a1 + 320);
    result = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4), "pshinter");
    if ( result && v2 && *v2 )
    {
      result = (*v2)(result);
      if ( result )
        result = (*(int (__cdecl **)(_DWORD))(result + 8))(*(_DWORD *)(a1 + 40));
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  return result;
}
