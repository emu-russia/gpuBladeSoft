unsigned int __cdecl sub_6F6A9960(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@2
  int v11; // edi@3
  int v12; // esi@4
  int v13; // ST1C_4@4
  int v14; // ST14_4@4
  int v15; // esi@4
  __int64 v16; // rcx@4
  __int64 v17; // rax@4
  signed int v18; // esi@4
  signed int v19; // ebp@4
  int v20; // edi@6
  int v21; // esi@6
  int v22; // ecx@6
  int v23; // edx@6
  int v24; // [sp+14h] [bp-38h]@3
  int v25; // [sp+18h] [bp-34h]@3
  int v26; // [sp+20h] [bp-2Ch]@4
  int v27; // [sp+24h] [bp-28h]@4
  int v28; // [sp+28h] [bp-24h]@4

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v24 = (unsigned __int8)(result >> 16);
      v25 = (unsigned __int8)v10;
      v11 = (unsigned __int8)result * a5 >> 7;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v26 = ((v11 - 255) & ((v11 - 255) >> 31)) + 255;
        v12 = (((v24 * a7 >> 7) - 255) >> 31) & ((v24 * a7 >> 7) - 255);
        v13 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v27 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v14 = v12 + 255;
        v28 = v12 + 255;
        dword_6FCFFE50(a3, a4, &v26);
        v15 = 4 * *a1;
        v16 = (v26 & ~(v26 >> 31)) - 255;
        LODWORD(v16) = dword_6FBBFE50[v15] - ((HIDWORD(v16) & v16) + 255);
        HIDWORD(v16) = dword_6FBBFE54[v15]
                     - ((((signed int)((v27 & ~((unsigned __int64)v27 >> 32)) - 255) >> 31) & ((v27 & ~((unsigned __int64)v27 >> 32))
                                                                                             - 255))
                      + 255);
        v17 = (v28 & ~(v28 >> 31)) - 255;
        v18 = dword_6FBBFE50[v15 + 2] - ((HIDWORD(v17) & v17) + 255);
        *a1 = 4 * (~(unsigned __int16)(SHIDWORD(v16) >> 31) & WORD2(v16)) & 0x3E0 | (((unsigned __int16)v18 & (unsigned __int16)~(unsigned __int16)(v18 >> 31)) << 7) & 0x7C00 | ((signed int)(~((signed int)v16 >> 31) & v16) >> 3) & 0x1F | 0x8000;
        HIDWORD(v17) = *a2;
        LODWORD(v16) = (unsigned __int8)*a2 - (((v11 - 255) & ((v11 - 255) >> 31)) + 255);
        v19 = BYTE5(v17) - v13;
        result = v19 >> 31;
        *a2 = (v25 << 24) | ~((signed int)v16 >> 31) & v16 | ((((unsigned __int8)((unsigned int)*a2 >> 16) - v14) & ~(((unsigned __int8)((unsigned int)*a2 >> 16) - v14) >> 31)) << 16) | ((v19 & ~(v19 >> 31)) << 8);
      }
      else
      {
        v20 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        v26 = v20;
        v21 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v28 = ((((v24 * a7 >> 7) - 255) >> 31) & ((v24 * a7 >> 7) - 255)) + 255;
        v27 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v26);
        v22 = 4 * ((((v27 & ~(v27 >> 31)) - 255) >> 31) & ((v27 & ~(v27 >> 31)) - 255)) + 1020;
        LOWORD(v22) = v22 & 0x3E0;
        v23 = (((((v28 & ~(v28 >> 31)) - 255) >> 31) & ((v28 & ~(v28 >> 31)) - 255)) + 255) << 7;
        LOWORD(v23) = v23 & 0x7C00;
        result = v23 | v22 | (((((v26 & ~(v26 >> 31)) - 255) & (((v26 & ~(v26 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = result;
        *a2 = ((unsigned __int8)v10 << 24) | (v21 << 8) | ((((((v24 * a7 >> 7) - 255) >> 31) & ((v24 * a7 >> 7) - 255))
                                                          + 255) << 16) | v20;
      }
    }
  }
  return result;
}
