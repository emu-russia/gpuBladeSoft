int __cdecl sub_6F77AAC0(int a1, int a2)
{
  int v2; // edx@1
  void *v3; // eax@1
  int v4; // eax@3
  int (__cdecl **v5)(int, int); // eax@3
  int (__cdecl *v6)(int, int); // eax@4
  int result; // eax@5

  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4);
  v3 = *(void **)(a1 + 12);
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  if ( v3 != &unk_6FB56720
    && v3 != &unk_6FB566E0
    && (v4 = sub_6F76F030(v2, "sfnt"), (v5 = (int (__cdecl **)(int, int))sub_6F76F110(v4, (int)"tt-cmaps")) != 0)
    && (v6 = *v5) != 0 )
  {
    result = v6(a1, a2);
  }
  else
  {
    result = 0;
  }
  return result;
}
