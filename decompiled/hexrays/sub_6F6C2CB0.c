unsigned int __cdecl sub_6F6C2CB0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@2
  signed int v11; // ecx@2
  signed int v12; // ebx@3
  signed int v13; // ecx@3
  signed int v14; // edi@3
  int v15; // esi@3
  signed int v16; // ebp@3
  signed int v17; // ST1C_4@3
  unsigned int v18; // eax@3
  signed int v19; // esi@3
  signed int v20; // ebx@3
  signed int v21; // ebp@3

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE3(result);
    v11 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v12 = (signed int)BYTE1(result) >> 2;
      v13 = v11 >> 2;
      v14 = (signed int)(unsigned __int8)result >> 2;
      v15 = 4 * *a1;
      v16 = v13 + dword_6FBBFE50[v15 + 2] - 255;
      v17 = v12 + dword_6FBBFE50[v15 + 1] - 255;
      *a1 = (4 * (v17 & (v17 >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)v16 & (unsigned __int16)(v16 >> 31)) + 255) << 7) & 0x7C00 | ((((v14 + dword_6FBBFE50[v15] - 255) & ((v14 + dword_6FBBFE50[v15] - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v18 = *a2;
      v19 = v14 + (unsigned __int8)*a2 - 255;
      v20 = v12 + BYTE1(v18) - 255;
      v21 = v13 + (unsigned __int8)(*a2 >> 16) - 255;
      result = v19 >> 31;
      *a2 = (((v19 >> 31) & v19) + 255) | (((v21 & (v21 >> 31)) + 255) << 16) | ((((v20 >> 31) & v20) + 255) << 8) | (v10 << 24);
    }
    else
    {
      *a1 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v11 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
  }
  return result;
}
