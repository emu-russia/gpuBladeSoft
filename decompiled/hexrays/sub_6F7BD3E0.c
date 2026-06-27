signed int __cdecl sub_6F7BD3E0(int a1, int a2)
{
  int v2; // esi@1
  signed int result; // eax@1
  int v4; // edx@2

  v2 = *(_DWORD *)a1;
  sub_6F76DE10(*(int **)(a1 + 44));
  result = sub_6F76CB10(*(_DWORD *)(v2 + 500), a2);
  if ( !result )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v2 + 500) + 88);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(v4 + 20);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(v4 + 28);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(v4 + 32);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(v4 + 36);
  }
  return result;
}
