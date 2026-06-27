void __cdecl sub_6F6D1480(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  signed int v12; // ebx@4
  int v13; // eax@4
  signed int v14; // edx@4
  signed int v15; // esi@4
  signed int v16; // eax@4
  int v17; // ebx@4
  int v18; // edx@7
  int v19; // esi@7
  int v20; // ecx@7
  int v21; // [sp+18h] [bp-24h]@3
  int v22; // [sp+1Ch] [bp-20h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v21 = (unsigned __int8)v9;
      v22 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v12 = v11 * a7;
        v13 = 4 * *a1;
        v14 = dword_6FBBFE50[v13] + ((((((v21 * a5 >> 7) - 255) >> 31) & ((v21 * a5 >> 7) - 255)) + 255) >> 2) - 255;
        v15 = dword_6FBBFE54[v13] + ((((((v22 * a6 >> 7) - 255) >> 31) & ((v22 * a6 >> 7) - 255)) + 255) >> 2) - 255;
        v16 = dword_6FBBFE50[v13 + 2] + (((((v12 >> 7) - 255) & (((v12 >> 7) - 255) >> 31)) + 255) >> 2) - 255;
        LOWORD(v14) = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)(v16 >> 31) & (unsigned __int16)v16)
                                                                 + 255) << 7) & 0x7C00 | ((((v14 >> 31) & v14) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v14;
        v17 = (unsigned __int16)v14;
      }
      else
      {
        v18 = 4 * ((((v22 * a6 >> 7) - 255) >> 31) & ((v22 * a6 >> 7) - 255)) + 1020;
        LOWORD(v18) = v18 & 0x3E0;
        v19 = ((((v11 * a7 >> 7) - 255) & (((v11 * a7 >> 7) - 255) >> 31)) + 255) << 7;
        LOWORD(v19) = v19 & 0x7C00;
        v20 = v19 | v18 | ((((((a5 * v21 >> 7) - 255) >> 31) & ((a5 * v21 >> 7) - 255)) + 255) >> 3) & 0x1F;
        *a1 = v20;
        v17 = (signed __int16)v20;
      }
      *a2 = dword_6FCBFE50[v17];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
