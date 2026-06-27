int __cdecl sub_6F772B30(int a1)
{
  int result; // eax@1

  result = fclose(*(FILE **)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  return result;
}
