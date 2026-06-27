int *__cdecl sub_6F6E6B50(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int16 v7; // ax@1
  int v8; // edx@1
  int *result; // eax@1

  v7 = (((unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1) + (unsigned __int16)((signed int)a7 >> 1)) << 7) & 0x7C00 | (((dword_6FBBFE50[4 * *a1] >> 1) + ((signed int)a5 >> 1)) >> 3) & 0x1F | 4 * ((dword_6FBBFE50[4 * *a1 + 1] >> 1) + ((signed int)a6 >> 1)) & 0x3E0;
  *a1 = v7;
  v8 = dword_6FCBFE50[v7];
  result = a2;
  *a2 = v8;
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
