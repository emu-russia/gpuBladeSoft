int __cdecl sub_6F815910(int a1, int a2, int a3, signed int a4)
{
  int v4; // eax@1
  int v5; // ebx@1
  int result; // eax@1

  v4 = a3 + *(_DWORD *)(a2 + 32) * (a4 >> 1);
  *(_DWORD *)(a1 + 16) = v4 + *(_DWORD *)(a2 + 40);
  v5 = v4++ + *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 32) = v5;
  *(_DWORD *)(a1 + 20) = v4 + *(_DWORD *)(a2 + 40);
  result = *(_DWORD *)(a2 + 72) + v4;
  *(_DWORD *)(a1 + 36) = result;
  return result;
}
