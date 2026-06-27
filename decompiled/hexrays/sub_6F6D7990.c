void __cdecl sub_6F6D7990(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ecx@3
  signed int v11; // edi@3
  int v12; // esi@3
  signed int v13; // edx@4
  int v14; // ebx@4
  signed int v15; // esi@4
  signed int v16; // edi@4
  unsigned __int16 v17; // ax@4
  int v18; // edx@4
  int v19; // edi@7
  int v20; // eax@7
  int v21; // ebx@7

  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v11 = (BYTE1(v9) * a6 >> 7) - 255;
      v12 = (unsigned __int8)(v9 >> 16) * a7 >> 7;
      if ( v9 >> 31 )
      {
        v13 = v12 - 255;
        v14 = 4 * *a1;
        v15 = ((v10 >> 31) & v10) + dword_6FBBFE50[v14];
        v16 = dword_6FBBFE54[v14] + ((v11 >> 31) & v11);
        v17 = (4 * ((v16 >> 31) & v16) + 1020) & 0x3E0 | ((((unsigned __int16)(((v13 >> 31) & v13)
                                                                             + dword_6FBBFE50[v14 + 2]) & (unsigned __int16)((((v13 >> 31) & v13) + dword_6FBBFE50[v14 + 2]) >> 31))
                                                         + 255) << 7) & 0x7C00 | (((v15 & (v15 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v17;
        v18 = v17;
      }
      else
      {
        v19 = 4 * ((v11 >> 31) & v11) + 1020;
        LOWORD(v19) = v19 & 0x3E0;
        v20 = ((((v12 - 255) >> 31) & (v12 - 255)) + 255) << 7;
        LOWORD(v20) = v20 & 0x7C00;
        v21 = v20 | v19 | ((((v10 >> 31) & v10) + 255) >> 3) & 0x1F;
        *a1 = v21;
        v18 = (signed __int16)v21;
      }
      *a2 = dword_6FCBFE50[v18];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
