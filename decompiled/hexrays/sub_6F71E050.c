__int16 __cdecl sub_6F71E050(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  signed int v10; // ebp@2
  signed int v11; // esi@2
  signed int v12; // edi@2
  int v13; // ebx@3
  int *v14; // esi@3
  signed int v15; // edx@3
  signed int v16; // esi@3

  v9 = dword_6FBBFE44(a8, a9);
  if ( BYTE3(v9) & 0x40 )
  {
    v10 = (BYTE1(v9) * a6 >> 7) - 255;
    v11 = ((unsigned __int8)v9 * a5 >> 7) - 255;
    v12 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
    if ( v9 >> 31 )
    {
      v13 = ((v11 & (v11 >> 31)) + 255) >> 1;
      v14 = &dword_6FBBFE50[4 * *a1];
      v9 = v13 + (*v14 >> 1) - 255;
      v15 = (((v10 & (v10 >> 31)) + 255) >> 1) + (v14[1] >> 1) - 255;
      v16 = (((v12 & (v12 >> 31)) + 255) >> 1) + (v14[2] >> 1) - 255;
      LOWORD(v9) = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((signed int)((v9 & ((signed int)v9 >> 31)) + 255) >> 3) & 0x1F | ((((unsigned __int16)v16 & (unsigned __int16)(v16 >> 31)) + 255) << 7) & 0x7C00 | 0x8000;
      *a1 = v9;
    }
    else
    {
      LOWORD(v9) = (_WORD)a1;
      *a1 = ((((unsigned __int16)(v12 >> 31) & (unsigned __int16)v12) + 255) << 7) & 0x7C00 | (4 * ((v10 >> 31) & v10)
                                                                                             + 1020) & 0x3E0 | (((v11 & (v11 >> 31)) + 255) >> 3) & 0x1F;
    }
  }
  return v9;
}
