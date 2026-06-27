unsigned int __cdecl sub_6F7184B0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  signed int v11; // edx@2
  signed int v12; // esi@2
  int v13; // eax@3
  signed int v14; // esi@3
  int v15; // eax@3
  int v16; // eax@6
  signed int v17; // ecx@6
  signed int v18; // esi@6
  signed int v19; // edx@6
  int v20; // esi@6
  int v21; // edx@6

  result = dword_6FBBFE44(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v16 = 4 * *a1;
      v17 = dword_6FBBFE50[v16] + (v10 >> 2) - 255;
      v18 = dword_6FBBFE58[v16] + (v12 >> 2) - 255;
      v19 = dword_6FBBFE54[v16] + (v11 >> 2) - 255;
      v20 = (((v18 >> 31) & v18) + 255) << 7;
      LOWORD(v20) = v20 & 0x7C00;
      v21 = 4 * ((v19 >> 31) & v19) + 1020;
      LOWORD(v21) = v21 & 0x3E0;
      v15 = v21 | v20 | ((((v17 >> 31) & v17) + 255) >> 3) & 0x1F;
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
