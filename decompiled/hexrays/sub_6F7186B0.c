unsigned int __cdecl sub_6F7186B0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edi@1
  signed int v11; // ecx@2
  int v12; // edx@2
  unsigned int v13; // eax@2
  int v14; // esi@2
  int v15; // eax@3
  int v16; // esi@3
  int v17; // eax@3
  int v18; // edi@6
  signed int v19; // ebp@6
  int v20; // ecx@6
  int v21; // esi@6

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = result >> 16;
    v14 = (unsigned __int8)v13;
    if ( v10 >> 7 )
    {
      v18 = 4 * *a1;
      v19 = dword_6FBBFE50[v18] - v11;
      v20 = ((dword_6FBBFE50[v18 + 2] - (unsigned __int8)v13) & ~((dword_6FBBFE50[v18 + 2] - (unsigned __int8)v13) >> 31)) << 7;
      LOWORD(v20) = v20 & 0x7C00;
      v21 = 4 * ((dword_6FBBFE54[v18] - v12) & ~((dword_6FBBFE54[v18] - v12) >> 31));
      LOWORD(v21) = v21 & 0x3E0;
      v17 = v21 | v20 | ((v19 & ~(v19 >> 31)) >> 3) & 0x1F;
      LOWORD(v17) = v17 | 0x8000;
      *a1 = v17;
    }
    else
    {
      v15 = 4 * v12;
      v16 = v14 << 7;
      LOWORD(v15) = 4 * v12 & 0x3E0;
      LOWORD(v16) = v16 & 0x7C00;
      v17 = (v11 >> 3) | v16 | v15;
      *a1 = v17;
    }
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v17;
    *a1 = result;
  }
  return result;
}
