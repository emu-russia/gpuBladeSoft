int *__cdecl sub_6F6E3C20(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *result; // eax@1
  __int16 v8; // ax@2
  int v9; // ebp@2

  result = (int *)*a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = (((unsigned __int16)(dword_6FBBFE50[4 * (_DWORD)result + 2] >> 1) + (unsigned __int16)((signed int)a7 >> 1)) << 7) & 0x7C00 | ((((signed int)a5 >> 1) + (dword_6FBBFE50[4 * (signed int)result] >> 1)) >> 3) & 0x1F | 4 * ((dword_6FBBFE50[4 * (_DWORD)result + 1] >> 1) + ((signed int)a6 >> 1)) & 0x3E0;
    *a1 = v8;
    v9 = dword_6FCBFE50[v8];
    result = a2;
    *a2 = v9;
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
