int __cdecl sub_6F7B9F20(int a1)
{
  int (__cdecl **v1)(int); // esi@1
  int v2; // eax@1
  int (__cdecl **v3)(_DWORD, _DWORD, _DWORD); // eax@4
  int result; // eax@5
  int v5; // [sp+1Ch] [bp-10h]@5

  v1 = *(int (__cdecl ***)(int))(*(_DWORD *)a1 + 548);
  v2 = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4), "pshinter");
  if ( v2 && v1 && *v1 && (v3 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD))(*v1)(v2)) != 0 )
  {
    result = (*v3)(*(_DWORD *)(*(_DWORD *)a1 + 100), *(_DWORD *)a1 + 168, &v5);
    if ( !result )
      *(_DWORD *)(a1 + 40) = v5;
  }
  else
  {
    result = 0;
  }
  return result;
}
