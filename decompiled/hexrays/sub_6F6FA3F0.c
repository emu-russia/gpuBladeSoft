void __cdecl sub_6F6FA3F0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
      *a1 = (v9 >> 24 << 8) & 0x8000 | (v9 >> 9) & 0x7C00 | ((unsigned __int16)v9 >> 6) & 0x3E0 | ((signed int)v9 >> 3) & 0x1F;
  }
}
