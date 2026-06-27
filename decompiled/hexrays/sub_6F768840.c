int __cdecl sub_6F768840(int a1, int a2, int a3)
{
  void (__cdecl *v3)(int); // eax@1
  void (__cdecl *v4)(int); // eax@3

  v3 = *(void (__cdecl **)(int))(a2 + 8);
  if ( v3 )
    v3(a2);
  v4 = *(void (__cdecl **)(int))(*(_DWORD *)(a3 + 12) + 60);
  if ( v4 )
    v4(a2);
  sub_6F773D90(a1, *(_DWORD *)(a2 + 40));
  *(_DWORD *)(a2 + 40) = 0;
  return sub_6F773D90(a1, a2);
}
