void __cdecl sub_6F6CFED0(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@2
  unsigned __int16 v11; // cx@3

  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = ((signed int)v9 >> 3) & 0x1F | (v9 >> 9) & 0x7C00 | ((unsigned __int16)v9 >> 6) & 0x3E0 | ((_WORD)v10 << 8) & 0x8000;
      *a1 = v11;
      *a2 = dword_6FCBFE50[v11];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
