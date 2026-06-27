__int16 *__cdecl sub_6F7238C0(int a1, int a2, __int16 a3)
{
  __int16 *result; // eax@1

  result = *(__int16 **)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *result = a3;
  result[dword_6FD40980] = a3;
  return result;
}
