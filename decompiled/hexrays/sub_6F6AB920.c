int __cdecl sub_6F6AB920(_WORD *a1, int *a2, int a3, int a4, int a5, unsigned __int8 a6, __int16 a7)
{
  int result; // eax@1

  result = a5;
  if ( *a1 >= 0 )
  {
    *a1 = ((unsigned __int8)a7 << 7) & 0x7C00 | ((signed int)(unsigned __int8)a5 >> 3) | 4 * a6 & 0x3E0;
    *a2 = ((unsigned __int8)a7 << 16) | (unsigned __int8)a5 | (a6 << 8);
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
