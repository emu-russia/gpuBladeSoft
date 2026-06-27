_WORD *__usercall sub_6F68EFD0@<eax>(_WORD *result@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  signed int v5; // ebx@1
  signed int var0; // ST00_4@1
  signed int vars4; // ST04_4@1
  int v8; // ecx@1
  signed int v9; // esi@1
  int v10; // ecx@1
  signed int v11; // esi@1

  v5 = (signed int)a3 >> 2;
  var0 = (signed int)a5 >> 2;
  vars4 = (signed int)a4 >> 2;
  v8 = 4 * *result;
  v9 = dword_6FBBFE50[v8 + 2] + var0 - 255;
  *result = ((((unsigned __int16)(v9 >> 31) & (unsigned __int16)v9) + 255) << 7) & 0x7C00 | (4
                                                                                           * (((dword_6FBBFE54[v8]
                                                                                              + vars4
                                                                                              - 255) >> 31) & (LOWORD(dword_6FBBFE54[v8]) + vars4 - 255))
                                                                                           + 1020) & 0x3E0 | ((((v5 + dword_6FBBFE50[v8] - 255) & ((v5 + dword_6FBBFE50[v8] - 255) >> 31)) + 255) >> 3) & 0x1F;
  v10 = *a2;
  v11 = v5 + (unsigned __int8)*a2 - 255;
  *a2 = (((v11 >> 31) & v11) + 255) | ((((unsigned __int8)((unsigned int)*a2 >> 16) & ((signed int)(unsigned __int8)((unsigned int)*a2 >> 16) >> 31))
                                      + 255) << 16) | (((((vars4 + BYTE1(v10) - 255) >> 31) & (vars4 + BYTE1(v10) - 255))
                                                      + 255) << 8);
  *result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
