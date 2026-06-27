void __cdecl sub_6F705240(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // esi@3
  int v11; // edx@3
  unsigned int v12; // ecx@3
  int v13; // eax@3
  int v14; // ecx@6

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = v9 >> 31;
      v13 = (unsigned __int8)(v9 >> 16);
      if ( v12 )
      {
        v14 = 4 * *a1;
        *a1 = 4 * ((LOWORD(dword_6FBBFE54[v14]) - v11) & ~((dword_6FBBFE54[v14] - v11) >> 31)) & 0x3E0 | (((dword_6FBBFE50[v14] - v10) & ~((dword_6FBBFE50[v14] - v10) >> 31)) >> 3) & 0x1F | (((unsigned __int16)(LOWORD(dword_6FBBFE50[v14 + 2]) - v13) & (unsigned __int16)~((dword_6FBBFE50[v14 + 2] - v13) >> 31)) << 7) & 0x7C00 | 0x8000;
      }
      else
      {
        *a1 = (v10 >> 3) | 4 * v11 & 0x3E0 | ((_WORD)v13 << 7) & 0x7C00;
      }
    }
  }
}
