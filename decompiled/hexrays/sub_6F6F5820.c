int *__cdecl sub_6F6F5820(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rax@1
  int v8; // edi@1
  signed int v9; // ecx@1
  signed int v10; // esi@1
  int v11; // esi@1
  int *result; // eax@1
  int v13; // [sp+20h] [bp-1Ch]@1
  int v14; // [sp+24h] [bp-18h]@1
  int v15; // [sp+28h] [bp-14h]@1

  v13 = a5;
  v14 = a6;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v7 = (v14 & ~(v14 >> 31)) - 255;
  v8 = 4 * *a1;
  v9 = dword_6FBBFE50[v8] + (((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31));
  v10 = dword_6FBBFE50[v8 + 2] + ((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255));
  LOWORD(v7) = ((((unsigned __int16)v10 & (unsigned __int16)(v10 >> 31)) + 255) << 7) & 0x7C00 | (4
                                                                                                * (((signed int)(dword_6FBBFE54[v8] + (HIDWORD(v7) & v7)) >> 31) & (LOWORD(dword_6FBBFE54[v8]) + (WORD2(v7) & v7)))
                                                                                                + 1020) & 0x3E0 | ((((v9 >> 31) & v9) + 255) >> 3) & 0x1F;
  *a1 = v7;
  v11 = dword_6FCBFE50[(signed __int16)v7];
  result = a2;
  *a2 = v11;
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
