int __cdecl sub_6F7239C0(int a1, int a2, unsigned __int16 a3)
{
  int v3; // ecx@1
  int result; // eax@1

  v3 = *(_DWORD *)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  result = a3 | (a3 << 16);
  *(_WORD *)(v3 + 8) = a3;
  *(_DWORD *)v3 = result;
  *(_DWORD *)(v3 + 4) = result;
  return result;
}
