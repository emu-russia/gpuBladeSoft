char __cdecl sub_6F861E20(int a1)
{
  int v1; // eax@1
  int v2; // eax@1

  v1 = *(_DWORD *)a1;
  *(_DWORD *)(v1 + 20) = 123;
  (*(void (__cdecl **)(int, signed int))(v1 + 4))(a1, -1);
  v2 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)v2 = &unk_6FB9C98C;
  *(_DWORD *)(v2 + 4) = 2;
  return 1;
}
