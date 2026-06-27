__int16 __cdecl sub_6F6C83E0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // ecx@1
  signed int v11; // edi@2
  signed int v12; // edi@2
  signed int v13; // edx@2
  int v14; // ebp@2
  int v15; // edx@2
  int v16; // ebx@2

  v9 = dword_6FBBFE40(a8, a9);
  v10 = v9 >> 24;
  if ( BYTE3(v9) & 0x40 )
  {
    v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
    v12 = ((v11 >> 31) & v11) + 255;
    v13 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
    v14 = ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 255;
    v9 = 4 * v14;
    LOWORD(v9) = 4 * v14 & 0x3E0;
    v15 = ((v13 >> 31) & v13) + 255;
    v16 = v9 | (v12 >> 3) & 0x1F;
    LOWORD(v9) = ((unsigned __int8)v10 << 8) & 0x8000;
    *a1 = v9 | ((_WORD)v15 << 7) & 0x7C00 | v16;
    *a2 = (v15 << 16) | (v14 << 8) | v12 | ((unsigned __int8)v10 << 24);
  }
  return v9;
}
