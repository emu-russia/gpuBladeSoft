int __cdecl sub_6F791120(int a1)
{
  int v1; // ecx@1
  int v2; // edx@1
  int v3; // ebx@1

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 376);
  v2 = *(_DWORD *)(*(_DWORD *)a1 + 384);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 380) - v1;
  *(_DWORD *)(a1 + 16) = v1;
  *(_DWORD *)(a1 + 20) = v3;
  *(_DWORD *)(a1 + 24) = v2;
  return 0;
}
