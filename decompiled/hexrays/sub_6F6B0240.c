unsigned int __cdecl sub_6F6B0240(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@2
  int v11; // edi@3
  signed int v12; // edi@4
  signed int v13; // ecx@4
  signed int v14; // ebp@4
  signed int v15; // ST18_4@4
  int *v16; // ebx@4
  signed int v17; // ecx@4
  signed int v18; // esi@4
  __int64 v19; // rax@4
  int v20; // esi@4
  int v21; // edi@7
  int v22; // esi@7
  int v23; // ecx@7
  int v24; // edx@7
  int v25; // [sp+18h] [bp-34h]@3
  int v26; // [sp+1Ch] [bp-30h]@3
  int v27; // [sp+20h] [bp-2Ch]@4
  int v28; // [sp+24h] [bp-28h]@4
  int v29; // [sp+28h] [bp-24h]@4

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE40(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v25 = (unsigned __int8)(result >> 16);
      v26 = (unsigned __int8)v10;
      v11 = (unsigned __int8)result * a5 >> 7;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v12 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        v13 = (BYTE1(result) * a6 >> 7) - 255;
        v27 = v12;
        v14 = ((v13 >> 31) & v13) + 255;
        v28 = ((v13 >> 31) & v13) + 255;
        v15 = ((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255)) + 255;
        v29 = v15;
        dword_6FCFFE50(a3, a4, &v27);
        v16 = &dword_6FBBFE50[4 * *a1];
        v17 = ((((((v27 & ~(v27 >> 31)) - 255) >> 31) & ((v27 & ~(v27 >> 31)) - 255)) + 255) >> 1) + (*v16 >> 1) - 255;
        v18 = ((signed int)((((signed int)((v28 & ~((unsigned __int64)v28 >> 32)) - 255) >> 31) & ((v28 & ~((unsigned __int64)v28 >> 32))
                                                                                                 - 255))
                          + 255) >> 1)
            + (v16[1] >> 1)
            - 255;
        v19 = (v29 & ~(v29 >> 31)) - 255;
        HIDWORD(v19) = ((signed int)((HIDWORD(v19) & v19) + 255) >> 1) + (v16[2] >> 1) - 255;
        *a1 = (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0 | (((WORD2(v19) & (unsigned __int16)(SHIDWORD(v19) >> 31)) + 255) << 7) & 0x7C00 | ((((v17 >> 31) & v17) + 255) >> 3) & 0x1F | 0x8000;
        HIDWORD(v19) = *a2;
        LODWORD(v19) = ((*a2 >> 1) & 0x7F) + (v12 >> 1) - 255;
        v20 = ((((unsigned __int64)(signed int)v19 >> 32) & v19) + 255) | (((((((unsigned int)*a2 >> 17) & 0x7F)
                                                                            + (v15 >> 1)
                                                                            - 255) & ((signed int)((((unsigned int)*a2 >> 17) & 0x7F)
                                                                                                 + (v15 >> 1)
                                                                                                 - 255) >> 31))
                                                                          + 255) << 16) | (((((((signed int)BYTE5(v19) >> 1)
                                                                                             + (v14 >> 1)
                                                                                             - 255) >> 31) & (((signed int)BYTE5(v19) >> 1) + (v14 >> 1) - 255))
                                                                                          + 255) << 8);
        result = v26 << 24;
        *a2 = (v26 << 24) | v20;
      }
      else
      {
        v21 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        v27 = v21;
        v22 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v28 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v29 = ((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v27);
        v23 = 4 * ((((v28 & ~(v28 >> 31)) - 255) >> 31) & ((v28 & ~(v28 >> 31)) - 255)) + 1020;
        LOWORD(v23) = v23 & 0x3E0;
        v24 = (((((v29 & ~(v29 >> 31)) - 255) >> 31) & ((v29 & ~(v29 >> 31)) - 255)) + 255) << 7;
        LOWORD(v24) = v24 & 0x7C00;
        result = v24 | v23 | (((((v27 & ~(v27 >> 31)) - 255) & (((v27 & ~(v27 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = result;
        *a2 = ((unsigned __int8)v10 << 24) | (v22 << 8) | ((((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255))
                                                          + 255) << 16) | v21;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
  return result;
}
