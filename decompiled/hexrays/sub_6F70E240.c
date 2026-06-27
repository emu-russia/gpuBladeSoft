unsigned int __cdecl sub_6F70E240(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ecx@3
  _WORD *v11; // ebp@3
  int v12; // edi@3
  int v13; // eax@3
  __int64 v14; // rax@6
  signed int v15; // ecx@6
  int v16; // edi@6
  int v17; // ecx@6
  int v18; // [sp+1Ch] [bp-40h]@2
  int v19; // [sp+30h] [bp-2Ch]@3
  int v20; // [sp+34h] [bp-28h]@3
  int v21; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE48(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v18 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v19 = (((((unsigned __int8)result * a5 >> 7) - 255) >> 31) & (((unsigned __int8)result * a5 >> 7) - 255)) + 255;
      v20 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v21 = ((((v18 * a7 >> 7) - 255) >> 31) & ((v18 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v19);
      v14 = (v19 & ~(v19 >> 31)) - 255;
      LODWORD(v14) = (signed int)((HIDWORD(v14) & v14) + 255) >> 2;
      v11 = a1;
      HIDWORD(v14) = &dword_6FBBFE50[4 * *a1];
      v15 = *(_DWORD *)(HIDWORD(v14) + 4)
          + ((((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 255) >> 2)
          - 255;
      v16 = ((((*(_DWORD *)(HIDWORD(v14) + 8)
              + (((((v21 & ~(v21 >> 31)) - 255) & (((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) >> 2)
              - 255) >> 31) & (*(_DWORD *)(HIDWORD(v14) + 8)
                             + (((((v21 & ~(v21 >> 31)) - 255) & (((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) >> 2)
                             - 255))
           + 255) << 7;
      LOWORD(v16) = v16 & 0x7C00;
      v17 = 4 * ((v15 >> 31) & v15) + 1020;
      LOWORD(v17) = v17 & 0x3E0;
      v13 = v17 | v16 | ((signed int)(((*(_DWORD *)HIDWORD(v14) + v14 - 255) & ((*(_DWORD *)HIDWORD(v14)
                                                                               + (signed int)v14
                                                                               - 255) >> 31))
                                    + 255) >> 3) & 0x1F;
      LOWORD(v13) = v13 | 0x8000;
      *a1 = v13;
    }
    else
    {
      v19 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
      v20 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v21 = ((((a7 * v18 >> 7) - 255) >> 31) & ((a7 * v18 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v19);
      v10 = 4 * ((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 1020;
      v11 = a1;
      LOWORD(v10) = v10 & 0x3E0;
      v12 = ((((v21 & ~(v21 >> 31)) - 255) & (((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) << 7;
      LOWORD(v12) = v12 & 0x7C00;
      v13 = v12 | v10 | (((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = v13;
    }
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v13;
    *v11 = result;
  }
  return result;
}
