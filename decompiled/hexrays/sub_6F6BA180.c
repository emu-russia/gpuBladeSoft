int __cdecl sub_6F6BA180(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int result; // eax@1
  int v8; // eax@2
  int *v9; // edi@2
  __int64 v10; // rax@2
  int v11; // ecx@2
  signed int v12; // esi@2

  result = *a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = 4 * result;
    v9 = &dword_6FBBFE50[v8];
    v10 = dword_6FBBFE50[v8] - a5;
    *a1 = (((unsigned __int16)(*((_WORD *)v9 + 4) - a7) & (unsigned __int16)~(unsigned __int16)((v9[2] - a7) >> 31)) << 7) & 0x7C00 | 4 * ((v9[1] - a6) & ~(unsigned __int16)((v9[1] - a6) >> 31)) & 0x3E0 | ((signed int)(v10 & ~HIDWORD(v10)) >> 3) & 0x1F;
    v11 = *a2;
    v12 = (unsigned __int8)*a2 - a5;
    *a2 = ~(v12 >> 31) & v12 | ((~(((unsigned __int8)((unsigned int)*a2 >> 16) - a7) >> 31) & ((unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                             - a7)) << 16) | (((BYTE1(v11) - a6) & ~((BYTE1(v11) - a6) >> 31)) << 8);
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
