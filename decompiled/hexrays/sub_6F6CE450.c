unsigned int __cdecl sub_6F6CE450(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // edx@1
  unsigned int result; // eax@1
  int v12; // ebp@2
  int v13; // ecx@2
  int v14; // edx@2
  signed int v15; // edi@2
  signed int v16; // edi@3
  int v17; // ecx@3
  int v18; // edx@3
  int v19; // esi@6
  int v20; // ebx@6
  int v21; // eax@6
  int v22; // ebp@6
  signed int v23; // edx@6
  int *v24; // ecx@6
  signed int v25; // eax@6
  int v26; // eax@6
  signed int v27; // ecx@6
  signed int v28; // ebx@6
  signed int v29; // esi@6
  int v30; // [sp+1Ch] [bp-20h]@2

  v9 = dword_6FBBFE44(a8, a9);
  v10 = v9;
  result = v9 >> 24;
  if ( result & 0x40 )
  {
    v12 = (unsigned __int8)v10;
    v13 = BYTE1(v10);
    v30 = (unsigned __int8)result;
    v14 = (unsigned __int8)(v10 >> 16);
    v15 = (v12 * a5 >> 7) - 255;
    if ( (unsigned int)(unsigned __int8)result >> 7 )
    {
      v19 = (((v15 >> 31) & v15) + 255) >> 1;
      v20 = (((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255) >> 1;
      v21 = 4 * *a1;
      v22 = (((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255) >> 1;
      v23 = dword_6FBBFE50[v21];
      v24 = &dword_6FBBFE50[v21];
      v25 = v22 + (dword_6FBBFE50[v21 + 2] >> 1) - 255;
      *a1 = (4 * (((v20 + (v24[1] >> 1) - 255) >> 31) & (v20 + (v24[1] >> 1) - 255)) + 1020) & 0x3E0 | ((((unsigned __int16)v25 & (unsigned __int16)(v25 >> 31)) + 255) << 7) & 0x7C00 | ((((v19 + (v23 >> 1) - 255) & ((v19 + (v23 >> 1) - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v26 = *a2;
      v27 = v20 + ((signed int)BYTE1(v26) >> 1) - 255;
      v28 = v22 + (((unsigned int)*a2 >> 17) & 0x7F) - 255;
      v29 = v19 + ((*a2 >> 1) & 0x7F) - 255;
      result = v29 >> 31;
      *a2 = (((v29 >> 31) & v29) + 255) | ((((v27 >> 31) & v27) + 255) << 8) | (((v28 & (v28 >> 31)) + 255) << 16) | (v30 << 24);
    }
    else
    {
      v16 = ((v15 >> 31) & v15) + 255;
      v17 = ((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255;
      v18 = ((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255;
      result = (v16 >> 3) & 0x1F;
      *a1 = ((_WORD)v18 << 7) & 0x7C00 | result | 4 * v17 & 0x3E0;
      *a2 = (v17 << 8) | (v18 << 16) | v16 | (v30 << 24);
    }
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
