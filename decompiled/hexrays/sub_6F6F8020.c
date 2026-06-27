int *__cdecl sub_6F6F8020(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edx@1
  int v8; // eax@1
  signed int v9; // esi@1
  int v10; // ebx@1
  int *result; // eax@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7] + ((signed int)a5 >> 2);
  v9 = dword_6FBBFE54[v7] + ((signed int)a6 >> 2) - 255;
  LOWORD(v8) = ((((unsigned __int16)(LOWORD(dword_6FBBFE50[v7 + 2]) + ((signed int)a7 >> 2) - 255) & (unsigned __int16)((dword_6FBBFE50[v7 + 2] + ((signed int)a7 >> 2) - 255) >> 31))
               + 255) << 7) & 0x7C00 | (4 * ((v9 >> 31) & v9) + 1020) & 0x3E0 | ((((v8 - 255) & ((v8 - 255) >> 31)) + 255) >> 3) & 0x1F;
  *a1 = v8;
  v10 = dword_6FCBFE50[(signed __int16)v8];
  result = a2;
  *a2 = v10;
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
