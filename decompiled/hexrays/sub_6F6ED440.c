unsigned int __cdecl sub_6F6ED440(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  signed int v11; // edx@2
  unsigned int v12; // esi@2
  signed int v13; // eax@2
  int v14; // edx@3
  signed int v15; // eax@3
  int v16; // edx@3
  int v17; // ecx@3
  unsigned __int16 v18; // ax@6

  result = dword_6FBBFE40(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v13 = (unsigned __int8)(result >> 16);
    if ( v12 )
    {
      v18 = 4 * ((dword_6FBBFE54[4 * *a1] >> 1) + (v11 >> 1)) & 0x3E0 | (((dword_6FBBFE50[4 * *a1] >> 1) + (v10 >> 1)) >> 3) & 0x1F | (((unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1) + (unsigned __int16)(v13 >> 1)) << 7) & 0x7C00 | 0x8000;
      v17 = v18;
      *a1 = v18;
    }
    else
    {
      v14 = 4 * v11;
      v15 = v13 << 7;
      LOWORD(v14) = v14 & 0x3E0;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = (v10 >> 3) | v15 | v14;
      *a1 = v16;
      v17 = (signed __int16)v16;
    }
    result = (unsigned int)a2;
    *a2 = dword_6FCBFE50[v17];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
