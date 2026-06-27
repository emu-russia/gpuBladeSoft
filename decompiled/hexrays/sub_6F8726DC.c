int (__cdecl **__cdecl sub_6F8726DC(int a1))(int a1)
{
  int (__cdecl **v1)(int); // eax@1
  int (__cdecl **result)(int); // eax@1
  int v3; // esi@2
  void *v4; // eax@3
  int (__cdecl **v5)(int); // [sp+18h] [bp-20h]@1
  int v6; // [sp+1Ch] [bp-1Ch]@1

  v1 = (int (__cdecl **)(int))(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 84);
  v5 = v1;
  *(_DWORD *)(a1 + 428) = v1;
  *v1 = sub_6F87210C;
  result = *(int (__cdecl ***)(int))(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  if ( *(_DWORD *)(a1 + 36) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 256);
      *(_DWORD *)(v6 + 84) = v4;
      memset(v4, 0, 0x100u);
      result = v5;
      v5[v3++ + 11] = (int (__cdecl *)(int))-1;
      v6 += 88;
    }
    while ( *(_DWORD *)(a1 + 36) > v3 );
  }
  return result;
}
