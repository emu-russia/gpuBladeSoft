__int16 *__cdecl sub_6F723380(int a1, int a2, __int16 a3)
{
  __int16 *v3; // eax@1
  __int16 *v4; // eax@1
  __int16 *result; // eax@1

  v3 = *(__int16 **)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *v3 = a3;
  v4 = &v3[dword_6FD40980];
  *v4 = a3;
  result = &v4[dword_6FD40980];
  *result = a3;
  result[dword_6FD40980] = a3;
  return result;
}
