int __cdecl sub_6F77A4C0(int a1)
{
  int v1; // eax@1
  int v2; // esi@1
  int v3; // eax@2

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(*(_DWORD *)(v1 + 656) + 2952);
  if ( v2 )
  {
    v3 = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(v1 + 96) + 4), "pshinter");
    if ( v3 )
      *(_DWORD *)(*(_DWORD *)(a1 + 156) + 36) = (*(int (__cdecl **)(int))(v2 + 8))(v3);
  }
  return 0;
}
