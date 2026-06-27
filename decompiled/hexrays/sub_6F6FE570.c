__int16 __cdecl sub_6F6FE570(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  int v10; // edx@3
  int v11; // ebx@3
  signed int v12; // ebp@4
  signed int v13; // ecx@4
  signed int v14; // esi@4
  signed int v15; // ebp@6
  int v17; // [sp+1Ch] [bp-20h]@3

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = BYTE1(v9);
      v17 = (unsigned __int8)(v9 >> 16);
      v11 = (unsigned __int8)v9 * a5 >> 7;
      if ( v9 >> 31 )
      {
        v9 = (unsigned int)&dword_6FBBFE50[4 * *a1];
        v12 = *(_DWORD *)v9 + (((v11 - 255) >> 31) & (v11 - 255));
        v13 = *(_DWORD *)(v9 + 4) + ((((v10 * a6 >> 7) - 255) >> 31) & ((v10 * a6 >> 7) - 255));
        v14 = *(_DWORD *)(v9 + 8) + ((((v17 * a7 >> 7) - 255) >> 31) & ((v17 * a7 >> 7) - 255));
        LOWORD(v9) = (4 * ((v13 >> 31) & v13) + 1020) & 0x3E0 | ((((unsigned __int16)v14 & (unsigned __int16)(v14 >> 31))
                                                                + 255) << 7) & 0x7C00 | (((v12 & (v12 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v9;
      }
      else
      {
        v15 = (v17 * a7 >> 7) - 255;
        v9 = v15 >> 31;
        *a1 = ((((unsigned __int16)(v15 >> 31) & (unsigned __int16)v15) + 255) << 7) & 0x7C00 | (4
                                                                                               * ((((v10 * a6 >> 7) - 255) >> 31) & ((v10 * a6 >> 7) - 255))
                                                                                               + 1020) & 0x3E0 | (((((v11 - 255) >> 31) & (v11 - 255)) + 255) >> 3) & 0x1F;
      }
    }
  }
  return v9;
}
