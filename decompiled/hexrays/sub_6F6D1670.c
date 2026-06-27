__int16 __cdecl sub_6F6D1670(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  int v10; // ebp@4
  signed int v11; // edx@4
  signed int v12; // ecx@4
  signed int v13; // esi@4
  int v14; // ebx@4
  signed int v15; // edx@7
  int v16; // edi@7
  int v17; // edx@7
  int v19; // [sp+1Ch] [bp-20h]@3

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v19 = (unsigned __int8)(v9 >> 16);
      if ( v9 >> 31 )
      {
        v10 = 4 * *a1;
        v11 = dword_6FBBFE50[v10]
            + (((((((unsigned __int8)v9 * a5 >> 7) - 255) >> 31) & (((unsigned __int8)v9 * a5 >> 7) - 255)) + 255) >> 2)
            - 255;
        v12 = dword_6FBBFE50[v10 + 2] + (((((v19 * a7 >> 7) - 255) & (((v19 * a7 >> 7) - 255) >> 31)) + 255) >> 2) - 255;
        v13 = dword_6FBBFE54[v10]
            + ((((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 255) >> 2)
            - 255;
        LOWORD(v9) = (4 * ((v13 >> 31) & v13) + 1020) & 0x3E0;
        LOWORD(v11) = v9 | ((((unsigned __int16)(v12 >> 31) & (unsigned __int16)v12) + 255) << 7) & 0x7C00 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v11;
        v14 = (unsigned __int16)v11;
      }
      else
      {
        v15 = (a5 * (unsigned __int8)v9 >> 7) - 255;
        v16 = 4 * ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 1020;
        LOWORD(v16) = v16 & 0x3E0;
        v9 = ((((v19 * a7 >> 7) - 255) & (((v19 * a7 >> 7) - 255) >> 31)) + 255) << 7;
        LOWORD(v9) = v9 & 0x7C00;
        v17 = v9 | v16 | ((((v15 >> 31) & v15) + 255) >> 3) & 0x1F;
        *a1 = v17;
        v14 = (signed __int16)v17;
      }
      *a2 = dword_6FCBFE50[v14];
    }
  }
  return v9;
}
