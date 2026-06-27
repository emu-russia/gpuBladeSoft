int *__cdecl sub_6F6D37A0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, __int16 a6, __int16 a7)
{
  __int16 v7; // ax@2
  int v8; // ebx@2
  int *result; // eax@2

  if ( *a1 >= 0 )
  {
    v7 = (a7 << 7) & 0x7C00 | ((signed int)a5 >> 3) | 4 * a6 & 0x3E0;
    *a1 = v7;
    v8 = dword_6FCBFE50[v7];
    result = a2;
    *a2 = v8;
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
