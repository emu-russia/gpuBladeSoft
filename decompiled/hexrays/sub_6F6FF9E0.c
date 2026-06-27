void __cdecl sub_6F6FF9E0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // edi@2
  signed int v11; // ecx@3
  int v12; // edx@3
  unsigned int v13; // eax@3
  int v14; // esi@3
  int v15; // eax@4
  int v16; // esi@4
  int v17; // edi@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    v10 = v9 >> 24;
    if ( (v9 >> 24) & 0x40 )
    {
      v11 = (unsigned __int8)v9;
      v12 = BYTE1(v9);
      v13 = v9 >> 16;
      v14 = (unsigned __int8)v13;
      if ( v10 >> 7 )
      {
        v17 = 4 * *a1;
        LOWORD(v13) = 4 * ((LOWORD(dword_6FBBFE54[v17]) - v12) & ~((dword_6FBBFE54[v17] - v12) >> 31)) & 0x3E0 | (((unsigned __int16)(dword_6FBBFE50[v17 + 2] - (unsigned __int8)v13) & (unsigned __int16)~((dword_6FBBFE50[v17 + 2] - (unsigned __int8)v13) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v17] - v11) & ~((dword_6FBBFE50[v17] - v11) >> 31)) >> 3) & 0x1F | 0x8000;
        *a1 = v13;
      }
      else
      {
        v15 = 4 * v12;
        v16 = v14 << 7;
        LOWORD(v15) = 4 * v12 & 0x3E0;
        LOWORD(v16) = v16 & 0x7C00;
        v13 = (v11 >> 3) | v16 | v15;
        *a1 = v13;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v13;
    }
  }
}
