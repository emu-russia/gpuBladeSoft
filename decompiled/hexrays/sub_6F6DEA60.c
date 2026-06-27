void __cdecl sub_6F6DEA60(_WORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ecx@3
  signed int v11; // edx@3
  unsigned int v12; // esi@3
  signed int v13; // eax@3
  int v14; // edx@4
  signed int v15; // eax@4
  int v16; // eax@4
  int v17; // edi@7
  signed int v18; // ecx@7
  signed int v19; // eax@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = v9 >> 31;
      v13 = (unsigned __int8)(v9 >> 16);
      if ( v12 )
      {
        v17 = 4 * *a1;
        v18 = dword_6FBBFE50[v17] + (v10 >> 2) - 255;
        v19 = dword_6FBBFE58[v17] + (v13 >> 2) - 255;
        LOWORD(v18) = (4
                     * (((dword_6FBBFE54[v17] + (v11 >> 2) - 255) >> 31) & (LOWORD(dword_6FBBFE54[v17])
                                                                          + (v11 >> 2)
                                                                          - 255))
                     + 1020) & 0x3E0 | ((((unsigned __int16)(v19 >> 31) & (unsigned __int16)v19) + 255) << 7) & 0x7C00 | ((((v18 >> 31) & v18) + 255) >> 3) & 0x1F | 0x8000;
        v16 = (unsigned __int16)v18;
        *a1 = v18;
      }
      else
      {
        v14 = 4 * v11;
        v15 = v13 << 7;
        LOWORD(v14) = v14 & 0x3E0;
        LOWORD(v15) = v15 & 0x7C00;
        v16 = (v10 >> 3) | v14 | v15;
        *a1 = v16;
        v16 = (signed __int16)v16;
      }
      *a2 = dword_6FCBFE50[v16];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
