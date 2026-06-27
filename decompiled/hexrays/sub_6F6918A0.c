_WORD *__usercall sub_6F6918A0@<eax>(_WORD *result@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ST1C_4@2
  _WORD *v8; // edi@2
  __int64 v9; // rax@2
  int v10; // [sp+20h] [bp-2Ch]@2
  int v11; // [sp+24h] [bp-28h]@2
  int v12; // [sp+28h] [bp-24h]@2

  if ( *result >= 0 )
  {
    v7 = a2;
    v8 = result;
    v10 = a5;
    v11 = a6;
    v12 = a7;
    dword_6FCFFE50(a3, a4, &v10);
    v9 = (v10 & ~(v10 >> 31)) - 255;
    HIDWORD(v9) &= v9;
    result = (_WORD *)(((v12 & ~(v12 >> 31)) - 255) >> 31);
    *v8 = ((((unsigned __int16)result & (unsigned __int16)((v12 & ~(v12 >> 31)) - 255)) + 255) << 7) & 0x7C00 | (4 * ((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 1020) & 0x3E0 | ((HIDWORD(v9) + 255) >> 3) & 0x1F;
    *v7 = (a7 << 16) | (a6 << 8) | a5;
    *v8 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
