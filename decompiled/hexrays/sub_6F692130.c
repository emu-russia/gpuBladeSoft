_WORD *__usercall sub_6F692130@<eax>(_WORD *result@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  unsigned int *v7; // esi@1
  _WORD *v8; // ebx@2
  __int64 v9; // rax@2
  int v10; // ST1C_4@2
  __int64 v11; // rax@2
  int v12; // edi@2
  signed int v13; // ebp@2
  signed int v14; // edi@2
  int v15; // [sp+20h] [bp-3Ch]@2
  int v16; // [sp+24h] [bp-38h]@2
  int v17; // [sp+28h] [bp-34h]@2

  v7 = a2;
  if ( *result >= 0 )
  {
    v8 = result;
    v16 = a6;
    v15 = a5;
    v17 = a7;
    dword_6FCFFE50(a3, a4, &v15);
    v9 = (v15 & ~(v15 >> 31)) - 255;
    v10 = (HIDWORD(v9) & v9) + 255;
    v11 = (v17 & ~(v17 >> 31)) - 255;
    LODWORD(v11) = (HIDWORD(v11) & v11) + 255;
    v12 = 4 * *v8;
    v13 = dword_6FBBFE50[v12] - v10;
    HIDWORD(v11) = dword_6FBBFE50[v12 + 2];
    v14 = dword_6FBBFE54[v12] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255);
    *v8 = (((unsigned __int16)~(unsigned __int16)((HIDWORD(v11) - (signed int)v11) >> 31) & (unsigned __int16)(WORD2(v11) - v11)) << 7) & 0x7C00 | 4 * (~(unsigned __int16)(v14 >> 31) & v14) & 0x3E0 | ((~(v13 >> 31) & v13) >> 3) & 0x1F;
    HIDWORD(v11) = *v7;
    result = (_WORD *)(~(((unsigned __int8)*v7 - a5) >> 31) & ((unsigned __int8)*v7 - a5) | ((~(((unsigned __int8)(*v7 >> 16)
                                                                                               - a7) >> 31) & ((unsigned __int8)(*v7 >> 16) - a7)) << 16) | (((BYTE5(v11) - a6) & ~((BYTE5(v11) - a6) >> 31)) << 8));
    *v7 = (unsigned int)result;
    *v8 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
