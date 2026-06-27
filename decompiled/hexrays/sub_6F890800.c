int __cdecl sub_6F890800(int a1)
{
  int v1; // eax@2
  int v2; // esi@3
  int result; // eax@12

  if ( a1
    && (v1 = *(_DWORD *)(a1 + 28)) != 0
    && ((v2 = *(_DWORD *)(v1 + 4), v2 == 42) || v2 == 69 || v2 == 73 || v2 == 91 || v2 == 103 || v2 == 113 || v2 == 666) )
  {
    if ( *(_DWORD *)(v1 + 8) )
    {
      (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v1 + 8));
      v1 = *(_DWORD *)(a1 + 28);
    }
    if ( *(_DWORD *)(v1 + 68) )
    {
      (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v1 + 68));
      v1 = *(_DWORD *)(a1 + 28);
    }
    if ( *(_DWORD *)(v1 + 64) )
    {
      (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v1 + 64));
      v1 = *(_DWORD *)(a1 + 28);
    }
    if ( *(_DWORD *)(v1 + 56) )
    {
      (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v1 + 56));
      v1 = *(_DWORD *)(a1 + 28);
    }
    (*(void (__cdecl **)(_DWORD, int))(a1 + 36))(*(_DWORD *)(a1 + 40), v1);
    *(_DWORD *)(a1 + 28) = 0;
    result = 3 * (v2 != 113) - 3;
  }
  else
  {
    result = -2;
  }
  return result;
}
