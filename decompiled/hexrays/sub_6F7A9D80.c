int __cdecl sub_6F7A9D80(int a1, int a2, int a3)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(result + 4 * a2) += a3;
  return result;
}
