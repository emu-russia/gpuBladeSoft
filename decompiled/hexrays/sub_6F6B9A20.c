void __cdecl sub_6F6B9A20(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@2
  signed int v11; // ebp@3
  signed int v12; // ebp@3
  signed int v13; // ebx@3
  int v14; // edx@3
  int v15; // ebx@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v12 = ((v11 >> 31) & v11) + 255;
      v13 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v14 = ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 255;
      v15 = ((v13 >> 31) & v13) + 255;
      *a1 = ((unsigned __int8)v10 << 8) & 0x8000 | ((_WORD)v15 << 7) & 0x7C00 | (v12 >> 3) & 0x1F | 4 * v14 & 0x3E0;
      *a2 = (v15 << 16) | (v14 << 8) | v12 | ((unsigned __int8)v10 << 24);
    }
  }
}
