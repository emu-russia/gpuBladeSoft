unsigned int __cdecl sub_6F6C3A40(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@2
  signed int v11; // ecx@6
  signed int v12; // ST1C_4@6
  signed int v13; // esi@6
  unsigned int v14; // edi@6

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE3(result);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v11 = (signed int)(unsigned __int8)(result >> 16) >> 1;
      v12 = (signed int)(unsigned __int8)result >> 1;
      v13 = (signed int)BYTE1(result) >> 1;
      *a1 = ((v12 + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | (((_WORD)v11
                                                                   + (unsigned __int16)(dword_6FBBFE58[4 * *a1] >> 1)) << 7) & 0x7C00 | 4 * (v13 + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0 | 0x8000;
      v14 = *a2;
      result = *a2 >> 17;
      *a2 = ((((signed int)*a2 >> 1) & 0x7F) + v12) | (((result & 0x7F) + v11) << 16) | ((((signed int)BYTE1(v14) >> 1)
                                                                                        + v13) << 8) | (v10 << 24);
    }
    else
    {
      *a1 = 4 * BYTE1(result) & 0x3E0 | ((unsigned __int8)(result >> 16) << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
