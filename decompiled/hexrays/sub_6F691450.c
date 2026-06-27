_WORD *__usercall sub_6F691450@<eax>(_WORD *result@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  signed int v5; // ebx@2
  int v6; // ecx@2
  signed int v7; // ST04_4@2
  signed int v8; // edi@2
  int v9; // ecx@2
  signed int v10; // esi@2

  if ( *result >= 0 )
  {
    v5 = (signed int)a3 >> 2;
    v6 = 4 * *result;
    v7 = (signed int)a5 >> 2;
    v8 = (signed int)a4 >> 2;
    *result = ((((unsigned __int16)((dword_6FBBFE50[v6 + 2] + v7 - 255) >> 31) & (unsigned __int16)(LOWORD(dword_6FBBFE50[v6 + 2])
                                                                                                  + v7
                                                                                                  - 255))
              + 255) << 7) & 0x7C00 | (4
                                     * (((dword_6FBBFE54[v6] + v8 - 255) >> 31) & (LOWORD(dword_6FBBFE54[v6]) + v8 - 255))
                                     + 1020) & 0x3E0 | ((((v5 + dword_6FBBFE50[v6] - 255) & ((v5
                                                                                            + dword_6FBBFE50[v6]
                                                                                            - 255) >> 31))
                                                       + 255) >> 3) & 0x1F;
    v9 = *a2;
    v10 = v5 + (unsigned __int8)*a2 - 255;
    *a2 = (((v10 >> 31) & v10) + 255) | ((((v7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) & ((v7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) >> 31))
                                        + 255) << 16) | (((((v8 + BYTE1(v9) - 255) >> 31) & (v8 + BYTE1(v9) - 255)) + 255) << 8);
    *result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
