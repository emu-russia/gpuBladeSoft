void __cdecl sub_6F709BD0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ebx@3
  signed int v11; // esi@3
  signed int v12; // ecx@3
  int v13; // edx@4
  signed int v14; // edi@4
  signed int v15; // esi@4
  signed int v16; // edx@4
  int v17; // eax@4
  signed int v18; // eax@7
  int v19; // esi@7
  int v20; // ecx@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v11 = (BYTE1(v9) * a6 >> 7) - 255;
      v12 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      if ( v9 >> 31 )
      {
        v13 = 4 * *a1;
        v14 = dword_6FBBFE50[v13] + ((((v12 >> 31) & v12) + 255) >> 2) - 255;
        v15 = dword_6FBBFE54[v13] + ((((v11 >> 31) & v11) + 255) >> 2) - 255;
        v16 = dword_6FBBFE50[v13 + 2] + (((v10 & (v10 >> 31)) + 255) >> 2) - 255;
        LOWORD(v17) = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)(v16 >> 31) & (unsigned __int16)v16)
                                                                 + 255) << 7) & 0x7C00 | ((((v14 >> 31) & v14) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v17;
      }
      else
      {
        v18 = ((v12 >> 31) & v12) + 255;
        v19 = 4 * ((v11 >> 31) & v11) + 1020;
        LOWORD(v19) = v19 & 0x3E0;
        v20 = ((v10 & (v10 >> 31)) + 255) << 7;
        LOWORD(v20) = v20 & 0x7C00;
        v17 = v20 | v19 | (v18 >> 3) & 0x1F;
        *a1 = v17;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v17;
    }
  }
}
