unsigned int __cdecl sub_6F6B5600(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@2
  int v11; // edx@3
  int v12; // edi@3
  int v13; // ebp@4
  int v14; // eax@4
  int v15; // ST1C_4@4
  int v16; // ST14_4@4
  int v17; // esi@4
  __int64 v18; // rcx@4
  __int64 v19; // rax@4
  signed int v20; // esi@4
  int v21; // edi@7
  int v22; // esi@7
  int v23; // [sp+14h] [bp-38h]@3
  int v24; // [sp+18h] [bp-34h]@3
  int v25; // [sp+20h] [bp-2Ch]@4
  int v26; // [sp+24h] [bp-28h]@4
  int v27; // [sp+28h] [bp-24h]@4

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE44(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v11 = BYTE1(result);
      v23 = (unsigned __int8)(result >> 16);
      v24 = (unsigned __int8)v10;
      v12 = (unsigned __int8)result * a5 >> 7;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v13 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
        v25 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
        v14 = (((v23 * a7 >> 7) - 255) >> 31) & ((v23 * a7 >> 7) - 255);
        v15 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
        v26 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
        v16 = v14 + 255;
        v27 = v14 + 255;
        dword_6FCFFE50(a3, a4, &v25);
        v17 = 4 * *a1;
        v18 = (v25 & ~(v25 >> 31)) - 255;
        LODWORD(v18) = dword_6FBBFE50[v17] - ((HIDWORD(v18) & v18) + 255);
        HIDWORD(v18) = dword_6FBBFE54[v17]
                     - ((((signed int)((v26 & ~((unsigned __int64)v26 >> 32)) - 255) >> 31) & ((v26 & ~((unsigned __int64)v26 >> 32))
                                                                                             - 255))
                      + 255);
        v19 = (v27 & ~(v27 >> 31)) - 255;
        v20 = dword_6FBBFE50[v17 + 2] - ((HIDWORD(v19) & v19) + 255);
        *a1 = 4 * (~(unsigned __int16)(SHIDWORD(v18) >> 31) & WORD2(v18)) & 0x3E0 | (((unsigned __int16)v20 & (unsigned __int16)~(unsigned __int16)(v20 >> 31)) << 7) & 0x7C00 | ((signed int)(~((signed int)v18 >> 31) & v18) >> 3) & 0x1F | 0x8000;
        LODWORD(v19) = *a2;
        *a2 = (v24 << 24) | ~(((unsigned __int8)*a2 - v13) >> 31) & ((unsigned __int8)*a2 - v13) | ((~(((unsigned __int8)((unsigned int)*a2 >> 16) - v16) >> 31) & ((unsigned __int8)((unsigned int)*a2 >> 16) - v16)) << 16) | (((BYTE1(v19) - v15) & ~((BYTE1(v19) - v15) >> 31)) << 8);
      }
      else
      {
        v21 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
        v25 = v21;
        v22 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v26 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v27 = ((((v23 * a7 >> 7) - 255) >> 31) & ((v23 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v25);
        *a1 = ((((unsigned __int16)(((v27 & ~(v27 >> 31)) - 255) >> 31) & (unsigned __int16)((v27 & ~(v27 >> 31)) - 255))
              + 255) << 7) & 0x7C00 | (4 * ((((v26 & ~(v26 >> 31)) - 255) >> 31) & ((v26 & ~(v26 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v25 & ~(v25 >> 31)) - 255) & (((v25 & ~(v25 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a2 = ((unsigned __int8)v10 << 24) | (v22 << 8) | ((((((v23 * a7 >> 7) - 255) >> 31) & ((v23 * a7 >> 7) - 255))
                                                          + 255) << 16) | v21;
      }
      result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
      *a1 |= result;
    }
  }
  return result;
}
