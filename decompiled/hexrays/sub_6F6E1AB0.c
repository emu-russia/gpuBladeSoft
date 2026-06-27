_DWORD *__cdecl sub_6F6E1AB0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, _DWORD *a7)
{
  _DWORD *result; // eax@1
  __int64 v8; // rax@2
  int v9; // esi@2
  int *v10; // edi@2
  signed int v11; // esi@2
  int v12; // [sp+20h] [bp-1Ch]@2
  int v13; // [sp+24h] [bp-18h]@2
  int v14; // [sp+28h] [bp-14h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v12 = a5;
    v13 = a6;
    v14 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v12);
    v8 = (v12 & ~(v12 >> 31)) - 255;
    v9 = 4 * *a1;
    v10 = &dword_6FBBFE50[v9];
    v11 = dword_6FBBFE50[v9] + ((signed int)((HIDWORD(v8) & v8) + 255) >> 2) - 255;
    HIDWORD(v8) = v10[2] + (((((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31)) + 255) >> 2) - 255;
    LOWORD(v8) = ((((unsigned __int16)(SHIDWORD(v8) >> 31) & WORD2(v8)) + 255) << 7) & 0x7C00 | (4
                                                                                               * (((v10[1]
                                                                                                  + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2)
                                                                                                  - 255) >> 31) & (*((_WORD *)v10 + 2) + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2) - 255))
                                                                                               + 1020) & 0x3E0 | (((v11 & (v11 >> 31)) + 255) >> 3) & 0x1F;
    *a1 = v8;
    HIDWORD(v8) = dword_6FCBFE50[(signed __int16)v8];
    result = a2;
    *a2 = HIDWORD(v8);
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
