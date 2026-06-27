_WORD *__usercall sub_6F691050@<eax>(_WORD *result@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // ebx@1
  int v6; // ebx@2
  signed int v7; // esi@2
  int v8; // ebx@2
  signed int v9; // esi@2

  v5 = *result;
  if ( (signed __int16)v5 >= 0 )
  {
    v6 = 4 * v5;
    v7 = dword_6FBBFE50[v6 + 2] + a5 - 255;
    *result = ((((unsigned __int16)(v7 >> 31) & (unsigned __int16)v7) + 255) << 7) & 0x7C00 | (4
                                                                                             * (((dword_6FBBFE54[v6]
                                                                                                + a4
                                                                                                - 255) >> 31) & (LOWORD(dword_6FBBFE54[v6]) + a4 - 255))
                                                                                             + 1020) & 0x3E0 | ((((a3 + dword_6FBBFE50[v6] - 255) & ((a3 + dword_6FBBFE50[v6] - 255) >> 31)) + 255) >> 3) & 0x1F;
    v8 = *a2;
    v9 = a3 + (unsigned __int8)*a2 - 255;
    *a2 = (((v9 >> 31) & v9) + 255) | ((((a5 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) & ((a5 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) >> 31))
                                      + 255) << 16) | (((((a4 + BYTE1(v8) - 255) >> 31) & (a4 + BYTE1(v8) - 255)) + 255) << 8);
    *result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
