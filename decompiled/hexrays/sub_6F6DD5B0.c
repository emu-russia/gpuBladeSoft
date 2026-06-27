__int16 __cdecl sub_6F6DD5B0(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  int v10; // ecx@3
  int v11; // edx@4
  signed int v12; // edi@4
  signed int v13; // esi@4
  signed int v14; // ebx@4
  unsigned __int16 v15; // cx@4
  int v16; // ebp@4
  int v17; // ebp@7
  int v18; // edi@7
  int v20; // [sp+1Ch] [bp-20h]@3

  LOWORD(v9) = (_WORD)a1;
  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v20 = (unsigned __int8)(v9 >> 16);
      if ( v9 >> 31 )
      {
        v11 = 4 * *a1;
        v12 = dword_6FBBFE50[v11]
            + (((((unsigned __int8)v9 * a5 >> 7) - 255) >> 31) & (((unsigned __int8)v9 * a5 >> 7) - 255));
        v13 = dword_6FBBFE54[v11] + ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255));
        v14 = dword_6FBBFE50[v11 + 2] + ((((v20 * a7 >> 7) - 255) >> 31) & ((v20 * a7 >> 7) - 255));
        LOWORD(v9) = (4 * ((v13 >> 31) & v13) + 1020) & 0x3E0;
        v15 = v9 | ((((unsigned __int16)v14 & (unsigned __int16)(v14 >> 31)) + 255) << 7) & 0x7C00 | (((v12 & (v12 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v15;
        v16 = v15;
      }
      else
      {
        v9 = 4 * ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 1020;
        LOWORD(v9) = v9 & 0x3E0;
        v17 = (((((v20 * a7 >> 7) - 255) >> 31) & ((v20 * a7 >> 7) - 255)) + 255) << 7;
        LOWORD(v17) = v17 & 0x7C00;
        v18 = v17 | v9 | ((((((a5 * v10 >> 7) - 255) >> 31) & ((a5 * v10 >> 7) - 255)) + 255) >> 3) & 0x1F;
        *a1 = v18;
        v16 = (signed __int16)v18;
      }
      *a2 = dword_6FCBFE50[v16];
    }
  }
  return v9;
}
