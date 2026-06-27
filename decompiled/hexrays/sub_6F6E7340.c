int *__cdecl sub_6F6E7340(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int16 v7; // ax@1
  int v8; // ecx@1
  int *result; // eax@1

  v7 = (a7 << 7) & 0x7C00 | ((signed int)a5 >> 3) | 4 * a6 & 0x3E0;
  *a1 = v7;
  v8 = dword_6FCBFE50[v7];
  result = a2;
  *a2 = v8;
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
