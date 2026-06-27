int __cdecl sub_6F77CDC0(int a1, int a2)
{
  int v2; // ecx@1
  unsigned int v3; // eax@1
  unsigned int v4; // edx@3
  int result; // eax@3
  int v6; // edx@5

  v2 = *(_DWORD *)(a1 + 656);
  v3 = *(_WORD *)(*(_DWORD *)(v2 + 1160) + 2 * a2);
  if ( v3 == 0xFFFF )
    return 0;
  if ( v3 <= 0x186 )
  {
    v6 = *(_DWORD *)(v2 + 2956);
    if ( v6 )
      return (*(int (__cdecl **)(_DWORD))(v6 + 20))(*(_WORD *)(*(_DWORD *)(v2 + 1160) + 2 * a2));
    return 0;
  }
  v4 = v3 - 391;
  result = 0;
  if ( v4 < *(_DWORD *)(v2 + 1312) )
    result = *(_DWORD *)(*(_DWORD *)(v2 + 1316) + 4 * v4);
  return result;
}
