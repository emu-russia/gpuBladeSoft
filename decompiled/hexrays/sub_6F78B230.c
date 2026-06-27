int __cdecl sub_6F78B230(int a1, int a2)
{
  int (__cdecl **v2)(_DWORD); // esi@1
  int v3; // eax@1
  int v4; // eax@4

  sub_6F76C770(*(_DWORD *)a1, a2);
  v2 = *(int (__cdecl ***)(_DWORD))(*(_DWORD *)a1 + 320);
  v3 = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4), "pshinter");
  if ( v3 )
  {
    if ( v2 )
    {
      if ( *v2 )
      {
        v4 = (*v2)(v3);
        if ( v4 )
          (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v4 + 4))(
            *(_DWORD *)(a1 + 40),
            *(_DWORD *)(a1 + 16),
            *(_DWORD *)(a1 + 20),
            0,
            0);
      }
    }
  }
  return 0;
}
