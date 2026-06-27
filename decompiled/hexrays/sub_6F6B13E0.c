unsigned int __cdecl sub_6F6B13E0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@3
  int v11; // edi@3
  int v12; // ebx@3
  int v13; // ecx@3
  int v14; // esi@6
  signed int v15; // ebp@6
  signed int v16; // ST1C_4@6
  unsigned int v17; // eax@6
  signed int v18; // esi@6
  signed int v19; // ebx@6
  signed int v20; // ebp@6

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE40(a8, a9);
    if ( BYTE3(result) & 0x40 )
    {
      v10 = BYTE3(result);
      v11 = (unsigned __int8)result;
      v12 = BYTE1(result);
      v13 = (unsigned __int8)(result >> 16);
      if ( (unsigned int)BYTE3(result) >> 7 )
      {
        v14 = 4 * *a1;
        v15 = v13 + dword_6FBBFE50[v14 + 2] - 255;
        v16 = BYTE1(result) + dword_6FBBFE50[v14 + 1] - 255;
        *a1 = (4 * (v16 & (v16 >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)v15 & (unsigned __int16)(v15 >> 31)) + 255) << 7) & 0x7C00 | (((((unsigned __int8)result + dword_6FBBFE50[v14] - 255) & (((unsigned __int8)result + dword_6FBBFE50[v14] - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        v17 = *a2;
        v18 = v11 + (unsigned __int8)*a2 - 255;
        v19 = v12 + BYTE1(v17) - 255;
        v20 = v13 + (unsigned __int8)(*a2 >> 16) - 255;
        result = v18 >> 31;
        *a2 = (((v18 >> 31) & v18) + 255) | (((v20 & (v20 >> 31)) + 255) << 16) | ((((v19 >> 31) & v19) + 255) << 8) | (v10 << 24);
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
