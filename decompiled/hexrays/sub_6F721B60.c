int *__cdecl sub_6F721B60(int a1, int a2, int a3)
{
  int *result; // eax@1

  result = *(int **)(dword_6FD400F4 + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *result = a3;
  result[dword_6FD40980] = a3;
  return result;
}
