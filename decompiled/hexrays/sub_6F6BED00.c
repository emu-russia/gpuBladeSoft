unsigned int __cdecl sub_6F6BED00(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@2
  int v11; // edi@2
  int v12; // ebx@2
  int v13; // ecx@2
  int v14; // esi@3
  unsigned int v15; // eax@3
  signed int v16; // ebp@3
  signed int v17; // edi@3
  signed int v18; // esi@3

  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE3(result);
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v14 = 4 * *a1;
      *a1 = 4
          * ((LOWORD(dword_6FBBFE50[v14 + 1]) - BYTE1(result)) & ~(unsigned __int16)((dword_6FBBFE50[v14 + 1]
                                                                                    - BYTE1(result)) >> 31)) & 0x3E0 | (((unsigned __int16)(LOWORD(dword_6FBBFE50[v14 + 2]) - v13) & (unsigned __int16)~(unsigned __int16)((dword_6FBBFE50[v14 + 2] - v13) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v14] - (unsigned __int8)result) & ~((dword_6FBBFE50[v14] - (unsigned __int8)result) >> 31)) >> 3) & 0x1F | 0x8000;
      v15 = *a2;
      v16 = (unsigned __int8)*a2 - v11;
      v17 = BYTE1(v15) - v12;
      v18 = (unsigned __int8)(*a2 >> 16) - v13;
      result = ~(v16 >> 31);
      *a2 = result & v16 | ((v17 & ~(v17 >> 31)) << 8) | ((~(v18 >> 31) & v18) << 16) | (v10 << 24);
    }
    else
    {
      *a1 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v13 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
  }
  return result;
}
