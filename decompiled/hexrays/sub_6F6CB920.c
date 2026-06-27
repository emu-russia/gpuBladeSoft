int *__cdecl sub_6F6CB920(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rax@1
  int v8; // ebx@1
  __int16 v9; // cx@1
  __int64 v10; // rax@1
  signed int v11; // edi@1
  int *result; // eax@1
  int v13; // [sp+30h] [bp-2Ch]@1
  int v14; // [sp+34h] [bp-28h]@1
  int v15; // [sp+38h] [bp-24h]@1

  v14 = a6;
  v13 = a5;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v7 = (signed int)((~((unsigned __int64)v14 >> 32) & v14) - 255);
  v8 = 4 * *a1;
  v9 = (4
      * (((signed int)(dword_6FBBFE54[v8] + (v7 & HIDWORD(v7))) >> 31) & (LOWORD(dword_6FBBFE54[v8]) + (v7 & WORD2(v7))))
      + 1020) & 0x3E0 | (((((dword_6FBBFE50[v8] + (((~(v13 >> 31) & v13) - 255) & (((~(v13 >> 31) & v13) - 255) >> 31))) >> 31) & (dword_6FBBFE50[v8] + (((~(v13 >> 31) & v13) - 255) & (((~(v13 >> 31) & v13) - 255) >> 31))))
                        + 255) >> 3) & 0x1F;
  v10 = dword_6FBBFE58[v8] + ((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255));
  *a1 = (((WORD2(v10) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | v9;
  HIDWORD(v10) = *a2;
  v11 = a5 + (unsigned __int8)*a2 - 255;
  result = a2;
  *a2 = (((v11 >> 31) & v11) + 255) | ((((a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) & ((a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) >> 31))
                                      + 255) << 16) | (((((a6 + BYTE5(v10) - 255) >> 31) & (a6 + BYTE5(v10) - 255)) + 255) << 8);
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
