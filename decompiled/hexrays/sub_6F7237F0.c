int __cdecl sub_6F7237F0(int a1, int a2, unsigned __int16 a3)
{
  int v3; // edx@1
  int result; // eax@1
  int v5; // ecx@1
  int v6; // edx@1

  v3 = *(_DWORD *)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  result = a3 | (a3 << 16);
  *(_DWORD *)v3 = result;
  v5 = dword_6FD40980;
  *(_DWORD *)(v3 + 4) = result;
  v6 = v3 + 2 * v5;
  *(_DWORD *)v6 = result;
  *(_DWORD *)(v6 + 4) = result;
  return result;
}
