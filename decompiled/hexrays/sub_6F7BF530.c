int __cdecl sub_6F7BF530(int a1)
{
  int v1; // eax@1
  int v2; // ecx@1

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 132);
  v2 = *(_BYTE *)(v1 + 104);
  *(_DWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 20) = *(_BYTE *)(v1 + 105) + 1 - v2;
  return 0;
}
