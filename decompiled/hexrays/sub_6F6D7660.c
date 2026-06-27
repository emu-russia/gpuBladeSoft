void __cdecl sub_6F6D7660(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  int v10; // ebx@3
  signed int v11; // edi@3
  signed int v12; // ecx@3
  int v13; // edx@4
  signed int v14; // esi@4
  signed int v15; // ecx@4
  signed int v16; // eax@4
  int v17; // edx@4
  int v18; // edi@7
  int v19; // eax@7
  int v20; // esi@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (unsigned __int8)(v9 >> 16) * a7 >> 7;
      v11 = (BYTE1(v9) * a6 >> 7) - 255;
      v12 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      if ( v9 >> 31 )
      {
        v13 = 4 * *a1;
        v14 = dword_6FBBFE50[v13] - (((v12 >> 31) & v12) + 255);
        v15 = dword_6FBBFE50[v13 + 1] - (((v11 >> 31) & v11) + 255);
        v16 = dword_6FBBFE50[v13 + 2] - ((((v10 - 255) >> 31) & (v10 - 255)) + 255);
        LOWORD(v16) = 4 * (v15 & ~(v15 >> 31)) & 0x3E0 | ((v14 & ~(v14 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v16 & (unsigned __int16)~(v16 >> 31)) << 7) & 0x7C00 | 0x8000;
        *a1 = v16;
        v17 = (unsigned __int16)v16;
      }
      else
      {
        v18 = 4 * ((v11 >> 31) & v11) + 1020;
        LOWORD(v18) = v18 & 0x3E0;
        v19 = ((((v10 - 255) >> 31) & (v10 - 255)) + 255) << 7;
        LOWORD(v19) = v19 & 0x7C00;
        v20 = v19 | v18 | ((((v12 >> 31) & v12) + 255) >> 3) & 0x1F;
        *a1 = v20;
        v17 = (signed __int16)v20;
      }
      *a2 = dword_6FCBFE50[v17];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
