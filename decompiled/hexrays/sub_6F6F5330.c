_DWORD *__cdecl sub_6F6F5330(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rax@1
  int v8; // esi@1
  int *v9; // edi@1
  signed int v10; // esi@1
  _DWORD *result; // eax@1
  int v12; // [sp+20h] [bp-1Ch]@1
  int v13; // [sp+24h] [bp-18h]@1
  int v14; // [sp+28h] [bp-14h]@1

  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v7 = (v12 & ~(v12 >> 31)) - 255;
  v8 = 4 * *a1;
  v9 = &dword_6FBBFE50[v8];
  v10 = dword_6FBBFE50[v8] + ((signed int)((HIDWORD(v7) & v7) + 255) >> 2) - 255;
  HIDWORD(v7) = v9[2] + (((((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31)) + 255) >> 2) - 255;
  LOWORD(v7) = ((((unsigned __int16)(SHIDWORD(v7) >> 31) & WORD2(v7)) + 255) << 7) & 0x7C00 | (4
                                                                                             * (((v9[1]
                                                                                                + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255))
                                                                                                  + 255) >> 2)
                                                                                                - 255) >> 31) & (*((_WORD *)v9 + 2) + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2) - 255))
                                                                                             + 1020) & 0x3E0 | (((v10 & (v10 >> 31)) + 255) >> 3) & 0x1F;
  *a1 = v7;
  HIDWORD(v7) = dword_6FCBFE50[(signed __int16)v7];
  result = a2;
  *a2 = HIDWORD(v7);
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
