unsigned int __cdecl sub_6F6EC8B0(_WORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  signed int v11; // edx@2
  unsigned int v12; // esi@2
  signed int v13; // eax@2
  int v14; // edx@3
  signed int v15; // eax@3
  int v16; // edi@6
  signed int v17; // ecx@6
  signed int v18; // eax@6

  result = dword_6FBBFE40(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v13 = (unsigned __int8)(result >> 16);
    if ( v12 )
    {
      v16 = 4 * *a1;
      v17 = dword_6FBBFE50[v16] + (v10 >> 2) - 255;
      v18 = dword_6FBBFE58[v16] + (v13 >> 2) - 255;
      LOWORD(v17) = (4
                   * (((dword_6FBBFE54[v16] + (v11 >> 2) - 255) >> 31) & (LOWORD(dword_6FBBFE54[v16]) + (v11 >> 2) - 255))
                   + 1020) & 0x3E0 | ((((unsigned __int16)(v18 >> 31) & (unsigned __int16)v18) + 255) << 7) & 0x7C00 | ((((v17 >> 31) & v17) + 255) >> 3) & 0x1F | 0x8000;
      result = (unsigned __int16)v17;
      *a1 = v17;
    }
    else
    {
      v14 = 4 * v11;
      v15 = v13 << 7;
      LOWORD(v14) = v14 & 0x3E0;
      LOWORD(v15) = v15 & 0x7C00;
      result = (v10 >> 3) | v14 | v15;
      *a1 = result;
      result = (signed __int16)result;
    }
    *a2 = dword_6FCBFE50[result];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
