void __cdecl sub_6F6DDB30(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@2
  signed int v11; // ebp@3
  signed int v12; // ebx@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v12 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      LOWORD(v11) = ((_WORD)v10 << 8) & 0x8000 | ((((unsigned __int16)v12 & (unsigned __int16)(v12 >> 31)) + 255) << 7) & 0x7C00 | (4 * ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 1020) & 0x3E0 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
      *a1 = v11;
      *a2 = dword_6FCBFE50[(unsigned __int16)v11];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
