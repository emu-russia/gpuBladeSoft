int __cdecl sub_6F6E5760(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // ebx@1
  int *v8; // edi@2
  signed int v9; // ebx@2
  signed int v10; // ebp@2
  __int16 v11; // ax@2
  int result; // eax@2

  v7 = *a1;
  if ( (signed __int16)v7 >= 0 )
  {
    v8 = &dword_6FBBFE50[4 * v7];
    v9 = v8[1] + ((signed int)a6 >> 2) - 255;
    v10 = v8[2] + ((signed int)a7 >> 2) - 255;
    v11 = ((((unsigned __int16)(v10 >> 31) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | (4 * ((v9 >> 31) & v9) + 1020) & 0x3E0 | (((((*v8 + ((signed int)a5 >> 2) - 255) >> 31) & (*v8 + ((signed int)a5 >> 2) - 255)) + 255) >> 3) & 0x1F;
    *a1 = v11;
    *a2 = dword_6FCBFE50[v11];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
