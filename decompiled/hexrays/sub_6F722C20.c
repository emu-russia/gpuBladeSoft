__int16 *__cdecl sub_6F722C20(int a1, int a2, __int16 a3)
{
  __int16 *v3; // eax@1
  __int16 *v4; // eax@1
  __int16 *v5; // eax@1
  __int16 *v6; // eax@1
  __int16 *result; // eax@1

  v3 = *(__int16 **)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *v3 = a3;
  v4 = &v3[dword_6FD40980];
  *v4 = a3;
  v5 = &v4[dword_6FD40980];
  *v5 = a3;
  v6 = &v5[dword_6FD40980];
  *v6 = a3;
  result = &v6[dword_6FD40980];
  *result = a3;
  result[dword_6FD40980] = a3;
  return result;
}
