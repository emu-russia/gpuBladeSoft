void __cdecl sub_6F6B4E40(_WORD *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ecx@3
  signed int v11; // esi@6
  signed int v12; // ecx@6
  int v13; // ebx@6

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (unsigned __int8)(v9 >> 16);
      if ( (unsigned int)BYTE3(v9) >> 7 )
      {
        v11 = (signed int)BYTE1(v9) >> 1;
        v12 = v10 >> 1;
        *a1 = 4 * (v11 + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0 | ((((signed int)(unsigned __int8)v9 >> 1)
                                                                       + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | (((_WORD)v12 + (unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1)) << 7) & 0x7C00 | 0x8000;
        v13 = *a2;
        *a2 = (BYTE3(v9) << 24) | ((((signed int)BYTE1(v13) >> 1) + v11) << 8) | (((((unsigned int)*a2 >> 17) & 0x7F)
                                                                                 + v12) << 16) | (((*a2 >> 1) & 0x7F)
                                                                                                + ((signed int)(unsigned __int8)v9 >> 1));
      }
      else
      {
        *a1 = 4 * BYTE1(v9) & 0x3E0 | ((_WORD)v10 << 7) & 0x7C00 | ((signed int)(unsigned __int8)v9 >> 3);
        *a2 = v9;
      }
    }
  }
}
