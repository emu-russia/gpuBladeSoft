int __cdecl sub_6F79D370(int a1, int a2)
{
  __int16 v2; // ax@1
  __int16 v3; // cx@1

  *(_DWORD *)(a1 + 16) = a2;
  v2 = *(_BYTE *)(a2 + 6);
  v3 = *(_BYTE *)(a2 + 7);
  *(_DWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = (unsigned __int16)(v3 | (v2 << 8)) >> 1;
  return 0;
}
