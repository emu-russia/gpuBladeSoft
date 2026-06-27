int __cdecl sub_6F69FAB0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, __int16 a7)
{
  int result; // eax@2

  if ( *a1 >= 0 )
  {
    result = ((unsigned __int8)a7 << 16) | a5 | (a6 << 8);
    *a1 = ((unsigned __int8)a7 << 7) & 0x7C00 | ((signed int)a5 >> 3) | 4 * a6 & 0x3E0;
    *a2 = result;
  }
  return result;
}
