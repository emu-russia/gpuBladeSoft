int *__cdecl sub_6F7215C0(int a1, int a2, int a3)
{
  int *v3; // eax@1
  int *v4; // eax@1
  int *result; // eax@1

  v3 = *(int **)(dword_6FD400F4 + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *v3 = a3;
  v4 = &v3[dword_6FD40980];
  *v4 = a3;
  result = &v4[dword_6FD40980];
  *result = a3;
  result[dword_6FD40980] = a3;
  return result;
}
