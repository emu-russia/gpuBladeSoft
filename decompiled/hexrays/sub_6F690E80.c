_WORD *__usercall sub_6F690E80@<eax>(_WORD *result@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  signed int v5; // ebx@2
  signed int v6; // edi@2
  signed int v7; // esi@2
  int v8; // ecx@2

  if ( *result >= 0 )
  {
    v5 = (signed int)a3 >> 1;
    v6 = (signed int)a4 >> 1;
    v7 = (signed int)a5 >> 1;
    *result = (((_WORD)v7 + (unsigned __int16)(dword_6FBBFE50[4 * *result + 2] >> 1)) << 7) & 0x7C00 | ((v5 + (dword_6FBBFE50[4 * *result] >> 1)) >> 3) & 0x1F | 4 * (v6 + (dword_6FBBFE50[4 * *result + 1] >> 1)) & 0x3E0;
    v8 = *a2;
    *a2 = ((((signed int)BYTE1(v8) >> 1) + v6) << 8) | (((((unsigned int)*a2 >> 17) & 0x7F) + v7) << 16) | (((*a2 >> 1) & 0x7F) + v5);
    *result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
