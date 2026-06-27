void __cdecl sub_6F6AB610(_WORD *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  int v10; // edx@3
  signed int v11; // ecx@3
  signed int v12; // esi@7
  signed int v13; // ecx@7
  signed int v14; // edi@7
  int v15; // eax@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = BYTE3(v9);
      v11 = (unsigned __int8)(v9 >> 16);
      if ( (unsigned int)BYTE3(v9) >> 7 )
      {
        v12 = (signed int)BYTE1(v9) >> 1;
        v13 = v11 >> 1;
        v14 = (signed int)(unsigned __int8)v9 >> 1;
        *a1 = 4 * (v12 + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0 | ((v14 + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | (((_WORD)v13 + (unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1)) << 7) & 0x7C00 | 0x8000;
        v15 = *a2;
        *a2 = ((((signed int)BYTE1(v15) >> 1) + v12) << 8) | (((((unsigned int)*a2 >> 17) & 0x7F) + v13) << 16) | (((*a2 >> 1) & 0x7F) + v14) | (v10 << 24);
      }
      else
      {
        *a1 = 4 * BYTE1(v9) & 0x3E0 | ((_WORD)v11 << 7) & 0x7C00 | ((signed int)(unsigned __int8)v9 >> 3);
        *a2 = v9;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
