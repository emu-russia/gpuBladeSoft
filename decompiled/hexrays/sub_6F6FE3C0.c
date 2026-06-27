void __cdecl sub_6F6FE3C0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // edx@2
  int v11; // ST18_4@3
  int v12; // eax@3
  int v13; // edi@3
  int v14; // ebx@4
  signed int v15; // edi@4
  signed int v16; // esi@4
  signed int v17; // ecx@4
  int v18; // ecx@7
  int v19; // ebx@7
  int v20; // [sp+1Ch] [bp-20h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = (unsigned __int8)v9;
      v20 = BYTE1(v9);
      v12 = (unsigned __int8)(v9 >> 16);
      v13 = v11 * a5 >> 7;
      if ( v10 >> 7 )
      {
        v14 = 4 * *a1;
        v15 = dword_6FBBFE50[v14] + (((v13 - 255) >> 31) & (v13 - 255));
        v16 = dword_6FBBFE54[v14] + ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255));
        v17 = ((((v12 * a7 >> 7) - 255) >> 31) & ((v12 * a7 >> 7) - 255)) + dword_6FBBFE50[v14 + 2];
        LOWORD(v12) = (4 * ((v16 >> 31) & v16) + 1020) & 0x3E0 | ((((unsigned __int16)v17 & (unsigned __int16)(v17 >> 31))
                                                                 + 255) << 7) & 0x7C00 | (((v15 & (v15 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v12;
      }
      else
      {
        v18 = 4 * ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255)) + 1020;
        LOWORD(v18) = v18 & 0x3E0;
        v19 = (((((v12 * a7 >> 7) - 255) >> 31) & ((v12 * a7 >> 7) - 255)) + 255) << 7;
        LOWORD(v19) = v19 & 0x7C00;
        v12 = v19 | v18 | (((((v13 - 255) >> 31) & (v13 - 255)) + 255) >> 3) & 0x1F;
        *a1 = v12;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v12;
    }
  }
}
