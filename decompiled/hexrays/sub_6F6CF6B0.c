int __cdecl sub_6F6CF6B0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  signed int v7; // ecx@1
  signed int v8; // esi@1
  signed int v9; // ebx@1
  int v10; // eax@1
  int v11; // esi@1
  int result; // eax@1

  v7 = (signed int)a5 >> 1;
  v8 = (signed int)a6 >> 1;
  v9 = (signed int)a7 >> 1;
  *a1 = (((_WORD)v9 + (unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1)) << 7) & 0x7C00 | ((v7
                                                                                             + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | 4 * (v8 + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0;
  v10 = *a2;
  v11 = (((signed int)BYTE1(v10) >> 1) + v8) << 8;
  result = (*a2 >> 1) & 0x7F;
  *a2 = v11 | (((((unsigned int)*a2 >> 17) & 0x7F) + v9) << 16) | (result + v7);
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
