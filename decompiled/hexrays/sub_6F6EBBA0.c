unsigned int __cdecl sub_6F6EBBA0(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ST18_4@2
  int v12; // ST1C_4@2
  int v13; // eax@2
  signed int v14; // ebx@2
  signed int v15; // ecx@2
  int v16; // ebx@3
  int v17; // eax@3
  int v18; // esi@3
  int v19; // edx@3
  int v20; // edx@6
  signed int v21; // esi@6
  signed int v22; // ecx@6
  signed int v23; // ebx@6
  unsigned __int16 v24; // ax@6

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = (unsigned __int8)(result >> 16);
    v14 = (v12 * a6 >> 7) - 255;
    v15 = (v11 * a5 >> 7) - 255;
    if ( v10 >> 7 )
    {
      v20 = 4 * *a1;
      v21 = ((((v15 >> 31) & v15) + 255) >> 1) + (dword_6FBBFE50[v20] >> 1) - 255;
      v22 = ((((v14 >> 31) & v14) + 255) >> 1) + (dword_6FBBFE50[v20 + 1] >> 1) - 255;
      v23 = (((((v13 * a7 >> 7) - 255) & (((v13 * a7 >> 7) - 255) >> 31)) + 255) >> 1)
          + (dword_6FBBFE50[v20 + 2] >> 1)
          - 255;
      v24 = (4 * ((v22 >> 31) & v22) + 1020) & 0x3E0 | ((((unsigned __int16)v23 & (unsigned __int16)(v23 >> 31)) + 255) << 7) & 0x7C00 | (((v21 & (v21 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v19 = v24;
      *a1 = v24;
    }
    else
    {
      v16 = 4 * ((v14 >> 31) & v14) + 1020;
      LOWORD(v16) = v16 & 0x3E0;
      v17 = (((((a7 * v13 >> 7) - 255) >> 31) & ((a7 * v13 >> 7) - 255)) + 255) << 7;
      LOWORD(v17) = v17 & 0x7C00;
      v18 = v17 | v16 | ((((v15 >> 31) & v15) + 255) >> 3) & 0x1F;
      *a1 = v18;
      v19 = (signed __int16)v18;
    }
    *a2 = dword_6FCBFE50[v19];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
