int *__cdecl sub_6F6CF4A0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // ecx@1
  int v8; // ebp@1
  int *v9; // edx@1
  signed int v10; // ecx@1
  signed int v11; // edx@1
  int v12; // edx@1
  signed int v13; // ebx@1
  int *result; // eax@1
  signed int v15; // edi@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = &dword_6FBBFE50[v7];
  v10 = a6 + dword_6FBBFE54[v7] - 255;
  v11 = a7 + v9[2] - 255;
  *a1 = ((((unsigned __int16)(v11 >> 31) & (unsigned __int16)v11) + 255) << 7) & 0x7C00 | (4 * ((v10 >> 31) & v10) + 1020) & 0x3E0 | ((((a5 + v8 - 255) & ((a5 + v8 - 255) >> 31)) + 255) >> 3) & 0x1F;
  v12 = *a2;
  v13 = a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
  result = a2;
  v15 = a5 + (unsigned __int8)*a2 - 255;
  *a2 = (((v15 >> 31) & v15) + 255) | (((v13 & (v13 >> 31)) + 255) << 16) | (((((a6 + BYTE1(v12) - 255) >> 31) & (a6 + BYTE1(v12) - 255))
                                                                            + 255) << 8);
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
