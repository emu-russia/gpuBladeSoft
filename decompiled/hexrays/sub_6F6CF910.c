int __cdecl sub_6F6CF910(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int result; // eax@1

  result = (a7 << 16) | a5 | (a6 << 8);
  *a1 = (a7 << 7) & 0x7C00 | ((signed int)a5 >> 3) | 4 * a6 & 0x3E0;
  *a2 = result;
  return result;
}
