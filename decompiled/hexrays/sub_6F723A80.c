int __cdecl sub_6F723A80(int a1, int a2, unsigned __int16 a3)
{
  int result; // eax@1

  result = a3 | (a3 << 16);
  **(_DWORD **)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1)) = result;
  return result;
}
