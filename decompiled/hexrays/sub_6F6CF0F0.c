signed int __cdecl sub_6F6CF0F0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  signed int v7; // ebx@1
  signed int v8; // ecx@1
  int v9; // edi@1
  signed int v10; // esi@1
  int v11; // eax@1
  signed int v12; // ebx@1
  signed int v13; // edi@1
  int v14; // esi@1
  signed int result; // eax@1

  v7 = (signed int)a5 >> 2;
  v8 = (signed int)a6 >> 2;
  v9 = 4 * *a1;
  v10 = dword_6FBBFE50[v9 + 2] + ((signed int)a7 >> 2) - 255;
  *a1 = ((((unsigned __int16)(v10 >> 31) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | (4
                                                                                         * (((v8
                                                                                            + dword_6FBBFE54[v9]
                                                                                            - 255) >> 31) & (v8 + LOWORD(dword_6FBBFE54[v9]) - 255))
                                                                                         + 1020) & 0x3E0 | ((((v7 + dword_6FBBFE50[v9] - 255) & ((v7 + dword_6FBBFE50[v9] - 255) >> 31)) + 255) >> 3) & 0x1F;
  v11 = *a2;
  v12 = v7 + (unsigned __int8)*a2 - 255;
  v13 = ((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
  v14 = (((v8 + BYTE1(v11) - 255) >> 31) & (v8 + BYTE1(v11) - 255)) + 255;
  result = v12 >> 31;
  *a2 = (((v12 >> 31) & v12) + 255) | (((v13 & (v13 >> 31)) + 255) << 16) | (v14 << 8);
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
