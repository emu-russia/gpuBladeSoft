void __cdecl sub_6F6FE080(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ebx@3
  signed int v11; // esi@3
  signed int v12; // ecx@3
  signed int v13; // edi@4
  signed int v14; // esi@4
  signed int v15; // ecx@4
  int v16; // eax@4
  int v17; // esi@7
  int v18; // ebx@7

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v11 = (BYTE1(v9) * a6 >> 7) - 255;
      v12 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      if ( v9 >> 31 )
      {
        v16 = 16 * *a1;
        v13 = *(int *)((char *)dword_6FBBFE50 + v16) - (((v12 >> 31) & v12) + 255);
        v14 = *(int *)((char *)&dword_6FBBFE50[1] + v16) - (((v11 >> 31) & v11) + 255);
        v15 = *(int *)((char *)&dword_6FBBFE50[2] + v16) - (((v10 >> 31) & v10) + 255);
        LOWORD(v16) = 4 * (v14 & ~(v14 >> 31)) & 0x3E0 | (((unsigned __int16)v15 & (unsigned __int16)~(v15 >> 31)) << 7) & 0x7C00 | ((v13 & ~(v13 >> 31)) >> 3) & 0x1F | 0x8000;
        *a1 = v16;
      }
      else
      {
        v17 = 4 * ((v11 >> 31) & v11) + 1020;
        LOWORD(v17) = v17 & 0x3E0;
        v18 = (((v10 >> 31) & v10) + 255) << 7;
        LOWORD(v18) = v18 & 0x7C00;
        v16 = v18 | v17 | ((((v12 >> 31) & v12) + 255) >> 3) & 0x1F;
        *a1 = v16;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v16;
    }
  }
}
