int __cdecl sub_6F720850(int a1, int a2, int a3)
{
  int result; // eax@1
  int *v4; // edx@1
  int *v5; // edx@1
  int *v6; // edx@1
  int *v7; // edx@1
  int *v8; // edx@1
  int *v9; // edx@1

  result = a3;
  v4 = *(int **)(dword_6FD400F4 + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *v4 = a3;
  v5 = &v4[dword_6FD40980];
  *v5 = a3;
  v6 = &v5[dword_6FD40980];
  *v6 = a3;
  v7 = &v6[dword_6FD40980];
  *v7 = a3;
  v8 = &v7[dword_6FD40980];
  *v8 = a3;
  v9 = &v8[dword_6FD40980];
  *v9 = a3;
  v9[dword_6FD40980] = a3;
  return result;
}
