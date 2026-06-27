void __cdecl sub_6F6DD760(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  signed int v12; // ebx@4
  int v13; // eax@4
  int v14; // edx@4
  int *v15; // eax@4
  signed int v16; // edi@4
  signed int v17; // esi@4
  signed int v18; // ecx@4
  int v19; // edx@4
  int v20; // esi@7
  int v21; // eax@7
  int v22; // [sp+18h] [bp-24h]@3
  int v23; // [sp+1Ch] [bp-20h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v22 = (unsigned __int8)v9;
      v23 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v12 = v11 * a7;
        v13 = 4 * *a1;
        v14 = v13 * 4;
        v15 = &dword_6FBBFE50[v13];
        v16 = ((((((v22 * a5 >> 7) - 255) >> 31) & ((v22 * a5 >> 7) - 255)) + 255) >> 1)
            + (*(int *)((char *)dword_6FBBFE50 + v14) >> 1)
            - 255;
        v17 = ((((((v23 * a6 >> 7) - 255) >> 31) & ((v23 * a6 >> 7) - 255)) + 255) >> 1) + (v15[1] >> 1) - 255;
        v18 = (((((v12 >> 7) - 255) & (((v12 >> 7) - 255) >> 31)) + 255) >> 1) + (v15[2] >> 1) - 255;
        LOWORD(v15) = (4 * ((v17 >> 31) & v17) + 1020) & 0x3E0 | ((((unsigned __int16)v18 & (unsigned __int16)(v18 >> 31))
                                                                 + 255) << 7) & 0x7C00 | (((v16 & (v16 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = (_WORD)v15;
        v19 = (unsigned __int16)v15;
      }
      else
      {
        v20 = 4 * ((((v23 * a6 >> 7) - 255) >> 31) & ((v23 * a6 >> 7) - 255)) + 1020;
        v21 = (((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255) << 7;
        LOWORD(v20) = v20 & 0x3E0;
        LOWORD(v21) = v21 & 0x7C00;
        v19 = v21 | v20 | ((((((a5 * v22 >> 7) - 255) >> 31) & ((a5 * v22 >> 7) - 255)) + 255) >> 3) & 0x1F;
        *a1 = v19;
        v19 = (signed __int16)v19;
      }
      *a2 = dword_6FCBFE50[v19];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
