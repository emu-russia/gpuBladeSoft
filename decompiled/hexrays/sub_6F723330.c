int __cdecl sub_6F723330(int a1, int a2, unsigned __int16 a3)
{
  char *v3; // edx@1
  int result; // eax@1
  char *v5; // edx@1
  char *v6; // edx@1

  v3 = *(char **)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  result = a3 | (a3 << 16);
  *(_DWORD *)v3 = result;
  v5 = &v3[2 * dword_6FD40980];
  *(_DWORD *)v5 = result;
  v6 = &v5[2 * dword_6FD40980];
  *(_DWORD *)v6 = result;
  *(_DWORD *)&v6[2 * dword_6FD40980] = result;
  return result;
}
