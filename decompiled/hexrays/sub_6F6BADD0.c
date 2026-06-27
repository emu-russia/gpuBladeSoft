_WORD *__cdecl sub_6F6BADD0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *result; // eax@1
  int v8; // edi@1
  int v9; // edi@2
  int v10; // ebp@2
  int *v11; // esi@2
  signed int v12; // edi@2
  signed int v13; // esi@2
  int v14; // eax@2
  signed int v15; // ebx@2
  signed int v16; // edi@2

  result = a1;
  v8 = *a1;
  if ( (signed __int16)v8 >= 0 )
  {
    v9 = 4 * v8;
    v10 = dword_6FBBFE50[v9];
    v11 = &dword_6FBBFE50[v9];
    v12 = a6 + dword_6FBBFE54[v9] - 255;
    v13 = a7 + v11[2] - 255;
    *a1 = ((((unsigned __int16)(v13 >> 31) & (unsigned __int16)v13) + 255) << 7) & 0x7C00 | (4 * ((v12 >> 31) & v12)
                                                                                           + 1020) & 0x3E0 | ((((a5 + v10 - 255) & ((a5 + v10 - 255) >> 31)) + 255) >> 3) & 0x1F;
    v14 = *a2;
    v15 = a5 + (unsigned __int8)*a2 - 255;
    v16 = a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
    result = (_WORD *)((((v15 >> 31) & v15) + 255) | (((((a6 + BYTE1(v14) - 255) >> 31) & (a6 + BYTE1(v14) - 255)) + 255) << 8) | (((v16 & (v16 >> 31)) + 255) << 16));
    *a2 = (int)result;
  }
  return result;
}
