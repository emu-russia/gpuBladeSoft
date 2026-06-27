int __cdecl sub_6F767D70(int a1, int a2)
{
  int v2; // eax@1
  int v3; // ebx@1
  int v4; // eax@1
  int v5; // ecx@1
  int result; // eax@1

  v2 = *(_DWORD *)(a1 + 20) << 6;
  v3 = *(_DWORD *)(a1 + 32) << 6;
  *(_DWORD *)a2 = v2;
  *(_DWORD *)(a2 + 8) = v3 + v2;
  v4 = *(_DWORD *)(a1 + 24) << 6;
  v5 = *(_DWORD *)(a1 + 28) << 6;
  *(_DWORD *)(a2 + 12) = v4;
  result = v4 - v5;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
