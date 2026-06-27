_WORD *__usercall sub_6F691250@<eax>(_WORD *result@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // ebx@1
  int *v6; // edi@2
  int v7; // ST04_4@2
  int v8; // ebx@2
  int v9; // edi@2
  signed int v10; // ebx@2

  v5 = *result;
  if ( (signed __int16)v5 >= 0 )
  {
    v6 = &dword_6FBBFE50[4 * v5];
    v7 = a4;
    *result = (((unsigned __int16)(v6[2] - a5) & (unsigned __int16)~(unsigned __int16)((v6[2] - a5) >> 31)) << 7) & 0x7C00 | 4 * ((v6[1] - v7) & ~(unsigned __int16)((v6[1] - v7) >> 31)) & 0x3E0 | (((*v6 - a3) & ~((*v6 - a3) >> 31)) >> 3) & 0x1F;
    v8 = *a2;
    v9 = BYTE1(v8);
    v10 = (unsigned __int8)((unsigned int)*a2 >> 16) - a5;
    *a2 = ~(((unsigned __int8)*a2 - a3) >> 31) & ((unsigned __int8)*a2 - a3) | ((~(v10 >> 31) & v10) << 16) | (((v9 - v7) & ~((v9 - v7) >> 31)) << 8);
    *result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
