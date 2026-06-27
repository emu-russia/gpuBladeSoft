void __cdecl sub_6F6FD2C0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // esi@3
  signed int v11; // edx@3
  unsigned int v12; // ecx@3
  signed int v13; // eax@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = v9 >> 31;
      v13 = (unsigned __int8)(v9 >> 16);
      if ( v12 )
        *a1 = 4 * ((dword_6FBBFE54[4 * *a1] >> 1) + (v11 >> 1)) & 0x3E0 | (((dword_6FBBFE50[4 * *a1] >> 1) + (v10 >> 1)) >> 3) & 0x1F | (((unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1) + (unsigned __int16)(v13 >> 1)) << 7) & 0x7C00 | 0x8000;
      else
        *a1 = 4 * v11 & 0x3E0 | ((_WORD)v13 << 7) & 0x7C00 | (v10 >> 3);
    }
  }
}
