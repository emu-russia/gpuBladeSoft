int __cdecl sub_6F723AB0(int a1, int a2, int a3)
{
  int result; // eax@1

  result = a3;
  **(_WORD **)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1)) = a3;
  return result;
}
