unsigned int __cdecl sub_6F6BE8B0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // edi@2
  signed int v11; // ecx@2
  signed int v12; // esi@6
  int v13; // eax@6
  signed int v14; // ebp@6
  unsigned int v15; // edx@6
  signed int v16; // ebp@6
  int v17; // [sp+14h] [bp-28h]@2

  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE1(result);
    v17 = BYTE3(result);
    v11 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v12 = (signed int)(unsigned __int8)result >> 2;
      v13 = 4 * *a1;
      v14 = dword_6FBBFE50[v13 + 2] + (v11 >> 2) - 255;
      *a1 = (4
           * (((dword_6FBBFE50[v13 + 1] + (v10 >> 2) - 255) >> 31) & (LOWORD(dword_6FBBFE50[v13 + 1]) + (v10 >> 2) - 255))
           + 1020) & 0x3E0 | ((((unsigned __int16)v14 & (unsigned __int16)(v14 >> 31)) + 255) << 7) & 0x7C00 | ((((v12 + dword_6FBBFE50[v13] - 255) & ((v12 + dword_6FBBFE50[v13] - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v15 = *a2;
      v16 = v12 + (unsigned __int8)*a2 - 255;
      *a2 = (((v16 >> 31) & v16) + 255) | ((((((v10 >> 2) + BYTE1(v15) - 255) >> 31) & ((v10 >> 2) + BYTE1(v15) - 255))
                                          + 255) << 8) | (((((v11 >> 2) + (unsigned __int8)(*a2 >> 16) - 255) & (((v11 >> 2) + (unsigned __int8)(*a2 >> 16) - 255) >> 31))
                                                         + 255) << 16) | (v17 << 24);
    }
    else
    {
      *a1 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v11 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
