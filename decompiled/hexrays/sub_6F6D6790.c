void __cdecl sub_6F6D6790(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ecx@3
  signed int v11; // edx@3
  unsigned int v12; // esi@3
  signed int v13; // eax@3
  int v14; // edx@4
  signed int v15; // eax@4
  int v16; // edx@4
  int v17; // ecx@4
  unsigned __int16 v18; // ax@7

  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = v9 >> 31;
      v13 = (unsigned __int8)(v9 >> 16);
      if ( v12 )
      {
        v18 = 4 * ((dword_6FBBFE54[4 * *a1] >> 1) + (v11 >> 1)) & 0x3E0 | (((dword_6FBBFE50[4 * *a1] >> 1) + (v10 >> 1)) >> 3) & 0x1F | (((unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1) + (unsigned __int16)(v13 >> 1)) << 7) & 0x7C00 | 0x8000;
        v17 = v18;
        *a1 = v18;
      }
      else
      {
        v14 = 4 * v11;
        v15 = v13 << 7;
        LOWORD(v14) = v14 & 0x3E0;
        LOWORD(v15) = v15 & 0x7C00;
        v16 = (v10 >> 3) | v15 | v14;
        *a1 = v16;
        v17 = (signed __int16)v16;
      }
      *a2 = dword_6FCBFE50[v17];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
