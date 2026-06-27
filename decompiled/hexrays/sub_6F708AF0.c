void __cdecl sub_6F708AF0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ecx@3
  int v11; // edx@3
  int v12; // esi@3
  int v13; // eax@4
  int v14; // esi@4
  int v15; // eax@4
  signed int v16; // edx@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = (unsigned __int8)(v9 >> 16);
      if ( v9 >> 31 )
      {
        v15 = 16 * *a1;
        v16 = *(int *)((char *)&dword_6FBBFE50[1] + v15) + v11 - 255;
        LOWORD(v15) = (4 * ((v16 >> 31) & v16) + 1020) & 0x3E0 | ((((unsigned __int16)(*(_WORD *)((char *)&dword_6FBBFE50[2]
                                                                                                + v15)
                                                                                     + v12
                                                                                     - 255) & (unsigned __int16)((*(int *)((char *)&dword_6FBBFE50[2] + v15) + v12 - 255) >> 31))
                                                                 + 255) << 7) & 0x7C00 | (((((*(int *)((char *)dword_6FBBFE50 + v15)
                                                                                            + v10
                                                                                            - 255) >> 31) & (*(int *)((char *)dword_6FBBFE50 + v15) + v10 - 255))
                                                                                         + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v15;
      }
      else
      {
        v13 = 4 * BYTE1(v9);
        v14 = v12 << 7;
        LOWORD(v13) = 4 * v11 & 0x3E0;
        LOWORD(v14) = v14 & 0x7C00;
        v15 = (v10 >> 3) | v14 | v13;
        *a1 = v15;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v15;
    }
  }
}
