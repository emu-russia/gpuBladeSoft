void __cdecl sub_6F6DC4A0(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned __int16 v10; // cx@3

  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = ((signed int)v9 >> 3) & 0x1F | (v9 >> 9) & 0x7C00 | ((unsigned __int16)v9 >> 6) & 0x3E0 | (v9 >> 24 << 8) & 0x8000;
      *a1 = v10;
      *a2 = dword_6FCBFE50[v10];
    }
  }
}
