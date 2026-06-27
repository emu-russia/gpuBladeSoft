BOOL __cdecl sub_6F835B73(int a1, int a2, int a3)
{
  return *(_DWORD *)(a1 + 24) >= *(_DWORD *)(a2 + 24) - a3
      && *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a2 + 24) + a3
      && *(_DWORD *)(a1 + 28) >= *(_DWORD *)(a2 + 28) - a3
      && *(_DWORD *)(a1 + 28) <= *(_DWORD *)(a2 + 28) + a3
      && *(_DWORD *)a1 >= *(_DWORD *)a2 - a3
      && *(_DWORD *)a1 <= *(_DWORD *)a2 + a3
      && *(_DWORD *)(a1 + 4) >= *(_DWORD *)(a2 + 4) - a3
      && *(_DWORD *)(a1 + 4) <= *(_DWORD *)(a2 + 4) + a3
      && *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a2 + 8) - a3
      && *(_DWORD *)(a1 + 8) <= *(_DWORD *)(a2 + 8) + a3
      && *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a2 + 12) - a3
      && *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a2 + 12) + a3
      && *(_DWORD *)(a1 + 16) >= *(_DWORD *)(a2 + 16) - a3
      && *(_DWORD *)(a1 + 16) <= *(_DWORD *)(a2 + 16) + a3
      && *(_DWORD *)(a1 + 20) >= *(_DWORD *)(a2 + 20) - a3
      && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a2 + 20) + a3;
}
