__int16 __cdecl sub_6F6FDED0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  int v10; // ebx@3
  signed int v11; // edi@3
  signed int v12; // ecx@3
  int v13; // eax@4
  int v14; // ebx@4
  signed int v15; // edi@4
  signed int v16; // edx@4
  signed int v17; // ecx@4

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = (unsigned __int8)(v9 >> 16) * a7 >> 7;
      v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v12 = (BYTE1(v9) * a6 >> 7) - 255;
      if ( v9 >> 31 )
      {
        v13 = v10 - 255;
        v14 = 4 * *a1;
        v15 = dword_6FBBFE50[v14] + ((((v11 >> 31) & v11) + 255) >> 2) - 255;
        v16 = dword_6FBBFE50[v14 + 2] + ((signed int)((v13 & ((unsigned __int64)v13 >> 32)) + 255) >> 2) - 255;
        v17 = dword_6FBBFE54[v14] + ((((v12 >> 31) & v12) + 255) >> 2) - 255;
        v9 = v15 >> 31;
        *a1 = (4 * ((v17 >> 31) & v17) + 1020) & 0x3E0 | ((((unsigned __int16)(v16 >> 31) & (unsigned __int16)v16) + 255) << 7) & 0x7C00 | ((((v15 >> 31) & v15) + 255) >> 3) & 0x1F | 0x8000;
      }
      else
      {
        LOWORD(v9) = (4 * ((v12 >> 31) & v12) + 1020) & 0x3E0;
        *a1 = ((((unsigned __int16)(v10 - 255) & (unsigned __int16)((v10 - 255) >> 31)) + 255) << 7) & 0x7C00 | v9 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
      }
    }
  }
  return v9;
}
