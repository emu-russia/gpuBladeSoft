__int16 __cdecl sub_6F6DD950(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  int v10; // ecx@3
  int v11; // edx@3
  int v12; // eax@4
  signed int v13; // edi@4
  signed int v14; // ebp@4
  signed int v15; // esi@4
  unsigned __int16 v16; // cx@4
  int v17; // ebp@4
  signed int v18; // ecx@7
  int v19; // ebp@7
  int v20; // edi@7
  int v22; // [sp+1Ch] [bp-20h]@3

  LOWORD(v9) = (_WORD)a1;
  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v22 = (unsigned __int8)(v9 >> 16);
      if ( v9 >> 31 )
      {
        v12 = 4 * *a1;
        v13 = ((((((v10 * a5 >> 7) - 255) >> 31) & ((v10 * a5 >> 7) - 255)) + 255) >> 1)
            + (dword_6FBBFE50[v12] >> 1)
            - 255;
        v14 = (((((v22 * a7 >> 7) - 255) & (((v22 * a7 >> 7) - 255) >> 31)) + 255) >> 1)
            + (dword_6FBBFE50[v12 + 2] >> 1)
            - 255;
        v15 = ((((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255) >> 1)
            + (dword_6FBBFE50[v12 + 1] >> 1)
            - 255;
        v9 = v15 >> 31;
        v16 = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)v14 & (unsigned __int16)(v14 >> 31)) + 255) << 7) & 0x7C00 | (((v13 & (v13 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v16;
        v17 = v16;
      }
      else
      {
        v18 = (a5 * (unsigned __int8)v9 >> 7) - 255;
        v9 = 4 * ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 1020;
        LOWORD(v9) = v9 & 0x3E0;
        v19 = (((((v22 * a7 >> 7) - 255) >> 31) & ((v22 * a7 >> 7) - 255)) + 255) << 7;
        LOWORD(v19) = v19 & 0x7C00;
        v20 = v19 | v9 | ((((v18 >> 31) & v18) + 255) >> 3) & 0x1F;
        *a1 = v20;
        v17 = (signed __int16)v20;
      }
      *a2 = dword_6FCBFE50[v17];
    }
  }
  return v9;
}
