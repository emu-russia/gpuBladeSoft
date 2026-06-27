void __cdecl sub_6F700210(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ecx@3
  __int16 v11; // si@3
  signed int v12; // edx@3
  int v13; // eax@4
  signed int v14; // edx@4

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = (unsigned __int8)(v9 >> 16);
      if ( v9 >> 31 )
      {
        LOWORD(v9) = 4 * (((signed int)BYTE1(v9) >> 1) + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0 | (((unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1) + (unsigned __int16)(v12 >> 1)) << 7) & 0x7C00 | ((((signed int)(unsigned __int8)v9 >> 1) + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | 0x8000;
        *a1 = v9;
      }
      else
      {
        v13 = 4 * BYTE1(v9);
        v14 = v12 << 7;
        LOWORD(v13) = 4 * v11 & 0x3E0;
        LOWORD(v14) = v14 & 0x7C00;
        v9 = (v10 >> 3) | v14 | v13;
        *a1 = v9;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v9;
    }
  }
}
