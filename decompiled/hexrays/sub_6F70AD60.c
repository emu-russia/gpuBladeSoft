void __cdecl sub_6F70AD60(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ebp@3
  signed int v11; // edx@3
  signed int v12; // ebx@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v11 = (BYTE1(v9) * a6 >> 7) - 255;
      v12 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      *a1 = ((((unsigned __int16)v12 & (unsigned __int16)(v12 >> 31)) + 255) << 7) & 0x7C00 | (4 * ((v11 >> 31) & v11)
                                                                                             + 1020) & 0x3E0 | ((((v10 >> 31) & v10) + 255) >> 3) & 0x1F | (v9 >> 24 << 8) & 0x8000;
    }
  }
}
