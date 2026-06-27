void __cdecl sub_6F6D5B40(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // edx@3
  unsigned __int16 v11; // ax@3
  unsigned int v12; // [sp+1Ch] [bp-30h]@2
  int v13; // [sp+20h] [bp-2Ch]@3
  int v14; // [sp+24h] [bp-28h]@3
  int v15; // [sp+28h] [bp-24h]@3

  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    v12 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v13 = ((((a5 * (unsigned __int8)v9 >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)v9 >> 7) - 255)) + 255;
      v10 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v14 = ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 255;
      v15 = ((v10 >> 31) & v10) + 255;
      dword_6FCFFE50(a3, a4, &v13);
      v11 = ((_WORD)v12 << 8) & 0x8000 | ((((unsigned __int16)((v15 & ~(v15 >> 31)) - 255) & (unsigned __int16)(((v15 & ~(v15 >> 31)) - 255) >> 31))
                                         + 255) << 7) & 0x7C00 | (4
                                                                * ((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255))
                                                                + 1020) & 0x3E0 | (((((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31))
                                                                                  + 255) >> 3) & 0x1F;
      *a1 = v11;
      *a2 = dword_6FCBFE50[v11];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
