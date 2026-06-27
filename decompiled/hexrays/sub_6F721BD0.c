int __cdecl sub_6F721BD0(int a1, int a2, int a3)
{
  int result; // eax@1

  result = *(_DWORD *)(dword_6FD400F4 + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 20) = a3;
  *(_DWORD *)(result + 24) = a3;
  return result;
}
