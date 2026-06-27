int __cdecl sub_6F7910C0(int a1)
{
  int v1; // ecx@1
  int v2; // edx@1

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 484);
  v2 = *(_DWORD *)(*(_DWORD *)a1 + 420);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(*(_DWORD *)a1 + 416);
  *(_DWORD *)(a1 + 28) = v2;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(v1 + 20);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v1 + 24);
  return 0;
}
