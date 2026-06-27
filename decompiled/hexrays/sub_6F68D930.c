_WORD *__usercall sub_6F68D930@<eax>(_WORD *result@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _DWORD *v7; // edi@1
  _WORD *v8; // esi@2
  __int16 v9; // cx@2
  int v10; // [sp+10h] [bp-2Ch]@2
  int v11; // [sp+14h] [bp-28h]@2
  int v12; // [sp+18h] [bp-24h]@2

  v7 = a2;
  if ( *result >= 0 )
  {
    v8 = result;
    v10 = a5;
    v11 = a6;
    v12 = a7;
    dword_6FCFFE50(a3, a4, &v10);
    v9 = ((((unsigned __int16)((v12 & ~(v12 >> 31)) - 255) & (unsigned __int16)(((v12 & ~(v12 >> 31)) - 255) >> 31))
         + 255) << 7) & 0x7C00 | (4 * ((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v10 & ~(v10 >> 31)) - 255) & (((v10 & ~(v10 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    result = (_WORD *)v9;
    *v8 = v9;
    *v7 = dword_6FCBFE50[v9];
    *v8 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
