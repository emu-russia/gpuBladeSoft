int __cdecl sub_6F721CC0(int a1, int a2, int a3)
{
  int result; // eax@1

  result = *(_DWORD *)(dword_6FD400F4 + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a3;
  return result;
}
