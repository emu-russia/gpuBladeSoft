unsigned int __cdecl sub_6F718880(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  int v11; // edx@2
  int v12; // esi@2
  int v13; // eax@3
  int v14; // esi@3
  int v15; // eax@3
  int v16; // eax@6
  signed int v17; // edx@6
  int v18; // edi@6
  int v19; // edx@6

  result = dword_6FBBFE44(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v16 = 4 * *a1;
      v17 = dword_6FBBFE50[v16 + 1] + v11 - 255;
      v18 = (((dword_6FBBFE50[v16 + 2] + v12 - 255) & ((dword_6FBBFE50[v16 + 2] + v12 - 255) >> 31)) + 255) << 7;
      LOWORD(v18) = v18 & 0x7C00;
      v19 = 4 * ((v17 >> 31) & v17) + 1020;
      LOWORD(v19) = v19 & 0x3E0;
      v15 = v19 | v18 | (((((dword_6FBBFE50[v16] + v10 - 255) >> 31) & (dword_6FBBFE50[v16] + v10 - 255)) + 255) >> 3) & 0x1F;
      LOWORD(v15) = v15 | 0x8000;
      *a1 = v15;
    }
    else
    {
      v13 = 4 * BYTE1(result);
      v14 = v12 << 7;
      LOWORD(v13) = 4 * v11 & 0x3E0;
      LOWORD(v14) = v14 & 0x7C00;
      v15 = (v10 >> 3) | v14 | v13;
      *a1 = v15;
    }
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v15;
    *a1 = result;
  }
  return result;
}
