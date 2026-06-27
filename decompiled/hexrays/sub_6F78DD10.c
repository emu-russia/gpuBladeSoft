int __cdecl sub_6F78DD10(int a1)
{
  int v1; // esi@1
  int v2; // eax@1
  int result; // eax@1

  v1 = **(_DWORD **)(a1 + 188);
  sub_6F773D90(**(_DWORD **)(a1 + 188), *(_DWORD *)(a1 + 168));
  v2 = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  result = sub_6F773D90(v1, v2);
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_BYTE *)(a1 + 192) = 0;
  return result;
}
