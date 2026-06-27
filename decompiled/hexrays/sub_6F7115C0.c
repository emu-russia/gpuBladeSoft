unsigned int __cdecl sub_6F7115C0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebx@2
  signed int v11; // edi@2
  signed int v12; // ebp@2
  signed int v13; // eax@3
  int v14; // edi@3
  int v15; // ebx@3
  int v16; // eax@3
  _WORD *v17; // ebx@3
  int v18; // eax@6
  signed int v19; // esi@6
  signed int v20; // ecx@6
  int v21; // edx@6
  int v22; // ecx@6

  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = (BYTE1(result) * a6 >> 7) - 255;
    if ( result >> 31 )
    {
      v18 = 4 * *a1;
      v19 = dword_6FBBFE50[v18 + 1] - (((v12 >> 31) & v12) + 255);
      v20 = dword_6FBBFE50[v18 + 2] - (((v10 >> 31) & v10) + 255);
      v21 = 4 * (v19 & ~(v19 >> 31));
      LOWORD(v21) = v21 & 0x3E0;
      v22 = (v20 & ~(v20 >> 31)) << 7;
      LOWORD(v22) = v22 & 0x7C00;
      v16 = v21 | v22 | (((dword_6FBBFE50[v18] - (((v11 >> 31) & v11) + 255)) & ~((dword_6FBBFE50[v18]
                                                                                 - (((v11 >> 31) & v11)
                                                                                  + 255)) >> 31)) >> 3) & 0x1F;
      LOWORD(v16) = v16 | 0x8000;
      v17 = a1;
      *a1 = v16;
    }
    else
    {
      v13 = ((v11 >> 31) & v11) + 255;
      v14 = 4 * ((v12 >> 31) & v12) + 1020;
      LOWORD(v14) = v14 & 0x3E0;
      v15 = (((v10 >> 31) & v10) + 255) << 7;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = v15 | v14 | (v13 >> 3) & 0x1F;
      v17 = a1;
      *a1 = v16;
    }
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v16;
    *v17 = result;
  }
  return result;
}
