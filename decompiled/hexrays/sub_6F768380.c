void __cdecl sub_6F768380(int a1)
{
  int v1; // esi@2
  void (__cdecl *v2)(int); // eax@2

  if ( a1 )
  {
    v1 = **(_DWORD **)a1;
    v2 = *(void (__cdecl **)(int))(*(_DWORD *)(a1 + 4) + 12);
    if ( v2 )
      v2(a1);
    sub_6F773D90(v1, a1);
  }
}
