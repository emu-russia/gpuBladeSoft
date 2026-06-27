void __cdecl sub_6F6FEA90(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  signed int v11; // ebp@3
  signed int v12; // edx@3
  signed int v13; // ebx@3
  int v14; // edx@3
  int v15; // esi@3
  int v16; // ebp@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = v9 >> 24 << 8;
      LOWORD(v10) = v10 & 0x8000;
      v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v12 = (BYTE1(v9) * a6 >> 7) - 255;
      v13 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v14 = 4 * ((v12 >> 31) & v12) + 1020;
      LOWORD(v14) = v14 & 0x3E0;
      v15 = ((v13 & (v13 >> 31)) + 255) << 7;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = v10 | v15 | v14 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
      *a1 = v16;
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v16;
    }
  }
}
