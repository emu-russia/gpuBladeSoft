unsigned int __cdecl sub_6F6AC550(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@2
  int v11; // edx@3
  signed int v12; // esi@4
  int v13; // edi@4
  int v14; // ST1C_4@4
  int v15; // esi@4
  int *v16; // edx@4
  int v17; // eax@4
  signed int v18; // edi@4
  int v19; // eax@4
  signed int v20; // ebx@7
  int v21; // eax@7
  int v22; // edx@7
  int v23; // [sp+1Ch] [bp-20h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v11 = BYTE1(result);
      v23 = (unsigned __int8)(result >> 16);
      v10 = (unsigned __int8)v10;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v12 = (v23 * a7 >> 7) - 255;
        v13 = (((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255);
        v14 = ((((unsigned __int8)result * a5 >> 7) - 255) >> 31) & (((unsigned __int8)result * a5 >> 7) - 255);
        v15 = v12 & (v12 >> 31);
        v16 = &dword_6FBBFE50[4 * *a1];
        *a1 = (4 * (((v13 + v16[1]) >> 31) & (v13 + v16[1])) + 1020) & 0x3E0 | ((((unsigned __int16)(v15 + v16[2]) & (unsigned __int16)((v15 + v16[2]) >> 31))
                                                                               + 255) << 7) & 0x7C00 | ((signed int)(((*v16 + v14) & ((unsigned __int64)(*v16 + v14) >> 32)) + 255) >> 3) & 0x1F | 0x8000;
        v17 = *a2;
        v18 = BYTE1(v17) + v13;
        v19 = v15 + (unsigned __int8)((unsigned int)*a2 >> 16);
        *a2 = ((((v14 + (unsigned __int8)*a2) >> 31) & (v14 + (unsigned __int8)*a2)) + 255) | (((((unsigned __int64)v19 >> 32) & (unsigned int)v19)
                                                                                              + 255) << 16) | ((((v18 >> 31) & v18) + 255) << 8) | (v10 << 24);
      }
      else
      {
        v20 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
        v21 = ((((a7 * v23 >> 7) - 255) >> 31) & ((a7 * v23 >> 7) - 255)) + 255;
        v22 = ((((a6 * v11 >> 7) - 255) >> 31) & ((a6 * v11 >> 7) - 255)) + 255;
        *a1 = ((_WORD)v21 << 7) & 0x7C00 | (v20 >> 3) & 0x1F | 4 * v22 & 0x3E0;
        *a2 = (v21 << 16) | (v22 << 8) | v20 | (v10 << 24);
      }
      result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
      *a1 |= result;
    }
  }
  return result;
}
