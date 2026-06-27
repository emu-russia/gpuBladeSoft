_WORD *__usercall sub_6F68DB40@<eax>(_WORD *result@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _DWORD *v7; // edi@1
  _WORD *v8; // esi@2
  int v9; // ebp@2
  signed int v10; // eax@2
  __int64 v11; // rcx@2
  int v12; // [sp+10h] [bp-3Ch]@2
  int v13; // [sp+14h] [bp-38h]@2
  int v14; // [sp+18h] [bp-34h]@2

  v7 = a2;
  if ( *result >= 0 )
  {
    v8 = result;
    v12 = a5;
    v13 = a6;
    v14 = a7;
    dword_6FCFFE50(a3, a4, &v12);
    v9 = 4 * *v8;
    v10 = dword_6FBBFE58[v9] + ((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255));
    v11 = dword_6FBBFE50[v9] + (((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31));
    LOWORD(v11) = ((((unsigned __int16)v10 & (unsigned __int16)(v10 >> 31)) + 255) << 7) & 0x7C00 | (4 * (((dword_6FBBFE54[v9] + ((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255))) >> 31) & (LOWORD(dword_6FBBFE54[v9]) + ((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)))) + 1020) & 0x3E0 | ((signed int)((HIDWORD(v11) & v11) + 255) >> 3) & 0x1F;
    *v8 = v11;
    result = (_WORD *)dword_6FCBFE50[(signed __int16)v11];
    *v7 = result;
    *v8 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
