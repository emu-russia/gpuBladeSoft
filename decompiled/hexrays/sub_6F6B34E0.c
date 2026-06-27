void __cdecl sub_6F6B34E0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  int v10; // edx@3
  signed int v11; // esi@3
  signed int v12; // ST18_4@7
  signed int v13; // edi@7
  signed int v14; // ecx@7
  int *v15; // ebp@7
  unsigned int v16; // eax@7
  signed int v17; // esi@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = BYTE3(v9);
      v11 = (unsigned __int8)(v9 >> 16);
      if ( (unsigned int)BYTE3(v9) >> 7 )
      {
        v12 = v11 >> 2;
        v13 = (signed int)(unsigned __int8)v9 >> 2;
        v14 = (signed int)BYTE1(v9) >> 2;
        v15 = &dword_6FBBFE50[4 * *a1];
        *a1 = (4 * ((v14 + *((_WORD *)v15 + 2) - 255) & ((v14 + v15[1] - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)(*((_WORD *)v15 + 4) + (v11 >> 2) - 255) & (unsigned __int16)((v15[2] + (v11 >> 2) - 255) >> 31)) + 255) << 7) & 0x7C00 | ((((v13 + *v15 - 255) & ((v13 + *v15 - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        v16 = *a2;
        v17 = v13 + (unsigned __int8)*a2 - 255;
        *a2 = (((v17 >> 31) & v17) + 255) | ((((v12 + (unsigned __int8)(*a2 >> 16) - 255) & ((v12
                                                                                            + (unsigned __int8)(*a2 >> 16)
                                                                                            - 255) >> 31))
                                            + 255) << 16) | (((((v14 + BYTE1(v16) - 255) >> 31) & (v14 + BYTE1(v16) - 255))
                                                            + 255) << 8) | (v10 << 24);
      }
      else
      {
        *a1 = ((_WORD)v11 << 7) & 0x7C00 | 4 * BYTE1(v9) & 0x3E0 | ((signed int)(unsigned __int8)v9 >> 3);
        *a2 = v9;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
