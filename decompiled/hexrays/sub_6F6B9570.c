unsigned int __cdecl sub_6F6B9570(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@2
  int v11; // ebp@3
  int v12; // ecx@3
  int v13; // eax@3
  signed int v14; // edi@3
  int v15; // edi@4
  int v16; // esi@4
  int v17; // ecx@4
  int v18; // edx@4
  int v19; // eax@4
  signed int v20; // ebp@4
  signed int v21; // ebx@4
  int v22; // ebx@4
  signed int v23; // eax@4
  signed int v24; // esi@4
  int v25; // ebx@4
  signed int v26; // edx@7
  int v27; // ebp@7
  int v28; // ecx@7
  int v29; // ebx@7
  int v30; // eax@7
  int v31; // edi@7
  int v32; // [sp+1Ch] [bp-20h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE44(a8, a9);
    v10 = result >> 24;
    if ( BYTE3(result) & 0x40 )
    {
      v11 = (unsigned __int8)result;
      v12 = BYTE1(result);
      v32 = (unsigned __int8)v10;
      v13 = (unsigned __int8)(result >> 16);
      v14 = (v11 * a5 >> 7) - 255;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v15 = (((v14 >> 31) & v14) + 255) >> 1;
        v16 = (((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255) >> 1;
        v17 = (((((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255)) + 255) >> 1;
        v18 = 4 * *a1;
        v19 = v15 + (dword_6FBBFE50[v18] >> 1) - 255;
        v20 = v17 + (dword_6FBBFE50[v18 + 1] >> 1) - 255;
        v21 = v16 + (dword_6FBBFE50[v18 + 2] >> 1) - 255;
        *a1 = (4 * (v20 & (v20 >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)v21 & (unsigned __int16)(v21 >> 31)) + 255) << 7) & 0x7C00 | ((signed int)((v19 & ((unsigned __int64)v19 >> 32)) + 255) >> 3) & 0x1F | 0x8000;
        v22 = *a2;
        v23 = v15 + ((*a2 >> 1) & 0x7F) - 255;
        v24 = v16 + (((unsigned int)*a2 >> 17) & 0x7F) - 255;
        v25 = (((v23 >> 31) & v23) + 255) | (((v24 & (v24 >> 31)) + 255) << 16) | (((((v17
                                                                                     + ((signed int)BYTE1(v22) >> 1)
                                                                                     - 255) >> 31) & (v17 + ((signed int)BYTE1(v22) >> 1) - 255))
                                                                                  + 255) << 8);
        result = v32 << 24;
        *a2 = (v32 << 24) | v25;
      }
      else
      {
        v26 = ((v14 >> 31) & v14) + 255;
        v27 = (v26 >> 3) & 0x1F;
        v28 = ((((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255)) + 255;
        v29 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
        v30 = 4 * v28;
        LOWORD(v30) = 4 * v28 & 0x3E0;
        v31 = v29 << 7;
        LOWORD(v31) = ((_WORD)v29 << 7) & 0x7C00;
        result = v31 | v27 | v30;
        *a1 = result;
        *a2 = (v32 << 24) | (v29 << 16) | (v28 << 8) | v26;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
  return result;
}
