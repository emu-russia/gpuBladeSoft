int __cdecl sub_6F767DB0(int a1, int a2)
{
  int v2; // ecx@1
  int v3; // edx@1

  v2 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 72) = &loc_6F75746C;
  *(_DWORD *)(a2 + 108) = v2;
  *(_DWORD *)(a2 + 112) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 116) = *(_DWORD *)(a1 + 28);
  v3 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 124) = v3;
  *(_DWORD *)(a2 + 124) &= 0xFFFFFFFE;
  return 0;
}
