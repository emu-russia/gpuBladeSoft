unsigned int __cdecl sub_6F717400(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ebx@2
  signed int v11; // edi@2
  signed int v12; // ecx@2
  int v13; // ebx@3
  unsigned int v14; // ebp@3
  _WORD *v15; // ebx@3
  int v16; // esi@6
  signed int v17; // edi@6
  signed int v18; // ecx@6
  signed int v19; // edx@6

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)(result >> 16) * a7 >> 7;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = (BYTE1(result) * a6 >> 7) - 255;
    if ( result >> 31 )
    {
      v16 = 4 * *a1;
      v17 = ((((v11 >> 31) & v11) + 255) >> 1) + (dword_6FBBFE50[v16] >> 1) - 255;
      v18 = ((((v12 >> 31) & v12) + 255) >> 1) + (dword_6FBBFE50[v16 + 1] >> 1) - 255;
      v19 = (signed int)(((v10 - 255) & ((unsigned __int64)(v10 - 255) >> 32)) + 255) >> 1;
      result = dword_6FBBFE50[v16 + 2] >> 1;
      v15 = a1;
      LOWORD(v14) = (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0 | ((((unsigned __int16)(v19 + result - 255) & (unsigned __int16)((signed int)(v19 + result - 255) >> 31))
                                                               + 255) << 7) & 0x7C00 | (((v17 & (v17 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      *a1 = v14;
    }
    else
    {
      v13 = ((((v10 - 255) >> 31) & (v10 - 255)) + 255) << 7;
      result = 4 * ((v12 >> 31) & v12) + 1020;
      LOWORD(v13) = v13 & 0x7C00;
      LOWORD(result) = result & 0x3E0;
      v14 = v13 | result | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
      v15 = a1;
      *a1 = v14;
    }
    *v15 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v14;
  }
  return result;
}
