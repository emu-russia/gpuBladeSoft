int __cdecl sub_6F6F5A70(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rdi@1
  int *v8; // eax@1
  signed int v9; // ecx@1
  int result; // eax@1
  int v11; // [sp+20h] [bp-2Ch]@1
  int v12; // [sp+24h] [bp-28h]@1
  int v13; // [sp+28h] [bp-24h]@1

  v11 = a5;
  v12 = a6;
  v13 = a7;
  dword_6FCFFE50(a3, a4, &v11);
  v7 = (v13 & ~(v13 >> 31)) - 255;
  HIDWORD(v7) = (HIDWORD(v7) & v7) + 255;
  v8 = &dword_6FBBFE50[4 * *a1];
  LODWORD(v7) = ((((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 255) >> 1) + (*v8 >> 1) - 255;
  v9 = (SHIDWORD(v7) >> 1) + (v8[2] >> 1) - 255;
  LOWORD(v8) = ((((unsigned __int16)v9 & (unsigned __int16)(v9 >> 31)) + 255) << 7) & 0x7C00 | (4
                                                                                              * (((((signed int)((((signed int)((v12 & ~((unsigned __int64)v12 >> 32)) - 255) >> 31) & ((v12 & ~((unsigned __int64)v12 >> 32)) - 255)) + 255) >> 1)
                                                                                                 + (v8[1] >> 1)
                                                                                                 - 255) >> 31) & (((signed int)((((signed int)((v12 & ~((unsigned __int64)v12 >> 32)) - 255) >> 31) & ((v12 & ~((unsigned __int64)v12 >> 32)) - 255)) + 255) >> 1) + (v8[1] >> 1) - 255))
                                                                                              + 1020) & 0x3E0 | ((signed int)((v7 & ((signed int)v7 >> 31)) + 255) >> 3) & 0x1F;
  *a1 = (_WORD)v8;
  *a2 = dword_6FCBFE50[(signed __int16)v8];
  result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  *a1 |= result;
  return result;
}
