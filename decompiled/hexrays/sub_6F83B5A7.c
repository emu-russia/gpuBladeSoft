void __cdecl sub_6F83B5A7(int a1, int a2)
{
  if ( a1 && a2 )
  {
    if ( *(_DWORD *)(a1 + 632) )
      (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 632))(a1, a2);
    else
      sub_6F83B5F6(a1, (void *)a2);
  }
}
