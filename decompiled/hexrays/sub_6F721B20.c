int __cdecl sub_6F721B20(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ecx@1
  int result; // eax@1

  v3 = *(_DWORD *)(dword_6FD400F4 + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *(_DWORD *)v3 = a3;
  v4 = dword_6FD40980;
  *(_DWORD *)(v3 + 4) = a3;
  result = v3 + 4 * v4;
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a3;
  return result;
}
