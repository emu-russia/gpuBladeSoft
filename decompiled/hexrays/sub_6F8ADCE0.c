void __cdecl sub_6F8ADCE0(int a1)
{
  int v1; // ecx@1
  int v2; // eax@1

  v1 = *(_DWORD *)(a1 - 4);
  v2 = a1 - 4;
  *(_DWORD *)(v2 + 4) = v1;
  *(_DWORD *)(v2 + 8) = 1 << v1;
  sub_6F8B07F0((void *)(a1 - 4));
}
