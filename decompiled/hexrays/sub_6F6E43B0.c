__int16 __cdecl sub_6F6E43B0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  signed int v10; // ebp@3
  signed int v11; // esi@3
  signed int v12; // edi@3
  int v13; // ecx@4
  signed int v14; // edx@4
  signed int v15; // ebp@4
  signed int v16; // ecx@4
  int v17; // ebp@4
  int v18; // ebx@7
  int v19; // ecx@7

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (BYTE1(v9) * a6 >> 7) - 255;
      v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v12 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      if ( v9 >> 31 )
      {
        LOWORD(v9) = (_WORD)a1;
        v13 = 4 * *a1;
        v14 = dword_6FBBFE50[v13] + ((((v11 >> 31) & v11) + 255) >> 2) - 255;
        v15 = dword_6FBBFE54[v13] + ((((v10 >> 31) & v10) + 255) >> 2) - 255;
        v16 = dword_6FBBFE50[v13 + 2] + (((v12 & (v12 >> 31)) + 255) >> 2) - 255;
        LOWORD(v14) = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)(v16 >> 31) & (unsigned __int16)v16)
                                                                 + 255) << 7) & 0x7C00 | ((((v14 >> 31) & v14) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v14;
        v17 = (unsigned __int16)v14;
      }
      else
      {
        v9 = ((v12 & (v12 >> 31)) + 255) << 7;
        v18 = 4 * ((v10 >> 31) & v10) + 1020;
        LOWORD(v9) = v9 & 0x7C00;
        LOWORD(v18) = v18 & 0x3E0;
        v19 = v9 | v18 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
        *a1 = v19;
        v17 = (signed __int16)v19;
      }
      *a2 = dword_6FCBFE50[v17];
    }
  }
  return v9;
}
