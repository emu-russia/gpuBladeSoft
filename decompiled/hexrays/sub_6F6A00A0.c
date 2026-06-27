unsigned int __cdecl sub_6F6A00A0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@2
  int v11; // edx@3
  signed int v12; // ebx@3
  int v13; // eax@3
  signed int v14; // ebx@3
  int v15; // ecx@4
  int v16; // edi@4
  int v17; // ebp@4
  int v18; // esi@4
  int v19; // eax@4
  signed int v20; // ebx@4
  signed int v21; // ecx@7
  int v22; // ebp@7
  int v23; // edx@7
  int v24; // eax@7
  __int16 v25; // bx@7
  int v26; // edx@7
  __int16 v27; // di@7
  int v28; // [sp+18h] [bp-24h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( BYTE3(result) & 0x40 )
    {
      v11 = BYTE1(result);
      v28 = (unsigned __int8)v10;
      v12 = (unsigned __int8)result * a5;
      v13 = (unsigned __int8)(result >> 16);
      v14 = (v12 >> 7) - 255;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v15 = (v14 & (v14 >> 31)) + 255;
        v16 = ((unsigned __int64)((v13 * a7 >> 7) - 255) >> 32) & ((v13 * a7 >> 7) - 255);
        v17 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
        v18 = 4 * *a1;
        *a1 = 4 * (~(unsigned __int16)((dword_6FBBFE54[v18] - v17) >> 31) & (dword_6FBBFE54[v18] - v17)) & 0x3E0 | (((unsigned __int16)(LOWORD(dword_6FBBFE58[v18]) - (v16 + 255)) & (unsigned __int16)~(unsigned __int16)((dword_6FBBFE58[v18] - (v16 + 255)) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v18] - v15) & ~((dword_6FBBFE50[v18] - v15) >> 31)) >> 3) & 0x1F | 0x8000;
        v19 = *a2;
        v20 = BYTE1(v19) - v17;
        result = ~(((unsigned __int8)((unsigned int)*a2 >> 16) - (v16 + 255)) >> 31);
        *a2 = (v28 << 24) | ~(((unsigned __int8)*a2 - v15) >> 31) & ((unsigned __int8)*a2 - v15) | ((result & ((unsigned __int8)((unsigned int)*a2 >> 16) - (v16 + 255))) << 16) | ((v20 & ~(v20 >> 31)) << 8);
      }
      else
      {
        v21 = ((v14 >> 31) & v14) + 255;
        v22 = (v21 >> 3) & 0x1F;
        v23 = ((((a6 * v11 >> 7) - 255) >> 31) & ((a6 * v11 >> 7) - 255)) + 255;
        v24 = ((((a7 * v13 >> 7) - 255) >> 31) & ((a7 * v13 >> 7) - 255)) + 255;
        v25 = 4 * v23 & 0x3E0;
        v26 = (v24 << 16) | (v23 << 8);
        v27 = (_WORD)v24 << 7;
        result = (unsigned int)a2;
        *a1 = v27 & 0x7C00 | v22 | v25;
        *a2 = (v28 << 24) | v26 | v21;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
  return result;
}
