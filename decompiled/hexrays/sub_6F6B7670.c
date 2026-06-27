int __cdecl sub_6F6B7670(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // edi@2
  __int64 v9; // rax@2
  int v10; // [sp+30h] [bp-2Ch]@2
  int v11; // [sp+34h] [bp-28h]@2
  int v12; // [sp+38h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v10 = a5;
    v11 = a6;
    v12 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v10);
    v8 = 4 * *a1;
    v9 = ((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1)
       + (dword_6FBBFE50[v8 + 2] >> 1)
       - 255;
    *a1 = (((WORD2(v9) & (unsigned __int16)v9) + 255) << 7) & 0x7C00 | (4
                                                                      * (((((signed int)((((signed int)((v11 & ~((unsigned __int64)v11 >> 32)) - 255) >> 31) & ((v11 & ~((unsigned __int64)v11 >> 32)) - 255))
                                                                                       + 255) >> 1)
                                                                         + (dword_6FBBFE54[v8] >> 1)
                                                                         - 255) >> 31) & (((signed int)((((signed int)((v11 & ~((unsigned __int64)v11 >> 32)) - 255) >> 31) & ((v11 & ~((unsigned __int64)v11 >> 32)) - 255)) + 255) >> 1)
                                                                                        + (dword_6FBBFE54[v8] >> 1)
                                                                                        - 255))
                                                                      + 1020) & 0x3E0 | (((((((((((v10 & ~(v10 >> 31))
                                                                                                - 255) >> 31) & ((v10 & ~(v10 >> 31)) - 255))
                                                                                             + 255) >> 1)
                                                                                           + (dword_6FBBFE50[v8] >> 1)
                                                                                           - 255) >> 31) & (((((((v10 & ~(v10 >> 31)) - 255) >> 31) & ((v10 & ~(v10 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE50[v8] >> 1) - 255))
                                                                                        + 255) >> 3) & 0x1F;
    HIDWORD(v9) = *a2;
    *a2 = (((signed int)a5 >> 1) + ((*a2 >> 1) & 0x7F)) | ((((signed int)a6 >> 1) + ((signed int)BYTE5(v9) >> 1)) << 8) | ((((signed int)(unsigned __int8)a7 >> 1) + (((unsigned int)*a2 >> 17) & 0x7F)) << 16);
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
