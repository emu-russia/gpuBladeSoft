void __cdecl sub_6F6B3670(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  int v10; // edx@3
  signed int v11; // esi@3
  signed int v12; // edi@6
  int *v13; // ebp@6
  unsigned int v14; // eax@6
  signed int v15; // ebp@6
  signed int v16; // [sp+18h] [bp-24h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = BYTE3(v9);
      v16 = BYTE1(v9);
      v11 = (unsigned __int8)(v9 >> 16);
      if ( (unsigned int)BYTE3(v9) >> 7 )
      {
        v12 = (signed int)(unsigned __int8)v9 >> 2;
        v13 = &dword_6FBBFE50[4 * *a1];
        *a1 = (4
             * ((((signed int)BYTE1(v9) >> 2) + *((_WORD *)v13 + 2) - 255) & ((((signed int)BYTE1(v9) >> 2)
                                                                             + v13[1]
                                                                             - 255) >> 31))
             + 1020) & 0x3E0 | ((((unsigned __int16)(*((_WORD *)v13 + 4) + (v11 >> 2) - 255) & (unsigned __int16)((v13[2] + (v11 >> 2) - 255) >> 31))
                               + 255) << 7) & 0x7C00 | ((((v12 + *v13 - 255) & ((v12 + *v13 - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        v14 = *a2;
        v15 = v12 + (unsigned __int8)*a2 - 255;
        *a2 = (((v15 >> 31) & v15) + 255) | (((((v11 >> 2) + (unsigned __int8)(*a2 >> 16) - 255) & (((v11 >> 2) + (unsigned __int8)(*a2 >> 16) - 255) >> 31))
                                            + 255) << 16) | ((((((v16 >> 2) + BYTE1(v14) - 255) >> 31) & ((v16 >> 2) + BYTE1(v14) - 255))
                                                            + 255) << 8) | (v10 << 24);
      }
      else
      {
        *a1 = ((_WORD)v11 << 7) & 0x7C00 | 4 * BYTE1(v9) & 0x3E0 | ((signed int)(unsigned __int8)v9 >> 3);
        *a2 = v9;
      }
    }
  }
}
