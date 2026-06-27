void __cdecl sub_6F6FF820(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // esi@3
  signed int v11; // edx@3
  unsigned int v12; // ecx@3
  signed int v13; // eax@3
  int v14; // ecx@6
  signed int v15; // esi@6
  signed int v16; // eax@6
  signed int v17; // edx@6

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = v9 >> 31;
      v13 = (unsigned __int8)(v9 >> 16);
      if ( v12 )
      {
        v14 = 4 * *a1;
        v15 = dword_6FBBFE50[v14] + (v10 >> 2) - 255;
        v16 = dword_6FBBFE50[v14 + 2] + (v13 >> 2) - 255;
        v17 = dword_6FBBFE50[v14 + 1] + (v11 >> 2) - 255;
        *a1 = (4 * ((v17 >> 31) & v17) + 1020) & 0x3E0 | ((((unsigned __int16)(v16 >> 31) & (unsigned __int16)v16) + 255) << 7) & 0x7C00 | (((v15 & (v15 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      }
      else
      {
        *a1 = 4 * v11 & 0x3E0 | ((_WORD)v13 << 7) & 0x7C00 | (v10 >> 3);
      }
    }
  }
}
