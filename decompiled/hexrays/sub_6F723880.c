int __cdecl sub_6F723880(int a1, int a2, unsigned __int16 a3)
{
  char *v3; // edx@1
  int result; // eax@1

  v3 = *(char **)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  result = a3 | (a3 << 16);
  *(_DWORD *)v3 = result;
  *(_DWORD *)&v3[2 * dword_6FD40980] = result;
  return result;
}
