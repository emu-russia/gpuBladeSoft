unsigned int __cdecl sub_6F6B7FE0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@3
  int v11; // edi@3
  int v12; // ebx@3
  int v13; // ecx@3
  int v14; // esi@6
  unsigned int v15; // eax@6
  signed int v16; // ebp@6
  signed int v17; // edi@6

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE44(a8, a9);
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
        result = ~(v16 >> 31);
        *a2 = result & v16 | ((((unsigned __int8)(*a2 >> 16) - v13) & ~(((unsigned __int8)(*a2 >> 16) - v13) >> 31)) << 16) | ((v17 & ~(v17 >> 31)) << 8) | (v10 << 24);
      }
      else
      {
        *a1 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v13 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
        *a2 = result;
      }
    }
  }
  return result;
}
