_WORD *__cdecl sub_6F6BA070(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *result; // eax@1
  int v8; // edi@1
  int v9; // edi@2
  signed int v10; // ebx@2
  signed int v11; // ecx@2
  signed int v12; // edx@2
  int v13; // eax@2
  signed int v14; // ebx@2
  signed int v15; // edi@2

  result = a1;
  v8 = *a1;
  if ( (signed __int16)v8 >= 0 )
  {
    v9 = 4 * v8;
    v10 = (signed int)a5 >> 2;
    v11 = (signed int)a6 >> 2;
    v12 = (signed int)a7 >> 2;
    *a1 = ((((unsigned __int16)((v12 + dword_6FBBFE50[v9 + 2] - 255) >> 31) & (unsigned __int16)(v12
                                                                                               + LOWORD(dword_6FBBFE50[v9 + 2])
                                                                                               - 255))
          + 255) << 7) & 0x7C00 | (4
                                 * (((v11 + dword_6FBBFE54[v9] - 255) >> 31) & (v11 + LOWORD(dword_6FBBFE54[v9]) - 255))
                                 + 1020) & 0x3E0 | ((((v10 + dword_6FBBFE50[v9] - 255) & ((v10 + dword_6FBBFE50[v9] - 255) >> 31))
                                                   + 255) >> 3) & 0x1F;
    v13 = *a2;
    v14 = v10 + (unsigned __int8)*a2 - 255;
    v15 = v12 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
    result = (_WORD *)((((v14 >> 31) & v14) + 255) | (((((v11 + BYTE1(v13) - 255) >> 31) & (v11 + BYTE1(v13) - 255))
                                                     + 255) << 8) | (((v15 & (v15 >> 31)) + 255) << 16));
    *a2 = (int)result;
  }
  return result;
}
