unsigned int __cdecl sub_6F6C4750(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  int v11; // edi@2
  int v12; // esi@3
  int v13; // ST1C_4@3
  int v14; // ST14_4@3
  int v15; // esi@3
  __int64 v16; // rcx@3
  __int64 v17; // rax@3
  signed int v18; // esi@3
  signed int v19; // edi@3
  signed int v20; // ebp@3
  int v21; // edi@5
  int v22; // esi@5
  int v23; // ecx@5
  int v24; // edx@5
  int v25; // [sp+14h] [bp-38h]@2
  int v26; // [sp+18h] [bp-34h]@2
  int v27; // [sp+20h] [bp-2Ch]@3
  int v28; // [sp+24h] [bp-28h]@3
  int v29; // [sp+28h] [bp-24h]@3

  result = dword_6FBBFE40(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v25 = (unsigned __int8)(result >> 16);
    v26 = (unsigned __int8)v10;
    v11 = (unsigned __int8)result * a5 >> 7;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v27 = ((v11 - 255) & ((v11 - 255) >> 31)) + 255;
      v12 = (((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255);
      v13 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v28 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v14 = v12 + 255;
      v29 = v12 + 255;
      dword_6FCFFE50(a3, a4, &v27);
      v15 = 4 * *a1;
      v16 = (v27 & ~(v27 >> 31)) - 255;
      LODWORD(v16) = dword_6FBBFE50[v15] - ((HIDWORD(v16) & v16) + 255);
      HIDWORD(v16) = dword_6FBBFE54[v15]
                   - ((((signed int)((v28 & ~((unsigned __int64)v28 >> 32)) - 255) >> 31) & ((v28 & ~((unsigned __int64)v28 >> 32))
                                                                                           - 255))
                    + 255);
      v17 = (v29 & ~(v29 >> 31)) - 255;
      v18 = dword_6FBBFE50[v15 + 2] - ((HIDWORD(v17) & v17) + 255);
      *a1 = 4 * (~(unsigned __int16)(SHIDWORD(v16) >> 31) & WORD2(v16)) & 0x3E0 | (((unsigned __int16)v18 & (unsigned __int16)~(unsigned __int16)(v18 >> 31)) << 7) & 0x7C00 | ((signed int)(~((signed int)v16 >> 31) & v16) >> 3) & 0x1F | 0x8000;
      LODWORD(v17) = *a2;
      v19 = (unsigned __int8)*a2 - (((v11 - 255) & ((v11 - 255) >> 31)) + 255);
      v20 = BYTE1(v17) - v13;
      result = v26 << 24;
      *a2 = (v26 << 24) | ~(v19 >> 31) & v19 | ((v20 & ~(v20 >> 31)) << 8) | ((~(((unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                - v14) >> 31) & ((unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                               - v14)) << 16);
    }
    else
    {
      v21 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
      v27 = v21;
      v22 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v29 = ((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255)) + 255;
      v28 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
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
  }
  return result;
}
