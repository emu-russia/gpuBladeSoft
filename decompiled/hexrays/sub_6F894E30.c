signed int __cdecl sub_6F894E30(int a1)
{
  int v1; // eax@2
  void (__cdecl *v2)(_DWORD, int); // edx@3
  signed int result; // eax@6

  if ( a1 && (v1 = *(_DWORD *)(a1 + 28)) != 0 && (v2 = *(void (__cdecl **)(_DWORD, int))(a1 + 36)) != 0 )
  {
    if ( *(_DWORD *)(v1 + 52) )
    {
      v2(*(_DWORD *)(a1 + 40), *(_DWORD *)(v1 + 52));
      v2 = *(void (__cdecl **)(_DWORD, int))(a1 + 36);
      v1 = *(_DWORD *)(a1 + 28);
    }
    v2(*(_DWORD *)(a1 + 40), v1);
    result = 0;
    *(_DWORD *)(a1 + 28) = 0;
  }
  else
  {
    result = -2;
  }
  return result;
}
