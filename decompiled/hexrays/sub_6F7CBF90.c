signed int __usercall sub_6F7CBF90@<eax>(int a1@<eax>)
{
  int v1; // edx@2
  void (__cdecl *v2)(_DWORD, int); // ecx@3
  int v3; // ebx@4
  int v4; // esi@4
  int v5; // eax@5
  int (__cdecl *v6)(_DWORD, _DWORD, _DWORD); // edx@9
  int v7; // eax@9
  int v8; // eax@10
  signed int result; // eax@12

  if ( a1 && (v1 = *(_DWORD *)(a1 + 28)) != 0 && (v2 = *(void (__cdecl **)(_DWORD, int))(a1 + 36)) != 0 )
  {
    v3 = a1;
    v4 = *(_DWORD *)(v1 + 20);
    if ( v4 )
    {
      v5 = *(_DWORD *)v4;
      if ( (unsigned int)(*(_DWORD *)v4 - 4) <= 1 )
      {
        v2(*(_DWORD *)(v3 + 40), *(_DWORD *)(v4 + 12));
        v5 = *(_DWORD *)v4;
      }
      if ( v5 == 6 )
        (*(void (__cdecl **)(_DWORD, _DWORD))(v3 + 36))(*(_DWORD *)(v3 + 40), *(_DWORD *)(v4 + 4));
      v6 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD))(v4 + 56);
      v7 = *(_DWORD *)(v4 + 40);
      *(_DWORD *)v4 = 0;
      *(_DWORD *)(v4 + 28) = 0;
      *(_DWORD *)(v4 + 32) = 0;
      *(_DWORD *)(v4 + 52) = v7;
      *(_DWORD *)(v4 + 48) = v7;
      if ( v6 )
      {
        v8 = v6(0, 0, 0);
        *(_DWORD *)(v4 + 60) = v8;
        *(_DWORD *)(v3 + 48) = v8;
        v7 = *(_DWORD *)(v4 + 40);
      }
      (*(void (__cdecl **)(_DWORD, int))(v3 + 36))(*(_DWORD *)(v3 + 40), v7);
      (*(void (__cdecl **)(_DWORD, _DWORD))(v3 + 36))(*(_DWORD *)(v3 + 40), *(_DWORD *)(v4 + 36));
      (*(void (__cdecl **)(_DWORD, int))(v3 + 36))(*(_DWORD *)(v3 + 40), v4);
      v2 = *(void (__cdecl **)(_DWORD, int))(v3 + 36);
      v1 = *(_DWORD *)(v3 + 28);
    }
    v2(*(_DWORD *)(v3 + 40), v1);
    *(_DWORD *)(v3 + 28) = 0;
    result = 0;
  }
  else
  {
    result = -2;
  }
  return result;
}
