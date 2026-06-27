int __cdecl sub_6F815990(int a1, int a2)
{
  int result; // eax@1
  int v3; // ecx@1
  int v4; // ecx@1
  int v5; // ecx@1
  int v6; // ecx@1

  result = a1;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a1 + *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 72) + v3;
  v4 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 20) = v4 + *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 72) + v4;
  v5 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 24) = v5 + *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 72) + v5;
  v6 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 28) = v6 + *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 72) + v6;
  return result;
}
