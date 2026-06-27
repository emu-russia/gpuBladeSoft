int __cdecl sub_6F77AB40(int a1)
{
  int v1; // esi@1
  int v2; // eax@2
  int (__cdecl **v3)(int); // eax@2
  int (__cdecl *v4)(int); // eax@3
  int result; // eax@4

  v1 = *(_DWORD *)(a1 + 656);
  if ( *(_DWORD *)(a1 + 532)
    && (v2 = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 4), "sfnt"),
        (v3 = (int (__cdecl **)(int))sub_6F76F110(v2, (int)"postscript-font-name")) != 0)
    && (v4 = *v3) != 0 )
  {
    result = v4(a1);
  }
  else
  {
    result = *(_DWORD *)(v1 + 1304);
  }
  return result;
}
