unsigned int __cdecl sub_6F6CAFB0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@1
  int v11; // ST1C_4@2
  int v12; // edi@2
  int v13; // ebx@2
  signed int v14; // esi@2
  int v15; // esi@2
  int v16; // [sp+20h] [bp-2Ch]@2
  int v17; // [sp+24h] [bp-28h]@2
  int v18; // [sp+28h] [bp-24h]@2

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)v10;
    v12 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
    v16 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
    v13 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
    v17 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
    v14 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v15 = ((v14 >> 31) & v14) + 255;
    v18 = v15;
    dword_6FCFFE50(a3, a4, &v16);
    *a1 = ((_WORD)v11 << 8) & 0x8000 | ((((unsigned __int16)(((v18 & ~(v18 >> 31)) - 255) >> 31) & (unsigned __int16)((v18 & ~(v18 >> 31)) - 255))
                                       + 255) << 7) & 0x7C00 | (4
                                                              * ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255))
                                                              + 1020) & 0x3E0 | (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31))
                                                                                + 255) >> 3) & 0x1F;
    *a2 = (v11 << 24) | (v13 << 8) | (v15 << 16) | v12;
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
