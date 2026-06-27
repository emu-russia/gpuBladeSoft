__int16 __cdecl sub_6F6D7800(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  signed int v10; // ecx@3
  signed int v11; // esi@3
  int v12; // edi@3
  int v13; // eax@4
  signed int v14; // esi@4
  signed int v15; // ecx@4
  int v16; // ebp@4
  int v17; // ebp@7
  int v18; // esi@7

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (BYTE1(v9) * a6 >> 7) - 255;
      v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v12 = (unsigned __int8)(v9 >> 16) * a7 >> 7;
      if ( v9 >> 31 )
      {
        v13 = 4 * *a1;
        v14 = dword_6FBBFE50[v13] - (((v11 >> 31) & v11) + 255);
        v15 = dword_6FBBFE54[v13] - (((v10 >> 31) & v10) + 255);
        v9 = dword_6FBBFE50[v13 + 2] - ((((v12 - 255) >> 31) & (v12 - 255)) + 255);
        LOWORD(v9) = 4 * (v15 & ~(v15 >> 31)) & 0x3E0 | ((v14 & ~(v14 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v9 & (unsigned __int16)~((signed int)v9 >> 31)) << 7) & 0x7C00 | 0x8000;
        *a1 = v9;
        v16 = (unsigned __int16)v9;
      }
      else
      {
        v9 = 4 * ((v10 >> 31) & v10) + 1020;
        LOWORD(v9) = v9 & 0x3E0;
        v17 = ((((v12 - 255) >> 31) & (v12 - 255)) + 255) << 7;
        LOWORD(v17) = v17 & 0x7C00;
        v18 = v17 | v9 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
        *a1 = v18;
        v16 = (signed __int16)v18;
      }
      *a2 = dword_6FCBFE50[v16];
    }
  }
  return v9;
}
