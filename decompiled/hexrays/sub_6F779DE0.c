int __cdecl sub_6F779DE0(_DWORD *a1)
{
  int v1; // ecx@1
  int result; // eax@2

  v1 = *(_DWORD *)(*a1 + 656);
  if ( *(_DWORD *)(v1 + 1160) )
    result = (*(int (__cdecl **)(_DWORD, _DWORD *, _DWORD, int (__cdecl *)(int, int), _DWORD, _DWORD))(*(_DWORD *)(v1 + 2956) + 4))(
               *(_DWORD *)(*a1 + 100),
               a1,
               *(_DWORD *)(v1 + 12),
               sub_6F77CDC0,
               0,
               *a1);
  else
    result = 163;
  return result;
}
