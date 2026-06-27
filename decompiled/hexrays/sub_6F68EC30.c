_WORD *__usercall sub_6F68EC30@<eax>(_WORD *result@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // ebx@1
  int var0; // ST00_4@1
  int vars4; // ST04_4@1
  int v8; // esi@1
  int v9; // ebx@1
  signed int v10; // esi@1

  v5 = 4 * *result;
  var0 = a5;
  vars4 = a4;
  v8 = dword_6FBBFE50[v5 + 2] + a5;
  *result = ((((unsigned __int16)((v8 - 255) >> 31) & (unsigned __int16)(v8 - 255)) + 255) << 7) & 0x7C00 | (4 * (((dword_6FBBFE54[v5] + a4 - 255) >> 31) & (LOWORD(dword_6FBBFE54[v5]) + a4 - 255)) + 1020) & 0x3E0 | ((((a3 + dword_6FBBFE50[v5] - 255) & ((a3 + dword_6FBBFE50[v5] - 255) >> 31)) + 255) >> 3) & 0x1F;
  v9 = *a2;
  v10 = a3 + (unsigned __int8)*a2 - 255;
  *a2 = (((v10 >> 31) & v10) + 255) | ((((unsigned __int8)((unsigned int)*a2 >> 16) & ((signed int)(unsigned __int8)((unsigned int)*a2 >> 16) >> 31))
                                      + 255) << 16) | (((((a4 + BYTE1(v9) - 255) >> 31) & (a4 + BYTE1(v9) - 255)) + 255) << 8);
  *result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
