int __cdecl sub_6F7A9E00(int a1, int a2, unsigned __int16 a3, int a4)
{
  int result; // eax@1

  result = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 8 * a3 + 4) += a4;
  return result;
}
