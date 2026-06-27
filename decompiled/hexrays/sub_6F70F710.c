unsigned int __cdecl sub_6F70F710(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // esi@1
  signed int v11; // edx@2
  unsigned int v12; // esi@2
  int v13; // ebp@2
  int v14; // edi@2
  int v15; // eax@2
  int v16; // [sp+10h] [bp-2Ch]@2
  int v17; // [sp+14h] [bp-28h]@2
  int v18; // [sp+18h] [bp-24h]@2

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v16 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
    v11 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v17 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
    v18 = ((v11 >> 31) & v11) + 255;
    dword_6FCFFE50(a3, a4, &v16);
    v12 = v10 << 8;
    v13 = 4 * ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 1020;
    LOWORD(v12) = v12 & 0x8000;
    LOWORD(v13) = v13 & 0x3E0;
    v14 = ((((v18 & ~(v18 >> 31)) - 255) & (((v18 & ~(v18 >> 31)) - 255) >> 31)) + 255) << 7;
    LOWORD(v14) = v14 & 0x7C00;
    v15 = v12 | v14 | v13 | (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    *a1 = v15;
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v15;
    *a1 = result;
  }
  return result;
}
