int __cdecl sub_6F815950(int a1, int a2, signed int a3, int a4)
{
  int v4; // eax@1
  int v5; // eax@1
  int result; // eax@1

  v4 = *(_DWORD *)(a2 + 32) * a4 + (a3 >> 1);
  *(_DWORD *)(a1 + 16) = v4 + *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 32) = v4 + *(_DWORD *)(a2 + 72);
  v5 = *(_DWORD *)(a2 + 32) + v4;
  *(_DWORD *)(a1 + 24) = v5 + *(_DWORD *)(a2 + 40);
  result = *(_DWORD *)(a2 + 72) + v5;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
