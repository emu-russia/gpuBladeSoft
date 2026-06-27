unsigned int __cdecl sub_6F6F6990(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebx@2
  signed int v11; // esi@2
  signed int v12; // edi@2
  signed int v13; // ecx@3
  int v14; // esi@3
  int v15; // edi@3
  int v16; // ecx@3
  int v17; // ebx@3
  int v18; // eax@6
  int v19; // edx@6
  signed int v20; // esi@6
  signed int v21; // eax@6

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v11 = (BYTE1(result) * a6 >> 7) - 255;
    v12 = ((unsigned __int8)result * a5 >> 7) - 255;
    if ( result >> 31 )
    {
      v18 = 4 * *a1;
      v19 = dword_6FBBFE50[v18] + ((((v12 >> 31) & v12) + 255) >> 2);
      v20 = dword_6FBBFE54[v18] + ((((v11 >> 31) & v11) + 255) >> 2) - 255;
      v21 = dword_6FBBFE50[v18 + 2] + (((v10 & (v10 >> 31)) + 255) >> 2) - 255;
      LOWORD(v19) = (4 * ((v20 >> 31) & v20) + 1020) & 0x3E0 | ((((unsigned __int16)(v21 >> 31) & (unsigned __int16)v21)
                                                               + 255) << 7) & 0x7C00 | (((((v19 - 255) >> 31) & (v19 - 255))
                                                                                       + 255) >> 3) & 0x1F | 0x8000;
      v17 = (unsigned __int16)v19;
      *a1 = v19;
    }
    else
    {
      v13 = ((v12 >> 31) & v12) + 255;
      v14 = 4 * ((v11 >> 31) & v11) + 1020;
      LOWORD(v14) = v14 & 0x3E0;
      v15 = ((v10 & (v10 >> 31)) + 255) << 7;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = v15 | v14 | (v13 >> 3) & 0x1F;
      *a1 = v16;
      v17 = (signed __int16)v16;
    }
    result = (unsigned int)a2;
    *a2 = dword_6FCBFE50[v17];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
